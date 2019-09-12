// python wrapper for vtkCleanArrays
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
#include "vtkCleanArrays.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCleanArrays(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCleanArrays_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkCleanArrays_Doc =
  "vtkCleanArrays - filter used to remove partial arrays across\nprocesses.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkCleanArrays is a filter used to remove (or fill up) partial arrays\n"
  "in a vtkDataSet (or a vtkCompositeDataSet) across processes (and\n"
  "blocks). Empty dataset on any processes is skipped and doesn't affect\n"
  "the array pruned (or filled) in the output. This filter also handles\n"
  "certain non-composite data objects such a tables.\n\n";


static PyObject *
PyvtkCleanArrays_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCleanArrays::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCleanArrays::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCleanArrays *tempr = vtkCleanArrays::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCleanArrays *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCleanArrays::NewInstance());

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
PyvtkCleanArrays_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

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
      op->vtkCleanArrays::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCleanArrays::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_SetFillPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillPartialArrays(temp0);
    }
    else
    {
      op->vtkCleanArrays::SetFillPartialArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_GetFillPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFillPartialArrays() :
      op->vtkCleanArrays::GetFillPartialArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_FillPartialArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillPartialArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillPartialArraysOn();
    }
    else
    {
      op->vtkCleanArrays::FillPartialArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanArrays_FillPartialArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillPartialArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanArrays *op = static_cast<vtkCleanArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillPartialArraysOff();
    }
    else
    {
      op->vtkCleanArrays::FillPartialArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCleanArrays_Methods[] = {
  {"IsTypeOf", PyvtkCleanArrays_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCleanArrays_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCleanArrays_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCleanArrays\nC++: static vtkCleanArrays *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCleanArrays_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCleanArrays\nC++: vtkCleanArrays *NewInstance()\n\n"},
  {"SetController", PyvtkCleanArrays_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *controller)\n\nThe user can set the controller used for inter-process\ncommunication. By default set to the global communicator.\n"},
  {"GetController", PyvtkCleanArrays_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nThe user can set the controller used for inter-process\ncommunication. By default set to the global communicator.\n"},
  {"SetFillPartialArrays", PyvtkCleanArrays_SetFillPartialArrays, METH_VARARGS,
   "V.SetFillPartialArrays(bool)\nC++: virtual void SetFillPartialArrays(bool _arg)\n\nWhen set to true (false by default), 0 filled array will be added\nfor missing arrays on this process (instead of removing partial\narrays).\n"},
  {"GetFillPartialArrays", PyvtkCleanArrays_GetFillPartialArrays, METH_VARARGS,
   "V.GetFillPartialArrays() -> bool\nC++: virtual bool GetFillPartialArrays()\n\nWhen set to true (false by default), 0 filled array will be added\nfor missing arrays on this process (instead of removing partial\narrays).\n"},
  {"FillPartialArraysOn", PyvtkCleanArrays_FillPartialArraysOn, METH_VARARGS,
   "V.FillPartialArraysOn()\nC++: virtual void FillPartialArraysOn()\n\nWhen set to true (false by default), 0 filled array will be added\nfor missing arrays on this process (instead of removing partial\narrays).\n"},
  {"FillPartialArraysOff", PyvtkCleanArrays_FillPartialArraysOff, METH_VARARGS,
   "V.FillPartialArraysOff()\nC++: virtual void FillPartialArraysOff()\n\nWhen set to true (false by default), 0 filled array will be added\nfor missing arrays on this process (instead of removing partial\narrays).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCleanArrays_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkCleanArrays", // tp_name
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
  PyvtkCleanArrays_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCleanArrays_StaticNew()
{
  return vtkCleanArrays::New();
}

PyObject *PyvtkCleanArrays_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCleanArrays_Type, PyvtkCleanArrays_Methods,
    "vtkCleanArrays",
 &PyvtkCleanArrays_StaticNew);

  PyTypeObject *pytype = &PyvtkCleanArrays_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCleanArrays(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCleanArrays_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCleanArrays", o) != 0)
  {
    Py_DECREF(o);
  }

}

