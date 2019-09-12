// python wrapper for vtkExtractHistogram
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
#include "vtkExtractHistogram.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractHistogram(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractHistogram_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkExtractHistogram_Doc =
  "vtkExtractHistogram - Extract histogram data (binned values) from any\ndataset\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkExtractHistogram accepts any vtkDataSet as input and produces a\n"
  "vtkPolyData containing histogram data as output.  The output\n"
  "vtkPolyData will have contain a vtkDoubleArray named \"bin_extents\"\n"
  "which contains the boundaries between each histogram bin, and a\n"
  "vtkUnsignedLongArray named \"bin_values\" which will contain the value\n"
  "for each bin.\n\n";


static PyObject *
PyvtkExtractHistogram_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractHistogram::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractHistogram::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractHistogram *tempr = vtkExtractHistogram::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractHistogram *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractHistogram::NewInstance());

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
PyvtkExtractHistogram_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponent(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMinValue() :
      op->vtkExtractHistogram::GetComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMaxValue() :
      op->vtkExtractHistogram::GetComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponent() :
      op->vtkExtractHistogram::GetComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBinCount(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetBinCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetBinCountMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinCountMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinCountMinValue() :
      op->vtkExtractHistogram::GetBinCountMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetBinCountMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinCountMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinCountMaxValue() :
      op->vtkExtractHistogram::GetBinCountMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinCount() :
      op->vtkExtractHistogram::GetBinCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetCenterBinsAroundMinAndMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterBinsAroundMinAndMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterBinsAroundMinAndMax(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetCenterBinsAroundMinAndMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetCenterBinsAroundMinAndMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterBinsAroundMinAndMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCenterBinsAroundMinAndMax() :
      op->vtkExtractHistogram::GetCenterBinsAroundMinAndMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_CenterBinsAroundMinAndMaxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterBinsAroundMinAndMaxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterBinsAroundMinAndMaxOn();
    }
    else
    {
      op->vtkExtractHistogram::CenterBinsAroundMinAndMaxOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_CenterBinsAroundMinAndMaxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterBinsAroundMinAndMaxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterBinsAroundMinAndMaxOff();
    }
    else
    {
      op->vtkExtractHistogram::CenterBinsAroundMinAndMaxOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetCustomBinRanges_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCustomBinRanges(temp0, temp1);
    }
    else
    {
      op->vtkExtractHistogram::SetCustomBinRanges(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractHistogram_SetCustomBinRanges_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCustomBinRanges(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetCustomBinRanges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractHistogram_SetCustomBinRanges(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkExtractHistogram_SetCustomBinRanges_s1(self, args);
    case 1:
      return PyvtkExtractHistogram_SetCustomBinRanges_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomBinRanges");
  return nullptr;
}



static PyObject *
PyvtkExtractHistogram_GetCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCustomBinRanges() :
      op->vtkExtractHistogram::GetCustomBinRanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetUseCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCustomBinRanges(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetUseCustomBinRanges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetUseCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseCustomBinRanges() :
      op->vtkExtractHistogram::GetUseCustomBinRanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_UseCustomBinRangesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomBinRangesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomBinRangesOn();
    }
    else
    {
      op->vtkExtractHistogram::UseCustomBinRangesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_UseCustomBinRangesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomBinRangesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomBinRangesOff();
    }
    else
    {
      op->vtkExtractHistogram::UseCustomBinRangesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetCalculateAverages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateAverages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCalculateAverages(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetCalculateAverages(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetCalculateAverages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateAverages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCalculateAverages() :
      op->vtkExtractHistogram::GetCalculateAverages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_CalculateAveragesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateAveragesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateAveragesOn();
    }
    else
    {
      op->vtkExtractHistogram::CalculateAveragesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_CalculateAveragesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateAveragesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateAveragesOff();
    }
    else
    {
      op->vtkExtractHistogram::CalculateAveragesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractHistogram_Methods[] = {
  {"IsTypeOf", PyvtkExtractHistogram_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractHistogram_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractHistogram_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractHistogram\nC++: static vtkExtractHistogram *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractHistogram_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractHistogram\nC++: vtkExtractHistogram *NewInstance()\n\n"},
  {"SetComponent", PyvtkExtractHistogram_SetComponent, METH_VARARGS,
   "V.SetComponent(int)\nC++: virtual void SetComponent(int _arg)\n\nControls which input data component should be binned, for input\narrays with more-than-one component.  Setting this to the number\nof components will compute the histogram of the magnitude (L2\nnorm) of the tuple.\n"},
  {"GetComponentMinValue", PyvtkExtractHistogram_GetComponentMinValue, METH_VARARGS,
   "V.GetComponentMinValue() -> int\nC++: virtual int GetComponentMinValue()\n\nControls which input data component should be binned, for input\narrays with more-than-one component.  Setting this to the number\nof components will compute the histogram of the magnitude (L2\nnorm) of the tuple.\n"},
  {"GetComponentMaxValue", PyvtkExtractHistogram_GetComponentMaxValue, METH_VARARGS,
   "V.GetComponentMaxValue() -> int\nC++: virtual int GetComponentMaxValue()\n\nControls which input data component should be binned, for input\narrays with more-than-one component.  Setting this to the number\nof components will compute the histogram of the magnitude (L2\nnorm) of the tuple.\n"},
  {"GetComponent", PyvtkExtractHistogram_GetComponent, METH_VARARGS,
   "V.GetComponent() -> int\nC++: virtual int GetComponent()\n\nControls which input data component should be binned, for input\narrays with more-than-one component.  Setting this to the number\nof components will compute the histogram of the magnitude (L2\nnorm) of the tuple.\n"},
  {"SetBinCount", PyvtkExtractHistogram_SetBinCount, METH_VARARGS,
   "V.SetBinCount(int)\nC++: virtual void SetBinCount(int _arg)\n\nControls the number of bins N in the output histogram data\n"},
  {"GetBinCountMinValue", PyvtkExtractHistogram_GetBinCountMinValue, METH_VARARGS,
   "V.GetBinCountMinValue() -> int\nC++: virtual int GetBinCountMinValue()\n\nControls the number of bins N in the output histogram data\n"},
  {"GetBinCountMaxValue", PyvtkExtractHistogram_GetBinCountMaxValue, METH_VARARGS,
   "V.GetBinCountMaxValue() -> int\nC++: virtual int GetBinCountMaxValue()\n\nControls the number of bins N in the output histogram data\n"},
  {"GetBinCount", PyvtkExtractHistogram_GetBinCount, METH_VARARGS,
   "V.GetBinCount() -> int\nC++: virtual int GetBinCount()\n\nControls the number of bins N in the output histogram data\n"},
  {"SetCenterBinsAroundMinAndMax", PyvtkExtractHistogram_SetCenterBinsAroundMinAndMax, METH_VARARGS,
   "V.SetCenterBinsAroundMinAndMax(bool)\nC++: virtual void SetCenterBinsAroundMinAndMax(bool _arg)\n\nGet/Set if first and last bins must be centered around the min\nand max data. This is only used when UseCustomBinRanges is set to\nfalse. Default is false.\n"},
  {"GetCenterBinsAroundMinAndMax", PyvtkExtractHistogram_GetCenterBinsAroundMinAndMax, METH_VARARGS,
   "V.GetCenterBinsAroundMinAndMax() -> bool\nC++: virtual bool GetCenterBinsAroundMinAndMax()\n\nGet/Set if first and last bins must be centered around the min\nand max data. This is only used when UseCustomBinRanges is set to\nfalse. Default is false.\n"},
  {"CenterBinsAroundMinAndMaxOn", PyvtkExtractHistogram_CenterBinsAroundMinAndMaxOn, METH_VARARGS,
   "V.CenterBinsAroundMinAndMaxOn()\nC++: virtual void CenterBinsAroundMinAndMaxOn()\n\nGet/Set if first and last bins must be centered around the min\nand max data. This is only used when UseCustomBinRanges is set to\nfalse. Default is false.\n"},
  {"CenterBinsAroundMinAndMaxOff", PyvtkExtractHistogram_CenterBinsAroundMinAndMaxOff, METH_VARARGS,
   "V.CenterBinsAroundMinAndMaxOff()\nC++: virtual void CenterBinsAroundMinAndMaxOff()\n\nGet/Set if first and last bins must be centered around the min\nand max data. This is only used when UseCustomBinRanges is set to\nfalse. Default is false.\n"},
  {"SetCustomBinRanges", PyvtkExtractHistogram_SetCustomBinRanges, METH_VARARGS,
   "V.SetCustomBinRanges(float, float)\nC++: void SetCustomBinRanges(double, double)\nV.SetCustomBinRanges((float, float))\nC++: void SetCustomBinRanges(double a[2])\n\n"},
  {"GetCustomBinRanges", PyvtkExtractHistogram_GetCustomBinRanges, METH_VARARGS,
   "V.GetCustomBinRanges() -> (float, float)\nC++: double *GetCustomBinRanges()\n\n"},
  {"SetUseCustomBinRanges", PyvtkExtractHistogram_SetUseCustomBinRanges, METH_VARARGS,
   "V.SetUseCustomBinRanges(bool)\nC++: virtual void SetUseCustomBinRanges(bool _arg)\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {"GetUseCustomBinRanges", PyvtkExtractHistogram_GetUseCustomBinRanges, METH_VARARGS,
   "V.GetUseCustomBinRanges() -> bool\nC++: virtual bool GetUseCustomBinRanges()\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {"UseCustomBinRangesOn", PyvtkExtractHistogram_UseCustomBinRangesOn, METH_VARARGS,
   "V.UseCustomBinRangesOn()\nC++: virtual void UseCustomBinRangesOn()\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {"UseCustomBinRangesOff", PyvtkExtractHistogram_UseCustomBinRangesOff, METH_VARARGS,
   "V.UseCustomBinRangesOff()\nC++: virtual void UseCustomBinRangesOff()\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {"SetCalculateAverages", PyvtkExtractHistogram_SetCalculateAverages, METH_VARARGS,
   "V.SetCalculateAverages(int)\nC++: virtual void SetCalculateAverages(int _arg)\n\nThis option controls whether the algorithm calculates averages of\nvariables other than the primary variable that fall into each\nbin. False by default.\n"},
  {"GetCalculateAverages", PyvtkExtractHistogram_GetCalculateAverages, METH_VARARGS,
   "V.GetCalculateAverages() -> int\nC++: virtual int GetCalculateAverages()\n\nThis option controls whether the algorithm calculates averages of\nvariables other than the primary variable that fall into each\nbin. False by default.\n"},
  {"CalculateAveragesOn", PyvtkExtractHistogram_CalculateAveragesOn, METH_VARARGS,
   "V.CalculateAveragesOn()\nC++: virtual void CalculateAveragesOn()\n\nThis option controls whether the algorithm calculates averages of\nvariables other than the primary variable that fall into each\nbin. False by default.\n"},
  {"CalculateAveragesOff", PyvtkExtractHistogram_CalculateAveragesOff, METH_VARARGS,
   "V.CalculateAveragesOff()\nC++: virtual void CalculateAveragesOff()\n\nThis option controls whether the algorithm calculates averages of\nvariables other than the primary variable that fall into each\nbin. False by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractHistogram_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkExtractHistogram", // tp_name
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
  PyvtkExtractHistogram_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractHistogram_StaticNew()
{
  return vtkExtractHistogram::New();
}

PyObject *PyvtkExtractHistogram_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractHistogram_Type, PyvtkExtractHistogram_Methods,
    "vtkExtractHistogram",
 &PyvtkExtractHistogram_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractHistogram_Type;

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

void PyVTKAddFile_vtkExtractHistogram(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractHistogram_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractHistogram", o) != 0)
  {
    Py_DECREF(o);
  }

}

