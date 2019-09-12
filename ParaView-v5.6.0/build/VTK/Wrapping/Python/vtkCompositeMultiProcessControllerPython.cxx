// python wrapper for vtkCompositeMultiProcessController
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
#include "vtkCompositeMultiProcessController.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeMultiProcessController(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeMultiProcessController_ClassNew(); }

#ifndef DECLARED_PyvtkMultiProcessController_ClassNew
extern "C" { PyObject *PyvtkMultiProcessController_ClassNew(); }
#define DECLARED_PyvtkMultiProcessController_ClassNew
#endif

static const char *PyvtkCompositeMultiProcessController_Doc =
  "vtkCompositeMultiProcessController -\nvtkCompositeMultiProcessController offer a composite implementation\nof vtkMultiProcessController that allow us to deal with collaborative\n\n"
  "Superclass: vtkMultiProcessController\n\n"
  "MultiProcessController by switching transparently underneath the\n"
  "active one and forwarding the method call to that specific one.\n"
  "RMICallBack are simply set on all of the MultiProcessController\n"
  "inside the composite.\n\n";

static PyTypeObject PyvtkCompositeMultiProcessController_EventId_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkCompositeMultiProcessController.EventId", // tp_name
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

PyObject *PyvtkCompositeMultiProcessController_EventId_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCompositeMultiProcessController_EventId_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCompositeMultiProcessController_EventId_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkCompositeMultiProcessController_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeMultiProcessController::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeMultiProcessController::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeMultiProcessController *tempr = vtkCompositeMultiProcessController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeMultiProcessController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeMultiProcessController::NewInstance());

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
PyvtkCompositeMultiProcessController_GetActiveControllerID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveControllerID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveControllerID() :
      op->vtkCompositeMultiProcessController::GetActiveControllerID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_GetNumberOfControllers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfControllers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfControllers() :
      op->vtkCompositeMultiProcessController::GetNumberOfControllers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_GetControllerId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControllerId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetControllerId(temp0) :
      op->vtkCompositeMultiProcessController::GetControllerId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController(temp0) :
      op->vtkCompositeMultiProcessController::GetController(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_SetMasterController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasterController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMasterController(temp0);
    }
    else
    {
      op->vtkCompositeMultiProcessController::SetMasterController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_GetMasterController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasterController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMasterController() :
      op->vtkCompositeMultiProcessController::GetMasterController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_RegisterController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->RegisterController(temp0);
    }
    else
    {
      op->vtkCompositeMultiProcessController::RegisterController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_UnRegisterController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->UnRegisterController(temp0);
    }
    else
    {
      op->vtkCompositeMultiProcessController::UnRegisterController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_UnRegisterActiveController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterActiveController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UnRegisterActiveController() :
      op->vtkCompositeMultiProcessController::UnRegisterActiveController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_GetActiveController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetActiveController() :
      op->vtkCompositeMultiProcessController::GetActiveController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_TriggerRMI2All(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMI2All");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  int temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = VTK_PYBUFFER_INITIALIZER;
  int temp2;
  int temp3;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->TriggerRMI2All(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkCompositeMultiProcessController::TriggerRMI2All(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf1.obj != 0)
  {
    PyBuffer_Release(&pbuf1);
  }
#endif
  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCompositeMultiProcessController::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkCompositeMultiProcessController::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeMultiProcessController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Finalize(temp0);
    }
    else
    {
      op->vtkCompositeMultiProcessController::Finalize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeMultiProcessController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCompositeMultiProcessController_Finalize_s1(self, args);
    case 1:
      return PyvtkCompositeMultiProcessController_Finalize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return nullptr;
}



static PyObject *
PyvtkCompositeMultiProcessController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleMethodExecute();
    }
    else
    {
      op->vtkCompositeMultiProcessController::SingleMethodExecute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultipleMethodExecute();
    }
    else
    {
      op->vtkCompositeMultiProcessController::MultipleMethodExecute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateOutputWindow();
    }
    else
    {
      op->vtkCompositeMultiProcessController::CreateOutputWindow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_GetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommunicator *tempr = (ap.IsBound() ?
      op->GetCommunicator() :
      op->vtkCompositeMultiProcessController::GetCommunicator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_RemoveAllRMICallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRMICallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllRMICallbacks(temp0);
    }
    else
    {
      op->vtkCompositeMultiProcessController::RemoveAllRMICallbacks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_RemoveFirstRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFirstRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveFirstRMI(temp0) :
      op->vtkCompositeMultiProcessController::RemoveFirstRMI(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeMultiProcessController_RemoveRMICallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRMICallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeMultiProcessController *op = static_cast<vtkCompositeMultiProcessController *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveRMICallback(temp0) :
      op->vtkCompositeMultiProcessController::RemoveRMICallback(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeMultiProcessController_Methods[] = {
  {"IsTypeOf", PyvtkCompositeMultiProcessController_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeMultiProcessController_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeMultiProcessController_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkCompositeMultiProcessController\nC++: static vtkCompositeMultiProcessController *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeMultiProcessController_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeMultiProcessController\nC++: vtkCompositeMultiProcessController *NewInstance()\n\n"},
  {"GetActiveControllerID", PyvtkCompositeMultiProcessController_GetActiveControllerID, METH_VARARGS,
   "V.GetActiveControllerID() -> int\nC++: int GetActiveControllerID()\n\nReturn a unique identifier for the given selected controller.\nThis is only used as information to id which client is currently\ntalking to the server. In fact it is used inside\nvtkPVServerInformation so the client could know what is its\nunique ID in respect to the server.\n"},
  {"GetNumberOfControllers", PyvtkCompositeMultiProcessController_GetNumberOfControllers, METH_VARARGS,
   "V.GetNumberOfControllers() -> int\nC++: int GetNumberOfControllers()\n\nReturn the number of currently connected controllers.\n"},
  {"GetControllerId", PyvtkCompositeMultiProcessController_GetControllerId, METH_VARARGS,
   "V.GetControllerId(int) -> int\nC++: int GetControllerId(int idx)\n\nReturn the id of the nth controller.\n"},
  {"GetController", PyvtkCompositeMultiProcessController_GetController, METH_VARARGS,
   "V.GetController(int) -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController(int idx)\n\nReturn the nth controller.\n"},
  {"SetMasterController", PyvtkCompositeMultiProcessController_SetMasterController, METH_VARARGS,
   "V.SetMasterController(int)\nC++: void SetMasterController(int id)\n\nPromote the given controller (ID) to be the next master\ncontroller. Making a controller to be the master one, doesn't\nchange anything on the controller itself. It is just a meta-data\ninformation that helps client application to build master/slave\ncollaborative mechanism on top\n"},
  {"GetMasterController", PyvtkCompositeMultiProcessController_GetMasterController, METH_VARARGS,
   "V.GetMasterController() -> int\nC++: int GetMasterController()\n\nReturn the ID of the designed \"Master\" controller. That master\ncontroller is nothing else than a tag that can only be set on a\nsingle controller at a time.\n"},
  {"RegisterController", PyvtkCompositeMultiProcessController_RegisterController, METH_VARARGS,
   "V.RegisterController(vtkMultiProcessController)\nC++: void RegisterController(\n    vtkMultiProcessController *controller)\n\nAppend the given controller to the composite set. We focus on\nvtkSocketController because most of the API method are empty\n"},
  {"UnRegisterController", PyvtkCompositeMultiProcessController_UnRegisterController, METH_VARARGS,
   "V.UnRegisterController(vtkMultiProcessController)\nC++: void UnRegisterController(\n    vtkMultiProcessController *controller)\n\nRemove the given controller to the composite set.\n"},
  {"UnRegisterActiveController", PyvtkCompositeMultiProcessController_UnRegisterActiveController, METH_VARARGS,
   "V.UnRegisterActiveController() -> int\nC++: int UnRegisterActiveController()\n\nRemove the active controller and return the number of registered\ncontroller left.\n"},
  {"GetActiveController", PyvtkCompositeMultiProcessController_GetActiveController, METH_VARARGS,
   "V.GetActiveController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetActiveController()\n\nProvides access to the active controller.\n"},
  {"TriggerRMI2All", PyvtkCompositeMultiProcessController_TriggerRMI2All, METH_VARARGS,
   "V.TriggerRMI2All(int, void, int, int, bool)\nC++: virtual void TriggerRMI2All(int remote, void *data,\n    int length, int tag, bool sendToActiveToo)\n\nAllow server to broadcast data to all connected client with our\nwithout sending to the active client\n"},
  {"Initialize", PyvtkCompositeMultiProcessController_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize()\n\n"},
  {"Finalize", PyvtkCompositeMultiProcessController_Finalize, METH_VARARGS,
   "V.Finalize()\nC++: void Finalize() override;\nV.Finalize(int)\nC++: void Finalize(int) override;\n\nThis method is for cleaning up. If a subclass needs to clean up\nprocess communication (i.e. MPI) it would over ride this method.\n"},
  {"SingleMethodExecute", PyvtkCompositeMultiProcessController_SingleMethodExecute, METH_VARARGS,
   "V.SingleMethodExecute()\nC++: void SingleMethodExecute() override;\n\nExecute the SingleMethod (as define by SetSingleMethod) using\nthis->NumberOfProcesses processes.  This will only return when\nall the processes finish executing their methods.\n"},
  {"MultipleMethodExecute", PyvtkCompositeMultiProcessController_MultipleMethodExecute, METH_VARARGS,
   "V.MultipleMethodExecute()\nC++: void MultipleMethodExecute() override;\n\nExecute the MultipleMethods (as define by calling\nSetMultipleMethod for each of the required\nthis->NumberOfProcesses methods) using this->NumberOfProcesses\nprocesses.\n"},
  {"CreateOutputWindow", PyvtkCompositeMultiProcessController_CreateOutputWindow, METH_VARARGS,
   "V.CreateOutputWindow()\nC++: void CreateOutputWindow() override;\n\nThis method can be used to tell the controller to create a\nspecial output window in which all messages are preceded by the\nprocess id.\n"},
  {"GetCommunicator", PyvtkCompositeMultiProcessController_GetCommunicator, METH_VARARGS,
   "V.GetCommunicator() -> vtkCommunicator\nC++: vtkCommunicator *GetCommunicator() override;\n\nReturns the communicator associated with this controller. A\ndefault communicator is created in constructor.\n"},
  {"RemoveAllRMICallbacks", PyvtkCompositeMultiProcessController_RemoveAllRMICallbacks, METH_VARARGS,
   "V.RemoveAllRMICallbacks(int)\nC++: void RemoveAllRMICallbacks(int tag) override;\n\nThese methods are a part of the newer API to add multiple rmi\ncallbacks. When the RMI is triggered, all the callbacks are\ncalled Removes all callbacks for the tag.\n"},
  {"RemoveFirstRMI", PyvtkCompositeMultiProcessController_RemoveFirstRMI, METH_VARARGS,
   "V.RemoveFirstRMI(int) -> int\nC++: int RemoveFirstRMI(int tag) override;\n\nThese methods are a part of the newer API to add multiple rmi\ncallbacks. When the RMI is triggered, all the callbacks are\ncalled Removes all callbacks for the tag.\n"},
  {"RemoveRMICallback", PyvtkCompositeMultiProcessController_RemoveRMICallback, METH_VARARGS,
   "V.RemoveRMICallback(int) -> bool\nC++: bool RemoveRMICallback(unsigned long observerTagId) override;\n\nThese methods are a part of the newer API to add multiple rmi\ncallbacks. When the RMI is triggered, all the callbacks are\ncalled Removes all callbacks for the tag.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeMultiProcessController_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkCompositeMultiProcessController", // tp_name
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
  PyvtkCompositeMultiProcessController_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeMultiProcessController_StaticNew()
{
  return vtkCompositeMultiProcessController::New();
}

PyObject *PyvtkCompositeMultiProcessController_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeMultiProcessController_Type, PyvtkCompositeMultiProcessController_Methods,
    "vtkCompositeMultiProcessController",
 &PyvtkCompositeMultiProcessController_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeMultiProcessController_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiProcessController_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCompositeMultiProcessController_EventId_Type);
  PyvtkCompositeMultiProcessController_EventId_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCompositeMultiProcessController_EventId_Type);

  o = (PyObject *)&PyvtkCompositeMultiProcessController_EventId_Type;
  if (PyDict_SetItemString(d, "EventId", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkCompositeMultiProcessController_EventId_FromEnum(vtkCompositeMultiProcessController::CompositeMultiProcessControllerChanged);
  if (o)
  {
    PyDict_SetItemString(d, "CompositeMultiProcessControllerChanged", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeMultiProcessController(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeMultiProcessController_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeMultiProcessController", o) != 0)
  {
    Py_DECREF(o);
  }

}

