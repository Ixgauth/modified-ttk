// ClientServer wrapper for vtkHandleRepresentation object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkHandleRepresentation.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkHandleRepresentationCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkHandleRepresentation *op = vtkHandleRepresentation::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkHandleRepresentation.  "
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
    vtkHandleRepresentation  *temp20;
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
    vtkHandleRepresentation  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetDisplayPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetDisplayPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDisplayPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetDisplayPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDisplayPosition",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetDisplayPosition();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetWorldPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetWorldPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWorldPosition",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetWorldPosition(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWorldPosition",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetWorldPosition();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
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
  if (!strcmp("SetActiveRepresentation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetActiveRepresentation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetActiveRepresentation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetActiveRepresentation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ActiveRepresentationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ActiveRepresentationOn();
      return 1;
      }
    }
  if (!strcmp("ActiveRepresentationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ActiveRepresentationOff();
      return 1;
      }
    }
  if (!strcmp("SetInteractionState",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInteractionState(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInteractionStateMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractionStateMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetInteractionStateMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInteractionStateMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetConstrained",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetConstrained(temp0);
      return 1;
      }
    }
  if (!strcmp("GetConstrained",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetConstrained();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ConstrainedOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ConstrainedOn();
      return 1;
      }
    }
  if (!strcmp("ConstrainedOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ConstrainedOff();
      return 1;
      }
    }
  if (!strcmp("ShallowCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      op->ShallowCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("DeepCopy",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProp  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProp"))
      {
      op->DeepCopy(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRenderer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkRenderer  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkRenderer"))
      {
      op->SetRenderer(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetMTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPointPlacer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPointPlacer  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPointPlacer"))
      {
      op->SetPointPlacer(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPointPlacer",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkPointPlacer  *temp20;
      {
      temp20 = (op)->GetPointPlacer();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkHandleRepresentation, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkHandleRepresentation_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkHandleRepresentation", vtkHandleRepresentationCommand);
    }
}