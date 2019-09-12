// python wrapper for vtkIncrementalOctreePointLocator
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
#include "vtkIncrementalOctreePointLocator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIncrementalOctreePointLocator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkIncrementalOctreePointLocator_ClassNew(); }

#ifndef DECLARED_PyvtkIncrementalPointLocator_ClassNew
extern "C" { PyObject *PyvtkIncrementalPointLocator_ClassNew(); }
#define DECLARED_PyvtkIncrementalPointLocator_ClassNew
#endif

static const char *PyvtkIncrementalOctreePointLocator_Doc =
  "vtkIncrementalOctreePointLocator - Incremental octree in support\n of both point location and point insertion.\n\n"
  "Superclass: vtkIncrementalPointLocator\n\n"
  "As opposed to the uniform bin-based search structure (adopted in\n"
  "class\n"
  " vtkPointLocator) with a fixed spatial resolution, an octree\n"
  "mechanism\n"
  " employs a hierarchy of tree-like sub-division of the 3D data domain.\n"
  "Thus\n"
  " it enables data-aware multi-resolution and accordingly accelerated\n"
  "point\n"
  " location as well as insertion, particularly when handling a\n"
  "radically\n"
  " imbalanced layout of points as not uncommon in datasets defined on\n"
  " adaptive meshes. Compared to a static point locator supporting pure\n"
  " location functionalities through some search structure established\n"
  "from\n"
  " a fixed set of points, an incremental point locator allows for, in\n"
  "addition,\n"
  " point insertion capabilities, with the search structure maintaining\n"
  "a\n"
  " dynamically increasing number of points.\n"
  " Class vtkIncrementalOctreePointLocator is an octree-based\n"
  "accelerated\n"
  " implementation of the functionalities of the uniform bin-based\n"
  "incremental\n"
  " point locator vtkPointLocator. For point location, an octree is\n"
  "built by\n"
  " accessing a vtkDataSet, specifically a vtkPointSet. For point\n"
  "insertion,\n"
  " an empty octree is inited and then incrementally populated as points\n"
  "are\n"
  " inserted. Three increasingly complex point insertion modes, i.e.,\n"
  "direct\n"
  " check-free insertion, zero tolerance insertion, and non-zero\n"
  "tolerance\n"
  " insertion, are supported. In fact, the octree used in the point\n"
  "location\n"
  " mode is actually constructed via direct check-free point insertion.\n"
  "This\n"
  " class also provides a polygonal representation of the octree\n"
  "boundary.\n\n"
  "@sa\n"
  " vtkAbstractPointLocator, vtkIncrementalPointLocator,\n"
  "vtkPointLocator,\n"
  " vtkMergePoints\n\n";


static PyObject *
PyvtkIncrementalOctreePointLocator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIncrementalOctreePointLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIncrementalOctreePointLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIncrementalOctreePointLocator *tempr = vtkIncrementalOctreePointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalOctreePointLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIncrementalOctreePointLocator::NewInstance());

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
PyvtkIncrementalOctreePointLocator_SetMaxPointsPerLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxPointsPerLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxPointsPerLeaf(temp0);
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::SetMaxPointsPerLeaf(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GetMaxPointsPerLeafMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPointsPerLeafMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxPointsPerLeafMinValue() :
      op->vtkIncrementalOctreePointLocator::GetMaxPointsPerLeafMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GetMaxPointsPerLeafMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPointsPerLeafMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxPointsPerLeafMaxValue() :
      op->vtkIncrementalOctreePointLocator::GetMaxPointsPerLeafMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GetMaxPointsPerLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPointsPerLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxPointsPerLeaf() :
      op->vtkIncrementalOctreePointLocator::GetMaxPointsPerLeaf());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_SetBuildCubicOctree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBuildCubicOctree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBuildCubicOctree(temp0);
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::SetBuildCubicOctree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GetBuildCubicOctree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildCubicOctree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBuildCubicOctree() :
      op->vtkIncrementalOctreePointLocator::GetBuildCubicOctree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_BuildCubicOctreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildCubicOctreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildCubicOctreeOn();
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::BuildCubicOctreeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_BuildCubicOctreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildCubicOctreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildCubicOctreeOff();
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::BuildCubicOctreeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GetLocatorPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocatorPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetLocatorPoints() :
      op->vtkIncrementalOctreePointLocator::GetLocatorPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeSearchStructure();
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::FreeSearchStructure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::GetBounds(temp0);
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
PyvtkIncrementalOctreePointLocator_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkIncrementalOctreePointLocator::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkIncrementalOctreePointLocator_GetBounds_s1(self, args);
    case 0:
      return PyvtkIncrementalOctreePointLocator_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkIncrementalOctreePointLocator_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkIncrementalOctreePointLocator::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestInsertedPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestInsertedPoint(temp0) :
      op->vtkIncrementalOctreePointLocator::FindClosestInsertedPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GenerateRepresentation(temp0, temp1);
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::GenerateRepresentation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLocator();
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::BuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0) :
      op->vtkIncrementalOctreePointLocator::FindClosestPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0, temp1, temp2) :
      op->vtkIncrementalOctreePointLocator::FindClosestPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0, temp1) :
      op->vtkIncrementalOctreePointLocator::FindClosestPoint(temp0, temp1));

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
PyvtkIncrementalOctreePointLocator_FindClosestPoint_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0, temp1, temp2, temp3) :
      op->vtkIncrementalOctreePointLocator::FindClosestPoint(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkIncrementalOctreePointLocator_FindClosestPoint_s1(self, args);
    case 3:
      return PyvtkIncrementalOctreePointLocator_FindClosestPoint_s2(self, args);
    case 2:
      return PyvtkIncrementalOctreePointLocator_FindClosestPoint_s3(self, args);
    case 4:
      return PyvtkIncrementalOctreePointLocator_FindClosestPoint_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return nullptr;
}



static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPointWithinRadius(temp0, temp1, temp2) :
      op->vtkIncrementalOctreePointLocator::FindClosestPointWithinRadius(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestPointWithinSquaredRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinSquaredRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPointWithinSquaredRadius(temp0, temp1, temp2) :
      op->vtkIncrementalOctreePointLocator::FindClosestPointWithinSquaredRadius(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_FindPointsWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->FindPointsWithinRadius(temp0, temp1, temp2);
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::FindPointsWithinRadius(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_FindPointsWithinSquaredRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinSquaredRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->FindPointsWithinSquaredRadius(temp0, temp1, temp2);
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::FindPointsWithinSquaredRadius(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestNPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->FindClosestNPoints(temp0, temp1, temp2);
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::FindClosestNPoints(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_InitPointInsertion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
  {
    int tempr = (ap.IsBound() ?
      op->InitPointInsertion(temp0, temp1) :
      op->vtkIncrementalOctreePointLocator::InitPointInsertion(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_InitPointInsertion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->InitPointInsertion(temp0, temp1, temp2) :
      op->vtkIncrementalOctreePointLocator::InitPointInsertion(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_InitPointInsertion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkIncrementalOctreePointLocator_InitPointInsertion_s1(self, args);
    case 3:
      return PyvtkIncrementalOctreePointLocator_InitPointInsertion_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InitPointInsertion");
  return nullptr;
}



static PyObject *
PyvtkIncrementalOctreePointLocator_IsInsertedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->IsInsertedPoint(temp0) :
      op->vtkIncrementalOctreePointLocator::IsInsertedPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_IsInsertedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->IsInsertedPoint(temp0, temp1, temp2) :
      op->vtkIncrementalOctreePointLocator::IsInsertedPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_IsInsertedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkIncrementalOctreePointLocator_IsInsertedPoint_s1(self, args);
    case 3:
      return PyvtkIncrementalOctreePointLocator_IsInsertedPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsInsertedPoint");
  return nullptr;
}



static PyObject *
PyvtkIncrementalOctreePointLocator_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->InsertUniquePoint(temp0, temp1) :
      op->vtkIncrementalOctreePointLocator::InsertUniquePoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  vtkIdType temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->InsertPoint(temp0, temp1);
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::InsertPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_InsertNextPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextPoint(temp0) :
      op->vtkIncrementalOctreePointLocator::InsertNextPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_InsertPointWithoutChecking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPointWithoutChecking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIdType temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->InsertPointWithoutChecking(temp0, temp1, temp2);
    }
    else
    {
      op->vtkIncrementalOctreePointLocator::InsertPointWithoutChecking(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkIncrementalOctreePointLocator_Methods[] = {
  {"IsTypeOf", PyvtkIncrementalOctreePointLocator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type and print methods.\n"},
  {"IsA", PyvtkIncrementalOctreePointLocator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type and print methods.\n"},
  {"SafeDownCast", PyvtkIncrementalOctreePointLocator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkIncrementalOctreePointLocator\nC++: static vtkIncrementalOctreePointLocator *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard type and print methods.\n"},
  {"NewInstance", PyvtkIncrementalOctreePointLocator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkIncrementalOctreePointLocator\nC++: vtkIncrementalOctreePointLocator *NewInstance()\n\nStandard type and print methods.\n"},
  {"SetMaxPointsPerLeaf", PyvtkIncrementalOctreePointLocator_SetMaxPointsPerLeaf, METH_VARARGS,
   "V.SetMaxPointsPerLeaf(int)\nC++: virtual void SetMaxPointsPerLeaf(int _arg)\n\nSet/Get the maximum number of points that a leaf node may\nmaintain. Note that the actual number of points maintained by a\nleaf node might exceed this threshold if there is a large number\n(equal to or greater than the threshold) of exactly duplicate\npoints (with zero distance) to be inserted (e.g., to construct an\noctree for subsequent point location) in extreme cases.\nRespecting this threshold in such scenarios would cause endless\nnode sub-division. Thus this threshold is broken, but only in\ncase of such situations.\n"},
  {"GetMaxPointsPerLeafMinValue", PyvtkIncrementalOctreePointLocator_GetMaxPointsPerLeafMinValue, METH_VARARGS,
   "V.GetMaxPointsPerLeafMinValue() -> int\nC++: virtual int GetMaxPointsPerLeafMinValue()\n\nSet/Get the maximum number of points that a leaf node may\nmaintain. Note that the actual number of points maintained by a\nleaf node might exceed this threshold if there is a large number\n(equal to or greater than the threshold) of exactly duplicate\npoints (with zero distance) to be inserted (e.g., to construct an\noctree for subsequent point location) in extreme cases.\nRespecting this threshold in such scenarios would cause endless\nnode sub-division. Thus this threshold is broken, but only in\ncase of such situations.\n"},
  {"GetMaxPointsPerLeafMaxValue", PyvtkIncrementalOctreePointLocator_GetMaxPointsPerLeafMaxValue, METH_VARARGS,
   "V.GetMaxPointsPerLeafMaxValue() -> int\nC++: virtual int GetMaxPointsPerLeafMaxValue()\n\nSet/Get the maximum number of points that a leaf node may\nmaintain. Note that the actual number of points maintained by a\nleaf node might exceed this threshold if there is a large number\n(equal to or greater than the threshold) of exactly duplicate\npoints (with zero distance) to be inserted (e.g., to construct an\noctree for subsequent point location) in extreme cases.\nRespecting this threshold in such scenarios would cause endless\nnode sub-division. Thus this threshold is broken, but only in\ncase of such situations.\n"},
  {"GetMaxPointsPerLeaf", PyvtkIncrementalOctreePointLocator_GetMaxPointsPerLeaf, METH_VARARGS,
   "V.GetMaxPointsPerLeaf() -> int\nC++: virtual int GetMaxPointsPerLeaf()\n\nSet/Get the maximum number of points that a leaf node may\nmaintain. Note that the actual number of points maintained by a\nleaf node might exceed this threshold if there is a large number\n(equal to or greater than the threshold) of exactly duplicate\npoints (with zero distance) to be inserted (e.g., to construct an\noctree for subsequent point location) in extreme cases.\nRespecting this threshold in such scenarios would cause endless\nnode sub-division. Thus this threshold is broken, but only in\ncase of such situations.\n"},
  {"SetBuildCubicOctree", PyvtkIncrementalOctreePointLocator_SetBuildCubicOctree, METH_VARARGS,
   "V.SetBuildCubicOctree(int)\nC++: virtual void SetBuildCubicOctree(vtkTypeBool _arg)\n\nSet/Get whether the search octree is built as a cubic shape or\nnot.\n"},
  {"GetBuildCubicOctree", PyvtkIncrementalOctreePointLocator_GetBuildCubicOctree, METH_VARARGS,
   "V.GetBuildCubicOctree() -> int\nC++: virtual vtkTypeBool GetBuildCubicOctree()\n\nSet/Get whether the search octree is built as a cubic shape or\nnot.\n"},
  {"BuildCubicOctreeOn", PyvtkIncrementalOctreePointLocator_BuildCubicOctreeOn, METH_VARARGS,
   "V.BuildCubicOctreeOn()\nC++: virtual void BuildCubicOctreeOn()\n\nSet/Get whether the search octree is built as a cubic shape or\nnot.\n"},
  {"BuildCubicOctreeOff", PyvtkIncrementalOctreePointLocator_BuildCubicOctreeOff, METH_VARARGS,
   "V.BuildCubicOctreeOff()\nC++: virtual void BuildCubicOctreeOff()\n\nSet/Get whether the search octree is built as a cubic shape or\nnot.\n"},
  {"GetLocatorPoints", PyvtkIncrementalOctreePointLocator_GetLocatorPoints, METH_VARARGS,
   "V.GetLocatorPoints() -> vtkPoints\nC++: virtual vtkPoints *GetLocatorPoints()\n\nGet access to the vtkPoints object in which point coordinates are\nstored for either point location or point insertion.\n"},
  {"Initialize", PyvtkIncrementalOctreePointLocator_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nDelete the octree search structure.\n"},
  {"FreeSearchStructure", PyvtkIncrementalOctreePointLocator_FreeSearchStructure, METH_VARARGS,
   "V.FreeSearchStructure()\nC++: void FreeSearchStructure() override;\n\nDelete the octree search structure.\n"},
  {"GetBounds", PyvtkIncrementalOctreePointLocator_GetBounds, METH_VARARGS,
   "V.GetBounds([float, ...])\nC++: void GetBounds(double *bounds) override;\nV.GetBounds() -> (float, ...)\nC++: double *GetBounds() override;\n\nGet the spatial bounding box of the octree.\n"},
  {"GetNumberOfPoints", PyvtkIncrementalOctreePointLocator_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: int GetNumberOfPoints()\n\nGet the number of points maintained by the octree.\n"},
  {"FindClosestInsertedPoint", PyvtkIncrementalOctreePointLocator_FindClosestInsertedPoint, METH_VARARGS,
   "V.FindClosestInsertedPoint((float, float, float)) -> int\nC++: vtkIdType FindClosestInsertedPoint(const double x[3])\n    override;\n\nGiven a point x assumed to be covered by the octree, return the\nindex of the closest in-octree point regardless of the associated\nminimum squared distance relative to the squared\ninsertion-tolerance distance. This method is used when performing\nincremental point insertion. Note -1 indicates that no point is\nfound. InitPointInsertion() should have been called in advance.\n"},
  {"GenerateRepresentation", PyvtkIncrementalOctreePointLocator_GenerateRepresentation, METH_VARARGS,
   "V.GenerateRepresentation(int, vtkPolyData)\nC++: void GenerateRepresentation(int nodeLevel,\n    vtkPolyData *polysData) override;\n\nCreate a polygonal representation of the octree boundary (from\nthe root node to a specified level).\n"},
  {"BuildLocator", PyvtkIncrementalOctreePointLocator_BuildLocator, METH_VARARGS,
   "V.BuildLocator()\nC++: void BuildLocator() override;\n\nLoad points from a dataset to construct an octree for point\nlocation. This function resorts to InitPointInsertion() to\nfulfill some of the work.\n"},
  {"FindClosestPoint", PyvtkIncrementalOctreePointLocator_FindClosestPoint, METH_VARARGS,
   "V.FindClosestPoint((float, float, float)) -> int\nC++: vtkIdType FindClosestPoint(const double x[3]) override;\nV.FindClosestPoint(float, float, float) -> int\nC++: virtual vtkIdType FindClosestPoint(double x, double y,\n    double z)\nV.FindClosestPoint((float, float, float), [float, ...]) -> int\nC++: virtual vtkIdType FindClosestPoint(const double x[3],\n    double *miniDist2)\nV.FindClosestPoint(float, float, float, [float, ...]) -> int\nC++: virtual vtkIdType FindClosestPoint(double x, double y,\n    double z, double *miniDist2)\n\nGiven a point x, return the id of the closest point.\nBuildLocator() should have been called prior to this function.\nThis method is thread safe if BuildLocator() is directly or\nindirectly called from a single thread first.\n"},
  {"FindClosestPointWithinRadius", PyvtkIncrementalOctreePointLocator_FindClosestPointWithinRadius, METH_VARARGS,
   "V.FindClosestPointWithinRadius(float, (float, float, float),\n    float) -> int\nC++: vtkIdType FindClosestPointWithinRadius(double radius,\n    const double x[3], double &dist2) override;\n\nGiven a point x and a radius, return the id of the closest point\nwithin the radius and the associated minimum squared distance\n(via dist2, this returned distance is valid only if the point id\nis not -1). Note that BuildLocator() should have been called\nprior to this function. This method is thread safe if\nBuildLocator() is directly or indirectly called from a single\nthread first.\n"},
  {"FindClosestPointWithinSquaredRadius", PyvtkIncrementalOctreePointLocator_FindClosestPointWithinSquaredRadius, METH_VARARGS,
   "V.FindClosestPointWithinSquaredRadius(float, (float, float, float)\n    , float) -> int\nC++: vtkIdType FindClosestPointWithinSquaredRadius(double radius2,\n     const double x[3], double &dist2)\n\nGiven a point x and a squared radius radius2, return the id of\nthe closest point within the radius and the associated minimum\nsquared distance (via dist2, note this returned distance is valid\nonly if the point id is not\n-1). BuildLocator() should have been called prior to this\n    function.This method is thread safe if BuildLocator() is\n    directly or indirectly called from a single thread first.\n"},
  {"FindPointsWithinRadius", PyvtkIncrementalOctreePointLocator_FindPointsWithinRadius, METH_VARARGS,
   "V.FindPointsWithinRadius(float, (float, float, float), vtkIdList)\nC++: void FindPointsWithinRadius(double R, const double x[3],\n    vtkIdList *result) override;\n\nFind all points within a radius R relative to a given point x.\nThe returned point ids (stored in result) are not sorted in any\nway. BuildLocator() should have been called prior to this\nfunction. This method is thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {"FindPointsWithinSquaredRadius", PyvtkIncrementalOctreePointLocator_FindPointsWithinSquaredRadius, METH_VARARGS,
   "V.FindPointsWithinSquaredRadius(float, (float, float, float),\n    vtkIdList)\nC++: void FindPointsWithinSquaredRadius(double R2,\n    const double x[3], vtkIdList *result)\n\nFind all points within a squared radius R2 relative to a given\npoint x. The returned point ids (stored in result) are not sorted\nin any way. BuildLocator() should have been called prior to this\nfunction. This method is thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {"FindClosestNPoints", PyvtkIncrementalOctreePointLocator_FindClosestNPoints, METH_VARARGS,
   "V.FindClosestNPoints(int, (float, float, float), vtkIdList)\nC++: void FindClosestNPoints(int N, const double x[3],\n    vtkIdList *result) override;\n\nFind the closest N points to a given point. The returned point\nids (via result) are sorted from closest to farthest.\nBuildLocator() should have been called prior to this function.\nThis method is thread safe if BuildLocator() is directly or\nindirectly called from a single thread first.\n"},
  {"InitPointInsertion", PyvtkIncrementalOctreePointLocator_InitPointInsertion, METH_VARARGS,
   "V.InitPointInsertion(vtkPoints, (float, float, float, float,\n    float, float)) -> int\nC++: int InitPointInsertion(vtkPoints *points,\n    const double bounds[6]) override;\nV.InitPointInsertion(vtkPoints, (float, float, float, float,\n    float, float), int) -> int\nC++: int InitPointInsertion(vtkPoints *points,\n    const double bounds[6], vtkIdType estSize) override;\n\nInitialize the point insertion process. points is an object,\nstoring 3D point coordinates, to which incremental point\ninsertion put coordinates. It is created and provided by an\nexternal VTK class. Argument bounds represents the spatial\nbounding box, into which the points fall. In fact, an adjusted\nversion of the bounding box is used to build the octree to make\nsure no any point (to be inserted) falls outside the octree. This\nfunction is not thread safe.\n"},
  {"IsInsertedPoint", PyvtkIncrementalOctreePointLocator_IsInsertedPoint, METH_VARARGS,
   "V.IsInsertedPoint((float, float, float)) -> int\nC++: vtkIdType IsInsertedPoint(const double x[3]) override;\nV.IsInsertedPoint(float, float, float) -> int\nC++: vtkIdType IsInsertedPoint(double x, double y, double z)\n    override;\n\nDetermine whether or not a given point has been inserted into the\noctree. Return the id of the already inserted point if true,\notherwise return -1. InitPointInsertion() should have been called\nin advance.\n"},
  {"InsertUniquePoint", PyvtkIncrementalOctreePointLocator_InsertUniquePoint, METH_VARARGS,
   "V.InsertUniquePoint((float, float, float), int) -> int\nC++: int InsertUniquePoint(const double point[3],\n    vtkIdType &pntId) override;\n\nInsert a point to the octree unless there has been a duplciate\npoint. Whether the point is actually inserted (return 1) or not\n(return 0 upon a rejection by an existing duplicate), the index\nof the point (either new or the duplicate) is returned via pntId.\nNote that InitPointInsertion() should have been called prior to\nthis function. vtkPoints::InsertNextPoint() is invoked. This\nmethod is not thread safe.\n"},
  {"InsertPoint", PyvtkIncrementalOctreePointLocator_InsertPoint, METH_VARARGS,
   "V.InsertPoint(int, (float, float, float))\nC++: void InsertPoint(vtkIdType ptId, const double x[3]) override;\n\nInsert a given point into the octree with a specified point index\nptId. InitPointInsertion() should have been called prior to this\nfunction. In addition, IsInsertedPoint() should have been called\nin advance to ensure that the given point has not been inserted\nunless point duplication is allowed (Note that in this case, this\nfunction involves a repeated leaf container location).\nvtkPoints::InsertPoint() is invoked.\n"},
  {"InsertNextPoint", PyvtkIncrementalOctreePointLocator_InsertNextPoint, METH_VARARGS,
   "V.InsertNextPoint((float, float, float)) -> int\nC++: vtkIdType InsertNextPoint(const double x[3]) override;\n\nInsert a given point into the octree and return the point index.\nNote that InitPointInsertion() should have been called prior to\nthis function. In addition, IsInsertedPoint() should have been\ncalled in advance to ensure that the given point has not been\ninserted unless point duplication is allowed (in this case, this\nfunction invovles a repeated leaf container location).\nvtkPoints::InsertNextPoint() is invoked.\n"},
  {"InsertPointWithoutChecking", PyvtkIncrementalOctreePointLocator_InsertPointWithoutChecking, METH_VARARGS,
   "V.InsertPointWithoutChecking((float, float, float), int, int)\nC++: void InsertPointWithoutChecking(const double point[3],\n    vtkIdType &pntId, int insert)\n\n\"Insert\" a point to the octree without any checking. Argument\ninsert means whether vtkPoints::InsertNextPoint() upon 1 is\ncalled or the point itself is not inserted to the vtkPoints at\nall but instead only the point index is inserted to a vtkIdList\nupon 0. For case 0, the point index needs to be specified via\npntId. For case 1, the actual point index is returned via pntId.\nInitPointInsertion() should have been called.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkIncrementalOctreePointLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkIncrementalOctreePointLocator", // tp_name
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
  PyvtkIncrementalOctreePointLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIncrementalOctreePointLocator_StaticNew()
{
  return vtkIncrementalOctreePointLocator::New();
}

PyObject *PyvtkIncrementalOctreePointLocator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkIncrementalOctreePointLocator_Type, PyvtkIncrementalOctreePointLocator_Methods,
    "vtkIncrementalOctreePointLocator",
 &PyvtkIncrementalOctreePointLocator_StaticNew);

  PyTypeObject *pytype = &PyvtkIncrementalOctreePointLocator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkIncrementalPointLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIncrementalOctreePointLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIncrementalOctreePointLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIncrementalOctreePointLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

