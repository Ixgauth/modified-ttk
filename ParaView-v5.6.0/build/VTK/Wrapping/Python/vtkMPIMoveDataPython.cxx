// python wrapper for vtkMPIMoveData
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
#include "vtkMPIMoveData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMPIMoveData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMPIMoveData_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkMPIMoveData_Doc =
  "vtkMPIMoveData - Moves/redistributes data between processes.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "This class combines all the duplicate and collection requirements\n"
  "into one filter. It can move polydata and unstructured grid between\n"
  "processes. It can redistributed polydata from M to N processors.\n"
  "Update: This filter can now support delivering vtkUniformGridAMR\n"
  "datasets in PASS_THROUGH and/or COLLECT modes.\n\n";

static PyTypeObject PyvtkMPIMoveData_MoveModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkMPIMoveData.MoveModes", // tp_name
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

PyObject *PyvtkMPIMoveData_MoveModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkMPIMoveData_MoveModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkMPIMoveData_MoveModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkMPIMoveData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMPIMoveData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPIMoveData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMPIMoveData *tempr = vtkMPIMoveData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMPIMoveData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPIMoveData::NewInstance());

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
PyvtkMPIMoveData_InitializeForCommunicationForParaView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeForCommunicationForParaView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeForCommunicationForParaView();
    }
    else
    {
      op->vtkMPIMoveData::InitializeForCommunicationForParaView();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkMPIMoveData::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetMPIMToNSocketConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMPIMToNSocketConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

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
      op->vtkMPIMoveData::SetMPIMToNSocketConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetClientDataServerSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClientDataServerSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetClientDataServerSocketController(temp0);
    }
    else
    {
      op->vtkMPIMoveData::SetClientDataServerSocketController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetClientDataServerSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientDataServerSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetClientDataServerSocketController() :
      op->vtkMPIMoveData::GetClientDataServerSocketController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetServerToClient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetServerToClient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetServerToClient();
    }
    else
    {
      op->vtkMPIMoveData::SetServerToClient();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetServerToDataServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetServerToDataServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetServerToDataServer();
    }
    else
    {
      op->vtkMPIMoveData::SetServerToDataServer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetServerToRenderServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetServerToRenderServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetServerToRenderServer();
    }
    else
    {
      op->vtkMPIMoveData::SetServerToRenderServer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetServer(temp0);
    }
    else
    {
      op->vtkMPIMoveData::SetServer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetServerMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetServerMinValue() :
      op->vtkMPIMoveData::GetServerMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetServerMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetServerMaxValue() :
      op->vtkMPIMoveData::GetServerMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetServer() :
      op->vtkMPIMoveData::GetServer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetMoveModeToPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoveModeToPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMoveModeToPassThrough();
    }
    else
    {
      op->vtkMPIMoveData::SetMoveModeToPassThrough();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetMoveModeToCollect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoveModeToCollect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMoveModeToCollect();
    }
    else
    {
      op->vtkMPIMoveData::SetMoveModeToCollect();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetMoveModeToClone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoveModeToClone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMoveModeToClone();
    }
    else
    {
      op->vtkMPIMoveData::SetMoveModeToClone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetMoveMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoveMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMoveMode(temp0);
    }
    else
    {
      op->vtkMPIMoveData::SetMoveMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetMoveModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoveModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMoveModeMinValue() :
      op->vtkMPIMoveData::GetMoveModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetMoveModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoveModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMoveModeMaxValue() :
      op->vtkMPIMoveData::GetMoveModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetOutputDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDataType(temp0);
    }
    else
    {
      op->vtkMPIMoveData::SetOutputDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetOutputDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputDataType() :
      op->vtkMPIMoveData::GetOutputDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetUseZLibCompression(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUseZLibCompression");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMPIMoveData::SetUseZLibCompression(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetUseZLibCompression(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUseZLibCompression");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkMPIMoveData::GetUseZLibCompression();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetOutputGeneratedOnProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputGeneratedOnProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutputGeneratedOnProcess() :
      op->vtkMPIMoveData::GetOutputGeneratedOnProcess());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_SetSkipDataServerGatherToZero(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipDataServerGatherToZero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSkipDataServerGatherToZero(temp0);
    }
    else
    {
      op->vtkMPIMoveData::SetSkipDataServerGatherToZero(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMoveData_GetSkipDataServerGatherToZero(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipDataServerGatherToZero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMoveData *op = static_cast<vtkMPIMoveData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSkipDataServerGatherToZero() :
      op->vtkMPIMoveData::GetSkipDataServerGatherToZero());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMPIMoveData_Methods[] = {
  {"IsTypeOf", PyvtkMPIMoveData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMPIMoveData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMPIMoveData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMPIMoveData\nC++: static vtkMPIMoveData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMPIMoveData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMPIMoveData\nC++: vtkMPIMoveData *NewInstance()\n\n"},
  {"InitializeForCommunicationForParaView", PyvtkMPIMoveData_InitializeForCommunicationForParaView, METH_VARARGS,
   "V.InitializeForCommunicationForParaView()\nC++: virtual void InitializeForCommunicationForParaView()\n\nUse this method to initialize all communicators/sockets using\nParaView defaults.\n"},
  {"SetController", PyvtkMPIMoveData_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *controller)\n\nObjects for communication. The controller is an MPI controller\nused to communicate between processes within one server (render\nor data). The client-data server socket controller is set on the\nclient and data server and is used to communicate between the\ntwo. MPIMToNSocetConnection is set on the data server and render\nserver when we are running with a render server.  It has multiple\nsockets which are used to send data from the data server to the\nrender server. ClientDataServerController==0  => One MPI program.\nMPIMToNSocketConnection==0 => Client-DataServer.\nMPIMToNSocketConnection==1 => Client-DataServer-RenderServer.\n"},
  {"SetMPIMToNSocketConnection", PyvtkMPIMoveData_SetMPIMToNSocketConnection, METH_VARARGS,
   "V.SetMPIMToNSocketConnection(vtkMPIMToNSocketConnection)\nC++: void SetMPIMToNSocketConnection(\n    vtkMPIMToNSocketConnection *sc)\n\nObjects for communication. The controller is an MPI controller\nused to communicate between processes within one server (render\nor data). The client-data server socket controller is set on the\nclient and data server and is used to communicate between the\ntwo. MPIMToNSocetConnection is set on the data server and render\nserver when we are running with a render server.  It has multiple\nsockets which are used to send data from the data server to the\nrender server. ClientDataServerController==0  => One MPI program.\nMPIMToNSocketConnection==0 => Client-DataServer.\nMPIMToNSocketConnection==1 => Client-DataServer-RenderServer.\n"},
  {"SetClientDataServerSocketController", PyvtkMPIMoveData_SetClientDataServerSocketController, METH_VARARGS,
   "V.SetClientDataServerSocketController(vtkMultiProcessController)\nC++: void SetClientDataServerSocketController(\n    vtkMultiProcessController *)\n\nObjects for communication. The controller is an MPI controller\nused to communicate between processes within one server (render\nor data). The client-data server socket controller is set on the\nclient and data server and is used to communicate between the\ntwo. MPIMToNSocetConnection is set on the data server and render\nserver when we are running with a render server.  It has multiple\nsockets which are used to send data from the data server to the\nrender server. ClientDataServerController==0  => One MPI program.\nMPIMToNSocketConnection==0 => Client-DataServer.\nMPIMToNSocketConnection==1 => Client-DataServer-RenderServer.\n"},
  {"GetClientDataServerSocketController", PyvtkMPIMoveData_GetClientDataServerSocketController, METH_VARARGS,
   "V.GetClientDataServerSocketController()\n    -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetClientDataServerSocketController(\n    )\n\nObjects for communication. The controller is an MPI controller\nused to communicate between processes within one server (render\nor data). The client-data server socket controller is set on the\nclient and data server and is used to communicate between the\ntwo. MPIMToNSocetConnection is set on the data server and render\nserver when we are running with a render server.  It has multiple\nsockets which are used to send data from the data server to the\nrender server. ClientDataServerController==0  => One MPI program.\nMPIMToNSocketConnection==0 => Client-DataServer.\nMPIMToNSocketConnection==1 => Client-DataServer-RenderServer.\n"},
  {"SetServerToClient", PyvtkMPIMoveData_SetServerToClient, METH_VARARGS,
   "V.SetServerToClient()\nC++: void SetServerToClient()\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {"SetServerToDataServer", PyvtkMPIMoveData_SetServerToDataServer, METH_VARARGS,
   "V.SetServerToDataServer()\nC++: void SetServerToDataServer()\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {"SetServerToRenderServer", PyvtkMPIMoveData_SetServerToRenderServer, METH_VARARGS,
   "V.SetServerToRenderServer()\nC++: void SetServerToRenderServer()\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {"SetServer", PyvtkMPIMoveData_SetServer, METH_VARARGS,
   "V.SetServer(int)\nC++: virtual void SetServer(int _arg)\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {"GetServerMinValue", PyvtkMPIMoveData_GetServerMinValue, METH_VARARGS,
   "V.GetServerMinValue() -> int\nC++: virtual int GetServerMinValue()\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {"GetServerMaxValue", PyvtkMPIMoveData_GetServerMaxValue, METH_VARARGS,
   "V.GetServerMaxValue() -> int\nC++: virtual int GetServerMaxValue()\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {"GetServer", PyvtkMPIMoveData_GetServer, METH_VARARGS,
   "V.GetServer() -> int\nC++: virtual int GetServer()\n\nTell the object on which client/server it resides. Whether the\nsockets are set helps determine which servers are running.\n"},
  {"SetMoveModeToPassThrough", PyvtkMPIMoveData_SetMoveModeToPassThrough, METH_VARARGS,
   "V.SetMoveModeToPassThrough()\nC++: void SetMoveModeToPassThrough()\n\nSpecify how the data is to be redistributed.\n"},
  {"SetMoveModeToCollect", PyvtkMPIMoveData_SetMoveModeToCollect, METH_VARARGS,
   "V.SetMoveModeToCollect()\nC++: void SetMoveModeToCollect()\n\n"},
  {"SetMoveModeToClone", PyvtkMPIMoveData_SetMoveModeToClone, METH_VARARGS,
   "V.SetMoveModeToClone()\nC++: void SetMoveModeToClone()\n\n"},
  {"SetMoveMode", PyvtkMPIMoveData_SetMoveMode, METH_VARARGS,
   "V.SetMoveMode(int)\nC++: virtual void SetMoveMode(int _arg)\n\n"},
  {"GetMoveModeMinValue", PyvtkMPIMoveData_GetMoveModeMinValue, METH_VARARGS,
   "V.GetMoveModeMinValue() -> int\nC++: virtual int GetMoveModeMinValue()\n\n"},
  {"GetMoveModeMaxValue", PyvtkMPIMoveData_GetMoveModeMaxValue, METH_VARARGS,
   "V.GetMoveModeMaxValue() -> int\nC++: virtual int GetMoveModeMaxValue()\n\n"},
  {"SetOutputDataType", PyvtkMPIMoveData_SetOutputDataType, METH_VARARGS,
   "V.SetOutputDataType(int)\nC++: virtual void SetOutputDataType(int _arg)\n\nControls the output type. This is required because processes\nreceiving data cannot know their output type in RequestDataObject\nwithout communicating with other processes. Since communicating\nwith other processes in RequestDataObject is dangerous (can cause\ndeadlock because it may happen out-of-sync), the application has\nto set the output type. The default is VTK_POLY_DATA.\n"},
  {"GetOutputDataType", PyvtkMPIMoveData_GetOutputDataType, METH_VARARGS,
   "V.GetOutputDataType() -> int\nC++: virtual int GetOutputDataType()\n\nControls the output type. This is required because processes\nreceiving data cannot know their output type in RequestDataObject\nwithout communicating with other processes. Since communicating\nwith other processes in RequestDataObject is dangerous (can cause\ndeadlock because it may happen out-of-sync), the application has\nto set the output type. The default is VTK_POLY_DATA.\n"},
  {"SetUseZLibCompression", PyvtkMPIMoveData_SetUseZLibCompression, METH_VARARGS,
   "V.SetUseZLibCompression(bool)\nC++: static void SetUseZLibCompression(bool b)\n\nWhen set to true, zlib compression is used. False by default.\nThis value has any effect only on the data-sender processes. The\nreceiver always checks the received data to see if zlib\ndecompression is required.\n"},
  {"GetUseZLibCompression", PyvtkMPIMoveData_GetUseZLibCompression, METH_VARARGS,
   "V.GetUseZLibCompression() -> bool\nC++: static bool GetUseZLibCompression()\n\nWhen set to true, zlib compression is used. False by default.\nThis value has any effect only on the data-sender processes. The\nreceiver always checks the received data to see if zlib\ndecompression is required.\n"},
  {"GetOutputGeneratedOnProcess", PyvtkMPIMoveData_GetOutputGeneratedOnProcess, METH_VARARGS,
   "V.GetOutputGeneratedOnProcess() -> bool\nC++: bool GetOutputGeneratedOnProcess()\n\nvtkMPIMoveData doesn't necessarily generate a valid output data\non all the involved processes (depending on the MoveMode and\nServer ivars). This returns true if valid data is available on\nthe current processes after successful Update() given the current\nivars).\n"},
  {"SetSkipDataServerGatherToZero", PyvtkMPIMoveData_SetSkipDataServerGatherToZero, METH_VARARGS,
   "V.SetSkipDataServerGatherToZero(bool)\nC++: virtual void SetSkipDataServerGatherToZero(bool _arg)\n\nWhen set, vtkMPIMoveData will skip the gather-to-root-node\nprocess altogether. This is useful when the data is already\ncloned on the server-nodes or we are interested in the root-node\nresult alone.\n"},
  {"GetSkipDataServerGatherToZero", PyvtkMPIMoveData_GetSkipDataServerGatherToZero, METH_VARARGS,
   "V.GetSkipDataServerGatherToZero() -> bool\nC++: virtual bool GetSkipDataServerGatherToZero()\n\nWhen set, vtkMPIMoveData will skip the gather-to-root-node\nprocess altogether. This is useful when the data is already\ncloned on the server-nodes or we are interested in the root-node\nresult alone.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMPIMoveData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkMPIMoveData", // tp_name
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
  PyvtkMPIMoveData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMPIMoveData_StaticNew()
{
  return vtkMPIMoveData::New();
}

PyObject *PyvtkMPIMoveData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMPIMoveData_Type, PyvtkMPIMoveData_Methods,
    "vtkMPIMoveData",
 &PyvtkMPIMoveData_StaticNew);

  PyTypeObject *pytype = &PyvtkMPIMoveData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMPIMoveData_MoveModes_Type);
  PyvtkMPIMoveData_MoveModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkMPIMoveData_MoveModes_Type);

  o = (PyObject *)&PyvtkMPIMoveData_MoveModes_Type;
  if (PyDict_SetItemString(d, "MoveModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMPIMoveData::MoveModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "PASS_THROUGH", vtkMPIMoveData::PASS_THROUGH },
        { "COLLECT", vtkMPIMoveData::COLLECT },
        { "CLONE", vtkMPIMoveData::CLONE },
        { "COLLECT_AND_PASS_THROUGH", vtkMPIMoveData::COLLECT_AND_PASS_THROUGH },
      };

    o = PyvtkMPIMoveData_MoveModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMPIMoveData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMPIMoveData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMPIMoveData", o) != 0)
  {
    Py_DECREF(o);
  }

}

