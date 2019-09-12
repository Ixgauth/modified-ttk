// python wrapper for vtkSMSessionClient
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
#include "vtkSMSessionClient.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSessionClient(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSessionClient_ClassNew(); }

#ifndef DECLARED_PyvtkSMSession_ClassNew
extern "C" { PyObject *PyvtkSMSession_ClassNew(); }
#define DECLARED_PyvtkSMSession_ClassNew
#endif

static const char *PyvtkSMSessionClient_Doc =
  "vtkSMSessionClient - vtkSMSessionClient is a remote-session that\nconnects to a remote server.\n\n"
  "Superclass: vtkSMSession\n\n"
  "vtkSMSessionClient supports both connecting a pvserver as well as\n"
  "connecting a pvdataserver/pvrenderserver.\n\n";


static PyObject *
PyvtkSMSessionClient_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSessionClient::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSessionClient::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSessionClient *tempr = vtkSMSessionClient::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSessionClient *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSessionClient::NewInstance());

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
PyvtkSMSessionClient_GetURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetURI() :
      op->vtkSMSessionClient::GetURI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_Connect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Connect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 60;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->Connect(temp0, temp1) :
      op->vtkSMSessionClient::Connect(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetIsAlive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsAlive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsAlive() :
      op->vtkSMSessionClient::GetIsAlive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetServerInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVServerInformation *tempr = (ap.IsBound() ?
      op->GetServerInformation() :
      op->vtkSMSessionClient::GetServerInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSMSessionClient::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_PushState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

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
      op->vtkSMSessionClient::PushState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_PullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

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
      op->vtkSMSessionClient::PullState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_ExecuteStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

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
      op->vtkSMSessionClient::ExecuteStream(temp0, *temp1, temp2);
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
PyvtkSMSessionClient_GetLastResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const vtkClientServerStream *tempr = (ap.IsBound() ?
      &op->GetLastResult(temp0) :
      &op->vtkSMSessionClient::GetLastResult(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkClientServerStream");
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_SetAbortConnect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortConnect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbortConnect(temp0);
    }
    else
    {
      op->vtkSMSessionClient::SetAbortConnect(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_CloseSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseSession();
    }
    else
    {
      op->vtkSMSessionClient::CloseSession();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GatherInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

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
      op->vtkSMSessionClient::GatherInformation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses(temp0) :
      op->vtkSMSessionClient::GetNumberOfProcesses(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_IsMPIInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMPIInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMPIInitialized(temp0) :
      op->vtkSMSessionClient::IsMPIInitialized(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_PreDisconnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreDisconnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreDisconnection();
    }
    else
    {
      op->vtkSMSessionClient::PreDisconnection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_IsNotBusy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNotBusy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsNotBusy() :
      op->vtkSMSessionClient::IsNotBusy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_StartBusyWork(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartBusyWork");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartBusyWork();
    }
    else
    {
      op->vtkSMSessionClient::StartBusyWork();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_EndBusyWork(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndBusyWork");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndBusyWork();
    }
    else
    {
      op->vtkSMSessionClient::EndBusyWork();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetCollaborationManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollaborationManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMCollaborationManager *tempr = (ap.IsBound() ?
      op->GetCollaborationManager() :
      op->vtkSMSessionClient::GetCollaborationManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_PrepareProgressInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareProgressInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrepareProgressInternal();
    }
    else
    {
      op->vtkSMSessionClient::PrepareProgressInternal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_CleanupPendingProgressInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanupPendingProgressInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CleanupPendingProgressInternal();
    }
    else
    {
      op->vtkSMSessionClient::CleanupPendingProgressInternal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetConnectID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConnectID() :
      op->vtkSMSessionClient::GetConnectID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetNextGlobalUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextGlobalUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextGlobalUniqueIdentifier() :
      op->vtkSMSessionClient::GetNextGlobalUniqueIdentifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_GetNextChunkGlobalUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextChunkGlobalUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextChunkGlobalUniqueIdentifier(temp0) :
      op->vtkSMSessionClient::GetNextChunkGlobalUniqueIdentifier(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionClient_OnServerNotificationMessageRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnServerNotificationMessageRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionClient *op = static_cast<vtkSMSessionClient *>(vp);

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
      op->OnServerNotificationMessageRMI(temp0, temp1);
    }
    else
    {
      op->vtkSMSessionClient::OnServerNotificationMessageRMI(temp0, temp1);
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

static PyMethodDef PyvtkSMSessionClient_Methods[] = {
  {"IsTypeOf", PyvtkSMSessionClient_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSessionClient_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSessionClient_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSessionClient\nC++: static vtkSMSessionClient *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSessionClient_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSessionClient\nC++: vtkSMSessionClient *NewInstance()\n\n"},
  {"GetURI", PyvtkSMSessionClient_GetURI, METH_VARARGS,
   "V.GetURI() -> string\nC++: const char *GetURI() override;\n\nReturn the url used to connect the current session to a server\n"},
  {"Connect", PyvtkSMSessionClient_Connect, METH_VARARGS,
   "V.Connect(string, int) -> bool\nC++: virtual bool Connect(const char *url, int timeout=60)\n\nConnects a remote server. URL can be of the following format:\ncs://<pvserver-host>:<pvserver-port>\ncdsrs://<pvdataserver-host>:<pvdataserver-port>/<pvrenderserver-ho\nst>:<pvrenderserver-port> In both cases the port is optional.\nWhen not provided default pvserver/pvdataserver port // is 11111,\nwhile default pvrenderserver port is 22221. For reverse connect\ni.e. the client waits for the server to connect back, simply add\n\"rc\" to the protocol e.g. csrc://<pvserver-host>:<pvserver-port>\ncdsrsrc://<pvdataserver-host>:<pvdataserver-port>/<pvrenderserver-\nhost>:<pvrenderserver-port> In this case, the hostname is\nirrelevant and is ignored. Wait for timeout seconds for the\nconnection. Default is 60, 0 means no retry.\n-1 means infinite retries.\n"},
  {"GetIsAlive", PyvtkSMSessionClient_GetIsAlive, METH_VARARGS,
   "V.GetIsAlive() -> bool\nC++: bool GetIsAlive() override;\n\nReturns true is this session is active/alive/valid.\n"},
  {"GetServerInformation", PyvtkSMSessionClient_GetServerInformation, METH_VARARGS,
   "V.GetServerInformation() -> vtkPVServerInformation\nC++: vtkPVServerInformation *GetServerInformation() override;\n\nvtkPVServerInformation is an information-object that provides\ninformation about the server processes. These include server-side\ncapabilities as well as server-side command line arguments e.g.\ntile-display parameters. Use this method to obtain the\nserver-side information. Overridden to provide return the\ninformation gathered from data-server and render-server.\n"},
  {"Initialize", PyvtkSMSessionClient_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nCalled to do any initializations after a successful session has\nbeen established. Initialize the data-server-render-server\nconnection, if applicable.\n"},
  {"PushState", PyvtkSMSessionClient_PushState, METH_VARARGS,
   "V.PushState(vtkSMMessage)\nC++: void PushState(vtkSMMessage *msg) override;\n\nPush the state.\n"},
  {"PullState", PyvtkSMSessionClient_PullState, METH_VARARGS,
   "V.PullState(vtkSMMessage)\nC++: void PullState(vtkSMMessage *message) override;\n\nPush the state.\n"},
  {"ExecuteStream", PyvtkSMSessionClient_ExecuteStream, METH_VARARGS,
   "V.ExecuteStream(int, vtkClientServerStream, bool)\nC++: void ExecuteStream(vtkTypeUInt32 location,\n    const vtkClientServerStream &stream, bool ignore_errors=false)\n     override;\n\nPush the state.\n"},
  {"GetLastResult", PyvtkSMSessionClient_GetLastResult, METH_VARARGS,
   "V.GetLastResult(int) -> vtkClientServerStream\nC++: const vtkClientServerStream &GetLastResult(\n    vtkTypeUInt32 location) override;\n\nPush the state.\n"},
  {"SetAbortConnect", PyvtkSMSessionClient_SetAbortConnect, METH_VARARGS,
   "V.SetAbortConnect(bool)\nC++: virtual void SetAbortConnect(bool _arg)\n\nWhen Connect() is waiting for a server to connect back to the\nclient (in reverse connect mode), then it periodically fires\nProgressEvent. Application can add observer to this signal and\nset this flag to true, if it wants to abort the wait for the\nserver.\n"},
  {"CloseSession", PyvtkSMSessionClient_CloseSession, METH_VARARGS,
   "V.CloseSession()\nC++: void CloseSession()\n\nGracefully exits the session.\n"},
  {"GatherInformation", PyvtkSMSessionClient_GatherInformation, METH_VARARGS,
   "V.GatherInformation(int, vtkPVInformation, int) -> bool\nC++: bool GatherInformation(vtkTypeUInt32 location,\n    vtkPVInformation *information, vtkTypeUInt32 globalid)\n    override;\n\nGather information about an object referred by the\nglobalid.location identifies the processes to gather the\ninformation from. Overridden to fetch the information from server\nif needed, otherwise it's handled locally.\n"},
  {"GetNumberOfProcesses", PyvtkSMSessionClient_GetNumberOfProcesses, METH_VARARGS,
   "V.GetNumberOfProcesses(int) -> int\nC++: int GetNumberOfProcesses(vtkTypeUInt32 servers) override;\n\nReturns the number of processes on the given server/s. If more\nthan 1 server is identified, than it returns the maximum number\nof processes e.g. is servers = DATA_SERVER | RENDER_SERVER and\nthere are 3 data-server nodes and 2 render-server nodes, then\nthis method will return 3.\n"},
  {"IsMPIInitialized", PyvtkSMSessionClient_IsMPIInitialized, METH_VARARGS,
   "V.IsMPIInitialized(int) -> bool\nC++: bool IsMPIInitialized(vtkTypeUInt32 servers) override;\n\nReturns whether or not MPI is initialized on the specified\nserver/s. If more than 1 server is identified it will return true\nonly if all of the servers have MPI initialized.\n"},
  {"PreDisconnection", PyvtkSMSessionClient_PreDisconnection, METH_VARARGS,
   "V.PreDisconnection()\nC++: void PreDisconnection() override;\n\n"},
  {"IsNotBusy", PyvtkSMSessionClient_IsNotBusy, METH_VARARGS,
   "V.IsNotBusy() -> bool\nC++: virtual bool IsNotBusy()\n\nFlag used to know if it is a good time to handle server\nnotification.\n"},
  {"StartBusyWork", PyvtkSMSessionClient_StartBusyWork, METH_VARARGS,
   "V.StartBusyWork()\nC++: virtual void StartBusyWork()\n\nBusyWork should be declared inside method that will request\nseveral network call that we don't want to interrupt such as\nGatherInformation and Pull.\n"},
  {"EndBusyWork", PyvtkSMSessionClient_EndBusyWork, METH_VARARGS,
   "V.EndBusyWork()\nC++: virtual void EndBusyWork()\n\nBusyWork should be declared inside method that will request\nseveral network call that we don't want to interrupt such as\nGatherInformation and Pull.\n"},
  {"GetCollaborationManager", PyvtkSMSessionClient_GetCollaborationManager, METH_VARARGS,
   "V.GetCollaborationManager() -> vtkSMCollaborationManager\nC++: vtkSMCollaborationManager *GetCollaborationManager()\n    override;\n\nReturn the instance of vtkSMCollaborationManager that will be\nlazy created at the first call.\n"},
  {"PrepareProgressInternal", PyvtkSMSessionClient_PrepareProgressInternal, METH_VARARGS,
   "V.PrepareProgressInternal()\nC++: void PrepareProgressInternal() override;\n\nShould be called to begin/end receiving progresses on this\nsession. Overridden to relay to the server(s).\n"},
  {"CleanupPendingProgressInternal", PyvtkSMSessionClient_CleanupPendingProgressInternal, METH_VARARGS,
   "V.CleanupPendingProgressInternal()\nC++: void CleanupPendingProgressInternal() override;\n\nShould be called to begin/end receiving progresses on this\nsession. Overridden to relay to the server(s).\n"},
  {"GetConnectID", PyvtkSMSessionClient_GetConnectID, METH_VARARGS,
   "V.GetConnectID() -> int\nC++: int GetConnectID()\n\nReturn the connect id of this client.\n"},
  {"GetNextGlobalUniqueIdentifier", PyvtkSMSessionClient_GetNextGlobalUniqueIdentifier, METH_VARARGS,
   "V.GetNextGlobalUniqueIdentifier() -> int\nC++: vtkTypeUInt32 GetNextGlobalUniqueIdentifier() override;\n\nProvides the next available identifier. This implementation works\nlocally. without any code distribution. To support the\ndistributed architecture the vtkSMSessionClient override those\nmethod to call them on the DATA_SERVER vtkPVSessionBase instance.\n"},
  {"GetNextChunkGlobalUniqueIdentifier", PyvtkSMSessionClient_GetNextChunkGlobalUniqueIdentifier, METH_VARARGS,
   "V.GetNextChunkGlobalUniqueIdentifier(int) -> int\nC++: vtkTypeUInt32 GetNextChunkGlobalUniqueIdentifier(\n    vtkTypeUInt32 chunkSize) override;\n\nReturn the first Id of the requested chunk. 1 =\nReverveNextIdChunk(10); | Reserved ids [1,2,3,4,5,6,7,8,9,10] 11\n= ReverveNextIdChunk(10);| Reserved ids\n[11,12,13,14,15,16,17,18,19,20] b = a + 10;\n"},
  {"OnServerNotificationMessageRMI", PyvtkSMSessionClient_OnServerNotificationMessageRMI, METH_VARARGS,
   "V.OnServerNotificationMessageRMI(void, int)\nC++: void OnServerNotificationMessageRMI(void *message,\n    int message_length)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSessionClient_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSessionClient", // tp_name
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
  PyvtkSMSessionClient_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSessionClient_StaticNew()
{
  return vtkSMSessionClient::New();
}

PyObject *PyvtkSMSessionClient_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSessionClient_Type, PyvtkSMSessionClient_Methods,
    "vtkSMSessionClient",
 &PyvtkSMSessionClient_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSessionClient_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMSession_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMSessionClient(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSessionClient_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSessionClient", o) != 0)
  {
    Py_DECREF(o);
  }

}

