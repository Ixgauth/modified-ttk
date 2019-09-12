// python wrapper for vtkNetworkAccessManager
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
#include "vtkNetworkAccessManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNetworkAccessManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkNetworkAccessManager_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkNetworkAccessManager_Doc =
  "vtkNetworkAccessManager - vtkNetworkAccessManager is used to create\nnew connections and monitor activity of those connections.\n\n"
  "Superclass: vtkObject\n\n"
  "This is an abstract class that defines the interface. Concrete\n"
  "implementations of this class can be written to support tcp/ip socket\n"
  "or ssl or ssh based network connections among processes.\n\n";


static PyObject *
PyvtkNetworkAccessManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNetworkAccessManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetworkAccessManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNetworkAccessManager *tempr = vtkNetworkAccessManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNetworkAccessManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetworkAccessManager::NewInstance());

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
PyvtkNetworkAccessManager_NewConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMultiProcessController *tempr = op->NewConnection(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_AbortPendingConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortPendingConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->AbortPendingConnection();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_ProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->ProcessEvents(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_GetNetworkEventsAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNetworkEventsAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->GetNetworkEventsAvailable();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_GetPendingConnectionsPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPendingConnectionsPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->GetPendingConnectionsPresent();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_DisableFurtherConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableFurtherConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->DisableFurtherConnections(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNetworkAccessManager_GetWrongConnectID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrongConnectID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkAccessManager *op = static_cast<vtkNetworkAccessManager *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->GetWrongConnectID();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkNetworkAccessManager_Methods[] = {
  {"IsTypeOf", PyvtkNetworkAccessManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNetworkAccessManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNetworkAccessManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkNetworkAccessManager\nC++: static vtkNetworkAccessManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNetworkAccessManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkNetworkAccessManager\nC++: vtkNetworkAccessManager *NewInstance()\n\n"},
  {"NewConnection", PyvtkNetworkAccessManager_NewConnection, METH_VARARGS,
   "V.NewConnection(string) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *NewConnection(\n    const char *url)\n\nCreates a new connection given the url. This call may block until\nthe connection can be established. To keep user-interfaces\nresponsive, one can listen to the vtkCommand::ProgressEvent fired\nperiodically by this class while waiting.\n\n* vtkNetworkAccessManager can  be waiting for atmost one\n  connection at a\n* time. Calling NewConnection() while another connection is\n  pending will\n* raise an error.\n\n* To abort the connection and cancel the waiting, simply call\n* AbortPendingConnection() in the vtkCommand::ProgressEvent\n  callback.\n\n* Returns the new connection instance on success, otherwise NULL.\n\n* URLs are of the following form:\n* \\<transport>://<address>\n* * tcp://<hostname>:<port>\n* * tcp://localhost:<port>/listen -- listen for connection on\n  port.\n* * tcp://localhost:<port>/listenmultiple -- listen for multiple\n* Examples:\n* * tcp://medea:12345\n* * tcp://localhost:12345/listen\n* * ssh://utkarsh@medea\n* * http://kitware-server/session?id=12322&authorization=12\n"},
  {"AbortPendingConnection", PyvtkNetworkAccessManager_AbortPendingConnection, METH_VARARGS,
   "V.AbortPendingConnection()\nC++: virtual void AbortPendingConnection()\n\nUsed to abort pending connection creation, if any. Refer to\nNewConnection() for details.\n"},
  {"ProcessEvents", PyvtkNetworkAccessManager_ProcessEvents, METH_VARARGS,
   "V.ProcessEvents(int) -> int\nC++: virtual int ProcessEvents(unsigned long timeout_msecs)\n\nProcess any network activity.\n"},
  {"GetNetworkEventsAvailable", PyvtkNetworkAccessManager_GetNetworkEventsAvailable, METH_VARARGS,
   "V.GetNetworkEventsAvailable() -> bool\nC++: virtual bool GetNetworkEventsAvailable()\n\nPeeks to check if any activity is available. When this call\nreturns true, ProcessEvents() will always result in some activity\nprocessing if called afterword.\n"},
  {"GetPendingConnectionsPresent", PyvtkNetworkAccessManager_GetPendingConnectionsPresent, METH_VARARGS,
   "V.GetPendingConnectionsPresent() -> bool\nC++: virtual bool GetPendingConnectionsPresent()\n\nReturns true is the manager is currently waiting for any\nconnections.\n"},
  {"DisableFurtherConnections", PyvtkNetworkAccessManager_DisableFurtherConnections, METH_VARARGS,
   "V.DisableFurtherConnections(int, bool)\nC++: virtual void DisableFurtherConnections(int port,\n    bool disable)\n\nEnable/disable further connections for given port.\n"},
  {"GetWrongConnectID", PyvtkNetworkAccessManager_GetWrongConnectID, METH_VARARGS,
   "V.GetWrongConnectID() -> bool\nC++: virtual bool GetWrongConnectID()\n\nReturns true if the last check of connect ids was wrong.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkNetworkAccessManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkNetworkAccessManager", // tp_name
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
  PyvtkNetworkAccessManager_Doc, // tp_doc
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

PyObject *PyvtkNetworkAccessManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkNetworkAccessManager_Type, PyvtkNetworkAccessManager_Methods,
    "vtkNetworkAccessManager",
 nullptr);

  PyTypeObject *pytype = &PyvtkNetworkAccessManager_Type;

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

void PyVTKAddFile_vtkNetworkAccessManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNetworkAccessManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNetworkAccessManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

