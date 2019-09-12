#ifndef TTKFTMSTRUCTURES_H
#define TTKFTMSTRUCTURES_H

#include <FTMTree.h>
#include <ttkWrapper.h>

#include <vtkCellData.h>
#include <vtkDataArray.h>
#include <vtkPointData.h>
#include <vtkSmartPointer.h>
#include <vtkType.h>
#include <vtkUnstructuredGrid.h>

#include <vtkDoubleArray.h>
#include <vtkFloatArray.h>
#include <vtkIntArray.h>
#include <vtkCharArray.h>

struct LocalFTM {
   ttk::ftm::FTMTree tree;
   ttk::ftm::idNode  offset;
};

struct WrapperData {
   template <typename vtkArrayType>
   inline vtkSmartPointer<vtkArrayType> initArray(const char* fieldName, size_t nbElmnt)
   {
      vtkSmartPointer<vtkArrayType> arr = vtkSmartPointer<vtkArrayType>::New();
      arr->SetName(fieldName);
      arr->SetNumberOfComponents(1);
      arr->SetNumberOfTuples(nbElmnt);

#ifndef TTK_ENABLE_KAMIKAZE
      if (!arr) {
         std::cerr << "[ttkFTMTree] Error, unable to allocate " << fieldName
              << " the program will likely crash" << std::endl;
      }
#endif
      return arr;
   }

   inline static ttk::CriticalType getNodeType(ttk::ftm::FTMTree_MT&  tree,
                                                const ttk::ftm::idNode nodeId,
                                                ttk::ftm::Params       params)
   {
      const ttk::ftm::Node* node = tree.getNode(nodeId);
      int upDegree{};
      int downDegree{};
      if (params.treeType == ttk::ftm::TreeType::Join or
          params.treeType == ttk::ftm::TreeType::Contour) {
         upDegree   = node->getNumberOfUpSuperArcs();
         downDegree = node->getNumberOfDownSuperArcs();
      } else {
         downDegree = node->getNumberOfUpSuperArcs();
         upDegree   = node->getNumberOfDownSuperArcs();
      }
      int degree = upDegree + downDegree;

      // saddle point
      if (degree > 1) {
         if (upDegree == 2 and downDegree == 1)
            return ttk::CriticalType::Saddle2;
         else if (upDegree == 1 and downDegree == 2)
            return ttk::CriticalType::Saddle1;
         else if (upDegree == 1 and downDegree == 1)
            return ttk::CriticalType::Regular;
         else
            return ttk::CriticalType::Degenerate;
      }
      // local extremum
      else {
         if (upDegree)
            return ttk::CriticalType::Local_minimum;
         else
            return ttk::CriticalType::Local_maximum;
      }
   }
};

struct ArcData : public WrapperData {
   std::vector<ttk::SimplexId>          point_ids;
   vtkSmartPointer<vtkCharArray>   point_regularMask;
   vtkSmartPointer<vtkFloatArray>  point_scalar;
   vtkSmartPointer<ttkSimplexIdTypeArray>    cell_ids;
   vtkSmartPointer<ttkSimplexIdTypeArray>    cell_upNode;
   vtkSmartPointer<ttkSimplexIdTypeArray>    cell_downNode;
   vtkSmartPointer<ttkSimplexIdTypeArray>    cell_sizeArcs;
   vtkSmartPointer<vtkDoubleArray> cell_spanArcs;

   inline int init(std::vector<LocalFTM>& ftmTree, ttk::ftm::Params params)
   {
      ttk::ftm::idSuperArc nbArcs       = 0;
      ttk::ftm::idSuperArc nbNodes      = 0;
      ttk::ftm::idSuperArc samplePoints = 0;
      ttk::SimplexId   nbVerts      = 0;

      for (auto& t : ftmTree) {
         ttk::ftm::FTMTree_MT* tree = t.tree.getTree(params.treeType);
         nbArcs += tree->getNumberOfSuperArcs();
         nbNodes += tree->getNumberOfNodes();
         samplePoints += params.samplingLvl >= 0
                             ? tree->getNumberOfNodes() + (nbArcs * params.samplingLvl)
                             : tree->getNumberOfVertices();
         nbVerts += tree->getNumberOfVertices();
      }

      point_ids.resize(nbVerts, ttk::ftm::nullVertex);
      cell_ids          = initArray<ttkSimplexIdTypeArray>("SegmentationId", samplePoints);
      cell_upNode       = initArray<ttkSimplexIdTypeArray>("upNodeId", samplePoints);
      cell_downNode     = initArray<ttkSimplexIdTypeArray>("downNodeId", samplePoints);
      point_regularMask = initArray<vtkCharArray>(ttk::MaskScalarFieldName, samplePoints);
      point_scalar      = initArray<vtkFloatArray>("Scalar", samplePoints);

      if (params.advStats) {
         if (params.segm) {
            cell_sizeArcs = initArray<ttkSimplexIdTypeArray>("RegionSize", samplePoints);
         }
         cell_spanArcs = initArray<vtkDoubleArray>("RegionSpan", samplePoints);
      }

      return 0;
   }

   inline bool hasPoint(const ttk::SimplexId vertId)
   {
      return point_ids[vertId] != ttk::ftm::nullVertex;
   }

   inline void addPoint(const ttk::SimplexId globalId, const ttk::SimplexId id, const float scalar,
                        const bool reg)
   {
      point_ids[globalId] = id;
      setPoint(id, scalar, reg);
   }

   inline void setPoint(const ttk::SimplexId id, const float scalar, const bool reg)
   {
      point_scalar->SetTuple1(id, scalar);
      point_regularMask->SetTuple1(id, reg);
   }

   inline void fillArrayCell(const ttk::SimplexId pos, const ttk::ftm::idSuperArc arcId,
                             LocalFTM& ftmTree, ttk::Triangulation* triangulation,
                             ttk::ftm::Params params)
   {
      const ttk::ftm::idNode idOffset = ftmTree.offset;
      ttk::ftm::FTMTree_MT*  tree     = ftmTree.tree.getTree(params.treeType);
      ttk::ftm::SuperArc*    arc      = tree->getSuperArc(arcId);

      if (params.normalize) {
         cell_ids->SetTuple1(pos, idOffset + arc->getNormalizedId());
      } else {
         cell_ids->SetTuple1(pos, idOffset + arcId);
      }

      cell_upNode->SetTuple1(pos, arc->getUpNodeId());
      cell_downNode->SetTuple1(pos, arc->getDownNodeId());

      if (params.advStats) {
         if (params.segm) {
            cell_sizeArcs->SetTuple1(pos, tree->getArcSize(arcId));
         }

         float               downPoints[3];
         const ttk::SimplexId downNodeId   = tree->getLowerNodeId(arc);
         const ttk::SimplexId downVertexId = tree->getNode(downNodeId)->getVertexId();
         triangulation->getVertexPoint(downVertexId, downPoints[0], downPoints[1], downPoints[2]);

         float               upPoints[3];
         const ttk::SimplexId upNodeId   = tree->getUpperNodeId(arc);
         const ttk::SimplexId upVertexId = tree->getNode(upNodeId)->getVertexId();
         triangulation->getVertexPoint(upVertexId, upPoints[0], upPoints[1], upPoints[2]);

         cell_spanArcs->SetTuple1(pos, ttk::Geometry::distance(downPoints, upPoints));
      }
   }

   inline void addArray(vtkUnstructuredGrid* skeletonArcs, ttk::ftm::Params params)
   {
      // Some arcs might have been less sampled than the desired value, if they
      // have not enought regular vertices. Here we ensur that we will no keep
      // noise in these arrays.
      const size_t nbPoints = skeletonArcs->GetNumberOfPoints();
      const size_t nbCells  = skeletonArcs->GetNumberOfCells();

      cell_ids->SetNumberOfTuples(nbCells);
      skeletonArcs->GetCellData()->SetScalars(cell_ids);

      cell_upNode->SetNumberOfTuples(nbCells);
      cell_downNode->SetNumberOfTuples(nbCells);
      skeletonArcs->GetCellData()->AddArray(cell_upNode);
      skeletonArcs->GetCellData()->AddArray(cell_downNode);

      if (params.advStats) {
         if (params.segm) {
            cell_sizeArcs->SetNumberOfTuples(nbCells);
            skeletonArcs->GetCellData()->AddArray(cell_sizeArcs);
         }
         cell_spanArcs->SetNumberOfTuples(nbCells);
         skeletonArcs->GetCellData()->AddArray(cell_spanArcs);
      }

      point_scalar->SetNumberOfTuples(nbPoints);
      skeletonArcs->GetPointData()->AddArray(point_scalar);
      point_regularMask->SetNumberOfTuples(nbPoints);
      skeletonArcs->GetPointData()->AddArray(point_regularMask);

      point_ids.clear();
   }
};

struct NodeData : public WrapperData{
   vtkSmartPointer<ttkSimplexIdTypeArray>   ids;
   vtkSmartPointer<ttkSimplexIdTypeArray>   vertIds;
   vtkSmartPointer<ttkSimplexIdTypeArray>   regionSize;
   vtkSmartPointer<ttkSimplexIdTypeArray>   regionSpan;
   vtkSmartPointer<vtkFloatArray> scalars;
   vtkSmartPointer<vtkIntArray>   type;
   int scalarType;

   inline int init(std::vector<LocalFTM>& ftmTree, ttk::ftm::Params params)
   {
      ttk::ftm::idNode numberOfNodes = 0;
      for (auto& t : ftmTree) {
         ttk::ftm::FTMTree_MT* tree = t.tree.getTree(params.treeType);
         numberOfNodes += tree->getNumberOfNodes();
      }

      ids     = initArray<ttkSimplexIdTypeArray>("NodeId", numberOfNodes);
      vertIds = initArray<ttkSimplexIdTypeArray>("VertexId", numberOfNodes);
      type    = initArray<vtkIntArray>("CriticalType", numberOfNodes);
      scalars = initArray<vtkFloatArray>("Scalar", numberOfNodes);

      if (params.advStats) {
         if (params.segm) {
            regionSize = initArray<ttkSimplexIdTypeArray>("RegionSize", numberOfNodes);
         }
         regionSpan = initArray<ttkSimplexIdTypeArray>("RegionSpan", numberOfNodes);
      }

      return 0;
   }

   void setScalarType(const int s)
   {
      scalarType = s;
   }

   inline void fillArrayPoint(ttk::SimplexId arrIdx, const ttk::ftm::idNode nodeId, LocalFTM& ftmTree,
                              vtkDataArray* idMapper, ttk::Triangulation* triangulation,
                              ttk::ftm::Params params)
   {
      const ttk::ftm::idNode   idOffset   = ftmTree.offset;
      ttk::ftm::FTMTree_MT*    tree       = ftmTree.tree.getTree(params.treeType);
      const ttk::ftm::Node*    node       = tree->getNode(nodeId);
      // local (per cc) id
      const ttk::SimplexId l_vertexId = node->getVertexId();
      // global id
      const ttk::SimplexId g_vertexId = idMapper->GetTuple1(l_vertexId);
      float cellScalar = 0;
      switch (scalarType) {
         vtkTemplateMacro({ cellScalar = (float)tree->getValue<VTK_TT>(l_vertexId); });
      }

      ids->SetTuple1(arrIdx, idOffset + nodeId);
      scalars->SetTuple1(arrIdx, cellScalar);
      vertIds->SetTuple1(arrIdx, g_vertexId);
      type->SetTuple1(arrIdx, static_cast<int>(getNodeType(*tree, nodeId, params)));

      if (params.advStats) {
         ttk::ftm::idSuperArc saId = getAdjSa(node);
         if (params.segm) {
            regionSize->SetTuple1(arrIdx, tree->getArcSize(saId));
         }

         ttk::ftm::SuperArc* arc = tree->getSuperArc(saId);

         float               downPoints[3];
         const ttk::SimplexId downNodeId   = tree->getLowerNodeId(arc);
         const ttk::SimplexId downVertexId = tree->getNode(downNodeId)->getVertexId();
         triangulation->getVertexPoint(downVertexId, downPoints[0], downPoints[1], downPoints[2]);

         float               upPoints[3];
         const ttk::SimplexId upNodeId   = tree->getUpperNodeId(arc);
         const ttk::SimplexId upVertexId = tree->getNode(upNodeId)->getVertexId();
         triangulation->getVertexPoint(upVertexId, upPoints[0], upPoints[1], upPoints[2]);

         regionSpan->SetTuple1(arrIdx, ttk::Geometry::distance(downPoints, upPoints));
      }
   }

   inline void addArray(vtkPointData* pointData, ttk::ftm::Params params)
   {
      pointData->AddArray(ids);
      pointData->AddArray(scalars);
      pointData->AddArray(vertIds);
      pointData->SetScalars(type);
      if (params.advStats) {
         if (params.segm) {
            pointData->AddArray(regionSize);
         }
         pointData->AddArray(regionSpan);
      }
   }

  private:

   ttk::ftm::idSuperArc getAdjSa(const ttk::ftm::Node* node)
   {
      if (node->getNumberOfDownSuperArcs() == 1) {
         return node->getDownSuperArcId(0);
      }

      if (node->getNumberOfUpSuperArcs() == 1) {
         return node->getUpSuperArcId(0);
      }

      // Degenerate case, arbitrary choice
      if (node->getNumberOfDownSuperArcs()) {
         return node->getDownSuperArcId(0);
      }

      if (node->getNumberOfDownSuperArcs()) {
         return node->getDownSuperArcId(0);
      }

      // Empty node
#ifndef TTK_ENABLE_KAMIKAZE
      std::cerr << "[ttkFTMTree]: node without arcs:" << node->getVertexId() << std::endl;
#endif
      return ttk::ftm::nullSuperArc;
   }
};

struct VertData: public WrapperData {
   vtkSmartPointer<ttkSimplexIdTypeArray>    ids;
   vtkSmartPointer<ttkSimplexIdTypeArray>    sizeRegion;
   vtkSmartPointer<vtkDoubleArray> spanRegion;
   vtkSmartPointer<vtkCharArray>   typeRegion;

   inline int init(std::vector<LocalFTM>& ftmTrees, ttk::ftm::Params params)
   {
      if (!params.segm)
         return 0;

      ttk::SimplexId numberOfVertices = 0;

      for (auto& t : ftmTrees) {
         ttk::ftm::FTMTree_MT* tree = t.tree.getTree(params.treeType);
         numberOfVertices += tree->getNumberOfVertices();
      }

      ids        = initArray<ttkSimplexIdTypeArray>("SegmentationId", numberOfVertices);
      typeRegion = initArray<vtkCharArray>("RegionType", numberOfVertices);

      if (params.advStats) {
         sizeRegion = initArray<ttkSimplexIdTypeArray>("RegionSize", numberOfVertices);
         spanRegion = initArray<vtkDoubleArray>("RegionSpan", numberOfVertices);
      }

      return 0;
   }

   void fillArrayPoint(const ttk::ftm::idSuperArc arcId, LocalFTM& l_tree,
                       ttk::Triangulation* triangulation, vtkDataArray* idMapper,
                       ttk::ftm::Params params)
   {
      if (!params.segm)
         return;

      ttk::ftm::FTMTree_MT* tree = l_tree.tree.getTree(params.treeType);
      const ttk::ftm::idNode idOffset = l_tree.offset;
      ttk::ftm::SuperArc* arc = tree->getSuperArc(arcId);

      const ttk::ftm::idNode   upNodeId     = arc->getUpNodeId();
      const ttk::ftm::Node*    upNode       = tree->getNode(upNodeId);
      const ttk::SimplexId l_upVertexId = upNode->getVertexId();
      const ttk::SimplexId g_upVertexId = idMapper->GetTuple1(l_upVertexId);
      const ttk::CriticalType upNodeType   = getNodeType(*tree, upNodeId, params);
      float               coordUp[3];
      triangulation->getVertexPoint(l_upVertexId, coordUp[0], coordUp[1], coordUp[2]);

      const ttk::ftm::idNode   downNodeId     = arc->getDownNodeId();
      const ttk::ftm::Node*    downNode       = tree->getNode(downNodeId);
      const ttk::SimplexId           l_downVertexId = downNode->getVertexId();
      const ttk::SimplexId           g_downVertexId = idMapper->GetTuple1(l_downVertexId);
      const ttk::CriticalType downNodeType   = getNodeType(*tree, downNodeId, params);
      float               coordDown[3];
      triangulation->getVertexPoint(l_downVertexId, coordDown[0], coordDown[1], coordDown[2]);

      const ttk::SimplexId    regionSize = tree->getSuperArc(arcId)->getNumberOfRegularNodes();
      const double regionSpan = ttk::Geometry::distance(coordUp, coordDown);

      ttk::ftm::idSuperArc nid = arc->getNormalizedId();

      ttk::ftm::ArcType regionType;
      // RegionType
      if (upNodeType == ttk::CriticalType::Local_minimum &&
          downNodeType == ttk::CriticalType::Local_maximum)
      {
         regionType = ttk::ftm::ArcType::Min_arc;
      }
      else if (upNodeType == ttk::CriticalType::Local_minimum ||
               downNodeType == ttk::CriticalType::Local_minimum)
      {
         regionType = ttk::ftm::ArcType::Min_arc;
      }
      else if (upNodeType == ttk::CriticalType::Local_maximum ||
               downNodeType == ttk::CriticalType::Local_maximum)
      {
         regionType = ttk::ftm::ArcType::Max_arc;
      }
      else if (upNodeType == ttk::CriticalType::Saddle1 &&
               downNodeType == ttk::CriticalType::Saddle1)
      {
         regionType = ttk::ftm::ArcType::Saddle1_arc;
      }
      else if (upNodeType == ttk::CriticalType::Saddle2 &&
               downNodeType == ttk::CriticalType::Saddle2)
      {
         regionType = ttk::ftm::ArcType::Saddle2_arc;
      }
      else
      {
         regionType = ttk::ftm::ArcType::Saddle1_saddle2_arc;
      }

      // fill extrema and regular verts of this arc

      // critical points
      if(params.normalize){
         ids->SetTuple1(g_upVertexId   , idOffset + nid);
         ids->SetTuple1(g_downVertexId , idOffset + nid);
      } else{
         ids->SetTuple1(g_upVertexId   , idOffset + arcId);
         ids->SetTuple1(g_downVertexId , idOffset + arcId);
      }

      if (params.advStats) {
         sizeRegion->SetTuple1(g_upVertexId   , regionSize);
         sizeRegion->SetTuple1(g_downVertexId , regionSize);
         spanRegion->SetTuple1(g_upVertexId   , regionSpan);
         spanRegion->SetTuple1(g_downVertexId , regionSpan);
      }
      typeRegion->SetTuple1(g_upVertexId   , static_cast<char>(regionType));
      typeRegion->SetTuple1(g_downVertexId , static_cast<char>(regionType));

      // regular nodes
      for (const ttk::SimplexId l_vertexId : *arc) {
         const ttk::SimplexId g_vertexId = idMapper->GetTuple1(l_vertexId);
         if (params.normalize) {
            ids->SetTuple1(g_vertexId, idOffset + nid);
         } else {
            ids->SetTuple1(g_vertexId, idOffset + arcId);
         }
         if (params.advStats) {
            sizeRegion->SetTuple1(g_vertexId, regionSize);
            spanRegion->SetTuple1(g_vertexId, regionSpan);
         }
         typeRegion->SetTuple1(g_vertexId, static_cast<char>(regionType));
      }

   }

   void addArray(vtkPointData* pointData, ttk::ftm::Params params)
   {
      if (!params.segm)
         return;

      pointData->SetScalars(ids);

      if (params.advStats) {
         pointData->AddArray(sizeRegion);
         pointData->AddArray(spanRegion);
      }
      pointData->AddArray(typeRegion);
   }
};

#endif /* end of include guard: TTKFTMSTRUCTURES_H */
