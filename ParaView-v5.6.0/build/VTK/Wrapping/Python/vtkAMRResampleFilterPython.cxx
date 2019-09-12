// python wrapper for vtkAMRResampleFilter
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
#include "vtkAMRResampleFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRResampleFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRResampleFilter_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkAMRResampleFilter_Doc =
  "vtkAMRResampleFilter -  This filter is a concrete instance of\nvtkMultiBlockDataSetAlgorithm and\n provides functionality for extracting portion of the AMR dataset,\nspecified\n by a bounding box, in a uniform grid of the desired level of\nresolution.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "The resulting uniform grid is stored in a vtkMultiBlockDataSet where\n"
  "the\n"
  " number of blocks correspond to the number of processors utilized for\n"
  "the\n"
  " operation.\n\n"
  "@warning\n"
  " Data of the input AMR dataset is assumed to be cell-centered.\n\n"
  "@sa\n"
  " vtkOverlappingAMR, vtkUniformGrid\n\n";


static PyObject *
PyvtkAMRResampleFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRResampleFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRResampleFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRResampleFilter *tempr = vtkAMRResampleFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRResampleFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRResampleFilter::NewInstance());

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
PyvtkAMRResampleFilter_SetNumberOfSamples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

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
      op->SetNumberOfSamples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRResampleFilter::SetNumberOfSamples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetNumberOfSamples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSamples(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetNumberOfSamples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetNumberOfSamples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRResampleFilter_SetNumberOfSamples_s1(self, args);
    case 1:
      return PyvtkAMRResampleFilter_SetNumberOfSamples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfSamples");
  return nullptr;
}



static PyObject *
PyvtkAMRResampleFilter_GetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfSamples() :
      op->vtkAMRResampleFilter::GetNumberOfSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetTransferToNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferToNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransferToNodes(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetTransferToNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetTransferToNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferToNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransferToNodes() :
      op->vtkAMRResampleFilter::GetTransferToNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetDemandDrivenMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDemandDrivenMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDemandDrivenMode(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetDemandDrivenMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetDemandDrivenMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDemandDrivenMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDemandDrivenMode() :
      op->vtkAMRResampleFilter::GetDemandDrivenMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPartitions(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetNumberOfPartitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitions() :
      op->vtkAMRResampleFilter::GetNumberOfPartitions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetMin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

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
      op->SetMin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRResampleFilter::SetMin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetMin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMin(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetMin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetMin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRResampleFilter_SetMin_s1(self, args);
    case 1:
      return PyvtkAMRResampleFilter_SetMin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMin");
  return nullptr;
}



static PyObject *
PyvtkAMRResampleFilter_GetMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMin() :
      op->vtkAMRResampleFilter::GetMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetMax_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

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
      op->SetMax(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRResampleFilter::SetMax(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetMax_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMax(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetMax(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRResampleFilter_SetMax_s1(self, args);
    case 1:
      return PyvtkAMRResampleFilter_SetMax_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMax");
  return nullptr;
}



static PyObject *
PyvtkAMRResampleFilter_GetMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMax() :
      op->vtkAMRResampleFilter::GetMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetUseBiasVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseBiasVector(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetUseBiasVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetUseBiasVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseBiasVector() :
      op->vtkAMRResampleFilter::GetUseBiasVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetBiasVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

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
      op->SetBiasVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRResampleFilter::SetBiasVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetBiasVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBiasVector(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetBiasVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetBiasVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRResampleFilter_SetBiasVector_s1(self, args);
    case 1:
      return PyvtkAMRResampleFilter_SetBiasVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBiasVector");
  return nullptr;
}



static PyObject *
PyvtkAMRResampleFilter_GetBiasVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBiasVector() :
      op->vtkAMRResampleFilter::GetBiasVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRResampleFilter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkAMRResampleFilter::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_FillOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillOutputPortInformation(temp0, temp1) :
      op->vtkAMRResampleFilter::FillOutputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRResampleFilter_Methods[] = {
  {"IsTypeOf", PyvtkAMRResampleFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRResampleFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRResampleFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRResampleFilter\nC++: static vtkAMRResampleFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRResampleFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRResampleFilter\nC++: vtkAMRResampleFilter *NewInstance()\n\n"},
  {"SetNumberOfSamples", PyvtkAMRResampleFilter_SetNumberOfSamples, METH_VARARGS,
   "V.SetNumberOfSamples(int, int, int)\nC++: void SetNumberOfSamples(int, int, int)\nV.SetNumberOfSamples((int, int, int))\nC++: void SetNumberOfSamples(int a[3])\n\n"},
  {"GetNumberOfSamples", PyvtkAMRResampleFilter_GetNumberOfSamples, METH_VARARGS,
   "V.GetNumberOfSamples() -> (int, int, int)\nC++: int *GetNumberOfSamples()\n\n"},
  {"SetTransferToNodes", PyvtkAMRResampleFilter_SetTransferToNodes, METH_VARARGS,
   "V.SetTransferToNodes(int)\nC++: virtual void SetTransferToNodes(int _arg)\n\nSet & Get macro for the TransferToNodes flag\n"},
  {"GetTransferToNodes", PyvtkAMRResampleFilter_GetTransferToNodes, METH_VARARGS,
   "V.GetTransferToNodes() -> int\nC++: virtual int GetTransferToNodes()\n\nSet & Get macro for the TransferToNodes flag\n"},
  {"SetDemandDrivenMode", PyvtkAMRResampleFilter_SetDemandDrivenMode, METH_VARARGS,
   "V.SetDemandDrivenMode(int)\nC++: virtual void SetDemandDrivenMode(int _arg)\n\nSet & Get macro to allow the filter to operate in both\ndemand-driven and standard modes\n"},
  {"GetDemandDrivenMode", PyvtkAMRResampleFilter_GetDemandDrivenMode, METH_VARARGS,
   "V.GetDemandDrivenMode() -> int\nC++: virtual int GetDemandDrivenMode()\n\nSet & Get macro to allow the filter to operate in both\ndemand-driven and standard modes\n"},
  {"SetNumberOfPartitions", PyvtkAMRResampleFilter_SetNumberOfPartitions, METH_VARARGS,
   "V.SetNumberOfPartitions(int)\nC++: virtual void SetNumberOfPartitions(int _arg)\n\nSet & Get macro for the number of subdivisions\n"},
  {"GetNumberOfPartitions", PyvtkAMRResampleFilter_GetNumberOfPartitions, METH_VARARGS,
   "V.GetNumberOfPartitions() -> int\nC++: virtual int GetNumberOfPartitions()\n\nSet & Get macro for the number of subdivisions\n"},
  {"SetMin", PyvtkAMRResampleFilter_SetMin, METH_VARARGS,
   "V.SetMin(float, float, float)\nC++: void SetMin(double, double, double)\nV.SetMin((float, float, float))\nC++: void SetMin(double a[3])\n\n"},
  {"GetMin", PyvtkAMRResampleFilter_GetMin, METH_VARARGS,
   "V.GetMin() -> (float, float, float)\nC++: double *GetMin()\n\n"},
  {"SetMax", PyvtkAMRResampleFilter_SetMax, METH_VARARGS,
   "V.SetMax(float, float, float)\nC++: void SetMax(double, double, double)\nV.SetMax((float, float, float))\nC++: void SetMax(double a[3])\n\n"},
  {"GetMax", PyvtkAMRResampleFilter_GetMax, METH_VARARGS,
   "V.GetMax() -> (float, float, float)\nC++: double *GetMax()\n\n"},
  {"SetUseBiasVector", PyvtkAMRResampleFilter_SetUseBiasVector, METH_VARARGS,
   "V.SetUseBiasVector(bool)\nC++: virtual void SetUseBiasVector(bool _arg)\n\nSet & Get macro for the number of subdivisions\n"},
  {"GetUseBiasVector", PyvtkAMRResampleFilter_GetUseBiasVector, METH_VARARGS,
   "V.GetUseBiasVector() -> bool\nC++: virtual bool GetUseBiasVector()\n\nSet & Get macro for the number of subdivisions\n"},
  {"SetBiasVector", PyvtkAMRResampleFilter_SetBiasVector, METH_VARARGS,
   "V.SetBiasVector(float, float, float)\nC++: void SetBiasVector(double, double, double)\nV.SetBiasVector((float, float, float))\nC++: void SetBiasVector(double a[3])\n\n"},
  {"GetBiasVector", PyvtkAMRResampleFilter_GetBiasVector, METH_VARARGS,
   "V.GetBiasVector() -> (float, float, float)\nC++: double *GetBiasVector()\n\n"},
  {"SetController", PyvtkAMRResampleFilter_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *_arg)\n\nSet & Get macro for the multi-process controller\n"},
  {"GetController", PyvtkAMRResampleFilter_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet & Get macro for the multi-process controller\n"},
  {"FillInputPortInformation", PyvtkAMRResampleFilter_FillInputPortInformation, METH_VARARGS,
   "V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {"FillOutputPortInformation", PyvtkAMRResampleFilter_FillOutputPortInformation, METH_VARARGS,
   "V.FillOutputPortInformation(int, vtkInformation) -> int\nC++: int FillOutputPortInformation(int port, vtkInformation *info)\n     override;\n\nFill the output port information objects for this algorithm. This\nis invoked by the first call to GetOutputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRResampleFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersAMRPython.vtkAMRResampleFilter", // tp_name
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
  PyvtkAMRResampleFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRResampleFilter_StaticNew()
{
  return vtkAMRResampleFilter::New();
}

PyObject *PyvtkAMRResampleFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRResampleFilter_Type, PyvtkAMRResampleFilter_Methods,
    "vtkAMRResampleFilter",
 &PyvtkAMRResampleFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRResampleFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRResampleFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRResampleFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRResampleFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

