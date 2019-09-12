// python wrapper for vtkForceTime
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
#include "vtkForceTime.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkForceTime(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkForceTime_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkForceTime_Doc =
  "vtkForceTime - no description provided.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
;


static PyObject *
PyvtkForceTime_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkForceTime::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceTime *op = static_cast<vtkForceTime *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkForceTime::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkForceTime *tempr = vtkForceTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceTime *op = static_cast<vtkForceTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkForceTime *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkForceTime::NewInstance());

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
PyvtkForceTime_SetForcedTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForcedTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceTime *op = static_cast<vtkForceTime *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForcedTime(temp0);
    }
    else
    {
      op->vtkForceTime::SetForcedTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceTime_GetForcedTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForcedTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceTime *op = static_cast<vtkForceTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetForcedTime() :
      op->vtkForceTime::GetForcedTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceTime_SetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceTime *op = static_cast<vtkForceTime *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnorePipelineTime(temp0);
    }
    else
    {
      op->vtkForceTime::SetIgnorePipelineTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceTime_GetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceTime *op = static_cast<vtkForceTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIgnorePipelineTime() :
      op->vtkForceTime::GetIgnorePipelineTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceTime_IgnorePipelineTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceTime *op = static_cast<vtkForceTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnorePipelineTimeOn();
    }
    else
    {
      op->vtkForceTime::IgnorePipelineTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceTime_IgnorePipelineTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceTime *op = static_cast<vtkForceTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnorePipelineTimeOff();
    }
    else
    {
      op->vtkForceTime::IgnorePipelineTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkForceTime_Methods[] = {
  {"IsTypeOf", PyvtkForceTime_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkForceTime_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkForceTime_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkForceTime\nC++: static vtkForceTime *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkForceTime_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkForceTime\nC++: vtkForceTime *NewInstance()\n\n"},
  {"SetForcedTime", PyvtkForceTime_SetForcedTime, METH_VARARGS,
   "V.SetForcedTime(float)\nC++: virtual void SetForcedTime(double _arg)\n\nReplace the pipeline time by this one.\n"},
  {"GetForcedTime", PyvtkForceTime_GetForcedTime, METH_VARARGS,
   "V.GetForcedTime() -> float\nC++: virtual double GetForcedTime()\n\nReplace the pipeline time by this one.\n"},
  {"SetIgnorePipelineTime", PyvtkForceTime_SetIgnorePipelineTime, METH_VARARGS,
   "V.SetIgnorePipelineTime(bool)\nC++: virtual void SetIgnorePipelineTime(bool _arg)\n\nUse the ForcedTime. If disabled, use usual pipeline time.\n"},
  {"GetIgnorePipelineTime", PyvtkForceTime_GetIgnorePipelineTime, METH_VARARGS,
   "V.GetIgnorePipelineTime() -> bool\nC++: virtual bool GetIgnorePipelineTime()\n\nUse the ForcedTime. If disabled, use usual pipeline time.\n"},
  {"IgnorePipelineTimeOn", PyvtkForceTime_IgnorePipelineTimeOn, METH_VARARGS,
   "V.IgnorePipelineTimeOn()\nC++: virtual void IgnorePipelineTimeOn()\n\nUse the ForcedTime. If disabled, use usual pipeline time.\n"},
  {"IgnorePipelineTimeOff", PyvtkForceTime_IgnorePipelineTimeOff, METH_VARARGS,
   "V.IgnorePipelineTimeOff()\nC++: virtual void IgnorePipelineTimeOff()\n\nUse the ForcedTime. If disabled, use usual pipeline time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkForceTime_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkForceTime", // tp_name
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
  PyvtkForceTime_Doc, // tp_doc
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

static vtkObjectBase *PyvtkForceTime_StaticNew()
{
  return vtkForceTime::New();
}

PyObject *PyvtkForceTime_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkForceTime_Type, PyvtkForceTime_Methods,
    "vtkForceTime",
 &PyvtkForceTime_StaticNew);

  PyTypeObject *pytype = &PyvtkForceTime_Type;

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

void PyVTKAddFile_vtkForceTime(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkForceTime_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkForceTime", o) != 0)
  {
    Py_DECREF(o);
  }

}

