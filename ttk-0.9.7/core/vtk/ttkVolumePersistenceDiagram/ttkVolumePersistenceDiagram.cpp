#include <ttkVolumePersistenceDiagram.h>

using namespace std;
using namespace ttk;
using namespace dcg;

vtkStandardNewMacro(ttkVolumePersistenceDiagram)

  ttkVolumePersistenceDiagram::ttkVolumePersistenceDiagram():
    UseAllCores{},
    inputScalars_{},
    inputCriticalPoints_{},
    CTVolumePersistenceDiagram_{vtkUnstructuredGrid::New()},
    offsets_{},
    inputOffsets_{},
    varyingMesh_{}
{
  SetNumberOfInputPorts(2);
  SetNumberOfOutputPorts(1);

  ScalarFieldId = 0;
  OffsetFieldId = -1;
  ComputeSaddleConnectors = false;
  InputOffsetScalarFieldName = ttk::OffsetScalarFieldName;
  ForceInputOffsetScalarField = false;
  ComputeSaddleConnectors = false;
  UseAllCores = true;
  ThreadNumber = 1;
  debugLevel_ = 3;
  ShowInsideDomain = false;
  computeDiagram_= true;

  triangulation_ = nullptr;
  CTDiagram_ = nullptr;
}

ttkVolumePersistenceDiagram::~ttkVolumePersistenceDiagram(){
  if(CTVolumePersistenceDiagram_)
    CTVolumePersistenceDiagram_->Delete();
  if(offsets_)
    offsets_->Delete();

  deleteDiagram();
}

//Unlike the original filter, we will have two input ports. One for the overall data that we will be working on and one for the set of critical points that we will need to input.
int ttkVolumePersistenceDiagram::FillInputPortInformation(int port, vtkInformation *info)
{
  if(port == 0)
    info->Set(vtkDataObject::DATA_TYPE_NAME(), "vtkDataSet");
  if(port == 1)
    info->Set(vtkDataObject::DATA_TYPE_NAME(), "vtkPointSet");

  return 1;
}

int ttkVolumePersistenceDiagram::FillOutputPortInformation(int port, 
  vtkInformation *info){
  switch (port) {
    case 0:
      info->Set(vtkDataObject::DATA_TYPE_NAME(), "vtkUnstructuredGrid");
      break;
  }

  return 1;
}

int ttkVolumePersistenceDiagram::getScalars(vtkDataSet* input){
  vtkPointData* pointData=input->GetPointData();

#ifndef TTK_ENABLE_KAMIKAZE
  if(!pointData){
    cerr << "[ttkVolumePersistenceDiagram] Error : input has no point data." << endl;
    return -1;
  }
#endif

  if(ScalarField.length()){
    inputScalars_=pointData->GetArray(ScalarField.data());
  }
  else{
    inputScalars_=pointData->GetArray(ScalarFieldId);
    if(inputScalars_)
      ScalarField = inputScalars_->GetName();
  }

#ifndef TTK_ENABLE_KAMIKAZE
  if(!inputScalars_){
    cerr 
      << "[ttkVolumePersistenceDiagram] Error : input scalar field pointer is null." 
      << endl;
    return -3;
  }
#endif

  if(this->GetMTime() < inputScalars_->GetMTime())
    computeDiagram_=true;

  stringstream msg;
  msg << "[ttkVolumePersistenceDiagram] Starting computation on field `"
    << inputScalars_->GetName() << "'..." << endl;
  dMsg(cout, msg.str(), infoMsg);

  return 0;
}

int ttkVolumePersistenceDiagram::getTriangulation(vtkDataSet* input){
  varyingMesh_=false;

  triangulation_ = ttkTriangulation::getTriangulation(input);
  if(!triangulation_)
    return 0;
  
  triangulation_->setWrapper(this);
  volumeVolumePersistenceDiagram_.setupTriangulation(triangulation_);
  
  if(triangulation_->isEmpty() 
    or ttkTriangulation::hasChangedConnectivity(triangulation_, input, this)){
    Modified();
    varyingMesh_=true;
    computeDiagram_=true;
  }

  return 0;
}

int ttkVolumePersistenceDiagram::getOffsets(vtkDataSet* input){
  if(OffsetFieldId != -1){
    inputOffsets_ = input->GetPointData()->GetArray(OffsetFieldId);
    if(inputOffsets_){
      InputOffsetScalarFieldName = inputOffsets_->GetName();
      ForceInputOffsetScalarField = true;
    }
  }

  if(ForceInputOffsetScalarField and InputOffsetScalarFieldName.length()){
    inputOffsets_=
      input->GetPointData()->GetArray(InputOffsetScalarFieldName.data());
  }
  else if(input->GetPointData()->GetArray(ttk::OffsetScalarFieldName)){
    inputOffsets_=
      input->GetPointData()->GetArray(ttk::OffsetScalarFieldName);
  }
  else{
    if(varyingMesh_ and offsets_){
      offsets_->Delete();
      offsets_=nullptr;
    }

    if(!offsets_){
      const SimplexId numberOfVertices=input->GetNumberOfPoints();

      offsets_=ttkSimplexIdTypeArray::New();
      offsets_->SetNumberOfComponents(1);
      offsets_->SetNumberOfTuples(numberOfVertices);
      offsets_->SetName(ttk::OffsetScalarFieldName);
      for(SimplexId i=0; i<numberOfVertices; ++i)
        offsets_->SetTuple1(i,i);
      offsets_->Modified();
    }

    inputOffsets_=offsets_;
  }

  if(this->GetMTime() < inputOffsets_->GetMTime())
    computeDiagram_=true;

#ifndef TTK_ENABLE_KAMIKAZE
  if(!inputOffsets_){
    cerr << "[ttkVolumePersistenceDiagram] Error : wrong input offset scalar field." 
      << endl;
    return -1;
  }
#endif

  return 0;
}

//should return us a pointer to the array which houses the critical points of the system. This will be used later to send into the topological simplification filter
//In addition, we will create an array of critical types which will hold the type of each of the corresponding points. This will also be useful later on in the code.
int ttkVolumePersistenceDiagram::getInputCriticalPoints(vtkPointSet* input)
{
  if(input->GetPointData()->GetArray(ttk::VertexScalarFieldName))
  {
    inputCriticalPoints_=input->GetPointData()->GetArray(ttk::VertexScalarFieldName);
  }
  if(input->GetPointData()->GetArray("CriticalType"))
  {
    inputCriticalTypes_=input->GetPointData()->GetArray("CriticalType");
  }

#ifndef TTK_ENABLE_KAMIKAZE
  if(!inputCriticalPoints_){
    cerr << "[ttkTopologicalSimplificationHelper] Error : wrong vertex identifier scalar field." << endl;
    return -1;
  }
#endif

  return 0;
}

int ttkVolumePersistenceDiagram::deleteDiagram(){
  if(CTDiagram_ and inputScalars_){
    switch(inputScalars_->GetDataType()){
      ttkTemplateMacro({
          using tuple_t = tuple<SimplexId TTK_COMMA CriticalType TTK_COMMA SimplexId TTK_COMMA CriticalType TTK_COMMA VTK_TT TTK_COMMA SimplexId>;
          vector<tuple_t>* CTDiagram = (vector<tuple_t>*) CTDiagram_;
          delete CTDiagram;
          });
    }
  }
  return 0;
}

/*
Main method for the ttk class. This has most of the same functionality as ithe same method in the original filter but has some different information as a result of the different purposes.
Mainly, it should have two different inputs with the second representing the critical points of the system that will be used when calling Topological Simplification Helper later. We will also 
send through the array of critical types that is talked about above.
*/
int ttkVolumePersistenceDiagram::doIt(vector<vtkDataSet *> &inputs,
  vector<vtkDataSet *> &outputs){
  
  vtkDataSet *input = inputs[0];

  vtkPointSet *criticalPoints = vtkPointSet::SafeDownCast(inputs[1]);

  vtkUnstructuredGrid *outputCTVolumePersistenceDiagram = 
    vtkUnstructuredGrid::SafeDownCast(outputs[0]);
  
  Memory m;
  
  int ret{};

  ret=getScalars(input);
#ifndef TTK_ENABLE_KAMIKAZE
  if(ret){
    cerr << "[ttkVolumePersistenceDiagram] Error : wrong scalars." << endl;
    return -1;
  }
#endif

  ret=getTriangulation(input);
#ifndef TTK_ENABLE_KAMIKAZE
  if(ret){
    cerr << "[ttkVolumePersistenceDiagram] Error : wrong triangulation." << endl;
    return -2;
  }
#endif

  ret=getOffsets(input);
#ifndef TTK_ENABLE_KAMIKAZE
  if(ret){
    cerr << "[ttkVolumePersistenceDiagram] Error : wrong offsets." << endl;
    return -3;
  }
  if(inputOffsets_->GetDataType()!=VTK_INT and inputOffsets_->GetDataType()!=VTK_ID_TYPE){
    cerr << "[ttkVolumePersistenceDiagram] Error : input offset field type not supported." << endl;
    return -1;
  }
#endif

  ret=getInputCriticalPoints(criticalPoints);
#ifndef TTK_ENABLE_KAMIKAZE
  if(ret){
    cerr << "[ttkVolumePersistenceDiagram] Error : wrong critical points." << endl;
    return -4;
  }
#endif

  vector<tuple<Cell,Cell>> dmt_pairs;
  volumeVolumePersistenceDiagram_.setDMTPairs(&dmt_pairs);

  SimplexId numberOfVertices = input->GetNumberOfPoints();
  volumeVolumePersistenceDiagram_.setNumberOfVertices(numberOfVertices);

  SimplexId numberOfCriticalPoints = criticalPoints->GetNumberOfPoints();
  volumeVolumePersistenceDiagram_.setNumberOfCritPoints(numberOfCriticalPoints);

  volumeVolumePersistenceDiagram_.setWrapper(this);
  volumeVolumePersistenceDiagram_.setInputScalars(inputScalars_->GetVoidPointer(0));
  volumeVolumePersistenceDiagram_.setInputCritialPoints(inputCriticalPoints_);
  volumeVolumePersistenceDiagram_.setInputCriticalTypes(inputCriticalTypes_);
  volumeVolumePersistenceDiagram_.setInputOffsets(inputOffsets_->GetVoidPointer(0));
  volumeVolumePersistenceDiagram_.setComputeSaddleConnectors(ComputeSaddleConnectors);
  volumeVolumePersistenceDiagram_.setFullInputField(input);
  switch(inputScalars_->GetDataType()){
#ifndef _MSC_VER
	  vtkTemplateMacro(({
		  using tuple_t = tuple<SimplexId,
		  CriticalType,
		  SimplexId,
		  CriticalType,
		  VTK_TT,
		  SimplexId>;

	  if (CTDiagram_ and computeDiagram_) {
		  vector<tuple_t>* tmpDiagram = (vector<tuple_t>*)CTDiagram_;
		  delete tmpDiagram;
		  CTDiagram_ = new vector<tuple_t>();
	  }
	  else if (!CTDiagram_) {
		  CTDiagram_ = new vector<tuple_t>();
		  computeDiagram_ = true;
	  }

	  vector<tuple_t>* CTDiagram = (vector<tuple_t>*)CTDiagram_;

	  if (computeDiagram_) {
		  volumeVolumePersistenceDiagram_.setOutputCTDiagram(CTDiagram);
          if(inputOffsets_->GetDataType()==VTK_INT)
            ret = volumeVolumePersistenceDiagram_.execute<VTK_TT,int>();
          if(inputOffsets_->GetDataType()==VTK_ID_TYPE)
            ret = volumeVolumePersistenceDiagram_.execute<VTK_TT,vtkIdType>();
#ifndef TTK_ENABLE_KAMIKAZE
		  if (ret) {
			  cerr << "[ttkVolumePersistenceDiagram] VolumePersistenceDiagram.execute() "
				  << "error code : " << ret << endl;
			  return -4;
		  }
#endif
	  }

	  if (ShowInsideDomain)
		  ret = getVolumePersistenceDiagramInsideDomain<VTK_TT>(ftm::TreeType::Contour, *CTDiagram);
	  else
		  ret = getVolumePersistenceDiagram<VTK_TT>(ftm::TreeType::Contour, *CTDiagram);
#ifndef TTK_ENABLE_KAMIKAZE
	  if (ret) {
		  cerr << "[ttkVolumePersistenceDiagram] Error : "
			  << "build of contour tree persistence diagram has failed." << endl;
		  return -5;
	  }
#endif
	  }));
#else
#ifndef TTK_ENABLE_KAMIKAZE
	  vtkTemplateMacro({
		  using tuple_t = tuple<SimplexId TTK_COMMA
		  CriticalType TTK_COMMA
		  SimplexId TTK_COMMA
		  CriticalType TTK_COMMA
		  VTK_TT TTK_COMMA
		  SimplexId>;

	  if (CTDiagram_ and computeDiagram_) {
		  vector<tuple_t>* tmpDiagram = (vector<tuple_t>*)CTDiagram_;
		  delete tmpDiagram;
		  CTDiagram_ = new vector<tuple_t>();
	  }
	  else if (!CTDiagram_) {
		  CTDiagram_ = new vector<tuple_t>();
		  computeDiagram_ = true;
	  }

	  vector<tuple_t>* CTDiagram = (vector<tuple_t>*)CTDiagram_;

	  if (computeDiagram_) {
		  volumeVolumePersistenceDiagram_.setOutputCTDiagram(CTDiagram);
          if(inputOffsets_->GetDataType()==VTK_INT)
            ret = volumeVolumePersistenceDiagram_.execute<VTK_TT TTK_COMMA int>();
          if(inputOffsets_->GetDataType()==VTK_ID_TYPE)
            ret = volumeVolumePersistenceDiagram_.execute<VTK_TT TTK_COMMA vtkIdType>();
		  if (ret) {
			  cerr << "[ttkVolumePersistenceDiagram] VolumePersistenceDiagram.execute() "
				  << "error code : " << ret << endl;
			  return -4;
		  }
	  }

	  if (ShowInsideDomain)
		  ret = getVolumePersistenceDiagramInsideDomain<VTK_TT>(ftm::TreeType::Contour, *CTDiagram);
	  else
		  ret = getVolumePersistenceDiagram<VTK_TT>(ftm::TreeType::Contour, *CTDiagram);
	  if (ret) {
		  cerr << "[ttkVolumePersistenceDiagram] Error : "
			  << "build of contour tree persistence diagram has failed." << endl;
		  return -5;
	  }
	  });
#else
	  vtkTemplateMacro({
		  using tuple_t = tuple<SimplexId TTK_COMMA
		  CriticalType TTK_COMMA
		  SimplexId TTK_COMMA
		  CriticalType TTK_COMMA
		  VTK_TT TTK_COMMA
		  SimplexId>;

	  if (CTDiagram_ and computeDiagram_) {
		  vector<tuple_t>* tmpDiagram = (vector<tuple_t>*)CTDiagram_;
		  delete tmpDiagram;
		  CTDiagram_ = new vector<tuple_t>();
	  }
	  else if (!CTDiagram_) {
		  CTDiagram_ = new vector<tuple_t>();
		  computeDiagram_ = true;
	  }

	  vector<tuple_t>* CTDiagram = (vector<tuple_t>*)CTDiagram_;

	  if (computeDiagram_) {
		  volumeVolumePersistenceDiagram_.setOutputCTDiagram(CTDiagram);
          if(inputOffsets_->GetDataType()==VTK_INT)
            ret = volumeVolumePersistenceDiagram_.execute<VTK_TT TTK_COMMA int>();
          if(inputOffsets_->GetDataType()==VTK_ID_TYPE)
            ret = volumeVolumePersistenceDiagram_.execute<VTK_TT TTK_COMMA vtkIdType>();
	  }

	  if (ShowInsideDomain)
		  ret = getVolumePersistenceDiagramInsideDomain<VTK_TT>(ftm::TreeType::Contour, *CTDiagram);
	  else
		  ret = getVolumePersistenceDiagram<VTK_TT>(ftm::TreeType::Contour, *CTDiagram);
	  });
#endif
#endif
  }

  outputCTVolumePersistenceDiagram->ShallowCopy(CTVolumePersistenceDiagram_);
  computeDiagram_=false;

  {
    stringstream msg;
    msg << "[ttkVolumePersistenceDiagram] Memory usage: " << m.getElapsedUsage()
      << " MB." << endl;
    dMsg(cout, msg.str(), memoryMsg);
  }
  
  return 0;
}
