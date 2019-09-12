// python wrapper for vtkPVSessionCore
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
#include "vtkPVSessionCore.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVSessionCore(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVSessionCore_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVSessionCore_Doc =
  "vtkPVSessionCore - vtkPVSessionCore is used by vtkSMSession.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVSessionCore handle the communication to MPI satellites and\n"
  "ServerImplementation code instantiation and execution. On the other\n"
  "hand, the vtkSMSession dispatch the request to the right process and\n"
  "therefore to the right vtkPVSessionCore instance.\n\n";

static PyTypeObject PyvtkPVSessionCore_MessageTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkPVSessionCore.MessageTypes", // tp_name
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

PyObject *PyvtkPVSessionCore_MessageTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPVSessionCore_MessageTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVSessionCore_MessageTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPVSessionCore_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVSessionCore::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSessionCore::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVSessionCore *tempr = vtkPVSessionCore::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSessionCore *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSessionCore::NewInstance());

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
PyvtkPVSessionCore_GetInterpreter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpreter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClientServerInterpreter *tempr = (ap.IsBound() ?
      op->GetInterpreter() :
      op->vtkPVSessionCore::GetInterpreter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetProxyDefinitionManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyDefinitionManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIProxyDefinitionManager *tempr = (ap.IsBound() ?
      op->GetProxyDefinitionManager() :
      op->vtkPVSessionCore::GetProxyDefinitionManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_PushState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

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
      op->vtkPVSessionCore::PushState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_PullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

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
      op->vtkPVSessionCore::PullState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_ExecuteStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

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
      op->vtkPVSessionCore::ExecuteStream(temp0, *temp1, temp2);
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
PyvtkPVSessionCore_GetLastResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkClientServerStream *tempr = (ap.IsBound() ?
      &op->GetLastResult() :
      &op->vtkPVSessionCore::GetLastResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkClientServerStream");
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_UnRegisterSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

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
      op->vtkPVSessionCore::UnRegisterSIObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_RegisterSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

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
      op->vtkPVSessionCore::RegisterSIObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSIObject *tempr = (ap.IsBound() ?
      op->GetSIObject(temp0) :
      op->vtkPVSessionCore::GetSIObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetRemoteObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoteObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetRemoteObject(temp0) :
      op->vtkPVSessionCore::GetRemoteObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_RegisterRemoteObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterRemoteObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  unsigned int temp0;
  vtkObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->RegisterRemoteObject(temp0, temp1);
    }
    else
    {
      op->vtkPVSessionCore::RegisterRemoteObject(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_UnRegisterRemoteObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterRemoteObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnRegisterRemoteObject(temp0);
    }
    else
    {
      op->vtkPVSessionCore::UnRegisterRemoteObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GatherInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

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
      op->vtkPVSessionCore::GatherInformation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkPVSessionCore::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_SetMPIMToNSocketConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMPIMToNSocketConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  vtkMPIMToNSocketConnection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPIMToNSocketConnection"))
  {
    if (ap.IsBound())
    {
      op->SetMPIMToNSocketConnection(temp0);
    }
    else
    {
      op->vtkPVSessionCore::SetMPIMToNSocketConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetMPIMToNSocketConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMPIMToNSocketConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMPIMToNSocketConnection *tempr = (ap.IsBound() ?
      op->GetMPIMToNSocketConnection() :
      op->vtkPVSessionCore::GetMPIMToNSocketConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetNextGlobalUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextGlobalUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextGlobalUniqueIdentifier() :
      op->vtkPVSessionCore::GetNextGlobalUniqueIdentifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetNextChunkGlobalUniqueIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextChunkGlobalUniqueIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNextChunkGlobalUniqueIdentifier(temp0) :
      op->vtkPVSessionCore::GetNextChunkGlobalUniqueIdentifier(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_PushStateSatelliteCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushStateSatelliteCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushStateSatelliteCallback();
    }
    else
    {
      op->vtkPVSessionCore::PushStateSatelliteCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_ExecuteStreamSatelliteCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteStreamSatelliteCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExecuteStreamSatelliteCallback();
    }
    else
    {
      op->vtkPVSessionCore::ExecuteStreamSatelliteCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GatherInformationStatelliteCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformationStatelliteCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GatherInformationStatelliteCallback();
    }
    else
    {
      op->vtkPVSessionCore::GatherInformationStatelliteCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_RegisterSIObjectSatelliteCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterSIObjectSatelliteCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterSIObjectSatelliteCallback();
    }
    else
    {
      op->vtkPVSessionCore::RegisterSIObjectSatelliteCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_UnRegisterSIObjectSatelliteCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSIObjectSatelliteCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnRegisterSIObjectSatelliteCallback();
    }
    else
    {
      op->vtkPVSessionCore::UnRegisterSIObjectSatelliteCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GetAllRemoteObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllRemoteObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

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
      op->vtkPVSessionCore::GetAllRemoteObjects(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSessionCore_GarbageCollectSIObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GarbageCollectSIObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSessionCore *op = static_cast<vtkPVSessionCore *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GarbageCollectSIObject(temp0, temp1);
    }
    else
    {
      op->vtkPVSessionCore::GarbageCollectSIObject(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVSessionCore_Methods[] = {
  {"IsTypeOf", PyvtkPVSessionCore_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVSessionCore_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVSessionCore_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVSessionCore\nC++: static vtkPVSessionCore *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVSessionCore_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVSessionCore\nC++: vtkPVSessionCore *NewInstance()\n\n"},
  {"GetInterpreter", PyvtkPVSessionCore_GetInterpreter, METH_VARARGS,
   "V.GetInterpreter() -> vtkClientServerInterpreter\nC++: virtual vtkClientServerInterpreter *GetInterpreter()\n\nProvides access to the interpreter.\n"},
  {"GetProxyDefinitionManager", PyvtkPVSessionCore_GetProxyDefinitionManager, METH_VARARGS,
   "V.GetProxyDefinitionManager() -> vtkSIProxyDefinitionManager\nC++: virtual vtkSIProxyDefinitionManager *GetProxyDefinitionManager(\n    )\n\nProvides access to the proxy definition manager.\n"},
  {"PushState", PyvtkPVSessionCore_PushState, METH_VARARGS,
   "V.PushState(vtkSMMessage)\nC++: virtual void PushState(vtkSMMessage *message)\n\nPush the state message. This might forward the message to the MPI\nstatellites if needed.\n"},
  {"PullState", PyvtkPVSessionCore_PullState, METH_VARARGS,
   "V.PullState(vtkSMMessage)\nC++: virtual void PullState(vtkSMMessage *message)\n\nPull the state message from the local SI object instances.\n"},
  {"ExecuteStream", PyvtkPVSessionCore_ExecuteStream, METH_VARARGS,
   "V.ExecuteStream(int, vtkClientServerStream, bool)\nC++: virtual void ExecuteStream(vtkTypeUInt32 location,\n    const vtkClientServerStream &stream, bool ignore_errors=false)\n\nExecute a command on the given processes. Use GetLastResult() to\nobtain the last result after the command stream is evaluated.\nOnce can setignore_errors to true, to ignore any interpreting\nerrors.\n"},
  {"GetLastResult", PyvtkPVSessionCore_GetLastResult, METH_VARARGS,
   "V.GetLastResult() -> vtkClientServerStream\nC++: virtual const vtkClientServerStream &GetLastResult()\n\nReturns the response of the ExecuteStream() call from the\nlocation. Note if location refers to multiple processes, then the\nreply is only fetched from the \"closest\" process.\n"},
  {"UnRegisterSIObject", PyvtkPVSessionCore_UnRegisterSIObject, METH_VARARGS,
   "V.UnRegisterSIObject(vtkSMMessage)\nC++: virtual void UnRegisterSIObject(vtkSMMessage *message)\n\nNotify that the given SIObject is not used anymore . This does\nnot necessary delete the SIObject specially if this one is used\nby other local SIObject. It only decrease its reference count.\n"},
  {"RegisterSIObject", PyvtkPVSessionCore_RegisterSIObject, METH_VARARGS,
   "V.RegisterSIObject(vtkSMMessage)\nC++: virtual void RegisterSIObject(vtkSMMessage *message)\n\nNotify that the given SIObject is used. It only increase its\nreference count.\n"},
  {"GetSIObject", PyvtkPVSessionCore_GetSIObject, METH_VARARGS,
   "V.GetSIObject(int) -> vtkSIObject\nC++: vtkSIObject *GetSIObject(vtkTypeUInt32 globalid)\n\nReturns a vtkSIObject or subclass given its global id, if any\notherwise return NULL;\n"},
  {"GetRemoteObject", PyvtkPVSessionCore_GetRemoteObject, METH_VARARGS,
   "V.GetRemoteObject(int) -> vtkObject\nC++: vtkObject *GetRemoteObject(vtkTypeUInt32 globalid)\n\nReturn a vtkObject given its global id if any otherwise return\nNULL;\n"},
  {"RegisterRemoteObject", PyvtkPVSessionCore_RegisterRemoteObject, METH_VARARGS,
   "V.RegisterRemoteObject(int, vtkObject)\nC++: void RegisterRemoteObject(vtkTypeUInt32 globalid,\n    vtkObject *obj)\n\nRegister a remote object\n"},
  {"UnRegisterRemoteObject", PyvtkPVSessionCore_UnRegisterRemoteObject, METH_VARARGS,
   "V.UnRegisterRemoteObject(int)\nC++: void UnRegisterRemoteObject(vtkTypeUInt32 globalid)\n\nUnregister a remote object\n"},
  {"GatherInformation", PyvtkPVSessionCore_GatherInformation, METH_VARARGS,
   "V.GatherInformation(int, vtkPVInformation, int) -> bool\nC++: virtual bool GatherInformation(vtkTypeUInt32 location,\n    vtkPVInformation *information, vtkTypeUInt32 globalid)\n\nGather information about an object referred by the\nglobalid.location identifies the processes to gather the\ninformation from.\n"},
  {"GetNumberOfProcesses", PyvtkPVSessionCore_GetNumberOfProcesses, METH_VARARGS,
   "V.GetNumberOfProcesses() -> int\nC++: int GetNumberOfProcesses()\n\nReturns the number of processes. This simply calls the\nGetNumberOfProcesses() on this->ParallelController\n"},
  {"SetMPIMToNSocketConnection", PyvtkPVSessionCore_SetMPIMToNSocketConnection, METH_VARARGS,
   "V.SetMPIMToNSocketConnection(vtkMPIMToNSocketConnection)\nC++: void SetMPIMToNSocketConnection(vtkMPIMToNSocketConnection *)\n\nGet/Set the socket connection used to communicate between\ndata=server and render-server processes. This is valid only on\ndata-server and render-server processes.\n"},
  {"GetMPIMToNSocketConnection", PyvtkPVSessionCore_GetMPIMToNSocketConnection, METH_VARARGS,
   "V.GetMPIMToNSocketConnection() -> vtkMPIMToNSocketConnection\nC++: virtual vtkMPIMToNSocketConnection *GetMPIMToNSocketConnection(\n    )\n\nGet/Set the socket connection used to communicate between\ndata=server and render-server processes. This is valid only on\ndata-server and render-server processes.\n"},
  {"GetNextGlobalUniqueIdentifier", PyvtkPVSessionCore_GetNextGlobalUniqueIdentifier, METH_VARARGS,
   "V.GetNextGlobalUniqueIdentifier() -> int\nC++: virtual vtkTypeUInt32 GetNextGlobalUniqueIdentifier()\n\nProvides the next available identifier. This implementation works\nlocally. without any code distribution. To support the\ndistributed architecture the vtkSMSessionClient override those\nmethod to call them on the DATA_SERVER vtkPVSessionBase instance.\n"},
  {"GetNextChunkGlobalUniqueIdentifier", PyvtkPVSessionCore_GetNextChunkGlobalUniqueIdentifier, METH_VARARGS,
   "V.GetNextChunkGlobalUniqueIdentifier(int) -> int\nC++: virtual vtkTypeUInt32 GetNextChunkGlobalUniqueIdentifier(\n    vtkTypeUInt32 chunkSize)\n\nReturn the first Id of the requested chunk. 1 =\nReverveNextIdChunk(10); | Reserved ids [1,2,3,4,5,6,7,8,9,10] 11\n= ReverveNextIdChunk(10);| Reserved ids\n[11,12,13,14,15,16,17,18,19,20] b = a + 10;\n"},
  {"PushStateSatelliteCallback", PyvtkPVSessionCore_PushStateSatelliteCallback, METH_VARARGS,
   "V.PushStateSatelliteCallback()\nC++: void PushStateSatelliteCallback()\n\n"},
  {"ExecuteStreamSatelliteCallback", PyvtkPVSessionCore_ExecuteStreamSatelliteCallback, METH_VARARGS,
   "V.ExecuteStreamSatelliteCallback()\nC++: void ExecuteStreamSatelliteCallback()\n\n"},
  {"GatherInformationStatelliteCallback", PyvtkPVSessionCore_GatherInformationStatelliteCallback, METH_VARARGS,
   "V.GatherInformationStatelliteCallback()\nC++: void GatherInformationStatelliteCallback()\n\n"},
  {"RegisterSIObjectSatelliteCallback", PyvtkPVSessionCore_RegisterSIObjectSatelliteCallback, METH_VARARGS,
   "V.RegisterSIObjectSatelliteCallback()\nC++: void RegisterSIObjectSatelliteCallback()\n\n"},
  {"UnRegisterSIObjectSatelliteCallback", PyvtkPVSessionCore_UnRegisterSIObjectSatelliteCallback, METH_VARARGS,
   "V.UnRegisterSIObjectSatelliteCallback()\nC++: void UnRegisterSIObjectSatelliteCallback()\n\n"},
  {"GetAllRemoteObjects", PyvtkPVSessionCore_GetAllRemoteObjects, METH_VARARGS,
   "V.GetAllRemoteObjects(vtkCollection)\nC++: virtual void GetAllRemoteObjects(vtkCollection *collection)\n\nAllow the user to fill a vtkCollection with all RemoteObjects\nThis is useful when you want to hold a reference to them to\nprevent any deletion across several method call.\n"},
  {"GarbageCollectSIObject", PyvtkPVSessionCore_GarbageCollectSIObject, METH_VARARGS,
   "V.GarbageCollectSIObject([int, ...], int)\nC++: void GarbageCollectSIObject(int *clientIds, int nbClients)\n\nDelete SIObject that are held by clients that disappeared from\nthe given list.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVSessionCore_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkPVSessionCore", // tp_name
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
  PyvtkPVSessionCore_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVSessionCore_StaticNew()
{
  return vtkPVSessionCore::New();
}

PyObject *PyvtkPVSessionCore_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVSessionCore_Type, PyvtkPVSessionCore_Methods,
    "vtkPVSessionCore",
 &PyvtkPVSessionCore_StaticNew);

  PyTypeObject *pytype = &PyvtkPVSessionCore_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPVSessionCore_MessageTypes_Type);
  PyvtkPVSessionCore_MessageTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPVSessionCore_MessageTypes_Type);

  o = (PyObject *)&PyvtkPVSessionCore_MessageTypes_Type;
  if (PyDict_SetItemString(d, "MessageTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkPVSessionCore::MessageTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "PUSH_STATE", vtkPVSessionCore::PUSH_STATE },
        { "PULL_STATE", vtkPVSessionCore::PULL_STATE },
        { "EXECUTE_STREAM", vtkPVSessionCore::EXECUTE_STREAM },
        { "GATHER_INFORMATION", vtkPVSessionCore::GATHER_INFORMATION },
        { "REGISTER_SI", vtkPVSessionCore::REGISTER_SI },
        { "UNREGISTER_SI", vtkPVSessionCore::UNREGISTER_SI },
      };

    o = PyvtkPVSessionCore_MessageTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVSessionCore(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVSessionCore_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVSessionCore", o) != 0)
  {
    Py_DECREF(o);
  }

}

