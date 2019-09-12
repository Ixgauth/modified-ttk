// ClientServer wrapper for vtkOpenGLRenderUtilities object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkOpenGLRenderUtilities.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkOpenGLRenderUtilitiesCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkOpenGLRenderUtilities *op = vtkOpenGLRenderUtilities::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkOpenGLRenderUtilities.  "
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
    vtkOpenGLRenderUtilities  *temp20;
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
    vtkOpenGLRenderUtilities  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderQuad",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    vtkShaderProgram  *temp2;
    vtkOpenGLVertexArrayObject  *temp3;
    if(temp0 &&
      temp1 &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkShaderProgram") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkOpenGLVertexArrayObject"))
      {
      op->RenderQuad(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("GetFullScreenQuadVertexShader",method) && msg.GetNumberOfArguments(0) == 2)
    {
    std::string   temp20;
      {
      temp20 = (op)->GetFullScreenQuadVertexShader();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFullScreenQuadFragmentShaderTemplate",method) && msg.GetNumberOfArguments(0) == 2)
    {
    std::string   temp20;
      {
      temp20 = (op)->GetFullScreenQuadFragmentShaderTemplate();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFullScreenQuadGeometryShader",method) && msg.GetNumberOfArguments(0) == 2)
    {
    std::string   temp20;
      {
      temp20 = (op)->GetFullScreenQuadGeometryShader();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PrepFullScreenVAO",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkOpenGLRenderWindow  *temp0;
    vtkOpenGLVertexArrayObject  *temp1;
    vtkShaderProgram  *temp2;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkOpenGLRenderWindow") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkOpenGLVertexArrayObject") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkShaderProgram"))
      {
      temp20 = (op)->PrepFullScreenVAO(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawFullScreenQuad",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawFullScreenQuad();
      return 1;
      }
    }
  if (!strcmp("PrepFullScreenVAO",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkOpenGLBufferObject  *temp0;
    vtkOpenGLVertexArrayObject  *temp1;
    vtkShaderProgram  *temp2;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkOpenGLBufferObject") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkOpenGLVertexArrayObject") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkShaderProgram"))
      {
      temp20 = (op)->PrepFullScreenVAO(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("MarkDebugEvent",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->MarkDebugEvent(vtkStdString(temp0));
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
  vtkmsg << "Object type: vtkOpenGLRenderUtilities, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkOpenGLRenderUtilities_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkOpenGLRenderUtilities", vtkOpenGLRenderUtilitiesCommand);
    }
}
