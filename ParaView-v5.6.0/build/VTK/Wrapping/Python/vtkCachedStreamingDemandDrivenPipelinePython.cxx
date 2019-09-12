// python wrapper for vtkCachedStreamingDemandDrivenPipeline
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
#include "vtkCachedStreamingDemandDrivenPipeline.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCachedStreamingDemandDrivenPipeline(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCachedStreamingDemandDrivenPipeline_ClassNew(); }

#ifndef DECLARED_PyvtkStreamingDemandDrivenPipeline_ClassNew
extern "C" { PyObject *PyvtkStreamingDemandDrivenPipeline_ClassNew(); }
#define DECLARED_PyvtkStreamingDemandDrivenPipeline_ClassNew
#endif

static const char *PyvtkCachedStreamingDemandDrivenPipeline_Doc =
  "vtkCachedStreamingDemandDrivenPipeline -\nvtkCachedStreamingDemandDrivenPipeline\n\n"
  "Superclass: vtkStreamingDemandDrivenPipeline\n\n"
;


static PyObject *
PyvtkCachedStreamingDemandDrivenPipeline_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCachedStreamingDemandDrivenPipeline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachedStreamingDemandDrivenPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachedStreamingDemandDrivenPipeline *op = static_cast<vtkCachedStreamingDemandDrivenPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCachedStreamingDemandDrivenPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachedStreamingDemandDrivenPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCachedStreamingDemandDrivenPipeline *tempr = vtkCachedStreamingDemandDrivenPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachedStreamingDemandDrivenPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachedStreamingDemandDrivenPipeline *op = static_cast<vtkCachedStreamingDemandDrivenPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCachedStreamingDemandDrivenPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCachedStreamingDemandDrivenPipeline::NewInstance());

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
PyvtkCachedStreamingDemandDrivenPipeline_SetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachedStreamingDemandDrivenPipeline *op = static_cast<vtkCachedStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheSize(temp0);
    }
    else
    {
      op->vtkCachedStreamingDemandDrivenPipeline::SetCacheSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCachedStreamingDemandDrivenPipeline_GetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachedStreamingDemandDrivenPipeline *op = static_cast<vtkCachedStreamingDemandDrivenPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheSize() :
      op->vtkCachedStreamingDemandDrivenPipeline::GetCacheSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCachedStreamingDemandDrivenPipeline_Methods[] = {
  {"IsTypeOf", PyvtkCachedStreamingDemandDrivenPipeline_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCachedStreamingDemandDrivenPipeline_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCachedStreamingDemandDrivenPipeline_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkCachedStreamingDemandDrivenPipeline\nC++: static vtkCachedStreamingDemandDrivenPipeline *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCachedStreamingDemandDrivenPipeline_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCachedStreamingDemandDrivenPipeline\nC++: vtkCachedStreamingDemandDrivenPipeline *NewInstance()\n\n"},
  {"SetCacheSize", PyvtkCachedStreamingDemandDrivenPipeline_SetCacheSize, METH_VARARGS,
   "V.SetCacheSize(int)\nC++: void SetCacheSize(int size)\n\nThis is the maximum number of images that can be retained in\nmemory. it defaults to 10.\n"},
  {"GetCacheSize", PyvtkCachedStreamingDemandDrivenPipeline_GetCacheSize, METH_VARARGS,
   "V.GetCacheSize() -> int\nC++: virtual int GetCacheSize()\n\nThis is the maximum number of images that can be retained in\nmemory. it defaults to 10.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCachedStreamingDemandDrivenPipeline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkCachedStreamingDemandDrivenPipeline", // tp_name
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
  PyvtkCachedStreamingDemandDrivenPipeline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCachedStreamingDemandDrivenPipeline_StaticNew()
{
  return vtkCachedStreamingDemandDrivenPipeline::New();
}

PyObject *PyvtkCachedStreamingDemandDrivenPipeline_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCachedStreamingDemandDrivenPipeline_Type, PyvtkCachedStreamingDemandDrivenPipeline_Methods,
    "vtkCachedStreamingDemandDrivenPipeline",
 &PyvtkCachedStreamingDemandDrivenPipeline_StaticNew);

  PyTypeObject *pytype = &PyvtkCachedStreamingDemandDrivenPipeline_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkStreamingDemandDrivenPipeline_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCachedStreamingDemandDrivenPipeline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCachedStreamingDemandDrivenPipeline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCachedStreamingDemandDrivenPipeline", o) != 0)
  {
    Py_DECREF(o);
  }

}

