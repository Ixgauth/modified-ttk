// ClientServer wrapper for vtkProp object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkProp.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


int VTK_EXPORT vtkPropCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkProp *op = vtkProp::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkProp.  "
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
    vtkProp  *temp20;
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
    vtkProp  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
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
  if (!strcmp("GetActors2D",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPropCollection  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPropCollection"))
      {
      op->GetActors2D(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVolumes",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkPropCollection  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkPropCollection"))
      {
      op->GetVolumes(temp0);
      return 1;
      }
    }
  if (!strcmp("SetVisibility",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetVisibility(temp0);
      return 1;
      }
    }
  if (!strcmp("GetVisibility",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetVisibility();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("VisibilityOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->VisibilityOn();
      return 1;
      }
    }
  if (!strcmp("VisibilityOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->VisibilityOff();
      return 1;
      }
    }
  if (!strcmp("SetPickable",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetPickable(temp0);
      return 1;
      }
    }
  if (!strcmp("GetPickable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetPickable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PickableOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PickableOn();
      return 1;
      }
    }
  if (!strcmp("PickableOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->PickableOff();
      return 1;
      }
    }
  if (!strcmp("Pick",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->Pick();
      return 1;
      }
    }
  if (!strcmp("SetDragable",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetDragable(temp0);
      return 1;
      }
    }
  if (!strcmp("GetDragable",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetDragable();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("DragableOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DragableOn();
      return 1;
      }
    }
  if (!strcmp("DragableOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->DragableOff();
      return 1;
      }
    }
  if (!strcmp("GetRedrawMTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetRedrawMTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseBounds",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseBounds(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseBoundsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseBoundsOn();
      return 1;
      }
    }
  if (!strcmp("UseBoundsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseBoundsOff();
      return 1;
      }
    }
  if (!strcmp("GetBounds",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double  *temp20;
      {
      temp20 = (op)->GetBounds();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << vtkClientServerStream::InsertArray(temp20,6) << vtkClientServerStream::End;
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
  if (!strcmp("InitPathTraversal",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InitPathTraversal();
      return 1;
      }
    }
  if (!strcmp("GetNextPath",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkAssemblyPath  *temp20;
      {
      temp20 = (op)->GetNextPath();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfPaths",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfPaths();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("PokeMatrix",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkMatrix4x4  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkMatrix4x4"))
      {
      op->PokeMatrix(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMatrix",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkMatrix4x4  *temp20;
      {
      temp20 = (op)->GetMatrix();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetPropertyKeys",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformation  *temp20;
      {
      temp20 = (op)->GetPropertyKeys();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetPropertyKeys",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformation  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation"))
      {
      op->SetPropertyKeys(temp0);
      return 1;
      }
    }
  if (!strcmp("HasKeys",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkInformation  *temp0;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkInformation"))
      {
      temp20 = (op)->HasKeys(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GeneralTextureUnit",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationIntegerKey  *temp20;
      {
      temp20 = (op)->GeneralTextureUnit();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GeneralTextureTransform",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkInformationDoubleVectorKey  *temp20;
      {
      temp20 = (op)->GeneralTextureTransform();
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
  if (!strcmp("RenderVolumetricGeometry",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      temp20 = (op)->RenderVolumetricGeometry(temp0);
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
  if (!strcmp("RenderFilteredOpaqueGeometry",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkViewport  *temp0;
    vtkInformation  *temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformation"))
      {
      temp20 = (op)->RenderFilteredOpaqueGeometry(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderFilteredTranslucentPolygonalGeometry",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkViewport  *temp0;
    vtkInformation  *temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformation"))
      {
      temp20 = (op)->RenderFilteredTranslucentPolygonalGeometry(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderFilteredVolumetricGeometry",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkViewport  *temp0;
    vtkInformation  *temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformation"))
      {
      temp20 = (op)->RenderFilteredVolumetricGeometry(temp0,temp1);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("RenderFilteredOverlay",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkViewport  *temp0;
    vtkInformation  *temp1;
    bool   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkInformation"))
      {
      temp20 = (op)->RenderFilteredOverlay(temp0,temp1);
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
  if (!strcmp("GetEstimatedRenderTime",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkViewport  *temp0;
    double   temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkViewport"))
      {
      temp20 = (op)->GetEstimatedRenderTime(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetEstimatedRenderTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetEstimatedRenderTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetEstimatedRenderTime",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetEstimatedRenderTime(temp0);
      return 1;
      }
    }
  if (!strcmp("RestoreEstimatedRenderTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->RestoreEstimatedRenderTime();
      return 1;
      }
    }
  if (!strcmp("AddEstimatedRenderTime",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    vtkViewport  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkViewport"))
      {
      op->AddEstimatedRenderTime(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("SetAllocatedRenderTime",method) && msg.GetNumberOfArguments(0) == 4)
    {
    double   temp0;
    vtkViewport  *temp1;
    if(msg.GetArgument(0, 2, &temp0) &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkViewport"))
      {
      op->SetAllocatedRenderTime(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetAllocatedRenderTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetAllocatedRenderTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetRenderTimeMultiplier",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetRenderTimeMultiplier(temp0);
      return 1;
      }
    }
  if (!strcmp("GetRenderTimeMultiplier",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetRenderTimeMultiplier();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("BuildPaths",method) && msg.GetNumberOfArguments(0) == 4)
    {
    vtkAssemblyPaths  *temp0;
    vtkAssemblyPath  *temp1;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkAssemblyPaths") &&
      vtkClientServerStreamGetArgumentObject(msg, 0, 3, &temp1, "vtkAssemblyPath"))
      {
      op->BuildPaths(temp0,temp1);
      return 1;
      }
    }
  if (!strcmp("GetSupportsSelection",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetSupportsSelection();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetNumberOfConsumers",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetNumberOfConsumers();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("AddConsumer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      op->AddConsumer(temp0);
      return 1;
      }
    }
  if (!strcmp("RemoveConsumer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObject  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      op->RemoveConsumer(temp0);
      return 1;
      }
    }
  if (!strcmp("GetConsumer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    vtkObject  *temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->GetConsumer(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsConsumer",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObject  *temp0;
    int      temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->IsConsumer(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
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
  vtkmsg << "Object type: vtkProp, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkProp_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddCommandFunction("vtkProp", vtkPropCommand);
    }
}
