// python wrapper for vtkPolyDataConnectivityFilter
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
#include "vtkPolyDataConnectivityFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataConnectivityFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolyDataConnectivityFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkPolyDataConnectivityFilter_Doc =
  "vtkPolyDataConnectivityFilter - extract polygonal data based on\ngeometric connectivity\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPolyDataConnectivityFilter is a filter that extracts cells that\n"
  "share common points and/or satisfy a scalar threshold criterion.\n"
  "(Such a group of cells is called a region.) The filter works in one\n"
  "of six ways: 1) extract the largest (most points) connected region in\n"
  "the dataset; 2) extract specified region numbers; 3) extract all\n"
  "regions sharing specified point ids; 4) extract all regions sharing\n"
  "specified cell ids; 5) extract the region closest to the specified\n"
  "point; or 6) extract all regions (used to color regions).\n\n"
  "This filter is specialized for polygonal data. This means it runs a\n"
  "bit faster and is easier to construct visualization networks that\n"
  "process polygonal data.\n\n"
  "The behavior of vtkPolyDataConnectivityFilter can be modified by\n"
  "turning on the boolean ivar ScalarConnectivity. If this flag is on,\n"
  "the connectivity algorithm is modified so that cells are considered\n"
  "connected only if 1) they are geometrically connected (share a point)\n"
  "and 2) the scalar values of the cell's points falls in the scalar\n"
  "range specified. If ScalarConnectivity and FullScalarConnectivity is\n"
  "ON, all the cell's points must lie in the scalar range specified for\n"
  "the cell to qualify as being connected. If FullScalarConnectivity is\n"
  "OFF, any one of the cell's points may lie in the user specified\n"
  "scalar range for the cell to qualify as being connected.\n\n"
  "This use of ScalarConnectivity is particularly useful for selecting\n"
  "cells for later processing.\n\n"
  "@sa\n"
  "vtkConnectivityFilter\n\n";


static PyObject *
PyvtkPolyDataConnectivityFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataConnectivityFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataConnectivityFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataConnectivityFilter *tempr = vtkPolyDataConnectivityFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataConnectivityFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataConnectivityFilter::NewInstance());

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
PyvtkPolyDataConnectivityFilter_GetRegionSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetRegionSizes() :
      op->vtkPolyDataConnectivityFilter::GetRegionSizes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetScalarConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarConnectivity() :
      op->vtkPolyDataConnectivityFilter::GetScalarConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_ScalarConnectivityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOn();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::ScalarConnectivityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_ScalarConnectivityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOff();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::ScalarConnectivityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetFullScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFullScalarConnectivity(temp0);
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::SetFullScalarConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetFullScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFullScalarConnectivity() :
      op->vtkPolyDataConnectivityFilter::GetFullScalarConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_FullScalarConnectivityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FullScalarConnectivityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FullScalarConnectivityOn();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::FullScalarConnectivityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_FullScalarConnectivityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FullScalarConnectivityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FullScalarConnectivityOff();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::FullScalarConnectivityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataConnectivityFilter_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataConnectivityFilter_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolyDataConnectivityFilter_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkPolyDataConnectivityFilter_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}



static PyObject *
PyvtkPolyDataConnectivityFilter_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkPolyDataConnectivityFilter::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetExtractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetExtractionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMinValue() :
      op->vtkPolyDataConnectivityFilter::GetExtractionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetExtractionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMaxValue() :
      op->vtkPolyDataConnectivityFilter::GetExtractionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionMode() :
      op->vtkPolyDataConnectivityFilter::GetExtractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionModeToPointSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToPointSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToPointSeededRegions();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::SetExtractionModeToPointSeededRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionModeToCellSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToCellSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToCellSeededRegions();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::SetExtractionModeToCellSeededRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionModeToLargestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLargestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToLargestRegion();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::SetExtractionModeToLargestRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionModeToSpecifiedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToSpecifiedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToSpecifiedRegions();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::SetExtractionModeToSpecifiedRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionModeToClosestPointRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToClosestPointRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToClosestPointRegion();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::SetExtractionModeToClosestPointRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetExtractionModeToAllRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToAllRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToAllRegions();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::SetExtractionModeToAllRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetExtractionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExtractionModeAsString() :
      op->vtkPolyDataConnectivityFilter::GetExtractionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_InitializeSeedList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSeedList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSeedList();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::InitializeSeedList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_AddSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  int temp0;
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
      op->vtkPolyDataConnectivityFilter::AddSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_DeleteSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  int temp0;
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
      op->vtkPolyDataConnectivityFilter::DeleteSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_InitializeSpecifiedRegionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSpecifiedRegionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSpecifiedRegionList();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::InitializeSpecifiedRegionList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_AddSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::AddSpecifiedRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_DeleteSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::DeleteSpecifiedRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetClosestPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataConnectivityFilter_SetClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetClosestPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataConnectivityFilter_SetClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolyDataConnectivityFilter_SetClosestPoint_s1(self, args);
    case 1:
      return PyvtkPolyDataConnectivityFilter_SetClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClosestPoint");
  return nullptr;
}



static PyObject *
PyvtkPolyDataConnectivityFilter_GetClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetClosestPoint() :
      op->vtkPolyDataConnectivityFilter::GetClosestPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetNumberOfExtractedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfExtractedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfExtractedRegions() :
      op->vtkPolyDataConnectivityFilter::GetNumberOfExtractedRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetColorRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetColorRegions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetColorRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorRegions() :
      op->vtkPolyDataConnectivityFilter::GetColorRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_ColorRegionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorRegionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorRegionsOn();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::ColorRegionsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_ColorRegionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorRegionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorRegionsOff();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::ColorRegionsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetMarkVisitedPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkVisitedPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarkVisitedPointIds(temp0);
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::SetMarkVisitedPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetMarkVisitedPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkVisitedPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMarkVisitedPointIds() :
      op->vtkPolyDataConnectivityFilter::GetMarkVisitedPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_MarkVisitedPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkVisitedPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkVisitedPointIdsOn();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::MarkVisitedPointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_MarkVisitedPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkVisitedPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkVisitedPointIdsOff();
    }
    else
    {
      op->vtkPolyDataConnectivityFilter::MarkVisitedPointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetVisitedPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisitedPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetVisitedPointIds() :
      op->vtkPolyDataConnectivityFilter::GetVisitedPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

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
      op->vtkPolyDataConnectivityFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataConnectivityFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataConnectivityFilter *op = static_cast<vtkPolyDataConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPolyDataConnectivityFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataConnectivityFilter_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataConnectivityFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataConnectivityFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataConnectivityFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPolyDataConnectivityFilter\nC++: static vtkPolyDataConnectivityFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataConnectivityFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolyDataConnectivityFilter\nC++: vtkPolyDataConnectivityFilter *NewInstance()\n\n"},
  {"GetRegionSizes", PyvtkPolyDataConnectivityFilter_GetRegionSizes, METH_VARARGS,
   "V.GetRegionSizes() -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetRegionSizes()\n\nObtain the array containing the region sizes of the extracted\nregions\n"},
  {"SetScalarConnectivity", PyvtkPolyDataConnectivityFilter_SetScalarConnectivity, METH_VARARGS,
   "V.SetScalarConnectivity(int)\nC++: virtual void SetScalarConnectivity(vtkTypeBool _arg)\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {"GetScalarConnectivity", PyvtkPolyDataConnectivityFilter_GetScalarConnectivity, METH_VARARGS,
   "V.GetScalarConnectivity() -> int\nC++: virtual vtkTypeBool GetScalarConnectivity()\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {"ScalarConnectivityOn", PyvtkPolyDataConnectivityFilter_ScalarConnectivityOn, METH_VARARGS,
   "V.ScalarConnectivityOn()\nC++: virtual void ScalarConnectivityOn()\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {"ScalarConnectivityOff", PyvtkPolyDataConnectivityFilter_ScalarConnectivityOff, METH_VARARGS,
   "V.ScalarConnectivityOff()\nC++: virtual void ScalarConnectivityOff()\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {"SetFullScalarConnectivity", PyvtkPolyDataConnectivityFilter_SetFullScalarConnectivity, METH_VARARGS,
   "V.SetFullScalarConnectivity(int)\nC++: virtual void SetFullScalarConnectivity(vtkTypeBool _arg)\n\nTurn on/off the use of Fully connected scalar connectivity. This\nis off by default. The flag is used only if ScalarConnectivity is\non. If FullScalarConnectivity is ON, all the cell's points must\nlie in the scalar range specified for the cell to qualify as\nbeing connected. If FullScalarConnectivity is OFF, any one of the\ncell's points may lie in the user specified scalar range for the\ncell to qualify as being connected.\n"},
  {"GetFullScalarConnectivity", PyvtkPolyDataConnectivityFilter_GetFullScalarConnectivity, METH_VARARGS,
   "V.GetFullScalarConnectivity() -> int\nC++: virtual vtkTypeBool GetFullScalarConnectivity()\n\nTurn on/off the use of Fully connected scalar connectivity. This\nis off by default. The flag is used only if ScalarConnectivity is\non. If FullScalarConnectivity is ON, all the cell's points must\nlie in the scalar range specified for the cell to qualify as\nbeing connected. If FullScalarConnectivity is OFF, any one of the\ncell's points may lie in the user specified scalar range for the\ncell to qualify as being connected.\n"},
  {"FullScalarConnectivityOn", PyvtkPolyDataConnectivityFilter_FullScalarConnectivityOn, METH_VARARGS,
   "V.FullScalarConnectivityOn()\nC++: virtual void FullScalarConnectivityOn()\n\nTurn on/off the use of Fully connected scalar connectivity. This\nis off by default. The flag is used only if ScalarConnectivity is\non. If FullScalarConnectivity is ON, all the cell's points must\nlie in the scalar range specified for the cell to qualify as\nbeing connected. If FullScalarConnectivity is OFF, any one of the\ncell's points may lie in the user specified scalar range for the\ncell to qualify as being connected.\n"},
  {"FullScalarConnectivityOff", PyvtkPolyDataConnectivityFilter_FullScalarConnectivityOff, METH_VARARGS,
   "V.FullScalarConnectivityOff()\nC++: virtual void FullScalarConnectivityOff()\n\nTurn on/off the use of Fully connected scalar connectivity. This\nis off by default. The flag is used only if ScalarConnectivity is\non. If FullScalarConnectivity is ON, all the cell's points must\nlie in the scalar range specified for the cell to qualify as\nbeing connected. If FullScalarConnectivity is OFF, any one of the\ncell's points may lie in the user specified scalar range for the\ncell to qualify as being connected.\n"},
  {"SetScalarRange", PyvtkPolyDataConnectivityFilter_SetScalarRange, METH_VARARGS,
   "V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {"GetScalarRange", PyvtkPolyDataConnectivityFilter_GetScalarRange, METH_VARARGS,
   "V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\n"},
  {"SetExtractionMode", PyvtkPolyDataConnectivityFilter_SetExtractionMode, METH_VARARGS,
   "V.SetExtractionMode(int)\nC++: virtual void SetExtractionMode(int _arg)\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionModeMinValue", PyvtkPolyDataConnectivityFilter_GetExtractionModeMinValue, METH_VARARGS,
   "V.GetExtractionModeMinValue() -> int\nC++: virtual int GetExtractionModeMinValue()\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionModeMaxValue", PyvtkPolyDataConnectivityFilter_GetExtractionModeMaxValue, METH_VARARGS,
   "V.GetExtractionModeMaxValue() -> int\nC++: virtual int GetExtractionModeMaxValue()\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionMode", PyvtkPolyDataConnectivityFilter_GetExtractionMode, METH_VARARGS,
   "V.GetExtractionMode() -> int\nC++: virtual int GetExtractionMode()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToPointSeededRegions", PyvtkPolyDataConnectivityFilter_SetExtractionModeToPointSeededRegions, METH_VARARGS,
   "V.SetExtractionModeToPointSeededRegions()\nC++: void SetExtractionModeToPointSeededRegions()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToCellSeededRegions", PyvtkPolyDataConnectivityFilter_SetExtractionModeToCellSeededRegions, METH_VARARGS,
   "V.SetExtractionModeToCellSeededRegions()\nC++: void SetExtractionModeToCellSeededRegions()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToLargestRegion", PyvtkPolyDataConnectivityFilter_SetExtractionModeToLargestRegion, METH_VARARGS,
   "V.SetExtractionModeToLargestRegion()\nC++: void SetExtractionModeToLargestRegion()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToSpecifiedRegions", PyvtkPolyDataConnectivityFilter_SetExtractionModeToSpecifiedRegions, METH_VARARGS,
   "V.SetExtractionModeToSpecifiedRegions()\nC++: void SetExtractionModeToSpecifiedRegions()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToClosestPointRegion", PyvtkPolyDataConnectivityFilter_SetExtractionModeToClosestPointRegion, METH_VARARGS,
   "V.SetExtractionModeToClosestPointRegion()\nC++: void SetExtractionModeToClosestPointRegion()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToAllRegions", PyvtkPolyDataConnectivityFilter_SetExtractionModeToAllRegions, METH_VARARGS,
   "V.SetExtractionModeToAllRegions()\nC++: void SetExtractionModeToAllRegions()\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionModeAsString", PyvtkPolyDataConnectivityFilter_GetExtractionModeAsString, METH_VARARGS,
   "V.GetExtractionModeAsString() -> string\nC++: const char *GetExtractionModeAsString()\n\nControl the extraction of connected surfaces.\n"},
  {"InitializeSeedList", PyvtkPolyDataConnectivityFilter_InitializeSeedList, METH_VARARGS,
   "V.InitializeSeedList()\nC++: void InitializeSeedList()\n\nInitialize list of point ids/cell ids used to seed regions.\n"},
  {"AddSeed", PyvtkPolyDataConnectivityFilter_AddSeed, METH_VARARGS,
   "V.AddSeed(int)\nC++: void AddSeed(int id)\n\nAdd a seed id (point or cell id). Note: ids are 0-offset.\n"},
  {"DeleteSeed", PyvtkPolyDataConnectivityFilter_DeleteSeed, METH_VARARGS,
   "V.DeleteSeed(int)\nC++: void DeleteSeed(int id)\n\nDelete a seed id (point or cell id). Note: ids are 0-offset.\n"},
  {"InitializeSpecifiedRegionList", PyvtkPolyDataConnectivityFilter_InitializeSpecifiedRegionList, METH_VARARGS,
   "V.InitializeSpecifiedRegionList()\nC++: void InitializeSpecifiedRegionList()\n\nInitialize list of region ids to extract.\n"},
  {"AddSpecifiedRegion", PyvtkPolyDataConnectivityFilter_AddSpecifiedRegion, METH_VARARGS,
   "V.AddSpecifiedRegion(int)\nC++: void AddSpecifiedRegion(int id)\n\nAdd a region id to extract. Note: ids are 0-offset.\n"},
  {"DeleteSpecifiedRegion", PyvtkPolyDataConnectivityFilter_DeleteSpecifiedRegion, METH_VARARGS,
   "V.DeleteSpecifiedRegion(int)\nC++: void DeleteSpecifiedRegion(int id)\n\nDelete a region id to extract. Note: ids are 0-offset.\n"},
  {"SetClosestPoint", PyvtkPolyDataConnectivityFilter_SetClosestPoint, METH_VARARGS,
   "V.SetClosestPoint(float, float, float)\nC++: void SetClosestPoint(double, double, double)\nV.SetClosestPoint((float, float, float))\nC++: void SetClosestPoint(double a[3])\n\n"},
  {"GetClosestPoint", PyvtkPolyDataConnectivityFilter_GetClosestPoint, METH_VARARGS,
   "V.GetClosestPoint() -> (float, float, float)\nC++: double *GetClosestPoint()\n\nUse to specify x-y-z point coordinates when extracting the region\nclosest to a specified point.\n"},
  {"GetNumberOfExtractedRegions", PyvtkPolyDataConnectivityFilter_GetNumberOfExtractedRegions, METH_VARARGS,
   "V.GetNumberOfExtractedRegions() -> int\nC++: int GetNumberOfExtractedRegions()\n\nObtain the number of connected regions.\n"},
  {"SetColorRegions", PyvtkPolyDataConnectivityFilter_SetColorRegions, METH_VARARGS,
   "V.SetColorRegions(int)\nC++: virtual void SetColorRegions(vtkTypeBool _arg)\n\nTurn on/off the coloring of connected regions.\n"},
  {"GetColorRegions", PyvtkPolyDataConnectivityFilter_GetColorRegions, METH_VARARGS,
   "V.GetColorRegions() -> int\nC++: virtual vtkTypeBool GetColorRegions()\n\nTurn on/off the coloring of connected regions.\n"},
  {"ColorRegionsOn", PyvtkPolyDataConnectivityFilter_ColorRegionsOn, METH_VARARGS,
   "V.ColorRegionsOn()\nC++: virtual void ColorRegionsOn()\n\nTurn on/off the coloring of connected regions.\n"},
  {"ColorRegionsOff", PyvtkPolyDataConnectivityFilter_ColorRegionsOff, METH_VARARGS,
   "V.ColorRegionsOff()\nC++: virtual void ColorRegionsOff()\n\nTurn on/off the coloring of connected regions.\n"},
  {"SetMarkVisitedPointIds", PyvtkPolyDataConnectivityFilter_SetMarkVisitedPointIds, METH_VARARGS,
   "V.SetMarkVisitedPointIds(int)\nC++: virtual void SetMarkVisitedPointIds(vtkTypeBool _arg)\n\nMark visited point ids ? It may be useful to extract the visited\npoint ids for use by a downstream filter. Default is OFF.\n"},
  {"GetMarkVisitedPointIds", PyvtkPolyDataConnectivityFilter_GetMarkVisitedPointIds, METH_VARARGS,
   "V.GetMarkVisitedPointIds() -> int\nC++: virtual vtkTypeBool GetMarkVisitedPointIds()\n\nMark visited point ids ? It may be useful to extract the visited\npoint ids for use by a downstream filter. Default is OFF.\n"},
  {"MarkVisitedPointIdsOn", PyvtkPolyDataConnectivityFilter_MarkVisitedPointIdsOn, METH_VARARGS,
   "V.MarkVisitedPointIdsOn()\nC++: virtual void MarkVisitedPointIdsOn()\n\nMark visited point ids ? It may be useful to extract the visited\npoint ids for use by a downstream filter. Default is OFF.\n"},
  {"MarkVisitedPointIdsOff", PyvtkPolyDataConnectivityFilter_MarkVisitedPointIdsOff, METH_VARARGS,
   "V.MarkVisitedPointIdsOff()\nC++: virtual void MarkVisitedPointIdsOff()\n\nMark visited point ids ? It may be useful to extract the visited\npoint ids for use by a downstream filter. Default is OFF.\n"},
  {"GetVisitedPointIds", PyvtkPolyDataConnectivityFilter_GetVisitedPointIds, METH_VARARGS,
   "V.GetVisitedPointIds() -> vtkIdList\nC++: virtual vtkIdList *GetVisitedPointIds()\n\nGet the visited point ids. This is valid only if\nMarkVisitedPointIds has been set.\n"},
  {"SetOutputPointsPrecision", PyvtkPolyDataConnectivityFilter_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkPolyDataConnectivityFilter_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolyDataConnectivityFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkPolyDataConnectivityFilter", // tp_name
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
  PyvtkPolyDataConnectivityFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataConnectivityFilter_StaticNew()
{
  return vtkPolyDataConnectivityFilter::New();
}

PyObject *PyvtkPolyDataConnectivityFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolyDataConnectivityFilter_Type, PyvtkPolyDataConnectivityFilter_Methods,
    "vtkPolyDataConnectivityFilter",
 &PyvtkPolyDataConnectivityFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkPolyDataConnectivityFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataConnectivityFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataConnectivityFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataConnectivityFilter", o) != 0)
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

