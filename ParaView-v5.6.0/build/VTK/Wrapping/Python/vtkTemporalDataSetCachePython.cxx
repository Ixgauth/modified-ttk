// python wrapper for vtkTemporalDataSetCache
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
#include "vtkTemporalDataSetCache.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalDataSetCache(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTemporalDataSetCache_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static const char *PyvtkTemporalDataSetCache_Doc =
  "vtkTemporalDataSetCache - cache time steps\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkTemporalDataSetCache cache time step requests of a temporal\n"
  "dataset, when cached data is requested it is returned using a shallow\n"
  "copy.@par Thanks: Ken Martin (Kitware) and John Bidiscombe of CSCS -\n"
  "Swiss National Supercomputing Centre for creating and contributing\n"
  "this class. For related material, please refer to : John Biddiscombe,\n"
  "Berk Geveci, Ken Martin, Kenneth Moreland, David Thompson, \"Time Dependent Processing in a Parallel Pipeline\n"
  "Architecture\", IEEE Visualization 2007.\n\n";


static PyObject *
PyvtkTemporalDataSetCache_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalDataSetCache::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDataSetCache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalDataSetCache::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDataSetCache_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalDataSetCache *tempr = vtkTemporalDataSetCache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDataSetCache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalDataSetCache *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalDataSetCache::NewInstance());

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
PyvtkTemporalDataSetCache_SetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

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
      op->vtkTemporalDataSetCache::SetCacheSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDataSetCache_GetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheSize() :
      op->vtkTemporalDataSetCache::GetCacheSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalDataSetCache_Methods[] = {
  {"IsTypeOf", PyvtkTemporalDataSetCache_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalDataSetCache_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalDataSetCache_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTemporalDataSetCache\nC++: static vtkTemporalDataSetCache *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalDataSetCache_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTemporalDataSetCache\nC++: vtkTemporalDataSetCache *NewInstance()\n\n"},
  {"SetCacheSize", PyvtkTemporalDataSetCache_SetCacheSize, METH_VARARGS,
   "V.SetCacheSize(int)\nC++: void SetCacheSize(int size)\n\nThis is the maximum number of time steps that can be retained in\nmemory. it defaults to 10.\n"},
  {"GetCacheSize", PyvtkTemporalDataSetCache_GetCacheSize, METH_VARARGS,
   "V.GetCacheSize() -> int\nC++: virtual int GetCacheSize()\n\nThis is the maximum number of time steps that can be retained in\nmemory. it defaults to 10.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTemporalDataSetCache_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkTemporalDataSetCache", // tp_name
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
  PyvtkTemporalDataSetCache_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalDataSetCache_StaticNew()
{
  return vtkTemporalDataSetCache::New();
}

PyObject *PyvtkTemporalDataSetCache_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTemporalDataSetCache_Type, PyvtkTemporalDataSetCache_Methods,
    "vtkTemporalDataSetCache",
 &PyvtkTemporalDataSetCache_StaticNew);

  PyTypeObject *pytype = &PyvtkTemporalDataSetCache_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalDataSetCache(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalDataSetCache_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalDataSetCache", o) != 0)
  {
    Py_DECREF(o);
  }

}

