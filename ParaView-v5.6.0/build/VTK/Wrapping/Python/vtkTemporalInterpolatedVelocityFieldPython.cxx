// python wrapper for vtkTemporalInterpolatedVelocityField
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
#include "vtkGenericCell.h"
#include "vtkTemporalInterpolatedVelocityField.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalInterpolatedVelocityField(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTemporalInterpolatedVelocityField_ClassNew(); }

#ifndef DECLARED_PyvtkFunctionSet_ClassNew
extern "C" { PyObject *PyvtkFunctionSet_ClassNew(); }
#define DECLARED_PyvtkFunctionSet_ClassNew
#endif

static const char *PyvtkTemporalInterpolatedVelocityField_Doc =
  "vtkTemporalInterpolatedVelocityField - A helper class for\ninterpolating between times during particle tracing\n\n"
  "Superclass: vtkFunctionSet\n\n"
  "vtkTemporalInterpolatedVelocityField is a general purpose helper for\n"
  "the temporal particle tracing code (vtkTemporalStreamTracer)\n\n"
  "It maintains two copies of vtkCachingInterpolatedVelocityField\n"
  "internally and uses them to obtain velocity values at time T0 and T1.\n\n"
  "In fact the class does quite a bit more than this because when the\n"
  "geometry of the datasets is the same at T0 and T1, we can re-use\n"
  "cached cell Ids and weights used in the cell interpolation routines.\n"
  "Additionally, the same weights can be used when interpolating (point)\n"
  "scalar values and computing vorticity etc.\n\n"
  "@warning\n"
  "vtkTemporalInterpolatedVelocityField is probably not thread safe. A\n"
  "new instance should be created by each thread.\n\n"
  "@warning\n"
  "Datasets are added in lists. The list for T1 must be idential to that\n"
  "for T0 in structure/topology and dataset order, and any datasets\n"
  "marked as static, must remain so for all T - changing a dataset from\n"
  "static to dynamic between time steps will result in undefined\n"
  "behaviour (=crash probably)\n\n"
  "@sa\n"
  "vtkCachingInterpolatedVelocityField vtkTemporalStreamTracer\n\n";


static PyObject *
PyvtkTemporalInterpolatedVelocityField_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalInterpolatedVelocityField *tempr = vtkTemporalInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalInterpolatedVelocityField::NewInstance());

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
PyvtkTemporalInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

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

    int tempr = (ap.IsBound() ?
      op->FunctionValues(temp0, temp1) :
      op->vtkTemporalInterpolatedVelocityField::FunctionValues(temp0, temp1));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_FunctionValuesAtT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValuesAtT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->FunctionValuesAtT(temp0, temp1, temp2) :
      op->vtkTemporalInterpolatedVelocityField::FunctionValuesAtT(temp0, temp1, temp2));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectVectors(temp0);
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::SelectVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SetDataSetAtTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetAtTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  int temp1;
  double temp2;
  vtkDataSet *temp3 = nullptr;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataSet") &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetDataSetAtTime(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::SetDataSetAtTime(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetCachedCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCachedCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  const size_t size0 = 2;
  vtkIdType temp0[2];
  vtkIdType save0[2];
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetCachedCellIds(temp0, temp1) :
      op->vtkTemporalInterpolatedVelocityField::GetCachedCellIds(temp0, temp1));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SetCachedCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCachedCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  const size_t size0 = 2;
  vtkIdType temp0[2];
  vtkIdType save0[2];
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetCachedCellIds(temp0, temp1);
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::SetCachedCellIds(temp0, temp1);
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
PyvtkTemporalInterpolatedVelocityField_ClearCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearCache();
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::ClearCache();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_TestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->TestPoint(temp0) :
      op->vtkTemporalInterpolatedVelocityField::TestPoint(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_QuickTestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QuickTestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->QuickTestPoint(temp0) :
      op->vtkTemporalInterpolatedVelocityField::QuickTestPoint(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetLastGoodVelocity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastGoodVelocity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLastGoodVelocity() :
      op->vtkTemporalInterpolatedVelocityField::GetLastGoodVelocity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetCurrentWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCurrentWeight() :
      op->vtkTemporalInterpolatedVelocityField::GetCurrentWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  vtkPointData *temp0 = nullptr;
  vtkPointData *temp1 = nullptr;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPointData") &&
      ap.GetVTKObject(temp1, "vtkPointData") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->InterpolatePoint(temp0, temp1, temp2) :
      op->vtkTemporalInterpolatedVelocityField::InterpolatePoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  vtkPointData *temp1 = nullptr;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPointData") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->InterpolatePoint(temp0, temp1, temp2) :
      op->vtkTemporalInterpolatedVelocityField::InterpolatePoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_Methods[] = {
  {nullptr, PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s1, METH_VARARGS,
   "@VVk *vtkPointData *vtkPointData"},
  {nullptr, PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s2, METH_VARARGS,
   "@iVk *vtkPointData"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTemporalInterpolatedVelocityField_InterpolatePoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InterpolatePoint");
  return nullptr;
}



static PyObject *
PyvtkTemporalInterpolatedVelocityField_ShowCacheResults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCacheResults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowCacheResults();
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::ShowCacheResults();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_IsStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsStatic(temp0) :
      op->vtkTemporalInterpolatedVelocityField::IsStatic(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_AdvanceOneTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdvanceOneTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdvanceOneTimeStep();
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::AdvanceOneTimeStep();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkTemporalInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalInterpolatedVelocityField_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkTemporalInterpolatedVelocityField\nC++: static vtkTemporalInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTemporalInterpolatedVelocityField\nC++: vtkTemporalInterpolatedVelocityField *NewInstance()\n\n"},
  {"FunctionValues", PyvtkTemporalInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   "V.FunctionValues([float, ...], [float, ...]) -> int\nC++: int FunctionValues(double *x, double *u) override;\n\nEvaluate the velocity field, f, at (x, y, z, t). For now, t is\nignored.\n"},
  {"FunctionValuesAtT", PyvtkTemporalInterpolatedVelocityField_FunctionValuesAtT, METH_VARARGS,
   "V.FunctionValuesAtT(int, [float, ...], [float, ...]) -> int\nC++: int FunctionValuesAtT(int T, double *x, double *u)\n\nEvaluate the velocity field, f, at (x, y, z, t). For now, t is\nignored.\n"},
  {"SelectVectors", PyvtkTemporalInterpolatedVelocityField_SelectVectors, METH_VARARGS,
   "V.SelectVectors(string)\nC++: void SelectVectors(const char *fieldName)\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this is nullptr and the filter will use the\nactive vector array.\n"},
  {"SetDataSetAtTime", PyvtkTemporalInterpolatedVelocityField_SetDataSetAtTime, METH_VARARGS,
   "V.SetDataSetAtTime(int, int, float, vtkDataSet, bool)\nC++: void SetDataSetAtTime(int I, int N, double T,\n    vtkDataSet *dataset, bool staticdataset)\n\nIn order to use this class, two sets of data must be supplied,\ncorresponding to times T1 and T2. Data is added via this\nfunction.\n"},
  {"GetCachedCellIds", PyvtkTemporalInterpolatedVelocityField_GetCachedCellIds, METH_VARARGS,
   "V.GetCachedCellIds([int, int], [int, int]) -> bool\nC++: bool GetCachedCellIds(vtkIdType id[2], int ds[2])\n\nBetween iterations of the Particle Tracer, Id's of the Cell are\nstored and then at the start of the next particle the Ids are set\nto 'pre-fill' the cache.\n"},
  {"SetCachedCellIds", PyvtkTemporalInterpolatedVelocityField_SetCachedCellIds, METH_VARARGS,
   "V.SetCachedCellIds([int, int], [int, int])\nC++: void SetCachedCellIds(vtkIdType id[2], int ds[2])\n\nBetween iterations of the Particle Tracer, Id's of the Cell are\nstored and then at the start of the next particle the Ids are set\nto 'pre-fill' the cache.\n"},
  {"ClearCache", PyvtkTemporalInterpolatedVelocityField_ClearCache, METH_VARARGS,
   "V.ClearCache()\nC++: void ClearCache()\n\nSet the last cell id to -1 so that the next search does not start\nfrom the previous cell\n"},
  {"TestPoint", PyvtkTemporalInterpolatedVelocityField_TestPoint, METH_VARARGS,
   "V.TestPoint([float, ...]) -> int\nC++: int TestPoint(double *x)\n\nA utility function which evaluates the point at T1, T2 to see if\nit is inside the data at both times or only one.\n"},
  {"QuickTestPoint", PyvtkTemporalInterpolatedVelocityField_QuickTestPoint, METH_VARARGS,
   "V.QuickTestPoint([float, ...]) -> int\nC++: int QuickTestPoint(double *x)\n\nA utility function which evaluates the point at T1, T2 to see if\nit is inside the data at both times or only one.\n"},
  {"GetLastGoodVelocity", PyvtkTemporalInterpolatedVelocityField_GetLastGoodVelocity, METH_VARARGS,
   "V.GetLastGoodVelocity() -> (float, float, float)\nC++: double *GetLastGoodVelocity()\n\n"},
  {"GetCurrentWeight", PyvtkTemporalInterpolatedVelocityField_GetCurrentWeight, METH_VARARGS,
   "V.GetCurrentWeight() -> float\nC++: virtual double GetCurrentWeight()\n\nGet the most recent weight between 0->1 from T1->T2. Initial\nvalue is 0.\n"},
  {"InterpolatePoint", PyvtkTemporalInterpolatedVelocityField_InterpolatePoint, METH_VARARGS,
   "V.InterpolatePoint(vtkPointData, vtkPointData, int) -> bool\nC++: bool InterpolatePoint(vtkPointData *outPD1,\n    vtkPointData *outPD2, vtkIdType outIndex)\nV.InterpolatePoint(int, vtkPointData, int) -> bool\nC++: bool InterpolatePoint(int T, vtkPointData *outPD1,\n    vtkIdType outIndex)\n\n"},
  {"ShowCacheResults", PyvtkTemporalInterpolatedVelocityField_ShowCacheResults, METH_VARARGS,
   "V.ShowCacheResults()\nC++: void ShowCacheResults()\n\n"},
  {"IsStatic", PyvtkTemporalInterpolatedVelocityField_IsStatic, METH_VARARGS,
   "V.IsStatic(int) -> bool\nC++: bool IsStatic(int datasetIndex)\n\n"},
  {"AdvanceOneTimeStep", PyvtkTemporalInterpolatedVelocityField_AdvanceOneTimeStep, METH_VARARGS,
   "V.AdvanceOneTimeStep()\nC++: void AdvanceOneTimeStep()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTemporalInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkTemporalInterpolatedVelocityField", // tp_name
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
  PyvtkTemporalInterpolatedVelocityField_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalInterpolatedVelocityField_StaticNew()
{
  return vtkTemporalInterpolatedVelocityField::New();
}

PyObject *PyvtkTemporalInterpolatedVelocityField_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTemporalInterpolatedVelocityField_Type, PyvtkTemporalInterpolatedVelocityField_Methods,
    "vtkTemporalInterpolatedVelocityField",
 &PyvtkTemporalInterpolatedVelocityField_StaticNew);

  PyTypeObject *pytype = &PyvtkTemporalInterpolatedVelocityField_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkFunctionSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

}

