// python wrapper for vtkSIObject
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
#include "vtkSIObject.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSIObject(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSIObject_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSIObject_Doc =
  "vtkSIObject - Object that is managed by vtkPVSessionCore which wrap\nconcrete class such as the vtk ones.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkSIObject_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSIObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSIObject *tempr = vtkSIObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIObject::NewInstance());

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
PyvtkSIObject_AboutToDelete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AboutToDelete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AboutToDelete();
    }
    else
    {
      op->vtkSIObject::AboutToDelete();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIObject_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  vtkPVSessionCore *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVSessionCore"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkSIObject::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIObject_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->Push(temp0);
    }
    else
    {
      op->vtkSIObject::Push(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIObject_Pull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->Pull(temp0);
    }
    else
    {
      op->vtkSIObject::Pull(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIObject_GetInterpreter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpreter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClientServerInterpreter *tempr = (ap.IsBound() ?
      op->GetInterpreter() :
      op->vtkSIObject::GetInterpreter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIObject_GetSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSIObject *tempr = (ap.IsBound() ?
      op->GetSIObject(temp0) :
      op->vtkSIObject::GetSIObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIObject_GetRemoteObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetRemoteObject(temp0) :
      op->vtkSIObject::GetRemoteObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIObject_SetGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlobalID(temp0);
    }
    else
    {
      op->vtkSIObject::SetGlobalID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIObject_GetGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIObject *op = static_cast<vtkSIObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalID() :
      op->vtkSIObject::GetGlobalID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSIObject_Methods[] = {
  {"IsTypeOf", PyvtkSIObject_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSIObject_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSIObject_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSIObject\nC++: static vtkSIObject *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSIObject_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSIObject\nC++: vtkSIObject *NewInstance()\n\n"},
  {"AboutToDelete", PyvtkSIObject_AboutToDelete, METH_VARARGS,
   "V.AboutToDelete()\nC++: virtual void AboutToDelete()\n\nThis method is called before the deletion of the SIObject.\nBasically this is used to remove all dependency with other\nSIObject so after a first pass on all SIObject with a\nAboutToDelete() we can simply delete the remaining SIObjects.\n"},
  {"Initialize", PyvtkSIObject_Initialize, METH_VARARGS,
   "V.Initialize(vtkPVSessionCore)\nC++: virtual void Initialize(vtkPVSessionCore *session)\n\nInitializes the instance. Session is the session to which this\ninstance belongs to. During initialization, the SIObject\nbasically obtains ivars for necessary components.\n"},
  {"Push", PyvtkSIObject_Push, METH_VARARGS,
   "V.Push(vtkSMMessage)\nC++: virtual void Push(vtkSMMessage *msg)\n\nPush a new state to the underneath implementation The provided\nimplementation just store the message and return it at the Pull\none.\n"},
  {"Pull", PyvtkSIObject_Pull, METH_VARARGS,
   "V.Pull(vtkSMMessage)\nC++: virtual void Pull(vtkSMMessage *msg)\n\nPull the current state of the underneath implementation The\nprovided implementation update the given message with the one\nthat has been previously pushed\n"},
  {"GetInterpreter", PyvtkSIObject_GetInterpreter, METH_VARARGS,
   "V.GetInterpreter() -> vtkClientServerInterpreter\nC++: vtkClientServerInterpreter *GetInterpreter()\n\nProvides access to the Interpreter.\n"},
  {"GetSIObject", PyvtkSIObject_GetSIObject, METH_VARARGS,
   "V.GetSIObject(int) -> vtkSIObject\nC++: vtkSIObject *GetSIObject(vtkTypeUInt32 globalid)\n\nConvenience method to obtain a vtkSIObject subclass given its\nglobal id.\n"},
  {"GetRemoteObject", PyvtkSIObject_GetRemoteObject, METH_VARARGS,
   "V.GetRemoteObject(int) -> vtkObject\nC++: vtkObject *GetRemoteObject(vtkTypeUInt32 globalid)\n\nConvenience method to obtain a vtkObject subclass given its\nglobal id.\n"},
  {"SetGlobalID", PyvtkSIObject_SetGlobalID, METH_VARARGS,
   "V.SetGlobalID(int)\nC++: virtual void SetGlobalID(vtkTypeUInt32 _arg)\n\nGet/Set the global id for this object.\n"},
  {"GetGlobalID", PyvtkSIObject_GetGlobalID, METH_VARARGS,
   "V.GetGlobalID() -> int\nC++: virtual vtkTypeUInt32 GetGlobalID()\n\nGet/Set the global id for this object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSIObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSIObject", // tp_name
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
  PyvtkSIObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSIObject_StaticNew()
{
  return vtkSIObject::New();
}

PyObject *PyvtkSIObject_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSIObject_Type, PyvtkSIObject_Methods,
    "vtkSIObject",
 &PyvtkSIObject_StaticNew);

  PyTypeObject *pytype = &PyvtkSIObject_Type;

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

void PyVTKAddFile_vtkSIObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSIObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSIObject", o) != 0)
  {
    Py_DECREF(o);
  }

}

