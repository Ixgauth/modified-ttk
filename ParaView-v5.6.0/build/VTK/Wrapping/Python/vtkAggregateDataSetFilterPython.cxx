// python wrapper for vtkAggregateDataSetFilter
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
#include "vtkAggregateDataSetFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAggregateDataSetFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAggregateDataSetFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkAggregateDataSetFilter_Doc =
  "vtkAggregateDataSetFilter - Aggregates data sets to a reduced number\nof processes.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "This class allows polydata and unstructured grids to be aggregated\n"
  "over a smaller set of processes. The derived\n"
  "vtkDIYAggregateDataSetFilter will operate on image data, rectilinear\n"
  "grids and structured grids.\n\n";


static PyObject *
PyvtkAggregateDataSetFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAggregateDataSetFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAggregateDataSetFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAggregateDataSetFilter *op = static_cast<vtkAggregateDataSetFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAggregateDataSetFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAggregateDataSetFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAggregateDataSetFilter *tempr = vtkAggregateDataSetFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAggregateDataSetFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAggregateDataSetFilter *op = static_cast<vtkAggregateDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAggregateDataSetFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAggregateDataSetFilter::NewInstance());

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
PyvtkAggregateDataSetFilter_SetNumberOfTargetProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTargetProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAggregateDataSetFilter *op = static_cast<vtkAggregateDataSetFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTargetProcesses(temp0);
    }
    else
    {
      op->vtkAggregateDataSetFilter::SetNumberOfTargetProcesses(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAggregateDataSetFilter_GetNumberOfTargetProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTargetProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAggregateDataSetFilter *op = static_cast<vtkAggregateDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTargetProcesses() :
      op->vtkAggregateDataSetFilter::GetNumberOfTargetProcesses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAggregateDataSetFilter_Methods[] = {
  {"IsTypeOf", PyvtkAggregateDataSetFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAggregateDataSetFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAggregateDataSetFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAggregateDataSetFilter\nC++: static vtkAggregateDataSetFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAggregateDataSetFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAggregateDataSetFilter\nC++: vtkAggregateDataSetFilter *NewInstance()\n\n"},
  {"SetNumberOfTargetProcesses", PyvtkAggregateDataSetFilter_SetNumberOfTargetProcesses, METH_VARARGS,
   "V.SetNumberOfTargetProcesses(int)\nC++: void SetNumberOfTargetProcesses(int)\n\nNumber of target processes. Valid values are between 1 and the\ntotal number of processes. The default is 1. If a value is passed\nin that is less than 1 than NumberOfTargetProcesses is\nchanged/kept at 1. If a value is passed in that is greater than\nthe total number of processes then NumberOfTargetProcesses is\nchanged/kept at the total number of processes. This is useful for\nscripting use cases where later on the script is run with more\nprocesses than the current amount.\n"},
  {"GetNumberOfTargetProcesses", PyvtkAggregateDataSetFilter_GetNumberOfTargetProcesses, METH_VARARGS,
   "V.GetNumberOfTargetProcesses() -> int\nC++: virtual int GetNumberOfTargetProcesses()\n\nNumber of target processes. Valid values are between 1 and the\ntotal number of processes. The default is 1. If a value is passed\nin that is less than 1 than NumberOfTargetProcesses is\nchanged/kept at 1. If a value is passed in that is greater than\nthe total number of processes then NumberOfTargetProcesses is\nchanged/kept at the total number of processes. This is useful for\nscripting use cases where later on the script is run with more\nprocesses than the current amount.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAggregateDataSetFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkAggregateDataSetFilter", // tp_name
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
  PyvtkAggregateDataSetFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAggregateDataSetFilter_StaticNew()
{
  return vtkAggregateDataSetFilter::New();
}

PyObject *PyvtkAggregateDataSetFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAggregateDataSetFilter_Type, PyvtkAggregateDataSetFilter_Methods,
    "vtkAggregateDataSetFilter",
 &PyvtkAggregateDataSetFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkAggregateDataSetFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAggregateDataSetFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAggregateDataSetFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAggregateDataSetFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

