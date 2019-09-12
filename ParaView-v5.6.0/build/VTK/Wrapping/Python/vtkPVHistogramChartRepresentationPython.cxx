// python wrapper for vtkPVHistogramChartRepresentation
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
#include "vtkInformationVector.h"
#include "vtkPVHistogramChartRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVHistogramChartRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVHistogramChartRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkXYChartRepresentation_ClassNew
extern "C" { PyObject *PyvtkXYChartRepresentation_ClassNew(); }
#define DECLARED_PyvtkXYChartRepresentation_ClassNew
#endif

static const char *PyvtkPVHistogramChartRepresentation_Doc =
  "vtkPVHistogramChartRepresentation - representation for \"Histogram\n\n"
  "Superclass: vtkXYChartRepresentation\n\n"
  "View\".\n\n"
  "vtkPVHistogramChartRepresentation is the vtkPVDataRepresentation\n"
  "subclass for showing an data in the \"Histogram View\". The\n"
  "representation pipeline extracts histogram from the input dataset and\n"
  "then shows that in the view.\n\n";


static PyObject *
PyvtkPVHistogramChartRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVHistogramChartRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVHistogramChartRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVHistogramChartRepresentation *tempr = vtkPVHistogramChartRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVHistogramChartRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVHistogramChartRepresentation::NewInstance());

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
PyvtkPVHistogramChartRepresentation_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

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
      op->vtkPVHistogramChartRepresentation::SetComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponent() :
      op->vtkPVHistogramChartRepresentation::GetComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

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
      op->vtkPVHistogramChartRepresentation::SetBinCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_GetBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinCount() :
      op->vtkPVHistogramChartRepresentation::GetBinCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetCenterBinsAroundMinAndMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterBinsAroundMinAndMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

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
      op->vtkPVHistogramChartRepresentation::SetCenterBinsAroundMinAndMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_GetCenterBinsAroundMinAndMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterBinsAroundMinAndMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCenterBinsAroundMinAndMax() :
      op->vtkPVHistogramChartRepresentation::GetCenterBinsAroundMinAndMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

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
      op->vtkPVHistogramChartRepresentation::SetCustomBinRanges(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_GetCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCustomBinRanges() :
      op->vtkPVHistogramChartRepresentation::GetCustomBinRanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetUseCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

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
      op->vtkPVHistogramChartRepresentation::SetUseCustomBinRanges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_GetUseCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseCustomBinRanges() :
      op->vtkPVHistogramChartRepresentation::GetUseCustomBinRanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetHistogramColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

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
      op->SetHistogramColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVHistogramChartRepresentation::SetHistogramColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetUseColorMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseColorMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseColorMapping(temp0);
    }
    else
    {
      op->vtkPVHistogramChartRepresentation::SetUseColorMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkPVHistogramChartRepresentation::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetHistogramLineStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramLineStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramLineStyle(temp0);
    }
    else
    {
      op->vtkPVHistogramChartRepresentation::SetHistogramLineStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPVHistogramChartRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPVHistogramChartRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1);
    }
    else
    {
      op->vtkPVHistogramChartRepresentation::SetInputArrayToProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  const char *temp3 = nullptr;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPVHistogramChartRepresentation::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess_Methods[] = {
  {nullptr, PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess_s1, METH_VARARGS,
   "@iiiiz"},
  {nullptr, PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess_s2, METH_VARARGS,
   "@iiiii"},
  {nullptr, PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess_s4, METH_VARARGS,
   "@iiizz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return nullptr;
}



static PyObject *
PyvtkPVHistogramChartRepresentation_MapSelectionToInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapSelectionToInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    bool tempr = (ap.IsBound() ?
      op->MapSelectionToInput(temp0) :
      op->vtkPVHistogramChartRepresentation::MapSelectionToInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVHistogramChartRepresentation_MapSelectionToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapSelectionToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVHistogramChartRepresentation *op = static_cast<vtkPVHistogramChartRepresentation *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    bool tempr = (ap.IsBound() ?
      op->MapSelectionToView(temp0) :
      op->vtkPVHistogramChartRepresentation::MapSelectionToView(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVHistogramChartRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPVHistogramChartRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVHistogramChartRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVHistogramChartRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVHistogramChartRepresentation\nC++: static vtkPVHistogramChartRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVHistogramChartRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVHistogramChartRepresentation\nC++: vtkPVHistogramChartRepresentation *NewInstance()\n\n"},
  {"SetComponent", PyvtkPVHistogramChartRepresentation_SetComponent, METH_VARARGS,
   "V.SetComponent(int)\nC++: void SetComponent(int)\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {"GetComponent", PyvtkPVHistogramChartRepresentation_GetComponent, METH_VARARGS,
   "V.GetComponent() -> int\nC++: int GetComponent()\n\nControls which input data component should be binned, for input\narrays with more-than-one component\n"},
  {"SetBinCount", PyvtkPVHistogramChartRepresentation_SetBinCount, METH_VARARGS,
   "V.SetBinCount(int)\nC++: void SetBinCount(int)\n\nControls the number of bins N in the output histogram data\n"},
  {"GetBinCount", PyvtkPVHistogramChartRepresentation_GetBinCount, METH_VARARGS,
   "V.GetBinCount() -> int\nC++: int GetBinCount()\n\nControls the number of bins N in the output histogram data\n"},
  {"SetCenterBinsAroundMinAndMax", PyvtkPVHistogramChartRepresentation_SetCenterBinsAroundMinAndMax, METH_VARARGS,
   "V.SetCenterBinsAroundMinAndMax(bool)\nC++: void SetCenterBinsAroundMinAndMax(bool)\n\nGet/Set if first and last bins must be centered around the min\nand max data. This is only used when UseCustomBinRanges is set to\nfalse. Default is false.\n"},
  {"GetCenterBinsAroundMinAndMax", PyvtkPVHistogramChartRepresentation_GetCenterBinsAroundMinAndMax, METH_VARARGS,
   "V.GetCenterBinsAroundMinAndMax() -> bool\nC++: bool GetCenterBinsAroundMinAndMax()\n\nGet/Set if first and last bins must be centered around the min\nand max data. This is only used when UseCustomBinRanges is set to\nfalse. Default is false.\n"},
  {"SetCustomBinRanges", PyvtkPVHistogramChartRepresentation_SetCustomBinRanges, METH_VARARGS,
   "V.SetCustomBinRanges(float, float)\nC++: void SetCustomBinRanges(double min, double max)\n\nGet/Set custom bin ranges to use. These are used only when\nUseCustomBinRanges is set to true.\n"},
  {"GetCustomBinRanges", PyvtkPVHistogramChartRepresentation_GetCustomBinRanges, METH_VARARGS,
   "V.GetCustomBinRanges() -> (float, ...)\nC++: double *GetCustomBinRanges()\n\nGet/Set custom bin ranges to use. These are used only when\nUseCustomBinRanges is set to true.\n"},
  {"SetUseCustomBinRanges", PyvtkPVHistogramChartRepresentation_SetUseCustomBinRanges, METH_VARARGS,
   "V.SetUseCustomBinRanges(bool)\nC++: void SetUseCustomBinRanges(bool)\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {"GetUseCustomBinRanges", PyvtkPVHistogramChartRepresentation_GetUseCustomBinRanges, METH_VARARGS,
   "V.GetUseCustomBinRanges() -> bool\nC++: bool GetUseCustomBinRanges()\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. By default, set to false.\n"},
  {"SetHistogramColor", PyvtkPVHistogramChartRepresentation_SetHistogramColor, METH_VARARGS,
   "V.SetHistogramColor(float, float, float)\nC++: void SetHistogramColor(double r, double g, double b)\n\nSets the color for the histograms.\n"},
  {"SetUseColorMapping", PyvtkPVHistogramChartRepresentation_SetUseColorMapping, METH_VARARGS,
   "V.SetUseColorMapping(bool)\nC++: void SetUseColorMapping(bool colorMapping)\n\nSets the histogram to be color mapped by the scalar.\n"},
  {"SetLookupTable", PyvtkPVHistogramChartRepresentation_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSets the lookup table that is used for color mapping by the\nscalar.\n"},
  {"SetHistogramLineStyle", PyvtkPVHistogramChartRepresentation_SetHistogramLineStyle, METH_VARARGS,
   "V.SetHistogramLineStyle(int)\nC++: void SetHistogramLineStyle(int style)\n\nSet the line style for the histogram.\n"},
  {"SetInputArrayToProcess", PyvtkPVHistogramChartRepresentation_SetInputArrayToProcess, METH_VARARGS,
   "V.SetInputArrayToProcess(int, int, int, int, string)\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\n    override;\nV.SetInputArrayToProcess(int, int, int, int, int)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, int fieldAttributeType)\nV.SetInputArrayToProcess(int, vtkInformation)\nC++: virtual void SetInputArrayToProcess(int idx,\n    vtkInformation *info)\nV.SetInputArrayToProcess(int, int, int, string, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, const char *fieldAssociation,\n    const char *attributeTypeorName)\n\nOverload the vtkAlgorithm method to update after the change\n"},
  {"MapSelectionToInput", PyvtkPVHistogramChartRepresentation_MapSelectionToInput, METH_VARARGS,
   "V.MapSelectionToInput(vtkSelection) -> bool\nC++: bool MapSelectionToInput(vtkSelection *) override;\n\nOverridden to transform id-based selection produced by the\nhistogram view to a threshold-based selection.\n"},
  {"MapSelectionToView", PyvtkPVHistogramChartRepresentation_MapSelectionToView, METH_VARARGS,
   "V.MapSelectionToView(vtkSelection) -> bool\nC++: bool MapSelectionToView(vtkSelection *sel) override;\n\nInverse of MapSelectionToInput().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVHistogramChartRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVHistogramChartRepresentation", // tp_name
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
  PyvtkPVHistogramChartRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVHistogramChartRepresentation_StaticNew()
{
  return vtkPVHistogramChartRepresentation::New();
}

PyObject *PyvtkPVHistogramChartRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVHistogramChartRepresentation_Type, PyvtkPVHistogramChartRepresentation_Methods,
    "vtkPVHistogramChartRepresentation",
 &PyvtkPVHistogramChartRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVHistogramChartRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXYChartRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVHistogramChartRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVHistogramChartRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVHistogramChartRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

