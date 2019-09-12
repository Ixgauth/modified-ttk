// python wrapper for vtkOrderStatistics
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
#include "vtkOrderStatistics.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOrderStatistics(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOrderStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkStatisticsAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStatisticsAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStatisticsAlgorithm_ClassNew
#endif

static const char *PyvtkOrderStatistics_Doc =
  "vtkOrderStatistics - A class for univariate order statistics\n\n"
  "Superclass: vtkStatisticsAlgorithm\n\n"
  "Given a selection of columns of interest in an input data table, this\n"
  "class provides the following functionalities, depending on the\n"
  "execution mode it is executed in:\n"
  "* Learn: calculate histogram.\n"
  "* Derive: calculate PDFs and arbitrary quantiles. Provide specific\n"
  "  names when 5-point statistics (minimum, 1st quartile, median, third\n"
  "quartile, maximum) requested.\n"
  "* Assess: given an input data set and a set of q-quantiles, label\n"
  "  each datum either with the quantile interval to which it belongs,\n"
  "  or 0 if it is smaller than smaller quantile, or q if it is larger\n"
  "  than largest quantile.\n"
  "* Test: calculate Kolmogorov-Smirnov goodness-of-fit statistic\n"
  "  between CDF based on model quantiles, and empirical CDF\n\n"
  "@par Thanks: Thanks to Philippe Pebay and David Thompson from Sandia\n"
  "National Laboratories for implementing this class. Updated by\n"
  "Philippe Pebay, Kitware SAS 2012\n\n";

static PyTypeObject PyvtkOrderStatistics_QuantileDefinitionType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkOrderStatistics.QuantileDefinitionType", // tp_name
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

PyObject *PyvtkOrderStatistics_QuantileDefinitionType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkOrderStatistics_QuantileDefinitionType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkOrderStatistics_QuantileDefinitionType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkOrderStatistics_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOrderStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrderStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOrderStatistics *tempr = vtkOrderStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrderStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrderStatistics::NewInstance());

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
PyvtkOrderStatistics_SetNumberOfIntervals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIntervals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIntervals(temp0);
    }
    else
    {
      op->vtkOrderStatistics::SetNumberOfIntervals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderStatistics_GetNumberOfIntervals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIntervals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfIntervals() :
      op->vtkOrderStatistics::GetNumberOfIntervals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderStatistics_SetQuantileDefinition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuantileDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  typedef vtkOrderStatistics::QuantileDefinitionType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkOrderStatistics.QuantileDefinitionType"))
  {
    if (ap.IsBound())
    {
      op->SetQuantileDefinition(temp0);
    }
    else
    {
      op->vtkOrderStatistics::SetQuantileDefinition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOrderStatistics_SetQuantileDefinition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuantileDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuantileDefinition(temp0);
    }
    else
    {
      op->vtkOrderStatistics::SetQuantileDefinition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOrderStatistics_SetQuantileDefinition_Methods[] = {
  {nullptr, PyvtkOrderStatistics_SetQuantileDefinition_s1, METH_VARARGS,
   "@E vtkOrderStatistics.QuantileDefinitionType"},
  {nullptr, PyvtkOrderStatistics_SetQuantileDefinition_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOrderStatistics_SetQuantileDefinition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOrderStatistics_SetQuantileDefinition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetQuantileDefinition");
  return nullptr;
}



static PyObject *
PyvtkOrderStatistics_SetQuantize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuantize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuantize(temp0);
    }
    else
    {
      op->vtkOrderStatistics::SetQuantize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderStatistics_GetQuantize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuantize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetQuantize() :
      op->vtkOrderStatistics::GetQuantize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderStatistics_SetMaximumHistogramSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumHistogramSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumHistogramSize(temp0);
    }
    else
    {
      op->vtkOrderStatistics::SetMaximumHistogramSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderStatistics_GetMaximumHistogramSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumHistogramSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumHistogramSize() :
      op->vtkOrderStatistics::GetMaximumHistogramSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderStatistics_GetQuantileDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuantileDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetQuantileDefinition() :
      op->vtkOrderStatistics::GetQuantileDefinition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderStatistics_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  vtkVariant *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetParameter(temp0, temp1, *temp2) :
      op->vtkOrderStatistics::SetParameter(temp0, temp1, *temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkOrderStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  vtkDataObjectCollection *temp0 = nullptr;
  vtkMultiBlockDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
  {
    if (ap.IsBound())
    {
      op->Aggregate(temp0, temp1);
    }
    else
    {
      op->vtkOrderStatistics::Aggregate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOrderStatistics_Methods[] = {
  {"IsTypeOf", PyvtkOrderStatistics_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOrderStatistics_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOrderStatistics_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOrderStatistics\nC++: static vtkOrderStatistics *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOrderStatistics_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOrderStatistics\nC++: vtkOrderStatistics *NewInstance()\n\n"},
  {"SetNumberOfIntervals", PyvtkOrderStatistics_SetNumberOfIntervals, METH_VARARGS,
   "V.SetNumberOfIntervals(int)\nC++: virtual void SetNumberOfIntervals(vtkIdType _arg)\n\nSet/Get the number of quantiles (with uniform spacing).\n"},
  {"GetNumberOfIntervals", PyvtkOrderStatistics_GetNumberOfIntervals, METH_VARARGS,
   "V.GetNumberOfIntervals() -> int\nC++: virtual vtkIdType GetNumberOfIntervals()\n\nSet/Get the number of quantiles (with uniform spacing).\n"},
  {"SetQuantileDefinition", PyvtkOrderStatistics_SetQuantileDefinition, METH_VARARGS,
   "V.SetQuantileDefinition(QuantileDefinitionType)\nC++: virtual void SetQuantileDefinition(\n    QuantileDefinitionType _arg)\nV.SetQuantileDefinition(int)\nC++: void SetQuantileDefinition(int)\n\nSet the quantile definition.\n"},
  {"SetQuantize", PyvtkOrderStatistics_SetQuantize, METH_VARARGS,
   "V.SetQuantize(bool)\nC++: virtual void SetQuantize(bool _arg)\n\nSet/Get whether quantization will be allowed to enforce maximum\nhistogram size.\n"},
  {"GetQuantize", PyvtkOrderStatistics_GetQuantize, METH_VARARGS,
   "V.GetQuantize() -> bool\nC++: virtual bool GetQuantize()\n\nSet/Get whether quantization will be allowed to enforce maximum\nhistogram size.\n"},
  {"SetMaximumHistogramSize", PyvtkOrderStatistics_SetMaximumHistogramSize, METH_VARARGS,
   "V.SetMaximumHistogramSize(int)\nC++: virtual void SetMaximumHistogramSize(vtkIdType _arg)\n\nSet/Get the maximum histogram size. This maximum size is enforced\nonly when Quantize is TRUE.\n"},
  {"GetMaximumHistogramSize", PyvtkOrderStatistics_GetMaximumHistogramSize, METH_VARARGS,
   "V.GetMaximumHistogramSize() -> int\nC++: virtual vtkIdType GetMaximumHistogramSize()\n\nSet/Get the maximum histogram size. This maximum size is enforced\nonly when Quantize is TRUE.\n"},
  {"GetQuantileDefinition", PyvtkOrderStatistics_GetQuantileDefinition, METH_VARARGS,
   "V.GetQuantileDefinition() -> int\nC++: vtkIdType GetQuantileDefinition()\n\nGet the quantile definition.\n"},
  {"SetParameter", PyvtkOrderStatistics_SetParameter, METH_VARARGS,
   "V.SetParameter(string, int, vtkVariant) -> bool\nC++: bool SetParameter(const char *parameter, int index,\n    vtkVariant value) override;\n\nA convenience method (in particular for access from other\napplications) to set parameter values. Return true if setting of\nrequested parameter name was executed, false otherwise.\n"},
  {"Aggregate", PyvtkOrderStatistics_Aggregate, METH_VARARGS,
   "V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *) override;\n\nGiven a collection of models, calculate aggregate model NB: not\nimplemented\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOrderStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkOrderStatistics", // tp_name
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
  PyvtkOrderStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOrderStatistics_StaticNew()
{
  return vtkOrderStatistics::New();
}

PyObject *PyvtkOrderStatistics_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOrderStatistics_Type, PyvtkOrderStatistics_Methods,
    "vtkOrderStatistics",
 &PyvtkOrderStatistics_StaticNew);

  PyTypeObject *pytype = &PyvtkOrderStatistics_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkStatisticsAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOrderStatistics_QuantileDefinitionType_Type);
  PyvtkOrderStatistics_QuantileDefinitionType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkOrderStatistics_QuantileDefinitionType_Type);

  o = (PyObject *)&PyvtkOrderStatistics_QuantileDefinitionType_Type;
  if (PyDict_SetItemString(d, "QuantileDefinitionType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkOrderStatistics::QuantileDefinitionType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "InverseCDF", vtkOrderStatistics::InverseCDF },
        { "InverseCDFAveragedSteps", vtkOrderStatistics::InverseCDFAveragedSteps },
        { "NearestObservation", vtkOrderStatistics::NearestObservation },
      };

    o = PyvtkOrderStatistics_QuantileDefinitionType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOrderStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOrderStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOrderStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

