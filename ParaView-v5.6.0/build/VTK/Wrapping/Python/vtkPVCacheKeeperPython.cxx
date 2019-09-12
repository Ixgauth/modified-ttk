// python wrapper for vtkPVCacheKeeper
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
#include "vtkPVCacheKeeper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVCacheKeeper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVCacheKeeper_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkPVCacheKeeper_Doc =
  "vtkPVCacheKeeper - manages data cache for flip book animations.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkPVCacheKeeper manages data cache for flip book animations. When\n"
  "caching is disabled, this simply acts as a pass through filter. When\n"
  "caching is enabled, is the current time step has been previously\n"
  "cached then this filter shuts the update request, otherwise\n"
  "propagates the update and then cache the result for later use.  The\n"
  "current time step is set using SetCacheTime().\n"
  "@sa\n"
  "vtkPVCacheKeeperPipeline\n\n";


static PyObject *
PyvtkPVCacheKeeper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCacheKeeper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCacheKeeper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVCacheKeeper *tempr = vtkPVCacheKeeper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCacheKeeper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCacheKeeper::NewInstance());

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
PyvtkPVCacheKeeper_RemoveAllCaches(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCaches");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllCaches();
    }
    else
    {
      op->vtkPVCacheKeeper::RemoveAllCaches();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_SetCacheTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheTime(temp0);
    }
    else
    {
      op->vtkPVCacheKeeper::SetCacheTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_GetCacheTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCacheTime() :
      op->vtkPVCacheKeeper::GetCacheTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_IsCached_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCached(temp0) :
      op->vtkPVCacheKeeper::IsCached(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVCacheKeeper_IsCached_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCached");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCached() :
      op->vtkPVCacheKeeper::IsCached());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVCacheKeeper_IsCached(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVCacheKeeper_IsCached_s1(self, args);
    case 0:
      return PyvtkPVCacheKeeper_IsCached_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsCached");
  return nullptr;
}



static PyObject *
PyvtkPVCacheKeeper_SetCachingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCachingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCachingEnabled(temp0);
    }
    else
    {
      op->vtkPVCacheKeeper::SetCachingEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_GetCachingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCachingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCachingEnabled() :
      op->vtkPVCacheKeeper::GetCachingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_CachingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CachingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CachingEnabledOn();
    }
    else
    {
      op->vtkPVCacheKeeper::CachingEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_CachingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CachingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCacheKeeper *op = static_cast<vtkPVCacheKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CachingEnabledOff();
    }
    else
    {
      op->vtkPVCacheKeeper::CachingEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_ClearCacheStateFlags(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ClearCacheStateFlags");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPVCacheKeeper::ClearCacheStateFlags();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_GetCacheHits(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCacheHits");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkPVCacheKeeper::GetCacheHits();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_GetCacheMisses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCacheMisses");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkPVCacheKeeper::GetCacheMisses();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_GetCacheSkips(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCacheSkips");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkPVCacheKeeper::GetCacheSkips();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCacheKeeper_GetCacheClears(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCacheClears");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkPVCacheKeeper::GetCacheClears();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVCacheKeeper_Methods[] = {
  {"IsTypeOf", PyvtkPVCacheKeeper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVCacheKeeper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVCacheKeeper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVCacheKeeper\nC++: static vtkPVCacheKeeper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVCacheKeeper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVCacheKeeper\nC++: vtkPVCacheKeeper *NewInstance()\n\n"},
  {"RemoveAllCaches", PyvtkPVCacheKeeper_RemoveAllCaches, METH_VARARGS,
   "V.RemoveAllCaches()\nC++: virtual void RemoveAllCaches()\n\nMethods for saving, clearing and updating flip books. This\nremoves all saved cache.\n"},
  {"SetCacheTime", PyvtkPVCacheKeeper_SetCacheTime, METH_VARARGS,
   "V.SetCacheTime(float)\nC++: virtual void SetCacheTime(double _arg)\n\nSet/Get the current cache time.\n"},
  {"GetCacheTime", PyvtkPVCacheKeeper_GetCacheTime, METH_VARARGS,
   "V.GetCacheTime() -> float\nC++: virtual double GetCacheTime()\n\nSet/Get the current cache time.\n"},
  {"IsCached", PyvtkPVCacheKeeper_IsCached, METH_VARARGS,
   "V.IsCached(float) -> bool\nC++: virtual bool IsCached(double cacheTime)\nV.IsCached() -> bool\nC++: virtual bool IsCached()\n\nReturns if the given cacheTime is available in the cache. Does\nnot cause any updates.\n"},
  {"SetCachingEnabled", PyvtkPVCacheKeeper_SetCachingEnabled, METH_VARARGS,
   "V.SetCachingEnabled(bool)\nC++: virtual void SetCachingEnabled(bool _arg)\n\nGet/Set if caching is enabled. Default is true.\n"},
  {"GetCachingEnabled", PyvtkPVCacheKeeper_GetCachingEnabled, METH_VARARGS,
   "V.GetCachingEnabled() -> bool\nC++: virtual bool GetCachingEnabled()\n\nGet/Set if caching is enabled. Default is true.\n"},
  {"CachingEnabledOn", PyvtkPVCacheKeeper_CachingEnabledOn, METH_VARARGS,
   "V.CachingEnabledOn()\nC++: virtual void CachingEnabledOn()\n\nGet/Set if caching is enabled. Default is true.\n"},
  {"CachingEnabledOff", PyvtkPVCacheKeeper_CachingEnabledOff, METH_VARARGS,
   "V.CachingEnabledOff()\nC++: virtual void CachingEnabledOff()\n\nGet/Set if caching is enabled. Default is true.\n"},
  {"ClearCacheStateFlags", PyvtkPVCacheKeeper_ClearCacheStateFlags, METH_VARARGS,
   "V.ClearCacheStateFlags()\nC++: static void ClearCacheStateFlags()\n\nThese methods are used for testing. Using this global state we\ncan add checks to ensure that cache was used or not used for a\nparticular sequence of actions.\n"},
  {"GetCacheHits", PyvtkPVCacheKeeper_GetCacheHits, METH_VARARGS,
   "V.GetCacheHits() -> int\nC++: static int GetCacheHits()\n\nThese methods are used for testing. Using this global state we\ncan add checks to ensure that cache was used or not used for a\nparticular sequence of actions.\n"},
  {"GetCacheMisses", PyvtkPVCacheKeeper_GetCacheMisses, METH_VARARGS,
   "V.GetCacheMisses() -> int\nC++: static int GetCacheMisses()\n\nThese methods are used for testing. Using this global state we\ncan add checks to ensure that cache was used or not used for a\nparticular sequence of actions.\n"},
  {"GetCacheSkips", PyvtkPVCacheKeeper_GetCacheSkips, METH_VARARGS,
   "V.GetCacheSkips() -> int\nC++: static int GetCacheSkips()\n\nThese methods are used for testing. Using this global state we\ncan add checks to ensure that cache was used or not used for a\nparticular sequence of actions.\n"},
  {"GetCacheClears", PyvtkPVCacheKeeper_GetCacheClears, METH_VARARGS,
   "V.GetCacheClears() -> int\nC++: static int GetCacheClears()\n\nThese methods are used for testing. Using this global state we\ncan add checks to ensure that cache was used or not used for a\nparticular sequence of actions.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVCacheKeeper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVCacheKeeper", // tp_name
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
  PyvtkPVCacheKeeper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVCacheKeeper_StaticNew()
{
  return vtkPVCacheKeeper::New();
}

PyObject *PyvtkPVCacheKeeper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVCacheKeeper_Type, PyvtkPVCacheKeeper_Methods,
    "vtkPVCacheKeeper",
 &PyvtkPVCacheKeeper_StaticNew);

  PyTypeObject *pytype = &PyvtkPVCacheKeeper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVCacheKeeper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVCacheKeeper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVCacheKeeper", o) != 0)
  {
    Py_DECREF(o);
  }

}

