// python wrapper for vtkThreadMessager
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
#include "vtkThreadMessager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkThreadMessager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkThreadMessager_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkThreadMessager_Doc =
  "vtkThreadMessager - A class for performing inter-thread messaging\n\n"
  "Superclass: vtkObject\n\n"
  "vtkThreadMessager is a class that provides support for messaging\n"
  "between threads multithreaded using pthreads or Windows messaging.\n\n";


static PyObject *
PyvtkThreadMessager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkThreadMessager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadMessager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThreadMessager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadMessager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkThreadMessager *tempr = vtkThreadMessager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadMessager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkThreadMessager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThreadMessager::NewInstance());

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
PyvtkThreadMessager_WaitForMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WaitForMessage();
    }
    else
    {
      op->vtkThreadMessager::WaitForMessage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadMessager_SendWakeMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendWakeMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SendWakeMessage();
    }
    else
    {
      op->vtkThreadMessager::SendWakeMessage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadMessager_EnableWaitForReceiver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableWaitForReceiver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableWaitForReceiver();
    }
    else
    {
      op->vtkThreadMessager::EnableWaitForReceiver();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadMessager_DisableWaitForReceiver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableWaitForReceiver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableWaitForReceiver();
    }
    else
    {
      op->vtkThreadMessager::DisableWaitForReceiver();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadMessager_WaitForReceiver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForReceiver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadMessager *op = static_cast<vtkThreadMessager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WaitForReceiver();
    }
    else
    {
      op->vtkThreadMessager::WaitForReceiver();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkThreadMessager_Methods[] = {
  {"IsTypeOf", PyvtkThreadMessager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkThreadMessager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkThreadMessager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkThreadMessager\nC++: static vtkThreadMessager *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkThreadMessager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkThreadMessager\nC++: vtkThreadMessager *NewInstance()\n\n"},
  {"WaitForMessage", PyvtkThreadMessager_WaitForMessage, METH_VARARGS,
   "V.WaitForMessage()\nC++: void WaitForMessage()\n\nWait (block, non-busy) until another thread sends a message.\n"},
  {"SendWakeMessage", PyvtkThreadMessager_SendWakeMessage, METH_VARARGS,
   "V.SendWakeMessage()\nC++: void SendWakeMessage()\n\nSend a message to all threads who are waiting via\nWaitForMessage().\n"},
  {"EnableWaitForReceiver", PyvtkThreadMessager_EnableWaitForReceiver, METH_VARARGS,
   "V.EnableWaitForReceiver()\nC++: void EnableWaitForReceiver()\n\npthreads only. If the wait is enabled, the thread who is to call\nWaitForMessage() will block until a receiver thread is ready to\nreceive.\n"},
  {"DisableWaitForReceiver", PyvtkThreadMessager_DisableWaitForReceiver, METH_VARARGS,
   "V.DisableWaitForReceiver()\nC++: void DisableWaitForReceiver()\n\npthreads only. If the wait is enabled, the thread who is to call\nWaitForMessage() will block until a receiver thread is ready to\nreceive.\n"},
  {"WaitForReceiver", PyvtkThreadMessager_WaitForReceiver, METH_VARARGS,
   "V.WaitForReceiver()\nC++: void WaitForReceiver()\n\npthreads only. If wait is enable, this will block until one\nthread is ready to receive a message.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkThreadMessager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonSystemPython.vtkThreadMessager", // tp_name
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
  PyvtkThreadMessager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkThreadMessager_StaticNew()
{
  return vtkThreadMessager::New();
}

PyObject *PyvtkThreadMessager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkThreadMessager_Type, PyvtkThreadMessager_Methods,
    "vtkThreadMessager",
 &PyvtkThreadMessager_StaticNew);

  PyTypeObject *pytype = &PyvtkThreadMessager_Type;

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

void PyVTKAddFile_vtkThreadMessager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkThreadMessager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkThreadMessager", o) != 0)
  {
    Py_DECREF(o);
  }

}

