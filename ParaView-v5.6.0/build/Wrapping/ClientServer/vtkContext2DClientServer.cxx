// ClientServer wrapper for vtkContext2D object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkContext2D.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkContext2DClientServerNewCommand(void* /*ctx*/)
{
  return vtkContext2D::New();
}


int VTK_EXPORT vtkContext2DCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkContext2D *op = vtkContext2D::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkContext2D.  "
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
    vtkContext2D  *temp20;
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
    vtkContext2D  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkContext2D  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Begin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkContextDevice2D  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkContextDevice2D"))
      {
      temp20 = (op)->Begin(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDevice",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkContextDevice2D  *temp20;
      {
      temp20 = (op)->GetDevice();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("End",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->End();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBufferIdMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetBufferIdMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("DrawLine",method) && msg.GetNumberOfArguments(0) == 6)
    {
    float    temp0;
    float    temp1;
    float    temp2;
    float    temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->DrawLine(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("DrawLine",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[4];
    if(msg.GetArgument(0, 2, temp0, 4))
      {
      op->DrawLine(temp0);
      return 1;
      }
    }
  if (!strcmp("DrawLine",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPoints2D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D"))
      {
      op->DrawLine(temp0);
      return 1;
      }
    }
  if (!strcmp("DrawPoly",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    int      temp2;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->DrawPoly(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("DrawPoly",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPoints2D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D"))
      {
      op->DrawPoly(temp0);
      return 1;
      }
    }
  if (!strcmp("DrawPoly",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawPoly(temp0,temp1);
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
  if (!strcmp("DrawLines",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPoints2D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D"))
      {
      op->DrawLines(temp0);
      return 1;
      }
    }
  if (!strcmp("DrawLines",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawLines(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DrawPoint",method) && msg.GetNumberOfArguments(0) == 4)
    {
    float    temp0;
    float    temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawPoint(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DrawPoints",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    int      temp2;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->DrawPoints(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("DrawPoints",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPoints2D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D"))
      {
      op->DrawPoints(temp0);
      return 1;
      }
    }
  if (!strcmp("DrawPoints",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    int      temp1;
    if(temp0 &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawPoints(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DrawPointSprites",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkImageData  *temp0;
    vtkPoints2D  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPoints2D"))
      {
      op->DrawPointSprites(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DrawPointSprites",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkImageData  *temp0;
    vtkPoints2D  *temp1;
    vtkUnsignedCharArray  *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPoints2D") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkUnsignedCharArray"))
      {
      op->DrawPointSprites(temp0,temp1,temp2);
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
  if (!strcmp("DrawPointSprites",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkImageData  *temp0;
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImageData") &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->DrawPointSprites(temp0,temp1,temp2);
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
  if (!strcmp("DrawMarkers",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    bool   temp1;
    vtkClientServerStreamDataArg<float  > temp2(msg, 0, 4);
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->DrawMarkers(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("DrawMarkers",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    bool   temp1;
    vtkPoints2D  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkPoints2D"))
      {
      op->DrawMarkers(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("DrawMarkers",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    bool   temp1;
    vtkPoints2D  *temp2;
    vtkUnsignedCharArray  *temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkPoints2D") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkUnsignedCharArray"))
      {
      op->DrawMarkers(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("DrawRect",method) && msg.GetNumberOfArguments(0) == 6)
    {
    float    temp0;
    float    temp1;
    float    temp2;
    float    temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->DrawRect(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("DrawQuad",method) && msg.GetNumberOfArguments(0) == 10)
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
      op->DrawQuad(temp0,temp1,temp2,temp3,temp4,temp5,temp6,temp7);
      return 1;
      }
    }
  if (!strcmp("DrawQuad",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    if(temp0)
      {
      op->DrawQuad(temp0);
      return 1;
      }
    }
  if (!strcmp("DrawQuadStrip",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPoints2D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D"))
      {
      op->DrawQuadStrip(temp0);
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
  if (!strcmp("DrawPolygon",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    int      temp2;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->DrawPolygon(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("DrawPolygon",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPoints2D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D"))
      {
      op->DrawPolygon(temp0);
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
  if (!strcmp("DrawPolygon",method) && msg.GetNumberOfArguments(0) == 7)
    {
    vtkClientServerStreamDataArg<float  > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<float  > temp1(msg, 0, 3);
    int      temp2;
    vtkClientServerStreamDataArg<unsigned char   > temp3(msg, 0, 5);
    int      temp4;
    if(temp0 &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3 &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->DrawPolygon(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("DrawPolygon",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkPoints2D  *temp0;
    vtkClientServerStreamDataArg<unsigned char   > temp1(msg, 0, 3);
    int      temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D") &&
      temp1 &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->DrawPolygon(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("DrawPolygon",method) && msg.GetNumberOfArguments(0) == 6)
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
      op->DrawPolygon(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("DrawEllipse",method) && msg.GetNumberOfArguments(0) == 6)
    {
    float    temp0;
    float    temp1;
    float    temp2;
    float    temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->DrawEllipse(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("DrawWedge",method) && msg.GetNumberOfArguments(0) == 8)
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
      op->DrawWedge(temp0,temp1,temp2,temp3,temp4,temp5);
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
  if (!strcmp("DrawArc",method) && msg.GetNumberOfArguments(0) == 7)
    {
    float    temp0;
    float    temp1;
    float    temp2;
    float    temp3;
    float    temp4;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->DrawArc(temp0,temp1,temp2,temp3,temp4);
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
  if (!strcmp("DrawImage",method) && msg.GetNumberOfArguments(0) == 5)
    {
    float    temp0;
    float    temp1;
    vtkImageData  *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkImageData"))
      {
      op->DrawImage(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("DrawImage",method) && msg.GetNumberOfArguments(0) == 6)
    {
    float    temp0;
    float    temp1;
    float    temp2;
    vtkImageData  *temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkImageData"))
      {
      op->DrawImage(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("DrawPolyData",method) && msg.GetNumberOfArguments(0) == 7)
    {
    float    temp0;
    float    temp1;
    vtkPolyData  *temp2;
    vtkUnsignedCharArray  *temp3;
    int      temp4;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkPolyData") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 5, &temp3, "vtkUnsignedCharArray") &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->DrawPolyData(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("DrawStringRect",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPoints2D  *temp0;
    char    *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawStringRect(temp0,vtkStdString(temp1));
      return 1;
      }
    }
  if (!strcmp("DrawStringRect",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPoints2D  *temp0;
    char    *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawStringRect(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DrawString",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPoints2D  *temp0;
    char    *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawString(temp0,vtkStdString(temp1));
      return 1;
      }
    }
  if (!strcmp("DrawString",method) && msg.GetNumberOfArguments(0) == 5)
    {
    float    temp0;
    float    temp1;
    char    *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->DrawString(temp0,temp1,vtkStdString(temp2));
      return 1;
      }
    }
  if (!strcmp("DrawString",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPoints2D  *temp0;
    char    *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawString(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DrawString",method) && msg.GetNumberOfArguments(0) == 5)
    {
    float    temp0;
    float    temp1;
    char    *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->DrawString(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("ComputeStringBounds",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkPoints2D  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPoints2D"))
      {
      op->ComputeStringBounds(vtkStdString(temp0),temp1);
      return 1;
      }
    }
  if (!strcmp("ComputeStringBounds",method) && msg.GetNumberOfArguments(0) == 4)
    {
    char    *temp0;
    vtkPoints2D  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkPoints2D"))
      {
      op->ComputeStringBounds(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("ComputeFontSizeForBoundedString",method) && msg.GetNumberOfArguments(0) == 5)
    {
    char    *temp0;
    float    temp1;
    float    temp2;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->ComputeFontSizeForBoundedString(vtkStdString(temp0),temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawMathTextString",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPoints2D  *temp0;
    char    *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawMathTextString(temp0,vtkStdString(temp1));
      return 1;
      }
    }
  if (!strcmp("DrawMathTextString",method) && msg.GetNumberOfArguments(0) == 5)
    {
    float    temp0;
    float    temp1;
    char    *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->DrawMathTextString(temp0,temp1,vtkStdString(temp2));
      return 1;
      }
    }
  if (!strcmp("DrawMathTextString",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkPoints2D  *temp0;
    char    *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D") &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->DrawMathTextString(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DrawMathTextString",method) && msg.GetNumberOfArguments(0) == 5)
    {
    float    temp0;
    float    temp1;
    char    *temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->DrawMathTextString(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("DrawMathTextString",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkPoints2D  *temp0;
    char    *temp1;
    char    *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->DrawMathTextString(temp0,vtkStdString(temp1),vtkStdString(temp2));
      return 1;
      }
    }
  if (!strcmp("DrawMathTextString",method) && msg.GetNumberOfArguments(0) == 6)
    {
    float    temp0;
    float    temp1;
    char    *temp2;
    char    *temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->DrawMathTextString(temp0,temp1,vtkStdString(temp2),vtkStdString(temp3));
      return 1;
      }
    }
  if (!strcmp("DrawMathTextString",method) && msg.GetNumberOfArguments(0) == 5)
    {
    vtkPoints2D  *temp0;
    char    *temp1;
    char    *temp2;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPoints2D") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->DrawMathTextString(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("DrawMathTextString",method) && msg.GetNumberOfArguments(0) == 6)
    {
    float    temp0;
    float    temp1;
    char    *temp2;
    char    *temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->DrawMathTextString(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("MathTextIsSupported",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->MathTextIsSupported();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ApplyPen",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPen  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPen"))
      {
      op->ApplyPen(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPen",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPen  *temp20;
      {
      temp20 = (op)->GetPen();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ApplyBrush",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkBrush  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkBrush"))
      {
      op->ApplyBrush(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBrush",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkBrush  *temp20;
      {
      temp20 = (op)->GetBrush();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ApplyTextProp",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty"))
      {
      op->ApplyTextProp(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTextProp",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTextProperty  *temp20;
      {
      temp20 = (op)->GetTextProp();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTransform",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTransform2D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTransform2D"))
      {
      op->SetTransform(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTransform",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTransform2D  *temp20;
      {
      temp20 = (op)->GetTransform();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AppendTransform",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTransform2D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTransform2D"))
      {
      op->AppendTransform(temp0);
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
  if (!strcmp("ApplyId",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->ApplyId(temp0);
      return 1;
      }
    }
  if (!strcmp("FloatToInt",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float    temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->FloatToInt(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetContext3D",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkContext3D  *temp20;
      {
      temp20 = (op)->GetContext3D();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetContext3D",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkContext3D  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkContext3D"))
      {
      op->SetContext3D(temp0);
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
  vtkmsg << "Object type: vtkContext2D, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkContext2D_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkContext2D", vtkContext2DClientServerNewCommand);
    csi->AddCommandFunction("vtkContext2D", vtkContext2DCommand);
    }
}
