// python wrapper for vtkConnectivityFilter
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
#include "vtkConnectivityFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConnectivityFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkConnectivityFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPointSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPointSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPointSetAlgorithm_ClassNew
#endif

static const char *PyvtkConnectivityFilter_Doc =
  "vtkConnectivityFilter - extract data based on geometric connectivity\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkConnectivityFilter is a filter that extracts cells that share\n"
  "common points and/or meet other connectivity criterion. (Cells that\n"
  "share vertices and meet other connectivity criterion such as scalar\n"
  "range are known as a region.)  The filter works in one of six ways:\n"
  "1) extract the largest connected region in the dataset; 2) extract\n"
  "specified region numbers; 3) extract all regions sharing specified\n"
  "point ids; 4) extract all regions sharing specified cell ids; 5)\n"
  "extract the region closest to the specified point; or 6) extract all\n"
  "regions (used to color the data by region).\n\n"
  "vtkConnectivityFilter is generalized to handle any type of input\n"
  "dataset. If the input to this filter is a vtkPolyData, the output\n"
  "will be a vtkPolyData. For all other input types, it generates output\n"
  "data of type vtkUnstructuredGrid. Note that the only Get*Output()\n"
  "methods that will return a non-null pointer are\n"
  "GetUnstructuredGridOutput() and GetPolyDataOutput() when the output\n"
  "of the filter is a vtkUnstructuredGrid or vtkPolyData, respectively.\n\n"
  "The behavior of vtkConnectivityFilter can be modified by turning on\n"
  "the boolean ivar ScalarConnectivity. If this flag is on, the\n"
  "connectivity algorithm is modified so that cells are considered\n"
  "connected only if 1) they are geometrically connected (share a point)\n"
  "and 2) the scalar values of one of the cell's points falls in the\n"
  "scalar range specified. This use of ScalarConnectivity is\n"
  "particularly useful for volume datasets: it can be used as a simple \"connected\n"
  "segmentation\" algorithm. For example, by using a seed voxel (i.e.,\n"
  "cell) on a known anatomical structure, connectivity will pull out all\n"
  "voxels \"containing\" the anatomical structure. These voxels can then\n"
  "be contoured or processed by other visualization filters.\n\n"
  "@sa\n"
  "vtkPolyDataConnectivityFilter\n\n";


static PyObject *
PyvtkConnectivityFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConnectivityFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConnectivityFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConnectivityFilter *tempr = vtkConnectivityFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConnectivityFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConnectivityFilter::NewInstance());

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
PyvtkConnectivityFilter_SetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarConnectivity(temp0);
    }
    else
    {
      op->vtkConnectivityFilter::SetScalarConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarConnectivity() :
      op->vtkConnectivityFilter::GetScalarConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_ScalarConnectivityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOn();
    }
    else
    {
      op->vtkConnectivityFilter::ScalarConnectivityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_ScalarConnectivityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOff();
    }
    else
    {
      op->vtkConnectivityFilter::ScalarConnectivityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkConnectivityFilter::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConnectivityFilter_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0);
    }
    else
    {
      op->vtkConnectivityFilter::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConnectivityFilter_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkConnectivityFilter_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkConnectivityFilter_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}



static PyObject *
PyvtkConnectivityFilter_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkConnectivityFilter::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionMode(temp0);
    }
    else
    {
      op->vtkConnectivityFilter::SetExtractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetExtractionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMinValue() :
      op->vtkConnectivityFilter::GetExtractionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetExtractionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMaxValue() :
      op->vtkConnectivityFilter::GetExtractionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionMode() :
      op->vtkConnectivityFilter::GetExtractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToPointSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToPointSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToPointSeededRegions();
    }
    else
    {
      op->vtkConnectivityFilter::SetExtractionModeToPointSeededRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToCellSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToCellSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToCellSeededRegions();
    }
    else
    {
      op->vtkConnectivityFilter::SetExtractionModeToCellSeededRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToLargestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLargestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToLargestRegion();
    }
    else
    {
      op->vtkConnectivityFilter::SetExtractionModeToLargestRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToSpecifiedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToSpecifiedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToSpecifiedRegions();
    }
    else
    {
      op->vtkConnectivityFilter::SetExtractionModeToSpecifiedRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToClosestPointRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToClosestPointRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToClosestPointRegion();
    }
    else
    {
      op->vtkConnectivityFilter::SetExtractionModeToClosestPointRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToAllRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToAllRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToAllRegions();
    }
    else
    {
      op->vtkConnectivityFilter::SetExtractionModeToAllRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetExtractionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExtractionModeAsString() :
      op->vtkConnectivityFilter::GetExtractionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_InitializeSeedList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSeedList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSeedList();
    }
    else
    {
      op->vtkConnectivityFilter::InitializeSeedList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_AddSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddSeed(temp0);
    }
    else
    {
      op->vtkConnectivityFilter::AddSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_DeleteSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteSeed(temp0);
    }
    else
    {
      op->vtkConnectivityFilter::DeleteSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_InitializeSpecifiedRegionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSpecifiedRegionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSpecifiedRegionList();
    }
    else
    {
      op->vtkConnectivityFilter::InitializeSpecifiedRegionList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_AddSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddSpecifiedRegion(temp0);
    }
    else
    {
      op->vtkConnectivityFilter::AddSpecifiedRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_DeleteSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteSpecifiedRegion(temp0);
    }
    else
    {
      op->vtkConnectivityFilter::DeleteSpecifiedRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      op->SetClosestPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkConnectivityFilter::SetClosestPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConnectivityFilter_SetClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetClosestPoint(temp0);
    }
    else
    {
      op->vtkConnectivityFilter::SetClosestPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConnectivityFilter_SetClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkConnectivityFilter_SetClosestPoint_s1(self, args);
    case 1:
      return PyvtkConnectivityFilter_SetClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClosestPoint");
  return nullptr;
}



static PyObject *
PyvtkConnectivityFilter_GetClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetClosestPoint() :
      op->vtkConnectivityFilter::GetClosestPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetNumberOfExtractedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfExtractedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfExtractedRegions() :
      op->vtkConnectivityFilter::GetNumberOfExtractedRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetColorRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorRegions(temp0);
    }
    else
    {
      op->vtkConnectivityFilter::SetColorRegions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetColorRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorRegions() :
      op->vtkConnectivityFilter::GetColorRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_ColorRegionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorRegionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorRegionsOn();
    }
    else
    {
      op->vtkConnectivityFilter::ColorRegionsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_ColorRegionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorRegionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorRegionsOff();
    }
    else
    {
      op->vtkConnectivityFilter::ColorRegionsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkConnectivityFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkConnectivityFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkConnectivityFilter_Methods[] = {
  {"IsTypeOf", PyvtkConnectivityFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConnectivityFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConnectivityFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkConnectivityFilter\nC++: static vtkConnectivityFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConnectivityFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkConnectivityFilter\nC++: vtkConnectivityFilter *NewInstance()\n\n"},
  {"SetScalarConnectivity", PyvtkConnectivityFilter_SetScalarConnectivity, METH_VARARGS,
   "V.SetScalarConnectivity(int)\nC++: virtual void SetScalarConnectivity(vtkTypeBool _arg)\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {"GetScalarConnectivity", PyvtkConnectivityFilter_GetScalarConnectivity, METH_VARARGS,
   "V.GetScalarConnectivity() -> int\nC++: virtual vtkTypeBool GetScalarConnectivity()\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {"ScalarConnectivityOn", PyvtkConnectivityFilter_ScalarConnectivityOn, METH_VARARGS,
   "V.ScalarConnectivityOn()\nC++: virtual void ScalarConnectivityOn()\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {"ScalarConnectivityOff", PyvtkConnectivityFilter_ScalarConnectivityOff, METH_VARARGS,
   "V.ScalarConnectivityOff()\nC++: virtual void ScalarConnectivityOff()\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {"SetScalarRange", PyvtkConnectivityFilter_SetScalarRange, METH_VARARGS,
   "V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {"GetScalarRange", PyvtkConnectivityFilter_GetScalarRange, METH_VARARGS,
   "V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\n"},
  {"SetExtractionMode", PyvtkConnectivityFilter_SetExtractionMode, METH_VARARGS,
   "V.SetExtractionMode(int)\nC++: virtual void SetExtractionMode(int _arg)\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionModeMinValue", PyvtkConnectivityFilter_GetExtractionModeMinValue, METH_VARARGS,
   "V.GetExtractionModeMinValue() -> int\nC++: virtual int GetExtractionModeMinValue()\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionModeMaxValue", PyvtkConnectivityFilter_GetExtractionModeMaxValue, METH_VARARGS,
   "V.GetExtractionModeMaxValue() -> int\nC++: virtual int GetExtractionModeMaxValue()\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionMode", PyvtkConnectivityFilter_GetExtractionMode, METH_VARARGS,
   "V.GetExtractionMode() -> int\nC++: virtual int GetExtractionMode()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToPointSeededRegions", PyvtkConnectivityFilter_SetExtractionModeToPointSeededRegions, METH_VARARGS,
   "V.SetExtractionModeToPointSeededRegions()\nC++: void SetExtractionModeToPointSeededRegions()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToCellSeededRegions", PyvtkConnectivityFilter_SetExtractionModeToCellSeededRegions, METH_VARARGS,
   "V.SetExtractionModeToCellSeededRegions()\nC++: void SetExtractionModeToCellSeededRegions()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToLargestRegion", PyvtkConnectivityFilter_SetExtractionModeToLargestRegion, METH_VARARGS,
   "V.SetExtractionModeToLargestRegion()\nC++: void SetExtractionModeToLargestRegion()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToSpecifiedRegions", PyvtkConnectivityFilter_SetExtractionModeToSpecifiedRegions, METH_VARARGS,
   "V.SetExtractionModeToSpecifiedRegions()\nC++: void SetExtractionModeToSpecifiedRegions()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToClosestPointRegion", PyvtkConnectivityFilter_SetExtractionModeToClosestPointRegion, METH_VARARGS,
   "V.SetExtractionModeToClosestPointRegion()\nC++: void SetExtractionModeToClosestPointRegion()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToAllRegions", PyvtkConnectivityFilter_SetExtractionModeToAllRegions, METH_VARARGS,
   "V.SetExtractionModeToAllRegions()\nC++: void SetExtractionModeToAllRegions()\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionModeAsString", PyvtkConnectivityFilter_GetExtractionModeAsString, METH_VARARGS,
   "V.GetExtractionModeAsString() -> string\nC++: const char *GetExtractionModeAsString()\n\nControl the extraction of connected surfaces.\n"},
  {"InitializeSeedList", PyvtkConnectivityFilter_InitializeSeedList, METH_VARARGS,
   "V.InitializeSeedList()\nC++: void InitializeSeedList()\n\nInitialize list of point ids/cell ids used to seed regions.\n"},
  {"AddSeed", PyvtkConnectivityFilter_AddSeed, METH_VARARGS,
   "V.AddSeed(int)\nC++: void AddSeed(vtkIdType id)\n\nAdd a seed id (point or cell id). Note: ids are 0-offset.\n"},
  {"DeleteSeed", PyvtkConnectivityFilter_DeleteSeed, METH_VARARGS,
   "V.DeleteSeed(int)\nC++: void DeleteSeed(vtkIdType id)\n\nDelete a seed id (point or cell id). Note: ids are 0-offset.\n"},
  {"InitializeSpecifiedRegionList", PyvtkConnectivityFilter_InitializeSpecifiedRegionList, METH_VARARGS,
   "V.InitializeSpecifiedRegionList()\nC++: void InitializeSpecifiedRegionList()\n\nInitialize list of region ids to extract.\n"},
  {"AddSpecifiedRegion", PyvtkConnectivityFilter_AddSpecifiedRegion, METH_VARARGS,
   "V.AddSpecifiedRegion(int)\nC++: void AddSpecifiedRegion(int id)\n\nAdd a region id to extract. Note: ids are 0-offset.\n"},
  {"DeleteSpecifiedRegion", PyvtkConnectivityFilter_DeleteSpecifiedRegion, METH_VARARGS,
   "V.DeleteSpecifiedRegion(int)\nC++: void DeleteSpecifiedRegion(int id)\n\nDelete a region id to extract. Note: ids are 0-offset.\n"},
  {"SetClosestPoint", PyvtkConnectivityFilter_SetClosestPoint, METH_VARARGS,
   "V.SetClosestPoint(float, float, float)\nC++: void SetClosestPoint(double, double, double)\nV.SetClosestPoint((float, float, float))\nC++: void SetClosestPoint(double a[3])\n\n"},
  {"GetClosestPoint", PyvtkConnectivityFilter_GetClosestPoint, METH_VARARGS,
   "V.GetClosestPoint() -> (float, float, float)\nC++: double *GetClosestPoint()\n\nUse to specify x-y-z point coordinates when extracting the region\nclosest to a specified point.\n"},
  {"GetNumberOfExtractedRegions", PyvtkConnectivityFilter_GetNumberOfExtractedRegions, METH_VARARGS,
   "V.GetNumberOfExtractedRegions() -> int\nC++: int GetNumberOfExtractedRegions()\n\nObtain the number of connected regions.\n"},
  {"SetColorRegions", PyvtkConnectivityFilter_SetColorRegions, METH_VARARGS,
   "V.SetColorRegions(int)\nC++: virtual void SetColorRegions(vtkTypeBool _arg)\n\nTurn on/off the coloring of connected regions.\n"},
  {"GetColorRegions", PyvtkConnectivityFilter_GetColorRegions, METH_VARARGS,
   "V.GetColorRegions() -> int\nC++: virtual vtkTypeBool GetColorRegions()\n\nTurn on/off the coloring of connected regions.\n"},
  {"ColorRegionsOn", PyvtkConnectivityFilter_ColorRegionsOn, METH_VARARGS,
   "V.ColorRegionsOn()\nC++: virtual void ColorRegionsOn()\n\nTurn on/off the coloring of connected regions.\n"},
  {"ColorRegionsOff", PyvtkConnectivityFilter_ColorRegionsOff, METH_VARARGS,
   "V.ColorRegionsOff()\nC++: virtual void ColorRegionsOff()\n\nTurn on/off the coloring of connected regions.\n"},
  {"SetOutputPointsPrecision", PyvtkConnectivityFilter_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkConnectivityFilter_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkConnectivityFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkConnectivityFilter", // tp_name
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
  PyvtkConnectivityFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConnectivityFilter_StaticNew()
{
  return vtkConnectivityFilter::New();
}

PyObject *PyvtkConnectivityFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkConnectivityFilter_Type, PyvtkConnectivityFilter_Methods,
    "vtkConnectivityFilter",
 &PyvtkConnectivityFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkConnectivityFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkConnectivityFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConnectivityFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConnectivityFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_EXTRACT_POINT_SEEDED_REGIONS", 1 },
        { "VTK_EXTRACT_CELL_SEEDED_REGIONS", 2 },
        { "VTK_EXTRACT_SPECIFIED_REGIONS", 3 },
        { "VTK_EXTRACT_LARGEST_REGION", 4 },
        { "VTK_EXTRACT_ALL_REGIONS", 5 },
        { "VTK_EXTRACT_CLOSEST_POINT_REGION", 6 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

