// python wrapper for vtkStaticPointLocator
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
#include "vtkStaticPointLocator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStaticPointLocator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStaticPointLocator_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPointLocator_ClassNew
extern "C" { PyObject *PyvtkAbstractPointLocator_ClassNew(); }
#define DECLARED_PyvtkAbstractPointLocator_ClassNew
#endif

static const char *PyvtkStaticPointLocator_Doc =
  "vtkStaticPointLocator - quickly locate points in 3-space\n\n"
  "Superclass: vtkAbstractPointLocator\n\n"
  "vtkStaticPointLocator is a spatial search object to quickly locate\n"
  "points in 3D.  vtkStaticPointLocator works by dividing a specified\n"
  "region of space into a regular array of cuboid buckets, and then\n"
  "keeping a list of points that lie in each bucket. Typical operation\n"
  "involves giving a position in 3D and finding the closest point; or\n"
  "finding the N closest points.\n\n"
  "vtkStaticPointLocator is an accelerated version of vtkPointLocator.\n"
  "It is threaded (via vtkSMPTools), and supports one-time static\n"
  "construction (i.e., incremental point insertion is not supported). If\n"
  "you need to incrementally insert points, use the vtkPointLocator or\n"
  "its kin to do so.\n\n"
  "@warning\n"
  "This class is templated. It may run slower than serial execution if\n"
  "the code is not optimized during compilation. Build in Release or\n"
  "ReleaseWithDebugInfo.\n\n"
  "@warning\n"
  "Make sure that you review the documentation for the superclasses\n"
  "vtkAbstactPointLocator and vtkLocator. In particular the Automatic\n"
  "data member can be used to automatically determine divisions based on\n"
  "the average number of points per bucket.\n\n"
  "@warning\n"
  "Other types of spatial locators have been developed such as octrees\n"
  "and kd-trees. These are often more efficient for the operations\n"
  "described here.\n\n"
  "@sa\n"
  "vtkPointLocator vtkCellLocator vtkLocator vtkAbstractPointLocator\n\n";


static PyObject *
PyvtkStaticPointLocator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStaticPointLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStaticPointLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStaticPointLocator *tempr = vtkStaticPointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStaticPointLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStaticPointLocator::NewInstance());

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
PyvtkStaticPointLocator_SetNumberOfPointsPerBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointsPerBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPointsPerBucket(temp0);
    }
    else
    {
      op->vtkStaticPointLocator::SetNumberOfPointsPerBucket(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_GetNumberOfPointsPerBucketMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBucketMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBucketMinValue() :
      op->vtkStaticPointLocator::GetNumberOfPointsPerBucketMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_GetNumberOfPointsPerBucketMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBucketMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBucketMaxValue() :
      op->vtkStaticPointLocator::GetNumberOfPointsPerBucketMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_GetNumberOfPointsPerBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBucket() :
      op->vtkStaticPointLocator::GetNumberOfPointsPerBucket());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_SetDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

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
      op->SetDivisions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStaticPointLocator::SetDivisions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStaticPointLocator_SetDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDivisions(temp0);
    }
    else
    {
      op->vtkStaticPointLocator::SetDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStaticPointLocator_SetDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkStaticPointLocator_SetDivisions_s1(self, args);
    case 1:
      return PyvtkStaticPointLocator_SetDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisions");
  return nullptr;
}



static PyObject *
PyvtkStaticPointLocator_GetDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDivisions() :
      op->vtkStaticPointLocator::GetDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0) :
      op->vtkStaticPointLocator::FindClosestPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStaticPointLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

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
      op->vtkStaticPointLocator::FindClosestPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStaticPointLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkStaticPointLocator_FindClosestPoint_s1(self, args);
    case 3:
      return PyvtkStaticPointLocator_FindClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return nullptr;
}



static PyObject *
PyvtkStaticPointLocator_FindClosestPointWithinRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

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
      op->vtkStaticPointLocator::FindClosestPointWithinRadius(temp0, temp1, temp2));

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
PyvtkStaticPointLocator_FindClosestPointWithinRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPointWithinRadius(temp0, temp1, temp2, temp3) :
      op->vtkStaticPointLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3));

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
PyvtkStaticPointLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkStaticPointLocator_FindClosestPointWithinRadius_s1(self, args);
    case 4:
      return PyvtkStaticPointLocator_FindClosestPointWithinRadius_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPointWithinRadius");
  return nullptr;
}



static PyObject *
PyvtkStaticPointLocator_FindClosestNPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

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
      op->vtkStaticPointLocator::FindClosestNPoints(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStaticPointLocator_FindClosestNPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkIdList *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->FindClosestNPoints(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkStaticPointLocator::FindClosestNPoints(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStaticPointLocator_FindClosestNPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkStaticPointLocator_FindClosestNPoints_s1(self, args);
    case 5:
      return PyvtkStaticPointLocator_FindClosestNPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestNPoints");
  return nullptr;
}



static PyObject *
PyvtkStaticPointLocator_FindPointsWithinRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

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
      op->vtkStaticPointLocator::FindPointsWithinRadius(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStaticPointLocator_FindPointsWithinRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkIdList *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->FindPointsWithinRadius(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkStaticPointLocator::FindPointsWithinRadius(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStaticPointLocator_FindPointsWithinRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkStaticPointLocator_FindPointsWithinRadius_s1(self, args);
    case 5:
      return PyvtkStaticPointLocator_FindPointsWithinRadius_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindPointsWithinRadius");
  return nullptr;
}



static PyObject *
PyvtkStaticPointLocator_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  vtkIdType temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkStaticPointLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_MergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  double temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(2*size1);
  vtkIdType *temp1 = store1.Data();
  vtkIdType *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MergePoints(temp0, temp1);
    }
    else
    {
      op->vtkStaticPointLocator::MergePoints(temp0, temp1);
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
PyvtkStaticPointLocator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkStaticPointLocator::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeSearchStructure();
    }
    else
    {
      op->vtkStaticPointLocator::FreeSearchStructure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLocator();
    }
    else
    {
      op->vtkStaticPointLocator::BuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

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
      op->vtkStaticPointLocator::GenerateRepresentation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_GetNumberOfPointsInBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsInBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPointsInBucket(temp0) :
      op->vtkStaticPointLocator::GetNumberOfPointsInBucket(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_GetBucketIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBucketIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetBucketIds(temp0, temp1);
    }
    else
    {
      op->vtkStaticPointLocator::GetBucketIds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_SetMaxNumberOfBuckets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfBuckets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNumberOfBuckets(temp0);
    }
    else
    {
      op->vtkStaticPointLocator::SetMaxNumberOfBuckets(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_GetMaxNumberOfBucketsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfBucketsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxNumberOfBucketsMinValue() :
      op->vtkStaticPointLocator::GetMaxNumberOfBucketsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_GetMaxNumberOfBucketsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfBucketsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxNumberOfBucketsMaxValue() :
      op->vtkStaticPointLocator::GetMaxNumberOfBucketsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_GetMaxNumberOfBuckets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfBuckets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxNumberOfBuckets() :
      op->vtkStaticPointLocator::GetMaxNumberOfBuckets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_GetLargeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLargeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLargeIds() :
      op->vtkStaticPointLocator::GetLargeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticPointLocator_GetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkStaticPointLocator::GetSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStaticPointLocator_GetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetSpacing(temp0);
    }
    else
    {
      op->vtkStaticPointLocator::GetSpacing(temp0);
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
PyvtkStaticPointLocator_GetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkStaticPointLocator_GetSpacing_s1(self, args);
    case 1:
      return PyvtkStaticPointLocator_GetSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSpacing");
  return nullptr;
}



static PyObject *
PyvtkStaticPointLocator_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkStaticPointLocator::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStaticPointLocator_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticPointLocator *op = static_cast<vtkStaticPointLocator *>(vp);

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
      op->vtkStaticPointLocator::GetBounds(temp0);
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
PyvtkStaticPointLocator_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkStaticPointLocator_GetBounds_s1(self, args);
    case 1:
      return PyvtkStaticPointLocator_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyMethodDef PyvtkStaticPointLocator_Methods[] = {
  {"IsTypeOf", PyvtkStaticPointLocator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type and print methods.\n"},
  {"IsA", PyvtkStaticPointLocator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type and print methods.\n"},
  {"SafeDownCast", PyvtkStaticPointLocator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStaticPointLocator\nC++: static vtkStaticPointLocator *SafeDownCast(vtkObjectBase *o)\n\nStandard type and print methods.\n"},
  {"NewInstance", PyvtkStaticPointLocator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStaticPointLocator\nC++: vtkStaticPointLocator *NewInstance()\n\nStandard type and print methods.\n"},
  {"SetNumberOfPointsPerBucket", PyvtkStaticPointLocator_SetNumberOfPointsPerBucket, METH_VARARGS,
   "V.SetNumberOfPointsPerBucket(int)\nC++: virtual void SetNumberOfPointsPerBucket(int _arg)\n\nSpecify the average number of points in each bucket. This data\nmember is used in conjunction with the Automatic data member (if\nenabled) to determine the number of locator x-y-z divisions.\n"},
  {"GetNumberOfPointsPerBucketMinValue", PyvtkStaticPointLocator_GetNumberOfPointsPerBucketMinValue, METH_VARARGS,
   "V.GetNumberOfPointsPerBucketMinValue() -> int\nC++: virtual int GetNumberOfPointsPerBucketMinValue()\n\nSpecify the average number of points in each bucket. This data\nmember is used in conjunction with the Automatic data member (if\nenabled) to determine the number of locator x-y-z divisions.\n"},
  {"GetNumberOfPointsPerBucketMaxValue", PyvtkStaticPointLocator_GetNumberOfPointsPerBucketMaxValue, METH_VARARGS,
   "V.GetNumberOfPointsPerBucketMaxValue() -> int\nC++: virtual int GetNumberOfPointsPerBucketMaxValue()\n\nSpecify the average number of points in each bucket. This data\nmember is used in conjunction with the Automatic data member (if\nenabled) to determine the number of locator x-y-z divisions.\n"},
  {"GetNumberOfPointsPerBucket", PyvtkStaticPointLocator_GetNumberOfPointsPerBucket, METH_VARARGS,
   "V.GetNumberOfPointsPerBucket() -> int\nC++: virtual int GetNumberOfPointsPerBucket()\n\nSpecify the average number of points in each bucket. This data\nmember is used in conjunction with the Automatic data member (if\nenabled) to determine the number of locator x-y-z divisions.\n"},
  {"SetDivisions", PyvtkStaticPointLocator_SetDivisions, METH_VARARGS,
   "V.SetDivisions(int, int, int)\nC++: void SetDivisions(int, int, int)\nV.SetDivisions((int, int, int))\nC++: void SetDivisions(int a[3])\n\n"},
  {"GetDivisions", PyvtkStaticPointLocator_GetDivisions, METH_VARARGS,
   "V.GetDivisions() -> (int, int, int)\nC++: int *GetDivisions()\n\nSet the number of divisions in x-y-z directions. If the Automatic\ndata member is enabled, the Divisions are set according to the\nNumberOfPointsPerBucket and MaxNumberOfBuckets data members. The\nnumber of divisions must be >= 1 in each direction.\n"},
  {"FindClosestPoint", PyvtkStaticPointLocator_FindClosestPoint, METH_VARARGS,
   "V.FindClosestPoint((float, float, float)) -> int\nC++: vtkIdType FindClosestPoint(const double x[3]) override;\nV.FindClosestPoint(float, float, float) -> int\nC++: vtkIdType FindClosestPoint(double x, double y, double z)\n\nGiven a position x, return the id of the point closest to it. An\nalternative method (defined in the superclass) requires separate\nx-y-z values. These methods are thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {"FindClosestPointWithinRadius", PyvtkStaticPointLocator_FindClosestPointWithinRadius, METH_VARARGS,
   "V.FindClosestPointWithinRadius(float, (float, float, float),\n    float) -> int\nC++: vtkIdType FindClosestPointWithinRadius(double radius,\n    const double x[3], double &dist2) override;\nV.FindClosestPointWithinRadius(float, (float, float, float),\n    float, float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double radius,\n     const double x[3], double inputDataLength, double &dist2)\n\nGiven a position x and a radius r, return the id of the point\nclosest to the point in that radius.  These methods are thread\nsafe if BuildLocator() is directly or indirectly called from a\nsingle thread first. dist2 returns the squared distance to the\npoint. Note that if multiple points are located the same distance\naway, the actual point returned is a function in which order the\npoints are processed (i.e., indeterminate).\n"},
  {"FindClosestNPoints", PyvtkStaticPointLocator_FindClosestNPoints, METH_VARARGS,
   "V.FindClosestNPoints(int, (float, float, float), vtkIdList)\nC++: void FindClosestNPoints(int N, const double x[3],\n    vtkIdList *result) override;\nV.FindClosestNPoints(int, float, float, float, vtkIdList)\nC++: void FindClosestNPoints(int N, double x, double y, double z,\n    vtkIdList *result)\n\nFind the closest N points to a position. This returns the closest\nN points to a position. A faster method could be created that\nreturned N close points to a position, but necessarily the exact\nN closest.  The returned points are sorted from closest to\nfarthest.  These methods are thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {"FindPointsWithinRadius", PyvtkStaticPointLocator_FindPointsWithinRadius, METH_VARARGS,
   "V.FindPointsWithinRadius(float, (float, float, float), vtkIdList)\nC++: void FindPointsWithinRadius(double R, const double x[3],\n    vtkIdList *result) override;\nV.FindPointsWithinRadius(float, float, float, float, vtkIdList)\nC++: void FindPointsWithinRadius(double R, double x, double y,\n    double z, vtkIdList *result)\n\nFind all points within a specified radius R of position x. The\nresult is not sorted in any specific manner. These methods are\nthread safe if BuildLocator() is directly or indirectly called\nfrom a single thread first.\n"},
  {"IntersectWithLine", PyvtkStaticPointLocator_IntersectWithLine, METH_VARARGS,
   "V.IntersectWithLine([float, float, float], [float, float, float],\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(double a0[3], double a1[3], double tol,\n     double &t, double lineX[3], double ptX[3], vtkIdType &ptId)\n\nIntersect the points contained in the locator with the line\ndefined by (a0,a1). Return the point within the tolerance tol\nthat is closest to a0 (tol measured in the world coordinate\nsystem). If an intersection occurs (i.e., the method returns\nnonzero), then the parametric location along the line t, the\nclosest position along the line lineX, and the coordinates of the\npicked ptId is returned in ptX. (This method is thread safe after\nthe locator is built.)\n"},
  {"MergePoints", PyvtkStaticPointLocator_MergePoints, METH_VARARGS,
   "V.MergePoints(float, [int, ...])\nC++: void MergePoints(double tol, vtkIdType *mergeMap)\n\nMerge points in the locator given a tolerance. Return a merge map\nwhich represents the mapping of \"concident\" point ids to a single\npoint. Note the number of points in the merge map is the number\nof points the locator was built with. The user is expected to\npass in an allocated mergeMap.\n"},
  {"Initialize", PyvtkStaticPointLocator_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nSee vtkLocator and vtkAbstractPointLocator interface\ndocumentation. These methods are not thread safe.\n"},
  {"FreeSearchStructure", PyvtkStaticPointLocator_FreeSearchStructure, METH_VARARGS,
   "V.FreeSearchStructure()\nC++: void FreeSearchStructure() override;\n\nSee vtkLocator and vtkAbstractPointLocator interface\ndocumentation. These methods are not thread safe.\n"},
  {"BuildLocator", PyvtkStaticPointLocator_BuildLocator, METH_VARARGS,
   "V.BuildLocator()\nC++: void BuildLocator() override;\n\nSee vtkLocator and vtkAbstractPointLocator interface\ndocumentation. These methods are not thread safe.\n"},
  {"GenerateRepresentation", PyvtkStaticPointLocator_GenerateRepresentation, METH_VARARGS,
   "V.GenerateRepresentation(int, vtkPolyData)\nC++: void GenerateRepresentation(int level, vtkPolyData *pd)\n    override;\n\nPopulate a polydata with the faces of the bins that potentially\ncontain cells. Note that the level parameter has no effect on\nthis method as there is no hierarchy built (i.e., uniform\nbinning). Typically this is used for debugging.\n"},
  {"GetNumberOfPointsInBucket", PyvtkStaticPointLocator_GetNumberOfPointsInBucket, METH_VARARGS,
   "V.GetNumberOfPointsInBucket(int) -> int\nC++: vtkIdType GetNumberOfPointsInBucket(vtkIdType bNum)\n\nGiven a bucket number bNum between 0 <= bNum <\nthis->GetNumberOfBuckets(), return the number of points found in\nthe bucket.\n"},
  {"GetBucketIds", PyvtkStaticPointLocator_GetBucketIds, METH_VARARGS,
   "V.GetBucketIds(int, vtkIdList)\nC++: void GetBucketIds(vtkIdType bNum, vtkIdList *bList)\n\nGiven a bucket number bNum between 0 <= bNum <\nthis->GetNumberOfBuckets(), return a list of point ids contained\nwithin the bucket. The user must provide an instance of vtkIdList\nto contain the result.\n"},
  {"SetMaxNumberOfBuckets", PyvtkStaticPointLocator_SetMaxNumberOfBuckets, METH_VARARGS,
   "V.SetMaxNumberOfBuckets(int)\nC++: virtual void SetMaxNumberOfBuckets(vtkIdType _arg)\n\nSet the maximum number of buckets in the locator. By default the\nvalue is set to VTK_INT_MAX. Note that there are significant\nperformance implications at work here. If the number of buckets\nis set very large (meaning > VTK_INT_MAX) then internal sorting\nmay be performed using 64-bit integers (which is much slower than\nusing a 32-bit int). Of course, memory requirements may\ndramatically increase as well.  It is recommended that the\ndefault value be used; but for extremely large data it may be\ndesired to create a locator with an exceptionally large number of\nbuckets. Note also that during initialization of the locator if\nthe MaxNumberOfBuckets threshold is exceeded, the Divisions are\nscaled down in such a way as not to exceed the MaxNumberOfBuckets\nproportionally to the size of the bounding box in the x-y-z\ndirections.\n"},
  {"GetMaxNumberOfBucketsMinValue", PyvtkStaticPointLocator_GetMaxNumberOfBucketsMinValue, METH_VARARGS,
   "V.GetMaxNumberOfBucketsMinValue() -> int\nC++: virtual vtkIdType GetMaxNumberOfBucketsMinValue()\n\nSet the maximum number of buckets in the locator. By default the\nvalue is set to VTK_INT_MAX. Note that there are significant\nperformance implications at work here. If the number of buckets\nis set very large (meaning > VTK_INT_MAX) then internal sorting\nmay be performed using 64-bit integers (which is much slower than\nusing a 32-bit int). Of course, memory requirements may\ndramatically increase as well.  It is recommended that the\ndefault value be used; but for extremely large data it may be\ndesired to create a locator with an exceptionally large number of\nbuckets. Note also that during initialization of the locator if\nthe MaxNumberOfBuckets threshold is exceeded, the Divisions are\nscaled down in such a way as not to exceed the MaxNumberOfBuckets\nproportionally to the size of the bounding box in the x-y-z\ndirections.\n"},
  {"GetMaxNumberOfBucketsMaxValue", PyvtkStaticPointLocator_GetMaxNumberOfBucketsMaxValue, METH_VARARGS,
   "V.GetMaxNumberOfBucketsMaxValue() -> int\nC++: virtual vtkIdType GetMaxNumberOfBucketsMaxValue()\n\nSet the maximum number of buckets in the locator. By default the\nvalue is set to VTK_INT_MAX. Note that there are significant\nperformance implications at work here. If the number of buckets\nis set very large (meaning > VTK_INT_MAX) then internal sorting\nmay be performed using 64-bit integers (which is much slower than\nusing a 32-bit int). Of course, memory requirements may\ndramatically increase as well.  It is recommended that the\ndefault value be used; but for extremely large data it may be\ndesired to create a locator with an exceptionally large number of\nbuckets. Note also that during initialization of the locator if\nthe MaxNumberOfBuckets threshold is exceeded, the Divisions are\nscaled down in such a way as not to exceed the MaxNumberOfBuckets\nproportionally to the size of the bounding box in the x-y-z\ndirections.\n"},
  {"GetMaxNumberOfBuckets", PyvtkStaticPointLocator_GetMaxNumberOfBuckets, METH_VARARGS,
   "V.GetMaxNumberOfBuckets() -> int\nC++: virtual vtkIdType GetMaxNumberOfBuckets()\n\nSet the maximum number of buckets in the locator. By default the\nvalue is set to VTK_INT_MAX. Note that there are significant\nperformance implications at work here. If the number of buckets\nis set very large (meaning > VTK_INT_MAX) then internal sorting\nmay be performed using 64-bit integers (which is much slower than\nusing a 32-bit int). Of course, memory requirements may\ndramatically increase as well.  It is recommended that the\ndefault value be used; but for extremely large data it may be\ndesired to create a locator with an exceptionally large number of\nbuckets. Note also that during initialization of the locator if\nthe MaxNumberOfBuckets threshold is exceeded, the Divisions are\nscaled down in such a way as not to exceed the MaxNumberOfBuckets\nproportionally to the size of the bounding box in the x-y-z\ndirections.\n"},
  {"GetLargeIds", PyvtkStaticPointLocator_GetLargeIds, METH_VARARGS,
   "V.GetLargeIds() -> bool\nC++: bool GetLargeIds()\n\nInform the user as to whether large ids are being used. This flag\nonly has meaning after the locator has been built. Large ids are\nused when the number of binned points, or the number of bins, is\n>= the maximum number of buckets (specified by the user). Note\nthat LargeIds are only available on 64-bit architectures.\n"},
  {"GetSpacing", PyvtkStaticPointLocator_GetSpacing, METH_VARARGS,
   "V.GetSpacing() -> (float, ...)\nC++: virtual double *GetSpacing()\nV.GetSpacing([float, float, float])\nC++: virtual void GetSpacing(double spacing[3])\n\nProvide an accessor to the bucket spacing. Valid after the\nlocator is built.\n"},
  {"GetBounds", PyvtkStaticPointLocator_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, ...)\nC++: virtual double *GetBounds()\nV.GetBounds([float, ...])\nC++: virtual void GetBounds(double *)\n\nProvide an accessor to the bounds. Valid after the locator is\nbuilt.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStaticPointLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkStaticPointLocator", // tp_name
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
  PyvtkStaticPointLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStaticPointLocator_StaticNew()
{
  return vtkStaticPointLocator::New();
}

PyObject *PyvtkStaticPointLocator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStaticPointLocator_Type, PyvtkStaticPointLocator_Methods,
    "vtkStaticPointLocator",
 &PyvtkStaticPointLocator_StaticNew);

  PyTypeObject *pytype = &PyvtkStaticPointLocator_Type;

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

void PyVTKAddFile_vtkStaticPointLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStaticPointLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStaticPointLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

