// python wrapper for vtkDummyController
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
#include "vtkDummyController.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDummyController(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDummyController_ClassNew(); }

#ifndef DECLARED_PyvtkMultiProcessController_ClassNew
extern "C" { PyObject *PyvtkMultiProcessController_ClassNew(); }
#define DECLARED_PyvtkMultiProcessController_ClassNew
#endif

static const char *PyvtkDummyController_Doc =
  "vtkDummyController - Dummy controller for single process applications\n\n"
  "Superclass: vtkMultiProcessController\n\n"
  "This is a dummy controller which can be used by applications which\n"
  "always require a controller but are also compile on systems without\n"
  "threads or mpi.\n"
  "@sa\n"
  "vtkMultiProcessController\n\n";


static PyObject *
PyvtkDummyController_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDummyController::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDummyController::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDummyController *tempr = vtkDummyController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDummyController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDummyController::NewInstance());

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
PyvtkDummyController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkDummyController::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDummyController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

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
      op->vtkDummyController::Finalize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDummyController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDummyController_Finalize_s1(self, args);
    case 1:
      return PyvtkDummyController_Finalize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return nullptr;
}



static PyObject *
PyvtkDummyController_GetLocalProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLocalProcessId() :
      op->vtkDummyController::GetLocalProcessId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleMethodExecute();
    }
    else
    {
      op->vtkDummyController::SingleMethodExecute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultipleMethodExecute();
    }
    else
    {
      op->vtkDummyController::MultipleMethodExecute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateOutputWindow();
    }
    else
    {
      op->vtkDummyController::CreateOutputWindow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_GetRMICommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRMICommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommunicator *tempr = (ap.IsBound() ?
      op->GetRMICommunicator() :
      op->vtkDummyController::GetRMICommunicator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_SetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  vtkCommunicator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommunicator"))
  {
    if (ap.IsBound())
    {
      op->SetCommunicator(temp0);
    }
    else
    {
      op->vtkDummyController::SetCommunicator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_SetRMICommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRMICommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  vtkCommunicator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommunicator"))
  {
    if (ap.IsBound())
    {
      op->SetRMICommunicator(temp0);
    }
    else
    {
      op->vtkDummyController::SetRMICommunicator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDummyController_Methods[] = {
  {"IsTypeOf", PyvtkDummyController_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDummyController_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDummyController_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDummyController\nC++: static vtkDummyController *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDummyController_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDummyController\nC++: vtkDummyController *NewInstance()\n\n"},
  {"Finalize", PyvtkDummyController_Finalize, METH_VARARGS,
   "V.Finalize()\nC++: void Finalize() override;\nV.Finalize(int)\nC++: void Finalize(int) override;\n\nThis method is for cleaning up. If a subclass needs to clean up\nprocess communication (i.e. MPI) it would over ride this method.\n"},
  {"GetLocalProcessId", PyvtkDummyController_GetLocalProcessId, METH_VARARGS,
   "V.GetLocalProcessId() -> int\nC++: int GetLocalProcessId()\n\nThis method always returns 0.\n"},
  {"SingleMethodExecute", PyvtkDummyController_SingleMethodExecute, METH_VARARGS,
   "V.SingleMethodExecute()\nC++: void SingleMethodExecute() override;\n\nDirectly calls the single method.\n"},
  {"MultipleMethodExecute", PyvtkDummyController_MultipleMethodExecute, METH_VARARGS,
   "V.MultipleMethodExecute()\nC++: void MultipleMethodExecute() override;\n\nDirectly calls multiple method 0.\n"},
  {"CreateOutputWindow", PyvtkDummyController_CreateOutputWindow, METH_VARARGS,
   "V.CreateOutputWindow()\nC++: void CreateOutputWindow() override;\n\nDoes nothing.\n"},
  {"GetRMICommunicator", PyvtkDummyController_GetRMICommunicator, METH_VARARGS,
   "V.GetRMICommunicator() -> vtkCommunicator\nC++: virtual vtkCommunicator *GetRMICommunicator()\n\nIf you don't need any special functionality from the controller,\nyou can swap out the dummy communicator for another one.\n"},
  {"SetCommunicator", PyvtkDummyController_SetCommunicator, METH_VARARGS,
   "V.SetCommunicator(vtkCommunicator)\nC++: virtual void SetCommunicator(vtkCommunicator *)\n\nIf you don't need any special functionality from the controller,\nyou can swap out the dummy communicator for another one.\n"},
  {"SetRMICommunicator", PyvtkDummyController_SetRMICommunicator, METH_VARARGS,
   "V.SetRMICommunicator(vtkCommunicator)\nC++: virtual void SetRMICommunicator(vtkCommunicator *)\n\nIf you don't need any special functionality from the controller,\nyou can swap out the dummy communicator for another one.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDummyController_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkParallelCorePython.vtkDummyController", // tp_name
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
  PyvtkDummyController_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDummyController_StaticNew()
{
  return vtkDummyController::New();
}

PyObject *PyvtkDummyController_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDummyController_Type, PyvtkDummyController_Methods,
    "vtkDummyController",
 &PyvtkDummyController_StaticNew);

  PyTypeObject *pytype = &PyvtkDummyController_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiProcessController_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDummyController(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDummyController_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDummyController", o) != 0)
  {
    Py_DECREF(o);
  }

}

