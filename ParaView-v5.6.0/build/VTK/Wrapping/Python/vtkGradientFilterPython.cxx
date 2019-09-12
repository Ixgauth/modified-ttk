// python wrapper for vtkGradientFilter
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
#include "vtkGradientFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGradientFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGradientFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkGradientFilter_Doc =
  "vtkGradientFilter - A general filter for gradient estimation.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "Estimates the gradient of a field in a data set.  The gradient\n"
  "calculation is dependent on the input dataset type.  The created\n"
  "gradient array is of the same type as the array it is calculated from\n"
  "(e.g. point data or cell data) but the data type will be either float\n"
  "or double.  At the boundary the gradient is not central differencing.\n"
  " The output gradient array has 3*number of components of the input\n"
  "data array.  The ordering for the output gradient tuple will be\n"
  "{du/dx, du/dy, du/dz, dv/dx, dv/dy, dv/dz, dw/dx, dw/dy, dw/dz} for\n"
  "an input array {u, v, w}. There are also the options to additionally\n"
  "compute the vorticity and Q criterion of a vector field. Unstructured\n"
  "grids and polydata can have cells of different dimensions. To handle\n"
  "different use cases in this situation, the user can specify which\n"
  "cells contribute to the computation. The options for this are All\n"
  "(default), Patch and DataSetMax. Patch uses only the highest\n"
  "dimension cells attached to a point. DataSetMax uses the highest cell\n"
  "dimension in the entire data set. For Patch or DataSetMax it is\n"
  "possible that some values will not be computed. The\n"
  "ReplacementValueOption specifies what to use for these values.\n\n";

static PyTypeObject PyvtkGradientFilter_ContributingCellEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkGradientFilter.ContributingCellEnum", // tp_name
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

PyObject *PyvtkGradientFilter_ContributingCellEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGradientFilter_ContributingCellEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGradientFilter_ContributingCellEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkGradientFilter_ReplacementValueEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkGradientFilter.ReplacementValueEnum", // tp_name
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

PyObject *PyvtkGradientFilter_ReplacementValueEnum_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGradientFilter_ReplacementValueEnum_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGradientFilter_ReplacementValueEnum_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkGradientFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGradientFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGradientFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGradientFilter *tempr = vtkGradientFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGradientFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGradientFilter::NewInstance());

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
PyvtkGradientFilter_SetInputScalars_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputScalars(temp0, temp1);
    }
    else
    {
      op->vtkGradientFilter::SetInputScalars(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGradientFilter_SetInputScalars_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputScalars(temp0, temp1);
    }
    else
    {
      op->vtkGradientFilter::SetInputScalars(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGradientFilter_SetInputScalars_Methods[] = {
  {nullptr, PyvtkGradientFilter_SetInputScalars_s1, METH_VARARGS,
   "@iz"},
  {nullptr, PyvtkGradientFilter_SetInputScalars_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGradientFilter_SetInputScalars(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGradientFilter_SetInputScalars_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputScalars");
  return nullptr;
}



static PyObject *
PyvtkGradientFilter_GetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetResultArrayName() :
      op->vtkGradientFilter::GetResultArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResultArrayName(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetResultArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetDivergenceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivergenceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDivergenceArrayName() :
      op->vtkGradientFilter::GetDivergenceArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetDivergenceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivergenceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDivergenceArrayName(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetDivergenceArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetVorticityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVorticityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVorticityArrayName() :
      op->vtkGradientFilter::GetVorticityArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetVorticityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVorticityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVorticityArrayName(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetVorticityArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetQCriterionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQCriterionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetQCriterionArrayName() :
      op->vtkGradientFilter::GetQCriterionArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetQCriterionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQCriterionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQCriterionArrayName(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetQCriterionArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetFasterApproximation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFasterApproximation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFasterApproximation() :
      op->vtkGradientFilter::GetFasterApproximation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetFasterApproximation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFasterApproximation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFasterApproximation(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetFasterApproximation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_FasterApproximationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FasterApproximationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FasterApproximationOn();
    }
    else
    {
      op->vtkGradientFilter::FasterApproximationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_FasterApproximationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FasterApproximationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FasterApproximationOff();
    }
    else
    {
      op->vtkGradientFilter::FasterApproximationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetComputeGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeGradient(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetComputeGradient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetComputeGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeGradient() :
      op->vtkGradientFilter::GetComputeGradient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeGradientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientOn();
    }
    else
    {
      op->vtkGradientFilter::ComputeGradientOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeGradientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientOff();
    }
    else
    {
      op->vtkGradientFilter::ComputeGradientOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetComputeDivergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeDivergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeDivergence(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetComputeDivergence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetComputeDivergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeDivergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeDivergence() :
      op->vtkGradientFilter::GetComputeDivergence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeDivergenceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDivergenceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeDivergenceOn();
    }
    else
    {
      op->vtkGradientFilter::ComputeDivergenceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeDivergenceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDivergenceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeDivergenceOff();
    }
    else
    {
      op->vtkGradientFilter::ComputeDivergenceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeVorticity(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetComputeVorticity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeVorticity() :
      op->vtkGradientFilter::GetComputeVorticity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeVorticityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVorticityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVorticityOn();
    }
    else
    {
      op->vtkGradientFilter::ComputeVorticityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeVorticityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVorticityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVorticityOff();
    }
    else
    {
      op->vtkGradientFilter::ComputeVorticityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetComputeQCriterion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeQCriterion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeQCriterion(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetComputeQCriterion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetComputeQCriterion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeQCriterion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeQCriterion() :
      op->vtkGradientFilter::GetComputeQCriterion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeQCriterionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeQCriterionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeQCriterionOn();
    }
    else
    {
      op->vtkGradientFilter::ComputeQCriterionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeQCriterionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeQCriterionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeQCriterionOff();
    }
    else
    {
      op->vtkGradientFilter::ComputeQCriterionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetContributingCellOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContributingCellOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContributingCellOption(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetContributingCellOption(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetContributingCellOptionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContributingCellOptionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContributingCellOptionMinValue() :
      op->vtkGradientFilter::GetContributingCellOptionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetContributingCellOptionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContributingCellOptionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContributingCellOptionMaxValue() :
      op->vtkGradientFilter::GetContributingCellOptionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetContributingCellOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContributingCellOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContributingCellOption() :
      op->vtkGradientFilter::GetContributingCellOption());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetReplacementValueOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementValueOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplacementValueOption(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetReplacementValueOption(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetReplacementValueOptionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValueOptionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplacementValueOptionMinValue() :
      op->vtkGradientFilter::GetReplacementValueOptionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetReplacementValueOptionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValueOptionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplacementValueOptionMaxValue() :
      op->vtkGradientFilter::GetReplacementValueOptionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetReplacementValueOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValueOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplacementValueOption() :
      op->vtkGradientFilter::GetReplacementValueOption());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGradientFilter_Methods[] = {
  {"IsTypeOf", PyvtkGradientFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGradientFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGradientFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGradientFilter\nC++: static vtkGradientFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGradientFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGradientFilter\nC++: vtkGradientFilter *NewInstance()\n\n"},
  {"SetInputScalars", PyvtkGradientFilter_SetInputScalars, METH_VARARGS,
   "V.SetInputScalars(int, string)\nC++: virtual void SetInputScalars(int fieldAssociation,\n    const char *name)\nV.SetInputScalars(int, int)\nC++: virtual void SetInputScalars(int fieldAssociation,\n    int fieldAttributeType)\n\nThese are basically a convenience method that calls\nSetInputArrayToProcess to set the array used as the input\nscalars.  The fieldAssociation comes from the\nvtkDataObject::FieldAssociations enum.  The fieldAttributeType\ncomes from the vtkDataSetAttributes::AttributeTypes enum.\n"},
  {"GetResultArrayName", PyvtkGradientFilter_GetResultArrayName, METH_VARARGS,
   "V.GetResultArrayName() -> string\nC++: virtual char *GetResultArrayName()\n\nGet/Set the name of the gradient array to create.  This is only\nused if ComputeGradient is non-zero. If nullptr (the default)\nthen the output array will be named \"Gradients\".\n"},
  {"SetResultArrayName", PyvtkGradientFilter_SetResultArrayName, METH_VARARGS,
   "V.SetResultArrayName(string)\nC++: virtual void SetResultArrayName(const char *_arg)\n\nGet/Set the name of the gradient array to create.  This is only\nused if ComputeGradient is non-zero. If nullptr (the default)\nthen the output array will be named \"Gradients\".\n"},
  {"GetDivergenceArrayName", PyvtkGradientFilter_GetDivergenceArrayName, METH_VARARGS,
   "V.GetDivergenceArrayName() -> string\nC++: virtual char *GetDivergenceArrayName()\n\nGet/Set the name of the divergence array to create. This is only\nused if ComputeDivergence is non-zero. If nullptr (the default)\nthen the output array will be named \"Divergence\".\n"},
  {"SetDivergenceArrayName", PyvtkGradientFilter_SetDivergenceArrayName, METH_VARARGS,
   "V.SetDivergenceArrayName(string)\nC++: virtual void SetDivergenceArrayName(const char *_arg)\n\nGet/Set the name of the divergence array to create. This is only\nused if ComputeDivergence is non-zero. If nullptr (the default)\nthen the output array will be named \"Divergence\".\n"},
  {"GetVorticityArrayName", PyvtkGradientFilter_GetVorticityArrayName, METH_VARARGS,
   "V.GetVorticityArrayName() -> string\nC++: virtual char *GetVorticityArrayName()\n\nGet/Set the name of the vorticity array to create. This is only\nused if ComputeVorticity is non-zero. If nullptr (the default)\nthen the output array will be named \"Vorticity\".\n"},
  {"SetVorticityArrayName", PyvtkGradientFilter_SetVorticityArrayName, METH_VARARGS,
   "V.SetVorticityArrayName(string)\nC++: virtual void SetVorticityArrayName(const char *_arg)\n\nGet/Set the name of the vorticity array to create. This is only\nused if ComputeVorticity is non-zero. If nullptr (the default)\nthen the output array will be named \"Vorticity\".\n"},
  {"GetQCriterionArrayName", PyvtkGradientFilter_GetQCriterionArrayName, METH_VARARGS,
   "V.GetQCriterionArrayName() -> string\nC++: virtual char *GetQCriterionArrayName()\n\nGet/Set the name of the Q criterion array to create. This is only\nused if ComputeQCriterion is non-zero. If nullptr (the default)\nthen the output array will be named \"Q-criterion\".\n"},
  {"SetQCriterionArrayName", PyvtkGradientFilter_SetQCriterionArrayName, METH_VARARGS,
   "V.SetQCriterionArrayName(string)\nC++: virtual void SetQCriterionArrayName(const char *_arg)\n\nGet/Set the name of the Q criterion array to create. This is only\nused if ComputeQCriterion is non-zero. If nullptr (the default)\nthen the output array will be named \"Q-criterion\".\n"},
  {"GetFasterApproximation", PyvtkGradientFilter_GetFasterApproximation, METH_VARARGS,
   "V.GetFasterApproximation() -> int\nC++: virtual vtkTypeBool GetFasterApproximation()\n\nWhen this flag is on (default is off), the gradient filter will\nprovide a less accurate (but close) algorithm that performs fewer\nderivative calculations (and is therefore faster).  The error\ncontains some smoothing of the output data and some possible\nerrors on the boundary.  This parameter has no effect when\nperforming the gradient of cell data. This only applies if the\ninput grid is a vtkUnstructuredGrid or a vtkPolyData.\n"},
  {"SetFasterApproximation", PyvtkGradientFilter_SetFasterApproximation, METH_VARARGS,
   "V.SetFasterApproximation(int)\nC++: virtual void SetFasterApproximation(vtkTypeBool _arg)\n\nWhen this flag is on (default is off), the gradient filter will\nprovide a less accurate (but close) algorithm that performs fewer\nderivative calculations (and is therefore faster).  The error\ncontains some smoothing of the output data and some possible\nerrors on the boundary.  This parameter has no effect when\nperforming the gradient of cell data. This only applies if the\ninput grid is a vtkUnstructuredGrid or a vtkPolyData.\n"},
  {"FasterApproximationOn", PyvtkGradientFilter_FasterApproximationOn, METH_VARARGS,
   "V.FasterApproximationOn()\nC++: virtual void FasterApproximationOn()\n\nWhen this flag is on (default is off), the gradient filter will\nprovide a less accurate (but close) algorithm that performs fewer\nderivative calculations (and is therefore faster).  The error\ncontains some smoothing of the output data and some possible\nerrors on the boundary.  This parameter has no effect when\nperforming the gradient of cell data. This only applies if the\ninput grid is a vtkUnstructuredGrid or a vtkPolyData.\n"},
  {"FasterApproximationOff", PyvtkGradientFilter_FasterApproximationOff, METH_VARARGS,
   "V.FasterApproximationOff()\nC++: virtual void FasterApproximationOff()\n\nWhen this flag is on (default is off), the gradient filter will\nprovide a less accurate (but close) algorithm that performs fewer\nderivative calculations (and is therefore faster).  The error\ncontains some smoothing of the output data and some possible\nerrors on the boundary.  This parameter has no effect when\nperforming the gradient of cell data. This only applies if the\ninput grid is a vtkUnstructuredGrid or a vtkPolyData.\n"},
  {"SetComputeGradient", PyvtkGradientFilter_SetComputeGradient, METH_VARARGS,
   "V.SetComputeGradient(int)\nC++: virtual void SetComputeGradient(vtkTypeBool _arg)\n\nAdd the gradient to the output field data.  The name of the array\nwill be ResultArrayName and will be the same type as the input\narray. The default is on.\n"},
  {"GetComputeGradient", PyvtkGradientFilter_GetComputeGradient, METH_VARARGS,
   "V.GetComputeGradient() -> int\nC++: virtual vtkTypeBool GetComputeGradient()\n\nAdd the gradient to the output field data.  The name of the array\nwill be ResultArrayName and will be the same type as the input\narray. The default is on.\n"},
  {"ComputeGradientOn", PyvtkGradientFilter_ComputeGradientOn, METH_VARARGS,
   "V.ComputeGradientOn()\nC++: virtual void ComputeGradientOn()\n\nAdd the gradient to the output field data.  The name of the array\nwill be ResultArrayName and will be the same type as the input\narray. The default is on.\n"},
  {"ComputeGradientOff", PyvtkGradientFilter_ComputeGradientOff, METH_VARARGS,
   "V.ComputeGradientOff()\nC++: virtual void ComputeGradientOff()\n\nAdd the gradient to the output field data.  The name of the array\nwill be ResultArrayName and will be the same type as the input\narray. The default is on.\n"},
  {"SetComputeDivergence", PyvtkGradientFilter_SetComputeDivergence, METH_VARARGS,
   "V.SetComputeDivergence(int)\nC++: virtual void SetComputeDivergence(vtkTypeBool _arg)\n\nAdd divergence to the output field data.  The name of the array\nwill be DivergenceArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this. The default is off.\n"},
  {"GetComputeDivergence", PyvtkGradientFilter_GetComputeDivergence, METH_VARARGS,
   "V.GetComputeDivergence() -> int\nC++: virtual vtkTypeBool GetComputeDivergence()\n\nAdd divergence to the output field data.  The name of the array\nwill be DivergenceArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this. The default is off.\n"},
  {"ComputeDivergenceOn", PyvtkGradientFilter_ComputeDivergenceOn, METH_VARARGS,
   "V.ComputeDivergenceOn()\nC++: virtual void ComputeDivergenceOn()\n\nAdd divergence to the output field data.  The name of the array\nwill be DivergenceArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this. The default is off.\n"},
  {"ComputeDivergenceOff", PyvtkGradientFilter_ComputeDivergenceOff, METH_VARARGS,
   "V.ComputeDivergenceOff()\nC++: virtual void ComputeDivergenceOff()\n\nAdd divergence to the output field data.  The name of the array\nwill be DivergenceArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this. The default is off.\n"},
  {"SetComputeVorticity", PyvtkGradientFilter_SetComputeVorticity, METH_VARARGS,
   "V.SetComputeVorticity(int)\nC++: virtual void SetComputeVorticity(vtkTypeBool _arg)\n\nAdd voriticity/curl to the output field data.  The name of the\narray will be VorticityArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this. The default is off.\n"},
  {"GetComputeVorticity", PyvtkGradientFilter_GetComputeVorticity, METH_VARARGS,
   "V.GetComputeVorticity() -> int\nC++: virtual vtkTypeBool GetComputeVorticity()\n\nAdd voriticity/curl to the output field data.  The name of the\narray will be VorticityArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this. The default is off.\n"},
  {"ComputeVorticityOn", PyvtkGradientFilter_ComputeVorticityOn, METH_VARARGS,
   "V.ComputeVorticityOn()\nC++: virtual void ComputeVorticityOn()\n\nAdd voriticity/curl to the output field data.  The name of the\narray will be VorticityArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this. The default is off.\n"},
  {"ComputeVorticityOff", PyvtkGradientFilter_ComputeVorticityOff, METH_VARARGS,
   "V.ComputeVorticityOff()\nC++: virtual void ComputeVorticityOff()\n\nAdd voriticity/curl to the output field data.  The name of the\narray will be VorticityArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this. The default is off.\n"},
  {"SetComputeQCriterion", PyvtkGradientFilter_SetComputeQCriterion, METH_VARARGS,
   "V.SetComputeQCriterion(int)\nC++: virtual void SetComputeQCriterion(vtkTypeBool _arg)\n\nAdd Q-criterion to the output field data.  The name of the array\nwill be QCriterionArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this.  Note that Q-citerion is a balance of the rate of\nvorticity and the rate of strain. The default is off.\n"},
  {"GetComputeQCriterion", PyvtkGradientFilter_GetComputeQCriterion, METH_VARARGS,
   "V.GetComputeQCriterion() -> int\nC++: virtual vtkTypeBool GetComputeQCriterion()\n\nAdd Q-criterion to the output field data.  The name of the array\nwill be QCriterionArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this.  Note that Q-citerion is a balance of the rate of\nvorticity and the rate of strain. The default is off.\n"},
  {"ComputeQCriterionOn", PyvtkGradientFilter_ComputeQCriterionOn, METH_VARARGS,
   "V.ComputeQCriterionOn()\nC++: virtual void ComputeQCriterionOn()\n\nAdd Q-criterion to the output field data.  The name of the array\nwill be QCriterionArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this.  Note that Q-citerion is a balance of the rate of\nvorticity and the rate of strain. The default is off.\n"},
  {"ComputeQCriterionOff", PyvtkGradientFilter_ComputeQCriterionOff, METH_VARARGS,
   "V.ComputeQCriterionOff()\nC++: virtual void ComputeQCriterionOff()\n\nAdd Q-criterion to the output field data.  The name of the array\nwill be QCriterionArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this.  Note that Q-citerion is a balance of the rate of\nvorticity and the rate of strain. The default is off.\n"},
  {"SetContributingCellOption", PyvtkGradientFilter_SetContributingCellOption, METH_VARARGS,
   "V.SetContributingCellOption(int)\nC++: virtual void SetContributingCellOption(int _arg)\n\nOption to specify what cells to include in the gradient\ncomputation. Options are all cells (All, Patch and DataSetMax).\nThe default is All.\n"},
  {"GetContributingCellOptionMinValue", PyvtkGradientFilter_GetContributingCellOptionMinValue, METH_VARARGS,
   "V.GetContributingCellOptionMinValue() -> int\nC++: virtual int GetContributingCellOptionMinValue()\n\nOption to specify what cells to include in the gradient\ncomputation. Options are all cells (All, Patch and DataSetMax).\nThe default is All.\n"},
  {"GetContributingCellOptionMaxValue", PyvtkGradientFilter_GetContributingCellOptionMaxValue, METH_VARARGS,
   "V.GetContributingCellOptionMaxValue() -> int\nC++: virtual int GetContributingCellOptionMaxValue()\n\nOption to specify what cells to include in the gradient\ncomputation. Options are all cells (All, Patch and DataSetMax).\nThe default is All.\n"},
  {"GetContributingCellOption", PyvtkGradientFilter_GetContributingCellOption, METH_VARARGS,
   "V.GetContributingCellOption() -> int\nC++: virtual int GetContributingCellOption()\n\nOption to specify what cells to include in the gradient\ncomputation. Options are all cells (All, Patch and DataSetMax).\nThe default is All.\n"},
  {"SetReplacementValueOption", PyvtkGradientFilter_SetReplacementValueOption, METH_VARARGS,
   "V.SetReplacementValueOption(int)\nC++: virtual void SetReplacementValueOption(int _arg)\n\nOption to specify what replacement value or entities that don't\nhave any gradient computed over them based on the\nContributingCellOption. Options are (Zero, NaN, DataTypeMin,\nDataTypeMax). The default is Zero.\n"},
  {"GetReplacementValueOptionMinValue", PyvtkGradientFilter_GetReplacementValueOptionMinValue, METH_VARARGS,
   "V.GetReplacementValueOptionMinValue() -> int\nC++: virtual int GetReplacementValueOptionMinValue()\n\nOption to specify what replacement value or entities that don't\nhave any gradient computed over them based on the\nContributingCellOption. Options are (Zero, NaN, DataTypeMin,\nDataTypeMax). The default is Zero.\n"},
  {"GetReplacementValueOptionMaxValue", PyvtkGradientFilter_GetReplacementValueOptionMaxValue, METH_VARARGS,
   "V.GetReplacementValueOptionMaxValue() -> int\nC++: virtual int GetReplacementValueOptionMaxValue()\n\nOption to specify what replacement value or entities that don't\nhave any gradient computed over them based on the\nContributingCellOption. Options are (Zero, NaN, DataTypeMin,\nDataTypeMax). The default is Zero.\n"},
  {"GetReplacementValueOption", PyvtkGradientFilter_GetReplacementValueOption, METH_VARARGS,
   "V.GetReplacementValueOption() -> int\nC++: virtual int GetReplacementValueOption()\n\nOption to specify what replacement value or entities that don't\nhave any gradient computed over them based on the\nContributingCellOption. Options are (Zero, NaN, DataTypeMin,\nDataTypeMax). The default is Zero.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGradientFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkGradientFilter", // tp_name
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
  PyvtkGradientFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGradientFilter_StaticNew()
{
  return vtkGradientFilter::New();
}

PyObject *PyvtkGradientFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGradientFilter_Type, PyvtkGradientFilter_Methods,
    "vtkGradientFilter",
 &PyvtkGradientFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkGradientFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGradientFilter_ContributingCellEnum_Type);
  PyvtkGradientFilter_ContributingCellEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGradientFilter_ContributingCellEnum_Type);

  o = (PyObject *)&PyvtkGradientFilter_ContributingCellEnum_Type;
  if (PyDict_SetItemString(d, "ContributingCellEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkGradientFilter_ReplacementValueEnum_Type);
  PyvtkGradientFilter_ReplacementValueEnum_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGradientFilter_ReplacementValueEnum_Type);

  o = (PyObject *)&PyvtkGradientFilter_ReplacementValueEnum_Type;
  if (PyDict_SetItemString(d, "ReplacementValueEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkGradientFilter::ContributingCellEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "All", vtkGradientFilter::All },
        { "Patch", vtkGradientFilter::Patch },
        { "DataSetMax", vtkGradientFilter::DataSetMax },
      };

    o = PyvtkGradientFilter_ContributingCellEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkGradientFilter::ReplacementValueEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "Zero", vtkGradientFilter::Zero },
        { "NaN", vtkGradientFilter::NaN },
        { "DataTypeMin", vtkGradientFilter::DataTypeMin },
        { "DataTypeMax", vtkGradientFilter::DataTypeMax },
      };

    o = PyvtkGradientFilter_ReplacementValueEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGradientFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGradientFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGradientFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

