// python wrapper for vtkDSPFilterDefinition
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
#include "vtkDSPFilterDefinition.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDSPFilterDefinition(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDSPFilterDefinition_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkDSPFilterDefinition_Doc =
  "vtkDSPFilterDefinition - used by the Exodus readers\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDSPFilterDefinition is used by vtkExodusReader, vtkExodusIIReader\n"
  "and vtkPExodusReader to do temporal smoothing of data\n"
  "@sa\n"
  "vtkDSPFilterGroup vtkExodusReader vtkExodusIIReader vtkPExodusReader\n\n";


static PyObject *
PyvtkDSPFilterDefinition_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDSPFilterDefinition::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDSPFilterDefinition::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDSPFilterDefinition *tempr = vtkDSPFilterDefinition::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDSPFilterDefinition *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDSPFilterDefinition::NewInstance());

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
PyvtkDSPFilterDefinition_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  vtkDSPFilterDefinition *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDSPFilterDefinition"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkDSPFilterDefinition::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkDSPFilterDefinition::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_IsThisInputVariableInstanceNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsThisInputVariableInstanceNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->IsThisInputVariableInstanceNeeded(temp0, temp1) :
      op->vtkDSPFilterDefinition::IsThisInputVariableInstanceNeeded(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_PushBackNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushBackNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PushBackNumeratorWeight(temp0);
    }
    else
    {
      op->vtkDSPFilterDefinition::PushBackNumeratorWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_PushBackDenominatorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushBackDenominatorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PushBackDenominatorWeight(temp0);
    }
    else
    {
      op->vtkDSPFilterDefinition::PushBackDenominatorWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_PushBackForwardNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushBackForwardNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PushBackForwardNumeratorWeight(temp0);
    }
    else
    {
      op->vtkDSPFilterDefinition::PushBackForwardNumeratorWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_SetInputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputVariableName(temp0);
    }
    else
    {
      op->vtkDSPFilterDefinition::SetInputVariableName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_SetOutputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputVariableName(temp0);
    }
    else
    {
      op->vtkDSPFilterDefinition::SetOutputVariableName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetInputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInputVariableName() :
      op->vtkDSPFilterDefinition::GetInputVariableName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetOutputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOutputVariableName() :
      op->vtkDSPFilterDefinition::GetOutputVariableName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetNumNumeratorWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumNumeratorWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumNumeratorWeights() :
      op->vtkDSPFilterDefinition::GetNumNumeratorWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetNumDenominatorWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumDenominatorWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumDenominatorWeights() :
      op->vtkDSPFilterDefinition::GetNumDenominatorWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetNumForwardNumeratorWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumForwardNumeratorWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumForwardNumeratorWeights() :
      op->vtkDSPFilterDefinition::GetNumForwardNumeratorWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNumeratorWeight(temp0) :
      op->vtkDSPFilterDefinition::GetNumeratorWeight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetDenominatorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDenominatorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDenominatorWeight(temp0) :
      op->vtkDSPFilterDefinition::GetDenominatorWeight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetForwardNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForwardNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetForwardNumeratorWeight(temp0) :
      op->vtkDSPFilterDefinition::GetForwardNumeratorWeight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDSPFilterDefinition_Methods[] = {
  {"IsTypeOf", PyvtkDSPFilterDefinition_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDSPFilterDefinition_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDSPFilterDefinition_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDSPFilterDefinition\nC++: static vtkDSPFilterDefinition *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDSPFilterDefinition_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDSPFilterDefinition\nC++: vtkDSPFilterDefinition *NewInstance()\n\n"},
  {"Copy", PyvtkDSPFilterDefinition_Copy, METH_VARARGS,
   "V.Copy(vtkDSPFilterDefinition)\nC++: void Copy(vtkDSPFilterDefinition *other)\n\n"},
  {"Clear", PyvtkDSPFilterDefinition_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\n"},
  {"IsThisInputVariableInstanceNeeded", PyvtkDSPFilterDefinition_IsThisInputVariableInstanceNeeded, METH_VARARGS,
   "V.IsThisInputVariableInstanceNeeded(int, int) -> bool\nC++: bool IsThisInputVariableInstanceNeeded(int a_timestep,\n    int a_outputTimestep)\n\n"},
  {"PushBackNumeratorWeight", PyvtkDSPFilterDefinition_PushBackNumeratorWeight, METH_VARARGS,
   "V.PushBackNumeratorWeight(float)\nC++: void PushBackNumeratorWeight(double a_value)\n\n"},
  {"PushBackDenominatorWeight", PyvtkDSPFilterDefinition_PushBackDenominatorWeight, METH_VARARGS,
   "V.PushBackDenominatorWeight(float)\nC++: void PushBackDenominatorWeight(double a_value)\n\n"},
  {"PushBackForwardNumeratorWeight", PyvtkDSPFilterDefinition_PushBackForwardNumeratorWeight, METH_VARARGS,
   "V.PushBackForwardNumeratorWeight(float)\nC++: void PushBackForwardNumeratorWeight(double a_value)\n\n"},
  {"SetInputVariableName", PyvtkDSPFilterDefinition_SetInputVariableName, METH_VARARGS,
   "V.SetInputVariableName(string)\nC++: void SetInputVariableName(const char *a_value)\n\n"},
  {"SetOutputVariableName", PyvtkDSPFilterDefinition_SetOutputVariableName, METH_VARARGS,
   "V.SetOutputVariableName(string)\nC++: void SetOutputVariableName(const char *a_value)\n\n"},
  {"GetInputVariableName", PyvtkDSPFilterDefinition_GetInputVariableName, METH_VARARGS,
   "V.GetInputVariableName() -> string\nC++: const char *GetInputVariableName()\n\n"},
  {"GetOutputVariableName", PyvtkDSPFilterDefinition_GetOutputVariableName, METH_VARARGS,
   "V.GetOutputVariableName() -> string\nC++: const char *GetOutputVariableName()\n\n"},
  {"GetNumNumeratorWeights", PyvtkDSPFilterDefinition_GetNumNumeratorWeights, METH_VARARGS,
   "V.GetNumNumeratorWeights() -> int\nC++: int GetNumNumeratorWeights()\n\n"},
  {"GetNumDenominatorWeights", PyvtkDSPFilterDefinition_GetNumDenominatorWeights, METH_VARARGS,
   "V.GetNumDenominatorWeights() -> int\nC++: int GetNumDenominatorWeights()\n\n"},
  {"GetNumForwardNumeratorWeights", PyvtkDSPFilterDefinition_GetNumForwardNumeratorWeights, METH_VARARGS,
   "V.GetNumForwardNumeratorWeights() -> int\nC++: int GetNumForwardNumeratorWeights()\n\n"},
  {"GetNumeratorWeight", PyvtkDSPFilterDefinition_GetNumeratorWeight, METH_VARARGS,
   "V.GetNumeratorWeight(int) -> float\nC++: double GetNumeratorWeight(int a_which)\n\n"},
  {"GetDenominatorWeight", PyvtkDSPFilterDefinition_GetDenominatorWeight, METH_VARARGS,
   "V.GetDenominatorWeight(int) -> float\nC++: double GetDenominatorWeight(int a_which)\n\n"},
  {"GetForwardNumeratorWeight", PyvtkDSPFilterDefinition_GetForwardNumeratorWeight, METH_VARARGS,
   "V.GetForwardNumeratorWeight(int) -> float\nC++: double GetForwardNumeratorWeight(int a_which)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDSPFilterDefinition_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkDSPFilterDefinition", // tp_name
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
  PyvtkDSPFilterDefinition_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDSPFilterDefinition_StaticNew()
{
  return vtkDSPFilterDefinition::New();
}

PyObject *PyvtkDSPFilterDefinition_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDSPFilterDefinition_Type, PyvtkDSPFilterDefinition_Methods,
    "vtkDSPFilterDefinition",
 &PyvtkDSPFilterDefinition_StaticNew);

  PyTypeObject *pytype = &PyvtkDSPFilterDefinition_Type;

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

void PyVTKAddFile_vtkDSPFilterDefinition(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDSPFilterDefinition_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDSPFilterDefinition", o) != 0)
  {
    Py_DECREF(o);
  }

}

