// python wrapper for vtkThresholdTable
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
#include "vtkThresholdTable.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkThresholdTable(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkThresholdTable_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkThresholdTable_Doc =
  "vtkThresholdTable - Thresholds table rows.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkThresholdTable uses minimum and/or maximum values to threshold\n"
  "table rows based on the values in a particular column. The column to\n"
  "threshold is specified using SetInputArrayToProcess(0, ...).\n\n";


static PyObject *
PyvtkThresholdTable_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkThresholdTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThresholdTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkThresholdTable *tempr = vtkThresholdTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkThresholdTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThresholdTable::NewInstance());

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
PyvtkThresholdTable_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkThresholdTable::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkThresholdTable::GetModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkThresholdTable::GetModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkThresholdTable::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_SetMinValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetMinValue(*temp0);
    }
    else
    {
      op->vtkThresholdTable::SetMinValue(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkThresholdTable_SetMinValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinValue(temp0);
    }
    else
    {
      op->vtkThresholdTable::SetMinValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkThresholdTable_SetMinValue_Methods[] = {
  {nullptr, PyvtkThresholdTable_SetMinValue_s1, METH_VARARGS,
   "@W vtkVariant"},
  {nullptr, PyvtkThresholdTable_SetMinValue_s2, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkThresholdTable_SetMinValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThresholdTable_SetMinValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMinValue");
  return nullptr;
}



static PyObject *
PyvtkThresholdTable_GetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetMinValue() :
      op->vtkThresholdTable::GetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_SetMaxValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetMaxValue(*temp0);
    }
    else
    {
      op->vtkThresholdTable::SetMaxValue(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkThresholdTable_SetMaxValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxValue(temp0);
    }
    else
    {
      op->vtkThresholdTable::SetMaxValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkThresholdTable_SetMaxValue_Methods[] = {
  {nullptr, PyvtkThresholdTable_SetMaxValue_s1, METH_VARARGS,
   "@W vtkVariant"},
  {nullptr, PyvtkThresholdTable_SetMaxValue_s2, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkThresholdTable_SetMaxValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThresholdTable_SetMaxValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxValue");
  return nullptr;
}



static PyObject *
PyvtkThresholdTable_GetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetMaxValue() :
      op->vtkThresholdTable::GetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_ThresholdBetween_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->ThresholdBetween(*temp0, *temp1);
    }
    else
    {
      op->vtkThresholdTable::ThresholdBetween(*temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkThresholdTable_ThresholdBetween_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ThresholdBetween(temp0, temp1);
    }
    else
    {
      op->vtkThresholdTable::ThresholdBetween(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkThresholdTable_ThresholdBetween_Methods[] = {
  {nullptr, PyvtkThresholdTable_ThresholdBetween_s1, METH_VARARGS,
   "@WW vtkVariant vtkVariant"},
  {nullptr, PyvtkThresholdTable_ThresholdBetween_s2, METH_VARARGS,
   "@dd"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkThresholdTable_ThresholdBetween(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThresholdTable_ThresholdBetween_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ThresholdBetween");
  return nullptr;
}


static PyMethodDef PyvtkThresholdTable_Methods[] = {
  {"IsTypeOf", PyvtkThresholdTable_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkThresholdTable_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkThresholdTable_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkThresholdTable\nC++: static vtkThresholdTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkThresholdTable_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkThresholdTable\nC++: vtkThresholdTable *NewInstance()\n\n"},
  {"SetMode", PyvtkThresholdTable_SetMode, METH_VARARGS,
   "V.SetMode(int)\nC++: virtual void SetMode(int _arg)\n\nThe mode of the threshold filter.  Options are: ACCEPT_LESS_THAN\n(0) accepts rows with values < MaxValue; ACCEPT_GREATER_THAN (1)\naccepts rows with values > MinValue; ACCEPT_BETWEEN (2) accepts\nrows with values > MinValue and < MaxValue; ACCEPT_OUTSIDE (3)\naccepts rows with values < MinValue or > MaxValue.\n"},
  {"GetModeMinValue", PyvtkThresholdTable_GetModeMinValue, METH_VARARGS,
   "V.GetModeMinValue() -> int\nC++: virtual int GetModeMinValue()\n\nThe mode of the threshold filter.  Options are: ACCEPT_LESS_THAN\n(0) accepts rows with values < MaxValue; ACCEPT_GREATER_THAN (1)\naccepts rows with values > MinValue; ACCEPT_BETWEEN (2) accepts\nrows with values > MinValue and < MaxValue; ACCEPT_OUTSIDE (3)\naccepts rows with values < MinValue or > MaxValue.\n"},
  {"GetModeMaxValue", PyvtkThresholdTable_GetModeMaxValue, METH_VARARGS,
   "V.GetModeMaxValue() -> int\nC++: virtual int GetModeMaxValue()\n\nThe mode of the threshold filter.  Options are: ACCEPT_LESS_THAN\n(0) accepts rows with values < MaxValue; ACCEPT_GREATER_THAN (1)\naccepts rows with values > MinValue; ACCEPT_BETWEEN (2) accepts\nrows with values > MinValue and < MaxValue; ACCEPT_OUTSIDE (3)\naccepts rows with values < MinValue or > MaxValue.\n"},
  {"GetMode", PyvtkThresholdTable_GetMode, METH_VARARGS,
   "V.GetMode() -> int\nC++: virtual int GetMode()\n\nThe mode of the threshold filter.  Options are: ACCEPT_LESS_THAN\n(0) accepts rows with values < MaxValue; ACCEPT_GREATER_THAN (1)\naccepts rows with values > MinValue; ACCEPT_BETWEEN (2) accepts\nrows with values > MinValue and < MaxValue; ACCEPT_OUTSIDE (3)\naccepts rows with values < MinValue or > MaxValue.\n"},
  {"SetMinValue", PyvtkThresholdTable_SetMinValue, METH_VARARGS,
   "V.SetMinValue(vtkVariant)\nC++: virtual void SetMinValue(vtkVariant v)\nV.SetMinValue(float)\nC++: void SetMinValue(double v)\n\nThe minimum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {"GetMinValue", PyvtkThresholdTable_GetMinValue, METH_VARARGS,
   "V.GetMinValue() -> vtkVariant\nC++: virtual vtkVariant GetMinValue()\n\nThe minimum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {"SetMaxValue", PyvtkThresholdTable_SetMaxValue, METH_VARARGS,
   "V.SetMaxValue(vtkVariant)\nC++: virtual void SetMaxValue(vtkVariant v)\nV.SetMaxValue(float)\nC++: void SetMaxValue(double v)\n\nThe maximum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {"GetMaxValue", PyvtkThresholdTable_GetMaxValue, METH_VARARGS,
   "V.GetMaxValue() -> vtkVariant\nC++: virtual vtkVariant GetMaxValue()\n\nThe maximum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {"ThresholdBetween", PyvtkThresholdTable_ThresholdBetween, METH_VARARGS,
   "V.ThresholdBetween(vtkVariant, vtkVariant)\nC++: void ThresholdBetween(vtkVariant lower, vtkVariant upper)\nV.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nCriterion is rows whose scalars are between lower and upper\nthresholds (inclusive of the end values).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkThresholdTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkThresholdTable", // tp_name
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
  PyvtkThresholdTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkThresholdTable_StaticNew()
{
  return vtkThresholdTable::New();
}

PyObject *PyvtkThresholdTable_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkThresholdTable_Type, PyvtkThresholdTable_Methods,
    "vtkThresholdTable",
 &PyvtkThresholdTable_StaticNew);

  PyTypeObject *pytype = &PyvtkThresholdTable_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "ACCEPT_LESS_THAN", vtkThresholdTable::ACCEPT_LESS_THAN },
        { "ACCEPT_GREATER_THAN", vtkThresholdTable::ACCEPT_GREATER_THAN },
        { "ACCEPT_BETWEEN", vtkThresholdTable::ACCEPT_BETWEEN },
        { "ACCEPT_OUTSIDE", vtkThresholdTable::ACCEPT_OUTSIDE },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkThresholdTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkThresholdTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkThresholdTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

