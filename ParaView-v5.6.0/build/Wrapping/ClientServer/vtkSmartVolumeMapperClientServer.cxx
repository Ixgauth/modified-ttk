// ClientServer wrapper for vtkSmartVolumeMapper object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSmartVolumeMapper.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSmartVolumeMapperClientServerNewCommand(void* /*ctx*/)
{
  return vtkSmartVolumeMapper::New();
}


int VTK_EXPORT vtkSmartVolumeMapperCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSmartVolumeMapper *op = vtkSmartVolumeMapper::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSmartVolumeMapper.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSmartVolumeMapper  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
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
    vtkSmartVolumeMapper  *temp20;
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
    vtkSmartVolumeMapper  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFinalColorWindow",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFinalColorWindow(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFinalColorWindow",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetFinalColorWindow();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFinalColorLevel",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFinalColorLevel(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFinalColorLevel",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetFinalColorLevel();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRequestedRenderMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRequestedRenderMode(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRequestedRenderModeToDefault",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetRequestedRenderModeToDefault();
      return 1;
      }
    }
  if (!strcmp("SetRequestedRenderModeToRayCast",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetRequestedRenderModeToRayCast();
      return 1;
      }
    }
  if (!strcmp("SetRequestedRenderModeToGPU",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetRequestedRenderModeToGPU();
      return 1;
      }
    }
  if (!strcmp("SetRequestedRenderModeToOSPRay",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetRequestedRenderModeToOSPRay();
      return 1;
      }
    }
  if (!strcmp("GetRequestedRenderMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRequestedRenderMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLastUsedRenderMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLastUsedRenderMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaxMemoryInBytes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaxMemoryInBytes(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaxMemoryInBytes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetMaxMemoryInBytes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaxMemoryFraction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaxMemoryFraction(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaxMemoryFractionMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMaxMemoryFractionMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaxMemoryFractionMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMaxMemoryFractionMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaxMemoryFraction",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMaxMemoryFraction();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInterpolationMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInterpolationMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInterpolationModeMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInterpolationModeMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInterpolationModeMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInterpolationModeMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInterpolationMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInterpolationMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInterpolationModeToNearestNeighbor",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInterpolationModeToNearestNeighbor();
      return 1;
      }
    }
  if (!strcmp("SetInterpolationModeToLinear",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInterpolationModeToLinear();
      return 1;
      }
    }
  if (!strcmp("SetInterpolationModeToCubic",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetInterpolationModeToCubic();
      return 1;
      }
    }
  if (!strcmp("SetInteractiveUpdateRate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInteractiveUpdateRate(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInteractiveUpdateRateMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetInteractiveUpdateRateMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInteractiveUpdateRateMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetInteractiveUpdateRateMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInteractiveUpdateRate",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetInteractiveUpdateRate();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInteractiveAdjustSampleDistances",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInteractiveAdjustSampleDistances(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInteractiveAdjustSampleDistancesMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractiveAdjustSampleDistancesMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInteractiveAdjustSampleDistancesMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractiveAdjustSampleDistancesMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInteractiveAdjustSampleDistances",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractiveAdjustSampleDistances();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InteractiveAdjustSampleDistancesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InteractiveAdjustSampleDistancesOn();
      return 1;
      }
    }
  if (!strcmp("InteractiveAdjustSampleDistancesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InteractiveAdjustSampleDistancesOff();
      return 1;
      }
    }
  if (!strcmp("SetAutoAdjustSampleDistances",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAutoAdjustSampleDistances(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAutoAdjustSampleDistancesMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutoAdjustSampleDistancesMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAutoAdjustSampleDistancesMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutoAdjustSampleDistancesMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAutoAdjustSampleDistances",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAutoAdjustSampleDistances();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AutoAdjustSampleDistancesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoAdjustSampleDistancesOn();
      return 1;
      }
    }
  if (!strcmp("AutoAdjustSampleDistancesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoAdjustSampleDistancesOff();
      return 1;
      }
    }
  if (!strcmp("SetSampleDistance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSampleDistance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSampleDistance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetSampleDistance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Render",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkRenderer  *temp0;
    vtkVolume  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkVolume"))
      {
      op->Render(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("ReleaseGraphicsResources",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkWindow  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkWindow"))
      {
      op->ReleaseGraphicsResources(temp0);
      return 1;
      }
    }
  if (!strcmp("SetVectorMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVectorMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVectorMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetVectorMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVectorComponent",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVectorComponent(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVectorComponentMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetVectorComponentMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVectorComponentMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetVectorComponentMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVectorComponent",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetVectorComponent();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkVolumeMapper";
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
  vtkmsg << "Object type: vtkSmartVolumeMapper, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSmartVolumeMapper_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSmartVolumeMapper", vtkSmartVolumeMapperClientServerNewCommand);
    csi->AddCommandFunction("vtkSmartVolumeMapper", vtkSmartVolumeMapperCommand);
    }
}