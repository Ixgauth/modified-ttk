// python wrapper for vtkEuclideanClusterExtraction
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
#include "vtkEuclideanClusterExtraction.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEuclideanClusterExtraction(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEuclideanClusterExtraction_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkEuclideanClusterExtraction_Doc =
  "vtkEuclideanClusterExtraction - perform segmentation based on\ngeometric proximity and optional scalar threshold\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkEuclideanClusterExtraction is a filter that extracts points that\n"
  "are in close geometric proximity, and optionally satisfies a scalar\n"
  "threshold criterion. (Points extracted in this way are referred to as\n"
  "clusters.) The filter works in one of five ways: 1) extract the\n"
  "largest cluster in the dataset; 2) extract specified cluster\n"
  "number(s); 3) extract all clusters containing specified point ids; 4)\n"
  "extract the cluster closest to a specified point; or 5) extract all\n"
  "clusters (which can be used for coloring the clusters).\n\n"
  "Note that geometric proximity is defined by setting the Radius\n"
  "instance variable. This variable defines a local sphere around each\n"
  "point; other points contained in this sphere are considered\n"
  "\"connected\" to the point. Setting this number too large will connect\n"
  "clusters that should not be; setting it too small will fragment the\n"
  "point cloud into myriad clusters. To accelerate the geometric\n"
  "proximity operations, a point locator may be specified. By default, a\n"
  "vtkStaticPointLocator is used, but any vtkAbstractPointLocator may be\n"
  "specified.\n\n"
  "The behavior of vtkEuclideanClusterExtraction can be modified by\n"
  "turning on the boolean ivar ScalarConnectivity. If this flag is on,\n"
  "the clustering algorithm is modified so that points are considered\n"
  "part of a cluster if they satisfy both the geometric proximity\n"
  "measure, and the points scalar values falls into the scalar range\n"
  "specified. This use of ScalarConnectivity is particularly useful for\n"
  "data with intensity or color information, serving as a simple \"connected\n"
  "segmentation\" algorithm. For example, by using a seed point in a\n"
  "known cluster, clustering will pull out all points \"representing\" the\n"
  "local structure.\n\n"
  "@sa\n"
  "vtkConnectivityFilter vtkPolyDataConnectivityFilter\n\n";


static PyObject *
PyvtkEuclideanClusterExtraction_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEuclideanClusterExtraction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEuclideanClusterExtraction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEuclideanClusterExtraction *tempr = vtkEuclideanClusterExtraction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEuclideanClusterExtraction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEuclideanClusterExtraction::NewInstance());

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
PyvtkEuclideanClusterExtraction_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

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
      op->vtkEuclideanClusterExtraction::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkEuclideanClusterExtraction::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkEuclideanClusterExtraction::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkEuclideanClusterExtraction::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  bool temp0 = false;
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
      op->vtkEuclideanClusterExtraction::SetScalarConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalarConnectivity() :
      op->vtkEuclideanClusterExtraction::GetScalarConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_ScalarConnectivityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOn();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::ScalarConnectivityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_ScalarConnectivityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOff();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::ScalarConnectivityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

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
      op->vtkEuclideanClusterExtraction::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEuclideanClusterExtraction_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

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
      op->vtkEuclideanClusterExtraction::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEuclideanClusterExtraction_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkEuclideanClusterExtraction_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkEuclideanClusterExtraction_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}



static PyObject *
PyvtkEuclideanClusterExtraction_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkEuclideanClusterExtraction::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

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
      op->vtkEuclideanClusterExtraction::SetExtractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetExtractionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMinValue() :
      op->vtkEuclideanClusterExtraction::GetExtractionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetExtractionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMaxValue() :
      op->vtkEuclideanClusterExtraction::GetExtractionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionMode() :
      op->vtkEuclideanClusterExtraction::GetExtractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetExtractionModeToPointSeededClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToPointSeededClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToPointSeededClusters();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetExtractionModeToPointSeededClusters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetExtractionModeToLargestCluster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLargestCluster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToLargestCluster();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetExtractionModeToLargestCluster();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetExtractionModeToSpecifiedClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToSpecifiedClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToSpecifiedClusters();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetExtractionModeToSpecifiedClusters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetExtractionModeToClosestPointCluster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToClosestPointCluster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToClosestPointCluster();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetExtractionModeToClosestPointCluster();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetExtractionModeToAllClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToAllClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToAllClusters();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetExtractionModeToAllClusters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetExtractionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExtractionModeAsString() :
      op->vtkEuclideanClusterExtraction::GetExtractionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_InitializeSeedList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSeedList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSeedList();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::InitializeSeedList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_AddSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

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
      op->vtkEuclideanClusterExtraction::AddSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_DeleteSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

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
      op->vtkEuclideanClusterExtraction::DeleteSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_InitializeSpecifiedClusterList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSpecifiedClusterList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSpecifiedClusterList();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::InitializeSpecifiedClusterList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_AddSpecifiedCluster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSpecifiedCluster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddSpecifiedCluster(temp0);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::AddSpecifiedCluster(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_DeleteSpecifiedCluster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSpecifiedCluster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteSpecifiedCluster(temp0);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::DeleteSpecifiedCluster(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

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
      op->vtkEuclideanClusterExtraction::SetClosestPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEuclideanClusterExtraction_SetClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

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
      op->vtkEuclideanClusterExtraction::SetClosestPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEuclideanClusterExtraction_SetClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkEuclideanClusterExtraction_SetClosestPoint_s1(self, args);
    case 1:
      return PyvtkEuclideanClusterExtraction_SetClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClosestPoint");
  return nullptr;
}



static PyObject *
PyvtkEuclideanClusterExtraction_GetClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetClosestPoint() :
      op->vtkEuclideanClusterExtraction::GetClosestPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetNumberOfExtractedClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfExtractedClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfExtractedClusters() :
      op->vtkEuclideanClusterExtraction::GetNumberOfExtractedClusters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetColorClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorClusters(temp0);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetColorClusters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetColorClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorClusters() :
      op->vtkEuclideanClusterExtraction::GetColorClusters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_ColorClustersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorClustersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorClustersOn();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::ColorClustersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_ColorClustersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorClustersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorClustersOff();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::ColorClustersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

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
      op->vtkEuclideanClusterExtraction::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkEuclideanClusterExtraction::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEuclideanClusterExtraction_Methods[] = {
  {"IsTypeOf", PyvtkEuclideanClusterExtraction_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEuclideanClusterExtraction_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEuclideanClusterExtraction_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEuclideanClusterExtraction\nC++: static vtkEuclideanClusterExtraction *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEuclideanClusterExtraction_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEuclideanClusterExtraction\nC++: vtkEuclideanClusterExtraction *NewInstance()\n\n"},
  {"SetRadius", PyvtkEuclideanClusterExtraction_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSpecify the local search radius.\n"},
  {"GetRadiusMinValue", PyvtkEuclideanClusterExtraction_GetRadiusMinValue, METH_VARARGS,
   "V.GetRadiusMinValue() -> float\nC++: virtual double GetRadiusMinValue()\n\nSpecify the local search radius.\n"},
  {"GetRadiusMaxValue", PyvtkEuclideanClusterExtraction_GetRadiusMaxValue, METH_VARARGS,
   "V.GetRadiusMaxValue() -> float\nC++: virtual double GetRadiusMaxValue()\n\nSpecify the local search radius.\n"},
  {"GetRadius", PyvtkEuclideanClusterExtraction_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSpecify the local search radius.\n"},
  {"SetScalarConnectivity", PyvtkEuclideanClusterExtraction_SetScalarConnectivity, METH_VARARGS,
   "V.SetScalarConnectivity(bool)\nC++: virtual void SetScalarConnectivity(bool _arg)\n\nTurn on/off connectivity based on scalar value. If on, points are\nconnected only if the are proximal AND the scalar value of a\ncandidate point falls in the scalar range specified. Of course\ninput point scalar data must be provided.\n"},
  {"GetScalarConnectivity", PyvtkEuclideanClusterExtraction_GetScalarConnectivity, METH_VARARGS,
   "V.GetScalarConnectivity() -> bool\nC++: virtual bool GetScalarConnectivity()\n\nTurn on/off connectivity based on scalar value. If on, points are\nconnected only if the are proximal AND the scalar value of a\ncandidate point falls in the scalar range specified. Of course\ninput point scalar data must be provided.\n"},
  {"ScalarConnectivityOn", PyvtkEuclideanClusterExtraction_ScalarConnectivityOn, METH_VARARGS,
   "V.ScalarConnectivityOn()\nC++: virtual void ScalarConnectivityOn()\n\nTurn on/off connectivity based on scalar value. If on, points are\nconnected only if the are proximal AND the scalar value of a\ncandidate point falls in the scalar range specified. Of course\ninput point scalar data must be provided.\n"},
  {"ScalarConnectivityOff", PyvtkEuclideanClusterExtraction_ScalarConnectivityOff, METH_VARARGS,
   "V.ScalarConnectivityOff()\nC++: virtual void ScalarConnectivityOff()\n\nTurn on/off connectivity based on scalar value. If on, points are\nconnected only if the are proximal AND the scalar value of a\ncandidate point falls in the scalar range specified. Of course\ninput point scalar data must be provided.\n"},
  {"SetScalarRange", PyvtkEuclideanClusterExtraction_SetScalarRange, METH_VARARGS,
   "V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {"GetScalarRange", PyvtkEuclideanClusterExtraction_GetScalarRange, METH_VARARGS,
   "V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\n"},
  {"SetExtractionMode", PyvtkEuclideanClusterExtraction_SetExtractionMode, METH_VARARGS,
   "V.SetExtractionMode(int)\nC++: virtual void SetExtractionMode(int _arg)\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionModeMinValue", PyvtkEuclideanClusterExtraction_GetExtractionModeMinValue, METH_VARARGS,
   "V.GetExtractionModeMinValue() -> int\nC++: virtual int GetExtractionModeMinValue()\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionModeMaxValue", PyvtkEuclideanClusterExtraction_GetExtractionModeMaxValue, METH_VARARGS,
   "V.GetExtractionModeMaxValue() -> int\nC++: virtual int GetExtractionModeMaxValue()\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionMode", PyvtkEuclideanClusterExtraction_GetExtractionMode, METH_VARARGS,
   "V.GetExtractionMode() -> int\nC++: virtual int GetExtractionMode()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToPointSeededClusters", PyvtkEuclideanClusterExtraction_SetExtractionModeToPointSeededClusters, METH_VARARGS,
   "V.SetExtractionModeToPointSeededClusters()\nC++: void SetExtractionModeToPointSeededClusters()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToLargestCluster", PyvtkEuclideanClusterExtraction_SetExtractionModeToLargestCluster, METH_VARARGS,
   "V.SetExtractionModeToLargestCluster()\nC++: void SetExtractionModeToLargestCluster()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToSpecifiedClusters", PyvtkEuclideanClusterExtraction_SetExtractionModeToSpecifiedClusters, METH_VARARGS,
   "V.SetExtractionModeToSpecifiedClusters()\nC++: void SetExtractionModeToSpecifiedClusters()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToClosestPointCluster", PyvtkEuclideanClusterExtraction_SetExtractionModeToClosestPointCluster, METH_VARARGS,
   "V.SetExtractionModeToClosestPointCluster()\nC++: void SetExtractionModeToClosestPointCluster()\n\nControl the extraction of connected surfaces.\n"},
  {"SetExtractionModeToAllClusters", PyvtkEuclideanClusterExtraction_SetExtractionModeToAllClusters, METH_VARARGS,
   "V.SetExtractionModeToAllClusters()\nC++: void SetExtractionModeToAllClusters()\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionModeAsString", PyvtkEuclideanClusterExtraction_GetExtractionModeAsString, METH_VARARGS,
   "V.GetExtractionModeAsString() -> string\nC++: const char *GetExtractionModeAsString()\n\nControl the extraction of connected surfaces.\n"},
  {"InitializeSeedList", PyvtkEuclideanClusterExtraction_InitializeSeedList, METH_VARARGS,
   "V.InitializeSeedList()\nC++: void InitializeSeedList()\n\nInitialize the list of point ids used to seed clusters.\n"},
  {"AddSeed", PyvtkEuclideanClusterExtraction_AddSeed, METH_VARARGS,
   "V.AddSeed(int)\nC++: void AddSeed(vtkIdType id)\n\nAdd a seed id (point id). Note: ids are 0-offset.\n"},
  {"DeleteSeed", PyvtkEuclideanClusterExtraction_DeleteSeed, METH_VARARGS,
   "V.DeleteSeed(int)\nC++: void DeleteSeed(vtkIdType id)\n\nDelete a seed id.a\n"},
  {"InitializeSpecifiedClusterList", PyvtkEuclideanClusterExtraction_InitializeSpecifiedClusterList, METH_VARARGS,
   "V.InitializeSpecifiedClusterList()\nC++: void InitializeSpecifiedClusterList()\n\nInitialize the list of cluster ids to extract.\n"},
  {"AddSpecifiedCluster", PyvtkEuclideanClusterExtraction_AddSpecifiedCluster, METH_VARARGS,
   "V.AddSpecifiedCluster(int)\nC++: void AddSpecifiedCluster(int id)\n\nAdd a cluster id to extract. Note: ids are 0-offset.\n"},
  {"DeleteSpecifiedCluster", PyvtkEuclideanClusterExtraction_DeleteSpecifiedCluster, METH_VARARGS,
   "V.DeleteSpecifiedCluster(int)\nC++: void DeleteSpecifiedCluster(int id)\n\nDelete a cluster id to extract.\n"},
  {"SetClosestPoint", PyvtkEuclideanClusterExtraction_SetClosestPoint, METH_VARARGS,
   "V.SetClosestPoint(float, float, float)\nC++: void SetClosestPoint(double, double, double)\nV.SetClosestPoint((float, float, float))\nC++: void SetClosestPoint(double a[3])\n\n"},
  {"GetClosestPoint", PyvtkEuclideanClusterExtraction_GetClosestPoint, METH_VARARGS,
   "V.GetClosestPoint() -> (float, float, float)\nC++: double *GetClosestPoint()\n\nUsed to specify the x-y-z point coordinates when extracting the\ncluster closest to a specified point.\n"},
  {"GetNumberOfExtractedClusters", PyvtkEuclideanClusterExtraction_GetNumberOfExtractedClusters, METH_VARARGS,
   "V.GetNumberOfExtractedClusters() -> int\nC++: int GetNumberOfExtractedClusters()\n\nObtain the number of connected clusters. This value is valid only\nafter filter execution.\n"},
  {"SetColorClusters", PyvtkEuclideanClusterExtraction_SetColorClusters, METH_VARARGS,
   "V.SetColorClusters(bool)\nC++: virtual void SetColorClusters(bool _arg)\n\nTurn on/off the coloring of connected clusters.\n"},
  {"GetColorClusters", PyvtkEuclideanClusterExtraction_GetColorClusters, METH_VARARGS,
   "V.GetColorClusters() -> bool\nC++: virtual bool GetColorClusters()\n\nTurn on/off the coloring of connected clusters.\n"},
  {"ColorClustersOn", PyvtkEuclideanClusterExtraction_ColorClustersOn, METH_VARARGS,
   "V.ColorClustersOn()\nC++: virtual void ColorClustersOn()\n\nTurn on/off the coloring of connected clusters.\n"},
  {"ColorClustersOff", PyvtkEuclideanClusterExtraction_ColorClustersOff, METH_VARARGS,
   "V.ColorClustersOff()\nC++: virtual void ColorClustersOff()\n\nTurn on/off the coloring of connected clusters.\n"},
  {"SetLocator", PyvtkEuclideanClusterExtraction_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkAbstractPointLocator)\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient proximity searches near a\nspecified interpolation position.\n"},
  {"GetLocator", PyvtkEuclideanClusterExtraction_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient proximity searches near a\nspecified interpolation position.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEuclideanClusterExtraction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkEuclideanClusterExtraction", // tp_name
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
  PyvtkEuclideanClusterExtraction_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEuclideanClusterExtraction_StaticNew()
{
  return vtkEuclideanClusterExtraction::New();
}

PyObject *PyvtkEuclideanClusterExtraction_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEuclideanClusterExtraction_Type, PyvtkEuclideanClusterExtraction_Methods,
    "vtkEuclideanClusterExtraction",
 &PyvtkEuclideanClusterExtraction_StaticNew);

  PyTypeObject *pytype = &PyvtkEuclideanClusterExtraction_Type;

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

void PyVTKAddFile_vtkEuclideanClusterExtraction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEuclideanClusterExtraction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEuclideanClusterExtraction", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_EXTRACT_POINT_SEEDED_CLUSTERS", 1 },
        { "VTK_EXTRACT_SPECIFIED_CLUSTERS", 2 },
        { "VTK_EXTRACT_LARGEST_CLUSTER", 3 },
        { "VTK_EXTRACT_ALL_CLUSTERS", 4 },
        { "VTK_EXTRACT_CLOSEST_POINT_CLUSTER", 5 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

