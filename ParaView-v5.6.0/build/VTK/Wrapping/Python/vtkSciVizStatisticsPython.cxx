// python wrapper for vtkSciVizStatistics
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
#include "vtkSciVizStatistics.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSciVizStatistics(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSciVizStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkSciVizStatistics_Doc =
  "vtkSciVizStatistics - Abstract base class for computing statistics\nwith vtkStatistics\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "This filter either computes a statistical model of a dataset or takes\n"
  "such a model as its second input. Then, the model (however it is\n"
  "obtained) may optionally be used to assess the input dataset.\n\n"
  "This class serves as a base class that handles table conversion,\n"
  "interfacing with the array selection in the ParaView user interface,\n"
  "and provides a simplified interface to vtkStatisticsAlgorithm.@par\n"
  "Thanks: Thanks to David Thompson and Philippe Pebay from Sandia\n"
  "National Laboratories for implementing this class. Updated by\n"
  "Philippe Pebay, Kitware SAS 2012\n\n";

static PyTypeObject PyvtkSciVizStatistics_Tasks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkSciVizStatistics.Tasks", // tp_name
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

PyObject *PyvtkSciVizStatistics_Tasks_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSciVizStatistics_Tasks_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSciVizStatistics_Tasks_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSciVizStatistics_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSciVizStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSciVizStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSciVizStatistics *tempr = vtkSciVizStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSciVizStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSciVizStatistics::NewInstance());

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
PyvtkSciVizStatistics_GetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeMode() :
      op->vtkSciVizStatistics::GetAttributeMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_SetAttributeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeMode(temp0);
    }
    else
    {
      op->vtkSciVizStatistics::SetAttributeMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetNumberOfAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAttributeArrays() :
      op->vtkSciVizStatistics::GetNumberOfAttributeArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetAttributeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeArrayName(temp0) :
      op->vtkSciVizStatistics::GetAttributeArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetAttributeArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeArrayStatus(temp0) :
      op->vtkSciVizStatistics::GetAttributeArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_EnableAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EnableAttributeArray(temp0);
    }
    else
    {
      op->vtkSciVizStatistics::EnableAttributeArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_ClearAttributeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAttributeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAttributeArrays();
    }
    else
    {
      op->vtkSciVizStatistics::ClearAttributeArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_SetTrainingFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrainingFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTrainingFraction(temp0);
    }
    else
    {
      op->vtkSciVizStatistics::SetTrainingFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetTrainingFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrainingFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTrainingFractionMinValue() :
      op->vtkSciVizStatistics::GetTrainingFractionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetTrainingFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrainingFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTrainingFractionMaxValue() :
      op->vtkSciVizStatistics::GetTrainingFractionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetTrainingFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrainingFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTrainingFraction() :
      op->vtkSciVizStatistics::GetTrainingFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_SetTask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTask(temp0);
    }
    else
    {
      op->vtkSciVizStatistics::SetTask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_GetTask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTask() :
      op->vtkSciVizStatistics::GetTask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSciVizStatistics_MULTIPLE_MODELS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MULTIPLE_MODELS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSciVizStatistics *op = static_cast<vtkSciVizStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = (ap.IsBound() ?
      op->MULTIPLE_MODELS() :
      op->vtkSciVizStatistics::MULTIPLE_MODELS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSciVizStatistics_Methods[] = {
  {"IsTypeOf", PyvtkSciVizStatistics_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSciVizStatistics_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSciVizStatistics_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSciVizStatistics\nC++: static vtkSciVizStatistics *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSciVizStatistics_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSciVizStatistics\nC++: vtkSciVizStatistics *NewInstance()\n\n"},
  {"GetAttributeMode", PyvtkSciVizStatistics_GetAttributeMode, METH_VARARGS,
   "V.GetAttributeMode() -> int\nC++: virtual int GetAttributeMode()\n\nSet/get the type of field attribute (cell, point, field)\n"},
  {"SetAttributeMode", PyvtkSciVizStatistics_SetAttributeMode, METH_VARARGS,
   "V.SetAttributeMode(int)\nC++: virtual void SetAttributeMode(int _arg)\n\nSet/get the type of field attribute (cell, point, field)\n"},
  {"GetNumberOfAttributeArrays", PyvtkSciVizStatistics_GetNumberOfAttributeArrays, METH_VARARGS,
   "V.GetNumberOfAttributeArrays() -> int\nC++: int GetNumberOfAttributeArrays()\n\nReturn the number of columns available for the current value of\nAttributeMode.\n"},
  {"GetAttributeArrayName", PyvtkSciVizStatistics_GetAttributeArrayName, METH_VARARGS,
   "V.GetAttributeArrayName(int) -> string\nC++: const char *GetAttributeArrayName(int n)\n\nGet the name of the n-th array ffor the current value of\nAttributeMode.\n"},
  {"GetAttributeArrayStatus", PyvtkSciVizStatistics_GetAttributeArrayStatus, METH_VARARGS,
   "V.GetAttributeArrayStatus(string) -> int\nC++: int GetAttributeArrayStatus(const char *arrName)\n\nGet the status of the specified array (i.e., whether or not it is\na column of interest).\n"},
  {"EnableAttributeArray", PyvtkSciVizStatistics_EnableAttributeArray, METH_VARARGS,
   "V.EnableAttributeArray(string)\nC++: void EnableAttributeArray(const char *arrName)\n\nAn alternate interface for preparing a selection of arrays in\nParaView.\n"},
  {"ClearAttributeArrays", PyvtkSciVizStatistics_ClearAttributeArrays, METH_VARARGS,
   "V.ClearAttributeArrays()\nC++: void ClearAttributeArrays()\n\nAn alternate interface for preparing a selection of arrays in\nParaView.\n"},
  {"SetTrainingFraction", PyvtkSciVizStatistics_SetTrainingFraction, METH_VARARGS,
   "V.SetTrainingFraction(float)\nC++: virtual void SetTrainingFraction(double _arg)\n\nSet/get the amount of data to be used for training. When 0.0 <\nTrainingFraction < 1.0, a randomly-sampled subset of the data is\nused for training.\n* When an assessment is requested, all data (including the\n  training data) is assessed,\n* regardless of the value of TrainingFraction.\n* The default value is 0.1.\n\n* The random sample of the original dataset (say, of size N) is\n  obtained by choosing N random numbers in [0,1).\n* Any sample where the random number is less than\n  TrainingFraction is included in the training data.\n* Samples are then randomly added or removed from the training\n  data until it is the desired size.\n"},
  {"GetTrainingFractionMinValue", PyvtkSciVizStatistics_GetTrainingFractionMinValue, METH_VARARGS,
   "V.GetTrainingFractionMinValue() -> float\nC++: virtual double GetTrainingFractionMinValue()\n\nSet/get the amount of data to be used for training. When 0.0 <\nTrainingFraction < 1.0, a randomly-sampled subset of the data is\nused for training.\n* When an assessment is requested, all data (including the\n  training data) is assessed,\n* regardless of the value of TrainingFraction.\n* The default value is 0.1.\n\n* The random sample of the original dataset (say, of size N) is\n  obtained by choosing N random numbers in [0,1).\n* Any sample where the random number is less than\n  TrainingFraction is included in the training data.\n* Samples are then randomly added or removed from the training\n  data until it is the desired size.\n"},
  {"GetTrainingFractionMaxValue", PyvtkSciVizStatistics_GetTrainingFractionMaxValue, METH_VARARGS,
   "V.GetTrainingFractionMaxValue() -> float\nC++: virtual double GetTrainingFractionMaxValue()\n\nSet/get the amount of data to be used for training. When 0.0 <\nTrainingFraction < 1.0, a randomly-sampled subset of the data is\nused for training.\n* When an assessment is requested, all data (including the\n  training data) is assessed,\n* regardless of the value of TrainingFraction.\n* The default value is 0.1.\n\n* The random sample of the original dataset (say, of size N) is\n  obtained by choosing N random numbers in [0,1).\n* Any sample where the random number is less than\n  TrainingFraction is included in the training data.\n* Samples are then randomly added or removed from the training\n  data until it is the desired size.\n"},
  {"GetTrainingFraction", PyvtkSciVizStatistics_GetTrainingFraction, METH_VARARGS,
   "V.GetTrainingFraction() -> float\nC++: virtual double GetTrainingFraction()\n\nSet/get the amount of data to be used for training. When 0.0 <\nTrainingFraction < 1.0, a randomly-sampled subset of the data is\nused for training.\n* When an assessment is requested, all data (including the\n  training data) is assessed,\n* regardless of the value of TrainingFraction.\n* The default value is 0.1.\n\n* The random sample of the original dataset (say, of size N) is\n  obtained by choosing N random numbers in [0,1).\n* Any sample where the random number is less than\n  TrainingFraction is included in the training data.\n* Samples are then randomly added or removed from the training\n  data until it is the desired size.\n"},
  {"SetTask", PyvtkSciVizStatistics_SetTask, METH_VARARGS,
   "V.SetTask(int)\nC++: virtual void SetTask(int _arg)\n\nSet/get whether this filter should create a model of the input or\nassess the input or both. This should take on a value from the\nTasks enum. The default is MODEL_AND_ASSESS.\n"},
  {"GetTask", PyvtkSciVizStatistics_GetTask, METH_VARARGS,
   "V.GetTask() -> int\nC++: virtual int GetTask()\n\nSet/get whether this filter should create a model of the input or\nassess the input or both. This should take on a value from the\nTasks enum. The default is MODEL_AND_ASSESS.\n"},
  {"MULTIPLE_MODELS", PyvtkSciVizStatistics_MULTIPLE_MODELS, METH_VARARGS,
   "V.MULTIPLE_MODELS() -> vtkInformationIntegerKey\nC++: vtkInformationIntegerKey *MULTIPLE_MODELS()\n\nA key used to mark the output model data object (output port 0)\nwhen it is a multiblock of models (any of which may be multiblock\ndataset themselves) as opposed to a multiblock dataset containing\na single model.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSciVizStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkSciVizStatistics", // tp_name
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
  PyvtkSciVizStatistics_Doc, // tp_doc
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

PyObject *PyvtkSciVizStatistics_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSciVizStatistics_Type, PyvtkSciVizStatistics_Methods,
    "vtkSciVizStatistics",
 nullptr);

  PyTypeObject *pytype = &PyvtkSciVizStatistics_Type;

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

  PyType_Ready(&PyvtkSciVizStatistics_Tasks_Type);
  PyvtkSciVizStatistics_Tasks_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSciVizStatistics_Tasks_Type);

  o = (PyObject *)&PyvtkSciVizStatistics_Tasks_Type;
  if (PyDict_SetItemString(d, "Tasks", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSciVizStatistics::Tasks cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "MODEL_INPUT", vtkSciVizStatistics::MODEL_INPUT },
        { "CREATE_MODEL", vtkSciVizStatistics::CREATE_MODEL },
        { "ASSESS_INPUT", vtkSciVizStatistics::ASSESS_INPUT },
        { "MODEL_AND_ASSESS", vtkSciVizStatistics::MODEL_AND_ASSESS },
      };

    o = PyvtkSciVizStatistics_Tasks_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSciVizStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSciVizStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSciVizStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

