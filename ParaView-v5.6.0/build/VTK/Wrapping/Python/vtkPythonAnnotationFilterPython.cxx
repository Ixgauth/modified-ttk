// python wrapper for vtkPythonAnnotationFilter
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
#include "vtkPythonAnnotationFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPythonAnnotationFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPythonAnnotationFilter_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkPythonAnnotationFilter_Doc =
  "vtkPythonAnnotationFilter - filter used to generate text annotation\nfrom Python expressions.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkPythonAnnotationFilter is designed to generate vtkTableAlgorithm\n"
  "with a single string in it. The goal is that user will write a Python\n"
  "expression, similar to an expression in Python Calculator\n"
  "(vtkPythonCalculator). The generated result is converted to string\n"
  "and placed in the output.\n\n"
  "The variables available in the expression evaluation scope are as\n"
  "follows:\n"
  "\\li sanitized array names for all arrays in the chosen\n"
  "    ArrayAssociation.\n"
  "\\li input: refers to the input dataset (wrapped as\n"
  "vtk.numpy_interface.dataset_adapter.DataObject or subclass).\n"
  "\\li time_value: vtkDataObject::DATA_TIME_STEP() from input.\n"
  "\\li time_steps: vtkDataObject::TIME_STEPS() from the input, if any\n"
  "\\li time_range: vtkDataObject::TIME_RANGE() from the input, if any\n\n"
  "Examples of valid expressions are:\n"
  "\\li \"Max temp is %s\" % max(Temp)\n\n";


static PyObject *
PyvtkPythonAnnotationFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPythonAnnotationFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonAnnotationFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPythonAnnotationFilter *tempr = vtkPythonAnnotationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPythonAnnotationFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonAnnotationFilter::NewInstance());

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
PyvtkPythonAnnotationFilter_SetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExpression(temp0);
    }
    else
    {
      op->vtkPythonAnnotationFilter::SetExpression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetExpression() :
      op->vtkPythonAnnotationFilter::GetExpression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_SetArrayAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayAssociation(temp0);
    }
    else
    {
      op->vtkPythonAnnotationFilter::SetArrayAssociation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetArrayAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayAssociation() :
      op->vtkPythonAnnotationFilter::GetArrayAssociation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetComputedAnnotationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedAnnotationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetComputedAnnotationValue() :
      op->vtkPythonAnnotationFilter::GetComputedAnnotationValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetDataTimeValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTimeValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDataTimeValid() :
      op->vtkPythonAnnotationFilter::GetDataTimeValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetDataTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDataTime() :
      op->vtkPythonAnnotationFilter::GetDataTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkPythonAnnotationFilter::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeStep(temp0) :
      op->vtkPythonAnnotationFilter::GetTimeStep(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetTimeRangeValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeRangeValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTimeRangeValid() :
      op->vtkPythonAnnotationFilter::GetTimeRangeValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetTimeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTimeRange() :
      op->vtkPythonAnnotationFilter::GetTimeRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_GetCurrentInputDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetCurrentInputDataObject() :
      op->vtkPythonAnnotationFilter::GetCurrentInputDataObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonAnnotationFilter_SetComputedAnnotationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputedAnnotationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonAnnotationFilter *op = static_cast<vtkPythonAnnotationFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputedAnnotationValue(temp0);
    }
    else
    {
      op->vtkPythonAnnotationFilter::SetComputedAnnotationValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPythonAnnotationFilter_Methods[] = {
  {"IsTypeOf", PyvtkPythonAnnotationFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPythonAnnotationFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPythonAnnotationFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPythonAnnotationFilter\nC++: static vtkPythonAnnotationFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPythonAnnotationFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPythonAnnotationFilter\nC++: vtkPythonAnnotationFilter *NewInstance()\n\n"},
  {"SetExpression", PyvtkPythonAnnotationFilter_SetExpression, METH_VARARGS,
   "V.SetExpression(string)\nC++: virtual void SetExpression(const char *_arg)\n\nSet the expression to evaluate. Here is a set of common\nexpressions:\n- \"Momentum %s\" %\n  str(Momentum[available_timesteps.index(provided_time)])\n"},
  {"GetExpression", PyvtkPythonAnnotationFilter_GetExpression, METH_VARARGS,
   "V.GetExpression() -> string\nC++: virtual char *GetExpression()\n\nSet the expression to evaluate. Here is a set of common\nexpressions:\n- \"Momentum %s\" %\n  str(Momentum[available_timesteps.index(provided_time)])\n"},
  {"SetArrayAssociation", PyvtkPythonAnnotationFilter_SetArrayAssociation, METH_VARARGS,
   "V.SetArrayAssociation(int)\nC++: virtual void SetArrayAssociation(int _arg)\n\nSet the input array association. This dictates which array names\nare made available in the namespace by default. You can still use\ninput.PointData['foo'] or input.CellData['bar'] explicitly to\npick a specific array in your expression.\n"},
  {"GetArrayAssociation", PyvtkPythonAnnotationFilter_GetArrayAssociation, METH_VARARGS,
   "V.GetArrayAssociation() -> int\nC++: virtual int GetArrayAssociation()\n\nSet the input array association. This dictates which array names\nare made available in the namespace by default. You can still use\ninput.PointData['foo'] or input.CellData['bar'] explicitly to\npick a specific array in your expression.\n"},
  {"GetComputedAnnotationValue", PyvtkPythonAnnotationFilter_GetComputedAnnotationValue, METH_VARARGS,
   "V.GetComputedAnnotationValue() -> string\nC++: virtual char *GetComputedAnnotationValue()\n\nGet the value that is going to be printed to the output.\n"},
  {"GetDataTimeValid", PyvtkPythonAnnotationFilter_GetDataTimeValid, METH_VARARGS,
   "V.GetDataTimeValid() -> bool\nC++: virtual bool GetDataTimeValid()\n\nGet methods for use in annotation.py. The values are only valid\nduring RequestData().\n"},
  {"GetDataTime", PyvtkPythonAnnotationFilter_GetDataTime, METH_VARARGS,
   "V.GetDataTime() -> float\nC++: virtual double GetDataTime()\n\nGet methods for use in annotation.py. The values are only valid\nduring RequestData().\n"},
  {"GetNumberOfTimeSteps", PyvtkPythonAnnotationFilter_GetNumberOfTimeSteps, METH_VARARGS,
   "V.GetNumberOfTimeSteps() -> int\nC++: virtual int GetNumberOfTimeSteps()\n\n"},
  {"GetTimeStep", PyvtkPythonAnnotationFilter_GetTimeStep, METH_VARARGS,
   "V.GetTimeStep(int) -> float\nC++: double GetTimeStep(int index)\n\n"},
  {"GetTimeRangeValid", PyvtkPythonAnnotationFilter_GetTimeRangeValid, METH_VARARGS,
   "V.GetTimeRangeValid() -> bool\nC++: virtual bool GetTimeRangeValid()\n\n"},
  {"GetTimeRange", PyvtkPythonAnnotationFilter_GetTimeRange, METH_VARARGS,
   "V.GetTimeRange() -> (float, float)\nC++: double *GetTimeRange()\n\n"},
  {"GetCurrentInputDataObject", PyvtkPythonAnnotationFilter_GetCurrentInputDataObject, METH_VARARGS,
   "V.GetCurrentInputDataObject() -> vtkDataObject\nC++: virtual vtkDataObject *GetCurrentInputDataObject()\n\n"},
  {"SetComputedAnnotationValue", PyvtkPythonAnnotationFilter_SetComputedAnnotationValue, METH_VARARGS,
   "V.SetComputedAnnotationValue(string)\nC++: void SetComputedAnnotationValue(const char *value)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPythonAnnotationFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPythonAnnotationFilter", // tp_name
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
  PyvtkPythonAnnotationFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPythonAnnotationFilter_StaticNew()
{
  return vtkPythonAnnotationFilter::New();
}

PyObject *PyvtkPythonAnnotationFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPythonAnnotationFilter_Type, PyvtkPythonAnnotationFilter_Methods,
    "vtkPythonAnnotationFilter",
 &PyvtkPythonAnnotationFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkPythonAnnotationFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPythonAnnotationFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPythonAnnotationFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPythonAnnotationFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

