/// \ingroup vtk
/// \class ttkCellDataConverter
/// \author Guillaume Favelier <guillaume.favelier@lip6.fr>
/// \date February 2016
///
/// \brief TTK VTK-filter that converts data types for cell-based scalar fields 
/// (for instance, from double to float).
///
/// \param Input Input cell-based scalar field (vtkDataSet)
/// \param Output Output cell-based scalar field (vtkDataSet)
///
/// This filter can be used as any other VTK filter (for instance, by using the 
/// sequence of calls SetInputData(), Update(), GetOutput()).
///
/// See the related ParaView example state files for usage examples within a 
/// VTK pipeline.
///
/// \sa vtkPointDataConverter

#ifndef _TTK_CELLDATACONVERTER_H
#define _TTK_CELLDATACONVERTER_H

// VTK includes -- to adapt
#include                  <vtkUnsignedCharArray.h>
#include                  <vtkUnsignedShortArray.h>
#include                  <vtkDataArray.h>
#include                  <vtkDataSet.h>
#include                  <vtkDataSetAlgorithm.h>
#include                  <vtkDoubleArray.h>
#include                  <vtkFiltersCoreModule.h>
#include                  <vtkFloatArray.h>
#include                  <vtkInformation.h>
#include                  <vtkIntArray.h>
#include                  <vtkIdTypeArray.h>
#include                  <vtkObjectFactory.h>
#include                  <vtkCellData.h>
#include                  <vtkSmartPointer.h>

// ttk code includes
#include                  <Wrapper.h>

#include<limits>

#ifndef TTK_PLUGIN
class VTKFILTERSCORE_EXPORT ttkCellDataConverter
#else
class ttkCellDataConverter
#endif
: public vtkDataSetAlgorithm, public ttk::Wrapper{

enum SupportedType{
Double=0,
  Float,
  Int,
  IdType,
  UnsignedShort,
  UnsignedChar,
  };

  public:      
    static ttkCellDataConverter* New();
    
    vtkTypeMacro(ttkCellDataConverter, vtkDataSetAlgorithm);
    
    // default ttk setters
    vtkSetMacro(debugLevel_, int);

    void SetThreads(){
      if(!UseAllCores)
        threadNumber_ = ThreadNumber;
      else{
        threadNumber_ = ttk::OsCall::getNumberOfCores();
      }
      Modified();
    }
    
    void SetThreadNumber(int threadNumber){
      ThreadNumber = threadNumber;
      SetThreads();
    }   
    
    void SetUseAllCores(bool onOff){
      UseAllCores = onOff;
      SetThreads();
    }
    // end of default ttk setters
    
    vtkSetMacro(ScalarField, std::string);
    vtkGetMacro(ScalarField, std::string);

    void SetOutputType(int outputType){
      OutputType = outputType;
      Modified();
    }
    vtkGetMacro(OutputType, int);

    void SetUseNormalization(bool onOff){
      UseNormalization = onOff;
      Modified();
    }
    vtkGetMacro(UseNormalization, int);

  protected:
    
    ttkCellDataConverter();    
    ~ttkCellDataConverter();

    int RequestData(vtkInformation *request, 
		      vtkInformationVector **inputVector, vtkInformationVector *outputVector);

    template<typename A, typename B, typename C>
      int convert(vtkDataArray* inputData, vtkDataSet* output);
  private:
    
    bool UseAllCores;
    int ThreadNumber;
    std::string ScalarField;
    int OutputType;
    bool UseNormalization;
    
    // base code features
    int doIt(vtkDataSet *input, vtkDataSet *output);
    bool needsToAbort();
    int updateProgress(const float &progress);   
};

#endif // _TTK_CELLDATACONVERTER_H
