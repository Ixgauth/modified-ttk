// python wrapper for vtkProp
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
#include "vtkProp.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProp(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProp_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkProp_Doc =
  "vtkProp - abstract superclass for all actors, volumes and annotations\n\n"
  "Superclass: vtkObject\n\n"
  "vtkProp is an abstract superclass for any objects that can exist in a\n"
  "rendered scene (either 2D or 3D). Instances of vtkProp may respond to\n"
  "various render methods (e.g., RenderOpaqueGeometry()). vtkProp also\n"
  "defines the API for picking, LOD manipulation, and common instance\n"
  "variables that control visibility, picking, and dragging.\n"
  "@sa\n"
  "vtkActor2D vtkActor vtkVolume vtkProp3D\n\n";


static PyObject *
PyvtkProp_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProp::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProp::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProp *tempr = vtkProp::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProp::NewInstance());

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
PyvtkProp_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

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
      op->vtkProp::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkProp::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetVolumes(temp0);
    }
    else
    {
      op->vtkProp::GetVolumes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkProp::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisibility() :
      op->vtkProp::GetVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VisibilityOn();
    }
    else
    {
      op->vtkProp::VisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VisibilityOff();
    }
    else
    {
      op->vtkProp::VisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickable(temp0);
    }
    else
    {
      op->vtkProp::SetPickable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickable() :
      op->vtkProp::GetPickable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_PickableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickableOn();
    }
    else
    {
      op->vtkProp::PickableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_PickableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickableOff();
    }
    else
    {
      op->vtkProp::PickableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_Pick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Pick();
    }
    else
    {
      op->vtkProp::Pick();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetDragable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDragable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDragable(temp0);
    }
    else
    {
      op->vtkProp::SetDragable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetDragable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDragable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDragable() :
      op->vtkProp::GetDragable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_DragableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DragableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DragableOn();
    }
    else
    {
      op->vtkProp::DragableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_DragableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DragableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DragableOff();
    }
    else
    {
      op->vtkProp::DragableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetRedrawMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedrawMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetRedrawMTime() :
      op->vtkProp::GetRedrawMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetUseBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseBounds(temp0);
    }
    else
    {
      op->vtkProp::SetUseBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetUseBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseBounds() :
      op->vtkProp::GetUseBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_UseBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBoundsOn();
    }
    else
    {
      op->vtkProp::UseBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_UseBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBoundsOff();
    }
    else
    {
      op->vtkProp::UseBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkProp::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

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
      op->vtkProp::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_InitPathTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPathTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitPathTraversal();
    }
    else
    {
      op->vtkProp::InitPathTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetNextPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->GetNextPath() :
      op->vtkProp::GetNextPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetNumberOfPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPaths() :
      op->vtkProp::GetNumberOfPaths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_PokeMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PokeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->PokeMatrix(temp0);
    }
    else
    {
      op->vtkProp::PokeMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMatrix() :
      op->vtkProp::GetMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetPropertyKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetPropertyKeys() :
      op->vtkProp::GetPropertyKeys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetPropertyKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertyKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetPropertyKeys(temp0);
    }
    else
    {
      op->vtkProp::SetPropertyKeys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_HasKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasKeys(temp0) :
      op->vtkProp::HasKeys(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GeneralTextureUnit(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GeneralTextureUnit");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkProp::GeneralTextureUnit();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GeneralTextureTransform(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GeneralTextureTransform");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkProp::GeneralTextureTransform();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkProp::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkProp::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkProp::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkProp::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderFilteredOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderFilteredOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->RenderFilteredOpaqueGeometry(temp0, temp1) :
      op->vtkProp::RenderFilteredOpaqueGeometry(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderFilteredTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderFilteredTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->RenderFilteredTranslucentPolygonalGeometry(temp0, temp1) :
      op->vtkProp::RenderFilteredTranslucentPolygonalGeometry(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderFilteredVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderFilteredVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->RenderFilteredVolumetricGeometry(temp0, temp1) :
      op->vtkProp::RenderFilteredVolumetricGeometry(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderFilteredOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderFilteredOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->RenderFilteredOverlay(temp0, temp1) :
      op->vtkProp::RenderFilteredOverlay(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkProp::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

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
      op->vtkProp::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetEstimatedRenderTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    double tempr = (ap.IsBound() ?
      op->GetEstimatedRenderTime(temp0) :
      op->vtkProp::GetEstimatedRenderTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkProp_GetEstimatedRenderTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEstimatedRenderTime() :
      op->vtkProp::GetEstimatedRenderTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkProp_GetEstimatedRenderTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkProp_GetEstimatedRenderTime_s1(self, args);
    case 0:
      return PyvtkProp_GetEstimatedRenderTime_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEstimatedRenderTime");
  return nullptr;
}



static PyObject *
PyvtkProp_SetEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEstimatedRenderTime(temp0);
    }
    else
    {
      op->vtkProp::SetEstimatedRenderTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RestoreEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestoreEstimatedRenderTime();
    }
    else
    {
      op->vtkProp::RestoreEstimatedRenderTime();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_AddEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  double temp0;
  vtkViewport *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->AddEstimatedRenderTime(temp0, temp1);
    }
    else
    {
      op->vtkProp::AddEstimatedRenderTime(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetAllocatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllocatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  double temp0;
  vtkViewport *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->SetAllocatedRenderTime(temp0, temp1);
    }
    else
    {
      op->vtkProp::SetAllocatedRenderTime(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetAllocatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllocatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAllocatedRenderTime() :
      op->vtkProp::GetAllocatedRenderTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetRenderTimeMultiplier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderTimeMultiplier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderTimeMultiplier(temp0);
    }
    else
    {
      op->vtkProp::SetRenderTimeMultiplier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetRenderTimeMultiplier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderTimeMultiplier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRenderTimeMultiplier() :
      op->vtkProp::GetRenderTimeMultiplier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_BuildPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkAssemblyPaths *temp0 = nullptr;
  vtkAssemblyPath *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPaths") &&
      ap.GetVTKObject(temp1, "vtkAssemblyPath"))
  {
    if (ap.IsBound())
    {
      op->BuildPaths(temp0, temp1);
    }
    else
    {
      op->vtkProp::BuildPaths(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkProp::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetNumberOfConsumers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConsumers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfConsumers() :
      op->vtkProp::GetNumberOfConsumers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_AddConsumer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddConsumer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->AddConsumer(temp0);
    }
    else
    {
      op->vtkProp::AddConsumer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RemoveConsumer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveConsumer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveConsumer(temp0);
    }
    else
    {
      op->vtkProp::RemoveConsumer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetConsumer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsumer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetConsumer(temp0) :
      op->vtkProp::GetConsumer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_IsConsumer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsConsumer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    int tempr = (ap.IsBound() ?
      op->IsConsumer(temp0) :
      op->vtkProp::IsConsumer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProp_Methods[] = {
  {"IsTypeOf", PyvtkProp_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProp_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProp_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProp\nC++: static vtkProp *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProp_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProp\nC++: vtkProp *NewInstance()\n\n"},
  {"GetActors", PyvtkProp_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"GetActors2D", PyvtkProp_GetActors2D, METH_VARARGS,
   "V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *)\n\n"},
  {"GetVolumes", PyvtkProp_GetVolumes, METH_VARARGS,
   "V.GetVolumes(vtkPropCollection)\nC++: virtual void GetVolumes(vtkPropCollection *)\n\n"},
  {"SetVisibility", PyvtkProp_SetVisibility, METH_VARARGS,
   "V.SetVisibility(int)\nC++: virtual void SetVisibility(vtkTypeBool _arg)\n\nSet/Get visibility of this vtkProp. Initial value is true.\n"},
  {"GetVisibility", PyvtkProp_GetVisibility, METH_VARARGS,
   "V.GetVisibility() -> int\nC++: virtual vtkTypeBool GetVisibility()\n\nSet/Get visibility of this vtkProp. Initial value is true.\n"},
  {"VisibilityOn", PyvtkProp_VisibilityOn, METH_VARARGS,
   "V.VisibilityOn()\nC++: virtual void VisibilityOn()\n\nSet/Get visibility of this vtkProp. Initial value is true.\n"},
  {"VisibilityOff", PyvtkProp_VisibilityOff, METH_VARARGS,
   "V.VisibilityOff()\nC++: virtual void VisibilityOff()\n\nSet/Get visibility of this vtkProp. Initial value is true.\n"},
  {"SetPickable", PyvtkProp_SetPickable, METH_VARARGS,
   "V.SetPickable(int)\nC++: virtual void SetPickable(vtkTypeBool _arg)\n\nSet/Get the pickable instance variable.  This determines if the\nvtkProp can be picked (typically using the mouse). Also see\ndragable. Initial value is true.\n"},
  {"GetPickable", PyvtkProp_GetPickable, METH_VARARGS,
   "V.GetPickable() -> int\nC++: virtual vtkTypeBool GetPickable()\n\nSet/Get the pickable instance variable.  This determines if the\nvtkProp can be picked (typically using the mouse). Also see\ndragable. Initial value is true.\n"},
  {"PickableOn", PyvtkProp_PickableOn, METH_VARARGS,
   "V.PickableOn()\nC++: virtual void PickableOn()\n\nSet/Get the pickable instance variable.  This determines if the\nvtkProp can be picked (typically using the mouse). Also see\ndragable. Initial value is true.\n"},
  {"PickableOff", PyvtkProp_PickableOff, METH_VARARGS,
   "V.PickableOff()\nC++: virtual void PickableOff()\n\nSet/Get the pickable instance variable.  This determines if the\nvtkProp can be picked (typically using the mouse). Also see\ndragable. Initial value is true.\n"},
  {"Pick", PyvtkProp_Pick, METH_VARARGS,
   "V.Pick()\nC++: virtual void Pick()\n\nMethod fires PickEvent if the prop is picked.\n"},
  {"SetDragable", PyvtkProp_SetDragable, METH_VARARGS,
   "V.SetDragable(int)\nC++: virtual void SetDragable(vtkTypeBool _arg)\n\nSet/Get the value of the dragable instance variable. This\ndetermines if an Prop, once picked, can be dragged (translated)\nthrough space. This is typically done through an interactive\nmouse interface. This does not affect methods such as\nSetPosition, which will continue to work.  It is just intended to\nprevent some vtkProp'ss from being dragged from within a user\ninterface. Initial value is true.\n"},
  {"GetDragable", PyvtkProp_GetDragable, METH_VARARGS,
   "V.GetDragable() -> int\nC++: virtual vtkTypeBool GetDragable()\n\nSet/Get the value of the dragable instance variable. This\ndetermines if an Prop, once picked, can be dragged (translated)\nthrough space. This is typically done through an interactive\nmouse interface. This does not affect methods such as\nSetPosition, which will continue to work.  It is just intended to\nprevent some vtkProp'ss from being dragged from within a user\ninterface. Initial value is true.\n"},
  {"DragableOn", PyvtkProp_DragableOn, METH_VARARGS,
   "V.DragableOn()\nC++: virtual void DragableOn()\n\nSet/Get the value of the dragable instance variable. This\ndetermines if an Prop, once picked, can be dragged (translated)\nthrough space. This is typically done through an interactive\nmouse interface. This does not affect methods such as\nSetPosition, which will continue to work.  It is just intended to\nprevent some vtkProp'ss from being dragged from within a user\ninterface. Initial value is true.\n"},
  {"DragableOff", PyvtkProp_DragableOff, METH_VARARGS,
   "V.DragableOff()\nC++: virtual void DragableOff()\n\nSet/Get the value of the dragable instance variable. This\ndetermines if an Prop, once picked, can be dragged (translated)\nthrough space. This is typically done through an interactive\nmouse interface. This does not affect methods such as\nSetPosition, which will continue to work.  It is just intended to\nprevent some vtkProp'ss from being dragged from within a user\ninterface. Initial value is true.\n"},
  {"GetRedrawMTime", PyvtkProp_GetRedrawMTime, METH_VARARGS,
   "V.GetRedrawMTime() -> int\nC++: virtual vtkMTimeType GetRedrawMTime()\n\nReturn the mtime of anything that would cause the rendered image\nto appear differently. Usually this involves checking the mtime\nof the prop plus anything else it depends on such as properties,\ntextures etc.\n"},
  {"SetUseBounds", PyvtkProp_SetUseBounds, METH_VARARGS,
   "V.SetUseBounds(bool)\nC++: virtual void SetUseBounds(bool _arg)\n\nIn case the Visibility flag is true, tell if the bounds of this\nprop should be taken into account or ignored during the\ncomputation of other bounding boxes, like in\nvtkRenderer::ResetCamera(). Initial value is true.\n"},
  {"GetUseBounds", PyvtkProp_GetUseBounds, METH_VARARGS,
   "V.GetUseBounds() -> bool\nC++: virtual bool GetUseBounds()\n\nIn case the Visibility flag is true, tell if the bounds of this\nprop should be taken into account or ignored during the\ncomputation of other bounding boxes, like in\nvtkRenderer::ResetCamera(). Initial value is true.\n"},
  {"UseBoundsOn", PyvtkProp_UseBoundsOn, METH_VARARGS,
   "V.UseBoundsOn()\nC++: virtual void UseBoundsOn()\n\nIn case the Visibility flag is true, tell if the bounds of this\nprop should be taken into account or ignored during the\ncomputation of other bounding boxes, like in\nvtkRenderer::ResetCamera(). Initial value is true.\n"},
  {"UseBoundsOff", PyvtkProp_UseBoundsOff, METH_VARARGS,
   "V.UseBoundsOff()\nC++: virtual void UseBoundsOff()\n\nIn case the Visibility flag is true, tell if the bounds of this\nprop should be taken into account or ignored during the\ncomputation of other bounding boxes, like in\nvtkRenderer::ResetCamera(). Initial value is true.\n"},
  {"GetBounds", PyvtkProp_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\nGet the bounds for this Prop as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\nin world coordinates. NULL means that the bounds are not defined.\n"},
  {"ShallowCopy", PyvtkProp_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nShallow copy of this vtkProp.\n"},
  {"InitPathTraversal", PyvtkProp_InitPathTraversal, METH_VARARGS,
   "V.InitPathTraversal()\nC++: virtual void InitPathTraversal()\n\nvtkProp and its subclasses can be picked by subclasses of\nvtkAbstractPicker (e.g., vtkPropPicker). The following methods\ninterface with the picking classes and return \"pick paths\". A\npick path is a hierarchical, ordered list of props that form an\nassembly.  Most often, when a vtkProp is picked, its path\nconsists of a single node (i.e., the prop). However, classes like\nvtkAssembly and vtkPropAssembly can return more than one path,\neach path being several layers deep. (See vtkAssemblyPath for\nmore information.)  To use these methods - first invoke\nInitPathTraversal() followed by repeated calls to GetNextPath().\nGetNextPath() returns a NULL pointer when the list is exhausted.\n"},
  {"GetNextPath", PyvtkProp_GetNextPath, METH_VARARGS,
   "V.GetNextPath() -> vtkAssemblyPath\nC++: virtual vtkAssemblyPath *GetNextPath()\n\nvtkProp and its subclasses can be picked by subclasses of\nvtkAbstractPicker (e.g., vtkPropPicker). The following methods\ninterface with the picking classes and return \"pick paths\". A\npick path is a hierarchical, ordered list of props that form an\nassembly.  Most often, when a vtkProp is picked, its path\nconsists of a single node (i.e., the prop). However, classes like\nvtkAssembly and vtkPropAssembly can return more than one path,\neach path being several layers deep. (See vtkAssemblyPath for\nmore information.)  To use these methods - first invoke\nInitPathTraversal() followed by repeated calls to GetNextPath().\nGetNextPath() returns a NULL pointer when the list is exhausted.\n"},
  {"GetNumberOfPaths", PyvtkProp_GetNumberOfPaths, METH_VARARGS,
   "V.GetNumberOfPaths() -> int\nC++: virtual int GetNumberOfPaths()\n\nvtkProp and its subclasses can be picked by subclasses of\nvtkAbstractPicker (e.g., vtkPropPicker). The following methods\ninterface with the picking classes and return \"pick paths\". A\npick path is a hierarchical, ordered list of props that form an\nassembly.  Most often, when a vtkProp is picked, its path\nconsists of a single node (i.e., the prop). However, classes like\nvtkAssembly and vtkPropAssembly can return more than one path,\neach path being several layers deep. (See vtkAssemblyPath for\nmore information.)  To use these methods - first invoke\nInitPathTraversal() followed by repeated calls to GetNextPath().\nGetNextPath() returns a NULL pointer when the list is exhausted.\n"},
  {"PokeMatrix", PyvtkProp_PokeMatrix, METH_VARARGS,
   "V.PokeMatrix(vtkMatrix4x4)\nC++: virtual void PokeMatrix(vtkMatrix4x4 *matrix)\n\nThese methods are used by subclasses to place a matrix (if any)\nin the prop prior to rendering. Generally used only for picking.\nSee vtkProp3D for more information.\n"},
  {"GetMatrix", PyvtkProp_GetMatrix, METH_VARARGS,
   "V.GetMatrix() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetMatrix()\n\n"},
  {"GetPropertyKeys", PyvtkProp_GetPropertyKeys, METH_VARARGS,
   "V.GetPropertyKeys() -> vtkInformation\nC++: virtual vtkInformation *GetPropertyKeys()\n\nSet/Get property keys. Property keys can be digest by some\nrendering passes. For instance, the user may mark a prop as a\nshadow caster for a shadow mapping render pass. Keys are\ndocumented in render pass classes. Initial value is NULL.\n"},
  {"SetPropertyKeys", PyvtkProp_SetPropertyKeys, METH_VARARGS,
   "V.SetPropertyKeys(vtkInformation)\nC++: virtual void SetPropertyKeys(vtkInformation *keys)\n\nSet/Get property keys. Property keys can be digest by some\nrendering passes. For instance, the user may mark a prop as a\nshadow caster for a shadow mapping render pass. Keys are\ndocumented in render pass classes. Initial value is NULL.\n"},
  {"HasKeys", PyvtkProp_HasKeys, METH_VARARGS,
   "V.HasKeys(vtkInformation) -> bool\nC++: virtual bool HasKeys(vtkInformation *requiredKeys)\n\nTells if the prop has all the required keys.\n\\pre keys_can_be_null: requiredKeys==0 || requiredKeys!=0\n"},
  {"GeneralTextureUnit", PyvtkProp_GeneralTextureUnit, METH_VARARGS,
   "V.GeneralTextureUnit() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *GeneralTextureUnit()\n\nOptional Key Indicating the texture unit for general texture\nmapping Old OpenGL was a state machine where you would push or\npop items. The new OpenGL design is more mapper centric. Some\nclasses push a texture and then assume a mapper will use it. The\nnew design wants explicit communication of when a texture is\nbeing used.  This key can be used to pass that information down\nto a mapper.\n"},
  {"GeneralTextureTransform", PyvtkProp_GeneralTextureTransform, METH_VARARGS,
   "V.GeneralTextureTransform() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *GeneralTextureTransform(\n    )\n\nOptional Key Indicating the texture transform for general texture\nmapping Old OpenGL was a state machine where you would push or\npop items. The new OpenGL design is more mapper centric. Some\nclasses push a texture and then assume a mapper will use it. The\nnew design wants explicit communication of when a texture is\nbeing used.  This key can be used to pass that information down\nto a mapper.\n"},
  {"RenderOpaqueGeometry", PyvtkProp_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkProp_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\n"},
  {"RenderVolumetricGeometry", PyvtkProp_RenderVolumetricGeometry, METH_VARARGS,
   "V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: virtual int RenderVolumetricGeometry(vtkViewport *)\n\n"},
  {"RenderOverlay", PyvtkProp_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\n"},
  {"RenderFilteredOpaqueGeometry", PyvtkProp_RenderFilteredOpaqueGeometry, METH_VARARGS,
   "V.RenderFilteredOpaqueGeometry(vtkViewport, vtkInformation)\n    -> bool\nC++: virtual bool RenderFilteredOpaqueGeometry(vtkViewport *v,\n    vtkInformation *requiredKeys)\n\nRender the opaque geometry only if the prop has all the\nrequiredKeys. This is recursive for composite props like\nvtkAssembly. An implementation is provided in vtkProp but each\ncomposite prop must override it. It returns if the rendering was\nperformed.\n\\pre v_exists: v!=0\n\\pre keys_can_be_null: requiredKeys==0 || requiredKeys!=0\n"},
  {"RenderFilteredTranslucentPolygonalGeometry", PyvtkProp_RenderFilteredTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderFilteredTranslucentPolygonalGeometry(vtkViewport,\n    vtkInformation) -> bool\nC++: virtual bool RenderFilteredTranslucentPolygonalGeometry(\n    vtkViewport *v, vtkInformation *requiredKeys)\n\nRender the translucent polygonal geometry only if the prop has\nall the requiredKeys. This is recursive for composite props like\nvtkAssembly. An implementation is provided in vtkProp but each\ncomposite prop must override it. It returns if the rendering was\nperformed.\n\\pre v_exists: v!=0\n\\pre keys_can_be_null: requiredKeys==0 || requiredKeys!=0\n"},
  {"RenderFilteredVolumetricGeometry", PyvtkProp_RenderFilteredVolumetricGeometry, METH_VARARGS,
   "V.RenderFilteredVolumetricGeometry(vtkViewport, vtkInformation)\n    -> bool\nC++: virtual bool RenderFilteredVolumetricGeometry(vtkViewport *v,\n     vtkInformation *requiredKeys)\n\nRender the volumetric geometry only if the prop has all the\nrequiredKeys. This is recursive for composite props like\nvtkAssembly. An implementation is provided in vtkProp but each\ncomposite prop must override it. It returns if the rendering was\nperformed.\n\\pre v_exists: v!=0\n\\pre keys_can_be_null: requiredKeys==0 || requiredKeys!=0\n"},
  {"RenderFilteredOverlay", PyvtkProp_RenderFilteredOverlay, METH_VARARGS,
   "V.RenderFilteredOverlay(vtkViewport, vtkInformation) -> bool\nC++: virtual bool RenderFilteredOverlay(vtkViewport *v,\n    vtkInformation *requiredKeys)\n\nRender in the overlay of the viewport only if the prop has all\nthe requiredKeys. This is recursive for composite props like\nvtkAssembly. An implementation is provided in vtkProp but each\ncomposite prop must override it. It returns if the rendering was\nperformed.\n\\pre v_exists: v!=0\n\\pre keys_can_be_null: requiredKeys==0 || requiredKeys!=0\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkProp_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"ReleaseGraphicsResources", PyvtkProp_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"GetEstimatedRenderTime", PyvtkProp_GetEstimatedRenderTime, METH_VARARGS,
   "V.GetEstimatedRenderTime(vtkViewport) -> float\nC++: virtual double GetEstimatedRenderTime(vtkViewport *)\nV.GetEstimatedRenderTime() -> float\nC++: virtual double GetEstimatedRenderTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS The\nEstimatedRenderTime may be used to select between different\nprops, for example in LODProp it is used to select the\nlevel-of-detail. The value is returned in seconds. For simple\ngeometry the accuracy may not be great due to buffering. For ray\ncasting, which is already multi-resolution, the current\nresolution of the image is factored into the time. We need the\nviewport for viewing parameters that affect timing. The\nno-arguments version simply returns the value of the variable\nwith no estimation.\n"},
  {"SetEstimatedRenderTime", PyvtkProp_SetEstimatedRenderTime, METH_VARARGS,
   "V.SetEstimatedRenderTime(float)\nC++: virtual void SetEstimatedRenderTime(double t)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS This method is\nused by, for example, the vtkLODProp3D in order to initialize the\nestimated render time at start-up to some user defined value.\n"},
  {"RestoreEstimatedRenderTime", PyvtkProp_RestoreEstimatedRenderTime, METH_VARARGS,
   "V.RestoreEstimatedRenderTime()\nC++: virtual void RestoreEstimatedRenderTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS When the\nEstimatedRenderTime is first set to 0.0 (in the\nSetAllocatedRenderTime method) the old value is saved. This\nmethod is used to restore that old value should the render be\naborted.\n"},
  {"AddEstimatedRenderTime", PyvtkProp_AddEstimatedRenderTime, METH_VARARGS,
   "V.AddEstimatedRenderTime(float, vtkViewport)\nC++: virtual void AddEstimatedRenderTime(double t,\n    vtkViewport *vp)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS This method is\nintended to allow the renderer to add to the EstimatedRenderTime\nin props that require information that the renderer has in order\nto do this. For example, props that are rendered with a ray\ncasting method do not know themselves how long it took for them\nto render. We don't want to cause a this->Modified() when we set\nthis value since it is not really a modification to the object.\n(For example, we don't want to rebuild matrices at every render\nbecause the estimated render time is changing)\n"},
  {"SetAllocatedRenderTime", PyvtkProp_SetAllocatedRenderTime, METH_VARARGS,
   "V.SetAllocatedRenderTime(float, vtkViewport)\nC++: virtual void SetAllocatedRenderTime(double t, vtkViewport *v)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS The renderer may\nuse the allocated rendering time to determine how to render this\nactor. Therefore it might need the information provided in the\nviewport. A side effect of this method is to reset the\nEstimatedRenderTime to 0.0. This way, each of the ways that this\nprop may be rendered can be timed and added together into this\nvalue.\n"},
  {"GetAllocatedRenderTime", PyvtkProp_GetAllocatedRenderTime, METH_VARARGS,
   "V.GetAllocatedRenderTime() -> float\nC++: virtual double GetAllocatedRenderTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"SetRenderTimeMultiplier", PyvtkProp_SetRenderTimeMultiplier, METH_VARARGS,
   "V.SetRenderTimeMultiplier(float)\nC++: void SetRenderTimeMultiplier(double t)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Get/Set the\nmultiplier for the render time. This is used for culling and is a\nnumber between 0 and 1. It is used to create the allocated render\ntime value.\n"},
  {"GetRenderTimeMultiplier", PyvtkProp_GetRenderTimeMultiplier, METH_VARARGS,
   "V.GetRenderTimeMultiplier() -> float\nC++: virtual double GetRenderTimeMultiplier()\n\n"},
  {"BuildPaths", PyvtkProp_BuildPaths, METH_VARARGS,
   "V.BuildPaths(vtkAssemblyPaths, vtkAssemblyPath)\nC++: virtual void BuildPaths(vtkAssemblyPaths *paths,\n    vtkAssemblyPath *path)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used to\nconstruct assembly paths and perform part traversal.\n"},
  {"GetSupportsSelection", PyvtkProp_GetSupportsSelection, METH_VARARGS,
   "V.GetSupportsSelection() -> bool\nC++: virtual bool GetSupportsSelection()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {"GetNumberOfConsumers", PyvtkProp_GetNumberOfConsumers, METH_VARARGS,
   "V.GetNumberOfConsumers() -> int\nC++: virtual int GetNumberOfConsumers()\n\nGet the number of consumers\n"},
  {"AddConsumer", PyvtkProp_AddConsumer, METH_VARARGS,
   "V.AddConsumer(vtkObject)\nC++: void AddConsumer(vtkObject *c)\n\nAdd or remove or get or check a consumer,\n"},
  {"RemoveConsumer", PyvtkProp_RemoveConsumer, METH_VARARGS,
   "V.RemoveConsumer(vtkObject)\nC++: void RemoveConsumer(vtkObject *c)\n\nAdd or remove or get or check a consumer,\n"},
  {"GetConsumer", PyvtkProp_GetConsumer, METH_VARARGS,
   "V.GetConsumer(int) -> vtkObject\nC++: vtkObject *GetConsumer(int i)\n\nAdd or remove or get or check a consumer,\n"},
  {"IsConsumer", PyvtkProp_IsConsumer, METH_VARARGS,
   "V.IsConsumer(vtkObject) -> int\nC++: int IsConsumer(vtkObject *c)\n\nAdd or remove or get or check a consumer,\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProp_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkProp", // tp_name
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
  PyvtkProp_Doc, // tp_doc
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

PyObject *PyvtkProp_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProp_Type, PyvtkProp_Methods,
    "vtkProp",
 nullptr);

  PyTypeObject *pytype = &PyvtkProp_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProp(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProp_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProp", o) != 0)
  {
    Py_DECREF(o);
  }

}

