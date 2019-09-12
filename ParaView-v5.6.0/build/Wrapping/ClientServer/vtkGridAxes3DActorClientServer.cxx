// ClientServer wrapper for vtkGridAxes3DActor object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkGridAxes3DActor.h"
#include "vtkSystemIncludes.h"
#include "vtkStdString.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkGridAxes3DActorClientServerNewCommand(void* /*ctx*/)
{
  return vtkGridAxes3DActor::New();
}


int VTK_EXPORT vtkGridAxes3DActorCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkGridAxes3DActor *op = vtkGridAxes3DActor::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkGridAxes3DActor.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkGridAxes3DActor  *temp20;
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
    vtkGridAxes3DActor  *temp20;
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
    vtkGridAxes3DActor  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("SetGridBounds",method) && msg.GetNumberOfArguments(0) == 8)
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
      op->SetGridBounds(temp0,temp1,temp2,temp3,temp4,temp5);
      return 1;
      }
    }
  if (!strcmp("SetGridBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->SetGridBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGridBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetGridBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,6) << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetFaceMask",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetFaceMask(temp0);
      return 1;
      }
    }
  if (!strcmp("GetFaceMask",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetFaceMask();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLabelMask",method) && msg.GetNumberOfArguments(0) == 3)
    {
    unsigned int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLabelMask(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLabelMask",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned int      temp20;
      {
      temp20 = (op)->GetLabelMask();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetLabelUniqueEdgesOnly",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetLabelUniqueEdgesOnly(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLabelUniqueEdgesOnly",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetLabelUniqueEdgesOnly();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGenerateGrid",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateGrid(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateGrid",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetGenerateGrid();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateGridOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateGridOn();
      return 1;
      }
    }
  if (!strcmp("GenerateGridOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateGridOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateEdges",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateEdges(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateEdges",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetGenerateEdges();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateEdgesOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateEdgesOn();
      return 1;
      }
    }
  if (!strcmp("GenerateEdgesOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateEdgesOff();
      return 1;
      }
    }
  if (!strcmp("SetGenerateTicks",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateTicks(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateTicks",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetGenerateTicks();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateTicksOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateTicksOn();
      return 1;
      }
    }
  if (!strcmp("GenerateTicksOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateTicksOff();
      return 1;
      }
    }
  if (!strcmp("SetProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkProperty"))
      {
      op->SetProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetProperty",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkProperty  *temp20;
      {
      temp20 = (op)->GetProperty();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTitleTextProperty",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkTextProperty  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkTextProperty"))
      {
      op->SetTitleTextProperty(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetXTitleTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty"))
      {
      op->SetXTitleTextProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("SetYTitleTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty"))
      {
      op->SetYTitleTextProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("SetZTitleTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty"))
      {
      op->SetZTitleTextProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetTitleTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkTextProperty  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetTitleTextProperty(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetTitle",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    char    *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetTitle(temp0,vtkStdString(temp1));
      return 1;
      }
    }
  if (!strcmp("SetXTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXTitle(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("SetYTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetYTitle(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("SetZTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetZTitle(vtkStdString(temp0));
      return 1;
      }
    }
  if (!strcmp("GetTitle",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    const vtkStdString  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = &(op)->GetTitle(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << *temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseCustomLabels",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    bool   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetUseCustomLabels(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetXUseCustomLabels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXUseCustomLabels(temp0);
      return 1;
      }
    }
  if (!strcmp("SetYUseCustomLabels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetYUseCustomLabels(temp0);
      return 1;
      }
    }
  if (!strcmp("SetZUseCustomLabels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetZUseCustomLabels(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNumberOfLabels",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkIdType   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetNumberOfLabels(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetNumberOfXLabels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfXLabels(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNumberOfYLabels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfYLabels(temp0);
      return 1;
      }
    }
  if (!strcmp("SetNumberOfZLabels",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIdType   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetNumberOfZLabels(temp0);
      return 1;
      }
    }
  if (!strcmp("SetLabel",method) && msg.GetNumberOfArguments(0) == 5)
    {
    int      temp0;
    vtkIdType   temp1;
    double   temp2;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1) &&
      msg.GetArgument(0, 4, &temp2))
      {
      op->SetLabel(temp0,temp1,temp2);
      return 1;
      }
    }
  if (!strcmp("SetXLabel",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetXLabel(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetYLabel",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetYLabel(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetZLabel",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkIdType   temp0;
    double   temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetZLabel(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetLabelTextProperty",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    vtkTextProperty  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkTextProperty"))
      {
      op->SetLabelTextProperty(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetXLabelTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty"))
      {
      op->SetXLabelTextProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("SetYLabelTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty"))
      {
      op->SetYLabelTextProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("SetZLabelTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkTextProperty  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkTextProperty"))
      {
      op->SetZLabelTextProperty(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLabelTextProperty",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkTextProperty  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetLabelTextProperty(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetNotation",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetNotation(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetXNotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXNotation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetYNotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetYNotation(temp0);
      return 1;
      }
    }
  if (!strcmp("SetZNotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetZNotation(temp0);
      return 1;
      }
    }
  if (!strcmp("GetNotation",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetNotation(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPrecision",method) && msg.GetNumberOfArguments(0) == 4)
    {
    int      temp0;
    int      temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      msg.GetArgument(0, 3, &temp1))
      {
      op->SetPrecision(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetXPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetXPrecision(temp0);
      return 1;
      }
    }
  if (!strcmp("SetYPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetYPrecision(temp0);
      return 1;
      }
    }
  if (!strcmp("SetZPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetZPrecision(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetPrecision(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetRenderedBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double temp0[6];
    if(msg.GetArgument(0, 2, temp0, 6))
      {
      op->GetRenderedBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("SetForceOpaque",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetForceOpaque(temp0);
      return 1;
      }
    }
  if (!strcmp("GetForceOpaque",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetForceOpaque();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("ForceOpaqueOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceOpaqueOn();
      return 1;
      }
    }
  if (!strcmp("ForceOpaqueOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->ForceOpaqueOff();
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
  if (!strcmp("ReleaseGraphicsResources",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkWindow  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkWindow"))
      {
      op->ReleaseGraphicsResources(temp0);
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

  {
    const char* commandName = "vtkProp3D";
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
  vtkmsg << "Object type: vtkGridAxes3DActor, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkGridAxes3DActor_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkGridAxes3DActor", vtkGridAxes3DActorClientServerNewCommand);
    csi->AddCommandFunction("vtkGridAxes3DActor", vtkGridAxes3DActorCommand);
    }
}
