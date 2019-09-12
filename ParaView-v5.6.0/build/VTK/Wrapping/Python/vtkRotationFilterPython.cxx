// python wrapper for vtkRotationFilter
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
#include "vtkRotationFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRotationFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRotationFilter_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkRotationFilter_Doc =
  "vtkRotationFilter - Duplicates a data set by rotation about an axis\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "The vtkRotationFilter duplicates a data set by rotation about one of\n"
  "the 3 axis of the dataset's reference. Since it converts data sets\n"
  "into unstructured grids, it is not efficient for structured data\n"
  "sets.\n\n"
  "@par Thanks: Theophane Foggia of The Swiss National Supercomputing\n"
  "Centre (CSCS) for creating and contributing this filter\n\n";

static PyTypeObject PyvtkRotationFilter_RotationAxis_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkRotationFilter.RotationAxis", // tp_name
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

PyObject *PyvtkRotationFilter_RotationAxis_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkRotationFilter_RotationAxis_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkRotationFilter_RotationAxis_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkRotationFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRotationFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRotationFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRotationFilter *tempr = vtkRotationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRotationFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRotationFilter::NewInstance());

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
PyvtkRotationFilter_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxis(temp0);
    }
    else
    {
      op->vtkRotationFilter::SetAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisMinValue() :
      op->vtkRotationFilter::GetAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisMaxValue() :
      op->vtkRotationFilter::GetAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkRotationFilter::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxisToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisToX();
    }
    else
    {
      op->vtkRotationFilter::SetAxisToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxisToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisToY();
    }
    else
    {
      op->vtkRotationFilter::SetAxisToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxisToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisToZ();
    }
    else
    {
      op->vtkRotationFilter::SetAxisToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngle(temp0);
    }
    else
    {
      op->vtkRotationFilter::SetAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkRotationFilter::GetAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRotationFilter::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRotationFilter_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkRotationFilter::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRotationFilter_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRotationFilter_SetCenter_s1(self, args);
    case 1:
      return PyvtkRotationFilter_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkRotationFilter_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkRotationFilter::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetNumberOfCopies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCopies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCopies(temp0);
    }
    else
    {
      op->vtkRotationFilter::SetNumberOfCopies(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetNumberOfCopies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCopies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCopies() :
      op->vtkRotationFilter::GetNumberOfCopies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

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
      op->vtkRotationFilter::SetCopyInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyInput() :
      op->vtkRotationFilter::GetCopyInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_CopyInputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyInputOn();
    }
    else
    {
      op->vtkRotationFilter::CopyInputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_CopyInputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyInputOff();
    }
    else
    {
      op->vtkRotationFilter::CopyInputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRotationFilter_Methods[] = {
  {"IsTypeOf", PyvtkRotationFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRotationFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRotationFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRotationFilter\nC++: static vtkRotationFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRotationFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRotationFilter\nC++: vtkRotationFilter *NewInstance()\n\n"},
  {"SetAxis", PyvtkRotationFilter_SetAxis, METH_VARARGS,
   "V.SetAxis(int)\nC++: virtual void SetAxis(int _arg)\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {"GetAxisMinValue", PyvtkRotationFilter_GetAxisMinValue, METH_VARARGS,
   "V.GetAxisMinValue() -> int\nC++: virtual int GetAxisMinValue()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {"GetAxisMaxValue", PyvtkRotationFilter_GetAxisMaxValue, METH_VARARGS,
   "V.GetAxisMaxValue() -> int\nC++: virtual int GetAxisMaxValue()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {"GetAxis", PyvtkRotationFilter_GetAxis, METH_VARARGS,
   "V.GetAxis() -> int\nC++: virtual int GetAxis()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {"SetAxisToX", PyvtkRotationFilter_SetAxisToX, METH_VARARGS,
   "V.SetAxisToX()\nC++: void SetAxisToX()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {"SetAxisToY", PyvtkRotationFilter_SetAxisToY, METH_VARARGS,
   "V.SetAxisToY()\nC++: void SetAxisToY()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {"SetAxisToZ", PyvtkRotationFilter_SetAxisToZ, METH_VARARGS,
   "V.SetAxisToZ()\nC++: void SetAxisToZ()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {"SetAngle", PyvtkRotationFilter_SetAngle, METH_VARARGS,
   "V.SetAngle(float)\nC++: virtual void SetAngle(double _arg)\n\nSet the rotation angle to use.\n"},
  {"GetAngle", PyvtkRotationFilter_GetAngle, METH_VARARGS,
   "V.GetAngle() -> float\nC++: virtual double GetAngle()\n\nSet the rotation angle to use.\n"},
  {"SetCenter", PyvtkRotationFilter_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkRotationFilter_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {"SetNumberOfCopies", PyvtkRotationFilter_SetNumberOfCopies, METH_VARARGS,
   "V.SetNumberOfCopies(int)\nC++: virtual void SetNumberOfCopies(int _arg)\n\nSet the number of copies to create. The source will be rotated N\ntimes and a new polydata copy of the original created at each\nangular position All copies will be appended to form a single\noutput\n"},
  {"GetNumberOfCopies", PyvtkRotationFilter_GetNumberOfCopies, METH_VARARGS,
   "V.GetNumberOfCopies() -> int\nC++: virtual int GetNumberOfCopies()\n\nSet the number of copies to create. The source will be rotated N\ntimes and a new polydata copy of the original created at each\nangular position All copies will be appended to form a single\noutput\n"},
  {"SetCopyInput", PyvtkRotationFilter_SetCopyInput, METH_VARARGS,
   "V.SetCopyInput(int)\nC++: virtual void SetCopyInput(vtkTypeBool _arg)\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the rotation.\n"},
  {"GetCopyInput", PyvtkRotationFilter_GetCopyInput, METH_VARARGS,
   "V.GetCopyInput() -> int\nC++: virtual vtkTypeBool GetCopyInput()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the rotation.\n"},
  {"CopyInputOn", PyvtkRotationFilter_CopyInputOn, METH_VARARGS,
   "V.CopyInputOn()\nC++: virtual void CopyInputOn()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the rotation.\n"},
  {"CopyInputOff", PyvtkRotationFilter_CopyInputOff, METH_VARARGS,
   "V.CopyInputOff()\nC++: virtual void CopyInputOff()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the rotation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRotationFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkRotationFilter", // tp_name
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
  PyvtkRotationFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRotationFilter_StaticNew()
{
  return vtkRotationFilter::New();
}

PyObject *PyvtkRotationFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRotationFilter_Type, PyvtkRotationFilter_Methods,
    "vtkRotationFilter",
 &PyvtkRotationFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkRotationFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkRotationFilter_RotationAxis_Type);
  PyvtkRotationFilter_RotationAxis_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkRotationFilter_RotationAxis_Type);

  o = (PyObject *)&PyvtkRotationFilter_RotationAxis_Type;
  if (PyDict_SetItemString(d, "RotationAxis", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkRotationFilter::RotationAxis cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "USE_X", vtkRotationFilter::USE_X },
        { "USE_Y", vtkRotationFilter::USE_Y },
        { "USE_Z", vtkRotationFilter::USE_Z },
      };

    o = PyvtkRotationFilter_RotationAxis_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRotationFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRotationFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRotationFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

