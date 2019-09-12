// python wrapper for vtkLiveInsituLink
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
#include "vtkLiveInsituLink.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLiveInsituLink(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLiveInsituLink_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkLiveInsituLink_Doc =
  "vtkLiveInsituLink - link for live-coprocessing.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkLiveInsituLink manages the communication link between Insitu and\n"
  "Live visualization servers. vtkLiveInsituLink is created on both ends\n"
  "of the live-insitu channel i.e. in Insitu code (by instantiating\n"
  "vtkLiveInsituLink directly) and in the Live ParaView application (by\n"
  "using a proxy that instantiates the vtkLiveInsituLink).@ingroup\n"
  "LiveInsitu\n\n";

static PyTypeObject PyvtkLiveInsituLink_NotificationTags_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkLiveInsituLink.NotificationTags", // tp_name
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

PyObject *PyvtkLiveInsituLink_NotificationTags_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkLiveInsituLink_NotificationTags_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkLiveInsituLink_NotificationTags_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkLiveInsituLink_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLiveInsituLink::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLiveInsituLink::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLiveInsituLink *tempr = vtkLiveInsituLink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLiveInsituLink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLiveInsituLink::NewInstance());

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
PyvtkLiveInsituLink_SetInsituPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsituPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsituPort(temp0);
    }
    else
    {
      op->vtkLiveInsituLink::SetInsituPort(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetInsituPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsituPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsituPort() :
      op->vtkLiveInsituLink::GetInsituPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_SetHostname(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHostname");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHostname(temp0);
    }
    else
    {
      op->vtkLiveInsituLink::SetHostname(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetHostname(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostname");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHostname() :
      op->vtkLiveInsituLink::GetHostname());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_SetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessType(temp0);
    }
    else
    {
      op->vtkLiveInsituLink::SetProcessType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetProcessTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessTypeMinValue() :
      op->vtkLiveInsituLink::GetProcessTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetProcessTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessTypeMaxValue() :
      op->vtkLiveInsituLink::GetProcessTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessType() :
      op->vtkLiveInsituLink::GetProcessType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_SetProxyId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxyId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProxyId(temp0);
    }
    else
    {
      op->vtkLiveInsituLink::SetProxyId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetProxyId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetProxyId() :
      op->vtkLiveInsituLink::GetProxyId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_GetSimulationPaused(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSimulationPaused");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSimulationPaused() :
      op->vtkLiveInsituLink::GetSimulationPaused());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_SetSimulationPaused(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSimulationPaused");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSimulationPaused(temp0);
    }
    else
    {
      op->vtkLiveInsituLink::SetSimulationPaused(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Initialize() :
      op->vtkLiveInsituLink::Initialize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLiveInsituLink_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  vtkSMSessionProxyManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager"))
  {
    bool tempr = (ap.IsBound() ?
      op->Initialize(temp0) :
      op->vtkLiveInsituLink::Initialize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLiveInsituLink_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkLiveInsituLink_Initialize_s1(self, args);
    case 1:
      return PyvtkLiveInsituLink_Initialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}



static PyObject *
PyvtkLiveInsituLink_InsituUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsituUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  double temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->InsituUpdate(temp0, temp1);
    }
    else
    {
      op->vtkLiveInsituLink::InsituUpdate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_InsituPostProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsituPostProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  double temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->InsituPostProcess(temp0, temp1);
    }
    else
    {
      op->vtkLiveInsituLink::InsituPostProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_WaitForLiveChange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForLiveChange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->WaitForLiveChange() :
      op->vtkLiveInsituLink::WaitForLiveChange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_OnLiveChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLiveChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLiveChanged();
    }
    else
    {
      op->vtkLiveInsituLink::OnLiveChanged();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_RegisterExtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterExtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  vtkTrivialProducer *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTrivialProducer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->RegisterExtract(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkLiveInsituLink::RegisterExtract(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_UnRegisterExtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterExtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  vtkTrivialProducer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTrivialProducer"))
  {
    if (ap.IsBound())
    {
      op->UnRegisterExtract(temp0);
    }
    else
    {
      op->vtkLiveInsituLink::UnRegisterExtract(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_OnInsituUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnInsituUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  double temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->OnInsituUpdate(temp0, temp1);
    }
    else
    {
      op->vtkLiveInsituLink::OnInsituUpdate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_OnInsituPostProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnInsituPostProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  double temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->OnInsituPostProcess(temp0, temp1);
    }
    else
    {
      op->vtkLiveInsituLink::OnInsituPostProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_LiveChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LiveChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LiveChanged();
    }
    else
    {
      op->vtkLiveInsituLink::LiveChanged();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_UpdateInsituXMLState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInsituXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateInsituXMLState(temp0);
    }
    else
    {
      op->vtkLiveInsituLink::UpdateInsituXMLState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_FilterXMLState(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FilterXMLState");

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    bool tempr = vtkLiveInsituLink::FilterXMLState(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_InsituConnect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsituConnect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->InsituConnect(temp0);
    }
    else
    {
      op->vtkLiveInsituLink::InsituConnect(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLiveInsituLink_DropLiveInsituConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DropLiveInsituConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLiveInsituLink *op = static_cast<vtkLiveInsituLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DropLiveInsituConnection();
    }
    else
    {
      op->vtkLiveInsituLink::DropLiveInsituConnection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLiveInsituLink_Methods[] = {
  {"IsTypeOf", PyvtkLiveInsituLink_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLiveInsituLink_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLiveInsituLink_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLiveInsituLink\nC++: static vtkLiveInsituLink *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLiveInsituLink_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLiveInsituLink\nC++: vtkLiveInsituLink *NewInstance()\n\n"},
  {"SetInsituPort", PyvtkLiveInsituLink_SetInsituPort, METH_VARARGS,
   "V.SetInsituPort(int)\nC++: virtual void SetInsituPort(int _arg)\n\nSet the port number. This is the port on which the root\ndata-server node will open a server-socket to accept connections\nfrom VTK InSitu Library.\n"},
  {"GetInsituPort", PyvtkLiveInsituLink_GetInsituPort, METH_VARARGS,
   "V.GetInsituPort() -> int\nC++: virtual int GetInsituPort()\n\nSet the port number. This is the port on which the root\ndata-server node will open a server-socket to accept connections\nfrom VTK InSitu Library.\n"},
  {"SetHostname", PyvtkLiveInsituLink_SetHostname, METH_VARARGS,
   "V.SetHostname(string)\nC++: virtual void SetHostname(const char *_arg)\n\nSet the host name.\n"},
  {"GetHostname", PyvtkLiveInsituLink_GetHostname, METH_VARARGS,
   "V.GetHostname() -> string\nC++: virtual char *GetHostname()\n\nSet the host name.\n"},
  {"SetProcessType", PyvtkLiveInsituLink_SetProcessType, METH_VARARGS,
   "V.SetProcessType(int)\nC++: virtual void SetProcessType(int _arg)\n\nSet/Get the link type i.e. whether the current process is the\nvisualization process or the insitu process.\n"},
  {"GetProcessTypeMinValue", PyvtkLiveInsituLink_GetProcessTypeMinValue, METH_VARARGS,
   "V.GetProcessTypeMinValue() -> int\nC++: virtual int GetProcessTypeMinValue()\n\nSet/Get the link type i.e. whether the current process is the\nvisualization process or the insitu process.\n"},
  {"GetProcessTypeMaxValue", PyvtkLiveInsituLink_GetProcessTypeMaxValue, METH_VARARGS,
   "V.GetProcessTypeMaxValue() -> int\nC++: virtual int GetProcessTypeMaxValue()\n\nSet/Get the link type i.e. whether the current process is the\nvisualization process or the insitu process.\n"},
  {"GetProcessType", PyvtkLiveInsituLink_GetProcessType, METH_VARARGS,
   "V.GetProcessType() -> int\nC++: virtual int GetProcessType()\n\nSet/Get the link type i.e. whether the current process is the\nvisualization process or the insitu process.\n"},
  {"SetProxyId", PyvtkLiveInsituLink_SetProxyId, METH_VARARGS,
   "V.SetProxyId(int)\nC++: virtual void SetProxyId(unsigned int _arg)\n\nWhen instantiated on the ParaView visualization server side using\na vtkSMProxy, ProxyId is used to identify the proxy corresponding\nto this instance. That helps us construct notification messages\nthat the visualization server can send to the client.\n"},
  {"GetProxyId", PyvtkLiveInsituLink_GetProxyId, METH_VARARGS,
   "V.GetProxyId() -> int\nC++: virtual unsigned int GetProxyId()\n\nWhen instantiated on the ParaView visualization server side using\na vtkSMProxy, ProxyId is used to identify the proxy corresponding\nto this instance. That helps us construct notification messages\nthat the visualization server can send to the client.\n"},
  {"GetSimulationPaused", PyvtkLiveInsituLink_GetSimulationPaused, METH_VARARGS,
   "V.GetSimulationPaused() -> int\nC++: virtual int GetSimulationPaused()\n\n'SimulationPaused' is set/reset on Paraview Live and sent to\nInsitu every time step.\n"},
  {"SetSimulationPaused", PyvtkLiveInsituLink_SetSimulationPaused, METH_VARARGS,
   "V.SetSimulationPaused(int)\nC++: void SetSimulationPaused(int paused)\n\n'SimulationPaused' is set/reset on Paraview Live and sent to\nInsitu every time step.\n"},
  {"Initialize", PyvtkLiveInsituLink_Initialize, METH_VARARGS,
   "V.Initialize() -> bool\nC++: bool Initialize()\nV.Initialize(vtkSMSessionProxyManager) -> bool\nC++: bool Initialize(vtkSMSessionProxyManager *)\n\nInitializes the link. For in situ this returns true it there is a\nconnection and false otherwise. For live it always returns true.\n"},
  {"InsituUpdate", PyvtkLiveInsituLink_InsituUpdate, METH_VARARGS,
   "V.InsituUpdate(float, int)\nC++: void InsituUpdate(double time, vtkIdType timeStep)\n\nEvery time Insitu is ready to communicate with ParaView\nvisualization engine call this method. The goal of this call is\ntoo get the latest updates from ParaView including changes to\nstate for the co-processing pipeline or changes in what extract\nthe visualization engine is expecting. This method's primary goal\nis to obtain information from ParaView vis engine. If no active\nconnection to ParaView visualization engine exists, this will\nmake an attempt to connect to ParaView.\n"},
  {"InsituPostProcess", PyvtkLiveInsituLink_InsituPostProcess, METH_VARARGS,
   "V.InsituPostProcess(float, int)\nC++: void InsituPostProcess(double time, vtkIdType timeStep)\n\nEvery time Insitu is ready to push extracts to ParaView\nvisualization engine, call this method. If no active ParaView\nvisualization engine connection exists (or the connection dies),\nthen this method does nothing (besides some bookkeeping). \nOtherwise, this will push any extracts requested to the ParaView\nvisualization engine.\n"},
  {"WaitForLiveChange", PyvtkLiveInsituLink_WaitForLiveChange, METH_VARARGS,
   "V.WaitForLiveChange() -> int\nC++: int WaitForLiveChange()\n\nis called on the catalyst side. Insitu stops until the pipeline\nis edited, an extract is added or removed or the user continues\nthe simulation. Returns != 0 if the visualization side\ndisconnected, 0 otherwise\n"},
  {"OnLiveChanged", PyvtkLiveInsituLink_OnLiveChanged, METH_VARARGS,
   "V.OnLiveChanged()\nC++: void OnLiveChanged()\n\nDescription: Called on INSITU side when LIVE has changed\n"},
  {"RegisterExtract", PyvtkLiveInsituLink_RegisterExtract, METH_VARARGS,
   "V.RegisterExtract(vtkTrivialProducer, string, string, int)\nC++: void RegisterExtract(vtkTrivialProducer *producer,\n    const char *groupname, const char *proxyname, int portnumber)\n\n"},
  {"UnRegisterExtract", PyvtkLiveInsituLink_UnRegisterExtract, METH_VARARGS,
   "V.UnRegisterExtract(vtkTrivialProducer)\nC++: void UnRegisterExtract(vtkTrivialProducer *producer)\n\n"},
  {"OnInsituUpdate", PyvtkLiveInsituLink_OnInsituUpdate, METH_VARARGS,
   "V.OnInsituUpdate(float, int)\nC++: void OnInsituUpdate(double time, vtkIdType timeStep)\n\n"},
  {"OnInsituPostProcess", PyvtkLiveInsituLink_OnInsituPostProcess, METH_VARARGS,
   "V.OnInsituPostProcess(float, int)\nC++: void OnInsituPostProcess(double time, vtkIdType timeStep)\n\n"},
  {"LiveChanged", PyvtkLiveInsituLink_LiveChanged, METH_VARARGS,
   "V.LiveChanged()\nC++: void LiveChanged()\n\nSignal a change on the ParaView Live side and transmit it to the\nInsitu side. This is called when the state or extracts are\nchanged or when the simulation is continued.\n"},
  {"UpdateInsituXMLState", PyvtkLiveInsituLink_UpdateInsituXMLState, METH_VARARGS,
   "V.UpdateInsituXMLState(string)\nC++: void UpdateInsituXMLState(const char *txt)\n\n"},
  {"FilterXMLState", PyvtkLiveInsituLink_FilterXMLState, METH_VARARGS,
   "V.FilterXMLState(vtkPVXMLElement) -> bool\nC++: static bool FilterXMLState(vtkPVXMLElement *xmlState)\n\nThis method will remove references to proxy that shouldn't be\nshared with ParaView Return true if something has been removed\n"},
  {"InsituConnect", PyvtkLiveInsituLink_InsituConnect, METH_VARARGS,
   "V.InsituConnect(vtkMultiProcessController)\nC++: void InsituConnect(\n    vtkMultiProcessController *proc0NodesController)\n\n"},
  {"DropLiveInsituConnection", PyvtkLiveInsituLink_DropLiveInsituConnection, METH_VARARGS,
   "V.DropLiveInsituConnection()\nC++: void DropLiveInsituConnection()\n\nCalled to drop the connection between Insitu and ParaView Live.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLiveInsituLink_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkLiveInsituLink", // tp_name
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
  PyvtkLiveInsituLink_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLiveInsituLink_StaticNew()
{
  return vtkLiveInsituLink::New();
}

PyObject *PyvtkLiveInsituLink_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLiveInsituLink_Type, PyvtkLiveInsituLink_Methods,
    "vtkLiveInsituLink",
 &PyvtkLiveInsituLink_StaticNew);

  PyTypeObject *pytype = &PyvtkLiveInsituLink_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLiveInsituLink_NotificationTags_Type);
  PyvtkLiveInsituLink_NotificationTags_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkLiveInsituLink_NotificationTags_Type);

  o = (PyObject *)&PyvtkLiveInsituLink_NotificationTags_Type;
  if (PyDict_SetItemString(d, "NotificationTags", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "LIVE", vtkLiveInsituLink::LIVE },
        { "INSITU", vtkLiveInsituLink::INSITU },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkLiveInsituLink::NotificationTags cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "CONNECTED", vtkLiveInsituLink::CONNECTED },
        { "NEXT_TIMESTEP_AVAILABLE", vtkLiveInsituLink::NEXT_TIMESTEP_AVAILABLE },
        { "DISCONNECTED", vtkLiveInsituLink::DISCONNECTED },
      };

    o = PyvtkLiveInsituLink_NotificationTags_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLiveInsituLink(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLiveInsituLink_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLiveInsituLink", o) != 0)
  {
    Py_DECREF(o);
  }

}

