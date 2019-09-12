// python wrapper for vtkStatisticsAlgorithm
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
#include "vtkStdString.h"
#include "vtkStatisticsAlgorithm.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStatisticsAlgorithm(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStatisticsAlgorithm_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkStatisticsAlgorithm_Doc =
  "vtkStatisticsAlgorithm - Base class for statistics algorithms\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "All statistics algorithms can conceptually be operated with several\n"
  "operations:\n"
  "* Learn: given an input data set, calculate a minimal statistical\n"
  "  model (e.g., sums, raw moments, joint probabilities).\n"
  "* Derive: given an input minimal statistical model, derive the full\n"
  "  model (e.g., descriptive statistics, quantiles, correlations,\n"
  "  conditional probabilities). NB: It may be, or not be, a problem\n"
  "  that a full model was not derived. For instance, when doing\n"
  "  parallel calculations, one only wants to derive the full model\n"
  "  after all partial calculations have completed. On the other hand,\n"
  "  one can also directly provide a full model, that was previously\n"
  "  calculated or guessed, and not derive a new one.\n"
  "* Assess: given an input data set, input statistics, and some form of\n"
  "  threshold, assess a subset of the data set.\n"
  "* Test: perform at least one statistical test. Therefore, a\n"
  "  vtkStatisticsAlgorithm has the following ports\n"
  "* 3 optional input ports:\n"
  "* Data (vtkTable)\n"
  "* Parameters to the learn operation (vtkTable)\n"
  "* Input model (vtkMultiBlockDataSet)\n"
  "* 3 output ports:\n"
  "* Data (input annotated with assessments when the Assess operation is\n"
  "ON).\n"
  "* Output model (identical to the input model when Learn operation is\n"
  "  OFF).\n"
  "* Output of statistical tests. Some engines do not offer such tests\n"
  "  yet, in which case this output will always be empty even when the\n"
  "  Test operation is ON.\n\n"
  "@par Thanks: Thanks to Philippe Pebay and David Thompson from Sandia\n"
  "National Laboratories for implementing this class. Updated by\n"
  "Philippe Pebay, Kitware SAS 2012\n\n";

static PyTypeObject PyvtkStatisticsAlgorithm_InputPorts_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkStatisticsAlgorithm.InputPorts", // tp_name
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

PyObject *PyvtkStatisticsAlgorithm_InputPorts_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkStatisticsAlgorithm_InputPorts_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStatisticsAlgorithm_InputPorts_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkStatisticsAlgorithm_OutputIndices_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkStatisticsAlgorithm.OutputIndices", // tp_name
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

PyObject *PyvtkStatisticsAlgorithm_OutputIndices_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkStatisticsAlgorithm_OutputIndices_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkStatisticsAlgorithm_OutputIndices_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkStatisticsAlgorithm_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStatisticsAlgorithm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStatisticsAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStatisticsAlgorithm *tempr = vtkStatisticsAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStatisticsAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStatisticsAlgorithm::NewInstance());

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
PyvtkStatisticsAlgorithm_SetLearnOptionParameterConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLearnOptionParameterConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetLearnOptionParameterConnection(temp0);
    }
    else
    {
      op->vtkStatisticsAlgorithm::SetLearnOptionParameterConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetLearnOptionParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLearnOptionParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetLearnOptionParameters(temp0);
    }
    else
    {
      op->vtkStatisticsAlgorithm::SetLearnOptionParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetInputModelConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputModelConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputModelConnection(temp0);
    }
    else
    {
      op->vtkStatisticsAlgorithm::SetInputModelConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetInputModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputModel(temp0);
    }
    else
    {
      op->vtkStatisticsAlgorithm::SetInputModel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetLearnOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLearnOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLearnOption(temp0);
    }
    else
    {
      op->vtkStatisticsAlgorithm::SetLearnOption(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetLearnOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLearnOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLearnOption() :
      op->vtkStatisticsAlgorithm::GetLearnOption());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetDeriveOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeriveOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeriveOption(temp0);
    }
    else
    {
      op->vtkStatisticsAlgorithm::SetDeriveOption(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetDeriveOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeriveOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDeriveOption() :
      op->vtkStatisticsAlgorithm::GetDeriveOption());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetAssessOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssessOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAssessOption(temp0);
    }
    else
    {
      op->vtkStatisticsAlgorithm::SetAssessOption(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetAssessOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssessOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAssessOption() :
      op->vtkStatisticsAlgorithm::GetAssessOption());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetTestOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTestOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTestOption(temp0);
    }
    else
    {
      op->vtkStatisticsAlgorithm::SetTestOption(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetTestOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTestOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTestOption() :
      op->vtkStatisticsAlgorithm::GetTestOption());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetNumberOfPrimaryTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPrimaryTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPrimaryTables(temp0);
    }
    else
    {
      op->vtkStatisticsAlgorithm::SetNumberOfPrimaryTables(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetNumberOfPrimaryTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPrimaryTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPrimaryTables() :
      op->vtkStatisticsAlgorithm::GetNumberOfPrimaryTables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetAssessNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssessNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetAssessNames(temp0);
    }
    else
    {
      op->vtkStatisticsAlgorithm::SetAssessNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetAssessNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssessNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAssessNames() :
      op->vtkStatisticsAlgorithm::GetAssessNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetColumnStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColumnStatus(temp0, temp1);
    }
    else
    {
      op->vtkStatisticsAlgorithm::SetColumnStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_ResetAllColumnStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAllColumnStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetAllColumnStates();
    }
    else
    {
      op->vtkStatisticsAlgorithm::ResetAllColumnStates();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_RequestSelectedColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestSelectedColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->RequestSelectedColumns() :
      op->vtkStatisticsAlgorithm::RequestSelectedColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_ResetRequests(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetRequests");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetRequests();
    }
    else
    {
      op->vtkStatisticsAlgorithm::ResetRequests();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetNumberOfRequests(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRequests");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfRequests() :
      op->vtkStatisticsAlgorithm::GetNumberOfRequests());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetNumberOfColumnsForRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumnsForRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfColumnsForRequest(temp0) :
      op->vtkStatisticsAlgorithm::GetNumberOfColumnsForRequest(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_GetColumnForRequest_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnForRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnForRequest(temp0, temp1) :
      op->vtkStatisticsAlgorithm::GetColumnForRequest(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStatisticsAlgorithm_GetColumnForRequest_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnForRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkStdString temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GetColumnForRequest(temp0, temp1, temp2) :
      op->vtkStatisticsAlgorithm::GetColumnForRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStatisticsAlgorithm_GetColumnForRequest(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkStatisticsAlgorithm_GetColumnForRequest_s1(self, args);
    case 3:
      return PyvtkStatisticsAlgorithm_GetColumnForRequest_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColumnForRequest");
  return nullptr;
}



static PyObject *
PyvtkStatisticsAlgorithm_AddColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddColumn(temp0);
    }
    else
    {
      op->vtkStatisticsAlgorithm::AddColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_AddColumnPair(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnPair");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddColumnPair(temp0, temp1);
    }
    else
    {
      op->vtkStatisticsAlgorithm::AddColumnPair(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

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
      op->vtkStatisticsAlgorithm::SetParameter(temp0, temp1, *temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkStatisticsAlgorithm_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticsAlgorithm *op = static_cast<vtkStatisticsAlgorithm *>(vp);

  vtkDataObjectCollection *temp0 = nullptr;
  vtkMultiBlockDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
  {
    op->Aggregate(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStatisticsAlgorithm_Methods[] = {
  {"IsTypeOf", PyvtkStatisticsAlgorithm_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStatisticsAlgorithm_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStatisticsAlgorithm_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStatisticsAlgorithm\nC++: static vtkStatisticsAlgorithm *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStatisticsAlgorithm_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStatisticsAlgorithm\nC++: vtkStatisticsAlgorithm *NewInstance()\n\n"},
  {"SetLearnOptionParameterConnection", PyvtkStatisticsAlgorithm_SetLearnOptionParameterConnection, METH_VARARGS,
   "V.SetLearnOptionParameterConnection(vtkAlgorithmOutput)\nC++: virtual void SetLearnOptionParameterConnection(\n    vtkAlgorithmOutput *params)\n\nA convenience method for setting learn input parameters (if one\nis expected or allowed). It is equivalent to calling\nSetInputConnection( 1, params );\n"},
  {"SetLearnOptionParameters", PyvtkStatisticsAlgorithm_SetLearnOptionParameters, METH_VARARGS,
   "V.SetLearnOptionParameters(vtkDataObject)\nC++: virtual void SetLearnOptionParameters(vtkDataObject *params)\n\nA convenience method for setting learn input parameters (if one\nis expected or allowed). It is equivalent to calling\nSetInputData( 1, params );\n"},
  {"SetInputModelConnection", PyvtkStatisticsAlgorithm_SetInputModelConnection, METH_VARARGS,
   "V.SetInputModelConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputModelConnection(\n    vtkAlgorithmOutput *model)\n\nA convenience method for setting the input model connection (if\none is expected or allowed). It is equivalent to calling\nSetInputConnection( 2, model );\n"},
  {"SetInputModel", PyvtkStatisticsAlgorithm_SetInputModel, METH_VARARGS,
   "V.SetInputModel(vtkDataObject)\nC++: virtual void SetInputModel(vtkDataObject *model)\n\nA convenience method for setting the input model (if one is\nexpected or allowed). It is equivalent to calling SetInputData(\n2, model );\n"},
  {"SetLearnOption", PyvtkStatisticsAlgorithm_SetLearnOption, METH_VARARGS,
   "V.SetLearnOption(bool)\nC++: virtual void SetLearnOption(bool _arg)\n\nSet/Get the Learn operation.\n"},
  {"GetLearnOption", PyvtkStatisticsAlgorithm_GetLearnOption, METH_VARARGS,
   "V.GetLearnOption() -> bool\nC++: virtual bool GetLearnOption()\n\nSet/Get the Learn operation.\n"},
  {"SetDeriveOption", PyvtkStatisticsAlgorithm_SetDeriveOption, METH_VARARGS,
   "V.SetDeriveOption(bool)\nC++: virtual void SetDeriveOption(bool _arg)\n\nSet/Get the Derive operation.\n"},
  {"GetDeriveOption", PyvtkStatisticsAlgorithm_GetDeriveOption, METH_VARARGS,
   "V.GetDeriveOption() -> bool\nC++: virtual bool GetDeriveOption()\n\nSet/Get the Derive operation.\n"},
  {"SetAssessOption", PyvtkStatisticsAlgorithm_SetAssessOption, METH_VARARGS,
   "V.SetAssessOption(bool)\nC++: virtual void SetAssessOption(bool _arg)\n\nSet/Get the Assess operation.\n"},
  {"GetAssessOption", PyvtkStatisticsAlgorithm_GetAssessOption, METH_VARARGS,
   "V.GetAssessOption() -> bool\nC++: virtual bool GetAssessOption()\n\nSet/Get the Assess operation.\n"},
  {"SetTestOption", PyvtkStatisticsAlgorithm_SetTestOption, METH_VARARGS,
   "V.SetTestOption(bool)\nC++: virtual void SetTestOption(bool _arg)\n\nSet/Get the Test operation.\n"},
  {"GetTestOption", PyvtkStatisticsAlgorithm_GetTestOption, METH_VARARGS,
   "V.GetTestOption() -> bool\nC++: virtual bool GetTestOption()\n\nSet/Get the Test operation.\n"},
  {"SetNumberOfPrimaryTables", PyvtkStatisticsAlgorithm_SetNumberOfPrimaryTables, METH_VARARGS,
   "V.SetNumberOfPrimaryTables(int)\nC++: virtual void SetNumberOfPrimaryTables(vtkIdType _arg)\n\nSet/Get the number of tables in the primary model.\n"},
  {"GetNumberOfPrimaryTables", PyvtkStatisticsAlgorithm_GetNumberOfPrimaryTables, METH_VARARGS,
   "V.GetNumberOfPrimaryTables() -> int\nC++: virtual vtkIdType GetNumberOfPrimaryTables()\n\nSet/Get the number of tables in the primary model.\n"},
  {"SetAssessNames", PyvtkStatisticsAlgorithm_SetAssessNames, METH_VARARGS,
   "V.SetAssessNames(vtkStringArray)\nC++: virtual void SetAssessNames(vtkStringArray *)\n\nSet/get assessment names.\n"},
  {"GetAssessNames", PyvtkStatisticsAlgorithm_GetAssessNames, METH_VARARGS,
   "V.GetAssessNames() -> vtkStringArray\nC++: virtual vtkStringArray *GetAssessNames()\n\nSet/get assessment names.\n"},
  {"SetColumnStatus", PyvtkStatisticsAlgorithm_SetColumnStatus, METH_VARARGS,
   "V.SetColumnStatus(string, int)\nC++: virtual void SetColumnStatus(const char *namCol, int status)\n\nAdd or remove a column from the current analysis request. Once\nall the column status values are set, call\nRequestSelectedColumns() before selecting another set of columns\nfor a different analysis request. The way that columns selections\nare used varies from algorithm to algorithm.\n\n* Note: the set of selected columns is maintained in\n  vtkStatisticsAlgorithmPrivate::Buffer\n* until RequestSelectedColumns() is called, at which point the\n  set is appended\n* to vtkStatisticsAlgorithmPrivate::Requests.\n* If there are any columns in\n  vtkStatisticsAlgorithmPrivate::Buffer at the time\n* RequestData() is called, RequestSelectedColumns() will be\n  called and the\n* selection added to the list of requests.\n"},
  {"ResetAllColumnStates", PyvtkStatisticsAlgorithm_ResetAllColumnStates, METH_VARARGS,
   "V.ResetAllColumnStates()\nC++: virtual void ResetAllColumnStates()\n\nSet the status of each and every column in the current request to\nOFF (0).\n"},
  {"RequestSelectedColumns", PyvtkStatisticsAlgorithm_RequestSelectedColumns, METH_VARARGS,
   "V.RequestSelectedColumns() -> int\nC++: virtual int RequestSelectedColumns()\n\nUse the current column status values to produce a new request for\nstatistics to be produced when RequestData() is called. See\nSetColumnStatus() for more information.\n"},
  {"ResetRequests", PyvtkStatisticsAlgorithm_ResetRequests, METH_VARARGS,
   "V.ResetRequests()\nC++: virtual void ResetRequests()\n\nEmpty the list of current requests.\n"},
  {"GetNumberOfRequests", PyvtkStatisticsAlgorithm_GetNumberOfRequests, METH_VARARGS,
   "V.GetNumberOfRequests() -> int\nC++: virtual vtkIdType GetNumberOfRequests()\n\nReturn the number of requests. This does not include any request\nthat is in the column-status buffer but for which\nRequestSelectedColumns() has not yet been called (even though it\nis possible this request will be honored when the filter is run\n-- see SetColumnStatus() for more information).\n"},
  {"GetNumberOfColumnsForRequest", PyvtkStatisticsAlgorithm_GetNumberOfColumnsForRequest, METH_VARARGS,
   "V.GetNumberOfColumnsForRequest(int) -> int\nC++: virtual vtkIdType GetNumberOfColumnsForRequest(\n    vtkIdType request)\n\nReturn the number of columns for a given request.\n"},
  {"GetColumnForRequest", PyvtkStatisticsAlgorithm_GetColumnForRequest, METH_VARARGS,
   "V.GetColumnForRequest(int, int) -> string\nC++: virtual const char *GetColumnForRequest(vtkIdType r,\n    vtkIdType c)\nV.GetColumnForRequest(int, int, string) -> int\nC++: virtual int GetColumnForRequest(vtkIdType r, vtkIdType c,\n    vtkStdString &columnName)\n\nProvide the name of the c-th column for the r-th request.\n\n* For the version of this routine that returns an integer,\n* if the request or column does not exist because r or c is out\n  of bounds,\n* this routine returns 0 and the value of columnName is\n  unspecified.\n* Otherwise, it returns 1 and the value of columnName is set.\n\n* For the version of this routine that returns const char*,\n* if the request or column does not exist because r or c is out\n  of bounds,\n* the routine returns nullptr. Otherwise it returns the column\n  name.\n* This version is not thread-safe.\n"},
  {"AddColumn", PyvtkStatisticsAlgorithm_AddColumn, METH_VARARGS,
   "V.AddColumn(string)\nC++: void AddColumn(const char *namCol)\n\nConvenience method to create a request with a single column name\nnamCol in a single call; this is the preferred method to select\ncolumns, ensuring selection consistency (a single column per\nrequest). Warning: no name checking is performed on namCol; it is\nthe user's responsibility to use valid column names.\n"},
  {"AddColumnPair", PyvtkStatisticsAlgorithm_AddColumnPair, METH_VARARGS,
   "V.AddColumnPair(string, string)\nC++: void AddColumnPair(const char *namColX, const char *namColY)\n\nConvenience method to create a request with a single column name\npair ( namColX, namColY) in a single call; this is the preferred\nmethod to select columns pairs, ensuring selection consistency (a\npair of columns per request).\n\n* Unlike SetColumnStatus(), you need not call\n  RequestSelectedColumns() after AddColumnPair().\n\n* Warning: namColX and namColY are only checked for their\n  validity as strings;\n* no check is made that either are valid column names.\n"},
  {"SetParameter", PyvtkStatisticsAlgorithm_SetParameter, METH_VARARGS,
   "V.SetParameter(string, int, vtkVariant) -> bool\nC++: virtual bool SetParameter(const char *parameter, int index,\n    vtkVariant value)\n\nA convenience method (in particular for access from other\napplications) to set parameter values of Learn mode. Return true\nif setting of requested parameter name was executed, false\notherwise. NB: default method (which is sufficient for most\nstatistics algorithms) does not have any Learn parameters to set\nand always returns false.\n"},
  {"Aggregate", PyvtkStatisticsAlgorithm_Aggregate, METH_VARARGS,
   "V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStatisticsAlgorithm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkStatisticsAlgorithm", // tp_name
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
  PyvtkStatisticsAlgorithm_Doc, // tp_doc
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

PyObject *PyvtkStatisticsAlgorithm_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStatisticsAlgorithm_Type, PyvtkStatisticsAlgorithm_Methods,
    "vtkStatisticsAlgorithm",
 nullptr);

  PyTypeObject *pytype = &PyvtkStatisticsAlgorithm_Type;

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

  PyType_Ready(&PyvtkStatisticsAlgorithm_InputPorts_Type);
  PyvtkStatisticsAlgorithm_InputPorts_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkStatisticsAlgorithm_InputPorts_Type);

  o = (PyObject *)&PyvtkStatisticsAlgorithm_InputPorts_Type;
  if (PyDict_SetItemString(d, "InputPorts", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkStatisticsAlgorithm_OutputIndices_Type);
  PyvtkStatisticsAlgorithm_OutputIndices_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkStatisticsAlgorithm_OutputIndices_Type);

  o = (PyObject *)&PyvtkStatisticsAlgorithm_OutputIndices_Type;
  if (PyDict_SetItemString(d, "OutputIndices", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkStatisticsAlgorithm::InputPorts cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "INPUT_DATA", vtkStatisticsAlgorithm::INPUT_DATA },
        { "LEARN_PARAMETERS", vtkStatisticsAlgorithm::LEARN_PARAMETERS },
        { "INPUT_MODEL", vtkStatisticsAlgorithm::INPUT_MODEL },
      };

    o = PyvtkStatisticsAlgorithm_InputPorts_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkStatisticsAlgorithm::OutputIndices cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "OUTPUT_DATA", vtkStatisticsAlgorithm::OUTPUT_DATA },
        { "OUTPUT_MODEL", vtkStatisticsAlgorithm::OUTPUT_MODEL },
        { "OUTPUT_TEST", vtkStatisticsAlgorithm::OUTPUT_TEST },
      };

    o = PyvtkStatisticsAlgorithm_OutputIndices_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStatisticsAlgorithm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStatisticsAlgorithm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStatisticsAlgorithm", o) != 0)
  {
    Py_DECREF(o);
  }

}

