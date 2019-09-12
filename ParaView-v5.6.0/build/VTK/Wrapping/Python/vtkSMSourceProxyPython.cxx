// python wrapper for vtkSMSourceProxy
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
#include "vtkSMSourceProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSourceProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSourceProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMSourceProxy_Doc =
  "vtkSMSourceProxy - proxy for a VTK source on a server\n\n"
  "Superclass: vtkSMProxy\n\n"
  "vtkSMSourceProxy manages VTK source(s) that are created on a server\n"
  "using the proxy pattern. In addition to functionality provided by\n"
  "vtkSMProxy, vtkSMSourceProxy provides method to connect and update\n"
  "sources. Each source proxy has one or more output ports\n"
  "(vtkSMOutputPort). Each port represents one output of one filter.\n"
  "These are created automatically (when CreateOutputPorts() is called)\n"
  "by the source. Each vtkSMSourceProxy creates a property called\n"
  "DataInformation. This property is a composite property that provides\n"
  "information about the output(s) of the VTK sources (obtained from the\n"
  "server)\n"
  "@sa\n"
  "vtkSMProxy vtkSMOutputPort vtkSMInputProperty\n\n";

static PyTypeObject PyvtkSMSourceProxy_ProcessSupportType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSourceProxy.ProcessSupportType", // tp_name
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

PyObject *PyvtkSMSourceProxy_ProcessSupportType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMSourceProxy_ProcessSupportType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMSourceProxy_ProcessSupportType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMSourceProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSourceProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSourceProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSourceProxy *tempr = vtkSMSourceProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSourceProxy::NewInstance());

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
PyvtkSMSourceProxy_UpdatePipelineInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipelineInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePipelineInformation();
    }
    else
    {
      op->vtkSMSourceProxy::UpdatePipelineInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_UpdatePipeline_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePipeline();
    }
    else
    {
      op->vtkSMSourceProxy::UpdatePipeline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSourceProxy_UpdatePipeline_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdatePipeline(temp0);
    }
    else
    {
      op->vtkSMSourceProxy::UpdatePipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMSourceProxy_UpdatePipeline(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMSourceProxy_UpdatePipeline_s1(self, args);
    case 1:
      return PyvtkSMSourceProxy_UpdatePipeline_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdatePipeline");
  return nullptr;
}



static PyObject *
PyvtkSMSourceProxy_GetOutputPortsCreated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortsCreated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPortsCreated() :
      op->vtkSMSourceProxy::GetOutputPortsCreated());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetNumberOfOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfOutputPorts() :
      op->vtkSMSourceProxy::GetNumberOfOutputPorts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMOutputPort *tempr = (ap.IsBound() ?
      op->GetOutputPort(temp0) :
      op->vtkSMSourceProxy::GetOutputPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSourceProxy_GetOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMOutputPort *tempr = (ap.IsBound() ?
      op->GetOutputPort(temp0) :
      op->vtkSMSourceProxy::GetOutputPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSourceProxy_GetOutputPort_Methods[] = {
  {nullptr, PyvtkSMSourceProxy_GetOutputPort_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkSMSourceProxy_GetOutputPort_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSourceProxy_GetOutputPort(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSourceProxy_GetOutputPort_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputPort");
  return nullptr;
}



static PyObject *
PyvtkSMSourceProxy_GetOutputPortIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOutputPortIndex(temp0) :
      op->vtkSMSourceProxy::GetOutputPortIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetOutputPortName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOutputPortName(temp0) :
      op->vtkSMSourceProxy::GetOutputPortName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetOutputPortDocumentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetOutputPortDocumentation(temp0) :
      op->vtkSMSourceProxy::GetOutputPortDocumentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSourceProxy_GetOutputPortDocumentation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetOutputPortDocumentation(temp0) :
      op->vtkSMSourceProxy::GetOutputPortDocumentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSourceProxy_GetOutputPortDocumentation_Methods[] = {
  {nullptr, PyvtkSMSourceProxy_GetOutputPortDocumentation_s1, METH_VARARGS,
   "@I"},
  {nullptr, PyvtkSMSourceProxy_GetOutputPortDocumentation_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMSourceProxy_GetOutputPortDocumentation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMSourceProxy_GetOutputPortDocumentation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputPortDocumentation");
  return nullptr;
}



static PyObject *
PyvtkSMSourceProxy_CreateOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateOutputPorts();
    }
    else
    {
      op->vtkSMSourceProxy::CreateOutputPorts();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetDataInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetDataInformation() :
      op->vtkSMSourceProxy::GetDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSourceProxy_GetDataInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetDataInformation(temp0) :
      op->vtkSMSourceProxy::GetDataInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMSourceProxy_GetDataInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMSourceProxy_GetDataInformation_s1(self, args);
    case 1:
      return PyvtkSMSourceProxy_GetDataInformation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataInformation");
  return nullptr;
}



static PyObject *
PyvtkSMSourceProxy_CreateSelectionProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateSelectionProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateSelectionProxies();
    }
    else
    {
      op->vtkSMSourceProxy::CreateSelectionProxies();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_SetSelectionInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  vtkSMSourceProxy *temp1 = nullptr;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSelectionInput(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMSourceProxy::SetSelectionInput(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetSelectionInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->GetSelectionInput(temp0) :
      op->vtkSMSourceProxy::GetSelectionInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetSelectionInputPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionInputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSelectionInputPort(temp0) :
      op->vtkSMSourceProxy::GetSelectionInputPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_CleanSelectionInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanSelectionInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->CleanSelectionInputs(temp0);
    }
    else
    {
      op->vtkSMSourceProxy::CleanSelectionInputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetSelectionOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->GetSelectionOutput(temp0) :
      op->vtkSMSourceProxy::GetSelectionOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetProcessSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessSupport() :
      op->vtkSMSourceProxy::GetProcessSupport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetMPIRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMPIRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMPIRequired() :
      op->vtkSMSourceProxy::GetMPIRequired());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetNumberOfAlgorithmOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAlgorithmOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfAlgorithmOutputPorts() :
      op->vtkSMSourceProxy::GetNumberOfAlgorithmOutputPorts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetNumberOfAlgorithmRequiredInputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAlgorithmRequiredInputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfAlgorithmRequiredInputPorts() :
      op->vtkSMSourceProxy::GetNumberOfAlgorithmRequiredInputPorts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_GetGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalID() :
      op->vtkSMSourceProxy::GetGlobalID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSourceProxy_MarkDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSourceProxy *op = static_cast<vtkSMSourceProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->MarkDirty(temp0);
    }
    else
    {
      op->vtkSMSourceProxy::MarkDirty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSourceProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMSourceProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSourceProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSourceProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSourceProxy\nC++: static vtkSMSourceProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSourceProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSourceProxy\nC++: vtkSMSourceProxy *NewInstance()\n\n"},
  {"UpdatePipelineInformation", PyvtkSMSourceProxy_UpdatePipelineInformation, METH_VARARGS,
   "V.UpdatePipelineInformation()\nC++: void UpdatePipelineInformation() override;\n\nCalls UpdateInformation() on all sources.\n"},
  {"UpdatePipeline", PyvtkSMSourceProxy_UpdatePipeline, METH_VARARGS,
   "V.UpdatePipeline()\nC++: virtual void UpdatePipeline()\nV.UpdatePipeline(float)\nC++: virtual void UpdatePipeline(double time)\n\nCalls Update() on all sources. It also creates output ports if\nthey are not already created.\n"},
  {"GetOutputPortsCreated", PyvtkSMSourceProxy_GetOutputPortsCreated, METH_VARARGS,
   "V.GetOutputPortsCreated() -> int\nC++: virtual int GetOutputPortsCreated()\n\nReturns if the output port proxies have been created.\n"},
  {"GetNumberOfOutputPorts", PyvtkSMSourceProxy_GetNumberOfOutputPorts, METH_VARARGS,
   "V.GetNumberOfOutputPorts() -> int\nC++: virtual unsigned int GetNumberOfOutputPorts()\n\nReturn the number of output ports.\n"},
  {"GetOutputPort", PyvtkSMSourceProxy_GetOutputPort, METH_VARARGS,
   "V.GetOutputPort(int) -> vtkSMOutputPort\nC++: virtual vtkSMOutputPort *GetOutputPort(unsigned int idx)\nV.GetOutputPort(string) -> vtkSMOutputPort\nC++: virtual vtkSMOutputPort *GetOutputPort(const char *portname)\n\nReturn an output port.\n"},
  {"GetOutputPortIndex", PyvtkSMSourceProxy_GetOutputPortIndex, METH_VARARGS,
   "V.GetOutputPortIndex(string) -> int\nC++: virtual unsigned int GetOutputPortIndex(const char *portname)\n\nReturns the port index, given the name of an output port. Each\noutput port is assigned a unique name (either using the xml\nconfiguration or automatically). The automatically assigned names\nare of the type Output0, Output1 etc. Returns\nVTK_UNSIGNED_INT_MAX (i.e. ~0u) when a port with given port name\ndoes not exist.\n"},
  {"GetOutputPortName", PyvtkSMSourceProxy_GetOutputPortName, METH_VARARGS,
   "V.GetOutputPortName(int) -> string\nC++: virtual const char *GetOutputPortName(unsigned int index)\n\nReturns the output port name given its index. Each output port is\nassigned an unique name (either using the xml configuration or\nautomatically). The automatically assigned names are of the type\nOutput-0, Output-1 etc.\n"},
  {"GetOutputPortDocumentation", PyvtkSMSourceProxy_GetOutputPortDocumentation, METH_VARARGS,
   "V.GetOutputPortDocumentation(int) -> vtkSMDocumentation\nC++: vtkSMDocumentation *GetOutputPortDocumentation(\n    unsigned int index)\nV.GetOutputPortDocumentation(string) -> vtkSMDocumentation\nC++: vtkSMDocumentation *GetOutputPortDocumentation(\n    const char *portname)\n\nIt is possible to provide some documentation for each output port\nin the configuration xml. These methods provide access to the\nport specific documentation, if any. If no documentation is\npresent, these methods will return 0.\n"},
  {"CreateOutputPorts", PyvtkSMSourceProxy_CreateOutputPorts, METH_VARARGS,
   "V.CreateOutputPorts()\nC++: virtual void CreateOutputPorts()\n\nCreates the output port proxies for this filter. Each output port\nproxy corresponds to an actual output port on the algorithm.\n"},
  {"GetDataInformation", PyvtkSMSourceProxy_GetDataInformation, METH_VARARGS,
   "V.GetDataInformation() -> vtkPVDataInformation\nC++: vtkPVDataInformation *GetDataInformation()\nV.GetDataInformation(int) -> vtkPVDataInformation\nC++: vtkPVDataInformation *GetDataInformation(\n    unsigned int outputIdx)\n\nDataInformation is used by the source proxy to obtain information\non the output(s) from the server. If update is false the pipeline\nwill not be updated before gathering the data information.\n"},
  {"CreateSelectionProxies", PyvtkSMSourceProxy_CreateSelectionProxies, METH_VARARGS,
   "V.CreateSelectionProxies()\nC++: virtual void CreateSelectionProxies()\n\nCreates extract selection proxies for each output port if not\nalready created.\n"},
  {"SetSelectionInput", PyvtkSMSourceProxy_SetSelectionInput, METH_VARARGS,
   "V.SetSelectionInput(int, vtkSMSourceProxy, int)\nC++: void SetSelectionInput(unsigned int portIndex,\n    vtkSMSourceProxy *input, unsigned int outputPort)\n\nSet/Get the selection input. This is used to set the selection\ninput to the extarction proxy for the output port identified by\nportIndex. If no extraction proxies are present, this method has\nno effect.\n"},
  {"GetSelectionInput", PyvtkSMSourceProxy_GetSelectionInput, METH_VARARGS,
   "V.GetSelectionInput(int) -> vtkSMSourceProxy\nC++: vtkSMSourceProxy *GetSelectionInput(unsigned int portIndex)\n\nAPI to query selection input set using SetSelectionInput.\n"},
  {"GetSelectionInputPort", PyvtkSMSourceProxy_GetSelectionInputPort, METH_VARARGS,
   "V.GetSelectionInputPort(int) -> int\nC++: unsigned int GetSelectionInputPort(unsigned int portIndex)\n\nAPI to query selection input set using SetSelectionInput.\n"},
  {"CleanSelectionInputs", PyvtkSMSourceProxy_CleanSelectionInputs, METH_VARARGS,
   "V.CleanSelectionInputs(int)\nC++: void CleanSelectionInputs(unsigned int portIndex)\n\nClean all selection inputs for the given port.\n"},
  {"GetSelectionOutput", PyvtkSMSourceProxy_GetSelectionOutput, METH_VARARGS,
   "V.GetSelectionOutput(int) -> vtkSMSourceProxy\nC++: vtkSMSourceProxy *GetSelectionOutput(unsigned int portIndex)\n\nReturns the source proxy which provides the selected data from\nthe given output port.\n"},
  {"GetProcessSupport", PyvtkSMSourceProxy_GetProcessSupport, METH_VARARGS,
   "V.GetProcessSupport() -> int\nC++: virtual int GetProcessSupport()\n\nThis returns information about whether the VTK algorithm supports\nmultiple processes or not. SINGLE_PROCESS means that this\nalgorithm works only in serial, MULTIPLE_PROCESSES means that it\nwill only useful in parallel (or it is useless in serial), BOTH\nmeans both :-) Default is BOTH. This ivar is filled from the xml\nconfiguration. This variable should not be used to determine if\nMPI is initialized. Instead use MPISupport for that.\n"},
  {"GetMPIRequired", PyvtkSMSourceProxy_GetMPIRequired, METH_VARARGS,
   "V.GetMPIRequired() -> bool\nC++: virtual bool GetMPIRequired()\n\nThis returns information about whether the VTK algorithm\nexplicitly needs MPI to be initialized. It still may only run\nwith a single process. An example of this is a reader that uses\nMPI IO routines.\n"},
  {"GetNumberOfAlgorithmOutputPorts", PyvtkSMSourceProxy_GetNumberOfAlgorithmOutputPorts, METH_VARARGS,
   "V.GetNumberOfAlgorithmOutputPorts() -> int\nC++: unsigned int GetNumberOfAlgorithmOutputPorts()\n\nReturns the number of output ports provided by the algorithm.\n"},
  {"GetNumberOfAlgorithmRequiredInputPorts", PyvtkSMSourceProxy_GetNumberOfAlgorithmRequiredInputPorts, METH_VARARGS,
   "V.GetNumberOfAlgorithmRequiredInputPorts() -> int\nC++: virtual unsigned int GetNumberOfAlgorithmRequiredInputPorts()\n\nReturns the number of non-optional input ports required by the\nalgorithm. This value is cached after the first call.\n"},
  {"GetGlobalID", PyvtkSMSourceProxy_GetGlobalID, METH_VARARGS,
   "V.GetGlobalID() -> int\nC++: vtkTypeUInt32 GetGlobalID() override;\n\nOverridden to reserve additional IDs for use by\n\"ExtractSelection\" proxies.\n"},
  {"MarkDirty", PyvtkSMSourceProxy_MarkDirty, METH_VARARGS,
   "V.MarkDirty(vtkSMProxy)\nC++: void MarkDirty(vtkSMProxy *modifiedProxy) override;\n\nMarks the selection proxies dirty as well as chain to superclass.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSourceProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSourceProxy", // tp_name
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
  PyvtkSMSourceProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSourceProxy_StaticNew()
{
  return vtkSMSourceProxy::New();
}

PyObject *PyvtkSMSourceProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSourceProxy_Type, PyvtkSMSourceProxy_Methods,
    "vtkSMSourceProxy",
 &PyvtkSMSourceProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSourceProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxy_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMSourceProxy_ProcessSupportType_Type);
  PyvtkSMSourceProxy_ProcessSupportType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMSourceProxy_ProcessSupportType_Type);

  o = (PyObject *)&PyvtkSMSourceProxy_ProcessSupportType_Type;
  if (PyDict_SetItemString(d, "ProcessSupportType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSMSourceProxy::ProcessSupportType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "SINGLE_PROCESS", vtkSMSourceProxy::SINGLE_PROCESS },
        { "MULTIPLE_PROCESSES", vtkSMSourceProxy::MULTIPLE_PROCESSES },
        { "BOTH", vtkSMSourceProxy::BOTH },
      };

    o = PyvtkSMSourceProxy_ProcessSupportType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMSourceProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSourceProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSourceProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

