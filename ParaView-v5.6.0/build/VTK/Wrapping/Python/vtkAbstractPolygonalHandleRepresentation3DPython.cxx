// python wrapper for vtkAbstractPolygonalHandleRepresentation3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractPolygonalHandleRepresentation3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractPolygonalHandleRepresentation3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractPolygonalHandleRepresentation3D_ClassNew(); }

#ifndef DECLARED_PyvtkHandleRepresentation_ClassNew
extern "C" { PyObject *PyvtkHandleRepresentation_ClassNew(); }
#define DECLARED_PyvtkHandleRepresentation_ClassNew
#endif

static const char *PyvtkAbstractPolygonalHandleRepresentation3D_Doc =
  "vtkAbstractPolygonalHandleRepresentation3D - represent a user defined\nhandle geometry in 3D while maintaining a fixed orientation w.r.t the\ncamera.\n\n"
  "Superclass: vtkHandleRepresentation\n\n"
  "This class serves as the geometrical representation of a\n"
  "vtkHandleWidget. The handle can be represented by an arbitrary\n"
  "polygonal data (vtkPolyData), set via SetHandle(vtkPolyData *). The\n"
  "actual position of the handle will be initially assumed to be\n"
  "(0,0,0). You can specify an offset from this position if desired.\n"
  "This class differs from vtkPolygonalHandleRepresentation3D in that\n"
  "the handle will always remain front facing, ie it maintains a fixed\n"
  "orientation with respect to the camera. This is done by using\n"
  "vtkFollowers internally to render the actors.\n"
  "@sa\n"
  "vtkPolygonalHandleRepresentation3D vtkHandleRepresentation\n"
  "vtkHandleWidget\n\n";


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractPolygonalHandleRepresentation3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractPolygonalHandleRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractPolygonalHandleRepresentation3D *tempr = vtkAbstractPolygonalHandleRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPolygonalHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractPolygonalHandleRepresentation3D::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetWorldPosition(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetWorldPosition(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetDisplayPosition(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetDisplayPosition(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetHandle(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetHandle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetHandle() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetHandle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSelectedProperty(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetSelectedProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetSelectedProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->StartWidgetInteraction(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::StartWidgetInteraction(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::WidgetInteraction(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkAbstractPolygonalHandleRepresentation3D::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAbstractPolygonalHandleRepresentation3D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAbstractPolygonalHandleRepresentation3D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkAbstractPolygonalHandleRepresentation3D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelVisibility(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOn();
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::LabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOff();
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::LabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelText(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetLabelText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelText() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetLabelText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelTextScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetLabelTextScale(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetLabelTextScale(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelTextScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetLabelTextScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelTextScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelTextScale_s1(self, args);
    case 3:
      return PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelTextScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelTextScale");
  return nullptr;
}



static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLabelTextScale() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetLabelTextScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFollower *tempr = (ap.IsBound() ?
      op->GetLabelTextActor() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetLabelTextActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetUniformScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUniformScale(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetUniformScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleVisibility(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetHandleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleVisibility() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetHandleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_HandleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleVisibilityOn();
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::HandleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_HandleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleVisibilityOff();
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::HandleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Highlight(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SetSmoothMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothMotion(temp0);
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SetSmoothMotion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_GetSmoothMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSmoothMotion() :
      op->vtkAbstractPolygonalHandleRepresentation3D::GetSmoothMotion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SmoothMotionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothMotionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SmoothMotionOn();
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SmoothMotionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_SmoothMotionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothMotionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SmoothMotionOff();
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::SmoothMotionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPolygonalHandleRepresentation3D_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPolygonalHandleRepresentation3D *op = static_cast<vtkAbstractPolygonalHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkAbstractPolygonalHandleRepresentation3D::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractPolygonalHandleRepresentation3D_Methods[] = {
  {"IsTypeOf", PyvtkAbstractPolygonalHandleRepresentation3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkAbstractPolygonalHandleRepresentation3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkAbstractPolygonalHandleRepresentation3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkAbstractPolygonalHandleRepresentation3D\nC++: static vtkAbstractPolygonalHandleRepresentation3D *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkAbstractPolygonalHandleRepresentation3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractPolygonalHandleRepresentation3D\nC++: vtkAbstractPolygonalHandleRepresentation3D *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"SetWorldPosition", PyvtkAbstractPolygonalHandleRepresentation3D_SetWorldPosition, METH_VARARGS,
   "V.SetWorldPosition([float, float, float])\nC++: void SetWorldPosition(double p[3]) override;\n\nSet the position of the point in world and display coordinates.\n"},
  {"SetDisplayPosition", PyvtkAbstractPolygonalHandleRepresentation3D_SetDisplayPosition, METH_VARARGS,
   "V.SetDisplayPosition([float, float, float])\nC++: void SetDisplayPosition(double p[3]) override;\n\nSet the position of the point in world and display coordinates.\n"},
  {"SetHandle", PyvtkAbstractPolygonalHandleRepresentation3D_SetHandle, METH_VARARGS,
   "V.SetHandle(vtkPolyData)\nC++: void SetHandle(vtkPolyData *)\n\nSet/get the handle polydata.\n"},
  {"GetHandle", PyvtkAbstractPolygonalHandleRepresentation3D_GetHandle, METH_VARARGS,
   "V.GetHandle() -> vtkPolyData\nC++: vtkPolyData *GetHandle()\n\nSet/get the handle polydata.\n"},
  {"SetProperty", PyvtkAbstractPolygonalHandleRepresentation3D_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkProperty)\nC++: void SetProperty(vtkProperty *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"SetSelectedProperty", PyvtkAbstractPolygonalHandleRepresentation3D_SetSelectedProperty, METH_VARARGS,
   "V.SetSelectedProperty(vtkProperty)\nC++: void SetSelectedProperty(vtkProperty *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"GetProperty", PyvtkAbstractPolygonalHandleRepresentation3D_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"GetSelectedProperty", PyvtkAbstractPolygonalHandleRepresentation3D_GetSelectedProperty, METH_VARARGS,
   "V.GetSelectedProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedProperty()\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"GetTransform", PyvtkAbstractPolygonalHandleRepresentation3D_GetTransform, METH_VARARGS,
   "V.GetTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\nGet the transform used to transform the generic handle polydata\nbefore placing it in the render window\n"},
  {"BuildRepresentation", PyvtkAbstractPolygonalHandleRepresentation3D_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"StartWidgetInteraction", PyvtkAbstractPolygonalHandleRepresentation3D_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"WidgetInteraction", PyvtkAbstractPolygonalHandleRepresentation3D_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double eventPos[2]) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"ComputeInteractionState", PyvtkAbstractPolygonalHandleRepresentation3D_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"ShallowCopy", PyvtkAbstractPolygonalHandleRepresentation3D_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"DeepCopy", PyvtkAbstractPolygonalHandleRepresentation3D_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkProp)\nC++: void DeepCopy(vtkProp *prop) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"GetActors", PyvtkAbstractPolygonalHandleRepresentation3D_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkAbstractPolygonalHandleRepresentation3D_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOpaqueGeometry", PyvtkAbstractPolygonalHandleRepresentation3D_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkAbstractPolygonalHandleRepresentation3D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkAbstractPolygonalHandleRepresentation3D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"GetBounds", PyvtkAbstractPolygonalHandleRepresentation3D_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"SetLabelVisibility", PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelVisibility, METH_VARARGS,
   "V.SetLabelVisibility(int)\nC++: virtual void SetLabelVisibility(vtkTypeBool _arg)\n\nA label may be associated with the seed. The string can be set\nvia SetLabelText. The visibility of the label can be turned on /\noff.\n"},
  {"GetLabelVisibility", PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelVisibility, METH_VARARGS,
   "V.GetLabelVisibility() -> int\nC++: virtual vtkTypeBool GetLabelVisibility()\n\nA label may be associated with the seed. The string can be set\nvia SetLabelText. The visibility of the label can be turned on /\noff.\n"},
  {"LabelVisibilityOn", PyvtkAbstractPolygonalHandleRepresentation3D_LabelVisibilityOn, METH_VARARGS,
   "V.LabelVisibilityOn()\nC++: virtual void LabelVisibilityOn()\n\nA label may be associated with the seed. The string can be set\nvia SetLabelText. The visibility of the label can be turned on /\noff.\n"},
  {"LabelVisibilityOff", PyvtkAbstractPolygonalHandleRepresentation3D_LabelVisibilityOff, METH_VARARGS,
   "V.LabelVisibilityOff()\nC++: virtual void LabelVisibilityOff()\n\nA label may be associated with the seed. The string can be set\nvia SetLabelText. The visibility of the label can be turned on /\noff.\n"},
  {"SetLabelText", PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelText, METH_VARARGS,
   "V.SetLabelText(string)\nC++: virtual void SetLabelText(const char *label)\n\nA label may be associated with the seed. The string can be set\nvia SetLabelText. The visibility of the label can be turned on /\noff.\n"},
  {"GetLabelText", PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelText, METH_VARARGS,
   "V.GetLabelText() -> string\nC++: virtual char *GetLabelText()\n\nA label may be associated with the seed. The string can be set\nvia SetLabelText. The visibility of the label can be turned on /\noff.\n"},
  {"SetLabelTextScale", PyvtkAbstractPolygonalHandleRepresentation3D_SetLabelTextScale, METH_VARARGS,
   "V.SetLabelTextScale([float, float, float])\nC++: virtual void SetLabelTextScale(double scale[3])\nV.SetLabelTextScale(float, float, float)\nC++: void SetLabelTextScale(double x, double y, double z)\n\nScale text (font size along each dimension).\n"},
  {"GetLabelTextScale", PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelTextScale, METH_VARARGS,
   "V.GetLabelTextScale() -> (float, ...)\nC++: virtual double *GetLabelTextScale()\n\nScale text (font size along each dimension).\n"},
  {"GetLabelTextActor", PyvtkAbstractPolygonalHandleRepresentation3D_GetLabelTextActor, METH_VARARGS,
   "V.GetLabelTextActor() -> vtkFollower\nC++: virtual vtkFollower *GetLabelTextActor()\n\nGet the label text actor\n"},
  {"SetUniformScale", PyvtkAbstractPolygonalHandleRepresentation3D_SetUniformScale, METH_VARARGS,
   "V.SetUniformScale(float)\nC++: virtual void SetUniformScale(double scale)\n\nThe handle may be scaled uniformly in all three dimensions using\nthis API. The handle can also be scaled interactively using the\nright mouse button.\n"},
  {"SetHandleVisibility", PyvtkAbstractPolygonalHandleRepresentation3D_SetHandleVisibility, METH_VARARGS,
   "V.SetHandleVisibility(int)\nC++: virtual void SetHandleVisibility(vtkTypeBool _arg)\n\nToggle the visibility of the handle on and off\n"},
  {"GetHandleVisibility", PyvtkAbstractPolygonalHandleRepresentation3D_GetHandleVisibility, METH_VARARGS,
   "V.GetHandleVisibility() -> int\nC++: virtual vtkTypeBool GetHandleVisibility()\n\nToggle the visibility of the handle on and off\n"},
  {"HandleVisibilityOn", PyvtkAbstractPolygonalHandleRepresentation3D_HandleVisibilityOn, METH_VARARGS,
   "V.HandleVisibilityOn()\nC++: virtual void HandleVisibilityOn()\n\nToggle the visibility of the handle on and off\n"},
  {"HandleVisibilityOff", PyvtkAbstractPolygonalHandleRepresentation3D_HandleVisibilityOff, METH_VARARGS,
   "V.HandleVisibilityOff()\nC++: virtual void HandleVisibilityOff()\n\nToggle the visibility of the handle on and off\n"},
  {"Highlight", PyvtkAbstractPolygonalHandleRepresentation3D_Highlight, METH_VARARGS,
   "V.Highlight(int)\nC++: void Highlight(int highlight) override;\n\n"},
  {"SetSmoothMotion", PyvtkAbstractPolygonalHandleRepresentation3D_SetSmoothMotion, METH_VARARGS,
   "V.SetSmoothMotion(int)\nC++: virtual void SetSmoothMotion(vtkTypeBool _arg)\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {"GetSmoothMotion", PyvtkAbstractPolygonalHandleRepresentation3D_GetSmoothMotion, METH_VARARGS,
   "V.GetSmoothMotion() -> int\nC++: virtual vtkTypeBool GetSmoothMotion()\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {"SmoothMotionOn", PyvtkAbstractPolygonalHandleRepresentation3D_SmoothMotionOn, METH_VARARGS,
   "V.SmoothMotionOn()\nC++: virtual void SmoothMotionOn()\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {"SmoothMotionOff", PyvtkAbstractPolygonalHandleRepresentation3D_SmoothMotionOff, METH_VARARGS,
   "V.SmoothMotionOff()\nC++: virtual void SmoothMotionOff()\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells, or\nusing a vtkPolygonalSurfacePointPlacer which constrains the\nwidget to the surface of a mesh. In such cases, inherent\nrestrictions on handle placement might conflict with a request\nfor smooth motion of the handles.\n"},
  {"RegisterPickers", PyvtkAbstractPolygonalHandleRepresentation3D_RegisterPickers, METH_VARARGS,
   "V.RegisterPickers()\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractPolygonalHandleRepresentation3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkAbstractPolygonalHandleRepresentation3D", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkAbstractPolygonalHandleRepresentation3D_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkAbstractPolygonalHandleRepresentation3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractPolygonalHandleRepresentation3D_Type, PyvtkAbstractPolygonalHandleRepresentation3D_Methods,
    "vtkAbstractPolygonalHandleRepresentation3D",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractPolygonalHandleRepresentation3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHandleRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractPolygonalHandleRepresentation3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractPolygonalHandleRepresentation3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractPolygonalHandleRepresentation3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

