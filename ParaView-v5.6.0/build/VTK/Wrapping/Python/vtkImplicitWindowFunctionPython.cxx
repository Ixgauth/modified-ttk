// python wrapper for vtkImplicitWindowFunction
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
#include "vtkImplicitWindowFunction.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitWindowFunction(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImplicitWindowFunction_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static const char *PyvtkImplicitWindowFunction_Doc =
  "vtkImplicitWindowFunction - implicit function maps another implicit\nfunction to lie within a specified range\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkImplicitWindowFunction is used to modify the output of another\n"
  "implicit function to lie within a specified \"window\", or function\n"
  "range. This can be used to add \"thickness\" to cutting or clipping\n"
  "functions.\n\n"
  "This class works as follows. First, it evaluates the function value\n"
  "of the user-specified implicit function. Then, based on the window\n"
  "range specified, it maps the function value into the window values\n"
  "specified.\n\n"
  "@sa\n"
  "vtkImplicitFunction\n\n";


static PyObject *
PyvtkImplicitWindowFunction_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitWindowFunction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitWindowFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitWindowFunction *tempr = vtkImplicitWindowFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitWindowFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitWindowFunction::NewInstance());

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
PyvtkImplicitWindowFunction_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkImplicitWindowFunction::EvaluateFunction(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitWindowFunction_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->EvaluateFunction(temp0, temp1);
    }
    else
    {
      op->vtkImplicitWindowFunction::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitWindowFunction_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkImplicitWindowFunction::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitWindowFunction_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImplicitWindowFunction_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkImplicitWindowFunction_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkImplicitWindowFunction_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}



static PyObject *
PyvtkImplicitWindowFunction_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->EvaluateGradient(temp0, temp1);
    }
    else
    {
      op->vtkImplicitWindowFunction::EvaluateGradient(temp0, temp1);
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
PyvtkImplicitWindowFunction_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetImplicitFunction(temp0);
    }
    else
    {
      op->vtkImplicitWindowFunction::SetImplicitFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetImplicitFunction() :
      op->vtkImplicitWindowFunction::GetImplicitFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_SetWindowRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetWindowRange(temp0, temp1);
    }
    else
    {
      op->vtkImplicitWindowFunction::SetWindowRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitWindowFunction_SetWindowRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWindowRange(temp0);
    }
    else
    {
      op->vtkImplicitWindowFunction::SetWindowRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitWindowFunction_SetWindowRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImplicitWindowFunction_SetWindowRange_s1(self, args);
    case 1:
      return PyvtkImplicitWindowFunction_SetWindowRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWindowRange");
  return nullptr;
}



static PyObject *
PyvtkImplicitWindowFunction_GetWindowRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWindowRange() :
      op->vtkImplicitWindowFunction::GetWindowRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_SetWindowValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetWindowValues(temp0, temp1);
    }
    else
    {
      op->vtkImplicitWindowFunction::SetWindowValues(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitWindowFunction_SetWindowValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWindowValues(temp0);
    }
    else
    {
      op->vtkImplicitWindowFunction::SetWindowValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitWindowFunction_SetWindowValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImplicitWindowFunction_SetWindowValues_s1(self, args);
    case 1:
      return PyvtkImplicitWindowFunction_SetWindowValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWindowValues");
  return nullptr;
}



static PyObject *
PyvtkImplicitWindowFunction_GetWindowValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWindowValues() :
      op->vtkImplicitWindowFunction::GetWindowValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitWindowFunction_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitWindowFunction *op = static_cast<vtkImplicitWindowFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitWindowFunction::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitWindowFunction_Methods[] = {
  {"IsTypeOf", PyvtkImplicitWindowFunction_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitWindowFunction_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitWindowFunction_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImplicitWindowFunction\nC++: static vtkImplicitWindowFunction *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitWindowFunction_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImplicitWindowFunction\nC++: vtkImplicitWindowFunction *NewInstance()\n\n"},
  {"EvaluateFunction", PyvtkImplicitWindowFunction_EvaluateFunction, METH_VARARGS,
   "V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nV.EvaluateFunction(vtkDataArray, vtkDataArray)\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nV.EvaluateFunction(float, float, float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate window function.\n"},
  {"EvaluateGradient", PyvtkImplicitWindowFunction_EvaluateGradient, METH_VARARGS,
   "V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double n[3]) override;\n\nEvaluate window function gradient. Just return implicit function\ngradient.\n"},
  {"SetImplicitFunction", PyvtkImplicitWindowFunction_SetImplicitFunction, METH_VARARGS,
   "V.SetImplicitFunction(vtkImplicitFunction)\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify an implicit function to operate on.\n"},
  {"GetImplicitFunction", PyvtkImplicitWindowFunction_GetImplicitFunction, METH_VARARGS,
   "V.GetImplicitFunction() -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetImplicitFunction()\n\nSpecify an implicit function to operate on.\n"},
  {"SetWindowRange", PyvtkImplicitWindowFunction_SetWindowRange, METH_VARARGS,
   "V.SetWindowRange(float, float)\nC++: void SetWindowRange(double, double)\nV.SetWindowRange((float, float))\nC++: void SetWindowRange(double a[2])\n\n"},
  {"GetWindowRange", PyvtkImplicitWindowFunction_GetWindowRange, METH_VARARGS,
   "V.GetWindowRange() -> (float, float)\nC++: double *GetWindowRange()\n\nSpecify the range of function values which are considered to lie\nwithin the window. WindowRange[0] is assumed to be less than\nWindowRange[1].\n"},
  {"SetWindowValues", PyvtkImplicitWindowFunction_SetWindowValues, METH_VARARGS,
   "V.SetWindowValues(float, float)\nC++: void SetWindowValues(double, double)\nV.SetWindowValues((float, float))\nC++: void SetWindowValues(double a[2])\n\n"},
  {"GetWindowValues", PyvtkImplicitWindowFunction_GetWindowValues, METH_VARARGS,
   "V.GetWindowValues() -> (float, float)\nC++: double *GetWindowValues()\n\nSpecify the range of output values that the window range is\nmapped into. This is effectively a scaling and shifting of the\noriginal function values.\n"},
  {"GetMTime", PyvtkImplicitWindowFunction_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride modified time retrieval because of object dependencies.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImplicitWindowFunction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkImplicitWindowFunction", // tp_name
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
  PyvtkImplicitWindowFunction_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitWindowFunction_StaticNew()
{
  return vtkImplicitWindowFunction::New();
}

PyObject *PyvtkImplicitWindowFunction_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImplicitWindowFunction_Type, PyvtkImplicitWindowFunction_Methods,
    "vtkImplicitWindowFunction",
 &PyvtkImplicitWindowFunction_StaticNew);

  PyTypeObject *pytype = &PyvtkImplicitWindowFunction_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitWindowFunction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitWindowFunction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitWindowFunction", o) != 0)
  {
    Py_DECREF(o);
  }

}

