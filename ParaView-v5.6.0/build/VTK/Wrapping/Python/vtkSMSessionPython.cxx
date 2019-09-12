// python wrapper for vtkSMSession
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
#include "vtkSMSession.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSession(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSession_ClassNew(); }

#ifndef DECLARED_PyvtkPVSessionBase_ClassNew
extern "C" { PyObject *PyvtkPVSessionBase_ClassNew(); }
#define DECLARED_PyvtkPVSessionBase_ClassNew
#endif

static const char *PyvtkSMSession_Doc =
  "vtkSMSession - vtkSMSession is the default ParaView session.\n\n"
  "Superclass: vtkPVSessionBase\n\n"
  "This class can be used as the session for non-client-server\n"
  "configurations eg. builtin mode or batch.\n\n";

static PyTypeObject PyvtkSMSession_RenderingMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSession.RenderingMode", // tp_name
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

PyObject *PyvtkSMSession_RenderingMode_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMSession_RenderingMode_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMSession_RenderingMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMSession_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSession::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSession::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSession *tempr = vtkSMSession::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSession::NewInstance());

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
PyvtkSMSession_GetCollaborationManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollaborationManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMCollaborationManager *tempr = (ap.IsBound() ?
      op->GetCollaborationManager() :
      op->vtkSMSession::GetCollaborationManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_GetURI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetURI() :
      op->vtkSMSession::GetURI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_GetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetSessionProxyManager() :
      op->vtkSMSession::GetSessionProxyManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses(temp0) :
      op->vtkSMSession::GetNumberOfProcesses(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_IsMPIInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMPIInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMPIInitialized(temp0) :
      op->vtkSMSession::IsMPIInitialized(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_GetProxyLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyLocator *tempr = (ap.IsBound() ?
      op->GetProxyLocator() :
      op->vtkSMSession::GetProxyLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_GetRenderClientMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderClientMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetRenderClientMode() :
      op->vtkSMSession::GetRenderClientMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_GetStateLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStateLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMStateLocator *tempr = (ap.IsBound() ?
      op->GetStateLocator() :
      op->vtkSMSession::GetStateLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_GetIsAlive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsAlive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsAlive() :
      op->vtkSMSession::GetIsAlive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_PushState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

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
      op->vtkSMSession::PushState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_NotifyAllClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotifyAllClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

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
      op->vtkSMSession::NotifyAllClients(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_NotifyOtherClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotifyOtherClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

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
      op->vtkSMSession::NotifyOtherClients(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_PreDisconnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreDisconnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreDisconnection();
    }
    else
    {
      op->vtkSMSession::PreDisconnection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_ConnectToCatalyst(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConnectToCatalyst");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkIdType tempr = vtkSMSession::ConnectToCatalyst();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_ConnectToSelf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConnectToSelf");

  int temp0 = 60;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkIdType tempr = vtkSMSession::ConnectToSelf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSession_ConnectToRemote_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConnectToRemote");

  const char *temp0 = nullptr;
  int temp1;
  int temp2 = 60;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkIdType tempr = vtkSMSession::ConnectToRemote(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSession_ConnectToRemote_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConnectToRemote");

  const char *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  int temp3;
  int temp4 = 60;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkIdType tempr = vtkSMSession::ConnectToRemote(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSession_ConnectToRemote(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
    case 3:
      return PyvtkSMSession_ConnectToRemote_s1(self, args);
    case 4:
    case 5:
      return PyvtkSMSession_ConnectToRemote_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ConnectToRemote");
  return nullptr;
}



static PyObject *
PyvtkSMSession_ReverseConnectToRemote_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ReverseConnectToRemote");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = vtkSMSession::ReverseConnectToRemote(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSession_ReverseConnectToRemote_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ReverseConnectToRemote");

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = vtkSMSession::ReverseConnectToRemote(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSession_ReverseConnectToRemote(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMSession_ReverseConnectToRemote_s1(self, args);
    case 2:
      return PyvtkSMSession_ReverseConnectToRemote_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReverseConnectToRemote");
  return nullptr;
}



static PyObject *
PyvtkSMSession_Disconnect_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Disconnect");

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMSession::Disconnect(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSession_Disconnect_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Disconnect");

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    vtkSMSession::Disconnect(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSession_Disconnect_Methods[] = {
  {nullptr, PyvtkSMSession_Disconnect_s1, METH_VARARGS | METH_STATIC,
   "k"},
  {nullptr, PyvtkSMSession_Disconnect_s2, METH_VARARGS | METH_STATIC,
   "V *vtkSMSession"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSession_Disconnect(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSession_Disconnect_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Disconnect");
  return nullptr;
}



static PyObject *
PyvtkSMSession_GetIsAutoMPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsAutoMPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSession *op = static_cast<vtkSMSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsAutoMPI() :
      op->vtkSMSession::GetIsAutoMPI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSession_Methods[] = {
  {"IsTypeOf", PyvtkSMSession_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSession_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSession_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSession\nC++: static vtkSMSession *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSession_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSession\nC++: vtkSMSession *NewInstance()\n\n"},
  {"GetCollaborationManager", PyvtkSMSession_GetCollaborationManager, METH_VARARGS,
   "V.GetCollaborationManager() -> vtkSMCollaborationManager\nC++: virtual vtkSMCollaborationManager *GetCollaborationManager()\n\nReturn the instance of vtkSMCollaborationManager that will be\nlazy created at the first call. By default we return NULL\n"},
  {"GetURI", PyvtkSMSession_GetURI, METH_VARARGS,
   "V.GetURI() -> string\nC++: virtual const char *GetURI()\n\nReturn the URL that define where the session is connected to. URI\nhas enough information to know the type of connection, server\nhosts and ports.\n"},
  {"GetSessionProxyManager", PyvtkSMSession_GetSessionProxyManager, METH_VARARGS,
   "V.GetSessionProxyManager() -> vtkSMSessionProxyManager\nC++: virtual vtkSMSessionProxyManager *GetSessionProxyManager()\n\nReturns the vtkSMSessionProxyManager associated with this\nsession.\n"},
  {"GetNumberOfProcesses", PyvtkSMSession_GetNumberOfProcesses, METH_VARARGS,
   "V.GetNumberOfProcesses(int) -> int\nC++: virtual int GetNumberOfProcesses(vtkTypeUInt32 servers)\n\nReturns the number of processes on the given server/s. If more\nthan 1 server is identified, then it returns the maximum number\nof processes e.g. is servers = DATA_SERVER | RENDER_SERVER and\nthere are 3 data-server nodes and 2 render-server nodes, then\nthis method will return 3. Implementation provided simply returns\nthe number of local processes.\n"},
  {"IsMPIInitialized", PyvtkSMSession_IsMPIInitialized, METH_VARARGS,
   "V.IsMPIInitialized(int) -> bool\nC++: virtual bool IsMPIInitialized(vtkTypeUInt32 servers)\n\nReturns whether or not MPI is initialized on the specified\nserver/s. If more than 1 server is identified it will return true\nonly if all of the servers have MPI initialized.\n"},
  {"GetProxyLocator", PyvtkSMSession_GetProxyLocator, METH_VARARGS,
   "V.GetProxyLocator() -> vtkSMProxyLocator\nC++: virtual vtkSMProxyLocator *GetProxyLocator()\n\n"},
  {"GetRenderClientMode", PyvtkSMSession_GetRenderClientMode, METH_VARARGS,
   "V.GetRenderClientMode() -> int\nC++: virtual unsigned int GetRenderClientMode()\n\nConvenient method to determine if the rendering is done in a\npvrenderer or not. For built-in or pvserver you will get\nRENDERING_UNIFIED and for a setting with a pvrenderer you will\nget RENDERING_SPLIT. If the session is something else it should\nreply RENDERING_NOT_AVAILABLE.\n"},
  {"GetStateLocator", PyvtkSMSession_GetStateLocator, METH_VARARGS,
   "V.GetStateLocator() -> vtkSMStateLocator\nC++: virtual vtkSMStateLocator *GetStateLocator()\n\nProvide an access to the session state locator that can provide\nthe last state of a given remote object that have been pushed.\nThat locator will be filled by RemoteObject state only if the\nUndoStackBuilder in vtkSMProxyManager is non-null.\n"},
  {"GetIsAlive", PyvtkSMSession_GetIsAlive, METH_VARARGS,
   "V.GetIsAlive() -> bool\nC++: bool GetIsAlive() override;\n\nBuiltin session is always alive.\n"},
  {"PushState", PyvtkSMSession_PushState, METH_VARARGS,
   "V.PushState(vtkSMMessage)\nC++: void PushState(vtkSMMessage *msg) override;\n\nPush the state message. Overridden to ensure that the information\nin the undo-redo state manager is updated.\n"},
  {"NotifyAllClients", PyvtkSMSession_NotifyAllClients, METH_VARARGS,
   "V.NotifyAllClients(vtkSMMessage)\nC++: void NotifyAllClients(const vtkSMMessage *msg) override;\n\nSends the message to all clients.\n"},
  {"NotifyOtherClients", PyvtkSMSession_NotifyOtherClients, METH_VARARGS,
   "V.NotifyOtherClients(vtkSMMessage)\nC++: void NotifyOtherClients(const vtkSMMessage *) override;\n\nSends the message to all but the active client-session.\n"},
  {"PreDisconnection", PyvtkSMSession_PreDisconnection, METH_VARARGS,
   "V.PreDisconnection()\nC++: virtual void PreDisconnection()\n\n"},
  {"ConnectToCatalyst", PyvtkSMSession_ConnectToCatalyst, METH_VARARGS,
   "V.ConnectToCatalyst() -> int\nC++: static vtkIdType ConnectToCatalyst()\n\nThese are static helper methods that help create Catalyst\nParaView sessions. They register the session with the process\nmodule and return the session id. Returns 0 on failure. This\noverload is used to create a catalyst built-in session.\n"},
  {"ConnectToSelf", PyvtkSMSession_ConnectToSelf, METH_VARARGS,
   "V.ConnectToSelf(int) -> int\nC++: static vtkIdType ConnectToSelf(int timeout=60)\n\nThese are static helper methods that help create standard\nParaView sessions. They register the session with the process\nmodule and return the session id. It will try to connect for\ntimeout seconds, -1 meaning infinite retries. and 0 means no\nretry. Returns 0 on failure. This overload is used to create a\nbuilt-in session.\n"},
  {"ConnectToRemote", PyvtkSMSession_ConnectToRemote, METH_VARARGS,
   "V.ConnectToRemote(string, int, int) -> int\nC++: static vtkIdType ConnectToRemote(const char *hostname,\n    int port, int timeout=60)\nV.ConnectToRemote(string, int, string, int, int) -> int\nC++: static vtkIdType ConnectToRemote(const char *dshost,\n    int dsport, const char *rshost, int rsport, int timeout=60)\n\nThese are static helper methods that help create standard\nParaView sessions. They register the session with the process\nmodule and return the session id. It will try to connect for\ntimeout seconds, -1 meaning infinite retries. and 0 means no\nretry. Returns 0 on failure. Returns 0 on failure. This overload\nis used to create a client-server session on client.\n"},
  {"ReverseConnectToRemote", PyvtkSMSession_ReverseConnectToRemote, METH_VARARGS,
   "V.ReverseConnectToRemote(int) -> int\nC++: static vtkIdType ReverseConnectToRemote(int port)\nV.ReverseConnectToRemote(int, int) -> int\nC++: static vtkIdType ReverseConnectToRemote(int dsport,\n    int rsport)\n\nSame as ConnectToRemote() except that it waits for a reverse\nconnection. This is a blocking call. One can optionally provide a\ncallback that can be called periodically while this call is\nblocked. The callback should return true, if the connection\nshould continue waiting, else return false to abort the wait.\n"},
  {"Disconnect", PyvtkSMSession_Disconnect, METH_VARARGS,
   "V.Disconnect(int)\nC++: static void Disconnect(vtkIdType sessionid)\nV.Disconnect(vtkSMSession)\nC++: static void Disconnect(vtkSMSession *session)\n\nUse this method to disconnect from a session. This ensures that\nappropriate cleanup happens before the disconnect such as\nunregistering proxies. It also ensures that if in collaboration\nmode, the proxy unregistering doesn't affect other connected\nclients.\n"},
  {"GetIsAutoMPI", PyvtkSMSession_GetIsAutoMPI, METH_VARARGS,
   "V.GetIsAutoMPI() -> bool\nC++: virtual bool GetIsAutoMPI()\n\nThis flag if set indicates that the current session module has\nautomatically started \"pvservers\" as MPI processes as default\npipeline.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSession_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSession", // tp_name
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
  PyvtkSMSession_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSession_StaticNew()
{
  return vtkSMSession::New();
}

PyObject *PyvtkSMSession_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSession_Type, PyvtkSMSession_Methods,
    "vtkSMSession",
 &PyvtkSMSession_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSession_Type;

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

  PyType_Ready(&PyvtkSMSession_RenderingMode_Type);
  PyvtkSMSession_RenderingMode_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMSession_RenderingMode_Type);

  o = (PyObject *)&PyvtkSMSession_RenderingMode_Type;
  if (PyDict_SetItemString(d, "RenderingMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSMSession::RenderingMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "RENDERING_NOT_AVAILABLE", vtkSMSession::RENDERING_NOT_AVAILABLE },
        { "RENDERING_UNIFIED", vtkSMSession::RENDERING_UNIFIED },
        { "RENDERING_SPLIT", vtkSMSession::RENDERING_SPLIT },
      };

    o = PyvtkSMSession_RenderingMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMSession(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSession_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSession", o) != 0)
  {
    Py_DECREF(o);
  }

}

