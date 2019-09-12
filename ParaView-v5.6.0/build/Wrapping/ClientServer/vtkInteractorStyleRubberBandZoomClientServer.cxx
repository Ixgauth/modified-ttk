// ClientServer wrapper for vtkInteractorStyleRubberBandZoom object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkInteractorStyleRubberBandZoom.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkInteractorStyleRubberBandZoomClientServerNewCommand(void* /*ctx*/)
{
  return vtkInteractorStyleRubberBandZoom::New();
}


int VTK_EXPORT vtkInteractorStyleRubberBandZoomCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkInteractorStyleRubberBandZoom *op = vtkInteractorStyleRubberBandZoom::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkInteractorStyleRubberBandZoom.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInteractorStyleRubberBandZoom  *temp20;
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
    vtkInteractorStyleRubberBandZoom  *temp20;
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
    vtkInteractorStyleRubberBandZoom  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLockAspectToViewport",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLockAspectToViewport(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLockAspectToViewport",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetLockAspectToViewport();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LockAspectToViewportOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LockAspectToViewportOn();
      return 1;
      }
    }
  if (!strcmp("LockAspectToViewportOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LockAspectToViewportOff();
      return 1;
      }
    }
  if (!strcmp("SetCenterAtStartPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetCenterAtStartPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCenterAtStartPosition",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetCenterAtStartPosition();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CenterAtStartPositionOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CenterAtStartPositionOn();
      return 1;
      }
    }
  if (!strcmp("CenterAtStartPositionOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CenterAtStartPositionOff();
      return 1;
      }
    }
  if (!strcmp("SetUseDollyForPerspectiveProjection",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseDollyForPerspectiveProjection(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseDollyForPerspectiveProjection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseDollyForPerspectiveProjection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseDollyForPerspectiveProjectionOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseDollyForPerspectiveProjectionOn();
      return 1;
      }
    }
  if (!strcmp("UseDollyForPerspectiveProjectionOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseDollyForPerspectiveProjectionOff();
      return 1;
      }
    }
  if (!strcmp("OnMouseMove",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnMouseMove();
      return 1;
      }
    }
  if (!strcmp("OnLeftButtonDown",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnLeftButtonDown();
      return 1;
      }
    }
  if (!strcmp("OnLeftButtonUp",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OnLeftButtonUp();
      return 1;
      }
    }

  {
    const char* commandName = "vtkInteractorStyle";
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
  vtkmsg << "Object type: vtkInteractorStyleRubberBandZoom, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkInteractorStyleRubberBandZoom_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkInteractorStyleRubberBandZoom", vtkInteractorStyleRubberBandZoomClientServerNewCommand);
    csi->AddCommandFunction("vtkInteractorStyleRubberBandZoom", vtkInteractorStyleRubberBandZoomCommand);
    }
}
