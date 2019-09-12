// python wrapper for vtkExtractsDeliveryHelper
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
#include "vtkExtractsDeliveryHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractsDeliveryHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractsDeliveryHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkExtractsDeliveryHelper_Doc =
  "vtkExtractsDeliveryHelper - \n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkExtractsDeliveryHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractsDeliveryHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractsDeliveryHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractsDeliveryHelper *tempr = vtkExtractsDeliveryHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractsDeliveryHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractsDeliveryHelper::NewInstance());

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
PyvtkExtractsDeliveryHelper_SetProcessIsProducer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessIsProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessIsProducer(temp0);
    }
    else
    {
      op->vtkExtractsDeliveryHelper::SetProcessIsProducer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_GetProcessIsProducer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIsProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProcessIsProducer() :
      op->vtkExtractsDeliveryHelper::GetProcessIsProducer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_SetSimulation2VisualizationController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSimulation2VisualizationController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  vtkSocketController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSocketController"))
  {
    if (ap.IsBound())
    {
      op->SetSimulation2VisualizationController(temp0);
    }
    else
    {
      op->vtkExtractsDeliveryHelper::SetSimulation2VisualizationController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_SetParallelController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetParallelController(temp0);
    }
    else
    {
      op->vtkExtractsDeliveryHelper::SetParallelController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_ClearAllExtracts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllExtracts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllExtracts();
    }
    else
    {
      op->vtkExtractsDeliveryHelper::ClearAllExtracts();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_AddExtractConsumer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddExtractConsumer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  const char *temp0 = nullptr;
  vtkTrivialProducer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTrivialProducer"))
  {
    if (ap.IsBound())
    {
      op->AddExtractConsumer(temp0, temp1);
    }
    else
    {
      op->vtkExtractsDeliveryHelper::AddExtractConsumer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_RemoveExtractConsumer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveExtractConsumer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveExtractConsumer(temp0);
    }
    else
    {
      op->vtkExtractsDeliveryHelper::RemoveExtractConsumer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_AddExtractProducer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddExtractProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  const char *temp0 = nullptr;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->AddExtractProducer(temp0, temp1);
    }
    else
    {
      op->vtkExtractsDeliveryHelper::AddExtractProducer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Update() :
      op->vtkExtractsDeliveryHelper::Update());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_SetNumberOfVisualizationProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfVisualizationProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfVisualizationProcesses(temp0);
    }
    else
    {
      op->vtkExtractsDeliveryHelper::SetNumberOfVisualizationProcesses(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_GetNumberOfVisualizationProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVisualizationProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVisualizationProcesses() :
      op->vtkExtractsDeliveryHelper::GetNumberOfVisualizationProcesses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_SetNumberOfSimulationProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSimulationProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSimulationProcesses(temp0);
    }
    else
    {
      op->vtkExtractsDeliveryHelper::SetNumberOfSimulationProcesses(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractsDeliveryHelper_GetNumberOfSimulationProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSimulationProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractsDeliveryHelper *op = static_cast<vtkExtractsDeliveryHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSimulationProcesses() :
      op->vtkExtractsDeliveryHelper::GetNumberOfSimulationProcesses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractsDeliveryHelper_Methods[] = {
  {"IsTypeOf", PyvtkExtractsDeliveryHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractsDeliveryHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractsDeliveryHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractsDeliveryHelper\nC++: static vtkExtractsDeliveryHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractsDeliveryHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractsDeliveryHelper\nC++: vtkExtractsDeliveryHelper *NewInstance()\n\n"},
  {"SetProcessIsProducer", PyvtkExtractsDeliveryHelper_SetProcessIsProducer, METH_VARARGS,
   "V.SetProcessIsProducer(bool)\nC++: virtual void SetProcessIsProducer(bool _arg)\n\n"},
  {"GetProcessIsProducer", PyvtkExtractsDeliveryHelper_GetProcessIsProducer, METH_VARARGS,
   "V.GetProcessIsProducer() -> bool\nC++: virtual bool GetProcessIsProducer()\n\n"},
  {"SetSimulation2VisualizationController", PyvtkExtractsDeliveryHelper_SetSimulation2VisualizationController, METH_VARARGS,
   "V.SetSimulation2VisualizationController(vtkSocketController)\nC++: void SetSimulation2VisualizationController(\n    vtkSocketController *)\n\n"},
  {"SetParallelController", PyvtkExtractsDeliveryHelper_SetParallelController, METH_VARARGS,
   "V.SetParallelController(vtkMultiProcessController)\nC++: void SetParallelController(vtkMultiProcessController *)\n\n"},
  {"ClearAllExtracts", PyvtkExtractsDeliveryHelper_ClearAllExtracts, METH_VARARGS,
   "V.ClearAllExtracts()\nC++: void ClearAllExtracts()\n\n"},
  {"AddExtractConsumer", PyvtkExtractsDeliveryHelper_AddExtractConsumer, METH_VARARGS,
   "V.AddExtractConsumer(string, vtkTrivialProducer)\nC++: void AddExtractConsumer(const char *key,\n    vtkTrivialProducer *consumer)\n\n"},
  {"RemoveExtractConsumer", PyvtkExtractsDeliveryHelper_RemoveExtractConsumer, METH_VARARGS,
   "V.RemoveExtractConsumer(string)\nC++: void RemoveExtractConsumer(const char *key)\n\n"},
  {"AddExtractProducer", PyvtkExtractsDeliveryHelper_AddExtractProducer, METH_VARARGS,
   "V.AddExtractProducer(string, vtkAlgorithmOutput)\nC++: void AddExtractProducer(const char *key,\n    vtkAlgorithmOutput *producerPort)\n\n"},
  {"Update", PyvtkExtractsDeliveryHelper_Update, METH_VARARGS,
   "V.Update() -> bool\nC++: bool Update()\n\nReturns true if the data has been made available.\n"},
  {"SetNumberOfVisualizationProcesses", PyvtkExtractsDeliveryHelper_SetNumberOfVisualizationProcesses, METH_VARARGS,
   "V.SetNumberOfVisualizationProcesses(int)\nC++: virtual void SetNumberOfVisualizationProcesses(int _arg)\n\n"},
  {"GetNumberOfVisualizationProcesses", PyvtkExtractsDeliveryHelper_GetNumberOfVisualizationProcesses, METH_VARARGS,
   "V.GetNumberOfVisualizationProcesses() -> int\nC++: virtual int GetNumberOfVisualizationProcesses()\n\n"},
  {"SetNumberOfSimulationProcesses", PyvtkExtractsDeliveryHelper_SetNumberOfSimulationProcesses, METH_VARARGS,
   "V.SetNumberOfSimulationProcesses(int)\nC++: virtual void SetNumberOfSimulationProcesses(int _arg)\n\n"},
  {"GetNumberOfSimulationProcesses", PyvtkExtractsDeliveryHelper_GetNumberOfSimulationProcesses, METH_VARARGS,
   "V.GetNumberOfSimulationProcesses() -> int\nC++: virtual int GetNumberOfSimulationProcesses()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractsDeliveryHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkExtractsDeliveryHelper", // tp_name
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
  PyvtkExtractsDeliveryHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractsDeliveryHelper_StaticNew()
{
  return vtkExtractsDeliveryHelper::New();
}

PyObject *PyvtkExtractsDeliveryHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractsDeliveryHelper_Type, PyvtkExtractsDeliveryHelper_Methods,
    "vtkExtractsDeliveryHelper",
 &PyvtkExtractsDeliveryHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractsDeliveryHelper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractsDeliveryHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractsDeliveryHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractsDeliveryHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

