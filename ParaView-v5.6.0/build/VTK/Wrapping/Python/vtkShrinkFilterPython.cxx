// python wrapper for vtkShrinkFilter
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
#include "vtkShrinkFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkShrinkFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkShrinkFilter_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkShrinkFilter_Doc =
  "vtkShrinkFilter - shrink cells composing an arbitrary data set\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkShrinkFilter shrinks cells composing an arbitrary data set towards\n"
  "their centroid. The centroid of a cell is computed as the average\n"
  "position of the cell points. Shrinking results in disconnecting the\n"
  "cells from one another. The output of this filter is of general\n"
  "dataset type vtkUnstructuredGrid.\n\n"
  "@warning\n"
  "It is possible to turn cells inside out or cause self intersection in\n"
  "special cases.\n\n"
  "@sa\n"
  "vtkShrinkPolyData\n\n";


static PyObject *
PyvtkShrinkFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkShrinkFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShrinkFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShrinkFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShrinkFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkShrinkFilter *tempr = vtkShrinkFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShrinkFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShrinkFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShrinkFilter::NewInstance());

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
PyvtkShrinkFilter_SetShrinkFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShrinkFactor(temp0);
    }
    else
    {
      op->vtkShrinkFilter::SetShrinkFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShrinkFilter_GetShrinkFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShrinkFactorMinValue() :
      op->vtkShrinkFilter::GetShrinkFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShrinkFilter_GetShrinkFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShrinkFactorMaxValue() :
      op->vtkShrinkFilter::GetShrinkFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShrinkFilter_GetShrinkFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShrinkFactor() :
      op->vtkShrinkFilter::GetShrinkFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkShrinkFilter_Methods[] = {
  {"IsTypeOf", PyvtkShrinkFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkShrinkFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkShrinkFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkShrinkFilter\nC++: static vtkShrinkFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkShrinkFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkShrinkFilter\nC++: vtkShrinkFilter *NewInstance()\n\n"},
  {"SetShrinkFactor", PyvtkShrinkFilter_SetShrinkFactor, METH_VARARGS,
   "V.SetShrinkFactor(float)\nC++: virtual void SetShrinkFactor(double _arg)\n\nGet/Set the fraction of shrink for each cell. The default is 0.5.\n"},
  {"GetShrinkFactorMinValue", PyvtkShrinkFilter_GetShrinkFactorMinValue, METH_VARARGS,
   "V.GetShrinkFactorMinValue() -> float\nC++: virtual double GetShrinkFactorMinValue()\n\nGet/Set the fraction of shrink for each cell. The default is 0.5.\n"},
  {"GetShrinkFactorMaxValue", PyvtkShrinkFilter_GetShrinkFactorMaxValue, METH_VARARGS,
   "V.GetShrinkFactorMaxValue() -> float\nC++: virtual double GetShrinkFactorMaxValue()\n\nGet/Set the fraction of shrink for each cell. The default is 0.5.\n"},
  {"GetShrinkFactor", PyvtkShrinkFilter_GetShrinkFactor, METH_VARARGS,
   "V.GetShrinkFactor() -> float\nC++: virtual double GetShrinkFactor()\n\nGet/Set the fraction of shrink for each cell. The default is 0.5.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkShrinkFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkShrinkFilter", // tp_name
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
  PyvtkShrinkFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkShrinkFilter_StaticNew()
{
  return vtkShrinkFilter::New();
}

PyObject *PyvtkShrinkFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkShrinkFilter_Type, PyvtkShrinkFilter_Methods,
    "vtkShrinkFilter",
 &PyvtkShrinkFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkShrinkFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkShrinkFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkShrinkFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkShrinkFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

