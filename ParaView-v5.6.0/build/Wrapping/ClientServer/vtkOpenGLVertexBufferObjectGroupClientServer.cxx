// ClientServer wrapper for vtkOpenGLVertexBufferObjectGroup object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkOpenGLVertexBufferObjectGroup.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkOpenGLVertexBufferObjectGroupClientServerNewCommand(void* /*ctx*/)
{
  return vtkOpenGLVertexBufferObjectGroup::New();
}


int VTK_EXPORT vtkOpenGLVertexBufferObjectGroupCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkOpenGLVertexBufferObjectGroup *op = vtkOpenGLVertexBufferObjectGroup::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkOpenGLVertexBufferObjectGroup.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkOpenGLVertexBufferObjectGroup  *temp20;
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
    vtkOpenGLVertexBufferObjectGroup  *temp20;
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
    vtkOpenGLVertexBufferObjectGroup  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfComponents",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetNumberOfComponents(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfTuples",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetNumberOfTuples(temp0);
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
  if (!strcmp("GetVBO",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    vtkOpenGLVertexBufferObject  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetVBO(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddAllAttributesToVAO",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkShaderProgram  *temp0;
    vtkOpenGLVertexArrayObject  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkShaderProgram") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkOpenGLVertexArrayObject"))
      {
      op->AddAllAttributesToVAO(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveAttribute",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveAttribute(temp0);
      return 1;
      }
    }
  if (!strcmp("CacheDataArray",method) && msg.GetNumberOfArguments(0) == 6)
    {
    char    *temp0;
    vtkDataArray  *temp1;
    vtkOpenGLVertexBufferObjectCache  *temp2;
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkOpenGLVertexBufferObjectCache") &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->CacheDataArray(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("CacheDataArray",method) && msg.GetNumberOfArguments(0) == 6)
    {
    char    *temp0;
    vtkDataArray  *temp1;
    vtkViewport  *temp2;
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkViewport") &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->CacheDataArray(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("AppendDataArray",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    vtkDataArray  *temp1;
    int      temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkDataArray") &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->AppendDataArray(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("BuildAllVBOs",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkOpenGLVertexBufferObjectCache  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkOpenGLVertexBufferObjectCache"))
      {
      op->BuildAllVBOs(temp0);
      return 1;
      }
    }
  if (!strcmp("BuildAllVBOs",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      op->BuildAllVBOs(temp0);
      return 1;
      }
    }
  if (!strcmp("ClearAllVBOs",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearAllVBOs();
      return 1;
      }
    }
  if (!strcmp("ClearAllDataArrays",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ClearAllDataArrays();
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
  vtkmsg << "Object type: vtkOpenGLVertexBufferObjectGroup, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkOpenGLVertexBufferObjectGroup_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkOpenGLVertexBufferObjectGroup", vtkOpenGLVertexBufferObjectGroupClientServerNewCommand);
    csi->AddCommandFunction("vtkOpenGLVertexBufferObjectGroup", vtkOpenGLVertexBufferObjectGroupCommand);
    }
}
