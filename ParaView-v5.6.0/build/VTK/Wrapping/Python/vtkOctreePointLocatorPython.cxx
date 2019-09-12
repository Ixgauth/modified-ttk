// python wrapper for vtkOctreePointLocator
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
#include "vtkOctreePointLocator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOctreePointLocator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOctreePointLocator_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPointLocator_ClassNew
extern "C" { PyObject *PyvtkAbstractPointLocator_ClassNew(); }
#define DECLARED_PyvtkAbstractPointLocator_ClassNew
#endif

static const char *PyvtkOctreePointLocator_Doc =
  "vtkOctreePointLocator - an octree spatial decomposition of a set of\npoints\n\n"
  "Superclass: vtkAbstractPointLocator\n\n"
  "Given a vtkDataSet, create an octree that is locally refined such\n"
  "that all leaf octants contain less than a certain amount of points. \n"
  "Note that there is no size constraint that a leaf octant in relation\n"
  "to any of its neighbors.\n\n"
  "This class can also generate a PolyData representation of the\n"
  "boundaries of the spatial regions in the decomposition.\n\n"
  "@sa\n"
  "vtkLocator vtkPointLocator vtkOctreePointLocatorNode\n\n";


static PyObject *
PyvtkOctreePointLocator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOctreePointLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOctreePointLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOctreePointLocator *tempr = vtkOctreePointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOctreePointLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOctreePointLocator::NewInstance());

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
PyvtkOctreePointLocator_SetMaximumPointsPerRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPointsPerRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumPointsPerRegion(temp0);
    }
    else
    {
      op->vtkOctreePointLocator::SetMaximumPointsPerRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetMaximumPointsPerRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPointsPerRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumPointsPerRegion() :
      op->vtkOctreePointLocator::GetMaximumPointsPerRegion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_SetCreateCubicOctants(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateCubicOctants");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCreateCubicOctants(temp0);
    }
    else
    {
      op->vtkOctreePointLocator::SetCreateCubicOctants(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetCreateCubicOctants(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateCubicOctants");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCreateCubicOctants() :
      op->vtkOctreePointLocator::GetCreateCubicOctants());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetFudgeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFudgeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFudgeFactor() :
      op->vtkOctreePointLocator::GetFudgeFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_SetFudgeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFudgeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFudgeFactor(temp0);
    }
    else
    {
      op->vtkOctreePointLocator::SetFudgeFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkOctreePointLocator::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOctreePointLocator_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

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
      op->vtkOctreePointLocator::GetBounds(temp0);
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
PyvtkOctreePointLocator_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkOctreePointLocator_GetBounds_s1(self, args);
    case 1:
      return PyvtkOctreePointLocator_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkOctreePointLocator_GetNumberOfLeafNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLeafNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLeafNodes() :
      op->vtkOctreePointLocator::GetNumberOfLeafNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetRegionBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetRegionBounds(temp0, temp1);
    }
    else
    {
      op->vtkOctreePointLocator::GetRegionBounds(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetRegionDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetRegionDataBounds(temp0, temp1);
    }
    else
    {
      op->vtkOctreePointLocator::GetRegionDataBounds(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetRegionContainingPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionContainingPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegionContainingPoint(temp0, temp1, temp2) :
      op->vtkOctreePointLocator::GetRegionContainingPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLocator();
    }
    else
    {
      op->vtkOctreePointLocator::BuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0) :
      op->vtkOctreePointLocator::FindClosestPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOctreePointLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0, temp1, temp2, temp3) :
      op->vtkOctreePointLocator::FindClosestPoint(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOctreePointLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkOctreePointLocator_FindClosestPoint_s1(self, args);
    case 4:
      return PyvtkOctreePointLocator_FindClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return nullptr;
}



static PyObject *
PyvtkOctreePointLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

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
      op->vtkOctreePointLocator::FindClosestPointWithinRadius(temp0, temp1, temp2));

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
PyvtkOctreePointLocator_FindClosestPointInRegion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPointInRegion(temp0, temp1, temp2) :
      op->vtkOctreePointLocator::FindClosestPointInRegion(temp0, temp1, temp2));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

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
PyvtkOctreePointLocator_FindClosestPointInRegion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPointInRegion(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOctreePointLocator::FindClosestPointInRegion(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOctreePointLocator_FindClosestPointInRegion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkOctreePointLocator_FindClosestPointInRegion_s1(self, args);
    case 5:
      return PyvtkOctreePointLocator_FindClosestPointInRegion_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPointInRegion");
  return nullptr;
}



static PyObject *
PyvtkOctreePointLocator_FindPointsWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

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
      op->vtkOctreePointLocator::FindPointsWithinRadius(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_FindClosestNPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

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
      op->vtkOctreePointLocator::FindClosestNPoints(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetPointsInRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetPointsInRegion(temp0) :
      op->vtkOctreePointLocator::GetPointsInRegion(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeSearchStructure();
    }
    else
    {
      op->vtkOctreePointLocator::FreeSearchStructure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

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
      op->vtkOctreePointLocator::GenerateRepresentation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_FindPointsInArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsInArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdTypeArray *temp1 = nullptr;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->FindPointsInArea(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOctreePointLocator::FindPointsInArea(temp0, temp1, temp2);
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

static PyMethodDef PyvtkOctreePointLocator_Methods[] = {
  {"IsTypeOf", PyvtkOctreePointLocator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type and print methods.\n"},
  {"IsA", PyvtkOctreePointLocator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type and print methods.\n"},
  {"SafeDownCast", PyvtkOctreePointLocator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOctreePointLocator\nC++: static vtkOctreePointLocator *SafeDownCast(vtkObjectBase *o)\n\nStandard type and print methods.\n"},
  {"NewInstance", PyvtkOctreePointLocator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOctreePointLocator\nC++: vtkOctreePointLocator *NewInstance()\n\nStandard type and print methods.\n"},
  {"SetMaximumPointsPerRegion", PyvtkOctreePointLocator_SetMaximumPointsPerRegion, METH_VARARGS,
   "V.SetMaximumPointsPerRegion(int)\nC++: virtual void SetMaximumPointsPerRegion(int _arg)\n\nMaximum number of points per spatial region.  Default is 100.\n"},
  {"GetMaximumPointsPerRegion", PyvtkOctreePointLocator_GetMaximumPointsPerRegion, METH_VARARGS,
   "V.GetMaximumPointsPerRegion() -> int\nC++: virtual int GetMaximumPointsPerRegion()\n\nMaximum number of points per spatial region.  Default is 100.\n"},
  {"SetCreateCubicOctants", PyvtkOctreePointLocator_SetCreateCubicOctants, METH_VARARGS,
   "V.SetCreateCubicOctants(int)\nC++: virtual void SetCreateCubicOctants(int _arg)\n\nGet/Set macro for CreateCubicOctants.\n"},
  {"GetCreateCubicOctants", PyvtkOctreePointLocator_GetCreateCubicOctants, METH_VARARGS,
   "V.GetCreateCubicOctants() -> int\nC++: virtual int GetCreateCubicOctants()\n\nGet/Set macro for CreateCubicOctants.\n"},
  {"GetFudgeFactor", PyvtkOctreePointLocator_GetFudgeFactor, METH_VARARGS,
   "V.GetFudgeFactor() -> float\nC++: virtual double GetFudgeFactor()\n\nSome algorithms on octrees require a value that is a very small\ndistance relative to the diameter of the entire space divided by\nthe octree.  This factor is the maximum axis-aligned width of the\nspace multiplied by 10e-6.\n"},
  {"SetFudgeFactor", PyvtkOctreePointLocator_SetFudgeFactor, METH_VARARGS,
   "V.SetFudgeFactor(float)\nC++: virtual void SetFudgeFactor(double _arg)\n\nSome algorithms on octrees require a value that is a very small\ndistance relative to the diameter of the entire space divided by\nthe octree.  This factor is the maximum axis-aligned width of the\nspace multiplied by 10e-6.\n"},
  {"GetBounds", PyvtkOctreePointLocator_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, ...)\nC++: double *GetBounds() override;\nV.GetBounds([float, ...])\nC++: void GetBounds(double *bounds) override;\n\nGet the spatial bounds of the entire octree space. Sets bounds\narray to xmin, xmax, ymin, ymax, zmin, zmax.\n"},
  {"GetNumberOfLeafNodes", PyvtkOctreePointLocator_GetNumberOfLeafNodes, METH_VARARGS,
   "V.GetNumberOfLeafNodes() -> int\nC++: virtual int GetNumberOfLeafNodes()\n\nThe number of leaf nodes of the tree, the spatial regions\n"},
  {"GetRegionBounds", PyvtkOctreePointLocator_GetRegionBounds, METH_VARARGS,
   "V.GetRegionBounds(int, [float, float, float, float, float, float])\nC++: void GetRegionBounds(int regionID, double bounds[6])\n\nGet the spatial bounds of octree region\n"},
  {"GetRegionDataBounds", PyvtkOctreePointLocator_GetRegionDataBounds, METH_VARARGS,
   "V.GetRegionDataBounds(int, [float, float, float, float, float,\n    float])\nC++: void GetRegionDataBounds(int leafNodeID, double bounds[6])\n\nGet the bounds of the data within the leaf node\n"},
  {"GetRegionContainingPoint", PyvtkOctreePointLocator_GetRegionContainingPoint, METH_VARARGS,
   "V.GetRegionContainingPoint(float, float, float) -> int\nC++: int GetRegionContainingPoint(double x, double y, double z)\n\nGet the id of the leaf region containing the specified location.\n"},
  {"BuildLocator", PyvtkOctreePointLocator_BuildLocator, METH_VARARGS,
   "V.BuildLocator()\nC++: void BuildLocator() override;\n\nCreate the octree decomposition of the cells of the data set or\ndata sets.  Cells are assigned to octree spatial regions based on\nthe location of their centroids.\n"},
  {"FindClosestPoint", PyvtkOctreePointLocator_FindClosestPoint, METH_VARARGS,
   "V.FindClosestPoint((float, float, float)) -> int\nC++: vtkIdType FindClosestPoint(const double x[3]) override;\nV.FindClosestPoint(float, float, float, float) -> int\nC++: vtkIdType FindClosestPoint(double x, double y, double z,\n    double &dist2)\n\nReturn the Id of the point that is closest to the given point.\nSet the square of the distance between the two points.\n"},
  {"FindClosestPointWithinRadius", PyvtkOctreePointLocator_FindClosestPointWithinRadius, METH_VARARGS,
   "V.FindClosestPointWithinRadius(float, (float, float, float),\n    float) -> int\nC++: vtkIdType FindClosestPointWithinRadius(double radius,\n    const double x[3], double &dist2) override;\n\nGiven a position x and a radius r, return the id of the point\nclosest to the point in that radius. dist2 returns the squared\ndistance to the point.\n"},
  {"FindClosestPointInRegion", PyvtkOctreePointLocator_FindClosestPointInRegion, METH_VARARGS,
   "V.FindClosestPointInRegion(int, [float, ...], float) -> int\nC++: vtkIdType FindClosestPointInRegion(int regionId, double *x,\n    double &dist2)\nV.FindClosestPointInRegion(int, float, float, float, float) -> int\nC++: vtkIdType FindClosestPointInRegion(int regionId, double x,\n    double y, double z, double &dist2)\n\nFind the Id of the point in the given leaf region which is\nclosest to the given point.  Return the ID of the point, and set\nthe square of the distance of between the points.\n"},
  {"FindPointsWithinRadius", PyvtkOctreePointLocator_FindPointsWithinRadius, METH_VARARGS,
   "V.FindPointsWithinRadius(float, (float, float, float), vtkIdList)\nC++: void FindPointsWithinRadius(double radius, const double x[3],\n     vtkIdList *result) override;\n\nFind all points within a specified radius of position x. The\nresult is not sorted in any specific manner.\n"},
  {"FindClosestNPoints", PyvtkOctreePointLocator_FindClosestNPoints, METH_VARARGS,
   "V.FindClosestNPoints(int, (float, float, float), vtkIdList)\nC++: void FindClosestNPoints(int N, const double x[3],\n    vtkIdList *result) override;\n\nFind the closest N points to a position. This returns the closest\nN points to a position. A faster method could be created that\nreturned N close points to a position, but not necessarily the\nexact N closest. The returned points are sorted from closest to\nfarthest. These methods are thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {"GetPointsInRegion", PyvtkOctreePointLocator_GetPointsInRegion, METH_VARARGS,
   "V.GetPointsInRegion(int) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetPointsInRegion(int leafNodeId)\n\nGet a list of the original IDs of all points in a leaf node.\n"},
  {"FreeSearchStructure", PyvtkOctreePointLocator_FreeSearchStructure, METH_VARARGS,
   "V.FreeSearchStructure()\nC++: void FreeSearchStructure() override;\n\nDelete the octree data structure.\n"},
  {"GenerateRepresentation", PyvtkOctreePointLocator_GenerateRepresentation, METH_VARARGS,
   "V.GenerateRepresentation(int, vtkPolyData)\nC++: void GenerateRepresentation(int level, vtkPolyData *pd)\n    override;\n\nCreate a polydata representation of the boundaries of the octree\nregions.\n"},
  {"FindPointsInArea", PyvtkOctreePointLocator_FindPointsInArea, METH_VARARGS,
   "V.FindPointsInArea([float, ...], vtkIdTypeArray, bool)\nC++: void FindPointsInArea(double *area, vtkIdTypeArray *ids,\n    bool clearArray=true)\n\nFill ids with points found in area.  The area is a 6-tuple\ncontaining (xmin, xmax, ymin, ymax, zmin, zmax). This method will\nclear the array by default.  To append ids to an array, set\nclearArray to false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOctreePointLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkOctreePointLocator", // tp_name
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
  PyvtkOctreePointLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOctreePointLocator_StaticNew()
{
  return vtkOctreePointLocator::New();
}

PyObject *PyvtkOctreePointLocator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOctreePointLocator_Type, PyvtkOctreePointLocator_Methods,
    "vtkOctreePointLocator",
 &PyvtkOctreePointLocator_StaticNew);

  PyTypeObject *pytype = &PyvtkOctreePointLocator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractPointLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOctreePointLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOctreePointLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOctreePointLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

