// ClientServer wrapper for vtkOpenGLFramebufferObject object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkOpenGLFramebufferObject.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkOpenGLFramebufferObjectClientServerNewCommand(void* /*ctx*/)
{
  return vtkOpenGLFramebufferObject::New();
}


int VTK_EXPORT vtkOpenGLFramebufferObjectCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkOpenGLFramebufferObject *op = vtkOpenGLFramebufferObject::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkOpenGLFramebufferObject.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkOpenGLFramebufferObject  *temp20;
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
    vtkOpenGLFramebufferObject  *temp20;
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
    vtkOpenGLFramebufferObject  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetContext",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderWindow  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderWindow"))
      {
      op->SetContext(temp0);
      return 1;
      }
    }
  if (!strcmp("GetContext",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkOpenGLRenderWindow  *temp20;
      {
      temp20 = (op)->GetContext();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Bind",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Bind();
      return 1;
      }
    }
  if (!strcmp("Bind",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->Bind(temp0);
      return 1;
      }
    }
  if (!strcmp("UnBind",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UnBind();
      return 1;
      }
    }
  if (!strcmp("UnBind",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->UnBind(temp0);
      return 1;
      }
    }
  if (!strcmp("SaveCurrentBindings",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SaveCurrentBindings();
      return 1;
      }
    }
  if (!strcmp("SaveCurrentBindings",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SaveCurrentBindings(temp0);
      return 1;
      }
    }
  if (!strcmp("SaveCurrentBindingsAndBuffers",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SaveCurrentBindingsAndBuffers();
      return 1;
      }
    }
  if (!strcmp("SaveCurrentBindingsAndBuffers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SaveCurrentBindingsAndBuffers(temp0);
      return 1;
      }
    }
  if (!strcmp("RestorePreviousBindings",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RestorePreviousBindings();
      return 1;
      }
    }
  if (!strcmp("RestorePreviousBindings",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RestorePreviousBindings(temp0);
      return 1;
      }
    }
  if (!strcmp("RestorePreviousBindingsAndBuffers",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RestorePreviousBindingsAndBuffers();
      return 1;
      }
    }
  if (!strcmp("RestorePreviousBindingsAndBuffers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RestorePreviousBindingsAndBuffers(temp0);
      return 1;
      }
    }
  if (!strcmp("SaveCurrentBuffers",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SaveCurrentBuffers();
      return 1;
      }
    }
  if (!strcmp("SaveCurrentBuffers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SaveCurrentBuffers(temp0);
      return 1;
      }
    }
  if (!strcmp("RestorePreviousBuffers",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RestorePreviousBuffers();
      return 1;
      }
    }
  if (!strcmp("RestorePreviousBuffers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RestorePreviousBuffers(temp0);
      return 1;
      }
    }
  if (!strcmp("Start",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->Start(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StartNonOrtho",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->StartNonOrtho(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InitializeViewport",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->InitializeViewport(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("ActivateDrawBuffers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->ActivateDrawBuffers(temp0);
      return 1;
      }
    }
  if (!strcmp("ActivateDrawBuffers",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<unsigned int    > temp0(msg, 0, 2);
    int      temp1;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->ActivateDrawBuffers(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("ActivateDrawBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->ActivateDrawBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("ActivateReadBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->ActivateReadBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("ActivateBuffer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->ActivateBuffer(temp0);
      return 1;
      }
    }
  if (!strcmp("DeactivateDrawBuffers",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DeactivateDrawBuffers();
      return 1;
      }
    }
  if (!strcmp("DeactivateReadBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DeactivateReadBuffer();
      return 1;
      }
    }
  if (!strcmp("RenderQuad",method) && msg.GetNumberOfArguments(0) == 8)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkShaderProgram  *temp4;
    vtkOpenGLVertexArrayObject  *temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkShaderProgram") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkOpenGLVertexArrayObject"))
      {
      op->RenderQuad(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("AddColorAttachment",method) && msg.GetNumberOfArguments(0) == 6)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    vtkTextureObject  *temp2;
    unsigned int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkTextureObject") &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->AddColorAttachment(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("AddColorAttachment",method) && msg.GetNumberOfArguments(0) == 5)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    vtkRenderbuffer  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkRenderbuffer"))
      {
      op->AddColorAttachment(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("RemoveColorAttachment",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->RemoveColorAttachment(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveColorAttachments",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->RemoveColorAttachments(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfColorAttachments",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetNumberOfColorAttachments(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddDepthAttachment",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AddDepthAttachment();
      return 1;
      }
    }
  if (!strcmp("AddDepthAttachment",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->AddDepthAttachment(temp0);
      return 1;
      }
    }
  if (!strcmp("AddDepthAttachment",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    vtkTextureObject  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkTextureObject"))
      {
      op->AddDepthAttachment(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("AddDepthAttachment",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    vtkRenderbuffer  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkRenderbuffer"))
      {
      op->AddDepthAttachment(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveDepthAttachment",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveDepthAttachment(temp0);
      return 1;
      }
    }
  if (!strcmp("PopulateFramebuffer",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->PopulateFramebuffer(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PopulateFramebuffer",method) && msg.GetNumberOfArguments(0) == 10)
    {
    int      temp0;
    int      temp1;
    bool   temp2;
    int      temp3;
    int      temp4;
    bool   temp5;
    int      temp6;
    int      temp7;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6) &&
      msg.GetArgument(0, 9, &temp7))
      {
      temp20 = (op)->PopulateFramebuffer(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumNumberOfActiveTargets",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetMaximumNumberOfActiveTargets();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaximumNumberOfRenderTargets",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetMaximumNumberOfRenderTargets();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLastSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->GetLastSize(temp0);
      return 1;
      }
    }
  if (!strcmp("IsSupported",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkOpenGLRenderWindow  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkOpenGLRenderWindow"))
      {
      temp20 = (op)->IsSupported(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CheckFrameBufferStatus",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->CheckFrameBufferStatus(temp0);
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
  if (!strcmp("GetDrawMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetDrawMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetReadMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetReadMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBothMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetBothMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Resize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->Resize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveTexColorAttachments",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->RemoveTexColorAttachments(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveTexColorAttachment",method) && msg.GetNumberOfArguments(0) == 4)
    {
    unsigned int      temp0;
    unsigned int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->RemoveTexColorAttachment(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("RemoveRenDepthAttachment",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveRenDepthAttachment(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveTexDepthAttachment",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->RemoveTexDepthAttachment(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkFrameBufferObjectBase";
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
  vtkmsg << "Object type: vtkOpenGLFramebufferObject, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkOpenGLFramebufferObject_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkOpenGLFramebufferObject", vtkOpenGLFramebufferObjectClientServerNewCommand);
    csi->AddCommandFunction("vtkOpenGLFramebufferObject", vtkOpenGLFramebufferObjectCommand);
    }
}
