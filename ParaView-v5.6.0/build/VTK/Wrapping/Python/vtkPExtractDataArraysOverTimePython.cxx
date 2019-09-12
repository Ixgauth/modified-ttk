// python wrapper for vtkPExtractDataArraysOverTime
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
#include "vtkPExtractDataArraysOverTime.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPExtractDataArraysOverTime(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPExtractDataArraysOverTime_ClassNew(); }

#ifndef DECLARED_PyvtkExtractDataArraysOverTime_ClassNew
extern "C" { PyObject *PyvtkExtractDataArraysOverTime_ClassNew(); }
#define DECLARED_PyvtkExtractDataArraysOverTime_ClassNew
#endif

static const char *PyvtkPExtractDataArraysOverTime_Doc =
  "vtkPExtractDataArraysOverTime - parallel version of\nvtkExtractDataArraysOverTime.\n\n"
  "Superclass: vtkExtractDataArraysOverTime\n\n"
  "vtkPExtractDataArraysOverTime adds distributed data support to\n"
  "vtkExtractDataArraysOverTime.\n\n"
  "It combines results from all ranks and produce non-empty result only\n"
  "on rank 0.\n\n"
  "@caveats Caveats Caveats\n\n"
  "This filter's behavior when `ReportStatisticsOnly` is true is buggy\n"
  "and will change in the future. When `ReportStatisticsOnly` currently,\n"
  "each rank computes separate stats for local data. Consequently, this\n"
  "filter preserves each processes results separately (by adding suffix\n"
  "**rank=<rank num>** to each of the block names, as appropriate. In\n"
  "future, we plan to fix this to correctly compute stats in parallel\n"
  "for each block.\n\n";


static PyObject *
PyvtkPExtractDataArraysOverTime_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPExtractDataArraysOverTime::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractDataArraysOverTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractDataArraysOverTime *op = static_cast<vtkPExtractDataArraysOverTime *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPExtractDataArraysOverTime::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractDataArraysOverTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPExtractDataArraysOverTime *tempr = vtkPExtractDataArraysOverTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractDataArraysOverTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractDataArraysOverTime *op = static_cast<vtkPExtractDataArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPExtractDataArraysOverTime *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPExtractDataArraysOverTime::NewInstance());

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
PyvtkPExtractDataArraysOverTime_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractDataArraysOverTime *op = static_cast<vtkPExtractDataArraysOverTime *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkPExtractDataArraysOverTime::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractDataArraysOverTime_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractDataArraysOverTime *op = static_cast<vtkPExtractDataArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPExtractDataArraysOverTime::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPExtractDataArraysOverTime_Methods[] = {
  {"IsTypeOf", PyvtkPExtractDataArraysOverTime_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPExtractDataArraysOverTime_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPExtractDataArraysOverTime_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPExtractDataArraysOverTime\nC++: static vtkPExtractDataArraysOverTime *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPExtractDataArraysOverTime_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPExtractDataArraysOverTime\nC++: vtkPExtractDataArraysOverTime *NewInstance()\n\n"},
  {"SetController", PyvtkPExtractDataArraysOverTime_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {"GetController", PyvtkPExtractDataArraysOverTime_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPExtractDataArraysOverTime_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkPExtractDataArraysOverTime", // tp_name
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
  PyvtkPExtractDataArraysOverTime_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPExtractDataArraysOverTime_StaticNew()
{
  return vtkPExtractDataArraysOverTime::New();
}

PyObject *PyvtkPExtractDataArraysOverTime_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPExtractDataArraysOverTime_Type, PyvtkPExtractDataArraysOverTime_Methods,
    "vtkPExtractDataArraysOverTime",
 &PyvtkPExtractDataArraysOverTime_StaticNew);

  PyTypeObject *pytype = &PyvtkPExtractDataArraysOverTime_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExtractDataArraysOverTime_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPExtractDataArraysOverTime(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPExtractDataArraysOverTime_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPExtractDataArraysOverTime", o) != 0)
  {
    Py_DECREF(o);
  }

}

