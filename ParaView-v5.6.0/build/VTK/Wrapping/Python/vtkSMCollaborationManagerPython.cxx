// python wrapper for vtkSMCollaborationManager
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
#include "vtkSMCollaborationManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMCollaborationManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMCollaborationManager_ClassNew(); }

#ifndef DECLARED_PyvtkSMRemoteObject_ClassNew
extern "C" { PyObject *PyvtkSMRemoteObject_ClassNew(); }
#define DECLARED_PyvtkSMRemoteObject_ClassNew
#endif

static const char *PyvtkSMCollaborationManager_Doc =
  "vtkSMCollaborationManager - Class used to broadcast message from one\nclient to the others.\n\n"
  "Superclass: vtkSMRemoteObject\n\n"
  "This class allow to trigger protobuf messages on all the clients that\n"
  "are connected to the server. Those clients can attach listeners and\n"
  "handle those message in the way they want. The message sender do not\n"
  "receive its message again, only other clients do.\n\n"
  "To listen collaboration notification messages you should have a code\n"
  "that look like that:\n\n"
  "collaborationManager->AddObserver(\n"
  "         vtkSMCollaborationManager::CollaborationNotification,\n"
  "         callback);\n\n"
  "void callback(vtkObject* src, unsigned long event, void* method,\n"
  "void* data) {\n"
  "  vtkSMMessage* msg = reinterpret_cast<vtkSMMessage*>(data);\n"
  "  => do what you want with the message }\n\n";

static PyTypeObject PyvtkSMCollaborationManager_EventType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMCollaborationManager.EventType", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSMCollaborationManager_EventType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMCollaborationManager_EventType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMCollaborationManager_EventType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMCollaborationManager_GetReservedGlobalID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetReservedGlobalID");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    unsigned int tempr = vtkSMCollaborationManager::GetReservedGlobalID();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMCollaborationManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCollaborationManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMCollaborationManager *tempr = vtkSMCollaborationManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMCollaborationManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCollaborationManager::NewInstance());

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
PyvtkSMCollaborationManager_GetGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalID() :
      op->vtkSMCollaborationManager::GetGlobalID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

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
      op->vtkSMCollaborationManager::SetSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_PromoteToMaster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromoteToMaster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PromoteToMaster(temp0);
    }
    else
    {
      op->vtkSMCollaborationManager::PromoteToMaster(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_FollowUser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowUser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->FollowUser(temp0);
    }
    else
    {
      op->vtkSMCollaborationManager::FollowUser(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_GetFollowedUser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFollowedUser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFollowedUser() :
      op->vtkSMCollaborationManager::GetFollowedUser());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_IsMaster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMaster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMaster() :
      op->vtkSMCollaborationManager::IsMaster());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_GetMasterId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasterId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMasterId() :
      op->vtkSMCollaborationManager::GetMasterId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_GetDisableFurtherConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableFurtherConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDisableFurtherConnections() :
      op->vtkSMCollaborationManager::GetDisableFurtherConnections());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_GetUserId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUserId() :
      op->vtkSMCollaborationManager::GetUserId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMCollaborationManager_GetUserId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUserId(temp0) :
      op->vtkSMCollaborationManager::GetUserId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMCollaborationManager_GetUserId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMCollaborationManager_GetUserId_s1(self, args);
    case 1:
      return PyvtkSMCollaborationManager_GetUserId_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetUserId");
  return nullptr;
}



static PyObject *
PyvtkSMCollaborationManager_GetUserLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUserLabel(temp0) :
      op->vtkSMCollaborationManager::GetUserLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_SetUserLabel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUserLabel(temp0);
    }
    else
    {
      op->vtkSMCollaborationManager::SetUserLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMCollaborationManager_SetUserLabel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUserLabel(temp0, temp1);
    }
    else
    {
      op->vtkSMCollaborationManager::SetUserLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMCollaborationManager_SetUserLabel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMCollaborationManager_SetUserLabel_s1(self, args);
    case 2:
      return PyvtkSMCollaborationManager_SetUserLabel_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUserLabel");
  return nullptr;
}



static PyObject *
PyvtkSMCollaborationManager_GetNumberOfConnectedClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConnectedClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfConnectedClients() :
      op->vtkSMCollaborationManager::GetNumberOfConnectedClients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_UpdateUserInformations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateUserInformations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateUserInformations();
    }
    else
    {
      op->vtkSMCollaborationManager::UpdateUserInformations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_GetServerConnectID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerConnectID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetServerConnectID() :
      op->vtkSMCollaborationManager::GetServerConnectID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_GetConnectID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConnectID() :
      op->vtkSMCollaborationManager::GetConnectID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_SendToOtherClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendToOtherClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->SendToOtherClients(temp0);
    }
    else
    {
      op->vtkSMCollaborationManager::SendToOtherClients(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMCollaborationManager::GetFullState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

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
      op->vtkSMCollaborationManager::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_DisableFurtherConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableFurtherConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisableFurtherConnections(temp0);
    }
    else
    {
      op->vtkSMCollaborationManager::DisableFurtherConnections(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCollaborationManager_SetConnectID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConnectID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCollaborationManager *op = static_cast<vtkSMCollaborationManager *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConnectID(temp0);
    }
    else
    {
      op->vtkSMCollaborationManager::SetConnectID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMCollaborationManager_Methods[] = {
  {"GetReservedGlobalID", PyvtkSMCollaborationManager_GetReservedGlobalID, METH_VARARGS,
   "V.GetReservedGlobalID() -> int\nC++: static vtkTypeUInt32 GetReservedGlobalID()\n\nReturn the GlobalID that should be used to refer to the\nTimeKeeper\n"},
  {"IsTypeOf", PyvtkSMCollaborationManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMCollaborationManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMCollaborationManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMCollaborationManager\nC++: static vtkSMCollaborationManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMCollaborationManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMCollaborationManager\nC++: vtkSMCollaborationManager *NewInstance()\n\n"},
  {"GetGlobalID", PyvtkSMCollaborationManager_GetGlobalID, METH_VARARGS,
   "V.GetGlobalID() -> int\nC++: vtkTypeUInt32 GetGlobalID() override;\n\nGet the global unique id for this object. If none is set and the\nsession is valid, a new global id will be assigned automatically.\n"},
  {"SetSession", PyvtkSMCollaborationManager_SetSession, METH_VARARGS,
   "V.SetSession(vtkSMSession)\nC++: void SetSession(vtkSMSession *) override;\n\nOverride the session setting in order to update only once our\ncurrent local user id\n"},
  {"PromoteToMaster", PyvtkSMCollaborationManager_PromoteToMaster, METH_VARARGS,
   "V.PromoteToMaster(int)\nC++: virtual void PromoteToMaster(int clientId)\n\nThis method is used promote a new Master user. Master/Slave user\ndoesn't buy you anything here. It just provide you the\ninformation, and it is your call to prevent slaves users to do or\nachieve some actions inside your client. When you call that\nmethod a SMMessage is also propagated to the other client so they\ncould follow who is the Master without fetching the information\nagain.\n"},
  {"FollowUser", PyvtkSMCollaborationManager_FollowUser, METH_VARARGS,
   "V.FollowUser(int)\nC++: virtual void FollowUser(int clientId)\n\nShare the decision that user should follow that given user if\nmaster or follow someone else on your own\n"},
  {"GetFollowedUser", PyvtkSMCollaborationManager_GetFollowedUser, METH_VARARGS,
   "V.GetFollowedUser() -> int\nC++: int GetFollowedUser()\n\nReturn the local followed user\n"},
  {"IsMaster", PyvtkSMCollaborationManager_IsMaster, METH_VARARGS,
   "V.IsMaster() -> bool\nC++: virtual bool IsMaster()\n\nReturn true if the current client is the master\n"},
  {"GetMasterId", PyvtkSMCollaborationManager_GetMasterId, METH_VARARGS,
   "V.GetMasterId() -> int\nC++: virtual int GetMasterId()\n\nReturn the userId of the current master\n"},
  {"GetDisableFurtherConnections", PyvtkSMCollaborationManager_GetDisableFurtherConnections, METH_VARARGS,
   "V.GetDisableFurtherConnections() -> bool\nC++: bool GetDisableFurtherConnections()\n\nReturn true if further connections are disabled.\n"},
  {"GetUserId", PyvtkSMCollaborationManager_GetUserId, METH_VARARGS,
   "V.GetUserId() -> int\nC++: virtual int GetUserId()\nV.GetUserId(int) -> int\nC++: virtual int GetUserId(int index)\n\nReturn the id of the current client\n"},
  {"GetUserLabel", PyvtkSMCollaborationManager_GetUserLabel, METH_VARARGS,
   "V.GetUserLabel(int) -> string\nC++: virtual const char *GetUserLabel(int userID)\n\nreturn the name of the provided userId\n"},
  {"SetUserLabel", PyvtkSMCollaborationManager_SetUserLabel, METH_VARARGS,
   "V.SetUserLabel(string)\nC++: virtual void SetUserLabel(const char *userName)\nV.SetUserLabel(int, string)\nC++: virtual void SetUserLabel(int userId, const char *userName)\n\nUpdate ou local user name\n"},
  {"GetNumberOfConnectedClients", PyvtkSMCollaborationManager_GetNumberOfConnectedClients, METH_VARARGS,
   "V.GetNumberOfConnectedClients() -> int\nC++: virtual int GetNumberOfConnectedClients()\n\nreturn the number of currently connected clients. This size is\nused to bound the GetUserId() method.\n"},
  {"UpdateUserInformations", PyvtkSMCollaborationManager_UpdateUserInformations, METH_VARARGS,
   "V.UpdateUserInformations()\nC++: void UpdateUserInformations()\n\nRequest an update of the user list from the server. (A pull\nrequest is done)\n"},
  {"GetServerConnectID", PyvtkSMCollaborationManager_GetServerConnectID, METH_VARARGS,
   "V.GetServerConnectID() -> int\nC++: int GetServerConnectID()\n\nReturn the server connect id if this is the master. Else return\n-1.\n"},
  {"GetConnectID", PyvtkSMCollaborationManager_GetConnectID, METH_VARARGS,
   "V.GetConnectID() -> int\nC++: int GetConnectID()\n\nReturn the client connect id.\n"},
  {"SendToOtherClients", PyvtkSMCollaborationManager_SendToOtherClients, METH_VARARGS,
   "V.SendToOtherClients(vtkSMMessage)\nC++: void SendToOtherClients(vtkSMMessage *msg)\n\nSend message to other clients which will trigger Observer\n"},
  {"GetFullState", PyvtkSMCollaborationManager_GetFullState, METH_VARARGS,
   "V.GetFullState() -> vtkSMMessage\nC++: const vtkSMMessage *GetFullState() override;\n\nThis method return the state of the connected clients\n"},
  {"LoadState", PyvtkSMCollaborationManager_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator) override;\n\nThis method is used to either load its internal connected clients\ninformation or to forward messages across clients\n"},
  {"DisableFurtherConnections", PyvtkSMCollaborationManager_DisableFurtherConnections, METH_VARARGS,
   "V.DisableFurtherConnections(bool)\nC++: void DisableFurtherConnections(bool disable)\n\nEnable or disable further connections to the server. Already\nconnected clients stay connected.\n"},
  {"SetConnectID", PyvtkSMCollaborationManager_SetConnectID, METH_VARARGS,
   "V.SetConnectID(int)\nC++: void SetConnectID(int connectID)\n\nChange the connect-id. Already connected clients stay connected.\n@param connectID the new connect-id for the server.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMCollaborationManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMCollaborationManager", // tp_name
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
  PyvtkSMCollaborationManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMCollaborationManager_StaticNew()
{
  return vtkSMCollaborationManager::New();
}

PyObject *PyvtkSMCollaborationManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMCollaborationManager_Type, PyvtkSMCollaborationManager_Methods,
    "vtkSMCollaborationManager",
 &PyvtkSMCollaborationManager_StaticNew);

  PyTypeObject *pytype = &PyvtkSMCollaborationManager_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMRemoteObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMCollaborationManager_EventType_Type);
  PyvtkSMCollaborationManager_EventType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMCollaborationManager_EventType_Type);

  o = (PyObject *)&PyvtkSMCollaborationManager_EventType_Type;
  if (PyDict_SetItemString(d, "EventType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkSMCollaborationManager::EventType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "CollaborationNotification", vtkSMCollaborationManager::CollaborationNotification },
        { "UpdateUserName", vtkSMCollaborationManager::UpdateUserName },
        { "UpdateUserList", vtkSMCollaborationManager::UpdateUserList },
        { "UpdateMasterUser", vtkSMCollaborationManager::UpdateMasterUser },
        { "FollowUserCamera", vtkSMCollaborationManager::FollowUserCamera },
        { "CameraChanged", vtkSMCollaborationManager::CameraChanged },
      };

    o = PyvtkSMCollaborationManager_EventType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMCollaborationManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMCollaborationManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMCollaborationManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

