// python wrapper for vtkConnectedPointsFilter
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
#include "vtkConnectedPointsFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConnectedPointsFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkConnectedPointsFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkConnectedPointsFilter_Doc =
  "vtkConnectedPointsFilter - extract / segment points based on\ngeometric connectivity\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkConnectedPointsFilter is a filter that extracts and/or segments\n"
  "points from a point cloud based on geometric distance measures (e.g.,\n"
  "proximity, normal alignments, etc.) and optional measures such as\n"
  "scalar range. The default operation is to segment the points into\n"
  "\"connected\" regions where the connection is determined by an\n"
  "appropriate distance measure. Each region is given a region id.\n"
  "Optionally, the filter can output the largest connected region of\n"
  "points; a particular region (via id specification); those regions\n"
  "that are seeded using a list of input point ids; or the region of\n"
  "points closest to a specified position.\n\n"
  "The key parameter of this filter is the radius defining a sphere\n"
  "around each point which defines a local neighborhood: any other\n"
  "points in the local neighborhood are assumed connected to the point.\n"
  "Note that the radius is defined in absolute terms.\n\n"
  "Other parameters are used to further qualify what it means to be a\n"
  "neigboring point. For example, scalar range and/or point normals can\n"
  "be used to further constrain the neighborhood. Also the extraction\n"
  "mode defines how the filter operates. By default, all regions are\n"
  "extracted but it is possible to extract particular regions; the\n"
  "region closest to a seed point; seeded regions; or the largest region\n"
  "found while processing. By default, all regions are extracted.\n\n"
  "On output, all points are labeled with a region number. However note\n"
  "that the number of input and output points may not be the same: if\n"
  "not extracting all regions then the output size may be less than the\n"
  "input size.\n\n"
  "@sa\n"
  "vtkPolyDataConnectivityFilter vtkConnectivityFilter\n\n";


static PyObject *
PyvtkConnectedPointsFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConnectedPointsFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConnectedPointsFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConnectedPointsFilter *tempr = vtkConnectedPointsFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConnectedPointsFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConnectedPointsFilter::NewInstance());

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
PyvtkConnectedPointsFilter_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkConnectedPointsFilter::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkConnectedPointsFilter::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkConnectedPointsFilter::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkConnectedPointsFilter::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_SetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

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
      op->vtkConnectedPointsFilter::SetExtractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetExtractionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMinValue() :
      op->vtkConnectedPointsFilter::GetExtractionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetExtractionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMaxValue() :
      op->vtkConnectedPointsFilter::GetExtractionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionMode() :
      op->vtkConnectedPointsFilter::GetExtractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_SetExtractionModeToPointSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToPointSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToPointSeededRegions();
    }
    else
    {
      op->vtkConnectedPointsFilter::SetExtractionModeToPointSeededRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_SetExtractionModeToLargestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLargestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToLargestRegion();
    }
    else
    {
      op->vtkConnectedPointsFilter::SetExtractionModeToLargestRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_SetExtractionModeToSpecifiedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToSpecifiedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToSpecifiedRegions();
    }
    else
    {
      op->vtkConnectedPointsFilter::SetExtractionModeToSpecifiedRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_SetExtractionModeToClosestPointRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToClosestPointRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToClosestPointRegion();
    }
    else
    {
      op->vtkConnectedPointsFilter::SetExtractionModeToClosestPointRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_SetExtractionModeToAllRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToAllRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToAllRegions();
    }
    else
    {
      op->vtkConnectedPointsFilter::SetExtractionModeToAllRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetExtractionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExtractionModeAsString() :
      op->vtkConnectedPointsFilter::GetExtractionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_SetClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

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
      op->vtkConnectedPointsFilter::SetClosestPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConnectedPointsFilter_SetClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

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
      op->vtkConnectedPointsFilter::SetClosestPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConnectedPointsFilter_SetClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkConnectedPointsFilter_SetClosestPoint_s1(self, args);
    case 1:
      return PyvtkConnectedPointsFilter_SetClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClosestPoint");
  return nullptr;
}



static PyObject *
PyvtkConnectedPointsFilter_GetClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetClosestPoint() :
      op->vtkConnectedPointsFilter::GetClosestPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_InitializeSeedList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSeedList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSeedList();
    }
    else
    {
      op->vtkConnectedPointsFilter::InitializeSeedList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_AddSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

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
      op->vtkConnectedPointsFilter::AddSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_DeleteSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

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
      op->vtkConnectedPointsFilter::DeleteSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_InitializeSpecifiedRegionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSpecifiedRegionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSpecifiedRegionList();
    }
    else
    {
      op->vtkConnectedPointsFilter::InitializeSpecifiedRegionList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_AddSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  vtkIdType temp0;
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
      op->vtkConnectedPointsFilter::AddSpecifiedRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_DeleteSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  vtkIdType temp0;
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
      op->vtkConnectedPointsFilter::DeleteSpecifiedRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_SetAlignedNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignedNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlignedNormals(temp0);
    }
    else
    {
      op->vtkConnectedPointsFilter::SetAlignedNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetAlignedNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlignedNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlignedNormals() :
      op->vtkConnectedPointsFilter::GetAlignedNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_AlignedNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlignedNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlignedNormalsOn();
    }
    else
    {
      op->vtkConnectedPointsFilter::AlignedNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_AlignedNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlignedNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlignedNormalsOff();
    }
    else
    {
      op->vtkConnectedPointsFilter::AlignedNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_SetNormalAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalAngle(temp0);
    }
    else
    {
      op->vtkConnectedPointsFilter::SetNormalAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetNormalAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNormalAngleMinValue() :
      op->vtkConnectedPointsFilter::GetNormalAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetNormalAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNormalAngleMaxValue() :
      op->vtkConnectedPointsFilter::GetNormalAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetNormalAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNormalAngle() :
      op->vtkConnectedPointsFilter::GetNormalAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_SetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

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
      op->vtkConnectedPointsFilter::SetScalarConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarConnectivity() :
      op->vtkConnectedPointsFilter::GetScalarConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_ScalarConnectivityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOn();
    }
    else
    {
      op->vtkConnectedPointsFilter::ScalarConnectivityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_ScalarConnectivityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOff();
    }
    else
    {
      op->vtkConnectedPointsFilter::ScalarConnectivityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

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
      op->vtkConnectedPointsFilter::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConnectedPointsFilter_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

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
      op->vtkConnectedPointsFilter::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConnectedPointsFilter_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkConnectedPointsFilter_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkConnectedPointsFilter_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}



static PyObject *
PyvtkConnectedPointsFilter_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkConnectedPointsFilter::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetNumberOfExtractedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfExtractedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfExtractedRegions() :
      op->vtkConnectedPointsFilter::GetNumberOfExtractedRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkConnectedPointsFilter::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectedPointsFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectedPointsFilter *op = static_cast<vtkConnectedPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkConnectedPointsFilter::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkConnectedPointsFilter_Methods[] = {
  {"IsTypeOf", PyvtkConnectedPointsFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConnectedPointsFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConnectedPointsFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkConnectedPointsFilter\nC++: static vtkConnectedPointsFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConnectedPointsFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkConnectedPointsFilter\nC++: vtkConnectedPointsFilter *NewInstance()\n\n"},
  {"SetRadius", PyvtkConnectedPointsFilter_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSet / get the radius variable specifying a local sphere used to\ndefine local point neighborhood.\n"},
  {"GetRadiusMinValue", PyvtkConnectedPointsFilter_GetRadiusMinValue, METH_VARARGS,
   "V.GetRadiusMinValue() -> float\nC++: virtual double GetRadiusMinValue()\n\nSet / get the radius variable specifying a local sphere used to\ndefine local point neighborhood.\n"},
  {"GetRadiusMaxValue", PyvtkConnectedPointsFilter_GetRadiusMaxValue, METH_VARARGS,
   "V.GetRadiusMaxValue() -> float\nC++: virtual double GetRadiusMaxValue()\n\nSet / get the radius variable specifying a local sphere used to\ndefine local point neighborhood.\n"},
  {"GetRadius", PyvtkConnectedPointsFilter_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSet / get the radius variable specifying a local sphere used to\ndefine local point neighborhood.\n"},
  {"SetExtractionMode", PyvtkConnectedPointsFilter_SetExtractionMode, METH_VARARGS,
   "V.SetExtractionMode(int)\nC++: virtual void SetExtractionMode(int _arg)\n\nControl the extraction of connected regions.\n"},
  {"GetExtractionModeMinValue", PyvtkConnectedPointsFilter_GetExtractionModeMinValue, METH_VARARGS,
   "V.GetExtractionModeMinValue() -> int\nC++: virtual int GetExtractionModeMinValue()\n\nControl the extraction of connected regions.\n"},
  {"GetExtractionModeMaxValue", PyvtkConnectedPointsFilter_GetExtractionModeMaxValue, METH_VARARGS,
   "V.GetExtractionModeMaxValue() -> int\nC++: virtual int GetExtractionModeMaxValue()\n\nControl the extraction of connected regions.\n"},
  {"GetExtractionMode", PyvtkConnectedPointsFilter_GetExtractionMode, METH_VARARGS,
   "V.GetExtractionMode() -> int\nC++: virtual int GetExtractionMode()\n\nControl the extraction of connected regions.\n"},
  {"SetExtractionModeToPointSeededRegions", PyvtkConnectedPointsFilter_SetExtractionModeToPointSeededRegions, METH_VARARGS,
   "V.SetExtractionModeToPointSeededRegions()\nC++: void SetExtractionModeToPointSeededRegions()\n\nControl the extraction of connected regions.\n"},
  {"SetExtractionModeToLargestRegion", PyvtkConnectedPointsFilter_SetExtractionModeToLargestRegion, METH_VARARGS,
   "V.SetExtractionModeToLargestRegion()\nC++: void SetExtractionModeToLargestRegion()\n\nControl the extraction of connected regions.\n"},
  {"SetExtractionModeToSpecifiedRegions", PyvtkConnectedPointsFilter_SetExtractionModeToSpecifiedRegions, METH_VARARGS,
   "V.SetExtractionModeToSpecifiedRegions()\nC++: void SetExtractionModeToSpecifiedRegions()\n\nControl the extraction of connected regions.\n"},
  {"SetExtractionModeToClosestPointRegion", PyvtkConnectedPointsFilter_SetExtractionModeToClosestPointRegion, METH_VARARGS,
   "V.SetExtractionModeToClosestPointRegion()\nC++: void SetExtractionModeToClosestPointRegion()\n\nControl the extraction of connected regions.\n"},
  {"SetExtractionModeToAllRegions", PyvtkConnectedPointsFilter_SetExtractionModeToAllRegions, METH_VARARGS,
   "V.SetExtractionModeToAllRegions()\nC++: void SetExtractionModeToAllRegions()\n\nControl the extraction of connected regions.\n"},
  {"GetExtractionModeAsString", PyvtkConnectedPointsFilter_GetExtractionModeAsString, METH_VARARGS,
   "V.GetExtractionModeAsString() -> string\nC++: const char *GetExtractionModeAsString()\n\nControl the extraction of connected regions.\n"},
  {"SetClosestPoint", PyvtkConnectedPointsFilter_SetClosestPoint, METH_VARARGS,
   "V.SetClosestPoint(float, float, float)\nC++: void SetClosestPoint(double, double, double)\nV.SetClosestPoint((float, float, float))\nC++: void SetClosestPoint(double a[3])\n\n"},
  {"GetClosestPoint", PyvtkConnectedPointsFilter_GetClosestPoint, METH_VARARGS,
   "V.GetClosestPoint() -> (float, float, float)\nC++: double *GetClosestPoint()\n\nUse to specify x-y-z point coordinates when extracting the region\nclosest to a specified point.\n"},
  {"InitializeSeedList", PyvtkConnectedPointsFilter_InitializeSeedList, METH_VARARGS,
   "V.InitializeSeedList()\nC++: void InitializeSeedList()\n\nInitialize list of point ids ids used to seed regions.\n"},
  {"AddSeed", PyvtkConnectedPointsFilter_AddSeed, METH_VARARGS,
   "V.AddSeed(int)\nC++: void AddSeed(vtkIdType id)\n\nAdd a non-negative point seed id. Note: ids are 0-offset.\n"},
  {"DeleteSeed", PyvtkConnectedPointsFilter_DeleteSeed, METH_VARARGS,
   "V.DeleteSeed(int)\nC++: void DeleteSeed(vtkIdType id)\n\nDelete a point seed id. Note: ids are 0-offset.\n"},
  {"InitializeSpecifiedRegionList", PyvtkConnectedPointsFilter_InitializeSpecifiedRegionList, METH_VARARGS,
   "V.InitializeSpecifiedRegionList()\nC++: void InitializeSpecifiedRegionList()\n\nInitialize list of region ids to extract.\n"},
  {"AddSpecifiedRegion", PyvtkConnectedPointsFilter_AddSpecifiedRegion, METH_VARARGS,
   "V.AddSpecifiedRegion(int)\nC++: void AddSpecifiedRegion(vtkIdType id)\n\nAdd a non-negative region id to extract. Note: ids are 0-offset.\n"},
  {"DeleteSpecifiedRegion", PyvtkConnectedPointsFilter_DeleteSpecifiedRegion, METH_VARARGS,
   "V.DeleteSpecifiedRegion(int)\nC++: void DeleteSpecifiedRegion(vtkIdType id)\n\nDelete a region id to extract. Note: ids are 0-offset.\n"},
  {"SetAlignedNormals", PyvtkConnectedPointsFilter_SetAlignedNormals, METH_VARARGS,
   "V.SetAlignedNormals(int)\nC++: virtual void SetAlignedNormals(int _arg)\n\nTurn on/off connectivity based on point normal consistency. If\non, and point normals are defined, points are connected only if\nthey satisfy other criterion (e.g., geometric proximity, scalar\nconnectivity, etc.) AND the angle between normals is no greater\nthan NormalAngle;\n"},
  {"GetAlignedNormals", PyvtkConnectedPointsFilter_GetAlignedNormals, METH_VARARGS,
   "V.GetAlignedNormals() -> int\nC++: virtual int GetAlignedNormals()\n\nTurn on/off connectivity based on point normal consistency. If\non, and point normals are defined, points are connected only if\nthey satisfy other criterion (e.g., geometric proximity, scalar\nconnectivity, etc.) AND the angle between normals is no greater\nthan NormalAngle;\n"},
  {"AlignedNormalsOn", PyvtkConnectedPointsFilter_AlignedNormalsOn, METH_VARARGS,
   "V.AlignedNormalsOn()\nC++: virtual void AlignedNormalsOn()\n\nTurn on/off connectivity based on point normal consistency. If\non, and point normals are defined, points are connected only if\nthey satisfy other criterion (e.g., geometric proximity, scalar\nconnectivity, etc.) AND the angle between normals is no greater\nthan NormalAngle;\n"},
  {"AlignedNormalsOff", PyvtkConnectedPointsFilter_AlignedNormalsOff, METH_VARARGS,
   "V.AlignedNormalsOff()\nC++: virtual void AlignedNormalsOff()\n\nTurn on/off connectivity based on point normal consistency. If\non, and point normals are defined, points are connected only if\nthey satisfy other criterion (e.g., geometric proximity, scalar\nconnectivity, etc.) AND the angle between normals is no greater\nthan NormalAngle;\n"},
  {"SetNormalAngle", PyvtkConnectedPointsFilter_SetNormalAngle, METH_VARARGS,
   "V.SetNormalAngle(float)\nC++: virtual void SetNormalAngle(double _arg)\n\nSpecify a threshold for normal angles. If AlignedNormalsOn is\nset, then points are connected if the angle between their normals\nis within this angle threshold (expressed in degress).\n"},
  {"GetNormalAngleMinValue", PyvtkConnectedPointsFilter_GetNormalAngleMinValue, METH_VARARGS,
   "V.GetNormalAngleMinValue() -> float\nC++: virtual double GetNormalAngleMinValue()\n\nSpecify a threshold for normal angles. If AlignedNormalsOn is\nset, then points are connected if the angle between their normals\nis within this angle threshold (expressed in degress).\n"},
  {"GetNormalAngleMaxValue", PyvtkConnectedPointsFilter_GetNormalAngleMaxValue, METH_VARARGS,
   "V.GetNormalAngleMaxValue() -> float\nC++: virtual double GetNormalAngleMaxValue()\n\nSpecify a threshold for normal angles. If AlignedNormalsOn is\nset, then points are connected if the angle between their normals\nis within this angle threshold (expressed in degress).\n"},
  {"GetNormalAngle", PyvtkConnectedPointsFilter_GetNormalAngle, METH_VARARGS,
   "V.GetNormalAngle() -> float\nC++: virtual double GetNormalAngle()\n\nSpecify a threshold for normal angles. If AlignedNormalsOn is\nset, then points are connected if the angle between their normals\nis within this angle threshold (expressed in degress).\n"},
  {"SetScalarConnectivity", PyvtkConnectedPointsFilter_SetScalarConnectivity, METH_VARARGS,
   "V.SetScalarConnectivity(int)\nC++: virtual void SetScalarConnectivity(int _arg)\n\nTurn on/off connectivity based on scalar value. If on, points are\nconnected only if they satisfy the various geometric criterion\nAND one of the points scalar values falls in the scalar range\nspecified.\n"},
  {"GetScalarConnectivity", PyvtkConnectedPointsFilter_GetScalarConnectivity, METH_VARARGS,
   "V.GetScalarConnectivity() -> int\nC++: virtual int GetScalarConnectivity()\n\nTurn on/off connectivity based on scalar value. If on, points are\nconnected only if they satisfy the various geometric criterion\nAND one of the points scalar values falls in the scalar range\nspecified.\n"},
  {"ScalarConnectivityOn", PyvtkConnectedPointsFilter_ScalarConnectivityOn, METH_VARARGS,
   "V.ScalarConnectivityOn()\nC++: virtual void ScalarConnectivityOn()\n\nTurn on/off connectivity based on scalar value. If on, points are\nconnected only if they satisfy the various geometric criterion\nAND one of the points scalar values falls in the scalar range\nspecified.\n"},
  {"ScalarConnectivityOff", PyvtkConnectedPointsFilter_ScalarConnectivityOff, METH_VARARGS,
   "V.ScalarConnectivityOff()\nC++: virtual void ScalarConnectivityOff()\n\nTurn on/off connectivity based on scalar value. If on, points are\nconnected only if they satisfy the various geometric criterion\nAND one of the points scalar values falls in the scalar range\nspecified.\n"},
  {"SetScalarRange", PyvtkConnectedPointsFilter_SetScalarRange, METH_VARARGS,
   "V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {"GetScalarRange", PyvtkConnectedPointsFilter_GetScalarRange, METH_VARARGS,
   "V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\n"},
  {"GetNumberOfExtractedRegions", PyvtkConnectedPointsFilter_GetNumberOfExtractedRegions, METH_VARARGS,
   "V.GetNumberOfExtractedRegions() -> int\nC++: int GetNumberOfExtractedRegions()\n\nObtain the number of connected regions. The return value is valid\nonly after the filter has executed.\n"},
  {"SetLocator", PyvtkConnectedPointsFilter_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkAbstractPointLocator)\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\naround a sample point.\n"},
  {"GetLocator", PyvtkConnectedPointsFilter_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\naround a sample point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkConnectedPointsFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkConnectedPointsFilter", // tp_name
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
  PyvtkConnectedPointsFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConnectedPointsFilter_StaticNew()
{
  return vtkConnectedPointsFilter::New();
}

PyObject *PyvtkConnectedPointsFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkConnectedPointsFilter_Type, PyvtkConnectedPointsFilter_Methods,
    "vtkConnectedPointsFilter",
 &PyvtkConnectedPointsFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkConnectedPointsFilter_Type;

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

void PyVTKAddFile_vtkConnectedPointsFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConnectedPointsFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConnectedPointsFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_EXTRACT_POINT_SEEDED_REGIONS", 1 },
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

