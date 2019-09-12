// python wrapper for vtkProbeFilter
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
#include "vtkProbeFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProbeFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProbeFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkProbeFilter_Doc =
  "vtkProbeFilter - sample data values at specified point locations\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkProbeFilter is a filter that computes point attributes (e.g.,\n"
  "scalars, vectors, etc.) at specified point positions. The filter has\n"
  "two inputs: the Input and Source. The Input geometric structure is\n"
  "passed through the filter. The point attributes are computed at the\n"
  "Input point positions by interpolating into the source data. For\n"
  "example, we can compute data values on a plane (plane specified as\n"
  "Input) from a volume (Source). The cell data of the source data is\n"
  "copied to the output based on in which source cell each input point\n"
  "is. If an array of the same name exists both in source's point and\n"
  "cell data, only the one from the point data is probed.\n\n"
  "This filter can be used to resample data, or convert one dataset form\n"
  "into another. For example, an unstructured grid (vtkUnstructuredGrid)\n"
  "can be probed with a volume (three-dimensional vtkImageData), and\n"
  "then volume rendering techniques can be used to visualize the\n"
  "results. Another example: a line or curve can be used to probe data\n"
  "to produce x-y plots along that line or curve.\n\n";


static PyObject *
PyvtkProbeFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProbeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProbeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProbeFilter *tempr = vtkProbeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProbeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProbeFilter::NewInstance());

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
PyvtkProbeFilter_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkProbeFilter::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkProbeFilter::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkProbeFilter::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetCategoricalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCategoricalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCategoricalData(temp0);
    }
    else
    {
      op->vtkProbeFilter::SetCategoricalData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetCategoricalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCategoricalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCategoricalData() :
      op->vtkProbeFilter::GetCategoricalData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_CategoricalDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CategoricalDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CategoricalDataOn();
    }
    else
    {
      op->vtkProbeFilter::CategoricalDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_CategoricalDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CategoricalDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CategoricalDataOff();
    }
    else
    {
      op->vtkProbeFilter::CategoricalDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetSpatialMatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpatialMatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpatialMatch(temp0);
    }
    else
    {
      op->vtkProbeFilter::SetSpatialMatch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetSpatialMatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialMatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSpatialMatch() :
      op->vtkProbeFilter::GetSpatialMatch());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_SpatialMatchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpatialMatchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SpatialMatchOn();
    }
    else
    {
      op->vtkProbeFilter::SpatialMatchOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_SpatialMatchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpatialMatchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SpatialMatchOff();
    }
    else
    {
      op->vtkProbeFilter::SpatialMatchOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetValidPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetValidPoints() :
      op->vtkProbeFilter::GetValidPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetValidPointMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidPointMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValidPointMaskArrayName(temp0);
    }
    else
    {
      op->vtkProbeFilter::SetValidPointMaskArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetValidPointMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPointMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetValidPointMaskArrayName() :
      op->vtkProbeFilter::GetValidPointMaskArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassCellArrays(temp0);
    }
    else
    {
      op->vtkProbeFilter::SetPassCellArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_PassCellArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOn();
    }
    else
    {
      op->vtkProbeFilter::PassCellArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_PassCellArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOff();
    }
    else
    {
      op->vtkProbeFilter::PassCellArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassCellArrays() :
      op->vtkProbeFilter::GetPassCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPointArrays(temp0);
    }
    else
    {
      op->vtkProbeFilter::SetPassPointArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_PassPointArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOn();
    }
    else
    {
      op->vtkProbeFilter::PassPointArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_PassPointArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOff();
    }
    else
    {
      op->vtkProbeFilter::PassPointArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassPointArrays() :
      op->vtkProbeFilter::GetPassPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassFieldArrays(temp0);
    }
    else
    {
      op->vtkProbeFilter::SetPassFieldArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_PassFieldArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOn();
    }
    else
    {
      op->vtkProbeFilter::PassFieldArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_PassFieldArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOff();
    }
    else
    {
      op->vtkProbeFilter::PassFieldArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassFieldArrays() :
      op->vtkProbeFilter::GetPassFieldArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkProbeFilter::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkProbeFilter::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetComputeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeTolerance(temp0);
    }
    else
    {
      op->vtkProbeFilter::SetComputeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_ComputeToleranceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeToleranceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeToleranceOn();
    }
    else
    {
      op->vtkProbeFilter::ComputeToleranceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_ComputeToleranceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeToleranceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeToleranceOff();
    }
    else
    {
      op->vtkProbeFilter::ComputeToleranceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetComputeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeTolerance() :
      op->vtkProbeFilter::GetComputeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_SetCellLocatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLocatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->SetCellLocatorPrototype(temp0);
    }
    else
    {
      op->vtkProbeFilter::SetCellLocatorPrototype(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbeFilter_GetCellLocatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbeFilter *op = static_cast<vtkProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLocator *tempr = (ap.IsBound() ?
      op->GetCellLocatorPrototype() :
      op->vtkProbeFilter::GetCellLocatorPrototype());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProbeFilter_Methods[] = {
  {"IsTypeOf", PyvtkProbeFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProbeFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProbeFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProbeFilter\nC++: static vtkProbeFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProbeFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProbeFilter\nC++: vtkProbeFilter *NewInstance()\n\n"},
  {"SetSourceData", PyvtkProbeFilter_SetSourceData, METH_VARARGS,
   "V.SetSourceData(vtkDataObject)\nC++: void SetSourceData(vtkDataObject *source)\n\nSpecify the data set that will be probed at the input points. The\nInput gives the geometry (the points and cells) for the output,\nwhile the Source is probed (interpolated) to generate the\nscalars, vectors, etc. for the output points based on the point\nlocations.\n"},
  {"GetSource", PyvtkProbeFilter_GetSource, METH_VARARGS,
   "V.GetSource() -> vtkDataObject\nC++: vtkDataObject *GetSource()\n\nSpecify the data set that will be probed at the input points. The\nInput gives the geometry (the points and cells) for the output,\nwhile the Source is probed (interpolated) to generate the\nscalars, vectors, etc. for the output points based on the point\nlocations.\n"},
  {"SetSourceConnection", PyvtkProbeFilter_SetSourceConnection, METH_VARARGS,
   "V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the data set that will be probed at the input points. The\nInput gives the geometry (the points and cells) for the output,\nwhile the Source is probed (interpolated) to generate the\nscalars, vectors, etc. for the output points based on the point\nlocations.\n"},
  {"SetCategoricalData", PyvtkProbeFilter_SetCategoricalData, METH_VARARGS,
   "V.SetCategoricalData(int)\nC++: virtual void SetCategoricalData(vtkTypeBool _arg)\n\nControl whether the source point data is to be treated as\ncategorical. If the data is categorical, then the resultant data\nwill be determined by a nearest neighbor interpolation scheme.\n"},
  {"GetCategoricalData", PyvtkProbeFilter_GetCategoricalData, METH_VARARGS,
   "V.GetCategoricalData() -> int\nC++: virtual vtkTypeBool GetCategoricalData()\n\nControl whether the source point data is to be treated as\ncategorical. If the data is categorical, then the resultant data\nwill be determined by a nearest neighbor interpolation scheme.\n"},
  {"CategoricalDataOn", PyvtkProbeFilter_CategoricalDataOn, METH_VARARGS,
   "V.CategoricalDataOn()\nC++: virtual void CategoricalDataOn()\n\nControl whether the source point data is to be treated as\ncategorical. If the data is categorical, then the resultant data\nwill be determined by a nearest neighbor interpolation scheme.\n"},
  {"CategoricalDataOff", PyvtkProbeFilter_CategoricalDataOff, METH_VARARGS,
   "V.CategoricalDataOff()\nC++: virtual void CategoricalDataOff()\n\nControl whether the source point data is to be treated as\ncategorical. If the data is categorical, then the resultant data\nwill be determined by a nearest neighbor interpolation scheme.\n"},
  {"SetSpatialMatch", PyvtkProbeFilter_SetSpatialMatch, METH_VARARGS,
   "V.SetSpatialMatch(int)\nC++: virtual void SetSpatialMatch(vtkTypeBool _arg)\n\nThis flag is used only when a piece is requested to update.  By\ndefault the flag is off.  Because no spatial correspondence\nbetween input pieces and source pieces is known, all of the\nsource has to be requested no matter what piece of the output is\nrequested.  When there is a spatial correspondence, the\nuser/application can set this flag.  This hint allows the breakup\nof the probe operation to be much more efficient.  When piece m\nof n is requested for update by the user, then only n of m needs\nto be requested of the source.\n"},
  {"GetSpatialMatch", PyvtkProbeFilter_GetSpatialMatch, METH_VARARGS,
   "V.GetSpatialMatch() -> int\nC++: virtual vtkTypeBool GetSpatialMatch()\n\nThis flag is used only when a piece is requested to update.  By\ndefault the flag is off.  Because no spatial correspondence\nbetween input pieces and source pieces is known, all of the\nsource has to be requested no matter what piece of the output is\nrequested.  When there is a spatial correspondence, the\nuser/application can set this flag.  This hint allows the breakup\nof the probe operation to be much more efficient.  When piece m\nof n is requested for update by the user, then only n of m needs\nto be requested of the source.\n"},
  {"SpatialMatchOn", PyvtkProbeFilter_SpatialMatchOn, METH_VARARGS,
   "V.SpatialMatchOn()\nC++: virtual void SpatialMatchOn()\n\nThis flag is used only when a piece is requested to update.  By\ndefault the flag is off.  Because no spatial correspondence\nbetween input pieces and source pieces is known, all of the\nsource has to be requested no matter what piece of the output is\nrequested.  When there is a spatial correspondence, the\nuser/application can set this flag.  This hint allows the breakup\nof the probe operation to be much more efficient.  When piece m\nof n is requested for update by the user, then only n of m needs\nto be requested of the source.\n"},
  {"SpatialMatchOff", PyvtkProbeFilter_SpatialMatchOff, METH_VARARGS,
   "V.SpatialMatchOff()\nC++: virtual void SpatialMatchOff()\n\nThis flag is used only when a piece is requested to update.  By\ndefault the flag is off.  Because no spatial correspondence\nbetween input pieces and source pieces is known, all of the\nsource has to be requested no matter what piece of the output is\nrequested.  When there is a spatial correspondence, the\nuser/application can set this flag.  This hint allows the breakup\nof the probe operation to be much more efficient.  When piece m\nof n is requested for update by the user, then only n of m needs\nto be requested of the source.\n"},
  {"GetValidPoints", PyvtkProbeFilter_GetValidPoints, METH_VARARGS,
   "V.GetValidPoints() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetValidPoints()\n\nGet the list of point ids in the output that contain attribute\ndata interpolated from the source.\n"},
  {"SetValidPointMaskArrayName", PyvtkProbeFilter_SetValidPointMaskArrayName, METH_VARARGS,
   "V.SetValidPointMaskArrayName(string)\nC++: virtual void SetValidPointMaskArrayName(const char *_arg)\n\nReturns the name of the char array added to the output with\nvalues 1 for valid points and 0 for invalid points. Set to\n\"vtkValidPointMask\" by default.\n"},
  {"GetValidPointMaskArrayName", PyvtkProbeFilter_GetValidPointMaskArrayName, METH_VARARGS,
   "V.GetValidPointMaskArrayName() -> string\nC++: virtual char *GetValidPointMaskArrayName()\n\nReturns the name of the char array added to the output with\nvalues 1 for valid points and 0 for invalid points. Set to\n\"vtkValidPointMask\" by default.\n"},
  {"SetPassCellArrays", PyvtkProbeFilter_SetPassCellArrays, METH_VARARGS,
   "V.SetPassCellArrays(int)\nC++: virtual void SetPassCellArrays(vtkTypeBool _arg)\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"PassCellArraysOn", PyvtkProbeFilter_PassCellArraysOn, METH_VARARGS,
   "V.PassCellArraysOn()\nC++: virtual void PassCellArraysOn()\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"PassCellArraysOff", PyvtkProbeFilter_PassCellArraysOff, METH_VARARGS,
   "V.PassCellArraysOff()\nC++: virtual void PassCellArraysOff()\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"GetPassCellArrays", PyvtkProbeFilter_GetPassCellArrays, METH_VARARGS,
   "V.GetPassCellArrays() -> int\nC++: virtual vtkTypeBool GetPassCellArrays()\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"SetPassPointArrays", PyvtkProbeFilter_SetPassPointArrays, METH_VARARGS,
   "V.SetPassPointArrays(int)\nC++: virtual void SetPassPointArrays(vtkTypeBool _arg)\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {"PassPointArraysOn", PyvtkProbeFilter_PassPointArraysOn, METH_VARARGS,
   "V.PassPointArraysOn()\nC++: virtual void PassPointArraysOn()\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {"PassPointArraysOff", PyvtkProbeFilter_PassPointArraysOff, METH_VARARGS,
   "V.PassPointArraysOff()\nC++: virtual void PassPointArraysOff()\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {"GetPassPointArrays", PyvtkProbeFilter_GetPassPointArrays, METH_VARARGS,
   "V.GetPassPointArrays() -> int\nC++: virtual vtkTypeBool GetPassPointArrays()\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {"SetPassFieldArrays", PyvtkProbeFilter_SetPassFieldArrays, METH_VARARGS,
   "V.SetPassFieldArrays(int)\nC++: virtual void SetPassFieldArrays(vtkTypeBool _arg)\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"PassFieldArraysOn", PyvtkProbeFilter_PassFieldArraysOn, METH_VARARGS,
   "V.PassFieldArraysOn()\nC++: virtual void PassFieldArraysOn()\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"PassFieldArraysOff", PyvtkProbeFilter_PassFieldArraysOff, METH_VARARGS,
   "V.PassFieldArraysOff()\nC++: virtual void PassFieldArraysOff()\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"GetPassFieldArrays", PyvtkProbeFilter_GetPassFieldArrays, METH_VARARGS,
   "V.GetPassFieldArrays() -> int\nC++: virtual vtkTypeBool GetPassFieldArrays()\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"SetTolerance", PyvtkProbeFilter_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSet the tolerance used to compute whether a point in the source\nis in a cell of the input.  This value is only used if\nComputeTolerance is off.\n"},
  {"GetTolerance", PyvtkProbeFilter_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSet the tolerance used to compute whether a point in the source\nis in a cell of the input.  This value is only used if\nComputeTolerance is off.\n"},
  {"SetComputeTolerance", PyvtkProbeFilter_SetComputeTolerance, METH_VARARGS,
   "V.SetComputeTolerance(bool)\nC++: virtual void SetComputeTolerance(bool _arg)\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. Off by default.\n"},
  {"ComputeToleranceOn", PyvtkProbeFilter_ComputeToleranceOn, METH_VARARGS,
   "V.ComputeToleranceOn()\nC++: virtual void ComputeToleranceOn()\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. Off by default.\n"},
  {"ComputeToleranceOff", PyvtkProbeFilter_ComputeToleranceOff, METH_VARARGS,
   "V.ComputeToleranceOff()\nC++: virtual void ComputeToleranceOff()\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. Off by default.\n"},
  {"GetComputeTolerance", PyvtkProbeFilter_GetComputeTolerance, METH_VARARGS,
   "V.GetComputeTolerance() -> bool\nC++: virtual bool GetComputeTolerance()\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. Off by default.\n"},
  {"SetCellLocatorPrototype", PyvtkProbeFilter_SetCellLocatorPrototype, METH_VARARGS,
   "V.SetCellLocatorPrototype(vtkAbstractCellLocator)\nC++: virtual void SetCellLocatorPrototype(\n    vtkAbstractCellLocator *)\n\nSet/Get the prototype cell locator to use for probing the source\ndataset. By default, vtkStaticCellLocator will be used.\n"},
  {"GetCellLocatorPrototype", PyvtkProbeFilter_GetCellLocatorPrototype, METH_VARARGS,
   "V.GetCellLocatorPrototype() -> vtkAbstractCellLocator\nC++: virtual vtkAbstractCellLocator *GetCellLocatorPrototype()\n\nSet/Get the prototype cell locator to use for probing the source\ndataset. By default, vtkStaticCellLocator will be used.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProbeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkProbeFilter", // tp_name
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
  PyvtkProbeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProbeFilter_StaticNew()
{
  return vtkProbeFilter::New();
}

PyObject *PyvtkProbeFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProbeFilter_Type, PyvtkProbeFilter_Methods,
    "vtkProbeFilter",
 &PyvtkProbeFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkProbeFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProbeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProbeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProbeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

