// python wrapper for vtkConstrainedPointHandleRepresentation
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
#include "vtkConstrainedPointHandleRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConstrainedPointHandleRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkConstrainedPointHandleRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkHandleRepresentation_ClassNew
extern "C" { PyObject *PyvtkHandleRepresentation_ClassNew(); }
#define DECLARED_PyvtkHandleRepresentation_ClassNew
#endif

static const char *PyvtkConstrainedPointHandleRepresentation_Doc =
  "vtkConstrainedPointHandleRepresentation - point representation\nconstrained to a 2D plane\n\n"
  "Superclass: vtkHandleRepresentation\n\n"
  "This class is used to represent a vtkHandleWidget. It represents a\n"
  "position in 3D world coordinates that is constrained to a specified\n"
  "plane. The default look is to draw a white point when this widget is\n"
  "not selected or active, a thin green circle when it is highlighted,\n"
  "and a thicker cyan circle when it is active (being positioned).\n"
  "Defaults can be adjusted - but take care to define cursor geometry\n"
  "that makes sense for this widget. The geometry will be aligned on the\n"
  "constraining plane, with the plane normal aligned with the X axis of\n"
  "the geometry (similar behavior to vtkGlyph3D).\n\n"
  "TODO: still need to work on\n"
  "1) translation when mouse is outside bounding planes\n"
  "2) size of the widget\n\n"
  "@sa\n"
  "vtkHandleRepresentation vtkHandleWidget\n\n";


static PyObject *
PyvtkConstrainedPointHandleRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConstrainedPointHandleRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConstrainedPointHandleRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConstrainedPointHandleRepresentation *tempr = vtkConstrainedPointHandleRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConstrainedPointHandleRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConstrainedPointHandleRepresentation::NewInstance());

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
PyvtkConstrainedPointHandleRepresentation_SetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetCursorShape(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCursorShape() :
      op->vtkConstrainedPointHandleRepresentation::GetCursorShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetActiveCursorShape(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetActiveCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetActiveCursorShape() :
      op->vtkConstrainedPointHandleRepresentation::GetActiveCursorShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormal(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetProjectionNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetProjectionNormalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMinValue() :
      op->vtkConstrainedPointHandleRepresentation::GetProjectionNormalMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetProjectionNormalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMaxValue() :
      op->vtkConstrainedPointHandleRepresentation::GetProjectionNormalMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormal() :
      op->vtkConstrainedPointHandleRepresentation::GetProjectionNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToXAxis();
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetProjectionNormalToXAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToYAxis();
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetProjectionNormalToYAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToZAxis();
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetProjectionNormalToZAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToOblique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToOblique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToOblique();
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetProjectionNormalToOblique();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetObliquePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObliquePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetObliquePlane(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetObliquePlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetObliquePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObliquePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetObliquePlane() :
      op->vtkConstrainedPointHandleRepresentation::GetObliquePlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionPosition(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetProjectionPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProjectionPosition() :
      op->vtkConstrainedPointHandleRepresentation::GetProjectionPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_AddBoundingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBoundingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->AddBoundingPlane(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::AddBoundingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_RemoveBoundingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBoundingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->RemoveBoundingPlane(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::RemoveBoundingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_RemoveAllBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllBoundingPlanes();
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::RemoveAllBoundingPlanes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkPlaneCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
  {
    if (ap.IsBound())
    {
      op->SetBoundingPlanes(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetBoundingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->SetBoundingPlanes(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetBoundingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes_Methods[] = {
  {nullptr, PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes_s1, METH_VARARGS,
   "@V *vtkPlaneCollection"},
  {nullptr, PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes_s2, METH_VARARGS,
   "@V *vtkPlanes"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBoundingPlanes");
  return nullptr;
}



static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaneCollection *tempr = (ap.IsBound() ?
      op->GetBoundingPlanes() :
      op->vtkConstrainedPointHandleRepresentation::GetBoundingPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_CheckConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->CheckConstraint(temp0, temp1) :
      op->vtkConstrainedPointHandleRepresentation::CheckConstraint(temp0, temp1));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetPosition(temp0);
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
PyvtkConstrainedPointHandleRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkConstrainedPointHandleRepresentation_SetPosition_s1(self, args);
    case 1:
      return PyvtkConstrainedPointHandleRepresentation_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}



static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkConstrainedPointHandleRepresentation::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->GetPosition(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::GetPosition(temp0);
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
PyvtkConstrainedPointHandleRepresentation_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkConstrainedPointHandleRepresentation_GetPosition_s1(self, args);
    case 1:
      return PyvtkConstrainedPointHandleRepresentation_GetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return nullptr;
}



static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkConstrainedPointHandleRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkConstrainedPointHandleRepresentation::GetSelectedProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetActiveProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetActiveProperty() :
      op->vtkConstrainedPointHandleRepresentation::GetActiveProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::StartWidgetInteraction(temp0);
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
PyvtkConstrainedPointHandleRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::WidgetInteraction(temp0);
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
PyvtkConstrainedPointHandleRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkConstrainedPointHandleRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::SetDisplayPosition(temp0);
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
PyvtkConstrainedPointHandleRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkConstrainedPointHandleRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkConstrainedPointHandleRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkConstrainedPointHandleRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkConstrainedPointHandleRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkConstrainedPointHandleRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkConstrainedPointHandleRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkConstrainedPointHandleRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkConstrainedPointHandleRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkConstrainedPointHandleRepresentation\nC++: static vtkConstrainedPointHandleRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkConstrainedPointHandleRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkConstrainedPointHandleRepresentation\nC++: vtkConstrainedPointHandleRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"SetCursorShape", PyvtkConstrainedPointHandleRepresentation_SetCursorShape, METH_VARARGS,
   "V.SetCursorShape(vtkPolyData)\nC++: void SetCursorShape(vtkPolyData *cursorShape)\n\nSpecify the cursor shape. Keep in mind that the shape will be\naligned with the constraining plane by orienting it such that the\nx axis of the geometry lies along the normal of the plane.\n"},
  {"GetCursorShape", PyvtkConstrainedPointHandleRepresentation_GetCursorShape, METH_VARARGS,
   "V.GetCursorShape() -> vtkPolyData\nC++: vtkPolyData *GetCursorShape()\n\nSpecify the cursor shape. Keep in mind that the shape will be\naligned with the constraining plane by orienting it such that the\nx axis of the geometry lies along the normal of the plane.\n"},
  {"SetActiveCursorShape", PyvtkConstrainedPointHandleRepresentation_SetActiveCursorShape, METH_VARARGS,
   "V.SetActiveCursorShape(vtkPolyData)\nC++: void SetActiveCursorShape(vtkPolyData *activeShape)\n\nSpecify the shape of the cursor (handle) when it is active. This\nis the geometry that will be used when the mouse is close to the\nhandle or if the user is manipulating the handle.\n"},
  {"GetActiveCursorShape", PyvtkConstrainedPointHandleRepresentation_GetActiveCursorShape, METH_VARARGS,
   "V.GetActiveCursorShape() -> vtkPolyData\nC++: vtkPolyData *GetActiveCursorShape()\n\nSpecify the shape of the cursor (handle) when it is active. This\nis the geometry that will be used when the mouse is close to the\nhandle or if the user is manipulating the handle.\n"},
  {"SetProjectionNormal", PyvtkConstrainedPointHandleRepresentation_SetProjectionNormal, METH_VARARGS,
   "V.SetProjectionNormal(int)\nC++: virtual void SetProjectionNormal(int _arg)\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {"GetProjectionNormalMinValue", PyvtkConstrainedPointHandleRepresentation_GetProjectionNormalMinValue, METH_VARARGS,
   "V.GetProjectionNormalMinValue() -> int\nC++: virtual int GetProjectionNormalMinValue()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {"GetProjectionNormalMaxValue", PyvtkConstrainedPointHandleRepresentation_GetProjectionNormalMaxValue, METH_VARARGS,
   "V.GetProjectionNormalMaxValue() -> int\nC++: virtual int GetProjectionNormalMaxValue()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {"GetProjectionNormal", PyvtkConstrainedPointHandleRepresentation_GetProjectionNormal, METH_VARARGS,
   "V.GetProjectionNormal() -> int\nC++: virtual int GetProjectionNormal()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {"SetProjectionNormalToXAxis", PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToXAxis, METH_VARARGS,
   "V.SetProjectionNormalToXAxis()\nC++: void SetProjectionNormalToXAxis()\n\n"},
  {"SetProjectionNormalToYAxis", PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToYAxis, METH_VARARGS,
   "V.SetProjectionNormalToYAxis()\nC++: void SetProjectionNormalToYAxis()\n\n"},
  {"SetProjectionNormalToZAxis", PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToZAxis, METH_VARARGS,
   "V.SetProjectionNormalToZAxis()\nC++: void SetProjectionNormalToZAxis()\n\n"},
  {"SetProjectionNormalToOblique", PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToOblique, METH_VARARGS,
   "V.SetProjectionNormalToOblique()\nC++: void SetProjectionNormalToOblique()\n\n"},
  {"SetObliquePlane", PyvtkConstrainedPointHandleRepresentation_SetObliquePlane, METH_VARARGS,
   "V.SetObliquePlane(vtkPlane)\nC++: void SetObliquePlane(vtkPlane *)\n\nIf the ProjectionNormal is set to Oblique, then this is the\noblique plane used to constrain the handle position\n"},
  {"GetObliquePlane", PyvtkConstrainedPointHandleRepresentation_GetObliquePlane, METH_VARARGS,
   "V.GetObliquePlane() -> vtkPlane\nC++: virtual vtkPlane *GetObliquePlane()\n\nIf the ProjectionNormal is set to Oblique, then this is the\noblique plane used to constrain the handle position\n"},
  {"SetProjectionPosition", PyvtkConstrainedPointHandleRepresentation_SetProjectionPosition, METH_VARARGS,
   "V.SetProjectionPosition(float)\nC++: void SetProjectionPosition(double position)\n\nThe position of the bounding plane from the origin along the\nnormal. The origin and normal are defined in the oblique plane\nwhen the ProjectionNormal is Oblique. For the X, Y, and Z axes\nprojection normals, the normal is the axis direction, and the\norigin is (0,0,0).\n"},
  {"GetProjectionPosition", PyvtkConstrainedPointHandleRepresentation_GetProjectionPosition, METH_VARARGS,
   "V.GetProjectionPosition() -> float\nC++: virtual double GetProjectionPosition()\n\nThe position of the bounding plane from the origin along the\nnormal. The origin and normal are defined in the oblique plane\nwhen the ProjectionNormal is Oblique. For the X, Y, and Z axes\nprojection normals, the normal is the axis direction, and the\norigin is (0,0,0).\n"},
  {"AddBoundingPlane", PyvtkConstrainedPointHandleRepresentation_AddBoundingPlane, METH_VARARGS,
   "V.AddBoundingPlane(vtkPlane)\nC++: void AddBoundingPlane(vtkPlane *plane)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {"RemoveBoundingPlane", PyvtkConstrainedPointHandleRepresentation_RemoveBoundingPlane, METH_VARARGS,
   "V.RemoveBoundingPlane(vtkPlane)\nC++: void RemoveBoundingPlane(vtkPlane *plane)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {"RemoveAllBoundingPlanes", PyvtkConstrainedPointHandleRepresentation_RemoveAllBoundingPlanes, METH_VARARGS,
   "V.RemoveAllBoundingPlanes()\nC++: void RemoveAllBoundingPlanes()\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {"SetBoundingPlanes", PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes, METH_VARARGS,
   "V.SetBoundingPlanes(vtkPlaneCollection)\nC++: virtual void SetBoundingPlanes(vtkPlaneCollection *)\nV.SetBoundingPlanes(vtkPlanes)\nC++: void SetBoundingPlanes(vtkPlanes *planes)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {"GetBoundingPlanes", PyvtkConstrainedPointHandleRepresentation_GetBoundingPlanes, METH_VARARGS,
   "V.GetBoundingPlanes() -> vtkPlaneCollection\nC++: virtual vtkPlaneCollection *GetBoundingPlanes()\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {"CheckConstraint", PyvtkConstrainedPointHandleRepresentation_CheckConstraint, METH_VARARGS,
   "V.CheckConstraint(vtkRenderer, [float, float]) -> int\nC++: int CheckConstraint(vtkRenderer *renderer, double pos[2])\n    override;\n\nOverridden from the base class. It converts the display\nco-ordinates to world co-ordinates. It returns 1 if the point\nlies within the constrained region, otherwise return 0\n"},
  {"SetPosition", PyvtkConstrainedPointHandleRepresentation_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double x, double y, double z)\nV.SetPosition([float, float, float])\nC++: void SetPosition(double xyz[3])\n\nSet/Get the position of the point in display coordinates.  These\nare convenience methods that extend the superclasses'\nGetHandlePosition() method. Note that only the x-y coordinate\nvalues are used\n"},
  {"GetPosition", PyvtkConstrainedPointHandleRepresentation_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (float, ...)\nC++: double *GetPosition()\nV.GetPosition([float, float, float])\nC++: void GetPosition(double xyz[3])\n\nSet/Get the position of the point in display coordinates.  These\nare convenience methods that extend the superclasses'\nGetHandlePosition() method. Note that only the x-y coordinate\nvalues are used\n"},
  {"GetProperty", PyvtkConstrainedPointHandleRepresentation_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\nThis is the property used when the handle is not active (the\nmouse is not near the handle)\n"},
  {"GetSelectedProperty", PyvtkConstrainedPointHandleRepresentation_GetSelectedProperty, METH_VARARGS,
   "V.GetSelectedProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedProperty()\n\nThis is the property used when the mouse is near the handle (but\nthe user is not yet interacting with it)\n"},
  {"GetActiveProperty", PyvtkConstrainedPointHandleRepresentation_GetActiveProperty, METH_VARARGS,
   "V.GetActiveProperty() -> vtkProperty\nC++: virtual vtkProperty *GetActiveProperty()\n\nThis is the property used when the user is interacting with the\nhandle.\n"},
  {"SetRenderer", PyvtkConstrainedPointHandleRepresentation_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *ren) override;\n\nSubclasses of vtkConstrainedPointHandleRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"BuildRepresentation", PyvtkConstrainedPointHandleRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nSubclasses of vtkConstrainedPointHandleRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"StartWidgetInteraction", PyvtkConstrainedPointHandleRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\nSubclasses of vtkConstrainedPointHandleRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"WidgetInteraction", PyvtkConstrainedPointHandleRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double eventPos[2]) override;\n\nSubclasses of vtkConstrainedPointHandleRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"ComputeInteractionState", PyvtkConstrainedPointHandleRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify)\n    override;\n\nSubclasses of vtkConstrainedPointHandleRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"SetDisplayPosition", PyvtkConstrainedPointHandleRepresentation_SetDisplayPosition, METH_VARARGS,
   "V.SetDisplayPosition([float, float, float])\nC++: void SetDisplayPosition(double pos[3]) override;\n\nMethod overridden from Superclass. computes the world\nco-ordinates using GetIntersectionPosition()\n"},
  {"GetActors", PyvtkConstrainedPointHandleRepresentation_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkConstrainedPointHandleRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOverlay", PyvtkConstrainedPointHandleRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOpaqueGeometry", PyvtkConstrainedPointHandleRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkConstrainedPointHandleRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkConstrainedPointHandleRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ShallowCopy", PyvtkConstrainedPointHandleRepresentation_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"Highlight", PyvtkConstrainedPointHandleRepresentation_Highlight, METH_VARARGS,
   "V.Highlight(int)\nC++: void Highlight(int highlight) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkConstrainedPointHandleRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkConstrainedPointHandleRepresentation", // tp_name
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
  PyvtkConstrainedPointHandleRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConstrainedPointHandleRepresentation_StaticNew()
{
  return vtkConstrainedPointHandleRepresentation::New();
}

PyObject *PyvtkConstrainedPointHandleRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkConstrainedPointHandleRepresentation_Type, PyvtkConstrainedPointHandleRepresentation_Methods,
    "vtkConstrainedPointHandleRepresentation",
 &PyvtkConstrainedPointHandleRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkConstrainedPointHandleRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHandleRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "XAxis", vtkConstrainedPointHandleRepresentation::XAxis },
        { "YAxis", vtkConstrainedPointHandleRepresentation::YAxis },
        { "ZAxis", vtkConstrainedPointHandleRepresentation::ZAxis },
        { "Oblique", vtkConstrainedPointHandleRepresentation::Oblique },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkConstrainedPointHandleRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConstrainedPointHandleRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConstrainedPointHandleRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

