/// \ingroup base
/// \class ttk::TopologicalSimplificationHelper
/// \author Julien Tierny <julien.tierny@lip6.fr>
/// \author Guillaume Favelier <guillaume.favelier@lip6.fr>
/// \date February 2016
///
/// \brief TTK processing package for the topological simplification of scalar 
/// data.
///
/// Given an input scalar field and a list of critical points to remove, this 
/// class minimally edits the scalar field such that the listed critical points
/// disappear. This procedure is useful to speedup subsequent topological data 
/// analysis when outlier critical points can be easily identified. It is 
/// also useful for data simplification.
///
/// \b Related \b publication \n
/// "Generalized Topological Simplification of Scalar Fields on Surfaces" \n
/// Julien Tierny, Valerio Pascucci \n
/// Proc. of IEEE VIS 2012.\n
/// IEEE Transactions on Visualization and Computer Graphics, 2012.
///
/// \sa ttkTopologicalSimplificationHelper.cpp %for a usage example.

#ifndef _TOPOLOGICALSIMPLIFICATIONHELPER_H
#define _TOPOLOGICALSIMPLIFICATIONHELPER_H

// base code includes
#include                  <Wrapper.h>

#include <Triangulation.h>
#include <cmath>
#include <set>
#include <tuple>
#include <type_traits>

namespace ttk{
  
  /*
  * So the purpose of this functor is that we need to be able to compare a point (w/r/t z coordinate) to another point. But, we will have scalar values
  * as well as offset values. Scalar being the major z coordinate and offset being less important. Now, if we send in two tuples that represent a point
  * we can compare them and check which one is greater overall. We can also choose whether we want to be in increasing or decreasing order.
  */
  struct SweepCmpHelper{
    private :
      bool isIncreasingOrder_;

    public:
      SweepCmpHelper():
        isIncreasingOrder_{}
      {}

      SweepCmpHelper(bool isIncreasingOrder):
        isIncreasingOrder_{isIncreasingOrder}
      {}

      int setIsIncreasingOrder(bool isIncreasingOrder){
        isIncreasingOrder_=isIncreasingOrder;
        return 0;
      }

      template <typename dataType>
        bool operator() (const std::tuple<dataType,SimplexId,SimplexId> &v0,
            const std::tuple<dataType,SimplexId,SimplexId> &v1) const{
          if(isIncreasingOrder_){
            return (std::get<0>(v0) < std::get<0>(v1) or
                (std::get<0>(v0) == std::get<0>(v1) and std::get<1>(v0) < std::get<1>(v1)));
          }
          else{
            return (std::get<0>(v0) > std::get<0>(v1) or
                (std::get<0>(v0) == std::get<0>(v1) and std::get<1>(v0) > std::get<1>(v1)));
          }
        };
  };

  class TopologicalSimplificationHelper : public Debug{

    public:

      TopologicalSimplificationHelper();

      ~TopologicalSimplificationHelper();

      template <typename dataType>
        bool isLowerThan(SimplexId a, SimplexId b, dataType* scalars, SimplexId* offsets) const;

      template <typename dataType>
        bool isHigherThan(SimplexId a, SimplexId b, dataType* scalars, SimplexId* offsets) const;

      template <typename dataType>
        int getCriticalType(SimplexId vertexId, dataType* scalars, SimplexId* offsets) const;

      template <typename dataType>
        int getCriticalPoints(dataType* scalars,
            SimplexId* offsets,
            std::vector<SimplexId>& minList,
            std::vector<SimplexId>& maxList) const;

      template <typename dataType>
        int getCriticalPoints(dataType* scalars,
            SimplexId* offsets,
            std::vector<SimplexId>& minList,
            std::vector<SimplexId>& maxList,
            std::vector<bool>& blackList) const;


      template <typename dataType, typename idType>
        int execute() const;

      inline int setupTriangulation(Triangulation* triangulation){
        triangulation_=triangulation;
        if(triangulation_){
          vertexNumber_ = triangulation_->getNumberOfVertices();
          triangulation_->preprocessVertexNeighbors();
        }
        return 0;
      }

      inline int setVertexNumber(SimplexId vertexNumber){
        vertexNumber_=vertexNumber;
        return 0;
      }

      inline int setConstraintNumber(SimplexId constraintNumber){
        constraintNumber_=constraintNumber;
        return 0;
      }
      inline int setNumberOfCriticalPoints(int number){
        numberOfCriticalPoints_= number;
        return 0;
      }
      inline int setNumberOfCriticalPointsToRemove(int number){
        numberOfCriticalPointsToRemove_=number;
        return 0;
      }

      inline int setInputScalarFieldPointer(void *data){
        inputScalarFieldPointer_=data;
        return 0;
      }

      inline int setVertexIdentifierScalarFieldPointer(void* data){
        vertexIdentifierScalarFieldPointer_=data;
        return 0;
      }

      inline int setInputOffsetScalarFieldPointer(void* data){
        inputOffsetScalarFieldPointer_=data;
        return 0;
      }

      inline int setConsiderIdentifierAsBlackList(bool onOff){
        considerIdentifierAsBlackList_=onOff;
        return 0;
      }

      inline int setOutputScalarFieldPointer(void *data){
        outputScalarFieldPointer_=data;
        return 0;
      }

      inline int setOutputOffsetScalarFieldPointer(void *data){
        outputOffsetScalarFieldPointer_= data;
        return 0;
      }

      inline int setHelperScalarFieldPointer(void *data){
        helperScalarFieldPointer_=data;
        return 0;
      }
      inline int setInputCriticalVertices(double *data)
      {
        inputCriticalVertices_ = data;
        return 0;
      }
      inline int setCriticalPointsToRemove(double *data){
        criticalPointsToRemove_= data;
        return 0;
      }
      inline int setCriticalType(int critType){
        inputCriticalType_ = critType;
        return 0;
      }
    protected:

      Triangulation* triangulation_;
      SimplexId vertexNumber_;
      SimplexId constraintNumber_;
      int numberOfCriticalPoints_;
      int numberOfCriticalPointsToRemove_;
      void* inputScalarFieldPointer_;
      void* vertexIdentifierScalarFieldPointer_;
      void* inputOffsetScalarFieldPointer_;
      bool considerIdentifierAsBlackList_;
      void* outputScalarFieldPointer_;
      void* outputOffsetScalarFieldPointer_;
      void* helperScalarFieldPointer_;
      double* inputCriticalVertices_;
      double* criticalPointsToRemove_;
      int inputCriticalType_;
  };
}

// if the package is a pure template typename, uncomment the following line
// #include                  <TopologicalSimplificationHelper.cpp>

//tests if a is lower than b 
template <typename dataType>
bool ttk::TopologicalSimplificationHelper::isLowerThan(SimplexId a, SimplexId b, dataType* 
scalars, SimplexId* offsets) const{
  return (scalars[a]<scalars[b] or
      (scalars[a]==scalars[b] and offsets[a]<offsets[b]));
}

//tests if a is higher than b
template <typename dataType>
bool ttk::TopologicalSimplificationHelper::isHigherThan(SimplexId a, SimplexId b, dataType* 
scalars, SimplexId* offsets) const{
  return (scalars[a]>scalars[b] or
      (scalars[a]==scalars[b] and offsets[a]>offsets[b]));
}

//this should obtain whether we have a minima or a maxima that we are operating on
//done by getting a neighboring vertex from the traingulation and checking if it is lower or higher than the current vertex
//return 1 for max -1 for min
template <typename dataType>
int ttk::TopologicalSimplificationHelper::getCriticalType(SimplexId vertex, dataType* 
scalars, SimplexId* offsets) const{
  bool isMinima{true};
  bool isMaxima{true};
  SimplexId neighborNumber=triangulation_->getVertexNeighborNumber(vertex);
  for(SimplexId i=0; i<neighborNumber; ++i){
    SimplexId neighbor;
    triangulation_->getVertexNeighbor(vertex,i,neighbor);
    
    if(isLowerThan<dataType>(neighbor,vertex,scalars,offsets)) isMinima=false;
    if(isHigherThan<dataType>(neighbor,vertex,scalars,offsets)) isMaxima=false;
    if(!isMinima and !isMaxima){
      return 0;
    }
  }

  if(isMinima) return -1;
  if(isMaxima) return 1;

  return 0;
}

//should obtain all of the critical points from an input list of scalars and offsets and place each into a provided vector
//one for maxs and one for mins
//these can then be accessed
template <typename dataType>
int ttk::TopologicalSimplificationHelper::getCriticalPoints(dataType* scalars,
    SimplexId* offsets,
    std::vector<SimplexId>& minima,
    std::vector<SimplexId>& maxima) const{
	std::vector<int> type(vertexNumber_, 0);
  
#ifdef TTK_ENABLE_OPENMP
#pragma omp parallel for
#endif
  for(SimplexId k=0; k<vertexNumber_; ++k)
    type[k]=getCriticalType<dataType>(k,scalars,offsets);

  for(SimplexId k=0; k<vertexNumber_; ++k){
    if(type[k]<0) minima.push_back(k);
    else if(type[k]>0) maxima.push_back(k);
  }
  return 0;
}

template <typename dataType>
int ttk::TopologicalSimplificationHelper::getCriticalPoints(dataType* scalars,
    SimplexId* offsets,
    std::vector<SimplexId>& minima,
    std::vector<SimplexId>& maxima,
    std::vector<bool>& extrema) const{
  std::vector<int> type(vertexNumber_);
#ifdef TTK_ENABLE_OPENMP
#pragma omp parallel for num_threads(threadNumber_)
#endif
  for(SimplexId k=0; k<vertexNumber_; ++k){
    if(considerIdentifierAsBlackList_ xor extrema[k]){
      type[k]=getCriticalType<dataType>(k,scalars,offsets);
    }
  }

  for(SimplexId k=0; k<vertexNumber_; ++k){
    if(type[k]<0) minima.push_back(k);
    else if(type[k]>0) maxima.push_back(k);
  }
  return 0;
}

/*
The main method for this filter. What will be done is that we will intake our system and we will use the basic topological simplification
logic in order to find which of the points will be connected to the min-saddle or max-saddle pair that we are currently using. For each of the ones
that are we will slightly change the value of the scalar as was done in the original Topological Simplification Helper class. From there we will have 
a newly created helper scalars array which will be set to be exactly equal to the original scalars array at the beginning. After one iteration 
of the topological simplification loop (we do not need to check for conversion as was done in the original program as we only want to know which of the
points has been changed) we will break the loop and then we will compare each of the scalars to it's original value. If it has changed we will keep it and if
it is the same we will set it equal to the value of the saddle point. This should leave us with a set of scalars which will only be the points originally
connected to the min-saddle or saddle-max pair and can thus be closed later on in the process to be voxelizable.
*/
template <typename dataType, typename idType>
int ttk::TopologicalSimplificationHelper::execute() const{
  
  // get input data as well as defining where the outputs should go in the end
  dataType* inputScalars=static_cast<dataType*>(inputScalarFieldPointer_);
  dataType* scalars=static_cast<dataType*>(outputScalarFieldPointer_);
  idType* inputOffsets=static_cast<idType*>(inputOffsetScalarFieldPointer_);
  SimplexId* offsets=static_cast<SimplexId*>(outputOffsetScalarFieldPointer_);

  dataType* helperScalars=static_cast<dataType*>(helperScalarFieldPointer_);

  Timer t;

  // pre-processing
#ifdef TTK_ENABLE_OPENMP
#pragma omp parallel for num_threads(threadNumber_)
#endif
//for each scalar that has been input, we will place it into the scalars vector defined above. If it is nan then we will input 0
//we will also put all input offsets into the offset vector 
  for(SimplexId k=0; k<vertexNumber_; ++k){
    scalars[k]=inputScalars[k];
    helperScalars[k]=inputScalars[k];
    if(std::isnan((double) scalars[k]))
    {
      scalars[k] = 0;
      helperScalars[k]=0;
    }

    offsets[k]=inputOffsets[k];
  }

  std::vector<bool> extrema(vertexNumber_, false);


  for(int k=0; k<numberOfCriticalPoints_; k++)
  {
    double extremaNumber = inputCriticalVertices_[k];
    extrema[extremaNumber] = true;
  }

  for(int k=0; k <numberOfCriticalPointsToRemove_; k++)
  {
    double extremaNumber = criticalPointsToRemove_[k];
    extrema[extremaNumber] = false;
  }

  // authorized minima and maxima will be used to house the values for the min and max critical points after calling getCriticalPoints
  std::vector<SimplexId> authorizedMinima;
  std::vector<SimplexId> authorizedMaxima;
  std::vector<bool> authorizedExtrema(vertexNumber_, false);

  
  //obtain the critical points but only check points as defined by extrema
  getCriticalPoints<dataType>(
    scalars, offsets,
    authorizedMinima,
    authorizedMaxima,
    extrema);
  
  {
    std::stringstream msg;
    msg << "[TopologicalSimplificationHelper] Maintaining "
      << " constraints ("
      << authorizedMinima.size() << " minima and "
      << authorizedMaxima.size() << " maxima)." << std::endl;
    dMsg(std::cout, msg.str(), advancedInfoMsg);
  }
  // declare the tuple-comparison functor
  SweepCmpHelper cmp;

  // processing
  int iteration{};
  //perform for each vertex in the list
  for(SimplexId i=0; i<1; ++i){
   
    {
      std::stringstream msg;
      msg << "[TopologicalSimplificationHelper] Starting simplifying iteration #"
        << i << "..." << std::endl;
      dMsg(std::cout, msg.str(), advancedInfoMsg);
    }
    
    for(int j=1; j<2; ++j){
      
      bool isIncreasingOrder;

      if(inputCriticalType_ == 3)
      {
        isIncreasingOrder = false;
      }
      else if(inputCriticalType_ == 0)
      {
        isIncreasingOrder=true;
      }
      else 
      {
        return -1;
      }

      cmp.setIsIncreasingOrder(isIncreasingOrder);
      std::set<std::tuple<dataType,SimplexId,SimplexId>, decltype(cmp)> sweepFront(cmp);
      std::vector<bool> visitedVertices(vertexNumber_, false);
      std::vector<SimplexId> adjustmentSequence(vertexNumber_);

      // if we are going for increasing order, say that the authorized extrema for each minima is true
      //then place into the set a new tuple with the scalar for that minima, the offset for it and an index value
      //then say we have visited that vertex
      if(isIncreasingOrder){
        for(SimplexId k : authorizedMinima){
          std::cout << "authorized min: " << k << std::endl;
          authorizedExtrema[k]=true;
          sweepFront.emplace(scalars[k],offsets[k],k);
          visitedVertices[k]=true;
        }
      }
      //if we're not in increasing order do the same but with maxima
      else{
        for(SimplexId k : authorizedMaxima){
          authorizedExtrema[k]=true;
          sweepFront.emplace(scalars[k],offsets[k],k);
          visitedVertices[k]=true;
        }
      }
      
      // growth by neighborhood of the seeds
      SimplexId adjustmentPos = 0;
      do{
        auto front=sweepFront.begin();
        if(front==sweepFront.end()) return -1;

        SimplexId vertexId=std::get<2>(*front);
        sweepFront.erase(front);

        SimplexId neighborNumber=triangulation_->getVertexNeighborNumber(vertexId);

        //for each neighbor of the given vertex
        //create an id for the neighbor
        //get the neighbor itself
        //if we haven't already visited the neighbor we should add it to sweepFront and add set that we have visted it
        for(SimplexId k=0; k<neighborNumber; ++k){
          SimplexId neighbor;
          triangulation_->getVertexNeighbor(vertexId,k,neighbor);
          if(!visitedVertices[neighbor]){
            sweepFront.emplace(scalars[neighbor],offsets[neighbor],neighbor);
            visitedVertices[neighbor]=true;
          }
        }
        //add the vertex to the adjustment sequence
        adjustmentSequence[adjustmentPos]=vertexId;
        ++adjustmentPos;
      }while(!sweepFront.empty());

      // save offsets and rearrange scalars

      SimplexId offset = (isIncreasingOrder ? 0 : vertexNumber_ + 1);
      
      //for each vertex
      for(SimplexId k=0; k<vertexNumber_; ++k){
        
        if(isIncreasingOrder){
          //if the scalar for the current vertex is less than or equal to the vertex we touched just before it in the sequence
          //set the scalar to be equal to that value
          if(k and scalars[adjustmentSequence[k]] <= scalars[adjustmentSequence[k-1]])
          {
            scalars[adjustmentSequence[k]]=scalars[adjustmentSequence[k-1]];
          }

          ++offset;
        }
        else{
          //check for the opposite, if the current vertex is greater than the one found just before it in the sequence
          //if so we will set the scalar to be equal to that value
          if(k and scalars[adjustmentSequence[k]] >= scalars[adjustmentSequence[k-1]])
          {
            scalars[adjustmentSequence[k]]=scalars[adjustmentSequence[k-1]];
          }
          --offset;
        }
        offsets[adjustmentSequence[k]]=offset;
      }
    }

    // test convergence
    bool needForMoreIterations{false};
    std::vector<SimplexId> minima;
    std::vector<SimplexId> maxima;
    getCriticalPoints<dataType>(scalars,offsets,minima,maxima);
    
    if(maxima.size() > authorizedMaxima.size()) needForMoreIterations=true;
    if(minima.size() > authorizedMinima.size()) needForMoreIterations=true;
    
    {
      std::stringstream msg;
      msg << "[TopologicalSimplificationHelper] Current status: "
        << minima.size() << " minima, " 
        << maxima.size() << " maxima." << std::endl;
      dMsg(std::cout, msg.str(), advancedInfoMsg);
    }
    
    if(!needForMoreIterations){
      for(SimplexId k : minima){
        if(!authorizedExtrema[k]){
          needForMoreIterations=true;
          break;
        }
      }
    }
    if(!needForMoreIterations){
      for(SimplexId k : maxima){
        if(!authorizedExtrema[k]){
          needForMoreIterations=true;
          break;
        }
      }
    }

    ++iteration;
    if(!needForMoreIterations) break;
  }

  double numberOfChangedVerts = 0;
  if(inputCriticalType_ == 0)
  {
    double highestScalar = -100;

    for(int i =0; i < vertexNumber_; ++i)
    {
       if(scalars[i] != helperScalars[i])
      {
        scalars[i] = helperScalars[i];
        if(scalars[i] > highestScalar)
        {
          highestScalar = scalars[i];
        }
      }
      else
      {
        scalars[i] = 0;
      }
    }

    for(int i = 0; i < vertexNumber_; i++)
    {
      if(scalars[i] == 0)
      {
        scalars[i] = highestScalar;
      }
    }
  }
  else if(inputCriticalType_ == 3)
  {
    double lowestScalar = 100000;

    for(int i =0; i < vertexNumber_; ++i)
    {
      if(scalars[i] != helperScalars[i])
      {
        scalars[i] = helperScalars[i];
        numberOfChangedVerts++;
        if(scalars[i] < lowestScalar)
        {
          lowestScalar = scalars[i];
        }
      }
      else
      {
        scalars[i] = 0;
      }
    }

    for(int i =0; i < vertexNumber_; i++)
    {
      if(scalars[i] == 0)
      {
        scalars[i] = lowestScalar;
      }
    }
  }

  {
    std::stringstream msg;
    msg << "[TopologicalSimplificationHelper] Scalar field simplified"
      << " in " << t.getElapsedTime() << " s. (" << threadNumber_
      << " threads(s), " << iteration << " ite.)."
      << std::endl;
    dMsg(std::cout,msg.str(),timeMsg);
  }

  return 0;
}
#endif // TOPOLOGICALSIMPLIFICATIONHELPER_H
