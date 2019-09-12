// python wrapper for vtkFinitePlaneRepresentation
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
#include "vtkFinitePlaneRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFinitePlaneRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFinitePlaneRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static const char *PyvtkFinitePlaneRepresentation_Doc =
  "vtkFinitePlaneRepresentation - represent the vtkFinitePlaneWidget.\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is a concrete representation for the vtkFinitePlaneWidget.\n"
  "It represents a plane with three handles: one on two faces, plus a\n"
  "center handle. Through interaction with the widget, the plane\n"
  "representation can be arbitrarily positioned and modified in the 3D\n"
  "space.\n\n"
  "To use this representation, you normally use the PlaceWidget() method\n"
  "to position the widget at a specified region in space.\n\n"
  "@sa\n"
  "vtkFinitePlaneWidget vtkImplicitPlaneWidget2\n\n";

static PyTypeObject PyvtkFinitePlaneRepresentation__InteractionState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkFinitePlaneRepresentation._InteractionState", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkFinitePlaneRepresentation__InteractionState_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkFinitePlaneRepresentation__InteractionState_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkFinitePlaneRepresentation__InteractionState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkFinitePlaneRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFinitePlaneRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFinitePlaneRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFinitePlaneRepresentation *tempr = vtkFinitePlaneRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFinitePlaneRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFinitePlaneRepresentation::NewInstance());

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
PyvtkFinitePlaneRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetPolyData(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetV1HandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetV1HandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetV1HandleProperty() :
      op->vtkFinitePlaneRepresentation::GetV1HandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetV2HandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetV2HandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetV2HandleProperty() :
      op->vtkFinitePlaneRepresentation::GetV2HandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkFinitePlaneRepresentation::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPlaneProperty() :
      op->vtkFinitePlaneRepresentation::GetPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedPlaneProperty() :
      op->vtkFinitePlaneRepresentation::GetSelectedPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTubing(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetTubing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTubing() :
      op->vtkFinitePlaneRepresentation::GetTubing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_TubingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOn();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::TubingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_TubingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOff();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::TubingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawPlane(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetDrawPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawPlane() :
      op->vtkFinitePlaneRepresentation::GetDrawPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_DrawPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPlaneOn();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::DrawPlaneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_DrawPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPlaneOff();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::DrawPlaneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandles(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_HandlesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOn();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::HandlesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_HandlesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOff();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::HandlesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::PlaceWidget(temp0);
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
PyvtkFinitePlaneRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->vtkFinitePlaneRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->vtkFinitePlaneRepresentation::StartWidgetInteraction(temp0);
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
PyvtkFinitePlaneRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->vtkFinitePlaneRepresentation::WidgetInteraction(temp0);
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
PyvtkFinitePlaneRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkFinitePlaneRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->vtkFinitePlaneRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkFinitePlaneRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkFinitePlaneRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkFinitePlaneRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionState(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkFinitePlaneRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkFinitePlaneRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFinitePlaneRepresentation_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetOrigin(temp0);
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
PyvtkFinitePlaneRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkFinitePlaneRepresentation_SetOrigin_s1(self, args);
    case 1:
      return PyvtkFinitePlaneRepresentation_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}



static PyObject *
PyvtkFinitePlaneRepresentation_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkFinitePlaneRepresentation::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFinitePlaneRepresentation_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetNormal(temp0);
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
PyvtkFinitePlaneRepresentation_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkFinitePlaneRepresentation_SetNormal_s1(self, args);
    case 1:
      return PyvtkFinitePlaneRepresentation_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}



static PyObject *
PyvtkFinitePlaneRepresentation_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkFinitePlaneRepresentation::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetV1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetV1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetV1(temp0, temp1);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetV1(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFinitePlaneRepresentation_SetV1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetV1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->SetV1(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetV1(temp0);
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
PyvtkFinitePlaneRepresentation_SetV1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFinitePlaneRepresentation_SetV1_s1(self, args);
    case 1:
      return PyvtkFinitePlaneRepresentation_SetV1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetV1");
  return nullptr;
}



static PyObject *
PyvtkFinitePlaneRepresentation_GetV1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetV1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetV1() :
      op->vtkFinitePlaneRepresentation::GetV1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetV2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetV2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetV2(temp0, temp1);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetV2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFinitePlaneRepresentation_SetV2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetV2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->SetV2(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetV2(temp0);
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
PyvtkFinitePlaneRepresentation_SetV2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFinitePlaneRepresentation_SetV2_s1(self, args);
    case 1:
      return PyvtkFinitePlaneRepresentation_SetV2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetV2");
  return nullptr;
}



static PyObject *
PyvtkFinitePlaneRepresentation_GetV2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetV2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetV2() :
      op->vtkFinitePlaneRepresentation::GetV2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationState(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetRepresentationState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationState() :
      op->vtkFinitePlaneRepresentation::GetRepresentationState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetNormalProperty() :
      op->vtkFinitePlaneRepresentation::GetNormalProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetSelectedNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedNormalProperty() :
      op->vtkFinitePlaneRepresentation::GetSelectedNormalProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_TranslateOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslateOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TranslateOrigin(temp0, temp1);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::TranslateOrigin(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_MovePoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovePoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MovePoint1(temp0, temp1);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::MovePoint1(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_MovePoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovePoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MovePoint2(temp0, temp1);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::MovePoint2(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Push(temp0, temp1);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::Push(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->Rotate(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::Rotate(temp0, temp1, temp2, temp3, temp4);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFinitePlaneRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkFinitePlaneRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard vtkObject methods\n"},
  {"IsA", PyvtkFinitePlaneRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard vtkObject methods\n"},
  {"SafeDownCast", PyvtkFinitePlaneRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFinitePlaneRepresentation\nC++: static vtkFinitePlaneRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard vtkObject methods\n"},
  {"NewInstance", PyvtkFinitePlaneRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFinitePlaneRepresentation\nC++: vtkFinitePlaneRepresentation *NewInstance()\n\nStandard vtkObject methods\n"},
  {"GetPolyData", PyvtkFinitePlaneRepresentation_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata that defines the plane. The polydata contains a\nsingle polygon.\n"},
  {"GetV1HandleProperty", PyvtkFinitePlaneRepresentation_GetV1HandleProperty, METH_VARARGS,
   "V.GetV1HandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetV1HandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles, when selected or normal, can be\nspecified.\n"},
  {"GetV2HandleProperty", PyvtkFinitePlaneRepresentation_GetV2HandleProperty, METH_VARARGS,
   "V.GetV2HandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetV2HandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles, when selected or normal, can be\nspecified.\n"},
  {"GetSelectedHandleProperty", PyvtkFinitePlaneRepresentation_GetSelectedHandleProperty, METH_VARARGS,
   "V.GetSelectedHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles, when selected or normal, can be\nspecified.\n"},
  {"GetPlaneProperty", PyvtkFinitePlaneRepresentation_GetPlaneProperty, METH_VARARGS,
   "V.GetPlaneProperty() -> vtkProperty\nC++: virtual vtkProperty *GetPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and normal can be set.\n"},
  {"GetSelectedPlaneProperty", PyvtkFinitePlaneRepresentation_GetSelectedPlaneProperty, METH_VARARGS,
   "V.GetSelectedPlaneProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and normal can be set.\n"},
  {"SetTubing", PyvtkFinitePlaneRepresentation_SetTubing, METH_VARARGS,
   "V.SetTubing(bool)\nC++: virtual void SetTubing(bool _arg)\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {"GetTubing", PyvtkFinitePlaneRepresentation_GetTubing, METH_VARARGS,
   "V.GetTubing() -> bool\nC++: virtual bool GetTubing()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {"TubingOn", PyvtkFinitePlaneRepresentation_TubingOn, METH_VARARGS,
   "V.TubingOn()\nC++: virtual void TubingOn()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {"TubingOff", PyvtkFinitePlaneRepresentation_TubingOff, METH_VARARGS,
   "V.TubingOff()\nC++: virtual void TubingOff()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {"SetDrawPlane", PyvtkFinitePlaneRepresentation_SetDrawPlane, METH_VARARGS,
   "V.SetDrawPlane(bool)\nC++: void SetDrawPlane(bool plane)\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"GetDrawPlane", PyvtkFinitePlaneRepresentation_GetDrawPlane, METH_VARARGS,
   "V.GetDrawPlane() -> bool\nC++: virtual bool GetDrawPlane()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"DrawPlaneOn", PyvtkFinitePlaneRepresentation_DrawPlaneOn, METH_VARARGS,
   "V.DrawPlaneOn()\nC++: virtual void DrawPlaneOn()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"DrawPlaneOff", PyvtkFinitePlaneRepresentation_DrawPlaneOff, METH_VARARGS,
   "V.DrawPlaneOff()\nC++: virtual void DrawPlaneOff()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"SetHandles", PyvtkFinitePlaneRepresentation_SetHandles, METH_VARARGS,
   "V.SetHandles(bool)\nC++: void SetHandles(bool handles)\n\nSwitches handles (the spheres) on or off by manipulating the\nunderlying actor visibility.\n"},
  {"HandlesOn", PyvtkFinitePlaneRepresentation_HandlesOn, METH_VARARGS,
   "V.HandlesOn()\nC++: virtual void HandlesOn()\n\nSwitches handles (the spheres) on or off by manipulating the\nunderlying actor visibility.\n"},
  {"HandlesOff", PyvtkFinitePlaneRepresentation_HandlesOff, METH_VARARGS,
   "V.HandlesOff()\nC++: virtual void HandlesOff()\n\nSwitches handles (the spheres) on or off by manipulating the\nunderlying actor visibility.\n"},
  {"PlaceWidget", PyvtkFinitePlaneRepresentation_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"BuildRepresentation", PyvtkFinitePlaneRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeInteractionState", PyvtkFinitePlaneRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"StartWidgetInteraction", PyvtkFinitePlaneRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: void StartWidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"WidgetInteraction", PyvtkFinitePlaneRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: void WidgetInteraction(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"GetBounds", PyvtkFinitePlaneRepresentation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ReleaseGraphicsResources", PyvtkFinitePlaneRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RenderOpaqueGeometry", PyvtkFinitePlaneRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkFinitePlaneRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkFinitePlaneRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"SetInteractionState", PyvtkFinitePlaneRepresentation_SetInteractionState, METH_VARARGS,
   "V.SetInteractionState(int)\nC++: virtual void SetInteractionState(int _arg)\n\n"},
  {"GetInteractionStateMinValue", PyvtkFinitePlaneRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "V.GetInteractionStateMinValue() -> int\nC++: virtual int GetInteractionStateMinValue()\n\n"},
  {"GetInteractionStateMaxValue", PyvtkFinitePlaneRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "V.GetInteractionStateMaxValue() -> int\nC++: virtual int GetInteractionStateMaxValue()\n\n"},
  {"SetOrigin", PyvtkFinitePlaneRepresentation_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double x, double y, double z)\nV.SetOrigin([float, float, float])\nC++: void SetOrigin(double x[3])\n\nSet/Get the origin of the plane.\n"},
  {"GetOrigin", PyvtkFinitePlaneRepresentation_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {"SetNormal", PyvtkFinitePlaneRepresentation_SetNormal, METH_VARARGS,
   "V.SetNormal(float, float, float)\nC++: void SetNormal(double x, double y, double z)\nV.SetNormal([float, float, float])\nC++: void SetNormal(double x[3])\n\nSet/Get the normal to the plane.\n"},
  {"GetNormal", PyvtkFinitePlaneRepresentation_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\n"},
  {"SetV1", PyvtkFinitePlaneRepresentation_SetV1, METH_VARARGS,
   "V.SetV1(float, float)\nC++: void SetV1(double x, double y)\nV.SetV1([float, float])\nC++: void SetV1(double x[2])\n\nSet/Get the v1 vector of the plane.\n"},
  {"GetV1", PyvtkFinitePlaneRepresentation_GetV1, METH_VARARGS,
   "V.GetV1() -> (float, float)\nC++: double *GetV1()\n\n"},
  {"SetV2", PyvtkFinitePlaneRepresentation_SetV2, METH_VARARGS,
   "V.SetV2(float, float)\nC++: void SetV2(double x, double y)\nV.SetV2([float, float])\nC++: void SetV2(double x[2])\n\nSet/Get the v2 vector of the plane.\n"},
  {"GetV2", PyvtkFinitePlaneRepresentation_GetV2, METH_VARARGS,
   "V.GetV2() -> (float, float)\nC++: double *GetV2()\n\n"},
  {"SetRepresentationState", PyvtkFinitePlaneRepresentation_SetRepresentationState, METH_VARARGS,
   "V.SetRepresentationState(int)\nC++: virtual void SetRepresentationState(int)\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {"GetRepresentationState", PyvtkFinitePlaneRepresentation_GetRepresentationState, METH_VARARGS,
   "V.GetRepresentationState() -> int\nC++: virtual int GetRepresentationState()\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {"GetNormalProperty", PyvtkFinitePlaneRepresentation_GetNormalProperty, METH_VARARGS,
   "V.GetNormalProperty() -> vtkProperty\nC++: virtual vtkProperty *GetNormalProperty()\n\nGet the properties on the normal (line and cone).\n"},
  {"GetSelectedNormalProperty", PyvtkFinitePlaneRepresentation_GetSelectedNormalProperty, METH_VARARGS,
   "V.GetSelectedNormalProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedNormalProperty()\n\nGet the properties on the normal (line and cone).\n"},
  {"TranslateOrigin", PyvtkFinitePlaneRepresentation_TranslateOrigin, METH_VARARGS,
   "V.TranslateOrigin([float, ...], [float, ...])\nC++: void TranslateOrigin(double *p1, double *p2)\n\n"},
  {"MovePoint1", PyvtkFinitePlaneRepresentation_MovePoint1, METH_VARARGS,
   "V.MovePoint1([float, ...], [float, ...])\nC++: void MovePoint1(double *p1, double *p2)\n\n"},
  {"MovePoint2", PyvtkFinitePlaneRepresentation_MovePoint2, METH_VARARGS,
   "V.MovePoint2([float, ...], [float, ...])\nC++: void MovePoint2(double *p1, double *p2)\n\n"},
  {"Push", PyvtkFinitePlaneRepresentation_Push, METH_VARARGS,
   "V.Push([float, ...], [float, ...])\nC++: void Push(double *p1, double *p2)\n\n"},
  {"Rotate", PyvtkFinitePlaneRepresentation_Rotate, METH_VARARGS,
   "V.Rotate(int, int, [float, ...], [float, ...], [float, ...])\nC++: void Rotate(int X, int Y, double *p1, double *p2,\n    double *vpn)\n\n"},
  {"RegisterPickers", PyvtkFinitePlaneRepresentation_RegisterPickers, METH_VARARGS,
   "V.RegisterPickers()\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFinitePlaneRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkFinitePlaneRepresentation", // tp_name
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
  PyvtkFinitePlaneRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFinitePlaneRepresentation_StaticNew()
{
  return vtkFinitePlaneRepresentation::New();
}

PyObject *PyvtkFinitePlaneRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFinitePlaneRepresentation_Type, PyvtkFinitePlaneRepresentation_Methods,
    "vtkFinitePlaneRepresentation",
 &PyvtkFinitePlaneRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkFinitePlaneRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkFinitePlaneRepresentation__InteractionState_Type);
  PyvtkFinitePlaneRepresentation__InteractionState_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkFinitePlaneRepresentation__InteractionState_Type);

  o = (PyObject *)&PyvtkFinitePlaneRepresentation__InteractionState_Type;
  if (PyDict_SetItemString(d, "_InteractionState", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkFinitePlaneRepresentation::_InteractionState cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "Outside", vtkFinitePlaneRepresentation::Outside },
        { "MoveOrigin", vtkFinitePlaneRepresentation::MoveOrigin },
        { "ModifyV1", vtkFinitePlaneRepresentation::ModifyV1 },
        { "ModifyV2", vtkFinitePlaneRepresentation::ModifyV2 },
        { "Moving", vtkFinitePlaneRepresentation::Moving },
        { "Rotating", vtkFinitePlaneRepresentation::Rotating },
        { "Pushing", vtkFinitePlaneRepresentation::Pushing },
      };

    o = PyvtkFinitePlaneRepresentation__InteractionState_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFinitePlaneRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFinitePlaneRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFinitePlaneRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

