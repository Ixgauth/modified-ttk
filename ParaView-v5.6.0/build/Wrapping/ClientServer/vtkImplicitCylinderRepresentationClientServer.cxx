// ClientServer wrapper for vtkImplicitCylinderRepresentation object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkImplicitCylinderRepresentation.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkImplicitCylinderRepresentationClientServerNewCommand(void* /*ctx*/)
{
  return vtkImplicitCylinderRepresentation::New();
}


int VTK_EXPORT vtkImplicitCylinderRepresentationCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkImplicitCylinderRepresentation *op = vtkImplicitCylinderRepresentation::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkImplicitCylinderRepresentation.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImplicitCylinderRepresentation  *temp20;
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
    vtkImplicitCylinderRepresentation  *temp20;
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
    vtkImplicitCylinderRepresentation  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetCenter",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetCenter(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetCenter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetCenter(temp0);
      return 1;
      }
    }
  if (!strcmp("GetCenter",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetCenter();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCenter",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetCenter(temp0);
      return 1;
      }
    }
  if (!strcmp("SetAxis",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetAxis(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetAxis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetAxis(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAxis",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetAxis();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,3) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetAxis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->GetAxis(temp0);
      return 1;
      }
    }
  if (!strcmp("SetRadius",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRadius(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRadius",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetRadius();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMinRadius",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMinRadius(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMinRadiusMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMinRadiusMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMinRadiusMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMinRadiusMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMinRadius",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMinRadius();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMaxRadius",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMaxRadius(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMaxRadiusMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaxRadiusMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaxRadiusMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaxRadiusMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMaxRadius",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMaxRadius();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetAlongXAxis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAlongXAxis(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAlongXAxis",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAlongXAxis();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AlongXAxisOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AlongXAxisOn();
      return 1;
      }
    }
  if (!strcmp("AlongXAxisOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AlongXAxisOff();
      return 1;
      }
    }
  if (!strcmp("SetAlongYAxis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAlongYAxis(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAlongYAxis",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAlongYAxis();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AlongYAxisOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AlongYAxisOn();
      return 1;
      }
    }
  if (!strcmp("AlongYAxisOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AlongYAxisOff();
      return 1;
      }
    }
  if (!strcmp("SetAlongZAxis",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetAlongZAxis(temp0);
      return 1;
      }
    }
  if (!strcmp("GetAlongZAxis",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetAlongZAxis();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AlongZAxisOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AlongZAxisOn();
      return 1;
      }
    }
  if (!strcmp("AlongZAxisOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->AlongZAxisOff();
      return 1;
      }
    }
  if (!strcmp("SetDrawCylinder",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDrawCylinder(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDrawCylinder",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDrawCylinder();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DrawCylinderOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawCylinderOn();
      return 1;
      }
    }
  if (!strcmp("DrawCylinderOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DrawCylinderOff();
      return 1;
      }
    }
  if (!strcmp("SetResolution",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetResolution(temp0);
      return 1;
      }
    }
  if (!strcmp("GetResolutionMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetResolutionMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetResolutionMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetResolutionMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetResolution",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetResolution();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTubing",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetTubing(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTubing",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
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
  if (!strcmp("SetOutlineTranslation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutlineTranslation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutlineTranslation",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutlineTranslation();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OutlineTranslationOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OutlineTranslationOn();
      return 1;
      }
    }
  if (!strcmp("OutlineTranslationOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OutlineTranslationOff();
      return 1;
      }
    }
  if (!strcmp("SetOutsideBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutsideBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutsideBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutsideBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("OutsideBoundsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OutsideBoundsOn();
      return 1;
      }
    }
  if (!strcmp("OutsideBoundsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->OutsideBoundsOff();
      return 1;
      }
    }
  if (!strcmp("SetWidgetBounds",method) && msg.GetNumberOfArguments(0) == 8)
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
      op->SetWidgetBounds(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetWidgetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->SetWidgetBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetWidgetBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetWidgetBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,6) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetConstrainToWidgetBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetConstrainToWidgetBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetConstrainToWidgetBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetConstrainToWidgetBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ConstrainToWidgetBoundsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ConstrainToWidgetBoundsOn();
      return 1;
      }
    }
  if (!strcmp("ConstrainToWidgetBoundsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ConstrainToWidgetBoundsOff();
      return 1;
      }
    }
  if (!strcmp("SetScaleEnabled",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetScaleEnabled(temp0);
      return 1;
      }
    }
  if (!strcmp("GetScaleEnabled",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetScaleEnabled();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ScaleEnabledOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScaleEnabledOn();
      return 1;
      }
    }
  if (!strcmp("ScaleEnabledOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ScaleEnabledOff();
      return 1;
      }
    }
  if (!strcmp("GetCylinder",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkCylinder  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkCylinder"))
      {
      op->GetCylinder(temp0);
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
  if (!strcmp("UpdatePlacement",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UpdatePlacement();
      return 1;
      }
    }
  if (!strcmp("GetAxisProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetAxisProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelectedAxisProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetSelectedAxisProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetCylinderProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetCylinderProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelectedCylinderProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetSelectedCylinderProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetOutlineProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetOutlineProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetSelectedOutlineProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetSelectedOutlineProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetEdgesProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetEdgesProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEdgeColor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkLookupTable  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkLookupTable"))
      {
      op->SetEdgeColor(temp0);
      return 1;
      }
    }
  if (!strcmp("SetEdgeColor",method) && msg.GetNumberOfArguments(0) == 5)
    {
    double   temp0;
    double   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetEdgeColor(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetEdgeColor",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[3];
    if(msg.GetArgument(0, 2, temp0, 3))
      {
      op->SetEdgeColor(temp0);
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
  if (!strcmp("EndWidgetInteraction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[2];
    if(msg.GetArgument(0, 2, temp0, 2))
      {
      op->EndWidgetInteraction(temp0);
      return 1;
      }
    }
  if (!strcmp("GetActors",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPropCollection  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPropCollection"))
      {
      op->GetActors(temp0);
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
  if (!strcmp("SetBumpDistance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetBumpDistance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetBumpDistanceMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetBumpDistanceMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBumpDistanceMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetBumpDistanceMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetBumpDistance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetBumpDistance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BumpCylinder",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->BumpCylinder(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("PushCylinder",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->PushCylinder(temp0);
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
  vtkmsg << "Object type: vtkImplicitCylinderRepresentation, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkImplicitCylinderRepresentation_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkImplicitCylinderRepresentation", vtkImplicitCylinderRepresentationClientServerNewCommand);
    csi->AddCommandFunction("vtkImplicitCylinderRepresentation", vtkImplicitCylinderRepresentationCommand);
    }
}
