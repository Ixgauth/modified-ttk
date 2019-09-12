// ClientServer wrapper for vtkRIBProperty object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkRIBProperty.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkRIBPropertyClientServerNewCommand(void* /*ctx*/)
{
  return vtkRIBProperty::New();
}


int VTK_EXPORT vtkRIBPropertyCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkRIBProperty *op = vtkRIBProperty::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkRIBProperty.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRIBProperty  *temp20;
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
    vtkRIBProperty  *temp20;
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
    vtkRIBProperty  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSurfaceShaderUsesDefaultParameters",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSurfaceShaderUsesDefaultParameters(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSurfaceShaderUsesDefaultParameters",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetSurfaceShaderUsesDefaultParameters();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SurfaceShaderUsesDefaultParametersOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SurfaceShaderUsesDefaultParametersOn();
      return 1;
      }
    }
  if (!strcmp("SurfaceShaderUsesDefaultParametersOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SurfaceShaderUsesDefaultParametersOff();
      return 1;
      }
    }
  if (!strcmp("SetSurfaceShader",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSurfaceShader(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSurfaceShader",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetSurfaceShader();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDisplacementShader",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDisplacementShader(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDisplacementShader",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetDisplacementShader();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVariable",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetVariable(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AddVariable",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddVariable(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetDeclarations",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetDeclarations();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetParameter",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetParameter(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AddParameter",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddParameter(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetSurfaceShaderParameter",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetSurfaceShaderParameter(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AddSurfaceShaderParameter",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddSurfaceShaderParameter(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetDisplacementShaderParameter",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetDisplacementShaderParameter(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AddDisplacementShaderParameter",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddDisplacementShaderParameter(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetParameters",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetParameters();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSurfaceShaderParameters",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetSurfaceShaderParameters();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDisplacementShaderParameters",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetDisplacementShaderParameters();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkProperty";
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
  vtkmsg << "Object type: vtkRIBProperty, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkRIBProperty_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkRIBProperty", vtkRIBPropertyClientServerNewCommand);
    csi->AddCommandFunction("vtkRIBProperty", vtkRIBPropertyCommand);
    }
}
