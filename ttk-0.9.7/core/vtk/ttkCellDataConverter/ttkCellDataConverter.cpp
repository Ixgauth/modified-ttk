#include                  <ttkCellDataConverter.h>

#ifdef _WIN32
#include<ciso646>
#endif

using namespace std;
using namespace ttk;

vtkStandardNewMacro(ttkCellDataConverter)

ttkCellDataConverter::ttkCellDataConverter(){
  OutputType = 0;
  UseNormalization = false;
  UseAllCores = true;
  ThreadNumber = 1;
  debugLevel_ = 3;
}

ttkCellDataConverter::~ttkCellDataConverter(){
}

// transmit abort signals -- to copy paste in other wrappers
bool ttkCellDataConverter::needsToAbort(){
  return GetAbortExecute();
}

// transmit progress status -- to copy paste in other wrappers
int ttkCellDataConverter::updateProgress(const float &progress){

  {
    stringstream msg;
    msg << "[ttkCellDataConverter] " << progress*100 
	<< "% processed...." << endl;
    dMsg(cout, msg.str(), advancedInfoMsg);
  }
  
  UpdateProgress(progress);
  return 0;
}

template<typename A, typename B, typename C>
int ttkCellDataConverter::convert(vtkDataArray* inputData, vtkDataSet* output){
  A* input_ptr=static_cast<A*>(inputData->GetVoidPointer(0));
  int n=inputData->GetNumberOfComponents();
  vtkIdType N=inputData->GetNumberOfTuples();
  B* output_ptr=new B[N*n];

  if(UseNormalization){
    double type_min=numeric_limits<B>::min();
    double type_max=numeric_limits<B>::max();

    for(int k=0; k<n; ++k){
      double* input_limits=inputData->GetRange();
      
      for(vtkIdType i=0; i<N; ++i){
	double d=(double)input_ptr[i*n+k];
	d=(d-input_limits[0])/(input_limits[1]-input_limits[0]);
	d=d*(type_max-type_min)+type_min;
	output_ptr[i*n+k]=(B)d;
      }
    }
  }
  else
    for(vtkIdType i=0; i<N*n; ++i) output_ptr[i]=(B)input_ptr[i];
    
  vtkSmartPointer<C> outputData=vtkSmartPointer<C>::New();
  outputData->SetName(ScalarField.data());
  outputData->SetNumberOfComponents(n);
  outputData->SetArray(output_ptr,N*n,0);
      
  if(ScalarField.length()) output->GetCellData()->RemoveArray(ScalarField.data());    
  else output->GetCellData()->RemoveArray(0);
  output->GetCellData()->AddArray(outputData);

  return 0;
}

int ttkCellDataConverter::doIt(vtkDataSet *input, vtkDataSet *output){
  output->ShallowCopy(input);
  
  vtkDataArray* inputScalarField=nullptr;
  if(ScalarField.length())
    inputScalarField=input->GetCellData()->GetArray(ScalarField.data());
  else
    inputScalarField=input->GetCellData()->GetArray(0);
  if(!inputScalarField)
    return -1;

  auto InputType=inputScalarField->GetDataType();

  bool oldUseNormalization{UseNormalization};
  if(OutputType==SupportedType::Float or OutputType==SupportedType::Double)
    UseNormalization=false;

  if(InputType==VTK_DOUBLE){
    if(OutputType==SupportedType::Float)
      convert<double,float,vtkFloatArray>(inputScalarField,output);
    else if(OutputType==SupportedType::Int)
      convert<double,int,vtkIntArray>(inputScalarField,output);
    else if(OutputType==SupportedType::UnsignedShort)
      convert<double,unsigned short,vtkUnsignedShortArray>(inputScalarField,output);
    else if(OutputType==SupportedType::UnsignedChar)
      convert<double,unsigned char,vtkUnsignedCharArray>(inputScalarField,output);
  }
  else if(InputType==VTK_FLOAT){
    if(OutputType==SupportedType::Double)
      convert<float,double,vtkDoubleArray>(inputScalarField,output);
    else if(OutputType==SupportedType::Int)
      convert<float,int,vtkIntArray>(inputScalarField,output);
    else if(OutputType==SupportedType::UnsignedShort)
      convert<float,unsigned short,vtkUnsignedShortArray>(inputScalarField,output);
    else if(OutputType==SupportedType::UnsignedChar)
      convert<float,unsigned char,vtkUnsignedCharArray>(inputScalarField,output);
  }
  else if(InputType==VTK_INT){
    if(OutputType==SupportedType::Double)
      convert<int,double,vtkDoubleArray>(inputScalarField,output);
    else if(OutputType==SupportedType::Float)
      convert<int,float,vtkFloatArray>(inputScalarField,output);
    else if(OutputType==SupportedType::UnsignedShort)
      convert<int,unsigned short,vtkUnsignedShortArray>(inputScalarField,output);
    else if(OutputType==SupportedType::UnsignedChar)
      convert<int,unsigned char,vtkUnsignedCharArray>(inputScalarField,output);
  }
  else if(InputType==VTK_ID_TYPE){
    if(OutputType==SupportedType::Double)
      convert<vtkIdType,double,vtkDoubleArray>(inputScalarField,output);
    else if(OutputType==SupportedType::Float)
      convert<vtkIdType,float,vtkFloatArray>(inputScalarField,output);
    else if(OutputType==SupportedType::UnsignedShort)
      convert<vtkIdType,unsigned short,vtkUnsignedShortArray>(inputScalarField,output);
    else if(OutputType==SupportedType::UnsignedChar)
      convert<vtkIdType,unsigned char,vtkUnsignedCharArray>(inputScalarField,output);
  }
  else if(InputType==VTK_UNSIGNED_SHORT){
    if(OutputType==SupportedType::Double)
      convert<unsigned short,double,vtkDoubleArray>(inputScalarField,output);
    else if(OutputType==SupportedType::Float)
      convert<unsigned short,float,vtkFloatArray>(inputScalarField,output);
    else if(OutputType==SupportedType::Int)
      convert<unsigned short,int,vtkIntArray>(inputScalarField,output);
    else if(OutputType==SupportedType::UnsignedChar)
      convert<unsigned short,unsigned char,vtkUnsignedCharArray>(inputScalarField,output);
  }
  else if(InputType==VTK_UNSIGNED_CHAR){
    if(OutputType==SupportedType::Double)
      convert<unsigned char,double,vtkDoubleArray>(inputScalarField,output);
    else if(OutputType==SupportedType::Float)
      convert<unsigned char,float,vtkFloatArray>(inputScalarField,output);
    else if(OutputType==SupportedType::Int)
      convert<unsigned char,int,vtkIntArray>(inputScalarField,output);
    else if(OutputType==SupportedType::UnsignedShort)
      convert<unsigned char,unsigned short,vtkUnsignedShortArray>(inputScalarField,output);
  }
  else{
    stringstream msg;
    msg << "[ttkCellDataConverter] Unsupported data type :(" << endl;
    dMsg(cerr, msg.str(), fatalMsg);
  }

  UseNormalization=oldUseNormalization;
  return 0;
}

// to adapt if your wrapper does not inherit from vtkDataSetAlgorithm
int ttkCellDataConverter::RequestData(vtkInformation *request, 
				   vtkInformationVector **inputVector, vtkInformationVector *outputVector){

  Memory m;
  
  // here the vtkDataSet type should be changed to whatever type you consider.
  vtkDataSet *input = vtkDataSet::GetData(inputVector[0]);
  vtkDataSet *output = vtkDataSet::GetData(outputVector);
  
  doIt(input, output);
  
  {
    stringstream msg;
    msg << "[ttkCellDataConverter] Memory usage: " << m.getElapsedUsage() 
	<< " MB." << endl;
    dMsg(cout, msg.str(), memoryMsg);
  }
  
  return 1;
}
