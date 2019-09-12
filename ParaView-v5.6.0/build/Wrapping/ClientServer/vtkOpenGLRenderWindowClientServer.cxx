// ClientServer wrapper for vtkOpenGLRenderWindow object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkOpenGLRenderWindow.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkOpenGLRenderWindowCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkOpenGLRenderWindow *op = vtkOpenGLRenderWindow::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkOpenGLRenderWindow.  "
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
    vtkOpenGLRenderWindow  *temp20;
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
    vtkOpenGLRenderWindow  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRenderingBackend",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetRenderingBackend();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGlobalMaximumNumberOfMultiSamples",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGlobalMaximumNumberOfMultiSamples(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGlobalMaximumNumberOfMultiSamples",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGlobalMaximumNumberOfMultiSamples();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPixelData",method) && msg.GetNumberOfArguments(0) == 9)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    int      temp4;
    vtkUnsignedCharArray  *temp5;
    int      temp6;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkUnsignedCharArray") &&
      msg.GetArgument(0, 8, &temp6))
      {
      temp20 = (op)->GetPixelData(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPixelData",method) && msg.GetNumberOfArguments(0) == 9)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkClientServerStreamDataArg<unsigned char   > temp4(msg, 0, 6);
    int      temp5;
    int      temp6;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      temp20 = (op)->SetPixelData(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPixelData",method) && msg.GetNumberOfArguments(0) == 9)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkUnsignedCharArray  *temp4;
    int      temp5;
    int      temp6;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkUnsignedCharArray") &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6))
      {
      temp20 = (op)->SetPixelData(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRGBAPixelData",method) && msg.GetNumberOfArguments(0) == 9)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    int      temp4;
    vtkFloatArray  *temp5;
    int      temp6;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkFloatArray") &&
      msg.GetArgument(0, 8, &temp6))
      {
      temp20 = (op)->GetRGBAPixelData(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRGBAPixelData",method) && msg.GetNumberOfArguments(0) == 10)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkClientServerStreamDataArg<float  > temp4(msg, 0, 6);
    int      temp5;
    int      temp6;
    int      temp7;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6) &&
      msg.GetArgument(0, 9, &temp7))
      {
      temp20 = (op)->SetRGBAPixelData(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRGBAPixelData",method) && msg.GetNumberOfArguments(0) == 10)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkFloatArray  *temp4;
    int      temp5;
    int      temp6;
    int      temp7;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkFloatArray") &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6) &&
      msg.GetArgument(0, 9, &temp7))
      {
      temp20 = (op)->SetRGBAPixelData(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReleaseRGBAPixelData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    if(temp0)
      {
      op->ReleaseRGBAPixelData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRGBACharPixelData",method) && msg.GetNumberOfArguments(0) == 9)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    int      temp4;
    vtkUnsignedCharArray  *temp5;
    int      temp6;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 7, &temp5, "vtkUnsignedCharArray") &&
      msg.GetArgument(0, 8, &temp6))
      {
      temp20 = (op)->GetRGBACharPixelData(temp0,temp1,temp2,temp3,temp4,temp5,temp6);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRGBACharPixelData",method) && msg.GetNumberOfArguments(0) == 10)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkClientServerStreamDataArg<unsigned char   > temp4(msg, 0, 6);
    int      temp5;
    int      temp6;
    int      temp7;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6) &&
      msg.GetArgument(0, 9, &temp7))
      {
      temp20 = (op)->SetRGBACharPixelData(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRGBACharPixelData",method) && msg.GetNumberOfArguments(0) == 10)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkUnsignedCharArray  *temp4;
    int      temp5;
    int      temp6;
    int      temp7;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkUnsignedCharArray") &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6) &&
      msg.GetArgument(0, 9, &temp7))
      {
      temp20 = (op)->SetRGBACharPixelData(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetZbufferData",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkClientServerStreamDataArg<float  > temp4(msg, 0, 6);
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4)
      {
      temp20 = (op)->GetZbufferData(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetZbufferData",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkFloatArray  *temp4;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkFloatArray"))
      {
      temp20 = (op)->GetZbufferData(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetZbufferData",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkClientServerStreamDataArg<float  > temp4(msg, 0, 6);
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4)
      {
      temp20 = (op)->SetZbufferData(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetZbufferData",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp3;
    vtkFloatArray  *temp4;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 6, &temp4, "vtkFloatArray"))
      {
      temp20 = (op)->SetZbufferData(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ActivateTexture",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextureObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextureObject"))
      {
      op->ActivateTexture(temp0);
      return 1;
      }
    }
  if (!strcmp("DeactivateTexture",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextureObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextureObject"))
      {
      op->DeactivateTexture(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTextureUnitForTexture",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextureObject  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextureObject"))
      {
      temp20 = (op)->GetTextureUnitForTexture(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDepthBufferSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDepthBufferSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUsingSRGBColorSpace",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUsingSRGBColorSpace();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetColorBufferSizes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    int      temp20;
    if(temp0)
      {
      temp20 = (op)->GetColorBufferSizes(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetColorBufferInternalFormat",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetColorBufferInternalFormat(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int    temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetSize",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetSize(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("OpenGLInit",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OpenGLInit();
      return 1;
      }
    }
  if (!strcmp("OpenGLInitState",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OpenGLInitState();
      return 1;
      }
    }
  if (!strcmp("OpenGLInitContext",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OpenGLInitContext();
      return 1;
      }
    }
  if (!strcmp("GetBackLeftBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetBackLeftBuffer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBackRightBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetBackRightBuffer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFrontLeftBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetFrontLeftBuffer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFrontRightBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetFrontRightBuffer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBackBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetBackBuffer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFrontBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetFrontBuffer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetContextCreationTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetContextCreationTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetShaderCache",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkOpenGLShaderCache  *temp20;
      {
      temp20 = (op)->GetShaderCache();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetVBOCache",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkOpenGLVertexBufferObjectCache  *temp20;
      {
      temp20 = (op)->GetVBOCache();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetFrameBufferObject",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetFrameBufferObject();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTextureUnitManager",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTextureUnitManager  *temp20;
      {
      temp20 = (op)->GetTextureUnitManager();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("WaitForCompletion",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->WaitForCompletion();
      return 1;
      }
    }
  if (!strcmp("GetMaximumHardwareLineWidth",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float    temp20;
      {
      temp20 = (op)->GetMaximumHardwareLineWidth();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsPointSpriteBugPresent",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->IsPointSpriteBugPresent();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDefaultTextureInternalFormat",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    bool   temp2;
    bool   temp3;
    bool   temp4;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      temp20 = (op)->GetDefaultTextureInternalFormat(temp0,temp1,temp2,temp3,temp4);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetOpenGLSupportMessage",method) && msg.GetNumberOfArguments(0) == 2)
    {
    std::string   temp20;
      {
      temp20 = (op)->GetOpenGLSupportMessage();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseOffScreenBuffers",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->SetUseOffScreenBuffers(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetUseOffScreenBuffers",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseOffScreenBuffers();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SupportsOpenGL",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->SupportsOpenGL();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ReportCapabilities",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->ReportCapabilities();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Initialize",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Initialize();
      return 1;
      }
    }
  if (!strcmp("RegisterGraphicsResources",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkGenericOpenGLResourceFreeCallback  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericOpenGLResourceFreeCallback"))
      {
      op->RegisterGraphicsResources(temp0);
      return 1;
      }
    }
  if (!strcmp("UnregisterGraphicsResources",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkGenericOpenGLResourceFreeCallback  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkGenericOpenGLResourceFreeCallback"))
      {
      op->UnregisterGraphicsResources(temp0);
      return 1;
      }
    }
  if (!strcmp("PushContext",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PushContext();
      return 1;
      }
    }
  if (!strcmp("PopContext",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PopContext();
      return 1;
      }
    }
  if (!strcmp("InitializeFromCurrentContext",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->InitializeFromCurrentContext();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDefaultFrameBufferId",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetDefaultFrameBufferId();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSwapControl",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->SetSwapControl(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTQuad2DVBO",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkOpenGLBufferObject  *temp20;
      {
      temp20 = (op)->GetTQuad2DVBO();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNoiseTextureUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNoiseTextureUnit();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StereoUpdate",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StereoUpdate();
      return 1;
      }
    }
  if (!strcmp("StereoMidpoint",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StereoMidpoint();
      return 1;
      }
    }
  if (!strcmp("Render",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Render();
      return 1;
      }
    }

  {
    const char* commandName = "vtkRenderWindow";
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
  vtkmsg << "Object type: vtkOpenGLRenderWindow, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkOpenGLRenderWindow_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkOpenGLRenderWindow", vtkOpenGLRenderWindowCommand);
    }
}
