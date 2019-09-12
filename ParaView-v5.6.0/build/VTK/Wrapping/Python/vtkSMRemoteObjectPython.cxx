// python wrapper for vtkSMRemoteObject
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
#include "vtkSMRemoteObject.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMRemoteObject(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMRemoteObject_ClassNew(); }

#ifndef DECLARED_PyvtkSMSessionObject_ClassNew
extern "C" { PyObject *PyvtkSMSessionObject_ClassNew(); }
#define DECLARED_PyvtkSMSessionObject_ClassNew
#endif

static const char *PyvtkSMRemoteObject_Doc =
  "vtkSMRemoteObject - baseclass for all proxy-objects that have counter\nparts on server as well as client processes.\n\n"
  "Superclass: vtkSMSessionObject\n\n"
  "Abstract class involved in ServerManager class hierarchy that has a\n"
  "corresponding SIObject which can be local or remote.\n\n";


static PyObject *
PyvtkSMRemoteObject_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMRemoteObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRemoteObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMRemoteObject *tempr = vtkSMRemoteObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMRemoteObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRemoteObject::NewInstance());

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
PyvtkSMRemoteObject_SetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLocation(temp0);
    }
    else
    {
      op->vtkSMRemoteObject::SetLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_GetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLocation() :
      op->vtkSMRemoteObject::GetLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    if (ap.IsBound())
    {
      op->SetSession(temp0);
    }
    else
    {
      op->vtkSMRemoteObject::SetSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_GetGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalID() :
      op->vtkSMRemoteObject::GetGlobalID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_GetGlobalIDAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIDAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGlobalIDAsString() :
      op->vtkSMRemoteObject::GetGlobalIDAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_HasGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasGlobalID() :
      op->vtkSMRemoteObject::HasGlobalID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_PrototypeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrototypeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrototypeOn();
    }
    else
    {
      op->vtkSMRemoteObject::PrototypeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_PrototypeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrototypeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrototypeOff();
    }
    else
    {
      op->vtkSMRemoteObject::PrototypeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_IsPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsPrototype() :
      op->vtkSMRemoteObject::IsPrototype());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_SetPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrototype(temp0);
    }
    else
    {
      op->vtkSMRemoteObject::SetPrototype(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMRemoteObject::GetFullState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  vtkSMMessage *temp0 = nullptr;
  vtkSMProxyLocator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
  {
    if (ap.IsBound())
    {
      op->LoadState(temp0, temp1);
    }
    else
    {
      op->vtkSMRemoteObject::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_EnableLocalPushOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableLocalPushOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableLocalPushOnly();
    }
    else
    {
      op->vtkSMRemoteObject::EnableLocalPushOnly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_DisableLocalPushOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableLocalPushOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableLocalPushOnly();
    }
    else
    {
      op->vtkSMRemoteObject::DisableLocalPushOnly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRemoteObject_IsLocalPushOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLocalPushOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRemoteObject *op = static_cast<vtkSMRemoteObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsLocalPushOnly() :
      op->vtkSMRemoteObject::IsLocalPushOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMRemoteObject_Methods[] = {
  {"IsTypeOf", PyvtkSMRemoteObject_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMRemoteObject_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMRemoteObject_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMRemoteObject\nC++: static vtkSMRemoteObject *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMRemoteObject_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMRemoteObject\nC++: vtkSMRemoteObject *NewInstance()\n\n"},
  {"SetLocation", PyvtkSMRemoteObject_SetLocation, METH_VARARGS,
   "V.SetLocation(int)\nC++: virtual void SetLocation(vtkTypeUInt32 _arg)\n\nGet/Set the location where the underlying VTK-objects are\ncreated. The value can be constructed by or-ing\nvtkSMSession::ServerFlags\n"},
  {"GetLocation", PyvtkSMRemoteObject_GetLocation, METH_VARARGS,
   "V.GetLocation() -> int\nC++: virtual vtkTypeUInt32 GetLocation()\n\nGet/Set the location where the underlying VTK-objects are\ncreated. The value can be constructed by or-ing\nvtkSMSession::ServerFlags\n"},
  {"SetSession", PyvtkSMRemoteObject_SetSession, METH_VARARGS,
   "V.SetSession(vtkSMSession)\nC++: void SetSession(vtkSMSession *) override;\n\nOverride the SetSession so if the object already have an ID we\nautomatically register it to the associated session\n"},
  {"GetGlobalID", PyvtkSMRemoteObject_GetGlobalID, METH_VARARGS,
   "V.GetGlobalID() -> int\nC++: virtual vtkTypeUInt32 GetGlobalID()\n\nGet the global unique id for this object. If none is set and the\nsession is valid, a new global id will be assigned automatically.\n"},
  {"GetGlobalIDAsString", PyvtkSMRemoteObject_GetGlobalIDAsString, METH_VARARGS,
   "V.GetGlobalIDAsString() -> string\nC++: const char *GetGlobalIDAsString()\n\nGet the global unique id for this object. If none is set and the\nsession is valid, a new global id will be assigned automatically.\n"},
  {"HasGlobalID", PyvtkSMRemoteObject_HasGlobalID, METH_VARARGS,
   "V.HasGlobalID() -> bool\nC++: bool HasGlobalID()\n\nAllow the user to test if the RemoteObject has already a GlobalID\nwithout assigning a new one to it.\n"},
  {"PrototypeOn", PyvtkSMRemoteObject_PrototypeOn, METH_VARARGS,
   "V.PrototypeOn()\nC++: virtual void PrototypeOn()\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable.\n"},
  {"PrototypeOff", PyvtkSMRemoteObject_PrototypeOff, METH_VARARGS,
   "V.PrototypeOff()\nC++: virtual void PrototypeOff()\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable.\n"},
  {"IsPrototype", PyvtkSMRemoteObject_IsPrototype, METH_VARARGS,
   "V.IsPrototype() -> bool\nC++: bool IsPrototype()\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable.\n"},
  {"SetPrototype", PyvtkSMRemoteObject_SetPrototype, METH_VARARGS,
   "V.SetPrototype(bool)\nC++: virtual void SetPrototype(bool _arg)\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable.\n"},
  {"GetFullState", PyvtkSMRemoteObject_GetFullState, METH_VARARGS,
   "V.GetFullState() -> vtkSMMessage\nC++: virtual const vtkSMMessage *GetFullState()\n\nThis method return the full object state that can be used to\ncreate that object from scratch. This method will be used to fill\nthe undo stack. If not overridden this will return NULL.\n"},
  {"LoadState", PyvtkSMRemoteObject_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: virtual void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator)\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {"EnableLocalPushOnly", PyvtkSMRemoteObject_EnableLocalPushOnly, METH_VARARGS,
   "V.EnableLocalPushOnly()\nC++: virtual void EnableLocalPushOnly()\n\nAllow to switch off any push of state change to the server for\nthat particular object. This is used when we load a state based\non a server notification. In that particular case, the server is\nalready aware of that new state, so we keep those changes local.\n"},
  {"DisableLocalPushOnly", PyvtkSMRemoteObject_DisableLocalPushOnly, METH_VARARGS,
   "V.DisableLocalPushOnly()\nC++: virtual void DisableLocalPushOnly()\n\nEnable the given remote object to communicate its state normally\nto the server location.\n"},
  {"IsLocalPushOnly", PyvtkSMRemoteObject_IsLocalPushOnly, METH_VARARGS,
   "V.IsLocalPushOnly() -> bool\nC++: virtual bool IsLocalPushOnly()\n\nLet the session be aware that even if the Location is client\nonly, the message should not be send to the server for a general\nbroadcast\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMRemoteObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMRemoteObject", // tp_name
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
  PyvtkSMRemoteObject_Doc, // tp_doc
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

PyObject *PyvtkSMRemoteObject_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMRemoteObject_Type, PyvtkSMRemoteObject_Methods,
    "vtkSMRemoteObject",
 nullptr);

  PyTypeObject *pytype = &PyvtkSMRemoteObject_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMSessionObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMRemoteObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMRemoteObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMRemoteObject", o) != 0)
  {
    Py_DECREF(o);
  }

}

