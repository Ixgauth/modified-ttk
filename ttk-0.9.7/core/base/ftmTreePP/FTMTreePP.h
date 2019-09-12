/// \ingroup base
/// \class ttk::FTMTreePP
/// \author Charles Gueunet <charles.gueunet@lip6.fr>
/// \date 2017-08-03
///
///\brief TTK processing package that add persistance pairs features
// to the contour tree package.
///
///\param dataType Data type of the input scalar field (char, float,
/// etc.).
///
/// \sa ttkPersistenceDiagram.cpp %for a usage example.

#ifndef FTMTREE_PP_H
#define FTMTREE_PP_H

#include "FTMTree.h"
#include <vtkDataArray.h>
#include <vtkDataSet.h>
#include <vtkPointSet.h>
#include <ttkTopologicalSimplificationHelper.h>
// #include <vtkPolyDataToImageStencil.h>
#include <vtkImageData.h>
// #include <vtkImageStencilToImage.h>

namespace ttk
{
   namespace ftm
   {
     /**
      * Compute the persistence pairs of a function on a triangulation.
      * TTK assumes that the input dataset is made of only one connected component.
      */
      class FTMTreePP : public FTMTree
      {
        private:
         std::vector<AtomicUF*> nodesUF_;
         vtkDataArray* inputCriticalPoints_;
         vtkDataArray* inputCriticalTypes_;
         vtkDataSet* inputFullField_;
         int* critTypesFull;
         double* inputCriticalPointsDouble_;
         bool computeByVolume_;
         SimplexId numberOfCritPoints_;
         SimplexId numberOfVertices_;

        public:
         FTMTreePP();
         virtual ~FTMTreePP();

         template <typename scalarType>
         void computePersistencePairs(std::vector<std::tuple<SimplexId, SimplexId, scalarType>>& pairs,
                                      const bool jt);

         //all of the critical points of the system
         inline int setInputTreeCritialPoints(vtkDataArray* data){
            inputCriticalPoints_ = data;
            return 0;
         }

         //input crtical types is only the list of critical types for each critical point. basically is only the size of the number of critical points
         inline int setInputCriticalTypes(vtkDataArray* data){
            inputCriticalTypes_ = data;
            return 0;
         }

         // critical types full is set in ttk Vol Persistence Diagram and is a full sized list of scalars all set to negative one
         //except for the critical points which are set to their critical type. This makes it easy to find the critical type of a given
         //critical point
         inline int setCritTypesFull(int* data)
         {
            critTypesFull = data;
            return 0;
         }
         //input full field is simply the overall vtkDataSet of the whole input image to the volume persistence diagram
         inline int setFullInputField(vtkDataSet* data){
            inputFullField_=data;
            return 0;
         }

         //this bool will be set to check if we are working on a normal persistence diagram or on a volume persistence diagram
         //0 will be the default and will be for the normal version so that that filter does not need to be chaged
         //should be set to on in volumer persistence diagram
         inline int setPersistenceType(bool type){
            computeByVolume_= type;
            return 0;
         }

         inline int setNumberOfCritPoints(SimplexId numberOfCritPoints){
            numberOfCritPoints_=numberOfCritPoints;
            return 0;
         }
         inline int setNumberOfVertices(SimplexId numberOfVertices){
            numberOfVertices_=numberOfVertices;
            return 0;
         }

        protected:
         template <typename scalarType>
         void computePairs(ftm::FTMTree_MT* tree,
                           std::vector<std::tuple<SimplexId, SimplexId, scalarType>>& pairs);

         template <typename scalarType>
         void sortPairs(ftm::FTMTree_MT* tree,
                        std::vector<std::tuple<SimplexId, SimplexId, scalarType>>& pairs);

         void addPendingNode(const idNode parentNode, const idNode toAdd)
         {
            // Trick, we use the arc list to maintaint nodes
            // coming to this UF.
            nodesUF_[parentNode]->find()->addArcToClose(toAdd);
         }

         idNode countPendingNode(const idNode current)
         {
            return nodesUF_[current]->find()->getOpenedArcs().size();
         }


         template <typename scalarType>
         SimplexId getMostPersistVert(const idNode current, ftm::FTMTree_MT* tree)
         {
            SimplexId  minVert = tree->getNode(current)->getVertexId();
            AtomicUF* uf      = nodesUF_[current]->find();

            for (const auto nodeid : uf->getOpenedArcs()) {
               const SimplexId vtmp = nodesUF_[nodeid]->find()->getExtrema();
               if (tree->compLower(vtmp, minVert)) {
                  minVert = vtmp;
               }
            }

            return minVert;
         }

         void clearPendingNodes(const idNode current)
         {
            nodesUF_[current]->find()->clearOpenedArcs();
         }

         //inputs are: the current node we are looking at, a vector to house the pairs we are creating, the full tree we are working on and the null vertex
         template <typename scalarType>
         void createPairs(const idNode current,
                          std::vector<std::tuple<SimplexId, SimplexId, scalarType>>& pairs,
                          ftm::FTMTree_MT* tree,
                          const SimplexId   mp)
         {
            //to start we will find the AtomicUF (defined data structure for this namespace) that curresponds to the current node that we are looking at
            AtomicUF*        uf      = nodesUF_[current]->find();

            //get the ID of the current node in the tree
            const SimplexId   curVert = tree->getNode(current)->getVertexId();

            //find the value of the vertex that we just found the vertex id for
            const scalarType curVal  = getValue<scalarType>(curVert);

            double icpd [numberOfCritPoints_];

            for(int j = 0; j < numberOfCritPoints_; j++)
            {
               icpd[j] = inputCriticalPoints_->GetTuple1(j);
            }
            inputCriticalPointsDouble_=icpd;

            //for each of the arcs that are connected to the current uf that we have just created
            for (const auto nodeid : uf->getOpenedArcs()) {

               //create a temporary vertex that is populated with the extrema of the node that we are working on currently
               const SimplexId tmpVert = nodesUF_[nodeid]->find()->getExtrema();

               std::cout << "current vertex id:  " << curVert << " and has a type of: " << critTypesFull[curVert] << std::endl;
               std::cout << "temp vertex id is:  " << tmpVert << " and has a type of: " << critTypesFull[tmpVert] << std::endl;
               //merge the data_ structures for the two uf's that we have just created (one for the node that was input and one for the one we are working on in the loop)
               AtomicUF::makeUnion(uf, nodesUF_[nodeid]);
               // if(!computeByVolume_)
               // {
                  //if the temporary vertex doesn't equal the null vertex that we input
                  if (tmpVert != mp) {
                     //create a new temp value that is equal to the value of the vertex that we are working on 
                     const scalarType tmpVal = getValue<scalarType>(tmpVert);

                     //add to the input pairs vector a new pair between the input vertex and the extrema that has a value that is equal to the abs value between the two 
                     if (scalars_->isLower(tmpVert, curVert)) {

                        pairs.emplace_back(tmpVert, curVert, curVal - tmpVal);
                     } else {
                        pairs.emplace_back(tmpVert, curVert, tmpVal - curVal);
                     }
                  }
               // }
               /*
               This is where we would change the FTMTreePP class in the case that we are working on the volume persistence diagram. The goal in the ead would be to 
               have this version run in the case of volume persistence and the above version still be able to run in the case of a normal persistence diagram call being made.
               This will currently intake the full field and information about it and send it through the topological simplification helper filter. This all works.
               The goal moving forward is to make it so one can close and mesh voxelize the output data to get the volume. This can theoretically be placed into the same
               pairs structure seen above in place of the tmp val/cur val calculation as the volume will be input in place of the persistence. Basically the same idea
               as the main method at /home/ian/ttk/vtkWork/TestObtainCriticalPoints/main.cxx.

               The only thing that I want to say here is that one will need to do this for each of the pairs in the tree. Make sure that the point you are sending into the 
               topological simplification helper is the min or the max and not the saddle point. I had hoped that the min and max would only be in either the temp vert 
               or the current vert but they seem to be random. So there will need to be a check before setting the criticalPointsToRemove (by creating the helper double)
               to see whether the cur vert or tmp vert is the one with the min or max. Currently this is being done by getting the first point where the current vert doesn't equal to one
               but it is only working on one test point. This check will need to be made at some point for the system to work correctly.
               */
               if(computeByVolume_)
               {
                  if (tmpVert != mp) {
                     if(critTypesFull[curVert] != 1)
                     {
                        std::cout << inputFullField_->GetNumberOfPoints() << std::endl;
                        double helper[1];
                        helper[0] = curVert;
                        vtkSmartPointer<ttkTopologicalSimplificationHelper> topologicalSimplificationHelper =
                           vtkSmartPointer<ttkTopologicalSimplificationHelper>::New();

                        vtkSmartPointer<vtkUnstructuredGrid> dataSet =
                           vtkSmartPointer<vtkUnstructuredGrid>::New();

                        topologicalSimplificationHelper->SetInputData(0, inputFullField_);
                        topologicalSimplificationHelper->SetInputData(1, dataSet);

                        topologicalSimplificationHelper->setNumberOfCriticalPoints(numberOfCritPoints_);
                        topologicalSimplificationHelper->setInputVerticesNumbers(inputCriticalPointsDouble_);

                        topologicalSimplificationHelper->setCriticalPointsToRemove(helper);
                        topologicalSimplificationHelper->setNumberOfCriticalPointsToRemove(1);

                        topologicalSimplificationHelper->setCriticalType(critTypesFull[curVert]);

                        topologicalSimplificationHelper->Update();

                        vtkSmartPointer<vtkDataSet> simplifiedImage = topologicalSimplificationHelper->GetOutput();

                        std::cout << "Final Number of Points: " << simplifiedImage->GetNumberOfPoints() << std::endl;

                     }
                  }
               }
            }
         }

      };
   }
}

/*
This is the same code as what is seen inside /home/ian/ttk/vtkWork/TestObtainCriticalPoints/main.cxx
I could not use it in this file due to the fact that I have been unable to change the CMake files to allow me to include vtkPolyDataToImageStencil 
or any of the other stenciling header files that are provided by vtk. However, the goal would be to use these classes to take the dataset that is output
by Topological Simplification Helper and perform mesh voxelization to get the volume of the given peak or valley.
*/
// namespace
// {
//    double obtainVolumeFromClosedMeshFTM(vtkSmartPointer<vtkPolyData> polyData, double spacingFactor)
//    {
//       vtkSmartPointer<vtkImageData> whiteImage =
//        vtkSmartPointer<vtkImageData>::New();

//      // get us the bounds of the sphere in x,y,z (both min and max)
//      double bounds[6];
//      polyData->GetBounds(bounds);

//      double spacing[3];
//      spacing[0] =  spacingFactor;
//      spacing[1] =  spacingFactor;
//      spacing[2] =  spacingFactor;
//      whiteImage->SetSpacing(spacing);
//      double finalSpaceFactor = spacing[0]*spacing[1]*spacing[2];

//      // compute dimensions (size of max - min in each direction)
//      int dim[3];
//      for (int i = 0; i < 3; i++)
//      {
//        dim[i] = static_cast<int>(ceil((bounds[i * 2 + 1] - bounds[i * 2]) / spacing[i]));
//      }

//      whiteImage->SetDimensions(dim);
//      whiteImage->SetExtent(0, dim[0] - 1, 0, dim[1] - 1, 0, dim[2] - 1);

//      double origin[3];
//      origin[0] = bounds[0] + spacing[0] / 2;
//      origin[1] = bounds[2] + spacing[1] / 2;
//      origin[2] = bounds[4] + spacing[2] / 2;

//      whiteImage->SetOrigin(origin);
//      whiteImage->AllocateScalars(VTK_UNSIGNED_CHAR,1);

//      //white if in black if outside the volume
//      unsigned char inval = 255;

//      vtkIdType count = whiteImage->GetNumberOfPoints();

//      for (vtkIdType i = 0; i < count; ++i)
//      {
//        whiteImage->GetPointData()->GetScalars()->SetTuple1(i, inval);
//      }


//      vtkSmartPointer<vtkPolyDataToImageStencil> pol2stenc =
//        vtkSmartPointer<vtkPolyDataToImageStencil>::New();

//      pol2stenc->SetInputData(polyData);
//      pol2stenc->SetOutputOrigin(origin);
//      pol2stenc->SetOutputSpacing(spacing);
//      pol2stenc->SetOutputWholeExtent(whiteImage->GetExtent());
//      pol2stenc->Update();

//      vtkSmartPointer<vtkImageStencilToImage> sten2im =
//        vtkSmartPointer<vtkImageStencilToImage>::New();

//      vtkSmartPointer<vtkImageData> imageData =
//        vtkSmartPointer<vtkImageData>::New();


//      sten2im->SetInputConnection(pol2stenc->GetOutputPort());
//      sten2im->SetOutsideValue(0);
//      sten2im->SetInsideValue(255);
//      sten2im->SetOutput(imageData);
//      sten2im->Update();

//      int* dimensions = imageData -> GetDimensions();

//      cout << "Dimensions:  x: " << dimensions[0] << " y: " << dimensions[1] << " z: " << dimensions[2] << endl;

//      cout << "Number of points: " << imageData -> GetNumberOfPoints() << endl;
//      cout << "Number of cells: " << imageData->GetNumberOfPoints() << endl;

//      int numberOfPointsAboveZero = 0;

//      for(int z = 0; z < dimensions[2]; z++)
//      {
//        for(int y = 0; y < dimensions[1]; y++)
//        {
//          for(int x = 0; x < dimensions[0]; x++)
//          {
//            double pixel = imageData->GetScalarComponentAsDouble(x, y, z, 0);
//            if(pixel > 127)
//            {
//              numberOfPointsAboveZero++;
//            }
//          }
//        }
//      }
//      cout << numberOfPointsAboveZero << endl;

//      double output = numberOfPointsAboveZero*finalSpaceFactor;

//      return output;

//    }

//    vtkSmartPointer<vtkPolyData> obtainClosedPolyDataFTM(vtkSmartPointer<vtkUnstructuredGrid> unstructuredGrid)
//    {
//      vtkSmartPointer<vtkGeometryFilter> geometryFilter = 
//      vtkSmartPointer<vtkGeometryFilter>::New();

//      geometryFilter->SetInputData(unstructuredGrid);
//      geometryFilter->Update();

//      vtkSmartPointer<vtkPolyData> input = geometryFilter->GetOutput();

//      vtkSmartPointer<vtkFillHolesFilter> fillHolesFilter =
//        vtkSmartPointer<vtkFillHolesFilter>::New();
//      fillHolesFilter->SetInputData(input);
//      fillHolesFilter->SetHoleSize(100000.0);
//      fillHolesFilter->Update();

//      vtkSmartPointer<vtkPolyData> output = fillHolesFilter->GetOutput();

//      return output;
//    }

// }

template <typename scalarType>
void 
ttk::ftm::FTMTreePP::computePersistencePairs(std::vector<std::tuple<
SimplexId, SimplexId, scalarType>>& pairs,
                                             const bool jt)
{


   //create a new tree of type FTMTree_MT and then check if it is equal to the input boolean jt. If so we should call getJoinTree, if not call the latter function
   //these seem to be two different types of in-built trees that are housed in the namespace
   //this should check if the currently housed tree is the join or split tree and will get the other tree to merge to it
   //this should, if i'm reading it correctly, create the fully formed tree
   ftm::FTMTree_MT* tree = jt ? getJoinTree() : getSplitTree();

   //clear all of the nodes in the atomicUF vector which seems to house all of the nodes?
   nodesUF_.clear();
   //clear all of the already computed persistence pairs
   pairs.clear();
   //get the number of nodes in the tree and set the size of the nodesUF vector to be equal to that many nodes
   nodesUF_.resize(tree->getNumberOfNodes(), nullptr);
   //alocate enough space so that we can push all of the pairs onto the vector
   pairs.reserve(tree->getNumberOfLeaves());

   //create a primitive which will be able to hold the number of nodes
   const auto nbNodes = tree->getNumberOfNodes();


   //for each of the nodes in the tree we will run through and create an atomicUF
   for (idNode nid = 0; nid < nbNodes; ++nid) {
      nodesUF_[nid] = new AtomicUF(tree->getNode(nid)->getVertexId());
   }

   //send the tree along with the empty vector that will house the pairs along to allow for the pairs to be computed
   computePairs<scalarType>(tree, pairs);

   sortPairs<scalarType>(tree, pairs);

   // destruct
   for (AtomicUF* uf : nodesUF_) {
      delete uf;
      uf = nullptr;
   }
}

template <typename scalarType>
void ttk::ftm::FTMTreePP::computePairs(ftm::FTMTree_MT* tree,
                                  std::vector<std::tuple<SimplexId, SimplexId, 
scalarType>>& pairs)
{

   //lambda function that will get the parent node of the node that is input into the function
   auto getParentNode = [&](const idNode current) {
      //first, the code will look at the current node and find the super arc that the current node is attached to
      const idSuperArc parentArc = tree->getNode(current)->getUpSuperArcId(0);
      //return the node that is on the other side of the super arc from the current node
      return tree->getSuperArc(parentArc)->getUpNodeId();
   };

   ::std::queue<idNode> toSee;

   // start at the leaves
   auto& vectLeaves = tree->getLeaves();

   //for each leaf on the tree we will add to the queue the id of that leaf in the vector 
   for (auto nid : vectLeaves) {
      toSee.emplace(nid);
   }

   //while there are still members in the queue
   while (!toSee.empty()) {

      //get the current leaf node out of the queue to use
      const idNode current = toSee.front();
      toSee.pop();

      //if the current node doesn't have any super arcs attached to it we will:
      if (!tree->getNode(current)->getNumberOfUpSuperArcs()) {
         //create a new connection 
         //this is also where we compute the value of the PAIR itself
         //we willl likely need to find a way to get new information in order to recalibrate the values so that they work better for our purposes
         createPairs<scalarType>(current, pairs, tree, ftm::nullVertex);

         //clear the uf data structure of the current node's opened arcs
         clearPendingNodes(current);
         continue;
      } else {
         clearPendingNodes(current);
      }

      //find the parent node of the current node
      const idNode parentNode = getParentNode(current);

      // add a superarc between the parent and current node that must be closed later
      addPendingNode(parentNode, current);


      if (countPendingNode(parentNode) == 
tree->getNode(parentNode)->getNumberOfDownSuperArcs()) {
         const SimplexId mostPersist = getMostPersistVert<scalarType>(parentNode, 
tree);
         createPairs<scalarType>(parentNode, pairs, tree, mostPersist);
         nodesUF_[parentNode]->find()->setExtrema(mostPersist);
         toSee.push(parentNode);
      }
   }
}

template <typename scalarType>
void ttk::ftm::FTMTreePP::sortPairs(ftm::FTMTree_MT* tree,
                               std::vector<std::tuple<SimplexId, SimplexId, 
scalarType>>& pairs)
{
   auto comp = [&](const std::tuple<SimplexId, SimplexId, scalarType> a,
                   const std::tuple<SimplexId, SimplexId, scalarType> b) {
       return std::get<2>(a) < std::get<2>(b);
   };

   sort(pairs.begin(), pairs.end(), comp);
}

#endif  // FTMTREE_PP_H
