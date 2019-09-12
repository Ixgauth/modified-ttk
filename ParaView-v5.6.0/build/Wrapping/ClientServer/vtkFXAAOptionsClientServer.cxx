// ClientServer wrapper for vtkFXAAOptions object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkFXAAOptions.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkFXAAOptionsClientServerNewCommand(void* /*ctx*/)
{
  return vtkFXAAOptions::New();
}


int VTK_EXPORT vtkFXAAOptionsCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkFXAAOptions *op = vtkFXAAOptions::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkFXAAOptions.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFXAAOptions  *temp20;
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
    vtkFXAAOptions  *temp20;
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
    vtkFXAAOptions  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRelativeContrastThreshold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRelativeContrastThreshold(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRelativeContrastThresholdMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetRelativeContrastThresholdMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRelativeContrastThresholdMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetRelativeContrastThresholdMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRelativeContrastThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetRelativeContrastThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetHardContrastThreshold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHardContrastThreshold(temp0);
      return 1;
      }
    }
  if (!strcmp("GetHardContrastThresholdMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetHardContrastThresholdMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetHardContrastThresholdMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetHardContrastThresholdMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetHardContrastThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetHardContrastThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSubpixelBlendLimit",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSubpixelBlendLimit(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSubpixelBlendLimitMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetSubpixelBlendLimitMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSubpixelBlendLimitMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetSubpixelBlendLimitMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSubpixelBlendLimit",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetSubpixelBlendLimit();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSubpixelContrastThreshold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSubpixelContrastThreshold(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSubpixelContrastThresholdMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetSubpixelContrastThresholdMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSubpixelContrastThresholdMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetSubpixelContrastThresholdMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSubpixelContrastThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetSubpixelContrastThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseHighQualityEndpoints",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseHighQualityEndpoints(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseHighQualityEndpoints",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseHighQualityEndpoints();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseHighQualityEndpointsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseHighQualityEndpointsOn();
      return 1;
      }
    }
  if (!strcmp("UseHighQualityEndpointsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseHighQualityEndpointsOff();
      return 1;
      }
    }
  if (!strcmp("SetEndpointSearchIterations",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEndpointSearchIterations(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEndpointSearchIterationsMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEndpointSearchIterationsMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetEndpointSearchIterationsMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEndpointSearchIterationsMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetEndpointSearchIterations",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEndpointSearchIterations();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkObject";
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
  vtkmsg << "Object type: vtkFXAAOptions, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkFXAAOptions_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkFXAAOptions", vtkFXAAOptionsClientServerNewCommand);
    csi->AddCommandFunction("vtkFXAAOptions", vtkFXAAOptionsCommand);
    }
}
