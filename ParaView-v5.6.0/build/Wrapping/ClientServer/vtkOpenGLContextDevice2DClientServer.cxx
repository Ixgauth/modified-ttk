// ClientServer wrapper for vtkOpenGLContextDevice2D object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkOpenGLContextDevice2D.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkOpenGLContextDevice2DClientServerNewCommand(void* /*ctx*/)
{
  return vtkOpenGLContextDevice2D::New();
}


int VTK_EXPORT vtkOpenGLContextDevice2DCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkOpenGLContextDevice2D *op = vtkOpenGLContextDevice2D::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkOpenGLContextDevice2D.  "
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
    vtkOpenGLContextDevice2D  *temp20;
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
    vtkOpenGLContextDevice2D  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkOpenGLContextDevice2D  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawPoly",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<unsigned char   > temp2(msg, 0, 4);
    int      temp3;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->DrawPoly(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("DrawLines",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<unsigned char   > temp2(msg, 0, 4);
    int      temp3;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->DrawLines(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("DrawPoints",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<unsigned char   > temp2(msg, 0, 4);
    int      temp3;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->DrawPoints(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("DrawPointSprites",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkImageData  *temp0;
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    int      temp2;
    vtkClientServerStreamDataArg<unsigned char   > temp3(msg, 0, 5);
    int      temp4;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageData") &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->DrawPointSprites(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("DrawMarkers",method) && msg.GetNumberOfArguments(0) == 8)
    {
    int      temp0;
    bool   temp1;
    vtkClientServerStreamDataArg<float  > temp2(msg, 0, 4);
    int      temp3;
    vtkClientServerStreamDataArg<unsigned char   > temp4(msg, 0, 6);
    int      temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3) &&
      temp4 &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->DrawMarkers(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetMaximumMarkerCacheSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumMarkerCacheSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumMarkerCacheSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetMaximumMarkerCacheSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawQuad",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawQuad(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DrawQuadStrip",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawQuadStrip(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DrawPolygon",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawPolygon(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DrawColoredPolygon",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    vtkClientServerStreamDataArg<unsigned char   > temp2(msg, 0, 4);
    int      temp3;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->DrawColoredPolygon(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("DrawEllipseWedge",method) && msg.GetNumberOfArguments(0) == 10)
    {
    float    temp0;
    float    temp1;
    float    temp2;
    float    temp3;
    float    temp4;
    float    temp5;
    float    temp6;
    float    temp7;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5) &&
      msg.GetArgument(0, 8, &temp6) &&
      msg.GetArgument(0, 9, &temp7))
      {
      op->DrawEllipseWedge(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      return 1;
      }
    }
  if (!strcmp("DrawEllipticArc",method) && msg.GetNumberOfArguments(0) == 8)
    {
    float    temp0;
    float    temp1;
    float    temp2;
    float    temp3;
    float    temp4;
    float    temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->DrawEllipticArc(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("DrawString",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    char    *temp1;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawString(temp0,vtkStdString(temp1));
      return 1;
      }
    }
  if (!strcmp("SetTexture",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkImageData  *temp0;
    int      temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageData") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetTexture(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetPointSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPointSize(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLineWidth",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLineWidth(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLineType",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLineType(temp0);
      return 1;
      }
    }
  if (!strcmp("MultiplyMatrix",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix3x3  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix3x3"))
      {
      op->MultiplyMatrix(temp0);
      return 1;
      }
    }
  if (!strcmp("SetMatrix",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix3x3  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix3x3"))
      {
      op->SetMatrix(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMatrix",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix3x3  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix3x3"))
      {
      op->GetMatrix(temp0);
      return 1;
      }
    }
  if (!strcmp("PushMatrix",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PushMatrix();
      return 1;
      }
    }
  if (!strcmp("PopMatrix",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PopMatrix();
      return 1;
      }
    }
  if (!strcmp("SetClipping",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<int    > temp0(msg, 0, 2);
    if(temp0)
      {
      op->SetClipping(temp0);
      return 1;
      }
    }
  if (!strcmp("EnableClipping",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->EnableClipping(temp0);
      return 1;
      }
    }
  if (!strcmp("Begin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      op->Begin(temp0);
      return 1;
      }
    }
  if (!strcmp("End",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->End();
      return 1;
      }
    }
  if (!strcmp("BufferIdModeBegin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkAbstractContextBufferId  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAbstractContextBufferId"))
      {
      op->BufferIdModeBegin(temp0);
      return 1;
      }
    }
  if (!strcmp("BufferIdModeEnd",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BufferIdModeEnd();
      return 1;
      }
    }
  if (!strcmp("SetStringRendererToFreeType",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->SetStringRendererToFreeType();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetStringRendererToQt",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->SetStringRendererToQt();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("HasGLSL",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->HasGLSL();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRenderWindow",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkOpenGLRenderWindow  *temp20;
      {
      temp20 = (op)->GetRenderWindow();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("GetProjectionMatrix",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMatrix4x4  *temp20;
      {
      temp20 = (op)->GetProjectionMatrix();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetModelMatrix",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMatrix4x4  *temp20;
      {
      temp20 = (op)->GetModelMatrix();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkContextDevice2D";
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
  vtkmsg << "Object type: vtkOpenGLContextDevice2D, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkOpenGLContextDevice2D_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkOpenGLContextDevice2D", vtkOpenGLContextDevice2DClientServerNewCommand);
    csi->AddCommandFunction("vtkOpenGLContextDevice2D", vtkOpenGLContextDevice2DCommand);
    }
}
