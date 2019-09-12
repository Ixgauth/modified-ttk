// ClientServer wrapper for vtkLagrangianBasicIntegrationModel object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkLagrangianBasicIntegrationModel.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkLagrangianBasicIntegrationModelCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkLagrangianBasicIntegrationModel *op = vtkLagrangianBasicIntegrationModel::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkLagrangianBasicIntegrationModel.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("IsTypeOf",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsTypeOf(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsA",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsA(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SafeDownCast",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObjectBase  *temp0;
    vtkLagrangianBasicIntegrationModel  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObjectBase"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NewInstance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkLagrangianBasicIntegrationModel  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FunctionValues",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    int      temp20;
    if(temp0 &&
      temp1)
      {
      temp20 = (op)->FunctionValues(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLocator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractCellLocator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractCellLocator"))
      {
      op->SetLocator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLocator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAbstractCellLocator  *temp20;
      {
      temp20 = (op)->GetLocator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLocatorsBuilt",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetLocatorsBuilt();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLocatorsBuilt",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLocatorsBuilt(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTracker",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkLagrangianParticleTracker  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkLagrangianParticleTracker"))
      {
      op->SetTracker(temp0);
      return 1;
      }
    }
  if (!strcmp("AddDataSet",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkDataSet  *temp0;
    bool   temp1;
    unsigned int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkDataSet") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->AddDataSet(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("ClearDataSets",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->ClearDataSets(temp0);
      return 1;
      }
    }
  if (!strcmp("SetUseInitialIntegrationTime",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseInitialIntegrationTime(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseInitialIntegrationTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseInitialIntegrationTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseInitialIntegrationTimeOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseInitialIntegrationTimeOn();
      return 1;
      }
    }
  if (!strcmp("UseInitialIntegrationTimeOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseInitialIntegrationTimeOff();
      return 1;
      }
    }
  if (!strcmp("GetTolerance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetTolerance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInputArrayToProcess",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    char    *temp4;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->SetInputArrayToProcess(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("FindInLocators",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    bool   temp20;
    if(temp0)
      {
      temp20 = (op)->FindInLocators(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InitializeVariablesParticleData",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPointData  *temp0;
    int      temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPointData") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->InitializeVariablesParticleData(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("InitializeModelPathData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkFieldData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkFieldData"))
      {
      op->InitializeModelPathData(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNonPlanarQuadSupport",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNonPlanarQuadSupport(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNonPlanarQuadSupport",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetNonPlanarQuadSupport();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NonPlanarQuadSupportOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NonPlanarQuadSupportOn();
      return 1;
      }
    }
  if (!strcmp("NonPlanarQuadSupportOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->NonPlanarQuadSupportOff();
      return 1;
      }
    }
  if (!strcmp("GetSeedArrayNames",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetSeedArrayNames();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSeedArrayComps",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIntArray  *temp20;
      {
      temp20 = (op)->GetSeedArrayComps();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSeedArrayTypes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIntArray  *temp20;
      {
      temp20 = (op)->GetSeedArrayTypes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSurfaceArrayNames",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetSurfaceArrayNames();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSurfaceArrayTypes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIntArray  *temp20;
      {
      temp20 = (op)->GetSurfaceArrayTypes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSurfaceArrayEnumValues",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkStringArray  *temp20;
      {
      temp20 = (op)->GetSurfaceArrayEnumValues();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSurfaceArrayDefaultValues",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkDoubleArray  *temp20;
      {
      temp20 = (op)->GetSurfaceArrayDefaultValues();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSurfaceArrayComps",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIntArray  *temp20;
      {
      temp20 = (op)->GetSurfaceArrayComps();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetWeightsSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWeightsSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FinalizeOutputs",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPolyData  *temp0;
    vtkDataObject  *temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPolyData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataObject"))
      {
      temp20 = (op)->FinalizeOutputs(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSeedArray",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkPointData  *temp1;
    vtkAbstractArray  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPointData"))
      {
      temp20 = (op)->GetSeedArray(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkFunctionSet";
    if (arlu->HasCommandFunction(commandName) &&
        arlu->CallCommandFunction(commandName, op, method, msg, resultStream)) { return 1; }
  }
  if(resultStream.GetNumberOfMessages() > 0 &&
     resultStream.GetCommand(0) == vtkClientServerStream::Error &&
     resultStream.GetNumberOfArguments(0) > 1)
    {
    /* A superclass wrapper prepared a special message. */
    return 0;
    }
  vtkOStrStreamWrapper vtkmsg;
  vtkmsg << "Object type: vtkLagrangianBasicIntegrationModel, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkLagrangianBasicIntegrationModel_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkLagrangianBasicIntegrationModel", vtkLagrangianBasicIntegrationModelCommand);
    }
}
