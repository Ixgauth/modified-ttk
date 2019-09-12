// ClientServer wrapper for vtkPolarAxesActor object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPolarAxesActor.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkPolarAxesActorClientServerNewCommand(void* /*ctx*/)
{
  return vtkPolarAxesActor::New();
}


int VTK_EXPORT vtkPolarAxesActorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkPolarAxesActor *op = vtkPolarAxesActor::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkPolarAxesActor.  "
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
    vtkPolarAxesActor  *temp20;
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
    vtkPolarAxesActor  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPolarAxesActor  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderOpaqueGeometry",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      temp20 = (op)->RenderOpaqueGeometry(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderOverlay",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      temp20 = (op)->RenderOverlay(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderTranslucentPolygonalGeometry",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      temp20 = (op)->RenderTranslucentPolygonalGeometry(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPole",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetPole(temp0);
      return 1;
      }
    }
  if (!strcmp("SetPole",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetPole(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("GetPole",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetPole();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLog",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLog(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLog",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetLog();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("LogOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LogOn();
      return 1;
      }
    }
  if (!strcmp("LogOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->LogOff();
      return 1;
      }
    }
  if (!strcmp("SetRequestedNumberOfRadialAxes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRequestedNumberOfRadialAxes(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRequestedNumberOfRadialAxesMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetRequestedNumberOfRadialAxesMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRequestedNumberOfRadialAxesMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetRequestedNumberOfRadialAxesMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRequestedNumberOfRadialAxes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIdType   temp20;
      {
      temp20 = (op)->GetRequestedNumberOfRadialAxes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNumberOfPolarAxisTicks",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfPolarAxisTicks(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNumberOfPolarAxisTicks",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfPolarAxisTicks();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAutoSubdividePolarAxis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAutoSubdividePolarAxis(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAutoSubdividePolarAxis",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetAutoSubdividePolarAxis();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AutoSubdividePolarAxisOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoSubdividePolarAxisOn();
      return 1;
      }
    }
  if (!strcmp("AutoSubdividePolarAxisOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AutoSubdividePolarAxisOff();
      return 1;
      }
    }
  if (!strcmp("SetRange",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetRange(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetRange",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetRange(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRange",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetRange();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMinimumRadius",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMinimumRadius(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMinimumRadius",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMinimumRadius();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaximumRadius",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumRadius(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumRadius",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaximumRadius();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMinimumAngle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMinimumAngle(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMinimumAngle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMinimumAngle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaximumAngle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaximumAngle(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaximumAngle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaximumAngle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSmallestVisiblePolarAngle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetSmallestVisiblePolarAngle(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSmallestVisiblePolarAngleMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetSmallestVisiblePolarAngleMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSmallestVisiblePolarAngleMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetSmallestVisiblePolarAngleMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSmallestVisiblePolarAngle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetSmallestVisiblePolarAngle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTickLocation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTickLocation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTickLocationMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTickLocationMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTickLocationMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTickLocationMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTickLocation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTickLocation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRadialUnits",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRadialUnits(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRadialUnits",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetRadialUnits();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetScreenSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScreenSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScreenSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetScreenSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCamera",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCamera  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCamera"))
      {
      op->SetCamera(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCamera",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkCamera  *temp20;
      {
      temp20 = (op)->GetCamera();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPolarAxisTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPolarAxisTitle(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarAxisTitle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetPolarAxisTitle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPolarLabelFormat",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPolarLabelFormat(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarLabelFormat",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetPolarLabelFormat();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetExponentLocation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetExponentLocation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetExponentLocationMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetExponentLocationMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetExponentLocationMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetExponentLocationMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetExponentLocation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetExponentLocation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRadialAngleFormat",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRadialAngleFormat(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRadialAngleFormat",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetRadialAngleFormat();
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
  if (!strcmp("SetEnableDistanceLOD",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnableDistanceLOD(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnableDistanceLOD",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEnableDistanceLOD();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDistanceLODThreshold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDistanceLODThreshold(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDistanceLODThresholdMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDistanceLODThresholdMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDistanceLODThresholdMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDistanceLODThresholdMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetDistanceLODThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDistanceLODThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEnableViewAngleLOD",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEnableViewAngleLOD(temp0);
      return 1;
      }
    }
  if (!strcmp("GetEnableViewAngleLOD",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetEnableViewAngleLOD();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetViewAngleLODThreshold",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetViewAngleLODThreshold(temp0);
      return 1;
      }
    }
  if (!strcmp("GetViewAngleLODThresholdMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetViewAngleLODThresholdMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetViewAngleLODThresholdMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetViewAngleLODThresholdMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetViewAngleLODThreshold",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetViewAngleLODThreshold();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPolarAxisVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPolarAxisVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarAxisVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPolarAxisVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PolarAxisVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PolarAxisVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("PolarAxisVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PolarAxisVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawRadialGridlines",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawRadialGridlines(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawRadialGridlines",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawRadialGridlines();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawRadialGridlinesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawRadialGridlinesOn();
      return 1;
      }
    }
  if (!strcmp("DrawRadialGridlinesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawRadialGridlinesOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawPolarArcsGridlines",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawPolarArcsGridlines(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawPolarArcsGridlines",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawPolarArcsGridlines();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawPolarArcsGridlinesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawPolarArcsGridlinesOn();
      return 1;
      }
    }
  if (!strcmp("DrawPolarArcsGridlinesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawPolarArcsGridlinesOff();
      return 1;
      }
    }
  if (!strcmp("SetPolarTitleVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPolarTitleVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarTitleVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPolarTitleVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PolarTitleVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PolarTitleVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("PolarTitleVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PolarTitleVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetRadialAxisTitleLocation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRadialAxisTitleLocation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRadialAxisTitleLocationMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRadialAxisTitleLocationMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRadialAxisTitleLocationMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRadialAxisTitleLocationMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRadialAxisTitleLocation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRadialAxisTitleLocation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPolarAxisTitleLocation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPolarAxisTitleLocation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarAxisTitleLocationMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPolarAxisTitleLocationMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPolarAxisTitleLocationMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPolarAxisTitleLocationMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPolarAxisTitleLocation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPolarAxisTitleLocation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPolarLabelVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPolarLabelVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarLabelVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPolarLabelVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PolarLabelVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PolarLabelVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("PolarLabelVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PolarLabelVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetArcTicksOriginToPolarAxis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArcTicksOriginToPolarAxis(temp0);
      return 1;
      }
    }
  if (!strcmp("GetArcTicksOriginToPolarAxis",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetArcTicksOriginToPolarAxis();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ArcTicksOriginToPolarAxisOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ArcTicksOriginToPolarAxisOn();
      return 1;
      }
    }
  if (!strcmp("ArcTicksOriginToPolarAxisOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ArcTicksOriginToPolarAxisOff();
      return 1;
      }
    }
  if (!strcmp("SetRadialAxesOriginToPolarAxis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRadialAxesOriginToPolarAxis(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRadialAxesOriginToPolarAxis",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRadialAxesOriginToPolarAxis();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RadialAxesOriginToPolarAxisOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RadialAxesOriginToPolarAxisOn();
      return 1;
      }
    }
  if (!strcmp("RadialAxesOriginToPolarAxisOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RadialAxesOriginToPolarAxisOff();
      return 1;
      }
    }
  if (!strcmp("SetPolarTickVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPolarTickVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarTickVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPolarTickVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PolarTickVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PolarTickVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("PolarTickVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PolarTickVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetAxisTickVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAxisTickVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAxisTickVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAxisTickVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AxisTickVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AxisTickVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("AxisTickVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AxisTickVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetAxisMinorTickVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAxisMinorTickVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAxisMinorTickVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAxisMinorTickVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AxisMinorTickVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AxisMinorTickVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("AxisMinorTickVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AxisMinorTickVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetArcTickVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArcTickVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetArcTickVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetArcTickVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ArcTickVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ArcTickVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("ArcTickVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ArcTickVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetArcMinorTickVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArcMinorTickVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetArcMinorTickVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetArcMinorTickVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ArcMinorTickVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ArcMinorTickVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("ArcMinorTickVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ArcMinorTickVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetArcMajorTickSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArcMajorTickSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetArcMajorTickSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetArcMajorTickSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPolarAxisMajorTickSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPolarAxisMajorTickSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarAxisMajorTickSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetPolarAxisMajorTickSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLastRadialAxisMajorTickSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLastRadialAxisMajorTickSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLastRadialAxisMajorTickSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLastRadialAxisMajorTickSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPolarAxisTickRatioSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPolarAxisTickRatioSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarAxisTickRatioSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetPolarAxisTickRatioSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLastAxisTickRatioSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLastAxisTickRatioSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLastAxisTickRatioSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLastAxisTickRatioSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetArcTickRatioSize",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArcTickRatioSize(temp0);
      return 1;
      }
    }
  if (!strcmp("GetArcTickRatioSize",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetArcTickRatioSize();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPolarAxisMajorTickThickness",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPolarAxisMajorTickThickness(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarAxisMajorTickThickness",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetPolarAxisMajorTickThickness();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLastRadialAxisMajorTickThickness",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLastRadialAxisMajorTickThickness(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLastRadialAxisMajorTickThickness",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLastRadialAxisMajorTickThickness();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetArcMajorTickThickness",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArcMajorTickThickness(temp0);
      return 1;
      }
    }
  if (!strcmp("GetArcMajorTickThickness",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetArcMajorTickThickness();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPolarAxisTickRatioThickness",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPolarAxisTickRatioThickness(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarAxisTickRatioThickness",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetPolarAxisTickRatioThickness();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLastAxisTickRatioThickness",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLastAxisTickRatioThickness(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLastAxisTickRatioThickness",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetLastAxisTickRatioThickness();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetArcTickRatioThickness",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArcTickRatioThickness(temp0);
      return 1;
      }
    }
  if (!strcmp("GetArcTickRatioThickness",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetArcTickRatioThickness();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDeltaRangeMajor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDeltaRangeMajor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDeltaRangeMajor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDeltaRangeMajor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDeltaRangeMinor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDeltaRangeMinor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDeltaRangeMinor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDeltaRangeMinor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDeltaAngleMajor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDeltaAngleMajor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDeltaAngleMajor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDeltaAngleMajor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDeltaAngleMinor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDeltaAngleMinor(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDeltaAngleMinor",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDeltaAngleMinor();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDeltaAngleRadialAxes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDeltaAngleRadialAxes(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDeltaAngleRadialAxes",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetDeltaAngleRadialAxes();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRadialAxesVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRadialAxesVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRadialAxesVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRadialAxesVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RadialAxesVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RadialAxesVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("RadialAxesVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RadialAxesVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetRadialTitleVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRadialTitleVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRadialTitleVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRadialTitleVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RadialTitleVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RadialTitleVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("RadialTitleVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RadialTitleVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetPolarArcsVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPolarArcsVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarArcsVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPolarArcsVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PolarArcsVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PolarArcsVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("PolarArcsVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PolarArcsVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetUse2DMode",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUse2DMode(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUse2DMode",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetUse2DMode();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPolarAxisTitleTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty"))
      {
      op->SetPolarAxisTitleTextProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarAxisTitleTextProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTextProperty  *temp20;
      {
      temp20 = (op)->GetPolarAxisTitleTextProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPolarAxisLabelTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty"))
      {
      op->SetPolarAxisLabelTextProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarAxisLabelTextProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTextProperty  *temp20;
      {
      temp20 = (op)->GetPolarAxisLabelTextProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLastRadialAxisTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty"))
      {
      op->SetLastRadialAxisTextProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLastRadialAxisTextProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTextProperty  *temp20;
      {
      temp20 = (op)->GetLastRadialAxisTextProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSecondaryRadialAxesTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty"))
      {
      op->SetSecondaryRadialAxesTextProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSecondaryRadialAxesTextProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTextProperty  *temp20;
      {
      temp20 = (op)->GetSecondaryRadialAxesTextProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPolarAxisProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetPolarAxisProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarAxisProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetPolarAxisProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLastRadialAxisProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetLastRadialAxisProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLastRadialAxisProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetLastRadialAxisProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSecondaryRadialAxesProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetSecondaryRadialAxesProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSecondaryRadialAxesProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetSecondaryRadialAxesProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPolarArcsProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetPolarArcsProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPolarArcsProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetPolarArcsProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetSecondaryPolarArcsProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetSecondaryPolarArcsProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetSecondaryPolarArcsProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetSecondaryPolarArcsProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetBounds",method) && msg.GetNumberOfArguments(0) == 8)
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
      op->SetBounds(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->SetBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->GetBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRatio",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRatio(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRatioMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetRatioMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRatioMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetRatioMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRatio",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetRatio();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkActor";
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
  vtkmsg << "Object type: vtkPolarAxesActor, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkPolarAxesActor_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkPolarAxesActor", vtkPolarAxesActorClientServerNewCommand);
    csi->AddCommandFunction("vtkPolarAxesActor", vtkPolarAxesActorCommand);
    }
}
