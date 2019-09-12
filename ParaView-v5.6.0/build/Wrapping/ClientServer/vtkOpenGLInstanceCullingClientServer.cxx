// ClientServer wrapper for vtkOpenGLInstanceCulling object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkOpenGLInstanceCulling.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkOpenGLInstanceCullingClientServerNewCommand(void* /*ctx*/)
{
  return vtkOpenGLInstanceCulling::New();
}


int VTK_EXPORT vtkOpenGLInstanceCullingCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkOpenGLInstanceCulling *op = vtkOpenGLInstanceCulling::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkOpenGLInstanceCulling.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkOpenGLInstanceCulling  *temp20;
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
    vtkOpenGLInstanceCulling  *temp20;
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
    vtkOpenGLInstanceCulling  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InitLOD",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPolyData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPolyData"))
      {
      op->InitLOD(temp0);
      return 1;
      }
    }
  if (!strcmp("AddLOD",method) && msg.GetNumberOfArguments(0) == 4)
    {
    float    temp0;
    float    temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->AddLOD(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("BuildCullingShaders",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkOpenGLShaderCache  *temp0;
    vtkIdType   temp1;
    bool   temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkOpenGLShaderCache") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->BuildCullingShaders(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfLOD",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetNumberOfLOD();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLODBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    vtkOpenGLBufferObject  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetLODBuffer(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RunCullingShaders",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkIdType   temp0;
    vtkOpenGLBufferObject  *temp1;
    vtkOpenGLBufferObject  *temp2;
    vtkOpenGLBufferObject  *temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkOpenGLBufferObject") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkOpenGLBufferObject") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkOpenGLBufferObject"))
      {
      op->RunCullingShaders(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetColorLOD",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetColorLOD(temp0);
      return 1;
      }
    }
  if (!strcmp("GetColorLOD",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetColorLOD();
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
  vtkmsg << "Object type: vtkOpenGLInstanceCulling, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkOpenGLInstanceCulling_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkOpenGLInstanceCulling", vtkOpenGLInstanceCullingClientServerNewCommand);
    csi->AddCommandFunction("vtkOpenGLInstanceCulling", vtkOpenGLInstanceCullingCommand);
    }
}
