// python wrapper for vtkPVSessionServer
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
#include "vtkPVSessionServer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVSessionServer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVSessionServer_ClassNew(); }

#ifndef DECLARED_PyvtkPVSessionBase_ClassNew
extern "C" { PyObject *PyvtkPVSessionBase_ClassNew(); }
#define DECLARED_PyvtkPVSessionBase_ClassNew
#endif

static const char *PyvtkPVSessionServer_Doc =
  "vtkPVSessionServer - vtkSMSessionServer is a session used on data\nand/or render servers.\n\n"
  "Superclass: vtkPVSessionBase\n\n"
  "It's designed for a process that works with a separate client process\n"
  "that acts as the visualization driver.\n"
  "@sa\n"
  "vtkSMSessionClient\n\n";


static PyObject *
PyvtkPVSessionServer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVSessionServer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSessionServer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVSessionServer *tempr = vtkPVSessionServer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSessionServer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSessionServer::NewInstance());

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
PyvtkPVSessionServer_Connect_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Connect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Connect(temp0) :
      op->vtkPVSessionServer::Connect(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVSessionServer_Connect_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Connect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Connect() :
      op->vtkPVSessionServer::Connect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVSessionServer_Connect(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVSessionServer_Connect_s1(self, args);
    case 0:
      return PyvtkPVSessionServer_Connect_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Connect");
  return nullptr;
}



static PyObject *
PyvtkPVSessionServer_GetIsAlive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsAlive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsAlive() :
      op->vtkPVSessionServer::GetIsAlive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_MultipleConnectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleConnectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultipleConnectionOn();
    }
    else
    {
      op->vtkPVSessionServer::MultipleConnectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_MultipleConnectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleConnectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultipleConnectionOff();
    }
    else
    {
      op->vtkPVSessionServer::MultipleConnectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_SetMultipleConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultipleConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMultipleConnection(temp0);
    }
    else
    {
      op->vtkPVSessionServer::SetMultipleConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_GetMultipleConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultipleConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMultipleConnection() :
      op->vtkPVSessionServer::GetMultipleConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_DisableFurtherConnectionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableFurtherConnectionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableFurtherConnectionsOn();
    }
    else
    {
      op->vtkPVSessionServer::DisableFurtherConnectionsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_DisableFurtherConnectionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableFurtherConnectionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableFurtherConnectionsOff();
    }
    else
    {
      op->vtkPVSessionServer::DisableFurtherConnectionsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_GetDisableFurtherConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableFurtherConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDisableFurtherConnections() :
      op->vtkPVSessionServer::GetDisableFurtherConnections());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_SetDisableFurtherConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableFurtherConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisableFurtherConnections(temp0);
    }
    else
    {
      op->vtkPVSessionServer::SetDisableFurtherConnections(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_SetConnectID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConnectID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

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
      op->vtkPVSessionServer::SetConnectID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_GetConnectID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConnectID() :
      op->vtkPVSessionServer::GetConnectID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_OnClientServerMessageRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnClientServerMessageRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->OnClientServerMessageRMI(temp0, temp1);
    }
    else
    {
      op->vtkPVSessionServer::OnClientServerMessageRMI(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkPVSessionServer_OnCloseSessionRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnCloseSessionRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnCloseSessionRMI();
    }
    else
    {
      op->vtkPVSessionServer::OnCloseSessionRMI();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_NotifyAllClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotifyAllClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->NotifyAllClients(temp0);
    }
    else
    {
      op->vtkPVSessionServer::NotifyAllClients(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionServer_NotifyOtherClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotifyOtherClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionServer *op = static_cast<vtkPVSessionServer *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->NotifyOtherClients(temp0);
    }
    else
    {
      op->vtkPVSessionServer::NotifyOtherClients(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVSessionServer_Methods[] = {
  {"IsTypeOf", PyvtkPVSessionServer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVSessionServer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVSessionServer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVSessionServer\nC++: static vtkPVSessionServer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVSessionServer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVSessionServer\nC++: vtkPVSessionServer *NewInstance()\n\n"},
  {"Connect", PyvtkPVSessionServer_Connect, METH_VARARGS,
   "V.Connect(string) -> bool\nC++: virtual bool Connect(const char *url)\nV.Connect() -> bool\nC++: bool Connect()\n\nConnects a remote server. URL can be of the following format:\ncs://<pvserver-host>:<pvserver-port>\ncdsrs://<pvdataserver-host>:<pvdataserver-port>/<pvrenderserver-ho\nst>:<pvrenderserver-port> In both cases the port is optional.\nWhen not provided default pvserver/pvdataserver port // is 11111,\nwhile default pvrenderserver port is 22221. For reverse connect\ni.e. the client waits for the server to connect back, simply add\n\"rc\" to the protocol e.g. csrc://<pvserver-host>:<pvserver-port>\ncdsrsrc://<pvdataserver-host>:<pvdataserver-port>/<pvrenderserver-\nhost>:<pvrenderserver-port> In this case, the hostname is\nirrelevant and is ignored.\n"},
  {"GetIsAlive", PyvtkPVSessionServer_GetIsAlive, METH_VARARGS,
   "V.GetIsAlive() -> bool\nC++: bool GetIsAlive() override;\n\nReturns true is this session is active/alive/valid.\n"},
  {"MultipleConnectionOn", PyvtkPVSessionServer_MultipleConnectionOn, METH_VARARGS,
   "V.MultipleConnectionOn()\nC++: virtual void MultipleConnectionOn()\n\nEnable or Disable multi-connection support. The\nMultipleConnection is only used inside the DATA_SERVER to support\nseveral clients to connect to it. By default, collaboration is\nnot allowed (this->MultipleConnection = false)\n"},
  {"MultipleConnectionOff", PyvtkPVSessionServer_MultipleConnectionOff, METH_VARARGS,
   "V.MultipleConnectionOff()\nC++: virtual void MultipleConnectionOff()\n\nEnable or Disable multi-connection support. The\nMultipleConnection is only used inside the DATA_SERVER to support\nseveral clients to connect to it. By default, collaboration is\nnot allowed (this->MultipleConnection = false)\n"},
  {"SetMultipleConnection", PyvtkPVSessionServer_SetMultipleConnection, METH_VARARGS,
   "V.SetMultipleConnection(bool)\nC++: virtual void SetMultipleConnection(bool _arg)\n\nEnable or Disable multi-connection support. The\nMultipleConnection is only used inside the DATA_SERVER to support\nseveral clients to connect to it. By default, collaboration is\nnot allowed (this->MultipleConnection = false)\n"},
  {"GetMultipleConnection", PyvtkPVSessionServer_GetMultipleConnection, METH_VARARGS,
   "V.GetMultipleConnection() -> bool\nC++: virtual bool GetMultipleConnection()\n\nEnable or Disable multi-connection support. The\nMultipleConnection is only used inside the DATA_SERVER to support\nseveral clients to connect to it. By default, collaboration is\nnot allowed (this->MultipleConnection = false)\n"},
  {"DisableFurtherConnectionsOn", PyvtkPVSessionServer_DisableFurtherConnectionsOn, METH_VARARGS,
   "V.DisableFurtherConnectionsOn()\nC++: virtual void DisableFurtherConnectionsOn()\n\nEnable or Disable further connections in multiple connection\nmode. By default, further connections are enabled.\n(this->DisableFurtherConnections = false)\n"},
  {"DisableFurtherConnectionsOff", PyvtkPVSessionServer_DisableFurtherConnectionsOff, METH_VARARGS,
   "V.DisableFurtherConnectionsOff()\nC++: virtual void DisableFurtherConnectionsOff()\n\nEnable or Disable further connections in multiple connection\nmode. By default, further connections are enabled.\n(this->DisableFurtherConnections = false)\n"},
  {"GetDisableFurtherConnections", PyvtkPVSessionServer_GetDisableFurtherConnections, METH_VARARGS,
   "V.GetDisableFurtherConnections() -> bool\nC++: virtual bool GetDisableFurtherConnections()\n\nEnable or Disable further connections in multiple connection\nmode. By default, further connections are enabled.\n(this->DisableFurtherConnections = false)\n"},
  {"SetDisableFurtherConnections", PyvtkPVSessionServer_SetDisableFurtherConnections, METH_VARARGS,
   "V.SetDisableFurtherConnections(bool)\nC++: void SetDisableFurtherConnections(bool disable)\n\nEnable or Disable further connections in multiple connection\nmode. By default, further connections are enabled.\n(this->DisableFurtherConnections = false)\n"},
  {"SetConnectID", PyvtkPVSessionServer_SetConnectID, METH_VARARGS,
   "V.SetConnectID(int)\nC++: void SetConnectID(int newConnectID)\n\nSet/Get the server connect-id. Default is 0.\n"},
  {"GetConnectID", PyvtkPVSessionServer_GetConnectID, METH_VARARGS,
   "V.GetConnectID() -> int\nC++: int GetConnectID()\n\nSet/Get the server connect-id. Default is 0.\n"},
  {"OnClientServerMessageRMI", PyvtkPVSessionServer_OnClientServerMessageRMI, METH_VARARGS,
   "V.OnClientServerMessageRMI(void, int)\nC++: void OnClientServerMessageRMI(void *message,\n    int message_length)\n\n"},
  {"OnCloseSessionRMI", PyvtkPVSessionServer_OnCloseSessionRMI, METH_VARARGS,
   "V.OnCloseSessionRMI()\nC++: void OnCloseSessionRMI()\n\n"},
  {"NotifyAllClients", PyvtkPVSessionServer_NotifyAllClients, METH_VARARGS,
   "V.NotifyAllClients(vtkSMMessage)\nC++: void NotifyAllClients(const vtkSMMessage *) override;\n\nSends the message to all clients.\n"},
  {"NotifyOtherClients", PyvtkPVSessionServer_NotifyOtherClients, METH_VARARGS,
   "V.NotifyOtherClients(vtkSMMessage)\nC++: void NotifyOtherClients(const vtkSMMessage *) override;\n\nSends the message to all but the active client-session.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVSessionServer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkPVSessionServer", // tp_name
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
  PyvtkPVSessionServer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVSessionServer_StaticNew()
{
  return vtkPVSessionServer::New();
}

PyObject *PyvtkPVSessionServer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVSessionServer_Type, PyvtkPVSessionServer_Methods,
    "vtkPVSessionServer",
 &PyvtkPVSessionServer_StaticNew);

  PyTypeObject *pytype = &PyvtkPVSessionServer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVSessionBase_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 14; c++)
  {
    static const struct { const char *name; int value; }
      constants[14] = {
        { "PUSH", vtkPVSessionServer::PUSH },
        { "PULL", vtkPVSessionServer::PULL },
        { "EXECUTE_STREAM", vtkPVSessionServer::EXECUTE_STREAM },
        { "GATHER_INFORMATION", vtkPVSessionServer::GATHER_INFORMATION },
        { "REGISTER_SI", vtkPVSessionServer::REGISTER_SI },
        { "UNREGISTER_SI", vtkPVSessionServer::UNREGISTER_SI },
        { "LAST_RESULT", vtkPVSessionServer::LAST_RESULT },
        { "SERVER_NOTIFICATION_MESSAGE_RMI", vtkPVSessionServer::SERVER_NOTIFICATION_MESSAGE_RMI },
        { "CLIENT_SERVER_MESSAGE_RMI", vtkPVSessionServer::CLIENT_SERVER_MESSAGE_RMI },
        { "CLOSE_SESSION", vtkPVSessionServer::CLOSE_SESSION },
        { "REPLY_GATHER_INFORMATION_TAG", vtkPVSessionServer::REPLY_GATHER_INFORMATION_TAG },
        { "REPLY_PULL", vtkPVSessionServer::REPLY_PULL },
        { "REPLY_LAST_RESULT", vtkPVSessionServer::REPLY_LAST_RESULT },
        { "EXECUTE_STREAM_TAG", vtkPVSessionServer::EXECUTE_STREAM_TAG },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVSessionServer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVSessionServer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVSessionServer", o) != 0)
  {
    Py_DECREF(o);
  }

}

