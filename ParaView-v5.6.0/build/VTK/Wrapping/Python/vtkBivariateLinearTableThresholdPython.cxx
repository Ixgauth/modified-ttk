// python wrapper for vtkBivariateLinearTableThreshold
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
#include "vtkBivariateLinearTableThreshold.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBivariateLinearTableThreshold(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBivariateLinearTableThreshold_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkBivariateLinearTableThreshold_Doc =
  "vtkBivariateLinearTableThreshold - performs line-based thresholding\nfor vtkTable data.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "Class for filtering the rows of a two numeric columns of a vtkTable. \n"
  "The columns are treated as the two variables of a line.  This filter\n"
  "will then iterate through the rows of the table determining if X,Y\n"
  "values pairs are above/below/between/near one or more lines.\n\n"
  "The \"between\" mode checks to see if a row is contained within the\n"
  "convex hull of all of the specified lines.  The \"near\" mode checks if\n"
  "a row is within a distance threshold two one of the specified lines. \n"
  "This class is used in conjunction with various plotting classes, so\n"
  "it is useful to rescale the X,Y axes to a particular range of values.\n"
  " Distance comparisons can be performed in the scaled space by setting\n"
  "the CustomRanges ivar and enabling UseNormalizedDistance.\n\n";

static PyTypeObject PyvtkBivariateLinearTableThreshold_OutputPorts_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkBivariateLinearTableThreshold.OutputPorts", // tp_name
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

PyObject *PyvtkBivariateLinearTableThreshold_OutputPorts_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkBivariateLinearTableThreshold_OutputPorts_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkBivariateLinearTableThreshold_OutputPorts_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkBivariateLinearTableThreshold.LinearThresholdType", // tp_name
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

PyObject *PyvtkBivariateLinearTableThreshold_LinearThresholdType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkBivariateLinearTableThreshold_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBivariateLinearTableThreshold::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBivariateLinearTableThreshold::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBivariateLinearTableThreshold *tempr = vtkBivariateLinearTableThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBivariateLinearTableThreshold *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBivariateLinearTableThreshold::NewInstance());

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
PyvtkBivariateLinearTableThreshold_SetInclusive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInclusive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInclusive(temp0);
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::SetInclusive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetInclusive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInclusive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInclusive() :
      op->vtkBivariateLinearTableThreshold::GetInclusive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_AddColumnToThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnToThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddColumnToThreshold(temp0, temp1);
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::AddColumnToThreshold(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetNumberOfColumnsToThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumnsToThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColumnsToThreshold() :
      op->vtkBivariateLinearTableThreshold::GetNumberOfColumnsToThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetColumnToThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnToThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetColumnToThreshold(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::GetColumnToThreshold(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_ClearColumnsToThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColumnsToThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearColumnsToThreshold();
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::ClearColumnsToThreshold();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetSelectedRowIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedRowIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetSelectedRowIds(temp0) :
      op->vtkBivariateLinearTableThreshold::GetSelectedRowIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_AddLineEquation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLineEquation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->AddLineEquation(temp0, temp1);
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::AddLineEquation(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBivariateLinearTableThreshold_AddLineEquation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLineEquation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->AddLineEquation(temp0, temp1);
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::AddLineEquation(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBivariateLinearTableThreshold_AddLineEquation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLineEquation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddLineEquation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::AddLineEquation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBivariateLinearTableThreshold_AddLineEquation_Methods[] = {
  {nullptr, PyvtkBivariateLinearTableThreshold_AddLineEquation_s1, METH_VARARGS,
   "@PP *d *d"},
  {nullptr, PyvtkBivariateLinearTableThreshold_AddLineEquation_s2, METH_VARARGS,
   "@Pd *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBivariateLinearTableThreshold_AddLineEquation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBivariateLinearTableThreshold_AddLineEquation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBivariateLinearTableThreshold_AddLineEquation_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddLineEquation");
  return nullptr;
}



static PyObject *
PyvtkBivariateLinearTableThreshold_ClearLineEquations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLineEquations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLineEquations();
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::ClearLineEquations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetLinearThresholdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinearThresholdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLinearThresholdType() :
      op->vtkBivariateLinearTableThreshold::GetLinearThresholdType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLinearThresholdType(temp0);
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToAbove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdTypeToAbove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLinearThresholdTypeToAbove();
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToAbove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToBelow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdTypeToBelow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLinearThresholdTypeToBelow();
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToBelow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToNear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdTypeToNear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLinearThresholdTypeToNear();
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToNear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdTypeToBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLinearThresholdTypeToBetween();
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToBetween();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetColumnRanges_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColumnRanges(temp0, temp1);
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::SetColumnRanges(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBivariateLinearTableThreshold_SetColumnRanges_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetColumnRanges(temp0);
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::SetColumnRanges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBivariateLinearTableThreshold_SetColumnRanges(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBivariateLinearTableThreshold_SetColumnRanges_s1(self, args);
    case 1:
      return PyvtkBivariateLinearTableThreshold_SetColumnRanges_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColumnRanges");
  return nullptr;
}



static PyObject *
PyvtkBivariateLinearTableThreshold_GetColumnRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColumnRanges() :
      op->vtkBivariateLinearTableThreshold::GetColumnRanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetDistanceThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceThreshold(temp0);
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::SetDistanceThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetDistanceThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceThreshold() :
      op->vtkBivariateLinearTableThreshold::GetDistanceThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetUseNormalizedDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNormalizedDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseNormalizedDistance(temp0);
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::SetUseNormalizedDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetUseNormalizedDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNormalizedDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseNormalizedDistance() :
      op->vtkBivariateLinearTableThreshold::GetUseNormalizedDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_UseNormalizedDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalizedDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNormalizedDistanceOn();
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::UseNormalizedDistanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_UseNormalizedDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalizedDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNormalizedDistanceOff();
    }
    else
    {
      op->vtkBivariateLinearTableThreshold::UseNormalizedDistanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeImplicitLineFunction");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    vtkBivariateLinearTableThreshold::ComputeImplicitLineFunction(temp0, temp1, temp2);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeImplicitLineFunction");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  double temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    vtkBivariateLinearTableThreshold::ComputeImplicitLineFunction(temp0, temp1, temp2);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction_Methods[] = {
  {nullptr, PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction_s1, METH_VARARGS | METH_STATIC,
   "PPP *d *d *d"},
  {nullptr, PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction_s2, METH_VARARGS | METH_STATIC,
   "PdP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeImplicitLineFunction");
  return nullptr;
}


static PyMethodDef PyvtkBivariateLinearTableThreshold_Methods[] = {
  {"IsTypeOf", PyvtkBivariateLinearTableThreshold_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBivariateLinearTableThreshold_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBivariateLinearTableThreshold_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBivariateLinearTableThreshold\nC++: static vtkBivariateLinearTableThreshold *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBivariateLinearTableThreshold_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBivariateLinearTableThreshold\nC++: vtkBivariateLinearTableThreshold *NewInstance()\n\n"},
  {"SetInclusive", PyvtkBivariateLinearTableThreshold_SetInclusive, METH_VARARGS,
   "V.SetInclusive(int)\nC++: virtual void SetInclusive(int _arg)\n\nInclude the line in the threshold.  Essentially whether the\nthreshold operation uses > versus >=.\n"},
  {"GetInclusive", PyvtkBivariateLinearTableThreshold_GetInclusive, METH_VARARGS,
   "V.GetInclusive() -> int\nC++: virtual int GetInclusive()\n\nInclude the line in the threshold.  Essentially whether the\nthreshold operation uses > versus >=.\n"},
  {"AddColumnToThreshold", PyvtkBivariateLinearTableThreshold_AddColumnToThreshold, METH_VARARGS,
   "V.AddColumnToThreshold(int, int)\nC++: void AddColumnToThreshold(vtkIdType column,\n    vtkIdType component)\n\nAdd a numeric column to the pair of columns to be thresholded. \nCall twice.\n"},
  {"GetNumberOfColumnsToThreshold", PyvtkBivariateLinearTableThreshold_GetNumberOfColumnsToThreshold, METH_VARARGS,
   "V.GetNumberOfColumnsToThreshold() -> int\nC++: int GetNumberOfColumnsToThreshold()\n\nReturn how many columns have been added.  Hopefully 2.\n"},
  {"GetColumnToThreshold", PyvtkBivariateLinearTableThreshold_GetColumnToThreshold, METH_VARARGS,
   "V.GetColumnToThreshold(int, int, int)\nC++: void GetColumnToThreshold(vtkIdType idx, vtkIdType &column,\n    vtkIdType &component)\n\nReturn the column number from the input table for the idx'th\nadded column.\n"},
  {"ClearColumnsToThreshold", PyvtkBivariateLinearTableThreshold_ClearColumnsToThreshold, METH_VARARGS,
   "V.ClearColumnsToThreshold()\nC++: void ClearColumnsToThreshold()\n\nReset the columns to be thresholded.\n"},
  {"GetSelectedRowIds", PyvtkBivariateLinearTableThreshold_GetSelectedRowIds, METH_VARARGS,
   "V.GetSelectedRowIds(int) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetSelectedRowIds(int selection=0)\n\nGet the output as a table of row ids.\n"},
  {"Initialize", PyvtkBivariateLinearTableThreshold_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nReset the columns to threshold, column ranges, etc.\n"},
  {"AddLineEquation", PyvtkBivariateLinearTableThreshold_AddLineEquation, METH_VARARGS,
   "V.AddLineEquation([float, ...], [float, ...])\nC++: void AddLineEquation(double *p1, double *p2)\nV.AddLineEquation([float, ...], float)\nC++: void AddLineEquation(double *p, double slope)\nV.AddLineEquation(float, float, float)\nC++: void AddLineEquation(double a, double b, double c)\n\nAdd a line for thresholding from two x,y points.\n"},
  {"ClearLineEquations", PyvtkBivariateLinearTableThreshold_ClearLineEquations, METH_VARARGS,
   "V.ClearLineEquations()\nC++: void ClearLineEquations()\n\nReset the list of line equations.\n"},
  {"GetLinearThresholdType", PyvtkBivariateLinearTableThreshold_GetLinearThresholdType, METH_VARARGS,
   "V.GetLinearThresholdType() -> int\nC++: virtual int GetLinearThresholdType()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {"SetLinearThresholdType", PyvtkBivariateLinearTableThreshold_SetLinearThresholdType, METH_VARARGS,
   "V.SetLinearThresholdType(int)\nC++: virtual void SetLinearThresholdType(int _arg)\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {"SetLinearThresholdTypeToAbove", PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToAbove, METH_VARARGS,
   "V.SetLinearThresholdTypeToAbove()\nC++: void SetLinearThresholdTypeToAbove()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {"SetLinearThresholdTypeToBelow", PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToBelow, METH_VARARGS,
   "V.SetLinearThresholdTypeToBelow()\nC++: void SetLinearThresholdTypeToBelow()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {"SetLinearThresholdTypeToNear", PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToNear, METH_VARARGS,
   "V.SetLinearThresholdTypeToNear()\nC++: void SetLinearThresholdTypeToNear()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {"SetLinearThresholdTypeToBetween", PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToBetween, METH_VARARGS,
   "V.SetLinearThresholdTypeToBetween()\nC++: void SetLinearThresholdTypeToBetween()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {"SetColumnRanges", PyvtkBivariateLinearTableThreshold_SetColumnRanges, METH_VARARGS,
   "V.SetColumnRanges(float, float)\nC++: void SetColumnRanges(double, double)\nV.SetColumnRanges((float, float))\nC++: void SetColumnRanges(double a[2])\n\n"},
  {"GetColumnRanges", PyvtkBivariateLinearTableThreshold_GetColumnRanges, METH_VARARGS,
   "V.GetColumnRanges() -> (float, float)\nC++: double *GetColumnRanges()\n\n"},
  {"SetDistanceThreshold", PyvtkBivariateLinearTableThreshold_SetDistanceThreshold, METH_VARARGS,
   "V.SetDistanceThreshold(float)\nC++: virtual void SetDistanceThreshold(double _arg)\n\nThe Cartesian distance within which a point will pass the near\nthreshold.\n"},
  {"GetDistanceThreshold", PyvtkBivariateLinearTableThreshold_GetDistanceThreshold, METH_VARARGS,
   "V.GetDistanceThreshold() -> float\nC++: virtual double GetDistanceThreshold()\n\nThe Cartesian distance within which a point will pass the near\nthreshold.\n"},
  {"SetUseNormalizedDistance", PyvtkBivariateLinearTableThreshold_SetUseNormalizedDistance, METH_VARARGS,
   "V.SetUseNormalizedDistance(int)\nC++: virtual void SetUseNormalizedDistance(vtkTypeBool _arg)\n\nRenormalize the space of the data such that the X and Y axes are\n\"square\" over the specified ColumnRanges.  This essentially\nscales the data space so that ColumnRanges[1]-ColumnRanges[0] =\n1.0 and ColumnRanges[3]-ColumnRanges[2] = 1.0.  Used for scatter\nplot distance calculations.  Be sure to set DistanceThreshold\naccordingly, when used.\n"},
  {"GetUseNormalizedDistance", PyvtkBivariateLinearTableThreshold_GetUseNormalizedDistance, METH_VARARGS,
   "V.GetUseNormalizedDistance() -> int\nC++: virtual vtkTypeBool GetUseNormalizedDistance()\n\nRenormalize the space of the data such that the X and Y axes are\n\"square\" over the specified ColumnRanges.  This essentially\nscales the data space so that ColumnRanges[1]-ColumnRanges[0] =\n1.0 and ColumnRanges[3]-ColumnRanges[2] = 1.0.  Used for scatter\nplot distance calculations.  Be sure to set DistanceThreshold\naccordingly, when used.\n"},
  {"UseNormalizedDistanceOn", PyvtkBivariateLinearTableThreshold_UseNormalizedDistanceOn, METH_VARARGS,
   "V.UseNormalizedDistanceOn()\nC++: virtual void UseNormalizedDistanceOn()\n\nRenormalize the space of the data such that the X and Y axes are\n\"square\" over the specified ColumnRanges.  This essentially\nscales the data space so that ColumnRanges[1]-ColumnRanges[0] =\n1.0 and ColumnRanges[3]-ColumnRanges[2] = 1.0.  Used for scatter\nplot distance calculations.  Be sure to set DistanceThreshold\naccordingly, when used.\n"},
  {"UseNormalizedDistanceOff", PyvtkBivariateLinearTableThreshold_UseNormalizedDistanceOff, METH_VARARGS,
   "V.UseNormalizedDistanceOff()\nC++: virtual void UseNormalizedDistanceOff()\n\nRenormalize the space of the data such that the X and Y axes are\n\"square\" over the specified ColumnRanges.  This essentially\nscales the data space so that ColumnRanges[1]-ColumnRanges[0] =\n1.0 and ColumnRanges[3]-ColumnRanges[2] = 1.0.  Used for scatter\nplot distance calculations.  Be sure to set DistanceThreshold\naccordingly, when used.\n"},
  {"ComputeImplicitLineFunction", PyvtkBivariateLinearTableThreshold_ComputeImplicitLineFunction, METH_VARARGS,
   "V.ComputeImplicitLineFunction([float, ...], [float, ...], [float,\n    ...])\nC++: static void ComputeImplicitLineFunction(double *p1,\n    double *p2, double *abc)\nV.ComputeImplicitLineFunction([float, ...], float, [float, ...])\nC++: static void ComputeImplicitLineFunction(double *p,\n    double slope, double *abc)\n\nConvert the two-point line formula to implicit form.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBivariateLinearTableThreshold_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkBivariateLinearTableThreshold", // tp_name
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
  PyvtkBivariateLinearTableThreshold_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBivariateLinearTableThreshold_StaticNew()
{
  return vtkBivariateLinearTableThreshold::New();
}

PyObject *PyvtkBivariateLinearTableThreshold_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBivariateLinearTableThreshold_Type, PyvtkBivariateLinearTableThreshold_Methods,
    "vtkBivariateLinearTableThreshold",
 &PyvtkBivariateLinearTableThreshold_StaticNew);

  PyTypeObject *pytype = &PyvtkBivariateLinearTableThreshold_Type;

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

  PyType_Ready(&PyvtkBivariateLinearTableThreshold_OutputPorts_Type);
  PyvtkBivariateLinearTableThreshold_OutputPorts_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkBivariateLinearTableThreshold_OutputPorts_Type);

  o = (PyObject *)&PyvtkBivariateLinearTableThreshold_OutputPorts_Type;
  if (PyDict_SetItemString(d, "OutputPorts", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type);
  PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type);

  o = (PyObject *)&PyvtkBivariateLinearTableThreshold_LinearThresholdType_Type;
  if (PyDict_SetItemString(d, "LinearThresholdType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkBivariateLinearTableThreshold::OutputPorts cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "OUTPUT_ROW_IDS", vtkBivariateLinearTableThreshold::OUTPUT_ROW_IDS },
        { "OUTPUT_ROW_DATA", vtkBivariateLinearTableThreshold::OUTPUT_ROW_DATA },
      };

    o = PyvtkBivariateLinearTableThreshold_OutputPorts_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "BLT_ABOVE", vtkBivariateLinearTableThreshold::BLT_ABOVE },
        { "BLT_BELOW", vtkBivariateLinearTableThreshold::BLT_BELOW },
        { "BLT_NEAR", vtkBivariateLinearTableThreshold::BLT_NEAR },
        { "BLT_BETWEEN", vtkBivariateLinearTableThreshold::BLT_BETWEEN },
      };

    o = PyvtkBivariateLinearTableThreshold_LinearThresholdType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBivariateLinearTableThreshold(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBivariateLinearTableThreshold_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBivariateLinearTableThreshold", o) != 0)
  {
    Py_DECREF(o);
  }

}

