// python wrapper for vtkProcessModule
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
#include "vtkStdString.h"
#include "vtkProcessModule.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProcessModule(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProcessModule_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkProcessModule_Doc =
  "vtkProcessModule - process initialization and management core for\n\n"
  "Superclass: vtkObject\n\n"
  "ParaView processes. vtkProcessModule is the process initialization\n"
  "and session management core for ParaView processes.\n\n";

static PyTypeObject PyvtkProcessModule_ProcessTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkProcessModule.ProcessTypes", // tp_name
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

PyObject *PyvtkProcessModule_ProcessTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkProcessModule_ProcessTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkProcessModule_ProcessTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkProcessModule_ServerFlags_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkProcessModule.ServerFlags", // tp_name
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

PyObject *PyvtkProcessModule_ServerFlags_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkProcessModule_ServerFlags_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkProcessModule_ServerFlags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkProcessModule_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProcessModule::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProcessModule::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProcessModule *tempr = vtkProcessModule::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProcessModule *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProcessModule::NewInstance());

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
PyvtkProcessModule_GetProcessType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProcessType");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    typedef vtkProcessModule::ProcessTypes tempr_type;
  tempr_type tempr = vtkProcessModule::GetProcessType();

    if (!ap.ErrorOccurred())
    {
      result = PyvtkProcessModule_ProcessTypes_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetProcessTypeAsInt(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProcessTypeAsInt");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    unsigned int tempr = vtkProcessModule::GetProcessTypeAsInt();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_UpdateProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  typedef vtkProcessModule::ProcessTypes temp0_type;
  temp0_type temp0;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetEnumValue(temp0, "vtkProcessModule.ProcessTypes") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->UpdateProcessType(temp0, temp1);
    }
    else
    {
      op->vtkProcessModule::UpdateProcessType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_Finalize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Finalize");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkProcessModule::Finalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_RegisterSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSession"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->RegisterSession(temp0) :
      op->vtkProcessModule::RegisterSession(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_UnRegisterSession_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterSession(temp0) :
      op->vtkProcessModule::UnRegisterSession(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkProcessModule_UnRegisterSession_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSession"))
  {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterSession(temp0) :
      op->vtkProcessModule::UnRegisterSession(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProcessModule_UnRegisterSession_Methods[] = {
  {nullptr, PyvtkProcessModule_UnRegisterSession_s1, METH_VARARGS,
   "@k"},
  {nullptr, PyvtkProcessModule_UnRegisterSession_s2, METH_VARARGS,
   "@V *vtkSession"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkProcessModule_UnRegisterSession(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProcessModule_UnRegisterSession_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UnRegisterSession");
  return nullptr;
}



static PyObject *
PyvtkProcessModule_GetEventCallDataSessionId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventCallDataSessionId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetEventCallDataSessionId() :
      op->vtkProcessModule::GetEventCallDataSessionId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetSession_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSession *tempr = (ap.IsBound() ?
      op->GetSession(temp0) :
      op->vtkProcessModule::GetSession(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkProcessModule_GetSession_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkProcessModule::GetSession());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkProcessModule_GetSession(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkProcessModule_GetSession_s1(self, args);
    case 0:
      return PyvtkProcessModule_GetSession_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSession");
  return nullptr;
}



static PyObject *
PyvtkProcessModule_GetSessionID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSession"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSessionID(temp0) :
      op->vtkProcessModule::GetSessionID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_NewSessionIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewSessionIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSessionIterator *tempr = (ap.IsBound() ?
      op->NewSessionIterator() :
      op->vtkProcessModule::NewSessionIterator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetActiveSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSession *tempr = (ap.IsBound() ?
      op->GetActiveSession() :
      op->vtkProcessModule::GetActiveSession());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetMultipleSessionsSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultipleSessionsSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMultipleSessionsSupport() :
      op->vtkProcessModule::GetMultipleSessionsSupport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_SetMultipleSessionsSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultipleSessionsSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMultipleSessionsSupport(temp0);
    }
    else
    {
      op->vtkProcessModule::SetMultipleSessionsSupport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_MultipleSessionsSupportOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleSessionsSupportOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultipleSessionsSupportOn();
    }
    else
    {
      op->vtkProcessModule::MultipleSessionsSupportOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_MultipleSessionsSupportOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleSessionsSupportOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultipleSessionsSupportOff();
    }
    else
    {
      op->vtkProcessModule::MultipleSessionsSupportOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetProcessModule(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProcessModule");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkProcessModule *tempr = vtkProcessModule::GetProcessModule();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVOptions *tempr = (ap.IsBound() ?
      op->GetOptions() :
      op->vtkProcessModule::GetOptions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_SetOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkPVOptions *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVOptions"))
  {
    if (ap.IsBound())
    {
      op->SetOptions(temp0);
    }
    else
    {
      op->vtkProcessModule::SetOptions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetNetworkAccessManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNetworkAccessManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNetworkAccessManager *tempr = (ap.IsBound() ?
      op->GetNetworkAccessManager() :
      op->vtkProcessModule::GetNetworkAccessManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_SetNetworkAccessManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNetworkAccessManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  vtkNetworkAccessManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkNetworkAccessManager"))
  {
    if (ap.IsBound())
    {
      op->SetNetworkAccessManager(temp0);
    }
    else
    {
      op->vtkProcessModule::SetNetworkAccessManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetGlobalController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetGlobalController() :
      op->vtkProcessModule::GetGlobalController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetNumberOfLocalPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLocalPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLocalPartitions() :
      op->vtkProcessModule::GetNumberOfLocalPartitions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetPartitionId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartitionId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPartitionId() :
      op->vtkProcessModule::GetPartitionId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_IsMPIInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMPIInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMPIInitialized() :
      op->vtkProcessModule::IsMPIInitialized());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetReportInterpreterErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReportInterpreterErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReportInterpreterErrors() :
      op->vtkProcessModule::GetReportInterpreterErrors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_SetReportInterpreterErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReportInterpreterErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReportInterpreterErrors(temp0);
    }
    else
    {
      op->vtkProcessModule::SetReportInterpreterErrors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_ReportInterpreterErrorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportInterpreterErrorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReportInterpreterErrorsOn();
    }
    else
    {
      op->vtkProcessModule::ReportInterpreterErrorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_ReportInterpreterErrorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportInterpreterErrorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReportInterpreterErrorsOff();
    }
    else
    {
      op->vtkProcessModule::ReportInterpreterErrorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetSymmetricMPIMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymmetricMPIMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSymmetricMPIMode() :
      op->vtkProcessModule::GetSymmetricMPIMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetProgramPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgramPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetProgramPath() :
      op->vtkProcessModule::GetProgramPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetSelfDir(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelfDir");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessModule *op = static_cast<vtkProcessModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSelfDir() :
      op->vtkProcessModule::GetSelfDir());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_SetDefaultMinimumGhostLevelsToRequestForStructuredPipelines(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDefaultMinimumGhostLevelsToRequestForStructuredPipelines");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkProcessModule::SetDefaultMinimumGhostLevelsToRequestForStructuredPipelines(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetDefaultMinimumGhostLevelsToRequestForStructuredPipelines(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDefaultMinimumGhostLevelsToRequestForStructuredPipelines");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkProcessModule::GetDefaultMinimumGhostLevelsToRequestForStructuredPipelines();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_SetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkProcessModule::SetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkProcessModule::GetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessModule_GetNumberOfGhostLevelsToRequest(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGhostLevelsToRequest");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = vtkProcessModule::GetNumberOfGhostLevelsToRequest(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProcessModule_Methods[] = {
  {"IsTypeOf", PyvtkProcessModule_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProcessModule_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProcessModule_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProcessModule\nC++: static vtkProcessModule *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProcessModule_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProcessModule\nC++: vtkProcessModule *NewInstance()\n\n"},
  {"GetProcessType", PyvtkProcessModule_GetProcessType, METH_VARARGS,
   "V.GetProcessType() -> ProcessTypes\nC++: static ProcessTypes GetProcessType()\n\n"},
  {"GetProcessTypeAsInt", PyvtkProcessModule_GetProcessTypeAsInt, METH_VARARGS,
   "V.GetProcessTypeAsInt() -> int\nC++: static unsigned int GetProcessTypeAsInt()\n\n"},
  {"UpdateProcessType", PyvtkProcessModule_UpdateProcessType, METH_VARARGS,
   "V.UpdateProcessType(ProcessTypes, bool)\nC++: void UpdateProcessType(ProcessTypes newType,\n    bool dontKnowWhatImDoing=true)\n\nThis method has been added to support migration from one type to\nanother but this method call if NOT RECOMMENDED.\n-> We use it to handle the Animation saving at disconnection time\non the server side. We create a new session and migrate the sever\nprocess to a batch process.\n"},
  {"Finalize", PyvtkProcessModule_Finalize, METH_VARARGS,
   "V.Finalize() -> bool\nC++: static bool Finalize()\n\nFinalizes and cleans up the process.\n"},
  {"RegisterSession", PyvtkProcessModule_RegisterSession, METH_VARARGS,
   "V.RegisterSession(vtkSession) -> int\nC++: vtkIdType RegisterSession(vtkSession *)\n\nRegisters a new session. A new ID is assigned for the session and\nthat ID is returned. The ID can be used in future to access this\nsession. Fires vtkCommand::ConnectionCreatedEvent every time a\nsession is registered. The event-data for this event is a\nvtkIdType whose value is the session id.\n"},
  {"UnRegisterSession", PyvtkProcessModule_UnRegisterSession, METH_VARARGS,
   "V.UnRegisterSession(int) -> bool\nC++: bool UnRegisterSession(vtkIdType sessionID)\nV.UnRegisterSession(vtkSession) -> bool\nC++: bool UnRegisterSession(vtkSession *session)\n\nUnregister a session given its ID. This is the same ID that is\nreturned when the session was registered. Returns true is the\nsession was unregistered. Unregistering a session implies that\nthe ProcessModule will no longer monitor communication on the\nsockets, if any, in the session. Fires\nvtkCommand::ConnectionClosedEvent every time a session is\nunregistered. The event-data for this event is a vtkIdType whose\nvalue is the session id.\n"},
  {"GetEventCallDataSessionId", PyvtkProcessModule_GetEventCallDataSessionId, METH_VARARGS,
   "V.GetEventCallDataSessionId() -> int\nC++: virtual vtkIdType GetEventCallDataSessionId()\n\nRegisterSession and UnRegisterSession fire events with SessionID\nin calldata. To provide access to that in Python, we have this\nmethod. The value is valid only in\nvtkCommand::ConnectionCreatedEvent and\nvtkCommand::ConnectionClosedEvent callbacks and is set to 0 at\nother times.\n"},
  {"GetSession", PyvtkProcessModule_GetSession, METH_VARARGS,
   "V.GetSession(int) -> vtkSession\nC++: vtkSession *GetSession(vtkIdType)\nV.GetSession() -> vtkSession\nC++: vtkSession *GetSession()\n\nReturns the session associated with a given ID.\n"},
  {"GetSessionID", PyvtkProcessModule_GetSessionID, METH_VARARGS,
   "V.GetSessionID(vtkSession) -> int\nC++: vtkIdType GetSessionID(vtkSession *)\n\nReturns the session id for the session, if any. Return 0 is the\nsession has not been registered with the process module.\n"},
  {"NewSessionIterator", PyvtkProcessModule_NewSessionIterator, METH_VARARGS,
   "V.NewSessionIterator() -> vtkSessionIterator\nC++: vtkSessionIterator *NewSessionIterator()\n\nReturns a new session iterator that can be used to iterate over\nthe registered sessions.\n"},
  {"GetActiveSession", PyvtkProcessModule_GetActiveSession, METH_VARARGS,
   "V.GetActiveSession() -> vtkSession\nC++: vtkSession *GetActiveSession()\n\nWhenever any session is processing some message, it typically\nmarks itself active with the process module. The active session\ncan be accessed using this method.\n"},
  {"GetMultipleSessionsSupport", PyvtkProcessModule_GetMultipleSessionsSupport, METH_VARARGS,
   "V.GetMultipleSessionsSupport() -> bool\nC++: virtual bool GetMultipleSessionsSupport()\n\nReturn true, if multiple sessions can be used simultanuously. We\nset the default to be FALSE.\n"},
  {"SetMultipleSessionsSupport", PyvtkProcessModule_SetMultipleSessionsSupport, METH_VARARGS,
   "V.SetMultipleSessionsSupport(bool)\nC++: virtual void SetMultipleSessionsSupport(bool _arg)\n\nReturn true, if multiple sessions can be used simultanuously. We\nset the default to be FALSE.\n"},
  {"MultipleSessionsSupportOn", PyvtkProcessModule_MultipleSessionsSupportOn, METH_VARARGS,
   "V.MultipleSessionsSupportOn()\nC++: virtual void MultipleSessionsSupportOn()\n\nReturn true, if multiple sessions can be used simultanuously. We\nset the default to be FALSE.\n"},
  {"MultipleSessionsSupportOff", PyvtkProcessModule_MultipleSessionsSupportOff, METH_VARARGS,
   "V.MultipleSessionsSupportOff()\nC++: virtual void MultipleSessionsSupportOff()\n\nReturn true, if multiple sessions can be used simultanuously. We\nset the default to be FALSE.\n"},
  {"GetProcessModule", PyvtkProcessModule_GetProcessModule, METH_VARARGS,
   "V.GetProcessModule() -> vtkProcessModule\nC++: static vtkProcessModule *GetProcessModule()\n\nProvides access to the global ProcessModule. This method can only\nbe called after Initialize().\n"},
  {"GetOptions", PyvtkProcessModule_GetOptions, METH_VARARGS,
   "V.GetOptions() -> vtkPVOptions\nC++: virtual vtkPVOptions *GetOptions()\n\nSet/Get the application command line options object. Note that\nthis has to be explicitly set. vtkProcessModule::Initialize()\ndoes not initialize the vtkPVOptions.\n"},
  {"SetOptions", PyvtkProcessModule_SetOptions, METH_VARARGS,
   "V.SetOptions(vtkPVOptions)\nC++: void SetOptions(vtkPVOptions *op)\n\nSet/Get the application command line options object. Note that\nthis has to be explicitly set. vtkProcessModule::Initialize()\ndoes not initialize the vtkPVOptions.\n"},
  {"GetNetworkAccessManager", PyvtkProcessModule_GetNetworkAccessManager, METH_VARARGS,
   "V.GetNetworkAccessManager() -> vtkNetworkAccessManager\nC++: virtual vtkNetworkAccessManager *GetNetworkAccessManager()\n\nGet/Set the network access manager. vtkNetworkAccessManager\nencapsulates the setup of interprocess communication channels. By\ndefault a vtkTCPNetworkAccessManager is setup. If you want to\nchange the network access manager, it should be done only when no\nsessions are present. Ideally, you want to do that during the\ninitialization of the process itself.\n"},
  {"SetNetworkAccessManager", PyvtkProcessModule_SetNetworkAccessManager, METH_VARARGS,
   "V.SetNetworkAccessManager(vtkNetworkAccessManager)\nC++: void SetNetworkAccessManager(vtkNetworkAccessManager *)\n\nGet/Set the network access manager. vtkNetworkAccessManager\nencapsulates the setup of interprocess communication channels. By\ndefault a vtkTCPNetworkAccessManager is setup. If you want to\nchange the network access manager, it should be done only when no\nsessions are present. Ideally, you want to do that during the\ninitialization of the process itself.\n"},
  {"GetGlobalController", PyvtkProcessModule_GetGlobalController, METH_VARARGS,
   "V.GetGlobalController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetGlobalController()\n\nProvides access to the global MPI controller, if any. Same can be\nobtained using vtkMultiProcessController::GetGlobalController();\n"},
  {"GetNumberOfLocalPartitions", PyvtkProcessModule_GetNumberOfLocalPartitions, METH_VARARGS,
   "V.GetNumberOfLocalPartitions() -> int\nC++: int GetNumberOfLocalPartitions()\n\nReturns the number of processes in this process group.\n"},
  {"GetPartitionId", PyvtkProcessModule_GetPartitionId, METH_VARARGS,
   "V.GetPartitionId() -> int\nC++: int GetPartitionId()\n\nReturns the local process id.\n"},
  {"IsMPIInitialized", PyvtkProcessModule_IsMPIInitialized, METH_VARARGS,
   "V.IsMPIInitialized() -> bool\nC++: bool IsMPIInitialized()\n\nReturn whether MPI is initialized in this process group.\n"},
  {"GetReportInterpreterErrors", PyvtkProcessModule_GetReportInterpreterErrors, METH_VARARGS,
   "V.GetReportInterpreterErrors() -> bool\nC++: virtual bool GetReportInterpreterErrors()\n\nSet/Get whether to report errors from the Interpreter.\n"},
  {"SetReportInterpreterErrors", PyvtkProcessModule_SetReportInterpreterErrors, METH_VARARGS,
   "V.SetReportInterpreterErrors(bool)\nC++: virtual void SetReportInterpreterErrors(bool _arg)\n\nSet/Get whether to report errors from the Interpreter.\n"},
  {"ReportInterpreterErrorsOn", PyvtkProcessModule_ReportInterpreterErrorsOn, METH_VARARGS,
   "V.ReportInterpreterErrorsOn()\nC++: virtual void ReportInterpreterErrorsOn()\n\nSet/Get whether to report errors from the Interpreter.\n"},
  {"ReportInterpreterErrorsOff", PyvtkProcessModule_ReportInterpreterErrorsOff, METH_VARARGS,
   "V.ReportInterpreterErrorsOff()\nC++: virtual void ReportInterpreterErrorsOff()\n\nSet/Get whether to report errors from the Interpreter.\n"},
  {"GetSymmetricMPIMode", PyvtkProcessModule_GetSymmetricMPIMode, METH_VARARGS,
   "V.GetSymmetricMPIMode() -> bool\nC++: virtual bool GetSymmetricMPIMode()\n\nReturns true if ParaView is to be run in symmetric mode.\nSymmetric mode implies that satellites process same code as the\nroot node. This is applicable only for PROCESS_BATCH.\n"},
  {"GetProgramPath", PyvtkProcessModule_GetProgramPath, METH_VARARGS,
   "V.GetProgramPath() -> string\nC++: std::string GetProgramPath()\n\nThe full path to the current executable that is running (or empty\nif unknown).\n"},
  {"GetSelfDir", PyvtkProcessModule_GetSelfDir, METH_VARARGS,
   "V.GetSelfDir() -> string\nC++: std::string GetSelfDir()\n\nThe directory containing the current executable (or empty if\nunknown).\n"},
  {"SetDefaultMinimumGhostLevelsToRequestForStructuredPipelines", PyvtkProcessModule_SetDefaultMinimumGhostLevelsToRequestForStructuredPipelines, METH_VARARGS,
   "V.SetDefaultMinimumGhostLevelsToRequestForStructuredPipelines(int)\nC++: static void SetDefaultMinimumGhostLevelsToRequestForStructuredPipelines(\n    int)\n\nThis is temporary approach to control the number of ghost-levels\nto request by default for data pipelines. Currently, change in\nghost level request causes the pipeline to re-execute which can\nbe expensive. In an ideal world, additional ghost levels can be\nautomatically provided by data-exchange between ranks. Until we\ndo that, this is only mechanism available to override the number\nof ghost levels requested by default.\n\nThe default is 0 for structured pipelines, and 1 for unstructured\npipelines. When not running in parallel, however, these\nghost-level requests don't make sense and hence are generally\nignored.\n\nNote, this is expected to change in the future, so use this with\ncaution.\n"},
  {"GetDefaultMinimumGhostLevelsToRequestForStructuredPipelines", PyvtkProcessModule_GetDefaultMinimumGhostLevelsToRequestForStructuredPipelines, METH_VARARGS,
   "V.GetDefaultMinimumGhostLevelsToRequestForStructuredPipelines()\n    -> int\nC++: static int GetDefaultMinimumGhostLevelsToRequestForStructuredPipelines(\n    )\n\nThis is temporary approach to control the number of ghost-levels\nto request by default for data pipelines. Currently, change in\nghost level request causes the pipeline to re-execute which can\nbe expensive. In an ideal world, additional ghost levels can be\nautomatically provided by data-exchange between ranks. Until we\ndo that, this is only mechanism available to override the number\nof ghost levels requested by default.\n\nThe default is 0 for structured pipelines, and 1 for unstructured\npipelines. When not running in parallel, however, these\nghost-level requests don't make sense and hence are generally\nignored.\n\nNote, this is expected to change in the future, so use this with\ncaution.\n"},
  {"SetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines", PyvtkProcessModule_SetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines, METH_VARARGS,
   "V.SetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines(\n    int)\nC++: static void SetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines(\n    int)\n\nThis is temporary approach to control the number of ghost-levels\nto request by default for data pipelines. Currently, change in\nghost level request causes the pipeline to re-execute which can\nbe expensive. In an ideal world, additional ghost levels can be\nautomatically provided by data-exchange between ranks. Until we\ndo that, this is only mechanism available to override the number\nof ghost levels requested by default.\n\nThe default is 0 for structured pipelines, and 1 for unstructured\npipelines. When not running in parallel, however, these\nghost-level requests don't make sense and hence are generally\nignored.\n\nNote, this is expected to change in the future, so use this with\ncaution.\n"},
  {"GetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines", PyvtkProcessModule_GetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines, METH_VARARGS,
   "V.GetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines()\n    -> int\nC++: static int GetDefaultMinimumGhostLevelsToRequestForUnstructuredPipelines(\n    )\n\nThis is temporary approach to control the number of ghost-levels\nto request by default for data pipelines. Currently, change in\nghost level request causes the pipeline to re-execute which can\nbe expensive. In an ideal world, additional ghost levels can be\nautomatically provided by data-exchange between ranks. Until we\ndo that, this is only mechanism available to override the number\nof ghost levels requested by default.\n\nThe default is 0 for structured pipelines, and 1 for unstructured\npipelines. When not running in parallel, however, these\nghost-level requests don't make sense and hence are generally\nignored.\n\nNote, this is expected to change in the future, so use this with\ncaution.\n"},
  {"GetNumberOfGhostLevelsToRequest", PyvtkProcessModule_GetNumberOfGhostLevelsToRequest, METH_VARARGS,
   "V.GetNumberOfGhostLevelsToRequest(vtkInformation) -> int\nC++: static int GetNumberOfGhostLevelsToRequest(\n    vtkInformation *outInfo)\n\nThis returns number of ghost level to request based on\ncharacteristics of the pipelines.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProcessModule_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkProcessModule", // tp_name
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
  PyvtkProcessModule_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProcessModule_StaticNew()
{
  return vtkProcessModule::New();
}

PyObject *PyvtkProcessModule_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProcessModule_Type, PyvtkProcessModule_Methods,
    "vtkProcessModule",
 &PyvtkProcessModule_StaticNew);

  PyTypeObject *pytype = &PyvtkProcessModule_Type;

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

  PyType_Ready(&PyvtkProcessModule_ProcessTypes_Type);
  PyvtkProcessModule_ProcessTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkProcessModule_ProcessTypes_Type);

  o = (PyObject *)&PyvtkProcessModule_ProcessTypes_Type;
  if (PyDict_SetItemString(d, "ProcessTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkProcessModule_ServerFlags_Type);
  PyvtkProcessModule_ServerFlags_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkProcessModule_ServerFlags_Type);

  o = (PyObject *)&PyvtkProcessModule_ServerFlags_Type;
  if (PyDict_SetItemString(d, "ServerFlags", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkProcessModule::ProcessTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "PROCESS_CLIENT", vtkProcessModule::PROCESS_CLIENT },
        { "PROCESS_SERVER", vtkProcessModule::PROCESS_SERVER },
        { "PROCESS_DATA_SERVER", vtkProcessModule::PROCESS_DATA_SERVER },
        { "PROCESS_RENDER_SERVER", vtkProcessModule::PROCESS_RENDER_SERVER },
        { "PROCESS_BATCH", vtkProcessModule::PROCESS_BATCH },
        { "PROCESS_INVALID", vtkProcessModule::PROCESS_INVALID },
      };

    o = PyvtkProcessModule_ProcessTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkProcessModule::ServerFlags cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "DATA_SERVER", vtkProcessModule::DATA_SERVER },
        { "DATA_SERVER_ROOT", vtkProcessModule::DATA_SERVER_ROOT },
        { "RENDER_SERVER", vtkProcessModule::RENDER_SERVER },
        { "RENDER_SERVER_ROOT", vtkProcessModule::RENDER_SERVER_ROOT },
        { "SERVERS", vtkProcessModule::SERVERS },
        { "CLIENT", vtkProcessModule::CLIENT },
        { "CLIENT_AND_SERVERS", vtkProcessModule::CLIENT_AND_SERVERS },
      };

    o = PyvtkProcessModule_ServerFlags_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProcessModule(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProcessModule_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProcessModule", o) != 0)
  {
    Py_DECREF(o);
  }

}

