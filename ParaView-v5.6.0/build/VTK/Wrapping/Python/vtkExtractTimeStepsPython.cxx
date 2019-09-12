// python wrapper for vtkExtractTimeSteps
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
#include "vtkExtractTimeSteps.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractTimeSteps(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractTimeSteps_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkExtractTimeSteps_Doc =
  "vtkExtractTimeSteps - extract specific time-steps from dataset\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkExtractTimeSteps extracts the specified time steps from the input\n"
  "dataset. It has two modes, one to specify timesteps explicitly by\n"
  "their indices and one to specify a range of timesteps to extract.\n\n"
  "When specifying timesteps explicitly the timesteps to be extracted\n"
  "are specified by their indices. If no time step is specified, all of\n"
  "the input time steps are extracted.\n\n"
  "When specifying a range, the beginning and end times are specified\n"
  "and the timesteps in between are extracted.  This can be modified by\n"
  "the TimeStepInterval property that sets the filter to extract every\n"
  "Nth timestep.\n\n"
  "This filter is useful when one wants to work with only a sub-set of\n"
  "the input time steps.\n\n";


static PyObject *
PyvtkExtractTimeSteps_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractTimeSteps::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractTimeSteps::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractTimeSteps *tempr = vtkExtractTimeSteps::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractTimeSteps *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractTimeSteps::NewInstance());

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
PyvtkExtractTimeSteps_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkExtractTimeSteps::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_AddTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddTimeStepIndex(temp0);
    }
    else
    {
      op->vtkExtractTimeSteps::AddTimeStepIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetTimeStepIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepIndices(temp0, temp1);
    }
    else
    {
      op->vtkExtractTimeSteps::SetTimeStepIndices(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetTimeStepIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetTimeStepIndices(temp0);
    }
    else
    {
      op->vtkExtractTimeSteps::GetTimeStepIndices(temp0);
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
PyvtkExtractTimeSteps_GenerateTimeStepIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTimeStepIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GenerateTimeStepIndices(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExtractTimeSteps::GenerateTimeStepIndices(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_ClearTimeStepIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearTimeStepIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearTimeStepIndices();
    }
    else
    {
      op->vtkExtractTimeSteps::ClearTimeStepIndices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetUseRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRange() :
      op->vtkExtractTimeSteps::GetUseRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetUseRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRange(temp0);
    }
    else
    {
      op->vtkExtractTimeSteps::SetUseRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_UseRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRangeOn();
    }
    else
    {
      op->vtkExtractTimeSteps::UseRangeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_UseRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRangeOff();
    }
    else
    {
      op->vtkExtractTimeSteps::UseRangeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkExtractTimeSteps::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0, temp1);
    }
    else
    {
      op->vtkExtractTimeSteps::SetRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractTimeSteps_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0);
    }
    else
    {
      op->vtkExtractTimeSteps::SetRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractTimeSteps_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkExtractTimeSteps_SetRange_s1(self, args);
    case 1:
      return PyvtkExtractTimeSteps_SetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return nullptr;
}



static PyObject *
PyvtkExtractTimeSteps_GetTimeStepInterval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepInterval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepInterval() :
      op->vtkExtractTimeSteps::GetTimeStepInterval());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetTimeStepInterval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepInterval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepInterval(temp0);
    }
    else
    {
      op->vtkExtractTimeSteps::SetTimeStepInterval(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetTimeStepIntervalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIntervalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepIntervalMinValue() :
      op->vtkExtractTimeSteps::GetTimeStepIntervalMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetTimeStepIntervalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIntervalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepIntervalMaxValue() :
      op->vtkExtractTimeSteps::GetTimeStepIntervalMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetTimeEstimationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeEstimationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeEstimationMode() :
      op->vtkExtractTimeSteps::GetTimeEstimationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetTimeEstimationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeEstimationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeEstimationMode(temp0);
    }
    else
    {
      op->vtkExtractTimeSteps::SetTimeEstimationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetTimeEstimationModeToPrevious(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeEstimationModeToPrevious");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTimeEstimationModeToPrevious();
    }
    else
    {
      op->vtkExtractTimeSteps::SetTimeEstimationModeToPrevious();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetTimeEstimationModeToNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeEstimationModeToNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTimeEstimationModeToNext();
    }
    else
    {
      op->vtkExtractTimeSteps::SetTimeEstimationModeToNext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetTimeEstimationModeToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeEstimationModeToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTimeEstimationModeToNearest();
    }
    else
    {
      op->vtkExtractTimeSteps::SetTimeEstimationModeToNearest();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractTimeSteps_Methods[] = {
  {"IsTypeOf", PyvtkExtractTimeSteps_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractTimeSteps_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractTimeSteps_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractTimeSteps\nC++: static vtkExtractTimeSteps *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractTimeSteps_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractTimeSteps\nC++: vtkExtractTimeSteps *NewInstance()\n\n"},
  {"GetNumberOfTimeSteps", PyvtkExtractTimeSteps_GetNumberOfTimeSteps, METH_VARARGS,
   "V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nGet the number of time steps that will be extracted\n"},
  {"AddTimeStepIndex", PyvtkExtractTimeSteps_AddTimeStepIndex, METH_VARARGS,
   "V.AddTimeStepIndex(int)\nC++: void AddTimeStepIndex(int timeStepIndex)\n\nAdd a time step index. Not added if the index already exists.\n"},
  {"SetTimeStepIndices", PyvtkExtractTimeSteps_SetTimeStepIndices, METH_VARARGS,
   "V.SetTimeStepIndices(int, (int, ...))\nC++: void SetTimeStepIndices(int count,\n    const int *timeStepIndices)\n\nGet/Set an array of time step indices. For the Get function,\ntimeStepIndices should be big enough for GetNumberOfTimeSteps()\nvalues.\n"},
  {"GetTimeStepIndices", PyvtkExtractTimeSteps_GetTimeStepIndices, METH_VARARGS,
   "V.GetTimeStepIndices([int, ...])\nC++: void GetTimeStepIndices(int *timeStepIndices)\n\nGet/Set an array of time step indices. For the Get function,\ntimeStepIndices should be big enough for GetNumberOfTimeSteps()\nvalues.\n"},
  {"GenerateTimeStepIndices", PyvtkExtractTimeSteps_GenerateTimeStepIndices, METH_VARARGS,
   "V.GenerateTimeStepIndices(int, int, int)\nC++: void GenerateTimeStepIndices(int begin, int end, int step)\n\nGenerate a range of indices in [begin, end) with a step size of\n'step'\n"},
  {"ClearTimeStepIndices", PyvtkExtractTimeSteps_ClearTimeStepIndices, METH_VARARGS,
   "V.ClearTimeStepIndices()\nC++: void ClearTimeStepIndices()\n\nClear the time step indices\n"},
  {"GetUseRange", PyvtkExtractTimeSteps_GetUseRange, METH_VARARGS,
   "V.GetUseRange() -> bool\nC++: virtual bool GetUseRange()\n\nGet/Set whether to extract a range of timesteps.  When false,\nextracts the time steps explicitly set with SetTimeStepIndices. \nDefaults to false.\n"},
  {"SetUseRange", PyvtkExtractTimeSteps_SetUseRange, METH_VARARGS,
   "V.SetUseRange(bool)\nC++: virtual void SetUseRange(bool _arg)\n\nGet/Set whether to extract a range of timesteps.  When false,\nextracts the time steps explicitly set with SetTimeStepIndices. \nDefaults to false.\n"},
  {"UseRangeOn", PyvtkExtractTimeSteps_UseRangeOn, METH_VARARGS,
   "V.UseRangeOn()\nC++: virtual void UseRangeOn()\n\nGet/Set whether to extract a range of timesteps.  When false,\nextracts the time steps explicitly set with SetTimeStepIndices. \nDefaults to false.\n"},
  {"UseRangeOff", PyvtkExtractTimeSteps_UseRangeOff, METH_VARARGS,
   "V.UseRangeOff()\nC++: virtual void UseRangeOff()\n\nGet/Set whether to extract a range of timesteps.  When false,\nextracts the time steps explicitly set with SetTimeStepIndices. \nDefaults to false.\n"},
  {"GetRange", PyvtkExtractTimeSteps_GetRange, METH_VARARGS,
   "V.GetRange() -> (int, int)\nC++: int *GetRange()\n\n"},
  {"SetRange", PyvtkExtractTimeSteps_SetRange, METH_VARARGS,
   "V.SetRange(int, int)\nC++: void SetRange(int, int)\nV.SetRange((int, int))\nC++: void SetRange(int a[2])\n\n"},
  {"GetTimeStepInterval", PyvtkExtractTimeSteps_GetTimeStepInterval, METH_VARARGS,
   "V.GetTimeStepInterval() -> int\nC++: virtual int GetTimeStepInterval()\n\nGet/Set the time step interval to extract.  This is the N in\n'extract every Nth timestep in this range'.  Default to 1 or\n'extract all timesteps in this range.\n"},
  {"SetTimeStepInterval", PyvtkExtractTimeSteps_SetTimeStepInterval, METH_VARARGS,
   "V.SetTimeStepInterval(int)\nC++: virtual void SetTimeStepInterval(int _arg)\n\nGet/Set the time step interval to extract.  This is the N in\n'extract every Nth timestep in this range'.  Default to 1 or\n'extract all timesteps in this range.\n"},
  {"GetTimeStepIntervalMinValue", PyvtkExtractTimeSteps_GetTimeStepIntervalMinValue, METH_VARARGS,
   "V.GetTimeStepIntervalMinValue() -> int\nC++: virtual int GetTimeStepIntervalMinValue()\n\nGet/Set the time step interval to extract.  This is the N in\n'extract every Nth timestep in this range'.  Default to 1 or\n'extract all timesteps in this range.\n"},
  {"GetTimeStepIntervalMaxValue", PyvtkExtractTimeSteps_GetTimeStepIntervalMaxValue, METH_VARARGS,
   "V.GetTimeStepIntervalMaxValue() -> int\nC++: virtual int GetTimeStepIntervalMaxValue()\n\nGet/Set the time step interval to extract.  This is the N in\n'extract every Nth timestep in this range'.  Default to 1 or\n'extract all timesteps in this range.\n"},
  {"GetTimeEstimationMode", PyvtkExtractTimeSteps_GetTimeEstimationMode, METH_VARARGS,
   "V.GetTimeEstimationMode() -> int\nC++: virtual int GetTimeEstimationMode()\n\nGet/Set what to do when the requested time is not one of the\ntimesteps this filter is set to extract.  Should be one of the\nvalues of the enum vtkExtractTimeSteps::EstimationMode. The\ndefault is PREVIOUS_TIMESTEP.\n"},
  {"SetTimeEstimationMode", PyvtkExtractTimeSteps_SetTimeEstimationMode, METH_VARARGS,
   "V.SetTimeEstimationMode(int)\nC++: virtual void SetTimeEstimationMode(int _arg)\n\nGet/Set what to do when the requested time is not one of the\ntimesteps this filter is set to extract.  Should be one of the\nvalues of the enum vtkExtractTimeSteps::EstimationMode. The\ndefault is PREVIOUS_TIMESTEP.\n"},
  {"SetTimeEstimationModeToPrevious", PyvtkExtractTimeSteps_SetTimeEstimationModeToPrevious, METH_VARARGS,
   "V.SetTimeEstimationModeToPrevious()\nC++: void SetTimeEstimationModeToPrevious()\n\nGet/Set what to do when the requested time is not one of the\ntimesteps this filter is set to extract.  Should be one of the\nvalues of the enum vtkExtractTimeSteps::EstimationMode. The\ndefault is PREVIOUS_TIMESTEP.\n"},
  {"SetTimeEstimationModeToNext", PyvtkExtractTimeSteps_SetTimeEstimationModeToNext, METH_VARARGS,
   "V.SetTimeEstimationModeToNext()\nC++: void SetTimeEstimationModeToNext()\n\nGet/Set what to do when the requested time is not one of the\ntimesteps this filter is set to extract.  Should be one of the\nvalues of the enum vtkExtractTimeSteps::EstimationMode. The\ndefault is PREVIOUS_TIMESTEP.\n"},
  {"SetTimeEstimationModeToNearest", PyvtkExtractTimeSteps_SetTimeEstimationModeToNearest, METH_VARARGS,
   "V.SetTimeEstimationModeToNearest()\nC++: void SetTimeEstimationModeToNearest()\n\nGet/Set what to do when the requested time is not one of the\ntimesteps this filter is set to extract.  Should be one of the\nvalues of the enum vtkExtractTimeSteps::EstimationMode. The\ndefault is PREVIOUS_TIMESTEP.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractTimeSteps_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractTimeSteps", // tp_name
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
  PyvtkExtractTimeSteps_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractTimeSteps_StaticNew()
{
  return vtkExtractTimeSteps::New();
}

PyObject *PyvtkExtractTimeSteps_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractTimeSteps_Type, PyvtkExtractTimeSteps_Methods,
    "vtkExtractTimeSteps",
 &PyvtkExtractTimeSteps_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractTimeSteps_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "PREVIOUS_TIMESTEP", vtkExtractTimeSteps::PREVIOUS_TIMESTEP },
        { "NEXT_TIMESTEP", vtkExtractTimeSteps::NEXT_TIMESTEP },
        { "NEAREST_TIMESTEP", vtkExtractTimeSteps::NEAREST_TIMESTEP },
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

void PyVTKAddFile_vtkExtractTimeSteps(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractTimeSteps_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractTimeSteps", o) != 0)
  {
    Py_DECREF(o);
  }

}

