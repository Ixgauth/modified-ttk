// python wrapper for vtkReflectionFilter
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
#include "vtkReflectionFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkReflectionFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkReflectionFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkReflectionFilter_Doc =
  "vtkReflectionFilter - reflects a data set across a plane\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "The vtkReflectionFilter reflects a data set across one of the planes\n"
  "formed by the data set's bounding box. Since it converts data sets\n"
  "into unstructured grids, it is not efficient for structured data\n"
  "sets.\n\n";

static PyTypeObject PyvtkReflectionFilter_ReflectionPlane_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkReflectionFilter.ReflectionPlane", // tp_name
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

PyObject *PyvtkReflectionFilter_ReflectionPlane_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkReflectionFilter_ReflectionPlane_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkReflectionFilter_ReflectionPlane_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkReflectionFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkReflectionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReflectionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkReflectionFilter *tempr = vtkReflectionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkReflectionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReflectionFilter::NewInstance());

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
PyvtkReflectionFilter_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkReflectionFilter::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetPlaneMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneMinValue() :
      op->vtkReflectionFilter::GetPlaneMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetPlaneMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneMaxValue() :
      op->vtkReflectionFilter::GetPlaneMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkReflectionFilter::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToX();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToY();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToZ();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToXMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToXMin();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToXMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToYMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToYMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToYMin();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToYMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToZMin();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToZMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToXMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToXMax();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToXMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToYMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToYMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToYMax();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToYMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToZMax();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToZMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkReflectionFilter::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkReflectionFilter::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyInput(temp0);
    }
    else
    {
      op->vtkReflectionFilter::SetCopyInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyInput() :
      op->vtkReflectionFilter::GetCopyInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_CopyInputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyInputOn();
    }
    else
    {
      op->vtkReflectionFilter::CopyInputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_CopyInputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyInputOff();
    }
    else
    {
      op->vtkReflectionFilter::CopyInputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetFlipAllInputArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipAllInputArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipAllInputArrays(temp0);
    }
    else
    {
      op->vtkReflectionFilter::SetFlipAllInputArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetFlipAllInputArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipAllInputArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFlipAllInputArrays() :
      op->vtkReflectionFilter::GetFlipAllInputArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_FlipAllInputArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipAllInputArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipAllInputArraysOn();
    }
    else
    {
      op->vtkReflectionFilter::FlipAllInputArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_FlipAllInputArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipAllInputArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipAllInputArraysOff();
    }
    else
    {
      op->vtkReflectionFilter::FlipAllInputArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkReflectionFilter_Methods[] = {
  {"IsTypeOf", PyvtkReflectionFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkReflectionFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkReflectionFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkReflectionFilter\nC++: static vtkReflectionFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkReflectionFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkReflectionFilter\nC++: vtkReflectionFilter *NewInstance()\n\n"},
  {"SetPlane", PyvtkReflectionFilter_SetPlane, METH_VARARGS,
   "V.SetPlane(int)\nC++: virtual void SetPlane(int _arg)\n\nSet the normal of the plane to use as mirror.\n"},
  {"GetPlaneMinValue", PyvtkReflectionFilter_GetPlaneMinValue, METH_VARARGS,
   "V.GetPlaneMinValue() -> int\nC++: virtual int GetPlaneMinValue()\n\nSet the normal of the plane to use as mirror.\n"},
  {"GetPlaneMaxValue", PyvtkReflectionFilter_GetPlaneMaxValue, METH_VARARGS,
   "V.GetPlaneMaxValue() -> int\nC++: virtual int GetPlaneMaxValue()\n\nSet the normal of the plane to use as mirror.\n"},
  {"GetPlane", PyvtkReflectionFilter_GetPlane, METH_VARARGS,
   "V.GetPlane() -> int\nC++: virtual int GetPlane()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToX", PyvtkReflectionFilter_SetPlaneToX, METH_VARARGS,
   "V.SetPlaneToX()\nC++: void SetPlaneToX()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToY", PyvtkReflectionFilter_SetPlaneToY, METH_VARARGS,
   "V.SetPlaneToY()\nC++: void SetPlaneToY()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToZ", PyvtkReflectionFilter_SetPlaneToZ, METH_VARARGS,
   "V.SetPlaneToZ()\nC++: void SetPlaneToZ()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToXMin", PyvtkReflectionFilter_SetPlaneToXMin, METH_VARARGS,
   "V.SetPlaneToXMin()\nC++: void SetPlaneToXMin()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToYMin", PyvtkReflectionFilter_SetPlaneToYMin, METH_VARARGS,
   "V.SetPlaneToYMin()\nC++: void SetPlaneToYMin()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToZMin", PyvtkReflectionFilter_SetPlaneToZMin, METH_VARARGS,
   "V.SetPlaneToZMin()\nC++: void SetPlaneToZMin()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToXMax", PyvtkReflectionFilter_SetPlaneToXMax, METH_VARARGS,
   "V.SetPlaneToXMax()\nC++: void SetPlaneToXMax()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToYMax", PyvtkReflectionFilter_SetPlaneToYMax, METH_VARARGS,
   "V.SetPlaneToYMax()\nC++: void SetPlaneToYMax()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetPlaneToZMax", PyvtkReflectionFilter_SetPlaneToZMax, METH_VARARGS,
   "V.SetPlaneToZMax()\nC++: void SetPlaneToZMax()\n\nSet the normal of the plane to use as mirror.\n"},
  {"SetCenter", PyvtkReflectionFilter_SetCenter, METH_VARARGS,
   "V.SetCenter(float)\nC++: virtual void SetCenter(double _arg)\n\nIf the reflection plane is set to X, Y or Z, this variable is use\nto set the position of the plane.\n"},
  {"GetCenter", PyvtkReflectionFilter_GetCenter, METH_VARARGS,
   "V.GetCenter() -> float\nC++: virtual double GetCenter()\n\nIf the reflection plane is set to X, Y or Z, this variable is use\nto set the position of the plane.\n"},
  {"SetCopyInput", PyvtkReflectionFilter_SetCopyInput, METH_VARARGS,
   "V.SetCopyInput(int)\nC++: virtual void SetCopyInput(vtkTypeBool _arg)\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the reflection.\n"},
  {"GetCopyInput", PyvtkReflectionFilter_GetCopyInput, METH_VARARGS,
   "V.GetCopyInput() -> int\nC++: virtual vtkTypeBool GetCopyInput()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the reflection.\n"},
  {"CopyInputOn", PyvtkReflectionFilter_CopyInputOn, METH_VARARGS,
   "V.CopyInputOn()\nC++: virtual void CopyInputOn()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the reflection.\n"},
  {"CopyInputOff", PyvtkReflectionFilter_CopyInputOff, METH_VARARGS,
   "V.CopyInputOff()\nC++: virtual void CopyInputOff()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the reflection.\n"},
  {"SetFlipAllInputArrays", PyvtkReflectionFilter_SetFlipAllInputArrays, METH_VARARGS,
   "V.SetFlipAllInputArrays(bool)\nC++: virtual void SetFlipAllInputArrays(bool _arg)\n\nIf off (the default), only Vectors, Normals and Tensors will be\nflipped. If on, all 3-component data arrays ( considered as 3D\nvectors), 6-component data arrays (considered as symmetric\ntensors), 9-component data arrays (considered as tensors ) of\nsigned type will be flipped. All other won't be flipped and will\nonly be copied.\n"},
  {"GetFlipAllInputArrays", PyvtkReflectionFilter_GetFlipAllInputArrays, METH_VARARGS,
   "V.GetFlipAllInputArrays() -> bool\nC++: virtual bool GetFlipAllInputArrays()\n\nIf off (the default), only Vectors, Normals and Tensors will be\nflipped. If on, all 3-component data arrays ( considered as 3D\nvectors), 6-component data arrays (considered as symmetric\ntensors), 9-component data arrays (considered as tensors ) of\nsigned type will be flipped. All other won't be flipped and will\nonly be copied.\n"},
  {"FlipAllInputArraysOn", PyvtkReflectionFilter_FlipAllInputArraysOn, METH_VARARGS,
   "V.FlipAllInputArraysOn()\nC++: virtual void FlipAllInputArraysOn()\n\nIf off (the default), only Vectors, Normals and Tensors will be\nflipped. If on, all 3-component data arrays ( considered as 3D\nvectors), 6-component data arrays (considered as symmetric\ntensors), 9-component data arrays (considered as tensors ) of\nsigned type will be flipped. All other won't be flipped and will\nonly be copied.\n"},
  {"FlipAllInputArraysOff", PyvtkReflectionFilter_FlipAllInputArraysOff, METH_VARARGS,
   "V.FlipAllInputArraysOff()\nC++: virtual void FlipAllInputArraysOff()\n\nIf off (the default), only Vectors, Normals and Tensors will be\nflipped. If on, all 3-component data arrays ( considered as 3D\nvectors), 6-component data arrays (considered as symmetric\ntensors), 9-component data arrays (considered as tensors ) of\nsigned type will be flipped. All other won't be flipped and will\nonly be copied.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkReflectionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkReflectionFilter", // tp_name
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
  PyvtkReflectionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkReflectionFilter_StaticNew()
{
  return vtkReflectionFilter::New();
}

PyObject *PyvtkReflectionFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkReflectionFilter_Type, PyvtkReflectionFilter_Methods,
    "vtkReflectionFilter",
 &PyvtkReflectionFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkReflectionFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkReflectionFilter_ReflectionPlane_Type);
  PyvtkReflectionFilter_ReflectionPlane_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkReflectionFilter_ReflectionPlane_Type);

  o = (PyObject *)&PyvtkReflectionFilter_ReflectionPlane_Type;
  if (PyDict_SetItemString(d, "ReflectionPlane", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkReflectionFilter::ReflectionPlane cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "USE_X_MIN", vtkReflectionFilter::USE_X_MIN },
        { "USE_Y_MIN", vtkReflectionFilter::USE_Y_MIN },
        { "USE_Z_MIN", vtkReflectionFilter::USE_Z_MIN },
        { "USE_X_MAX", vtkReflectionFilter::USE_X_MAX },
        { "USE_Y_MAX", vtkReflectionFilter::USE_Y_MAX },
        { "USE_Z_MAX", vtkReflectionFilter::USE_Z_MAX },
        { "USE_X", vtkReflectionFilter::USE_X },
        { "USE_Y", vtkReflectionFilter::USE_Y },
        { "USE_Z", vtkReflectionFilter::USE_Z },
      };

    o = PyvtkReflectionFilter_ReflectionPlane_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkReflectionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkReflectionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkReflectionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

