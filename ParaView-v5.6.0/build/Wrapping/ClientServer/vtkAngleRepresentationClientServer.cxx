// ClientServer wrapper for vtkAngleRepresentation object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkAngleRepresentation.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkAngleRepresentationCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkAngleRepresentation *op = vtkAngleRepresentation::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkAngleRepresentation.  "
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
    vtkAngleRepresentation  *temp20;
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
    vtkAngleRepresentation  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAngle",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetAngle();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPoint1WorldPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetPoint1WorldPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCenterWorldPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetCenterWorldPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPoint2WorldPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetPoint2WorldPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("SetPoint1DisplayPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetPoint1DisplayPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("SetCenterDisplayPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetCenterDisplayPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("SetPoint2DisplayPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetPoint2DisplayPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPoint1DisplayPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetPoint1DisplayPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCenterDisplayPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetCenterDisplayPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPoint2DisplayPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetPoint2DisplayPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("SetHandleRepresentation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkHandleRepresentation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkHandleRepresentation"))
      {
      op->SetHandleRepresentation(temp0);
      return 1;
      }
    }
  if (!strcmp("InstantiateHandleRepresentation",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InstantiateHandleRepresentation();
      return 1;
      }
    }
  if (!strcmp("GetPoint1Representation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkHandleRepresentation  *temp20;
      {
      temp20 = (op)->GetPoint1Representation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCenterRepresentation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkHandleRepresentation  *temp20;
      {
      temp20 = (op)->GetCenterRepresentation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPoint2Representation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkHandleRepresentation  *temp20;
      {
      temp20 = (op)->GetPoint2Representation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTolerance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTolerance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetToleranceMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetToleranceMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetToleranceMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetToleranceMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetTolerance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetTolerance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLabelFormat",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLabelFormat(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLabelFormat",method) && msg.GetNumberOfArguments(0) == 2)
    {
    char    *temp20;
      {
      temp20 = (op)->GetLabelFormat();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRay1Visibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRay1Visibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRay1Visibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRay1Visibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Ray1VisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Ray1VisibilityOn();
      return 1;
      }
    }
  if (!strcmp("Ray1VisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Ray1VisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetRay2Visibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRay2Visibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRay2Visibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRay2Visibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("Ray2VisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Ray2VisibilityOn();
      return 1;
      }
    }
  if (!strcmp("Ray2VisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Ray2VisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetArcVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetArcVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetArcVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetArcVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ArcVisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ArcVisibilityOn();
      return 1;
      }
    }
  if (!strcmp("ArcVisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ArcVisibilityOff();
      return 1;
      }
    }
  if (!strcmp("BuildRepresentation",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->BuildRepresentation();
      return 1;
      }
    }
  if (!strcmp("ComputeInteractionState",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    int      temp1;
    int      temp2;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      temp20 = (op)->ComputeInteractionState(temp0,temp1,temp2);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("StartWidgetInteraction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->StartWidgetInteraction(temp0);
      return 1;
      }
    }
  if (!strcmp("CenterWidgetInteraction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->CenterWidgetInteraction(temp0);
      return 1;
      }
    }
  if (!strcmp("WidgetInteraction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->WidgetInteraction(temp0);
      return 1;
      }
    }

  {
    const char* commandName = "vtkWidgetRepresentation";
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
  vtkmsg << "Object type: vtkAngleRepresentation, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkAngleRepresentation_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkAngleRepresentation", vtkAngleRepresentationCommand);
    }
}
