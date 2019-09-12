// python wrapper for vtkCacheSizeKeeper
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
#include "vtkCacheSizeKeeper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCacheSizeKeeper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCacheSizeKeeper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCacheSizeKeeper_Doc =
  "vtkCacheSizeKeeper - keeps track of amount of memory consumed by\ncaches in vtkPVUpateSupressor objects.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCacheSizeKeeper keeps track of the amount of memory cached by\n"
  "several vtkPVUpdateSuppressor objects.\n\n";


static PyObject *
PyvtkCacheSizeKeeper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCacheSizeKeeper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheSizeKeeper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheSizeKeeper *op = static_cast<vtkCacheSizeKeeper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCacheSizeKeeper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheSizeKeeper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCacheSizeKeeper *tempr = vtkCacheSizeKeeper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheSizeKeeper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheSizeKeeper *op = static_cast<vtkCacheSizeKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCacheSizeKeeper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCacheSizeKeeper::NewInstance());

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
PyvtkCacheSizeKeeper_GetInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkCacheSizeKeeper *tempr = vtkCacheSizeKeeper::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheSizeKeeper_AddCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheSizeKeeper *op = static_cast<vtkCacheSizeKeeper *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddCacheSize(temp0);
    }
    else
    {
      op->vtkCacheSizeKeeper::AddCacheSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheSizeKeeper_FreeCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheSizeKeeper *op = static_cast<vtkCacheSizeKeeper *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->FreeCacheSize(temp0);
    }
    else
    {
      op->vtkCacheSizeKeeper::FreeCacheSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheSizeKeeper_GetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheSizeKeeper *op = static_cast<vtkCacheSizeKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetCacheSize() :
      op->vtkCacheSizeKeeper::GetCacheSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheSizeKeeper_GetCacheLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheSizeKeeper *op = static_cast<vtkCacheSizeKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetCacheLimit() :
      op->vtkCacheSizeKeeper::GetCacheLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheSizeKeeper_SetCacheLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheSizeKeeper *op = static_cast<vtkCacheSizeKeeper *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheLimit(temp0);
    }
    else
    {
      op->vtkCacheSizeKeeper::SetCacheLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCacheSizeKeeper_GetCacheFull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheFull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheSizeKeeper *op = static_cast<vtkCacheSizeKeeper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheFull() :
      op->vtkCacheSizeKeeper::GetCacheFull());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCacheSizeKeeper_SetCacheFull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheFull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCacheSizeKeeper *op = static_cast<vtkCacheSizeKeeper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheFull(temp0);
    }
    else
    {
      op->vtkCacheSizeKeeper::SetCacheFull(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCacheSizeKeeper_Methods[] = {
  {"IsTypeOf", PyvtkCacheSizeKeeper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCacheSizeKeeper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCacheSizeKeeper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCacheSizeKeeper\nC++: static vtkCacheSizeKeeper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCacheSizeKeeper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCacheSizeKeeper\nC++: vtkCacheSizeKeeper *NewInstance()\n\n"},
  {"GetInstance", PyvtkCacheSizeKeeper_GetInstance, METH_VARARGS,
   "V.GetInstance() -> vtkCacheSizeKeeper\nC++: static vtkCacheSizeKeeper *GetInstance()\n\nReturns the singleton.\n"},
  {"AddCacheSize", PyvtkCacheSizeKeeper_AddCacheSize, METH_VARARGS,
   "V.AddCacheSize(int)\nC++: void AddCacheSize(unsigned long kbytes)\n\nReport increase in cache size (in kbytes).\n"},
  {"FreeCacheSize", PyvtkCacheSizeKeeper_FreeCacheSize, METH_VARARGS,
   "V.FreeCacheSize(int)\nC++: void FreeCacheSize(unsigned long kbytes)\n\nReport decrease in cache size (in bytes).\n"},
  {"GetCacheSize", PyvtkCacheSizeKeeper_GetCacheSize, METH_VARARGS,
   "V.GetCacheSize() -> int\nC++: virtual unsigned long GetCacheSize()\n\nGet the size of cache reported to this keeper.\n"},
  {"GetCacheLimit", PyvtkCacheSizeKeeper_GetCacheLimit, METH_VARARGS,
   "V.GetCacheLimit() -> int\nC++: virtual unsigned long GetCacheLimit()\n\nGet/Set the cache size limit. One can set this separately on each\nprocesses. vtkPVView::Update ensures that the cache fullness\nstate is synchronized among all participating processes. (in KBs)\n"},
  {"SetCacheLimit", PyvtkCacheSizeKeeper_SetCacheLimit, METH_VARARGS,
   "V.SetCacheLimit(int)\nC++: virtual void SetCacheLimit(unsigned long _arg)\n\nGet/Set the cache size limit. One can set this separately on each\nprocesses. vtkPVView::Update ensures that the cache fullness\nstate is synchronized among all participating processes. (in KBs)\n"},
  {"GetCacheFull", PyvtkCacheSizeKeeper_GetCacheFull, METH_VARARGS,
   "V.GetCacheFull() -> int\nC++: virtual int GetCacheFull()\n\nGet/Set if the cache is full.\n"},
  {"SetCacheFull", PyvtkCacheSizeKeeper_SetCacheFull, METH_VARARGS,
   "V.SetCacheFull(int)\nC++: virtual void SetCacheFull(int _arg)\n\nGet/Set if the cache is full.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCacheSizeKeeper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkCacheSizeKeeper", // tp_name
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
  PyvtkCacheSizeKeeper_Doc, // tp_doc
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

PyObject *PyvtkCacheSizeKeeper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCacheSizeKeeper_Type, PyvtkCacheSizeKeeper_Methods,
    "vtkCacheSizeKeeper",
 nullptr);

  PyTypeObject *pytype = &PyvtkCacheSizeKeeper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCacheSizeKeeper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCacheSizeKeeper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCacheSizeKeeper", o) != 0)
  {
    Py_DECREF(o);
  }

}

