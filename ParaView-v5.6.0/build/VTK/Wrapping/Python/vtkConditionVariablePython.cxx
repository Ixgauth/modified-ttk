// python wrapper for vtkConditionVariable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMutexLock.h"
#include "vtkIndent.h"
#include "vtkConditionVariable.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConditionVariable(PyObject *); }

static const char *PyvtkSimpleConditionVariable_Doc =
  "vtkSimpleConditionVariable - no description provided.\n\n"

  "vtkSimpleConditionVariable()\n";


static PyObject *
PyvtkSimpleConditionVariable_Signal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Signal");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSimpleConditionVariable *op = static_cast<vtkSimpleConditionVariable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Signal();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleConditionVariable_Broadcast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSimpleConditionVariable *op = static_cast<vtkSimpleConditionVariable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Broadcast();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleConditionVariable_Wait(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Wait");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSimpleConditionVariable *op = static_cast<vtkSimpleConditionVariable *>(vp);

  vtkSimpleMutexLock *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkSimpleMutexLock"))
  {
    int tempr = op->Wait(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSimpleConditionVariable_Methods[] = {
  {"Signal", PyvtkSimpleConditionVariable_Signal, METH_VARARGS,
   "V.Signal()\nC++: void Signal()\n\nWake one thread waiting for the condition to change.\n"},
  {"Broadcast", PyvtkSimpleConditionVariable_Broadcast, METH_VARARGS,
   "V.Broadcast()\nC++: void Broadcast()\n\nWake all threads waiting for the condition to change.\n"},
  {"Wait", PyvtkSimpleConditionVariable_Wait, METH_VARARGS,
   "V.Wait(vtkSimpleMutexLock) -> int\nC++: int Wait(vtkSimpleMutexLock &mutex)\n\nWait for the condition to change. Upon entry, the mutex must be\nlocked and the lock held by the calling thread. Upon exit, the\nmutex will be locked and held by the calling thread. Between\nentry and exit, the mutex will be unlocked and may be held by\nother threads.\n\n* @param mutex The mutex that should be locked on entry and will\n  be locked on exit (but not in between)\n* @retval Normally, this function returns 0. Should a thread be\n  interrupted by a signal, a non-zero value may be returned.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkSimpleConditionVariable_vtkSimpleConditionVariable(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSimpleConditionVariable");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSimpleConditionVariable *op = new vtkSimpleConditionVariable();

    result = PyVTKSpecialObject_New("vtkSimpleConditionVariable", op);
  }

  return result;
}

static PyMethodDef PyvtkSimpleConditionVariable_vtkSimpleConditionVariable_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSimpleConditionVariable_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkSimpleConditionVariable_vtkSimpleConditionVariable(nullptr, args);
}

static void PyvtkSimpleConditionVariable_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkSimpleConditionVariable *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkSimpleConditionVariable_Hash(PyObject *self)
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

static PyTypeObject PyvtkSimpleConditionVariable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSimpleConditionVariable", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSimpleConditionVariable_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkSimpleConditionVariable_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkSimpleConditionVariable_Doc, // tp_doc
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
  PyvtkSimpleConditionVariable_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSimpleConditionVariable_TypeNew(); }

PyObject *PyvtkSimpleConditionVariable_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkSimpleConditionVariable_Type,
    PyvtkSimpleConditionVariable_Methods,
    PyvtkSimpleConditionVariable_vtkSimpleConditionVariable_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkSimpleConditionVariable_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkConditionVariable_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkConditionVariable_Doc =
  "vtkConditionVariable - mutual exclusion locking class\n\n"
  "Superclass: vtkObject\n\n"
  "vtkConditionVariable allows the locking of variables which are\n"
  "accessed through different threads.  This header file also defines\n"
  "vtkSimpleConditionVariable which is not a subclass of vtkObject.\n\n"
  "The win32 implementation is based on notes provided by Douglas C.\n"
  "Schmidt and Irfan Pyarali, Department of Computer Science, Washington\n"
  "University, St. Louis, Missouri.\n"
  "http://www.cs.wustl.edu/~schmidt/win32-cv-1.html\n\n";


static PyObject *
PyvtkConditionVariable_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConditionVariable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConditionVariable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConditionVariable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConditionVariable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConditionVariable *tempr = vtkConditionVariable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConditionVariable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConditionVariable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConditionVariable::NewInstance());

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
PyvtkConditionVariable_Signal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Signal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Signal();
    }
    else
    {
      op->vtkConditionVariable::Signal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConditionVariable_Broadcast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Broadcast();
    }
    else
    {
      op->vtkConditionVariable::Broadcast();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConditionVariable_Wait(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Wait");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConditionVariable *op = static_cast<vtkConditionVariable *>(vp);

  vtkMutexLock *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMutexLock"))
  {
    int tempr = (ap.IsBound() ?
      op->Wait(temp0) :
      op->vtkConditionVariable::Wait(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkConditionVariable_Methods[] = {
  {"IsTypeOf", PyvtkConditionVariable_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConditionVariable_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConditionVariable_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkConditionVariable\nC++: static vtkConditionVariable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConditionVariable_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkConditionVariable\nC++: vtkConditionVariable *NewInstance()\n\n"},
  {"Signal", PyvtkConditionVariable_Signal, METH_VARARGS,
   "V.Signal()\nC++: void Signal()\n\nWake one thread waiting for the condition to change.\n"},
  {"Broadcast", PyvtkConditionVariable_Broadcast, METH_VARARGS,
   "V.Broadcast()\nC++: void Broadcast()\n\nWake all threads waiting for the condition to change.\n"},
  {"Wait", PyvtkConditionVariable_Wait, METH_VARARGS,
   "V.Wait(vtkMutexLock) -> int\nC++: int Wait(vtkMutexLock *mutex)\n\nWait for the condition to change. Upon entry, the mutex must be\nlocked and the lock held by the calling thread. Upon exit, the\nmutex will be locked and held by the calling thread. Between\nentry and exit, the mutex will be unlocked and may be held by\nother threads.\n\n* @param mutex The mutex that should be locked on entry and will\n  be locked on exit (but not in between)\n* @retval Normally, this function returns 0. Should a thread be\n  interrupted by a signal, a non-zero value may be returned.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkConditionVariable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkConditionVariable", // tp_name
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
  PyvtkConditionVariable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConditionVariable_StaticNew()
{
  return vtkConditionVariable::New();
}

PyObject *PyvtkConditionVariable_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkConditionVariable_Type, PyvtkConditionVariable_Methods,
    "vtkConditionVariable",
 &PyvtkConditionVariable_StaticNew);

  PyTypeObject *pytype = &PyvtkConditionVariable_Type;

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

void PyVTKAddFile_vtkConditionVariable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSimpleConditionVariable_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkSimpleConditionVariable", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkConditionVariable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConditionVariable", o) != 0)
  {
    Py_DECREF(o);
  }

}

