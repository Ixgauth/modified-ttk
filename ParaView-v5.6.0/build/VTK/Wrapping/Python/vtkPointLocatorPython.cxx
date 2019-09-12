// python wrapper for vtkPointLocator
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
#include "vtkPointLocator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointLocator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointLocator_ClassNew(); }

#ifndef DECLARED_PyvtkIncrementalPointLocator_ClassNew
extern "C" { PyObject *PyvtkIncrementalPointLocator_ClassNew(); }
#define DECLARED_PyvtkIncrementalPointLocator_ClassNew
#endif

static const char *PyvtkPointLocator_Doc =
  "vtkPointLocator - quickly locate points in 3-space\n\n"
  "Superclass: vtkIncrementalPointLocator\n\n"
  "vtkPointLocator is a spatial search object to quickly locate points\n"
  "in 3D. vtkPointLocator works by dividing a specified region of space\n"
  "into a regular array of \"rectangular\" buckets, and then keeping a\n"
  "list of points that lie in each bucket. Typical operation involves\n"
  "giving a position in 3D and finding the closest point.\n\n"
  "vtkPointLocator has two distinct methods of interaction. In the first\n"
  "method, you supply it with a dataset, and it operates on the points\n"
  "in the dataset. In the second method, you supply it with an array of\n"
  "points, and the object operates on the array.\n\n"
  "@warning\n"
  "Many other types of spatial locators have been developed such as\n"
  "octrees and kd-trees. These are often more efficient for the\n"
  "operations described here.\n\n"
  "@sa\n"
  "vtkCellPicker vtkPointPicker vtkStaticPointLocator\n\n";


static PyObject *
PyvtkPointLocator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointLocator *tempr = vtkPointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointLocator::NewInstance());

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
PyvtkPointLocator_SetDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::SetDivisions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointLocator_SetDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::SetDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointLocator_SetDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPointLocator_SetDivisions_s1(self, args);
    case 1:
      return PyvtkPointLocator_SetDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisions");
  return nullptr;
}



static PyObject *
PyvtkPointLocator_GetDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDivisions() :
      op->vtkPointLocator::GetDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_SetNumberOfPointsPerBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointsPerBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::SetNumberOfPointsPerBucket(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_GetNumberOfPointsPerBucketMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBucketMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBucketMinValue() :
      op->vtkPointLocator::GetNumberOfPointsPerBucketMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_GetNumberOfPointsPerBucketMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBucketMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBucketMaxValue() :
      op->vtkPointLocator::GetNumberOfPointsPerBucketMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_GetNumberOfPointsPerBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBucket() :
      op->vtkPointLocator::GetNumberOfPointsPerBucket());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0) :
      op->vtkPointLocator::FindClosestPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::FindClosestPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPointLocator_FindClosestPoint_s1(self, args);
    case 3:
      return PyvtkPointLocator_FindClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return nullptr;
}



static PyObject *
PyvtkPointLocator_FindClosestPointWithinRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::FindClosestPointWithinRadius(temp0, temp1, temp2));

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
PyvtkPointLocator_FindClosestPointWithinRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3));

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
PyvtkPointLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPointLocator_FindClosestPointWithinRadius_s1(self, args);
    case 4:
      return PyvtkPointLocator_FindClosestPointWithinRadius_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPointWithinRadius");
  return nullptr;
}



static PyObject *
PyvtkPointLocator_InitPointInsertion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::InitPointInsertion(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointLocator_InitPointInsertion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::InitPointInsertion(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointLocator_InitPointInsertion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPointLocator_InitPointInsertion_s1(self, args);
    case 3:
      return PyvtkPointLocator_InitPointInsertion_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InitPointInsertion");
  return nullptr;
}



static PyObject *
PyvtkPointLocator_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::InsertPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_InsertNextPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextPoint(temp0) :
      op->vtkPointLocator::InsertNextPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_IsInsertedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::IsInsertedPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointLocator_IsInsertedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->IsInsertedPoint(temp0) :
      op->vtkPointLocator::IsInsertedPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointLocator_IsInsertedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPointLocator_IsInsertedPoint_s1(self, args);
    case 1:
      return PyvtkPointLocator_IsInsertedPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsInsertedPoint");
  return nullptr;
}



static PyObject *
PyvtkPointLocator_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::InsertUniquePoint(temp0, temp1));

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
PyvtkPointLocator_FindClosestInsertedPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestInsertedPoint(temp0) :
      op->vtkPointLocator::FindClosestInsertedPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_FindClosestNPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::FindClosestNPoints(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_FindDistributedPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindDistributedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  vtkIdList *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->FindDistributedPoints(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPointLocator::FindDistributedPoints(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointLocator_FindDistributedPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindDistributedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkIdList *temp4 = nullptr;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkIdList") &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->FindDistributedPoints(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPointLocator::FindDistributedPoints(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointLocator_FindDistributedPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPointLocator_FindDistributedPoints_s1(self, args);
    case 6:
      return PyvtkPointLocator_FindDistributedPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindDistributedPoints");
  return nullptr;
}



static PyObject *
PyvtkPointLocator_FindPointsWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::FindPointsWithinRadius(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_GetPointsInBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsInBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkIdList *tempr = (ap.IsBound() ?
      op->GetPointsInBucket(temp0, temp1) :
      op->vtkPointLocator::GetPointsInBucket(temp0, temp1));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkPointLocator::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPointLocator::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeSearchStructure();
    }
    else
    {
      op->vtkPointLocator::FreeSearchStructure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLocator();
    }
    else
    {
      op->vtkPointLocator::BuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointLocator *op = static_cast<vtkPointLocator *>(vp);

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
      op->vtkPointLocator::GenerateRepresentation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointLocator_Methods[] = {
  {"IsTypeOf", PyvtkPointLocator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for type management and printing.\n"},
  {"IsA", PyvtkPointLocator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for type management and printing.\n"},
  {"SafeDownCast", PyvtkPointLocator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointLocator\nC++: static vtkPointLocator *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for type management and printing.\n"},
  {"NewInstance", PyvtkPointLocator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointLocator\nC++: vtkPointLocator *NewInstance()\n\nStandard methods for type management and printing.\n"},
  {"SetDivisions", PyvtkPointLocator_SetDivisions, METH_VARARGS,
   "V.SetDivisions(int, int, int)\nC++: void SetDivisions(int, int, int)\nV.SetDivisions((int, int, int))\nC++: void SetDivisions(int a[3])\n\n"},
  {"GetDivisions", PyvtkPointLocator_GetDivisions, METH_VARARGS,
   "V.GetDivisions() -> (int, int, int)\nC++: int *GetDivisions()\n\nSet the number of divisions in x-y-z directions.\n"},
  {"SetNumberOfPointsPerBucket", PyvtkPointLocator_SetNumberOfPointsPerBucket, METH_VARARGS,
   "V.SetNumberOfPointsPerBucket(int)\nC++: virtual void SetNumberOfPointsPerBucket(int _arg)\n\nSpecify the average number of points in each bucket.\n"},
  {"GetNumberOfPointsPerBucketMinValue", PyvtkPointLocator_GetNumberOfPointsPerBucketMinValue, METH_VARARGS,
   "V.GetNumberOfPointsPerBucketMinValue() -> int\nC++: virtual int GetNumberOfPointsPerBucketMinValue()\n\nSpecify the average number of points in each bucket.\n"},
  {"GetNumberOfPointsPerBucketMaxValue", PyvtkPointLocator_GetNumberOfPointsPerBucketMaxValue, METH_VARARGS,
   "V.GetNumberOfPointsPerBucketMaxValue() -> int\nC++: virtual int GetNumberOfPointsPerBucketMaxValue()\n\nSpecify the average number of points in each bucket.\n"},
  {"GetNumberOfPointsPerBucket", PyvtkPointLocator_GetNumberOfPointsPerBucket, METH_VARARGS,
   "V.GetNumberOfPointsPerBucket() -> int\nC++: virtual int GetNumberOfPointsPerBucket()\n\nSpecify the average number of points in each bucket.\n"},
  {"FindClosestPoint", PyvtkPointLocator_FindClosestPoint, METH_VARARGS,
   "V.FindClosestPoint((float, float, float)) -> int\nC++: vtkIdType FindClosestPoint(const double x[3]) override;\nV.FindClosestPoint(float, float, float) -> int\nC++: vtkIdType FindClosestPoint(double x, double y, double z)\n\nGiven a position x, return the id of the point closest to it.\nAlternative method requires separate x-y-z values. These methods\nare thread safe if BuildLocator() is directly or indirectly\ncalled from a single thread first.\n"},
  {"FindClosestPointWithinRadius", PyvtkPointLocator_FindClosestPointWithinRadius, METH_VARARGS,
   "V.FindClosestPointWithinRadius(float, (float, float, float),\n    float) -> int\nC++: vtkIdType FindClosestPointWithinRadius(double radius,\n    const double x[3], double &dist2) override;\nV.FindClosestPointWithinRadius(float, (float, float, float),\n    float, float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double radius,\n     const double x[3], double inputDataLength, double &dist2)\n\nGiven a position x and a radius r, return the id of the point\nclosest to the point in that radius. These methods are thread\nsafe if BuildLocator() is directly or indirectly called from a\nsingle thread first. dist2 returns the squared distance to the\npoint.\n"},
  {"InitPointInsertion", PyvtkPointLocator_InitPointInsertion, METH_VARARGS,
   "V.InitPointInsertion(vtkPoints, (float, float, float, float,\n    float, float)) -> int\nC++: int InitPointInsertion(vtkPoints *newPts,\n    const double bounds[6]) override;\nV.InitPointInsertion(vtkPoints, (float, float, float, float,\n    float, float), int) -> int\nC++: int InitPointInsertion(vtkPoints *newPts,\n    const double bounds[6], vtkIdType estSize) override;\n\nInitialize the point insertion process. The newPts is an object\nrepresenting point coordinates into which incremental insertion\nmethods place their data. Bounds are the box that the points lie\nin. Not thread safe.\n"},
  {"InsertPoint", PyvtkPointLocator_InsertPoint, METH_VARARGS,
   "V.InsertPoint(int, (float, float, float))\nC++: void InsertPoint(vtkIdType ptId, const double x[3]) override;\n\nIncrementally insert a point into search structure with a\nparticular index value. You should use the method\nIsInsertedPoint() to see whether this point has already been\ninserted (that is, if you desire to prevent duplicate points).\nBefore using this method you must make sure that newPts have been\nsupplied, the bounds has been set properly, and that divs are\nproperly set. (See InitPointInsertion().) Not thread safe.\n"},
  {"InsertNextPoint", PyvtkPointLocator_InsertNextPoint, METH_VARARGS,
   "V.InsertNextPoint((float, float, float)) -> int\nC++: vtkIdType InsertNextPoint(const double x[3]) override;\n\nIncrementally insert a point into search structure. The method\nreturns the insertion location (i.e., point id). You should use\nthe method IsInsertedPoint() to see whether this point has\nalready been inserted (that is, if you desire to prevent\nduplicate points). Before using this method you must make sure\nthat newPts have been supplied, the bounds has been set properly,\nand that divs are properly set. (See InitPointInsertion().) Not\nthread safe.\n"},
  {"IsInsertedPoint", PyvtkPointLocator_IsInsertedPoint, METH_VARARGS,
   "V.IsInsertedPoint(float, float, float) -> int\nC++: vtkIdType IsInsertedPoint(double x, double y, double z)\n    override;\nV.IsInsertedPoint((float, float, float)) -> int\nC++: vtkIdType IsInsertedPoint(const double x[3]) override;\n\nDetermine whether point given by x[3] has been inserted into\npoints list. Return id of previously inserted point if this is\ntrue, otherwise return\n-1. This method is thread safe.\n"},
  {"InsertUniquePoint", PyvtkPointLocator_InsertUniquePoint, METH_VARARGS,
   "V.InsertUniquePoint((float, float, float), int) -> int\nC++: int InsertUniquePoint(const double x[3], vtkIdType &ptId)\n    override;\n\nDetermine whether point given by x[3] has been inserted into\npoints list. Return 0 if point was already in the list, otherwise\nreturn 1. If the point was not in the list, it will be ADDED.  In\neither case, the id of the point (newly inserted or not) is\nreturned in the ptId argument. Note this combines the\nfunctionality of IsInsertedPoint() followed by a call to\nInsertNextPoint(). This method is not thread safe.\n"},
  {"FindClosestInsertedPoint", PyvtkPointLocator_FindClosestInsertedPoint, METH_VARARGS,
   "V.FindClosestInsertedPoint((float, float, float)) -> int\nC++: vtkIdType FindClosestInsertedPoint(const double x[3])\n    override;\n\nGiven a position x, return the id of the point closest to it.\nThis method is used when performing incremental point insertion.\nNote that -1 indicates that no point was found. This method is\nthread safe if BuildLocator() is directly or indirectly called\nfrom a single thread first.\n"},
  {"FindClosestNPoints", PyvtkPointLocator_FindClosestNPoints, METH_VARARGS,
   "V.FindClosestNPoints(int, (float, float, float), vtkIdList)\nC++: void FindClosestNPoints(int N, const double x[3],\n    vtkIdList *result) override;\n\nFind the closest N points to a position. This returns the closest\nN points to a position. A faster method could be created that\nreturned N close points to a position, but necessarily the exact\nN closest. The returned points are sorted from closest to\nfarthest. These methods are thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {"FindDistributedPoints", PyvtkPointLocator_FindDistributedPoints, METH_VARARGS,
   "V.FindDistributedPoints(int, (float, float, float), vtkIdList,\n    int)\nC++: virtual void FindDistributedPoints(int N, const double x[3],\n    vtkIdList *result, int M)\nV.FindDistributedPoints(int, float, float, float, vtkIdList, int)\nC++: virtual void FindDistributedPoints(int N, double x, double y,\n     double z, vtkIdList *result, int M)\n\nFind the closest points to a position such that each octant of\nspace around the position contains at least N points. Loosely\nlimit the search to a maximum number of points evaluated, M.\nThese methods are thread safe if BuildLocator() is directly or\nindirectly called from a single thread first.\n"},
  {"FindPointsWithinRadius", PyvtkPointLocator_FindPointsWithinRadius, METH_VARARGS,
   "V.FindPointsWithinRadius(float, (float, float, float), vtkIdList)\nC++: void FindPointsWithinRadius(double R, const double x[3],\n    vtkIdList *result) override;\n\nFind all points within a specified radius R of position x. The\nresult is not sorted in any specific manner. These methods are\nthread safe if BuildLocator() is directly or indirectly called\nfrom a single thread first.\n"},
  {"GetPointsInBucket", PyvtkPointLocator_GetPointsInBucket, METH_VARARGS,
   "V.GetPointsInBucket((float, float, float), [int, int, int])\n    -> vtkIdList\nC++: virtual vtkIdList *GetPointsInBucket(const double x[3],\n    int ijk[3])\n\nGiven a position x, return the list of points in the bucket that\ncontains the point. It is possible that nullptr is returned. The\nuser provides an ijk array that is the indices into the locator.\nThis method is thread safe.\n"},
  {"GetPoints", PyvtkPointLocator_GetPoints, METH_VARARGS,
   "V.GetPoints() -> vtkPoints\nC++: virtual vtkPoints *GetPoints()\n\nProvide an accessor to the points.\n"},
  {"Initialize", PyvtkPointLocator_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {"FreeSearchStructure", PyvtkPointLocator_FreeSearchStructure, METH_VARARGS,
   "V.FreeSearchStructure()\nC++: void FreeSearchStructure() override;\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {"BuildLocator", PyvtkPointLocator_BuildLocator, METH_VARARGS,
   "V.BuildLocator()\nC++: void BuildLocator() override;\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {"GenerateRepresentation", PyvtkPointLocator_GenerateRepresentation, METH_VARARGS,
   "V.GenerateRepresentation(int, vtkPolyData)\nC++: void GenerateRepresentation(int level, vtkPolyData *pd)\n    override;\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkPointLocator", // tp_name
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
  PyvtkPointLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointLocator_StaticNew()
{
  return vtkPointLocator::New();
}

PyObject *PyvtkPointLocator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointLocator_Type, PyvtkPointLocator_Methods,
    "vtkPointLocator",
 &PyvtkPointLocator_StaticNew);

  PyTypeObject *pytype = &PyvtkPointLocator_Type;

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

void PyVTKAddFile_vtkPointLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

