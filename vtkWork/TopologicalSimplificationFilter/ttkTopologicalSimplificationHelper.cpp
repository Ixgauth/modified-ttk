#include                  <ttkTopologicalSimplificationHelper.h>

using namespace std;
using namespace ttk;

vtkStandardNewMacro(ttkTopologicalSimplificationHelper)

  ttkTopologicalSimplificationHelper::ttkTopologicalSimplificationHelper():
    hasUpdatedMesh_{false},
    identifiers_{},
    inputScalars_{},
    offsets_{},
    inputOffsets_{}
{
  SetNumberOfInputPorts(2);
  triangulation_ = NULL;

  ScalarFieldId = 0;
  OffsetFieldId = -1;
  ForceInputOffsetScalarField = false;
  AddPerturbation = false;
  OutputOffsetScalarFieldName = ttk::OffsetScalarFieldName;
  ForceInputVertexScalarField = false;
  InputVertexScalarFieldName = ttk::VertexScalarFieldName;
  ConsiderIdentifierAsBlackList = false;
  InputOffsetScalarFieldName = ttk::OffsetScalarFieldName;

  UseAllCores = true;
  ThreadNumber = 1;
  debugLevel_ = 3;
}

ttkTopologicalSimplificationHelper::~ttkTopologicalSimplificationHelper(){
  if(offsets_)
    offsets_->Delete();
}

int ttkTopologicalSimplificationHelper::FillInputPortInformation(int port, 
  vtkInformation *info){
  
  if(port == 0)
    info->Set(vtkDataObject::DATA_TYPE_NAME(), "vtkDataSet");
  
  if(port == 1)
    info->Set(vtkDataObject::DATA_TYPE_NAME(), "vtkPointSet");

  return 1;
}

int ttkTopologicalSimplificationHelper::getTriangulation(vtkDataSet* input){
  
  triangulation_ = ttkTriangulation::getTriangulation(input);
  
  if(!triangulation_)
    return -1;
  
  triangulation_->setWrapper(this);
  topologicalSimplificationHelper_.setWrapper(this);
  topologicalSimplificationHelper_.setupTriangulation(triangulation_);
  Modified();
  hasUpdatedMesh_ = true;
  
#ifndef TTK_ENABLE_KAMIKAZE
  if(triangulation_->isEmpty()){
    cerr << "[ttkTopologicalSimplificationHelper] Error : ttkTriangulation allocation problem." << endl;
    return -1;
  }
#endif

  return 0;
}

int ttkTopologicalSimplificationHelper::getScalars(vtkDataSet* input){
  vtkPointData* pointData=input->GetPointData();

#ifndef TTK_ENABLE_KAMIKAZE
  if(!pointData){
    cerr << "[ttkTopologicalSimplificationHelper] Error : input has no point data." << endl;
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
    cerr << "[ttkTopologicalSimplificationHelper] Error : input scalar field pointer is null." << endl;
    return -3;
  }
#endif

  return 0;
}

int ttkTopologicalSimplificationHelper::getIdentifiers(vtkPointSet* input){
  if(ForceInputVertexScalarField and InputVertexScalarFieldName.length())
    identifiers_=input->GetPointData()->GetArray(InputVertexScalarFieldName.data());
  else if(input->GetPointData()->GetArray(ttk::VertexScalarFieldName))
    identifiers_=input->GetPointData()->GetArray(ttk::VertexScalarFieldName);

#ifndef TTK_ENABLE_KAMIKAZE
  if(!identifiers_){
    cerr << "[ttkTopologicalSimplificationHelper] Error : wrong vertex identifier scalar field." << endl;
    return -1;
  }
#endif

  return 0;
}

int ttkTopologicalSimplificationHelper::getOffsets(vtkDataSet* input){
  if(ForceInputOffsetScalarField and InputOffsetScalarFieldName.length()){
    inputOffsets_=input->GetPointData()->GetArray(InputOffsetScalarFieldName.data());
  }
  else if(OffsetFieldId!=-1 and input->GetPointData()->GetArray(OffsetFieldId)){
    inputOffsets_=input->GetPointData()->GetArray(OffsetFieldId);
  }
  else if(input->GetPointData()->GetArray(ttk::OffsetScalarFieldName)){
    inputOffsets_=input->GetPointData()->GetArray(ttk::OffsetScalarFieldName);
  }
  else{
    if(hasUpdatedMesh_ and offsets_){
      offsets_->Delete();
      offsets_=nullptr;
      hasUpdatedMesh_ = false;
    }

    if(!offsets_){
      const SimplexId numberOfVertices=input->GetNumberOfPoints();

      offsets_=ttkSimplexIdTypeArray::New();
      offsets_->SetNumberOfComponents(1);
      offsets_->SetNumberOfTuples(numberOfVertices);
      offsets_->SetName(ttk::OffsetScalarFieldName);
      for(SimplexId i=0; i<numberOfVertices; ++i)
        offsets_->SetTuple1(i,i);
    }

    inputOffsets_=offsets_;
  }

#ifndef TTK_ENABLE_KAMIKAZE
  if(!inputOffsets_){
    cerr << "[ttkTopologicalSimplificationHelper] Error : wrong input offset scalar field." << endl;
    return -1;
  }
#endif

  return 0;
}


void AdjustPoints(void* arguments)
{
  params* input = static_cast<params*>(arguments);

  vtkPoints* inPts = input->data->GetPoints();
  vtkDataArray* scalars = input->scalars;
  vtkIdType numPts = inPts->GetNumberOfPoints();
  vtkSmartPointer<vtkPoints> newPts =
      vtkSmartPointer<vtkPoints>::New();
  newPts->SetNumberOfPoints(numPts);

  for(vtkIdType i = 0; i < numPts; i++)
  {
    double p[3];
    inPts->GetPoint(i, p);
    p[2] = scalars->GetTuple1(i);
    newPts->SetPoint(i, p);
  }

  input->filter->GetPolyDataOutput()->CopyStructure(input->data);
  input->filter->GetPolyDataOutput()->SetPoints(newPts);

}

int ttkTopologicalSimplificationHelper::doIt(vector<vtkDataSet *> &inputs,
  vector<vtkDataSet *> &outputs){
  
  Memory m;
  
  vtkDataSet *domain = inputs[0];
  vtkPointSet *constraints = vtkPointSet::SafeDownCast(inputs[1]);
  vtkDataSet *output = outputs[0];
  
  int ret{};

  ret=getTriangulation(domain);
#ifndef TTK_ENABLE_KAMIKAZE
  if(ret){
    cerr << "[ttkTopologicalSimplificationHelper] Error : wrong triangulation." << endl;
    return -1;
  }
#endif

  ret=getScalars(domain);
#ifndef TTK_ENABLE_KAMIKAZE
  if(ret){
    cerr << "[ttkTopologicalSimplificationHelper] Error : wrong scalars." << endl;
    return -2;
  }
#endif

  ret=getIdentifiers(constraints);
#ifndef TTK_ENABLE_KAMIKAZE
  if(ret){
    cerr << "[ttkTopologicalSimplificationHelper] Error : wrong identifiers." << endl;
    return -3;
  }
#endif

  ret=getOffsets(domain);
#ifndef TTK_ENABLE_KAMIKAZE
  if(ret){
    cerr << "[ttkTopologicalSimplificationHelper] Error : wrong offsets." << endl;
    return -4;
  }
#endif
#ifndef TTK_ENABLE_KAMIKAZE
  if(inputOffsets_->GetDataType()!=VTK_INT and inputOffsets_->GetDataType()!=VTK_ID_TYPE){
    cerr << "[ttkTopologicalSimplificationHelper] Error : input offset field type not supported." << endl;
    return -1;
  }
#endif

  const SimplexId numberOfVertices=domain->GetNumberOfPoints();
#ifndef TTK_ENABLE_KAMIKAZE
  if(numberOfVertices<=0){
    cerr << "[ttkTopologicalSimplificationHelper] Error : domain has no points." << endl;
    return -5;
  }
#endif

  if(OutputOffsetScalarFieldName.length()<=0)
    OutputOffsetScalarFieldName=ttk::OffsetScalarFieldName;

  vtkSmartPointer<ttkSimplexIdTypeArray> outputOffsets=vtkSmartPointer<ttkSimplexIdTypeArray>::New();
  if(outputOffsets){
    outputOffsets->SetNumberOfComponents(1);
    outputOffsets->SetNumberOfTuples(numberOfVertices);
    outputOffsets->SetName(OutputOffsetScalarFieldName.data());
  }
#ifndef TTK_ENABLE_KAMIKAZE
  else{
    cerr << "[ttkTopologicalSimplificationHelper] Error : ttkSimplexIdTypeArray allocation problem." << endl;
    return -7;
  }
#endif

  vtkDataArray* outputScalars{};
  vtkDataArray* outputScalarsHelperVersion{};
  switch(inputScalars_->GetDataType()){
    case VTK_DOUBLE:
      outputScalars=vtkDoubleArray::New();
      outputScalarsHelperVersion=vtkDoubleArray::New();
      break;

    case VTK_FLOAT:
      outputScalars=vtkFloatArray::New();
      outputScalarsHelperVersion=vtkFloatArray::New();
      break;

    case VTK_INT:
      outputScalars=vtkIntArray::New();
      outputScalarsHelperVersion=vtkIntArray::New();
      break;

    case VTK_ID_TYPE:
      outputScalars=vtkIdTypeArray::New();
      outputScalarsHelperVersion=vtkIdTypeArray::New();
      break;

    case VTK_SHORT:
      outputScalars=vtkShortArray::New();
      outputScalarsHelperVersion=vtkShortArray::New();
      break;

    case VTK_UNSIGNED_SHORT:
      outputScalars=vtkUnsignedShortArray::New();
      outputScalarsHelperVersion=vtkUnsignedShortArray::New();
      break;

    case VTK_CHAR:
      outputScalars=vtkCharArray::New();
      outputScalarsHelperVersion=vtkCharArray::New();
      break;

    case VTK_UNSIGNED_CHAR:
      outputScalars=vtkUnsignedCharArray::New();
      outputScalarsHelperVersion=vtkUnsignedCharArray::New();
      break;

#ifndef TTK_ENABLE_KAMIKAZE
    default:
      cerr << "[ttkTopologicalSimplificationHelper] Error : Unsupported data type." << endl;
      return -8;
#endif
  }
  if(outputScalars){
    outputScalars->SetNumberOfTuples(numberOfVertices);
    outputScalars->SetName(inputScalars_->GetName());
  }
  if(outputScalarsHelperVersion){
    outputScalarsHelperVersion->SetNumberOfTuples(numberOfVertices);
    outputScalarsHelperVersion->SetName(inputScalars_->GetName());
  }
#ifndef TTK_ENABLE_KAMIKAZE
  else{
    cerr << "[ttkTopologicalSimplificationHelper] Error : vtkDataArray allocation problem." << endl;
    return -9;
  }
#endif

  const SimplexId numberOfConstraints=constraints->GetNumberOfPoints();
#ifndef TTK_ENABLE_KAMIKAZE
  if(numberOfConstraints<=0){
    cerr << "[ttkTopologicalSimplificationHelper] Error : input has no constraints." << endl;
    return -10;
  }
#endif

  topologicalSimplificationHelper_.setVertexNumber(numberOfVertices);
  topologicalSimplificationHelper_.setConstraintNumber(numberOfConstraints);
  topologicalSimplificationHelper_.setInputScalarFieldPointer(
    inputScalars_->GetVoidPointer(0));
  topologicalSimplificationHelper_.setVertexIdentifierScalarFieldPointer(
    identifiers_->GetVoidPointer(0));
  topologicalSimplificationHelper_.setConsiderIdentifierAsBlackList(
    ConsiderIdentifierAsBlackList);
  
  topologicalSimplificationHelper_.setInputOffsetScalarFieldPointer(
    inputOffsets_->GetVoidPointer(0));
  
  topologicalSimplificationHelper_.setOutputScalarFieldPointer(
    outputScalars->GetVoidPointer(0));
  
  topologicalSimplificationHelper_.setOutputOffsetScalarFieldPointer(
    outputOffsets->GetVoidPointer(0));

  topologicalSimplificationHelper_.setHelperScalarFieldPointer(
    outputScalarsHelperVersion->GetVoidPointer(0));

#ifndef TTK_ENABLE_KAMIKAZE
  if(identifiers_->GetDataType() != inputOffsets_->GetDataType()){
    cerr << "[ttkTopologicalSimplificationHelper] Error : type of identifiers and offsets are different." << endl;
    return -11;
  }
#endif

  switch(inputScalars_->GetDataType()){
    ttkTemplateMacro({
        if(inputOffsets_->GetDataType()==VTK_INT)
        ret=topologicalSimplificationHelper_.execute<VTK_TT TTK_COMMA int>();
        if(inputOffsets_->GetDataType()==VTK_ID_TYPE)
        ret=topologicalSimplificationHelper_.execute<VTK_TT TTK_COMMA vtkIdType>();
        });
  }
#ifndef TTK_ENABLE_KAMIKAZE
  // something wrong in baseCode
  if(ret){
    cerr << "[ttkTopologicalSimplificationHelper] TopologicalSimplificationHelper.execute() error code : " << ret << endl;
    return -12;
  }
#endif

  output->ShallowCopy(domain);
  output->GetPointData()->AddArray(outputOffsets);
  output->GetPointData()->AddArray(outputScalars);
  outputScalarsHelperVersion->Delete();



  vtkSmartPointer<vtkPolyData> polyDataOutput =
    vtkSmartPointer<vtkPolyData>::New();


  polyDataOutput->CopyStructure(output);

  vtkSmartPointer<vtkProgrammableFilter> programmableFilter = 
    vtkSmartPointer<vtkProgrammableFilter>::New();

  programmableFilter->SetInputData(polyDataOutput);


  params myParams;
  myParams.data = polyDataOutput;
  myParams.scalars = outputScalars;
  myParams.filter = programmableFilter;

  programmableFilter->SetExecuteMethod(AdjustPoints, &myParams);
  programmableFilter->Update();

  vtkSmartPointer<vtkPolyData> programmableFilterOutput = programmableFilter->GetPolyDataOutput();

  vtkSmartPointer<vtkAppendFilter> appendFilter =
    vtkSmartPointer<vtkAppendFilter>::New();

  appendFilter->AddInputData(programmableFilter->GetPolyDataOutput());

  appendFilter->Update();

  vtkSmartPointer<vtkUnstructuredGrid> unstructuredGrid = 
      vtkSmartPointer<vtkUnstructuredGrid>::New();

  unstructuredGrid->ShallowCopy(appendFilter->GetOutput());

  vtkSmartPointer<vtkXMLUnstructuredGridWriter> writer =
    vtkSmartPointer<vtkXMLUnstructuredGridWriter>::New();
  writer->SetFileName("TestOutputPoly.vtu");

  writer->SetInputData(unstructuredGrid);

  writer->Write();

  output->CopyStructure(programmableFilterOutput);

  outputScalars->Delete();

  {
    stringstream msg;
    msg << "[ttkTopologicalSimplificationHelper] Memory usage: " << 
m.getElapsedUsage()
      << " MB." << endl;
    dMsg(cout, msg.str(), memoryMsg);
  }
  
  return 0;
}
