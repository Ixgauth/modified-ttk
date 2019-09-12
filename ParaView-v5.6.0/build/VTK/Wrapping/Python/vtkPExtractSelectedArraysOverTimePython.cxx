// python wrapper for vtkPExtractSelectedArraysOverTime
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
#include "vtkPExtractSelectedArraysOverTime.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPExtractSelectedArraysOverTime(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPExtractSelectedArraysOverTime_ClassNew(); }

#ifndef DECLARED_PyvtkExtractSelectedArraysOverTime_ClassNew
extern "C" { PyObject *PyvtkExtractSelectedArraysOverTime_ClassNew(); }
#define DECLARED_PyvtkExtractSelectedArraysOverTime_ClassNew
#endif

static const char *PyvtkPExtractSelectedArraysOverTime_Doc =
  "vtkPExtractSelectedArraysOverTime - extracts a selection over time.\n\n"
  "Superclass: vtkExtractSelectedArraysOverTime\n\n"
  "vtkPExtractSelectedArraysOverTime is a parallelized version of\n"
  "vtkExtractSelectedArraysOverTime. It simply changes the types of\n"
  "internal filters used to their parallelized versions. Thus instead of\n"
  "using vtkExtractDataArraysOverTime over time, it's changed to\n"
  "vtkPExtractDataArraysOverTime.\n\n"
  "@sa vtkExtractDataArraysOverTime, vtkPExtractDataArraysOverTime\n\n";


static PyObject *
PyvtkPExtractSelectedArraysOverTime_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPExtractSelectedArraysOverTime::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractSelectedArraysOverTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractSelectedArraysOverTime *op = static_cast<vtkPExtractSelectedArraysOverTime *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPExtractSelectedArraysOverTime::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractSelectedArraysOverTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPExtractSelectedArraysOverTime *tempr = vtkPExtractSelectedArraysOverTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractSelectedArraysOverTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractSelectedArraysOverTime *op = static_cast<vtkPExtractSelectedArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPExtractSelectedArraysOverTime *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPExtractSelectedArraysOverTime::NewInstance());

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
PyvtkPExtractSelectedArraysOverTime_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractSelectedArraysOverTime *op = static_cast<vtkPExtractSelectedArraysOverTime *>(vp);

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
      op->vtkPExtractSelectedArraysOverTime::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPExtractSelectedArraysOverTime_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractSelectedArraysOverTime *op = static_cast<vtkPExtractSelectedArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPExtractSelectedArraysOverTime::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPExtractSelectedArraysOverTime_Methods[] = {
  {"IsTypeOf", PyvtkPExtractSelectedArraysOverTime_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPExtractSelectedArraysOverTime_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPExtractSelectedArraysOverTime_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPExtractSelectedArraysOverTime\nC++: static vtkPExtractSelectedArraysOverTime *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPExtractSelectedArraysOverTime_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPExtractSelectedArraysOverTime\nC++: vtkPExtractSelectedArraysOverTime *NewInstance()\n\n"},
  {"SetController", PyvtkPExtractSelectedArraysOverTime_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {"GetController", PyvtkPExtractSelectedArraysOverTime_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPExtractSelectedArraysOverTime_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkPExtractSelectedArraysOverTime", // tp_name
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
  PyvtkPExtractSelectedArraysOverTime_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPExtractSelectedArraysOverTime_StaticNew()
{
  return vtkPExtractSelectedArraysOverTime::New();
}

PyObject *PyvtkPExtractSelectedArraysOverTime_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPExtractSelectedArraysOverTime_Type, PyvtkPExtractSelectedArraysOverTime_Methods,
    "vtkPExtractSelectedArraysOverTime",
 &PyvtkPExtractSelectedArraysOverTime_StaticNew);

  PyTypeObject *pytype = &PyvtkPExtractSelectedArraysOverTime_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExtractSelectedArraysOverTime_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPExtractSelectedArraysOverTime(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPExtractSelectedArraysOverTime_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPExtractSelectedArraysOverTime", o) != 0)
  {
    Py_DECREF(o);
  }

}

