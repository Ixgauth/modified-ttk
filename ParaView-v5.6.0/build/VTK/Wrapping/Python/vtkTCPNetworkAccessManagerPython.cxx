// python wrapper for vtkTCPNetworkAccessManager
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
#include "vtkTCPNetworkAccessManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTCPNetworkAccessManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTCPNetworkAccessManager_ClassNew(); }

#ifndef DECLARED_PyvtkNetworkAccessManager_ClassNew
extern "C" { PyObject *PyvtkNetworkAccessManager_ClassNew(); }
#define DECLARED_PyvtkNetworkAccessManager_ClassNew
#endif

static const char *PyvtkTCPNetworkAccessManager_Doc =
  "vtkTCPNetworkAccessManager - vtkTCPNetworkAccessManager is a concrete\nimplementation of vtkNetworkAccessManager that uses tcp/ip sockets\nfor communication between processes.\n\n"
  "Superclass: vtkNetworkAccessManager\n\n"
  "It supports urls that use \"tcp\" as their protocol specifier.\n\n";


static PyObject *
PyvtkTCPNetworkAccessManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTCPNetworkAccessManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTCPNetworkAccessManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTCPNetworkAccessManager *tempr = vtkTCPNetworkAccessManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTCPNetworkAccessManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTCPNetworkAccessManager::NewInstance());

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
PyvtkTCPNetworkAccessManager_NewConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->NewConnection(temp0) :
      op->vtkTCPNetworkAccessManager::NewConnection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_AbortPendingConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortPendingConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AbortPendingConnection();
    }
    else
    {
      op->vtkTCPNetworkAccessManager::AbortPendingConnection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_ProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessEvents(temp0) :
      op->vtkTCPNetworkAccessManager::ProcessEvents(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_GetNetworkEventsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNetworkEventsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNetworkEventsAvailable() :
      op->vtkTCPNetworkAccessManager::GetNetworkEventsAvailable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_GetPendingConnectionsPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPendingConnectionsPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPendingConnectionsPresent() :
      op->vtkTCPNetworkAccessManager::GetPendingConnectionsPresent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_DisableFurtherConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableFurtherConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->DisableFurtherConnections(temp0, temp1);
    }
    else
    {
      op->vtkTCPNetworkAccessManager::DisableFurtherConnections(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTCPNetworkAccessManager_GetWrongConnectID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrongConnectID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTCPNetworkAccessManager *op = static_cast<vtkTCPNetworkAccessManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWrongConnectID() :
      op->vtkTCPNetworkAccessManager::GetWrongConnectID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTCPNetworkAccessManager_Methods[] = {
  {"IsTypeOf", PyvtkTCPNetworkAccessManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTCPNetworkAccessManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTCPNetworkAccessManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTCPNetworkAccessManager\nC++: static vtkTCPNetworkAccessManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTCPNetworkAccessManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTCPNetworkAccessManager\nC++: vtkTCPNetworkAccessManager *NewInstance()\n\n"},
  {"NewConnection", PyvtkTCPNetworkAccessManager_NewConnection, METH_VARARGS,
   "V.NewConnection(string) -> vtkMultiProcessController\nC++: vtkMultiProcessController *NewConnection(const char *url)\n    override;\n\nCreates a new connection given the url. This call may block until\nthe connection can be established. To keep user-interfaces\nresponsive, one can listen to the vtkCommand::ProgressEvent fired\nperiodically by this class while waiting.\n\n* vtkNetworkAccessManager can  be waiting for atmost one\n  connection at a\n* time. Calling NewConnection() while another connection is\n  pending will\n* raise an error.\n\n* To abort the connection and cancel the waiting, simply call\n* AbortPendingConnection() in the vtkCommand::ProgressEvent\n  callback.\n\n* Returns the new connection instance on success, otherwise NULL.\n\n* URLs are of the following form:\n* \\<transport>://<address>\n* * tcp://<hostname>:<port>\n* * tcp://localhost:<port>?listen=true& -- listen for connection\n  on port.\n* * tcp://localhost:<port>?listen=true&multiple=true -- listen\n  for multiple\n* Examples:\n* * tcp://medea:12345\n* * tcp://localhost:12345?listen&handshake=3.8.12\n* Supported parameters:\n* handshake :- specify a message that is matched with the other\n  side\n* listen    :- open a server-socket for a client to connect to\n* multiple  :- leave server-socket open for more than 1 client to\nconnect\n* (listen must be set to true)\n* nonblocking:- When listen is true, this will result in the call\nreturning\n* NULL if a client connection is not available immediately.\n* It leaves the server socket open for client to connect.\n* timeout   :- When connecting to remote i.e listen==false,\n  specify the time\n* (in seconds) for which this call blocks to retry attempts to\n* connect to the host/port. If absent, default is 60s. 0 implies\n  no retry attempts.\n* A negative value implies an infinite number of retries.\n"},
  {"AbortPendingConnection", PyvtkTCPNetworkAccessManager_AbortPendingConnection, METH_VARARGS,
   "V.AbortPendingConnection()\nC++: void AbortPendingConnection() override;\n\nUsed to abort pending connection creation, if any. Refer to\nNewConnection() for details.\n"},
  {"ProcessEvents", PyvtkTCPNetworkAccessManager_ProcessEvents, METH_VARARGS,
   "V.ProcessEvents(int) -> int\nC++: int ProcessEvents(unsigned long timeout_msecs) override;\n\nProcess any network activity.\n"},
  {"GetNetworkEventsAvailable", PyvtkTCPNetworkAccessManager_GetNetworkEventsAvailable, METH_VARARGS,
   "V.GetNetworkEventsAvailable() -> bool\nC++: bool GetNetworkEventsAvailable() override;\n\nPeeks to check if any activity is available. When this call\nreturns true, ProcessEvents() will always result in some activity\nprocessing if called afterword.\n"},
  {"GetPendingConnectionsPresent", PyvtkTCPNetworkAccessManager_GetPendingConnectionsPresent, METH_VARARGS,
   "V.GetPendingConnectionsPresent() -> bool\nC++: bool GetPendingConnectionsPresent() override;\n\nReturns true is the manager is currently waiting for any\nconnections.\n"},
  {"DisableFurtherConnections", PyvtkTCPNetworkAccessManager_DisableFurtherConnections, METH_VARARGS,
   "V.DisableFurtherConnections(int, bool)\nC++: virtual void DisableFurtherConnections(int port,\n    bool disable) override;\n\nEnable/disable further connections for given port.\n"},
  {"GetWrongConnectID", PyvtkTCPNetworkAccessManager_GetWrongConnectID, METH_VARARGS,
   "V.GetWrongConnectID() -> bool\nC++: virtual bool GetWrongConnectID() override;\n\nReturns true if the last check of connect ids was wrong.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTCPNetworkAccessManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkTCPNetworkAccessManager", // tp_name
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
  PyvtkTCPNetworkAccessManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTCPNetworkAccessManager_StaticNew()
{
  return vtkTCPNetworkAccessManager::New();
}

PyObject *PyvtkTCPNetworkAccessManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTCPNetworkAccessManager_Type, PyvtkTCPNetworkAccessManager_Methods,
    "vtkTCPNetworkAccessManager",
 &PyvtkTCPNetworkAccessManager_StaticNew);

  PyTypeObject *pytype = &PyvtkTCPNetworkAccessManager_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkNetworkAccessManager_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTCPNetworkAccessManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTCPNetworkAccessManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTCPNetworkAccessManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

