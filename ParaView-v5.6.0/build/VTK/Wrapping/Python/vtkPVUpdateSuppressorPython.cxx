// python wrapper for vtkPVUpdateSuppressor
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
#include "vtkTimeStamp.h"
#include "vtkPVUpdateSuppressor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVUpdateSuppressor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVUpdateSuppressor_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkPVUpdateSuppressor_Doc =
  "vtkPVUpdateSuppressor - prevents propagation of update\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkPVUpdateSuppressor is simple filter that work with\n"
  "vtkUpdateSuppressorPipeline to block pipeline updates. One should\n"
  "call ForceUpdate() to update the input, if needed, explicitly. Note\n"
  "that ForceUpdate() may not result in input updating at all if it has\n"
  "been already updated by some other means.\n\n";


static PyObject *
PyvtkPVUpdateSuppressor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVUpdateSuppressor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVUpdateSuppressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVUpdateSuppressor *op = static_cast<vtkPVUpdateSuppressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVUpdateSuppressor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVUpdateSuppressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVUpdateSuppressor *tempr = vtkPVUpdateSuppressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVUpdateSuppressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVUpdateSuppressor *op = static_cast<vtkPVUpdateSuppressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVUpdateSuppressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVUpdateSuppressor::NewInstance());

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
PyvtkPVUpdateSuppressor_ForceUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVUpdateSuppressor *op = static_cast<vtkPVUpdateSuppressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceUpdate();
    }
    else
    {
      op->vtkPVUpdateSuppressor::ForceUpdate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVUpdateSuppressor_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVUpdateSuppressor *op = static_cast<vtkPVUpdateSuppressor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkPVUpdateSuppressor::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVUpdateSuppressor_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVUpdateSuppressor *op = static_cast<vtkPVUpdateSuppressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPVUpdateSuppressor::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVUpdateSuppressor_GetForcedUpdateTimeStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForcedUpdateTimeStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVUpdateSuppressor *op = static_cast<vtkPVUpdateSuppressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetForcedUpdateTimeStamp() :
      op->vtkPVUpdateSuppressor::GetForcedUpdateTimeStamp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}

static PyMethodDef PyvtkPVUpdateSuppressor_Methods[] = {
  {"IsTypeOf", PyvtkPVUpdateSuppressor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVUpdateSuppressor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVUpdateSuppressor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVUpdateSuppressor\nC++: static vtkPVUpdateSuppressor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVUpdateSuppressor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVUpdateSuppressor\nC++: vtkPVUpdateSuppressor *NewInstance()\n\n"},
  {"ForceUpdate", PyvtkPVUpdateSuppressor_ForceUpdate, METH_VARARGS,
   "V.ForceUpdate()\nC++: virtual void ForceUpdate()\n\nForce update on the input.\n"},
  {"SetEnabled", PyvtkPVUpdateSuppressor_SetEnabled, METH_VARARGS,
   "V.SetEnabled(bool)\nC++: void SetEnabled(bool)\n\nGet/Set if the update suppressor is enabled. If the update\nsuppressor is not enabled, it won't suppress any updates. Enabled\nby default.\n"},
  {"GetEnabled", PyvtkPVUpdateSuppressor_GetEnabled, METH_VARARGS,
   "V.GetEnabled() -> bool\nC++: virtual bool GetEnabled()\n\nGet/Set if the update suppressor is enabled. If the update\nsuppressor is not enabled, it won't suppress any updates. Enabled\nby default.\n"},
  {"GetForcedUpdateTimeStamp", PyvtkPVUpdateSuppressor_GetForcedUpdateTimeStamp, METH_VARARGS,
   "V.GetForcedUpdateTimeStamp() -> vtkTimeStamp\nC++: virtual vtkTimeStamp GetForcedUpdateTimeStamp()\n\nProvides access to the timestamp when the most recent\nForceUpdate() was called.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVUpdateSuppressor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVUpdateSuppressor", // tp_name
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
  PyvtkPVUpdateSuppressor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVUpdateSuppressor_StaticNew()
{
  return vtkPVUpdateSuppressor::New();
}

PyObject *PyvtkPVUpdateSuppressor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVUpdateSuppressor_Type, PyvtkPVUpdateSuppressor_Methods,
    "vtkPVUpdateSuppressor",
 &PyvtkPVUpdateSuppressor_StaticNew);

  PyTypeObject *pytype = &PyvtkPVUpdateSuppressor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVUpdateSuppressor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVUpdateSuppressor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVUpdateSuppressor", o) != 0)
  {
    Py_DECREF(o);
  }

}

