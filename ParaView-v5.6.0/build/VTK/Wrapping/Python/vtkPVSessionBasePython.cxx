// python wrapper for vtkPVSessionBase
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
#include "vtkClientServerStream.h"
#include "vtkPVSessionBase.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVSessionBase(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVSessionBase_ClassNew(); }

#ifndef DECLARED_PyvtkPVSession_ClassNew
extern "C" { PyObject *PyvtkPVSession_ClassNew(); }
#define DECLARED_PyvtkPVSession_ClassNew
#endif

static const char *PyvtkPVSessionBase_Doc =
  "vtkPVSessionBase - Abstract class used to provide the main\nimplementation of the ParaView session methods for the following\nclasses: vtkSMSession,\n                                           vtkSMSessionClient,\n                                          \n\n"
  "Superclass: vtkPVSession\n\n"
  "vtkSMSessionServer\n\n";

static PyTypeObject PyvtkPVSessionBase_EventIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkPVSessionBase.EventIds", // tp_name
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

PyObject *PyvtkPVSessionBase_EventIds_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPVSessionBase_EventIds_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVSessionBase_EventIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPVSessionBase_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVSessionBase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSessionBase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVSessionBase *tempr = vtkPVSessionBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSessionBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSessionBase::NewInstance());

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
PyvtkPVSessionBase_GetServerInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVServerInformation *tempr = (ap.IsBound() ?
      op->GetServerInformation() :
      op->vtkPVSessionBase::GetServerInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetMPIMToNSocketConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMPIMToNSocketConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMPIMToNSocketConnection *tempr = (ap.IsBound() ?
      op->GetMPIMToNSocketConnection() :
      op->vtkPVSessionBase::GetMPIMToNSocketConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_PushState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->PushState(temp0);
    }
    else
    {
      op->vtkPVSessionBase::PushState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_PullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->PullState(temp0);
    }
    else
    {
      op->vtkPVSessionBase::PullState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_ExecuteStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  unsigned int temp0;
  vtkClientServerStream *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkClientServerStream") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->ExecuteStream(temp0, *temp1, temp2);
    }
    else
    {
      op->vtkPVSessionBase::ExecuteStream(temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetLastResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkClientServerStream *tempr = (ap.IsBound() ?
      &op->GetLastResult(temp0) :
      &op->vtkPVSessionBase::GetLastResult(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkClientServerStream");
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GatherInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  unsigned int temp0;
  vtkPVInformation *temp1 = nullptr;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVInformation") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->GatherInformation(temp0, temp1, temp2) :
      op->vtkPVSessionBase::GatherInformation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_NotifyAllClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotifyAllClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    op->NotifyAllClients(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_NotifyOtherClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotifyOtherClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    op->NotifyOtherClients(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetSessionCore(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionCore");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSessionCore *tempr = (ap.IsBound() ?
      op->GetSessionCore() :
      op->vtkPVSessionBase::GetSessionCore());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetProxyDefinitionManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinitionManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIProxyDefinitionManager *tempr = (ap.IsBound() ?
      op->GetProxyDefinitionManager() :
      op->vtkPVSessionBase::GetProxyDefinitionManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSIObject *tempr = (ap.IsBound() ?
      op->GetSIObject(temp0) :
      op->vtkPVSessionBase::GetSIObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_UnRegisterSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->UnRegisterSIObject(temp0);
    }
    else
    {
      op->vtkPVSessionBase::UnRegisterSIObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_RegisterSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->RegisterSIObject(temp0);
    }
    else
    {
      op->vtkPVSessionBase::RegisterSIObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetRemoteObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetRemoteObject(temp0) :
      op->vtkPVSessionBase::GetRemoteObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetAllRemoteObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllRemoteObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->GetAllRemoteObjects(temp0);
    }
    else
    {
      op->vtkPVSessionBase::GetAllRemoteObjects(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetNextGlobalUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextGlobalUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextGlobalUniqueIdentifier() :
      op->vtkPVSessionBase::GetNextGlobalUniqueIdentifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_GetNextChunkGlobalUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextChunkGlobalUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextChunkGlobalUniqueIdentifier(temp0) :
      op->vtkPVSessionBase::GetNextChunkGlobalUniqueIdentifier(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_IsProcessingRemoteNotification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsProcessingRemoteNotification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsProcessingRemoteNotification() :
      op->vtkPVSessionBase::IsProcessingRemoteNotification());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionBase_UseSessionCoreOf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSessionCoreOf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionBase *op = static_cast<vtkPVSessionBase *>(vp);

  vtkPVSessionBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVSessionBase"))
  {
    if (ap.IsBound())
    {
      op->UseSessionCoreOf(temp0);
    }
    else
    {
      op->vtkPVSessionBase::UseSessionCoreOf(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVSessionBase_Methods[] = {
  {"IsTypeOf", PyvtkPVSessionBase_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVSessionBase_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVSessionBase_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVSessionBase\nC++: static vtkPVSessionBase *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVSessionBase_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVSessionBase\nC++: vtkPVSessionBase *NewInstance()\n\n"},
  {"GetServerInformation", PyvtkPVSessionBase_GetServerInformation, METH_VARARGS,
   "V.GetServerInformation() -> vtkPVServerInformation\nC++: vtkPVServerInformation *GetServerInformation() override;\n\nvtkPVServerInformation is an information-object that provides\ninformation about the server processes. These include server-side\ncapabilities as well as server-side command line arguments e.g.\ntile-display parameters. Use this method to obtain the\nserver-side information. Overridden to provide support for\nnon-remote-server case. We simply read the local process\ninformation and return it.\n"},
  {"GetMPIMToNSocketConnection", PyvtkPVSessionBase_GetMPIMToNSocketConnection, METH_VARARGS,
   "V.GetMPIMToNSocketConnection() -> vtkMPIMToNSocketConnection\nC++: vtkMPIMToNSocketConnection *GetMPIMToNSocketConnection()\n    override;\n\nThis is socket connection, if any to communicate between the\ndata-server and render-server nodes. Forwarded for\nvtkPVSessionCore.\n"},
  {"PushState", PyvtkPVSessionBase_PushState, METH_VARARGS,
   "V.PushState(vtkSMMessage)\nC++: virtual void PushState(vtkSMMessage *msg)\n\nPush the state message.\n"},
  {"PullState", PyvtkPVSessionBase_PullState, METH_VARARGS,
   "V.PullState(vtkSMMessage)\nC++: virtual void PullState(vtkSMMessage *msg)\n\nPull the state message.\n"},
  {"ExecuteStream", PyvtkPVSessionBase_ExecuteStream, METH_VARARGS,
   "V.ExecuteStream(int, vtkClientServerStream, bool)\nC++: virtual void ExecuteStream(vtkTypeUInt32 location,\n    const vtkClientServerStream &stream, bool ignore_errors=false)\n\nExecute a command on the given processes. Use GetLastResult() to\nobtain the last result after the command stream is evaluated.\nOnce can setignore_errors to true, to ignore any interpreting\nerrors.\n"},
  {"GetLastResult", PyvtkPVSessionBase_GetLastResult, METH_VARARGS,
   "V.GetLastResult(int) -> vtkClientServerStream\nC++: virtual const vtkClientServerStream &GetLastResult(\n    vtkTypeUInt32 location)\n\nReturns the response of the ExecuteStream() call from the\nlocation. Note if location refers to multiple processes, then the\nreply is only fetched from the \"closest\" process.\n"},
  {"GatherInformation", PyvtkPVSessionBase_GatherInformation, METH_VARARGS,
   "V.GatherInformation(int, vtkPVInformation, int) -> bool\nC++: virtual bool GatherInformation(vtkTypeUInt32 location,\n    vtkPVInformation *information, vtkTypeUInt32 globalid)\n\nGather information about an object referred by the\nglobalid.location identifies the processes to gather the\ninformation from.\n"},
  {"NotifyAllClients", PyvtkPVSessionBase_NotifyAllClients, METH_VARARGS,
   "V.NotifyAllClients(vtkSMMessage)\nC++: virtual void NotifyAllClients(const vtkSMMessage *)\n\nSends the message to all clients.\n"},
  {"NotifyOtherClients", PyvtkPVSessionBase_NotifyOtherClients, METH_VARARGS,
   "V.NotifyOtherClients(vtkSMMessage)\nC++: virtual void NotifyOtherClients(const vtkSMMessage *)\n\nSends the message to all but the active client-session.\n"},
  {"GetSessionCore", PyvtkPVSessionBase_GetSessionCore, METH_VARARGS,
   "V.GetSessionCore() -> vtkPVSessionCore\nC++: virtual vtkPVSessionCore *GetSessionCore()\n\nProvides access to the session core.\n"},
  {"GetProxyDefinitionManager", PyvtkPVSessionBase_GetProxyDefinitionManager, METH_VARARGS,
   "V.GetProxyDefinitionManager() -> vtkSIProxyDefinitionManager\nC++: vtkSIProxyDefinitionManager *GetProxyDefinitionManager()\n\nGet the ProxyDefinitionManager.\n"},
  {"GetSIObject", PyvtkPVSessionBase_GetSIObject, METH_VARARGS,
   "V.GetSIObject(int) -> vtkSIObject\nC++: vtkSIObject *GetSIObject(vtkTypeUInt32 globalid)\n\nReturns a vtkSIObject or subclass given its global id, if any.\n"},
  {"UnRegisterSIObject", PyvtkPVSessionBase_UnRegisterSIObject, METH_VARARGS,
   "V.UnRegisterSIObject(vtkSMMessage)\nC++: virtual void UnRegisterSIObject(vtkSMMessage *msg)\n\nUnregister server side object. (SIObject)\n"},
  {"RegisterSIObject", PyvtkPVSessionBase_RegisterSIObject, METH_VARARGS,
   "V.RegisterSIObject(vtkSMMessage)\nC++: virtual void RegisterSIObject(vtkSMMessage *msg)\n\nRegister server side object. (SIObject)\n"},
  {"GetRemoteObject", PyvtkPVSessionBase_GetRemoteObject, METH_VARARGS,
   "V.GetRemoteObject(int) -> vtkObject\nC++: vtkObject *GetRemoteObject(vtkTypeUInt32 globalid)\n\nReturn a vtkSMRemoteObject given its global id if any otherwise\nreturn NULL;\n"},
  {"GetAllRemoteObjects", PyvtkPVSessionBase_GetAllRemoteObjects, METH_VARARGS,
   "V.GetAllRemoteObjects(vtkCollection)\nC++: virtual void GetAllRemoteObjects(vtkCollection *collection)\n\nAllow the user to fill its vtkCollection with all RemoteObject\nThis could be useful when you want to hold a reference to them to\nprevent any deletion across several method call.\n"},
  {"GetNextGlobalUniqueIdentifier", PyvtkPVSessionBase_GetNextGlobalUniqueIdentifier, METH_VARARGS,
   "V.GetNextGlobalUniqueIdentifier() -> int\nC++: virtual vtkTypeUInt32 GetNextGlobalUniqueIdentifier()\n\nProvides the next available identifier. This implementation works\nlocally. without any code distribution. To support the\ndistributed architecture the vtkSMSessionClient override those\nmethod to call them on the DATA_SERVER vtkPVSessionBase instance.\n"},
  {"GetNextChunkGlobalUniqueIdentifier", PyvtkPVSessionBase_GetNextChunkGlobalUniqueIdentifier, METH_VARARGS,
   "V.GetNextChunkGlobalUniqueIdentifier(int) -> int\nC++: virtual vtkTypeUInt32 GetNextChunkGlobalUniqueIdentifier(\n    vtkTypeUInt32 chunkSize)\n\nReturn the first Id of the requested chunk. 1 =\nReverveNextIdChunk(10); | Reserved ids [1,2,3,4,5,6,7,8,9,10] 11\n= ReverveNextIdChunk(10);| Reserved ids\n[11,12,13,14,15,16,17,18,19,20] b = a + 10;\n"},
  {"IsProcessingRemoteNotification", PyvtkPVSessionBase_IsProcessingRemoteNotification, METH_VARARGS,
   "V.IsProcessingRemoteNotification() -> bool\nC++: virtual bool IsProcessingRemoteNotification()\n\nThis property is used to discard ignore_synchronization proxy\nproperty when we load protobuf states. Therefore, if we load any\ncamera state while that property is true, this won't affect the\nproxy/property state at all. It will simply remain the same.\n"},
  {"UseSessionCoreOf", PyvtkPVSessionBase_UseSessionCoreOf, METH_VARARGS,
   "V.UseSessionCoreOf(vtkPVSessionBase)\nC++: virtual void UseSessionCoreOf(vtkPVSessionBase *other)\n\nUpdate internal session core in order to use the one used in\nanother session\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVSessionBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkPVSessionBase", // tp_name
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
  PyvtkPVSessionBase_Doc, // tp_doc
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

PyObject *PyvtkPVSessionBase_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVSessionBase_Type, PyvtkPVSessionBase_Methods,
    "vtkPVSessionBase",
 nullptr);

  PyTypeObject *pytype = &PyvtkPVSessionBase_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVSession_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPVSessionBase_EventIds_Type);
  PyvtkPVSessionBase_EventIds_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPVSessionBase_EventIds_Type);

  o = (PyObject *)&PyvtkPVSessionBase_EventIds_Type;
  if (PyDict_SetItemString(d, "EventIds", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkPVSessionBase::EventIds cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "RegisterRemoteObjectEvent", vtkPVSessionBase::RegisterRemoteObjectEvent },
        { "UnRegisterRemoteObjectEvent", vtkPVSessionBase::UnRegisterRemoteObjectEvent },
        { "ProcessingRemoteEnd", vtkPVSessionBase::ProcessingRemoteEnd },
        { "ConnectionLost", vtkPVSessionBase::ConnectionLost },
      };

    o = PyvtkPVSessionBase_EventIds_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVSessionBase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVSessionBase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVSessionBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

