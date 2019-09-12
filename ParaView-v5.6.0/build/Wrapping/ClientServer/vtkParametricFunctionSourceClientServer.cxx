// ClientServer wrapper for vtkParametricFunctionSource object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkParametricFunctionSource.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkParametricFunctionSourceClientServerNewCommand(void* /*ctx*/)
{
  return vtkParametricFunctionSource::New();
}


int VTK_EXPORT vtkParametricFunctionSourceCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkParametricFunctionSource *op = vtkParametricFunctionSource::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkParametricFunctionSource.  "
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
    vtkParametricFunctionSource  *temp20;
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
    vtkParametricFunctionSource  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkParametricFunctionSource  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetParametricFunction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkParametricFunction  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkParametricFunction"))
      {
      op->SetParametricFunction(temp0);
      return 1;
      }
    }
  if (!strcmp("GetParametricFunction",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkParametricFunction  *temp20;
      {
      temp20 = (op)->GetParametricFunction();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUResolution",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUResolution(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUResolutionMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUResolutionMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUResolutionMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUResolutionMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUResolution",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUResolution();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVResolution",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVResolution(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVResolutionMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetVResolutionMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVResolutionMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetVResolutionMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVResolution",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetVResolution();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetWResolution",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetWResolution(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWResolutionMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWResolutionMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetWResolutionMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWResolutionMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetWResolution",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetWResolution();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateTextureCoordinatesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateTextureCoordinatesOn();
      return 1;
      }
    }
  if (!strcmp("GenerateTextureCoordinatesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateTextureCoordinatesOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateTextureCoordinates",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateTextureCoordinates(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateTextureCoordinatesMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateTextureCoordinatesMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetGenerateTextureCoordinatesMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateTextureCoordinatesMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetGenerateTextureCoordinates",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateTextureCoordinates();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateNormalsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateNormalsOn();
      return 1;
      }
    }
  if (!strcmp("GenerateNormalsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateNormalsOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateNormals",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateNormals(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateNormalsMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateNormalsMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetGenerateNormalsMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateNormalsMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetGenerateNormals",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateNormals();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScalarMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScalarMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScalarModeMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScalarModeMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetScalarModeMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScalarModeMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetScalarMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScalarMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToNone",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToNone();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToU",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToU();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToV",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToV();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToU0",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToU0();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToV0",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToV0();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToU0V0",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToU0V0();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToModulus",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToModulus();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToPhase",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToPhase();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToQuadrant",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToQuadrant();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToX",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToX();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToY",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToY();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToZ",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToZ();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToDistance",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToDistance();
      return 1;
      }
    }
  if (!strcmp("SetScalarModeToFunctionDefined",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SetScalarModeToFunctionDefined();
      return 1;
      }
    }
  if (!strcmp("GetMTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetMTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputPointsPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutputPointsPrecision(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputPointsPrecision",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutputPointsPrecision();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkPolyDataAlgorithm";
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
  vtkmsg << "Object type: vtkParametricFunctionSource, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkParametricFunctionSource_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkParametricFunctionSource", vtkParametricFunctionSourceClientServerNewCommand);
    csi->AddCommandFunction("vtkParametricFunctionSource", vtkParametricFunctionSourceCommand);
    }
}