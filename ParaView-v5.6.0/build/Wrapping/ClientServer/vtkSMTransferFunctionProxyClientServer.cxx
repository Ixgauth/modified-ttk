// ClientServer wrapper for vtkSMTransferFunctionProxy object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSMTransferFunctionProxy.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSMTransferFunctionProxyClientServerNewCommand(void* /*ctx*/)
{
  return vtkSMTransferFunctionProxy::New();
}


int VTK_EXPORT vtkSMTransferFunctionProxyCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSMTransferFunctionProxy *op = vtkSMTransferFunctionProxy::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSMTransferFunctionProxy.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMTransferFunctionProxy  *temp20;
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
    vtkSMTransferFunctionProxy  *temp20;
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
    vtkSMTransferFunctionProxy  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RescaleTransferFunction",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    bool   temp2;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->RescaleTransferFunction(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RescaleTransferFunction",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkSMProxy  *temp0;
    double   temp1;
    double   temp2;
    bool   temp3;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->RescaleTransferFunction(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RescaleTransferFunctionToDataRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->RescaleTransferFunctionToDataRange(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RescaleTransferFunctionToDataRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSMProxy  *temp0;
    bool   temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->RescaleTransferFunctionToDataRange(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InvertTransferFunction",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->InvertTransferFunction();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InvertTransferFunction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      temp20 = (op)->InvertTransferFunction(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MapControlPointsToLogSpace",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->MapControlPointsToLogSpace(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MapControlPointsToLinearSpace",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->MapControlPointsToLinearSpace();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MapControlPointsToLogSpace",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSMProxy  *temp0;
    bool   temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->MapControlPointsToLogSpace(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MapControlPointsToLinearSpace",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      temp20 = (op)->MapControlPointsToLinearSpace(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ApplyPreset",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    bool   temp1;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->ApplyPreset(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ApplyPreset",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkSMProxy  *temp0;
    char    *temp1;
    bool   temp2;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->ApplyPreset(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ApplyColorMap",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->ApplyColorMap(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ApplyColorMap",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVXMLElement  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVXMLElement"))
      {
      temp20 = (op)->ApplyColorMap(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ApplyColorMap",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSMProxy  *temp0;
    char    *temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->ApplyColorMap(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ApplyColorMap",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSMProxy  *temp0;
    vtkPVXMLElement  *temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVXMLElement"))
      {
      temp20 = (op)->ApplyColorMap(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SaveColorMap",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVXMLElement  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVXMLElement"))
      {
      temp20 = (op)->SaveColorMap(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SaveColorMap",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSMProxy  *temp0;
    vtkPVXMLElement  *temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVXMLElement"))
      {
      temp20 = (op)->SaveColorMap(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsScalarBarVisible",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      temp20 = (op)->IsScalarBarVisible(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsScalarBarVisible",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSMProxy  *temp0;
    vtkSMProxy  *temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMProxy"))
      {
      temp20 = (op)->IsScalarBarVisible(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FindScalarBarRepresentation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    vtkSMProxy  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      temp20 = (op)->FindScalarBarRepresentation(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FindScalarBarRepresentation",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSMProxy  *temp0;
    vtkSMProxy  *temp1;
    vtkSMProxy  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkSMProxy"))
      {
      temp20 = (op)->FindScalarBarRepresentation(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UpdateScalarBarsComponentTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPVArrayInformation  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPVArrayInformation"))
      {
      temp20 = (op)->UpdateScalarBarsComponentTitle(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UpdateScalarBarsComponentTitle",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSMProxy  *temp0;
    vtkPVArrayInformation  *temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPVArrayInformation"))
      {
      temp20 = (op)->UpdateScalarBarsComponentTitle(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ComputeDataRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    bool   temp20;
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      temp20 = (op)->ComputeDataRange(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ComputeAvailableAnnotations",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->ComputeAvailableAnnotations(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ComputeAvailableAnnotations",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSMProxy  *temp0;
    bool   temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->ComputeAvailableAnnotations(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ResetPropertiesToDefaults",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->ResetPropertiesToDefaults(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("ResetPropertiesToDefaults",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkSMProxy  *temp0;
    char    *temp1;
    bool   temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->ResetPropertiesToDefaults(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("ResetRescaleModeToGlobalSetting",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetRescaleModeToGlobalSetting();
      return 1;
      }
    }
  if (!strcmp("ConvertLegacyColorMapsToJSON",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->ConvertLegacyColorMapsToJSON(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    bool   temp20;
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      temp20 = (op)->GetRange(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ResetPropertiesToXMLDefaults",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetPropertiesToXMLDefaults();
      return 1;
      }
    }

  {
    const char* commandName = "vtkSMProxy";
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
  vtkmsg << "Object type: vtkSMTransferFunctionProxy, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSMTransferFunctionProxy_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSMTransferFunctionProxy", vtkSMTransferFunctionProxyClientServerNewCommand);
    csi->AddCommandFunction("vtkSMTransferFunctionProxy", vtkSMTransferFunctionProxyCommand);
    }
}