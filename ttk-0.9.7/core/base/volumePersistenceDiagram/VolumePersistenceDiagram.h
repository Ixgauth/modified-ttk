/// \ingroup base
/// \class ttk::VolumePersistenceDiagram
/// \author Guillaume Favelier <guillaume.favelier@lip6.fr>
/// \author Julien Tierny <julien.tierny@lip6.fr>
/// \date September 2016.
///
/// \brief TTK processing package for the computation of persistence diagrams.
///
/// This package computes the persistence diagram of the extremum-saddle pairs 
/// of an input scalar field. The X-coordinate of each pair corresponds to its
/// birth, while its smallest and highest Y-coordinates correspond to its birth
/// and death respectively. 
///
/// In practice, each extremity of a persistence pair is represented by its 
/// vertexId and critical type. Based on that, the persistence of the pair 
/// and its 2D embedding can easily be obtained.
///
/// Persistence diagrams are useful and stable concise representations of the 
/// topological features of a data-set. It is useful to fine-tune persistence 
/// thresholds for topological simplification or for fast similarity 
/// estimations for instance. 
///
/// \b Related \b publication \n
/// "Computational Topology: An Introduction" \n
/// Herbert Edelsbrunner and John Harer \n
/// American Mathematical Society, 2010
///
/// \sa ttkVolumePersistenceDiagram.cpp %for a usage example.

#ifndef _VOLUMEPERSISTENCEDIAGRAM_H
#define _VOLUMEPERSISTENCEDIAGRAM_H

// base code includes
#include<Wrapper.h>
#include<Triangulation.h>
#include<FTMTreePP.h>
#include<MorseSmaleComplex3D.h>
#include<vtkDataArray.h>
#include<vtkDataSet.h>

namespace ttk{

  /**
   * Compute the persistence diagram of a function on a triangulation.
   * TTK assumes that the input dataset is made of only one connected component.
   */
  class VolumePersistenceDiagram : public Debug{

    public:

      VolumePersistenceDiagram();
      ~VolumePersistenceDiagram();

      inline int setComputeSaddleConnectors(bool state){
        ComputeSaddleConnectors=state;
        return 0;
      }

      ttk::CriticalType getNodeType(ftm::FTMTree_MT* tree,
                                ftm::TreeType    treeType,
                                const SimplexId        vertexId) const;

      template <typename scalarType>
      int sortVolumePersistenceDiagram(std::vector<std::tuple<ttk::SimplexId,
                                              ttk::CriticalType,
                                              ttk::SimplexId,
                                              ttk::CriticalType,
                                              scalarType,
                                              ttk::SimplexId>>& diagram,
                                              scalarType* scalars,
                                              SimplexId* offsets) const;

      template <typename scalarType>
      int computeCTVolumePersistenceDiagram(
          ftm::FTMTreePP& tree,
          const std::vector<std::tuple<ttk::SimplexId, ttk::SimplexId, scalarType, bool>>& pairs,
          std::vector<std::tuple<ttk::SimplexId,
                       ttk::CriticalType,
                       ttk::SimplexId,
                       ttk::CriticalType,
                       scalarType,
                       ttk::SimplexId>>& diagram,
          scalarType*                   scalars) const;

      template <class scalarType, typename idType>
        int execute() const;

      inline int setDMTPairs(std::vector<std::tuple<dcg::Cell,dcg::Cell>>* data){
        dmt_pairs=data;
        return 0;
      }

      inline int setupTriangulation(Triangulation* data){
        triangulation_ = data;
        if(triangulation_){
          ftm::FTMTreePP contourTree;
          contourTree.setupTriangulation(triangulation_);

          triangulation_->preprocessBoundaryVertices();
        }
        return 0;
      }

      inline int setInputScalars(void* data){
        inputScalars_ = data;
        return 0;
      }

      //list of critical points of the data
      inline int setInputCritialPoints(vtkDataArray* data){
        inputCriticalPoints_ = data;
        return 0;
      }

      //input critical types that are created in ttk wrapper class. Should hold corresponding type for each critical point.
      inline int setInputCriticalTypes(vtkDataArray* data){
        inputCriticalTypes_ = data;
        return 0;
      }

      inline int setInputOffsets(void* data){
        inputOffsets_ = data;
        return 0;
      }

      inline int setOutputCTDiagram(void* data){
        CTDiagram_=data;
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
      inline int setFullInputField(vtkDataSet* data)
      {
        inputField_ = data;
        return 0;
      }

    protected:

      std::vector<std::tuple<dcg::Cell,dcg::Cell>>* dmt_pairs;

      bool ComputeSaddleConnectors;

      Triangulation* triangulation_;
      SimplexId numberOfCritPoints_;
      SimplexId numberOfVertices_;
      void* inputScalars_;
      vtkDataSet* inputField_;
      vtkDataArray* inputCriticalPoints_;
      vtkDataArray* inputCriticalTypes_;
      void* inputOffsets_;
      void* CTDiagram_;
  };
}

template <typename scalarType>
int ttk::VolumePersistenceDiagram::sortVolumePersistenceDiagram(
    
std::vector<std::tuple<ttk::SimplexId,ttk::CriticalType,ttk::SimplexId,ttk::CriticalType,
scalarType,ttk::SimplexId>>& diagram,
    scalarType* scalars,
    SimplexId* offsets) const{
  auto cmp=[scalars, offsets](const 
std::tuple<ttk::SimplexId,ttk::CriticalType,ttk::SimplexId,ttk::CriticalType,scalarType,
ttk::SimplexId>& a,
      const 
std::tuple<ttk::SimplexId,ttk::CriticalType,ttk::SimplexId,ttk::CriticalType,scalarType,
ttk::SimplexId>& b){
    const ttk::SimplexId idA=std::get<0>(a);
    const ttk::SimplexId idB=std::get<0>(b);
    const ttk::SimplexId va=offsets[idA];
    const ttk::SimplexId vb=offsets[idB];
    const scalarType sa=scalars[idA];
    const scalarType sb=scalars[idB];

    if(sa!=sb) return sa < sb;
    else return va < vb;
  };

  std::sort(diagram.begin(), diagram.end(), cmp);

  return 0;
}

template <typename scalarType>
int ttk::VolumePersistenceDiagram::computeCTVolumePersistenceDiagram(
    ftm::FTMTreePP& tree,
    const std::vector<std::tuple<ttk::SimplexId, ttk::SimplexId, scalarType, 
bool>>& pairs,
    std::vector<std::tuple<ttk::SimplexId,
                 ttk::CriticalType,
                 ttk::SimplexId,
                 ttk::CriticalType,
                 scalarType,
                 ttk::SimplexId>>& diagram,
    scalarType*                   scalars) const
{
   const ttk::SimplexId numberOfPairs = pairs.size();
   diagram.resize(numberOfPairs);
   for (ttk::SimplexId i = 0; i < numberOfPairs; ++i) {
      const ttk::SimplexId v0               = std::get<0>(pairs[i]);
      const ttk::SimplexId v1               = std::get<1>(pairs[i]);
      const scalarType    persistenceValue = std::get<2>(pairs[i]);
      const bool          type             = std::get<3>(pairs[i]);

      std::get<4>(diagram[i]) = persistenceValue;
      if (type == true) {
         std::get<0>(diagram[i]) = v0;
         std::get<1>(diagram[i]) = getNodeType(tree.getJoinTree(), 
ftm::TreeType::Join, v0);
         std::get<2>(diagram[i]) = v1;
         std::get<3>(diagram[i]) = getNodeType(tree.getJoinTree(), 
ftm::TreeType::Join, v1);
         std::get<5>(diagram[i]) = 0;
      } else {
         std::get<0>(diagram[i]) = v1;
         std::get<1>(diagram[i]) = getNodeType(tree.getSplitTree(), 
ftm::TreeType::Split, v1);
         std::get<2>(diagram[i]) = v0;
         std::get<3>(diagram[i]) = getNodeType(tree.getSplitTree(), 
ftm::TreeType::Split, v0);
         std::get<5>(diagram[i]) = 2;
      }
   }

   return 0;
}

/*
This will be the same as the original persistence diagram except that we are changing the information that is being put into the FTMTreePP that we are creating to 
represent the persistence diagram tree.
*/
template <typename scalarType, typename idType>
int ttk::VolumePersistenceDiagram::execute() const{
  // get data
  std::vector<std::tuple<ttk::SimplexId,ttk::CriticalType,ttk::SimplexId,ttk::CriticalType,scalarType,ttk::SimplexId>>& CTDiagram=
    *static_cast<std::vector<std::tuple<ttk::SimplexId,ttk::CriticalType,ttk::SimplexId,ttk::CriticalType,scalarType,ttk::SimplexId>>*>(CTDiagram_);
  scalarType* scalars=static_cast<scalarType*>(inputScalars_);
  SimplexId* offsets=static_cast<SimplexId*>(inputOffsets_);

  const ttk::SimplexId numberOfVertices=triangulation_->getNumberOfVertices();
  // convert offsets into a valid format for contour forests
  std::vector<ttk::SimplexId> voffsets(numberOfVertices);
  std::copy(offsets,offsets+numberOfVertices,voffsets.begin());


  //create a full array of points that is the size of the whole data set's number of points and then populate the critical types of only the critical points at their 
  //correspoinding vertex number. This will allow us to easily find the critical type of a critical point later on in the code while only knowing its vertex number.
  //If this section was not in the code, we would not be able to easily find the critical type of a point.
  for(int i = 0; i < inputCriticalPoints_->GetNumberOfTuples(); i++)
  {
    std::cout << "critical point: " << i << " has vertex: " << inputCriticalPoints_->GetTuple1(i) << " and type: " << inputCriticalTypes_->GetTuple1(i) << std:: endl;
  }

  int criticalTypesFull [numberOfVertices_];

  std::fill_n(criticalTypesFull, numberOfVertices_, -1);

  for(int i = 0; i < inputCriticalPoints_->GetNumberOfTuples(); i++)
  {
    int x = inputCriticalPoints_->GetTuple1(i);
    criticalTypesFull[x] = inputCriticalTypes_->GetTuple1(i);
  }


  // set up the contour tree here. This is the part that will be different from the original version as we need to put in different information
  ftm::FTMTreePP contourTree;
  contourTree.setupTriangulation(triangulation_, false);
  contourTree.setNumberOfCritPoints(numberOfCritPoints_);
  contourTree.setInputTreeCritialPoints(inputCriticalPoints_);
  contourTree.setInputCriticalTypes(inputCriticalTypes_);
  contourTree.setPersistenceType(true);
  contourTree.setNumberOfVertices(numberOfVertices_);
  contourTree.setCritTypesFull(criticalTypesFull);
  contourTree.setFullInputField(inputField_);

  contourTree.setVertexScalars(inputScalars_);
  contourTree.setTreeType(ftm::TreeType::Join_Split);
  contourTree.setVertexSoSoffsets(voffsets.data());
  contourTree.setThreadNumber(threadNumber_);
  contourTree.setDebugLevel(debugLevel_);
  contourTree.setSegmentation(false);
  contourTree.build<scalarType,idType>();

  // get persistence pairs
  std::vector<std::tuple<ttk::SimplexId, ttk::SimplexId, scalarType>> JTPairs;
  std::vector<std::tuple<ttk::SimplexId,ttk::SimplexId,scalarType>> STPairs;
  contourTree.computePersistencePairs<scalarType>(JTPairs, true);
  contourTree.computePersistencePairs<scalarType>(STPairs, false);

  // merge pairs
  std::vector<std::tuple<ttk::SimplexId, ttk::SimplexId, scalarType, bool>> CTPairs(JTPairs.size() +
                                                                        STPairs.size());
  const ttk::SimplexId JTSize = JTPairs.size();
  for (ttk::SimplexId i = 0; i < JTSize; ++i) {
     const auto& x = JTPairs[i];
     CTPairs[i]    = std::make_tuple(std::get<0>(x), std::get<1>(x), std::get<2>(x), true);
  }
  const ttk::SimplexId STSize = STPairs.size();
  for (ttk::SimplexId i = 0; i < STSize; ++i) {
     const auto& x       = STPairs[i];
     CTPairs[JTSize + i] = std::make_tuple(std::get<0>(x), std::get<1>(x), std::get<2>(x), false);
  }

  // remove the last pair which is present two times (global extrema pair)
  {
     auto cmp = [](const std::tuple<ttk::SimplexId, ttk::SimplexId, scalarType, bool>& a,
                   const std::tuple<ttk::SimplexId, ttk::SimplexId, scalarType, bool>& b) {
        return std::get<2>(a) < std::get<2>(b);
     };

     std::sort(CTPairs.begin(), CTPairs.end(), cmp);
     CTPairs.erase(CTPairs.end() - 1);
  }

  // get the saddle-saddle pairs
  std::vector<std::tuple<SimplexId,SimplexId,scalarType>> pl_saddleSaddlePairs;
  const int dimensionality=triangulation_->getDimensionality();
  if(dimensionality==3 and ComputeSaddleConnectors){
    MorseSmaleComplex3D morseSmaleComplex;
    morseSmaleComplex.setDebugLevel(debugLevel_);
    morseSmaleComplex.setThreadNumber(threadNumber_);
    morseSmaleComplex.setupTriangulation(triangulation_);
    morseSmaleComplex.setInputScalarField(inputScalars_);
    morseSmaleComplex.setInputOffsets(inputOffsets_);
    morseSmaleComplex.computePersistencePairs<scalarType,idType>(JTPairs, STPairs, pl_saddleSaddlePairs);
  }

  // get persistence diagrams
  computeCTVolumePersistenceDiagram<scalarType>(
      contourTree,CTPairs, CTDiagram, scalars);

  // add saddle-saddle pairs to the diagram if needed
  if(dimensionality==3 and ComputeSaddleConnectors){
    for(const auto& i : pl_saddleSaddlePairs){
      const ttk::SimplexId v0=std::get<0>(i);
      const ttk::SimplexId v1=std::get<1>(i);
      const scalarType persistenceValue=std::get<2>(i);

      std::tuple<ttk::SimplexId, ttk::CriticalType, ttk::SimplexId, ttk::CriticalType, scalarType, ttk::SimplexId> t;

      std::get<0>(t)=v0;
      std::get<1>(t)=ttk::CriticalType::Saddle1;
      std::get<2>(t)=v1;
      std::get<3>(t)=ttk::CriticalType::Saddle2;
      std::get<4>(t)=persistenceValue;
      std::get<5>(t)=1;

      CTDiagram.push_back(t);
    }
  }

  // finally sort the diagram
  sortVolumePersistenceDiagram(CTDiagram, scalars, offsets);

  return 0;
}

#endif // VOLUMEPERSISTENCEDIAGRAM_H
