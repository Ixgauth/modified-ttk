// python wrapper for vtkPiecewiseFunctionShiftScale
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
#include "vtkPiecewiseFunctionShiftScale.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPiecewiseFunctionShiftScale(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPiecewiseFunctionShiftScale_ClassNew(); }

#ifndef DECLARED_PyvtkPiecewiseFunctionAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPiecewiseFunctionAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPiecewiseFunctionAlgorithm_ClassNew
#endif

static const char *PyvtkPiecewiseFunctionShiftScale_Doc =
  "vtkPiecewiseFunctionShiftScale - \n\n"
  "Superclass: vtkPiecewiseFunctionAlgorithm\n\n"
;


static PyObject *
PyvtkPiecewiseFunctionShiftScale_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPiecewiseFunctionShiftScale::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPiecewiseFunctionShiftScale::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPiecewiseFunctionShiftScale *tempr = vtkPiecewiseFunctionShiftScale::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunctionShiftScale *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPiecewiseFunctionShiftScale::NewInstance());

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
PyvtkPiecewiseFunctionShiftScale_SetPositionShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPositionShift(temp0);
    }
    else
    {
      op->vtkPiecewiseFunctionShiftScale::SetPositionShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_SetPositionScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPositionScale(temp0);
    }
    else
    {
      op->vtkPiecewiseFunctionShiftScale::SetPositionScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_SetValueShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValueShift(temp0);
    }
    else
    {
      op->vtkPiecewiseFunctionShiftScale::SetValueShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_SetValueScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValueScale(temp0);
    }
    else
    {
      op->vtkPiecewiseFunctionShiftScale::SetValueScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_GetPositionShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPositionShift() :
      op->vtkPiecewiseFunctionShiftScale::GetPositionShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_GetPositionScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPositionScale() :
      op->vtkPiecewiseFunctionShiftScale::GetPositionScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_GetValueShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValueShift() :
      op->vtkPiecewiseFunctionShiftScale::GetValueShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunctionShiftScale_GetValueScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunctionShiftScale *op = static_cast<vtkPiecewiseFunctionShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValueScale() :
      op->vtkPiecewiseFunctionShiftScale::GetValueScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPiecewiseFunctionShiftScale_Methods[] = {
  {"IsTypeOf", PyvtkPiecewiseFunctionShiftScale_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPiecewiseFunctionShiftScale_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPiecewiseFunctionShiftScale_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPiecewiseFunctionShiftScale\nC++: static vtkPiecewiseFunctionShiftScale *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPiecewiseFunctionShiftScale_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPiecewiseFunctionShiftScale\nC++: vtkPiecewiseFunctionShiftScale *NewInstance()\n\n"},
  {"SetPositionShift", PyvtkPiecewiseFunctionShiftScale_SetPositionShift, METH_VARARGS,
   "V.SetPositionShift(float)\nC++: virtual void SetPositionShift(double _arg)\n\n"},
  {"SetPositionScale", PyvtkPiecewiseFunctionShiftScale_SetPositionScale, METH_VARARGS,
   "V.SetPositionScale(float)\nC++: virtual void SetPositionScale(double _arg)\n\n"},
  {"SetValueShift", PyvtkPiecewiseFunctionShiftScale_SetValueShift, METH_VARARGS,
   "V.SetValueShift(float)\nC++: virtual void SetValueShift(double _arg)\n\n"},
  {"SetValueScale", PyvtkPiecewiseFunctionShiftScale_SetValueScale, METH_VARARGS,
   "V.SetValueScale(float)\nC++: virtual void SetValueScale(double _arg)\n\n"},
  {"GetPositionShift", PyvtkPiecewiseFunctionShiftScale_GetPositionShift, METH_VARARGS,
   "V.GetPositionShift() -> float\nC++: virtual double GetPositionShift()\n\n"},
  {"GetPositionScale", PyvtkPiecewiseFunctionShiftScale_GetPositionScale, METH_VARARGS,
   "V.GetPositionScale() -> float\nC++: virtual double GetPositionScale()\n\n"},
  {"GetValueShift", PyvtkPiecewiseFunctionShiftScale_GetValueShift, METH_VARARGS,
   "V.GetValueShift() -> float\nC++: virtual double GetValueShift()\n\n"},
  {"GetValueScale", PyvtkPiecewiseFunctionShiftScale_GetValueScale, METH_VARARGS,
   "V.GetValueScale() -> float\nC++: virtual double GetValueScale()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPiecewiseFunctionShiftScale_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkPiecewiseFunctionShiftScale", // tp_name
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
  PyvtkPiecewiseFunctionShiftScale_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPiecewiseFunctionShiftScale_StaticNew()
{
  return vtkPiecewiseFunctionShiftScale::New();
}

PyObject *PyvtkPiecewiseFunctionShiftScale_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPiecewiseFunctionShiftScale_Type, PyvtkPiecewiseFunctionShiftScale_Methods,
    "vtkPiecewiseFunctionShiftScale",
 &PyvtkPiecewiseFunctionShiftScale_StaticNew);

  PyTypeObject *pytype = &PyvtkPiecewiseFunctionShiftScale_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPiecewiseFunctionAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPiecewiseFunctionShiftScale(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPiecewiseFunctionShiftScale_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPiecewiseFunctionShiftScale", o) != 0)
  {
    Py_DECREF(o);
  }

}

