// ClientServer wrapper for vtkGPUVolumeRayCastMapper object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkGPUVolumeRayCastMapper.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkGPUVolumeRayCastMapperClientServerNewCommand(void* /*ctx*/)
{
  return vtkGPUVolumeRayCastMapper::New();
}


int VTK_EXPORT vtkGPUVolumeRayCastMapperCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkGPUVolumeRayCastMapper *op = vtkGPUVolumeRayCastMapper::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkGPUVolumeRayCastMapper.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkGPUVolumeRayCastMapper  *temp20;
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
    vtkGPUVolumeRayCastMapper  *temp20;
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
    vtkGPUVolumeRayCastMapper  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetLockSampleDistanceToInputSpacing",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLockSampleDistanceToInputSpacing(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLockSampleDistanceToInputSpacingMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLockSampleDistanceToInputSpacingMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLockSampleDistanceToInputSpacingMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLockSampleDistanceToInputSpacingMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLockSampleDistanceToInputSpacing",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetLockSampleDistanceToInputSpacing();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LockSampleDistanceToInputSpacingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LockSampleDistanceToInputSpacingOn();
      return 1;
      }
    }
  if (!strcmp("LockSampleDistanceToInputSpacingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LockSampleDistanceToInputSpacingOff();
      return 1;
      }
    }
  if (!strcmp("SetUseJittering",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseJittering(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseJitteringMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseJitteringMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUseJitteringMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseJitteringMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUseJittering",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseJittering();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseJitteringOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseJitteringOn();
      return 1;
      }
    }
  if (!strcmp("UseJitteringOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseJitteringOff();
      return 1;
      }
    }
  if (!strcmp("SetUseDepthPass",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseDepthPass(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseDepthPassMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseDepthPassMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUseDepthPassMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseDepthPassMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUseDepthPass",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUseDepthPass();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseDepthPassOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseDepthPassOn();
      return 1;
      }
    }
  if (!strcmp("UseDepthPassOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseDepthPassOff();
      return 1;
      }
    }
  if (!strcmp("GetDepthPassContourValues",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkContourValues  *temp20;
      {
      temp20 = (op)->GetDepthPassContourValues();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetImageSampleDistance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetImageSampleDistance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetImageSampleDistanceMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetImageSampleDistanceMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetImageSampleDistanceMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetImageSampleDistanceMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetImageSampleDistance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetImageSampleDistance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMinimumImageSampleDistance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMinimumImageSampleDistance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMinimumImageSampleDistanceMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMinimumImageSampleDistanceMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMinimumImageSampleDistanceMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMinimumImageSampleDistanceMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMinimumImageSampleDistance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMinimumImageSampleDistance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaximumImageSampleDistance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumImageSampleDistance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumImageSampleDistanceMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMaximumImageSampleDistanceMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumImageSampleDistanceMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMaximumImageSampleDistanceMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumImageSampleDistance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMaximumImageSampleDistance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetReportProgress",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetReportProgress(temp0);
      return 1;
      }
    }
  if (!strcmp("GetReportProgress",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetReportProgress();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsRenderSupported",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkRenderWindow  *temp0;
    vtkVolumeProperty  *temp1;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderWindow") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkVolumeProperty"))
      {
      temp20 = (op)->IsRenderSupported(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaskInput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkImageData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageData"))
      {
      op->SetMaskInput(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaskInput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageData  *temp20;
      {
      temp20 = (op)->GetMaskInput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaskType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaskType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaskType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMaskType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaskTypeToBinary",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetMaskTypeToBinary();
      return 1;
      }
    }
  if (!strcmp("SetMaskTypeToLabelMap",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetMaskTypeToLabelMap();
      return 1;
      }
    }
  if (!strcmp("SetMaskBlendFactor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaskBlendFactor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaskBlendFactorMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMaskBlendFactorMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaskBlendFactorMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMaskBlendFactorMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaskBlendFactor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMaskBlendFactor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRenderToImage",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRenderToImage(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRenderToImage",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRenderToImage();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderToImageOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RenderToImageOn();
      return 1;
      }
    }
  if (!strcmp("RenderToImageOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RenderToImageOff();
      return 1;
      }
    }
  if (!strcmp("SetDepthImageScalarType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDepthImageScalarType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDepthImageScalarType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDepthImageScalarType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDepthImageScalarTypeToUnsignedChar",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDepthImageScalarTypeToUnsignedChar();
      return 1;
      }
    }
  if (!strcmp("SetDepthImageScalarTypeToUnsignedShort",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDepthImageScalarTypeToUnsignedShort();
      return 1;
      }
    }
  if (!strcmp("SetDepthImageScalarTypeToFloat",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetDepthImageScalarTypeToFloat();
      return 1;
      }
    }
  if (!strcmp("SetClampDepthToBackface",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetClampDepthToBackface(temp0);
      return 1;
      }
    }
  if (!strcmp("GetClampDepthToBackface",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetClampDepthToBackface();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ClampDepthToBackfaceOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClampDepthToBackfaceOn();
      return 1;
      }
    }
  if (!strcmp("ClampDepthToBackfaceOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClampDepthToBackfaceOff();
      return 1;
      }
    }
  if (!strcmp("GetDepthImage",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkImageData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageData"))
      {
      op->GetDepthImage(temp0);
      return 1;
      }
    }
  if (!strcmp("GetColorImage",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkImageData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageData"))
      {
      op->GetColorImage(temp0);
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
  if (!strcmp("GPURender",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkRenderer  *temp0;
    vtkVolume  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkVolume"))
      {
      op->GPURender(temp0,temp1);
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
  if (!strcmp("GetReductionRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetReductionRatio(temp0);
      return 1;
      }
    }
  if (!strcmp("SetColorRangeType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetColorRangeType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetColorRangeType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetColorRangeType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScalarOpacityRangeType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarOpacityRangeType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarOpacityRangeType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScalarOpacityRangeType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGradientOpacityRangeType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGradientOpacityRangeType(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGradientOpacityRangeType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGradientOpacityRangeType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImageData  *temp20;
      {
      temp20 = (op)->GetInput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RemoveInputConnection",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkAlgorithmOutput  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkAlgorithmOutput"))
      {
      op->RemoveInputConnection(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveInputConnection",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->RemoveInputConnection(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetInputConnection",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkAlgorithmOutput  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkAlgorithmOutput"))
      {
      op->SetInputConnection(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetInputConnection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAlgorithmOutput  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAlgorithmOutput"))
      {
      op->SetInputConnection(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInputCount",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInputCount();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTransformedInput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkImageData  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetTransformedInput(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBoundsFromPort",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    double  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetBoundsFromPort(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,6) << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkGPUVolumeRayCastMapper, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkGPUVolumeRayCastMapper_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkGPUVolumeRayCastMapper", vtkGPUVolumeRayCastMapperClientServerNewCommand);
    csi->AddCommandFunction("vtkGPUVolumeRayCastMapper", vtkGPUVolumeRayCastMapperCommand);
    }
}
