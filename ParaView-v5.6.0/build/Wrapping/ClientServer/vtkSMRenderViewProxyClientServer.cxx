// ClientServer wrapper for vtkSMRenderViewProxy object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkSMRenderViewProxy.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkSMRenderViewProxyClientServerNewCommand(void* /*ctx*/)
{
  return vtkSMRenderViewProxy::New();
}


int VTK_EXPORT vtkSMRenderViewProxyCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkSMRenderViewProxy *op = vtkSMRenderViewProxy::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkSMRenderViewProxy.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMRenderViewProxy  *temp20;
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
    vtkSMRenderViewProxy  *temp20;
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
    vtkSMRenderViewProxy  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SelectPolygonPoints",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkIntArray  *temp0;
    vtkCollection  *temp1;
    vtkCollection  *temp2;
    bool   temp3;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkIntArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkCollection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkCollection") &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->SelectPolygonPoints(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SelectPolygonCells",method) && msg.GetNumberOfArguments(0) == 6)
    {
    vtkIntArray  *temp0;
    vtkCollection  *temp1;
    vtkCollection  *temp2;
    bool   temp3;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkIntArray") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkCollection") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 4, &temp2, "vtkCollection") &&
      msg.GetArgument(0, 5, &temp3))
      {
      temp20 = (op)->SelectPolygonCells(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ComputeVisibleScalarRange",method) && msg.GetNumberOfArguments(0) == 6)
    {
    int      temp0;
    char    *temp1;
    int      temp2;
    vtkClientServerStreamDataArg<double > temp3(msg, 0, 5);
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      temp3)
      {
      temp20 = (op)->ComputeVisibleScalarRange(temp0,temp1,temp2,temp3);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Pick",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    vtkSMRepresentationProxy  *temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->Pick(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsSelectionAvailable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->IsSelectionAvailable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ResetCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ResetCamera();
      return 1;
      }
    }
  if (!strcmp("ResetCamera",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->ResetCamera(temp0);
      return 1;
      }
    }
  if (!strcmp("ResetCamera",method) && msg.GetNumberOfArguments(0) == 8)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    double   temp3;
    double   temp4;
    double   temp5;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2) &&
      msg.GetArgument(0, 5, &temp3) &&
      msg.GetArgument(0, 6, &temp4) &&
      msg.GetArgument(0, 7, &temp5))
      {
      op->ResetCamera(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("ZoomTo",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkSMProxy  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMProxy"))
      {
      op->ZoomTo(temp0);
      return 1;
      }
    }
  if (!strcmp("IsSelectVisibleCellsAvailable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->IsSelectVisibleCellsAvailable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsSelectVisiblePointsAvailable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->IsSelectVisiblePointsAvailable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetupInteractor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderWindowInteractor  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderWindowInteractor"))
      {
      op->SetupInteractor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInteractor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderWindowInteractor  *temp20;
      {
      temp20 = (op)->GetInteractor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRenderer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderer  *temp20;
      {
      temp20 = (op)->GetRenderer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetActiveCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCamera  *temp20;
      {
      temp20 = (op)->GetActiveCamera();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SynchronizeCameraProperties",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->SynchronizeCameraProperties();
      return 1;
      }
    }
  if (!strcmp("LastRenderWasInteractive",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->LastRenderWasInteractive();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetZBufferValue",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    double   temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetZBufferValue(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Update",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Update();
      return 1;
      }
    }
  if (!strcmp("GetNeedsUpdate",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetNeedsUpdate();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StreamingUpdate",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    bool   temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->StreamingUpdate(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRepresentationType",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkSMSourceProxy  *temp0;
    int      temp1;
    const char    *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkSMSourceProxy") &&
      msg.GetArgument(0, 3, &temp1))
      {
      temp20 = (op)->GetRepresentationType(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRenderWindow",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkRenderWindow  *temp20;
      {
      temp20 = (op)->GetRenderWindow();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInteractorHelper",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkSMViewProxyInteractorHelper  *temp20;
      {
      temp20 = (op)->GetInteractorHelper();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CaptureDepthBuffer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFloatArray  *temp20;
      {
      temp20 = (op)->CaptureDepthBuffer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetValuesFloat",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFloatArray  *temp20;
      {
      temp20 = (op)->GetValuesFloat();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StartCaptureValues",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StartCaptureValues();
      return 1;
      }
    }
  if (!strcmp("StopCaptureValues",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->StopCaptureValues();
      return 1;
      }
    }
  if (!strcmp("GetValueRenderingMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetValueRenderingMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetValueRenderingMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetValueRenderingMode(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkSMViewProxy";
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
  vtkmsg << "Object type: vtkSMRenderViewProxy, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkSMRenderViewProxy_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkSMRenderViewProxy", vtkSMRenderViewProxyClientServerNewCommand);
    csi->AddCommandFunction("vtkSMRenderViewProxy", vtkSMRenderViewProxyCommand);
    }
}
