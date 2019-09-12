// ClientServer wrapper for vtkFinitePlaneRepresentation object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkFinitePlaneRepresentation.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkFinitePlaneRepresentationClientServerNewCommand(void* /*ctx*/)
{
  return vtkFinitePlaneRepresentation::New();
}


int VTK_EXPORT vtkFinitePlaneRepresentationCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkFinitePlaneRepresentation *op = vtkFinitePlaneRepresentation::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkFinitePlaneRepresentation.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkFinitePlaneRepresentation  *temp20;
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
    vtkFinitePlaneRepresentation  *temp20;
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
    vtkFinitePlaneRepresentation  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPolyData",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPolyData  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPolyData"))
      {
      op->GetPolyData(temp0);
      return 1;
      }
    }
  if (!strcmp("GetV1HandleProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetV1HandleProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetV2HandleProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetV2HandleProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelectedHandleProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetSelectedHandleProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPlaneProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetPlaneProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelectedPlaneProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetSelectedPlaneProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTubing",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTubing(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTubing",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetTubing();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TubingOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TubingOn();
      return 1;
      }
    }
  if (!strcmp("TubingOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->TubingOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawPlane",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawPlane(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawPlane",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetDrawPlane();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawPlaneOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawPlaneOn();
      return 1;
      }
    }
  if (!strcmp("DrawPlaneOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawPlaneOff();
      return 1;
      }
    }
  if (!strcmp("SetHandles",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetHandles(temp0);
      return 1;
      }
    }
  if (!strcmp("HandlesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->HandlesOn();
      return 1;
      }
    }
  if (!strcmp("HandlesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->HandlesOff();
      return 1;
      }
    }
  if (!strcmp("PlaceWidget",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->PlaceWidget(temp0);
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
  if (!strcmp("WidgetInteraction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->WidgetInteraction(temp0);
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
  if (!strcmp("HasTranslucentPolygonalGeometry",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->HasTranslucentPolygonalGeometry();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetOrigin",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetOrigin(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetOrigin",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetOrigin(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOrigin",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetOrigin();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNormal",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetNormal(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetNormal",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetNormal(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNormal",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetNormal();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetV1",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetV1(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetV1",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetV1(temp0);
      return 1;
      }
    }
  if (!strcmp("GetV1",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetV1();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetV2",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetV2(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetV2",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->SetV2(temp0);
      return 1;
      }
    }
  if (!strcmp("GetV2",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetV2();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,2) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRepresentationState",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRepresentationState(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRepresentationState",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetRepresentationState();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNormalProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetNormalProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelectedNormalProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetSelectedNormalProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("TranslateOrigin",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    if(temp0 &&
      temp1)
      {
      op->TranslateOrigin(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("MovePoint1",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    if(temp0 &&
      temp1)
      {
      op->MovePoint1(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("MovePoint2",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    if(temp0 &&
      temp1)
      {
      op->MovePoint2(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Push",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkClientServerStreamDataArg<double > temp0(msg, 0, 2);
    vtkClientServerStreamDataArg<double > temp1(msg, 0, 3);
    if(temp0 &&
      temp1)
      {
      op->Push(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("Rotate",method) && msg.GetNumberOfArguments(0) == 7)
    {
    int      temp0;
    int      temp1;
    vtkClientServerStreamDataArg<double > temp2(msg, 0, 4);
    vtkClientServerStreamDataArg<double > temp3(msg, 0, 5);
    vtkClientServerStreamDataArg<double > temp4(msg, 0, 6);
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      temp2 &&
      temp3 &&
      temp4)
      {
      op->Rotate(temp0,temp1,temp2,temp3,temp4);
      return 1;
      }
    }
  if (!strcmp("RegisterPickers",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RegisterPickers();
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
  vtkmsg << "Object type: vtkFinitePlaneRepresentation, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkFinitePlaneRepresentation_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkFinitePlaneRepresentation", vtkFinitePlaneRepresentationClientServerNewCommand);
    csi->AddCommandFunction("vtkFinitePlaneRepresentation", vtkFinitePlaneRepresentationCommand);
    }
}
