// python wrapper for vtkMutexLock
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
#include "vtkMutexLock.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMutexLock(PyObject *); }

static const char *PyvtkSimpleMutexLock_Doc =
  "vtkSimpleMutexLock - no description provided.\n\n"

  "vtkSimpleMutexLock()\n";


static PyObject *
PyvtkSimpleMutexLock_Lock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Lock");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSimpleMutexLock *op = static_cast<vtkSimpleMutexLock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Lock();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleMutexLock_Unlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unlock");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSimpleMutexLock *op = static_cast<vtkSimpleMutexLock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Unlock();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSimpleMutexLock_Methods[] = {
  {"Lock", PyvtkSimpleMutexLock_Lock, METH_VARARGS,
   "V.Lock()\nC++: void Lock(void)\n\nLock the vtkMutexLock\n"},
  {"Unlock", PyvtkSimpleMutexLock_Unlock, METH_VARARGS,
   "V.Unlock()\nC++: void Unlock(void)\n\nUnlock the vtkMutexLock\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkSimpleMutexLock_vtkSimpleMutexLock(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSimpleMutexLock");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSimpleMutexLock *op = new vtkSimpleMutexLock();

    result = PyVTKSpecialObject_New("vtkSimpleMutexLock", op);
  }

  return result;
}

static PyMethodDef PyvtkSimpleMutexLock_vtkSimpleMutexLock_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSimpleMutexLock_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkSimpleMutexLock_vtkSimpleMutexLock(nullptr, args);
}

static void PyvtkSimpleMutexLock_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkSimpleMutexLock *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkSimpleMutexLock_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkSimpleMutexLock_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSimpleMutexLock", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSimpleMutexLock_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkSimpleMutexLock_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkSimpleMutexLock_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkSimpleMutexLock_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSimpleMutexLock_TypeNew(); }

PyObject *PyvtkSimpleMutexLock_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkSimpleMutexLock_Type,
    PyvtkSimpleMutexLock_Methods,
    PyvtkSimpleMutexLock_vtkSimpleMutexLock_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkSimpleMutexLock_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMutexLock_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkMutexLock_Doc =
  "vtkMutexLock - mutual exclusion locking class\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMutexLock allows the locking of variables which are accessed\n"
  "through different threads.  This header file also defines\n"
  "vtkSimpleMutexLock which is not a subclass of vtkObject.\n\n";


static PyObject *
PyvtkMutexLock_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMutexLock::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutexLock_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMutexLock::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutexLock_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMutexLock *tempr = vtkMutexLock::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutexLock_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMutexLock *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMutexLock::NewInstance());

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
PyvtkMutexLock_Lock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Lock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Lock();
    }
    else
    {
      op->vtkMutexLock::Lock();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMutexLock_Unlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutexLock *op = static_cast<vtkMutexLock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Unlock();
    }
    else
    {
      op->vtkMutexLock::Unlock();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMutexLock_Methods[] = {
  {"IsTypeOf", PyvtkMutexLock_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMutexLock_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMutexLock_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMutexLock\nC++: static vtkMutexLock *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMutexLock_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMutexLock\nC++: vtkMutexLock *NewInstance()\n\n"},
  {"Lock", PyvtkMutexLock_Lock, METH_VARARGS,
   "V.Lock()\nC++: void Lock(void)\n\nLock the vtkMutexLock\n"},
  {"Unlock", PyvtkMutexLock_Unlock, METH_VARARGS,
   "V.Unlock()\nC++: void Unlock(void)\n\nUnlock the vtkMutexLock\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMutexLock_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkMutexLock", // tp_name
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
  PyvtkMutexLock_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMutexLock_StaticNew()
{
  return vtkMutexLock::New();
}

PyObject *PyvtkMutexLock_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMutexLock_Type, PyvtkMutexLock_Methods,
    "vtkMutexLock",
 &PyvtkMutexLock_StaticNew);

  PyTypeObject *pytype = &PyvtkMutexLock_Type;

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

void PyVTKAddFile_vtkMutexLock(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSimpleMutexLock_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkSimpleMutexLock", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkMutexLock_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMutexLock", o) != 0)
  {
    Py_DECREF(o);
  }

}

