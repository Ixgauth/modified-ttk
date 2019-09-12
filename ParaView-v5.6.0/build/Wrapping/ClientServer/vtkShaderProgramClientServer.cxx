// ClientServer wrapper for vtkShaderProgram object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkShaderProgram.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkShaderProgramClientServerNewCommand(void* /*ctx*/)
{
  return vtkShaderProgram::New();
}


int VTK_EXPORT vtkShaderProgramCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkShaderProgram *op = vtkShaderProgram::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkShaderProgram.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkShaderProgram  *temp20;
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
    vtkShaderProgram  *temp20;
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
    vtkShaderProgram  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVertexShader",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkShader  *temp20;
      {
      temp20 = (op)->GetVertexShader();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetVertexShader",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkShader  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkShader"))
      {
      op->SetVertexShader(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFragmentShader",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkShader  *temp20;
      {
      temp20 = (op)->GetFragmentShader();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFragmentShader",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkShader  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkShader"))
      {
      op->SetFragmentShader(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGeometryShader",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkShader  *temp20;
      {
      temp20 = (op)->GetGeometryShader();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGeometryShader",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkShader  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkShader"))
      {
      op->SetGeometryShader(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTransformFeedback",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTransformFeedback  *temp20;
      {
      temp20 = (op)->GetTransformFeedback();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTransformFeedback",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTransformFeedback  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTransformFeedback"))
      {
      op->SetTransformFeedback(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCompiled",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetCompiled();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCompiled",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCompiled(temp0);
      return 1;
      }
    }
  if (!strcmp("CompiledOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CompiledOn();
      return 1;
      }
    }
  if (!strcmp("CompiledOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CompiledOff();
      return 1;
      }
    }
  if (!strcmp("GetMD5Hash",method) && msg.GetNumberOfArguments(0) == 2)
    {
    std::string   temp20;
      {
      temp20 = (op)->GetMD5Hash();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMD5Hash",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMD5Hash(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("isBound",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->isBound();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("GetHandle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetHandle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetError",method) && msg.GetNumberOfArguments(0) == 2)
    {
    std::string   temp20;
      {
      temp20 = (op)->GetError();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("EnableAttributeArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->EnableAttributeArray(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DisableAttributeArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->DisableAttributeArray(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUniformi",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    int      temp1;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->SetUniformi(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUniformf",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    float    temp1;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->SetUniformf(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUniformMatrix",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkMatrix3x3  *temp1;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkMatrix3x3"))
      {
      temp20 = (op)->SetUniformMatrix(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUniformMatrix",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkMatrix4x4  *temp1;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkMatrix4x4"))
      {
      temp20 = (op)->SetUniformMatrix(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUniformMatrix3x3",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      temp20 = (op)->SetUniformMatrix3x3(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUniformMatrix4x4",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      temp20 = (op)->SetUniformMatrix4x4(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUniform1iv",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    int      temp1;
    vtkClientServerStreamDataArg<int    > temp2(msg, 0, 4);
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2)
      {
      temp20 = (op)->SetUniform1iv(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUniform1fv",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    int      temp1;
    vtkClientServerStreamDataArg<float  > temp2(msg, 0, 4);
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2)
      {
      temp20 = (op)->SetUniform1fv(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUniformMatrix4x4v",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    int      temp1;
    vtkClientServerStreamDataArg<float  > temp2(msg, 0, 4);
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2)
      {
      temp20 = (op)->SetUniformMatrix4x4v(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfOutputs",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfOutputs(temp0);
      return 1;
      }
    }
  if (!strcmp("Substitute",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkShader  *temp0;
    char    *temp1;
    char    *temp2;
    bool   temp3;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkShader") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->Substitute(temp0,vtkStdString(temp1),vtkStdString(temp2),temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsUniformUsed",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsUniformUsed(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsAttributeUsed",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsAttributeUsed(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFileNamePrefixForDebugging",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFileNamePrefixForDebugging(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFileNamePrefixForDebugging",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetFileNamePrefixForDebugging();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUniformGroupUpdateTime",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    unsigned long     temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetUniformGroupUpdateTime(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetUniformGroupUpdateTime",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    unsigned long     temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetUniformGroupUpdateTime(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FindUniform",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->FindUniform(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("FindAttributeArray",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->FindAttributeArray(temp0);
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
  vtkmsg << "Object type: vtkShaderProgram, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkShaderProgram_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkShaderProgram", vtkShaderProgramClientServerNewCommand);
    csi->AddCommandFunction("vtkShaderProgram", vtkShaderProgramCommand);
    }
}
