// python wrapper for vtkPVSession
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
#include "vtkPVSession.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVSession(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVSession_ClassNew(); }

#ifndef DECLARED_PyvtkSession_ClassNew
extern "C" { PyObject *PyvtkSession_ClassNew(); }
#define DECLARED_PyvtkSession_ClassNew
#endif

static const char *PyvtkPVSession_Doc =
  "vtkPVSession - extends vtkSession to add API for ParaView sessions.\n\n"
  "Superclass: vtkSession\n\n"
  "vtkPVSession adds APIs to vtkSession for ParaView-specific sessions,\n"
  "namely those that are used to communicate between\n"
  "data-server,render-server and client. This is an abstract class.\n\n";

static PyTypeObject PyvtkPVSession_ServerFlags_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVSession.ServerFlags", // tp_name
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

PyObject *PyvtkPVSession_ServerFlags_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPVSession_ServerFlags_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVSession_ServerFlags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPVSession_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVSession::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSession_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSession::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSession_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVSession *tempr = vtkPVSession::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSession_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSession *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSession::NewInstance());

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
PyvtkPVSession_GetProcessRoles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessRoles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkPVSession::ServerFlags tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetProcessRoles() :
      op->vtkPVSession::GetProcessRoles());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkPVSession_ServerFlags_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSession_HasProcessRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasProcessRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasProcessRole(temp0) :
      op->vtkPVSession::HasProcessRole(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSession_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  typedef vtkPVSession::ServerFlags temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkPVSession.ServerFlags"))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController(temp0) :
      op->vtkPVSession::GetController(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSession_GetMPIMToNSocketConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMPIMToNSocketConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMPIMToNSocketConnection *tempr = (ap.IsBound() ?
      op->GetMPIMToNSocketConnection() :
      op->vtkPVSession::GetMPIMToNSocketConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSession_GetServerInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkPVServerInformation *tempr = op->GetServerInformation();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSession_IsMultiClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMultiClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMultiClients() :
      op->vtkPVSession::IsMultiClients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSession_GetProgressHandler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressHandler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVProgressHandler *tempr = (ap.IsBound() ?
      op->GetProgressHandler() :
      op->vtkPVSession::GetProgressHandler());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSession_PrepareProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrepareProgress();
    }
    else
    {
      op->vtkPVSession::PrepareProgress();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSession_CleanupPendingProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanupPendingProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CleanupPendingProgress();
    }
    else
    {
      op->vtkPVSession::CleanupPendingProgress();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSession_GetPendingProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPendingProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSession *op = static_cast<vtkPVSession *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPendingProgress() :
      op->vtkPVSession::GetPendingProgress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVSession_Methods[] = {
  {"IsTypeOf", PyvtkPVSession_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVSession_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVSession_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVSession\nC++: static vtkPVSession *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVSession_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVSession\nC++: vtkPVSession *NewInstance()\n\n"},
  {"GetProcessRoles", PyvtkPVSession_GetProcessRoles, METH_VARARGS,
   "V.GetProcessRoles() -> ServerFlags\nC++: virtual ServerFlags GetProcessRoles()\n\nReturns a ServerFlags indicate the nature of the current\nprocesses. e.g. if the current processes acts as a data-server\nand a render-server, it returns DATA_SERVER | RENDER_SERVER.\n"},
  {"HasProcessRole", PyvtkPVSession_HasProcessRole, METH_VARARGS,
   "V.HasProcessRole(int) -> bool\nC++: bool HasProcessRole(vtkTypeUInt32 flag)\n\nConvenience method that returns true if the current session is\nserving the indicated role on this process.\n"},
  {"GetController", PyvtkPVSession_GetController, METH_VARARGS,
   "V.GetController(ServerFlags) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController(\n    ServerFlags processType)\n\nReturns the controller used to communicate with the process.\nValue must be DATA_SERVER_ROOT or RENDER_SERVER_ROOT or CLIENT.\nDefault implementation returns NULL.\n"},
  {"GetMPIMToNSocketConnection", PyvtkPVSession_GetMPIMToNSocketConnection, METH_VARARGS,
   "V.GetMPIMToNSocketConnection() -> vtkMPIMToNSocketConnection\nC++: virtual vtkMPIMToNSocketConnection *GetMPIMToNSocketConnection(\n    )\n\nThis is socket connection, if any to communicate between the\ndata-server and render-server nodes.\n"},
  {"GetServerInformation", PyvtkPVSession_GetServerInformation, METH_VARARGS,
   "V.GetServerInformation() -> vtkPVServerInformation\nC++: virtual vtkPVServerInformation *GetServerInformation()\n\nvtkPVServerInformation is an information-object that provides\ninformation about the server processes. These include server-side\ncapabilities as well as server-side command line arguments e.g.\ntile-display parameters. Use this method to obtain the\nserver-side information. NOTE: For now, we are not bothering to\nprovide separate information from data-server and render-server\n(as was the case earlier). We can easily add API for the same if\nneeded.\n"},
  {"IsMultiClients", PyvtkPVSession_IsMultiClients, METH_VARARGS,
   "V.IsMultiClients() -> bool\nC++: virtual bool IsMultiClients()\n\nAllow anyone to know easily if the current session is involved in\ncollaboration or not. This is mostly true for the Client side.\n"},
  {"GetProgressHandler", PyvtkPVSession_GetProgressHandler, METH_VARARGS,
   "V.GetProgressHandler() -> vtkPVProgressHandler\nC++: virtual vtkPVProgressHandler *GetProgressHandler()\n\nProvides access to the progress handler.\n"},
  {"PrepareProgress", PyvtkPVSession_PrepareProgress, METH_VARARGS,
   "V.PrepareProgress()\nC++: void PrepareProgress()\n\nShould be called to begin/end receiving progresses on this\nsession.\n"},
  {"CleanupPendingProgress", PyvtkPVSession_CleanupPendingProgress, METH_VARARGS,
   "V.CleanupPendingProgress()\nC++: void CleanupPendingProgress()\n\nShould be called to begin/end receiving progresses on this\nsession.\n"},
  {"GetPendingProgress", PyvtkPVSession_GetPendingProgress, METH_VARARGS,
   "V.GetPendingProgress() -> bool\nC++: bool GetPendingProgress()\n\nReturns true if the session is within a PrepareProgress() and\nCleanupPendingProgress() block.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVSession_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVSession", // tp_name
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
  PyvtkPVSession_Doc, // tp_doc
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

PyObject *PyvtkPVSession_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVSession_Type, PyvtkPVSession_Methods,
    "vtkPVSession",
 nullptr);

  PyTypeObject *pytype = &PyvtkPVSession_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSession_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPVSession_ServerFlags_Type);
  PyvtkPVSession_ServerFlags_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPVSession_ServerFlags_Type);

  o = (PyObject *)&PyvtkPVSession_ServerFlags_Type;
  if (PyDict_SetItemString(d, "ServerFlags", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkPVSession::ServerFlags cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "NONE", vtkPVSession::NONE },
        { "DATA_SERVER", vtkPVSession::DATA_SERVER },
        { "DATA_SERVER_ROOT", vtkPVSession::DATA_SERVER_ROOT },
        { "RENDER_SERVER", vtkPVSession::RENDER_SERVER },
        { "RENDER_SERVER_ROOT", vtkPVSession::RENDER_SERVER_ROOT },
        { "SERVERS", vtkPVSession::SERVERS },
        { "CLIENT", vtkPVSession::CLIENT },
        { "CLIENT_AND_SERVERS", vtkPVSession::CLIENT_AND_SERVERS },
      };

    o = PyvtkPVSession_ServerFlags_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVSession(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVSession_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVSession", o) != 0)
  {
    Py_DECREF(o);
  }

}

