// python wrapper for vtkTemporalInterpolator
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
#include "vtkTemporalInterpolator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalInterpolator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTemporalInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkMultiTimeStepAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiTimeStepAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiTimeStepAlgorithm_ClassNew
#endif

static const char *PyvtkTemporalInterpolator_Doc =
  "vtkTemporalInterpolator - interpolate datasets between time steps to\nproduce a new dataset\n\n"
  "Superclass: vtkMultiTimeStepAlgorithm\n\n"
  "vtkTemporalInterpolator interpolates between two time steps to\n"
  "produce new data for an arbitrary T. vtkTemporalInterpolator has\n"
  "three modes of operation. The default mode is to produce a continuous\n"
  "range of time values as output, which enables a filter downstream to\n"
  "request any value of T within the range. The second mode of operation\n"
  "is enabled by setting DiscreteTimeStepInterval to a non zero value.\n"
  "When this mode is activated, the filter will report a finite number\n"
  "of Time steps separated by deltaT between the original range of\n"
  "values. This mode is useful when a dataset of N time steps has one\n"
  "(or more) missing datasets for certain T values and you simply wish\n"
  "to smooth over the missing steps but otherwise use the original data.\n"
  "The third mode of operation is enabled by setting ResampleFactor to a\n"
  "non zero positive integer value. When this mode is activated, the\n"
  "filter will report a finite number of Time steps which contain the\n"
  "original steps, plus N new values between each original step\n"
  "1/ResampleFactor time units apart. Note that if the input time steps\n"
  "are irregular, then using ResampleFactor will produce an irregular\n"
  "sequence of regular steps between each of the original irregular\n"
  "steps (clear enough, yes?).\n\n"
  "@TODO Higher order interpolation schemes will require changes to the\n"
  "API as most calls assume only two timesteps are used.\n\n"
  "@par Thanks: Ken Martin (Kitware) and John Bidiscombe of CSCS - Swiss\n"
  "National Supercomputing Centre for creating and contributing this\n"
  "class. For related material, please refer to : John Biddiscombe, Berk\n"
  "Geveci, Ken Martin, Kenneth Moreland, David Thompson, \"Time Dependent Processing in a Parallel Pipeline\n"
  "Architecture\", IEEE Visualization 2007.\n\n";


static PyObject *
PyvtkTemporalInterpolator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalInterpolator *tempr = vtkTemporalInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalInterpolator::NewInstance());

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
PyvtkTemporalInterpolator_SetDiscreteTimeStepInterval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiscreteTimeStepInterval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiscreteTimeStepInterval(temp0);
    }
    else
    {
      op->vtkTemporalInterpolator::SetDiscreteTimeStepInterval(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_GetDiscreteTimeStepInterval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiscreteTimeStepInterval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiscreteTimeStepInterval() :
      op->vtkTemporalInterpolator::GetDiscreteTimeStepInterval());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_SetResampleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResampleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResampleFactor(temp0);
    }
    else
    {
      op->vtkTemporalInterpolator::SetResampleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_GetResampleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResampleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResampleFactor() :
      op->vtkTemporalInterpolator::GetResampleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_SetCacheData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheData(temp0);
    }
    else
    {
      op->vtkTemporalInterpolator::SetCacheData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolator_GetCacheData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolator *op = static_cast<vtkTemporalInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCacheData() :
      op->vtkTemporalInterpolator::GetCacheData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkTemporalInterpolator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalInterpolator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalInterpolator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTemporalInterpolator\nC++: static vtkTemporalInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalInterpolator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTemporalInterpolator\nC++: vtkTemporalInterpolator *NewInstance()\n\n"},
  {"SetDiscreteTimeStepInterval", PyvtkTemporalInterpolator_SetDiscreteTimeStepInterval, METH_VARARGS,
   "V.SetDiscreteTimeStepInterval(float)\nC++: virtual void SetDiscreteTimeStepInterval(double _arg)\n\nIf you require a discrete number of outputs steps, to be\ngenerated from an input source - for example, you required N\nsteps separated by T, then set DiscreteTimeStepInterval to T and\nyou will get TIME_RANGE/DiscreteTimeStepInterval steps This is a\nuseful option to use if you have a dataset with one missing time\nstep and wish to 'fill-in' the missing data with an interpolated\nvalue from the steps either side\n"},
  {"GetDiscreteTimeStepInterval", PyvtkTemporalInterpolator_GetDiscreteTimeStepInterval, METH_VARARGS,
   "V.GetDiscreteTimeStepInterval() -> float\nC++: virtual double GetDiscreteTimeStepInterval()\n\nIf you require a discrete number of outputs steps, to be\ngenerated from an input source - for example, you required N\nsteps separated by T, then set DiscreteTimeStepInterval to T and\nyou will get TIME_RANGE/DiscreteTimeStepInterval steps This is a\nuseful option to use if you have a dataset with one missing time\nstep and wish to 'fill-in' the missing data with an interpolated\nvalue from the steps either side\n"},
  {"SetResampleFactor", PyvtkTemporalInterpolator_SetResampleFactor, METH_VARARGS,
   "V.SetResampleFactor(int)\nC++: virtual void SetResampleFactor(int _arg)\n\nWhen ResampleFactor is a non zero positive integer, each pair of\ninput time steps will be interpolated between with the number of\nsteps specified. For example an input of 1,2,3,4,5 and a resample\nfactor of 10, will produce steps 0f 1.0, 1.1, 1.2.....1.9, 2.0\netc NB. Irregular input steps will produce irregular output\nsteps. Resample factor wuill only be used if\nDiscreteTimeStepInterval is zero otherwise the\nDiscreteTimeStepInterval takes precedence\n"},
  {"GetResampleFactor", PyvtkTemporalInterpolator_GetResampleFactor, METH_VARARGS,
   "V.GetResampleFactor() -> int\nC++: virtual int GetResampleFactor()\n\nWhen ResampleFactor is a non zero positive integer, each pair of\ninput time steps will be interpolated between with the number of\nsteps specified. For example an input of 1,2,3,4,5 and a resample\nfactor of 10, will produce steps 0f 1.0, 1.1, 1.2.....1.9, 2.0\netc NB. Irregular input steps will produce irregular output\nsteps. Resample factor wuill only be used if\nDiscreteTimeStepInterval is zero otherwise the\nDiscreteTimeStepInterval takes precedence\n"},
  {"SetCacheData", PyvtkTemporalInterpolator_SetCacheData, METH_VARARGS,
   "V.SetCacheData(bool)\nC++: virtual void SetCacheData(bool _arg)\n\nControls whether input data is cached to avoid updating input\nwhen multiple interpolations are asked between 2 time steps.\n"},
  {"GetCacheData", PyvtkTemporalInterpolator_GetCacheData, METH_VARARGS,
   "V.GetCacheData() -> bool\nC++: virtual bool GetCacheData()\n\nControls whether input data is cached to avoid updating input\nwhen multiple interpolations are asked between 2 time steps.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTemporalInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkTemporalInterpolator", // tp_name
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
  PyvtkTemporalInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalInterpolator_StaticNew()
{
  return vtkTemporalInterpolator::New();
}

PyObject *PyvtkTemporalInterpolator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTemporalInterpolator_Type, PyvtkTemporalInterpolator_Methods,
    "vtkTemporalInterpolator",
 &PyvtkTemporalInterpolator_StaticNew);

  PyTypeObject *pytype = &PyvtkTemporalInterpolator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiTimeStepAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

