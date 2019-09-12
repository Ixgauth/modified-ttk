// ClientServer wrapper for vtkRenderWindowInteractor3D object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkRenderWindowInteractor3D.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkRenderWindowInteractor3DClientServerNewCommand(void* /*ctx*/)
{
  return vtkRenderWindowInteractor3D::New();
}


int VTK_EXPORT vtkRenderWindowInteractor3DCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkRenderWindowInteractor3D *op = vtkRenderWindowInteractor3D::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkRenderWindowInteractor3D.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderWindowInteractor3D  *temp20;
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
    vtkRenderWindowInteractor3D  *temp20;
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
    vtkRenderWindowInteractor3D  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Enable",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Enable();
      return 1;
      }
    }
  if (!strcmp("Disable",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Disable();
      return 1;
      }
    }
  if (!strcmp("TerminateApp",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TerminateApp();
      return 1;
      }
    }
  if (!strcmp("SetPhysicalEventPosition",method) && msg.GetNumberOfArguments(0) == 6)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetPhysicalEventPosition(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetWorldEventPosition",method) && msg.GetNumberOfArguments(0) == 6)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    int      temp3;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetWorldEventPosition(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetWorldEventOrientation",method) && msg.GetNumberOfArguments(0) == 7)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    int      temp4;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4))
      {
      op->SetWorldEventOrientation(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("RightButtonPressEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RightButtonPressEvent();
      return 1;
      }
    }
  if (!strcmp("RightButtonReleaseEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RightButtonReleaseEvent();
      return 1;
      }
    }
  if (!strcmp("MiddleButtonPressEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MiddleButtonPressEvent();
      return 1;
      }
    }
  if (!strcmp("MiddleButtonReleaseEvent",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->MiddleButtonReleaseEvent();
      return 1;
      }
    }
  if (!strcmp("SetTouchPadPosition",method) && msg.GetNumberOfArguments(0) == 4)
    {
    float    temp0;
    float    temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetTouchPadPosition(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetTouchPadPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    float  temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetTouchPadPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTouchPadPosition",method) && msg.GetNumberOfArguments(0) == 2)
    {
    float   *temp20;
      {
      temp20 = (op)->GetTouchPadPosition();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPhysicalTranslation",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkCamera  *temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCamera") &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3))
      {
      op->SetPhysicalTranslation(temp0,temp1,temp2,temp3);
      return 1;
      }
    }
  if (!strcmp("SetPhysicalScale",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPhysicalScale(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPhysicalScale",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetPhysicalScale();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTranslation3D",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetTranslation3D(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTranslation3D",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetTranslation3D();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetLastTranslation3D",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetLastTranslation3D();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDone",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetDone();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkRenderWindowInteractor";
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
  vtkmsg << "Object type: vtkRenderWindowInteractor3D, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkRenderWindowInteractor3D_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkRenderWindowInteractor3D", vtkRenderWindowInteractor3DClientServerNewCommand);
    csi->AddCommandFunction("vtkRenderWindowInteractor3D", vtkRenderWindowInteractor3DCommand);
    }
}
