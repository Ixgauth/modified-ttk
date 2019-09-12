// ClientServer wrapper for vtkContext3D object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkContext3D.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkContext3DClientServerNewCommand(void* /*ctx*/)
{
  return vtkContext3D::New();
}


int VTK_EXPORT vtkContext3DCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkContext3D *op = vtkContext3D::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkContext3D.  "
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
    vtkContext3D  *temp20;
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
    vtkContext3D  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkContext3D  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Begin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkContextDevice3D  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkContextDevice3D"))
      {
      temp20 = (op)->Begin(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDevice",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkContextDevice3D  *temp20;
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
  if (!strcmp("DrawTriangleMesh",method) && msg.GetNumberOfArguments(0) == 6)
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
      op->DrawTriangleMesh(temp0,temp1,temp2,temp3);
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
  if (!strcmp("ApplyBrush",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkBrush  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkBrush"))
      {
      op->ApplyBrush(temp0);
      return 1;
      }
    }
  if (!strcmp("SetTransform",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTransform  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTransform"))
      {
      op->SetTransform(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTransform",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTransform  *temp20;
      {
      temp20 = (op)->GetTransform();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AppendTransform",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTransform  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTransform"))
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
  if (!strcmp("EnableClippingPlane",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    if(msg.GetArgument(0, 2, &temp0) &&
      temp1)
      {
      op->EnableClippingPlane(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("DisableClippingPlane",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->DisableClippingPlane(temp0);
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
  vtkmsg << "Object type: vtkContext3D, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkContext3D_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkContext3D", vtkContext3DClientServerNewCommand);
    csi->AddCommandFunction("vtkContext3D", vtkContext3DCommand);
    }
}
