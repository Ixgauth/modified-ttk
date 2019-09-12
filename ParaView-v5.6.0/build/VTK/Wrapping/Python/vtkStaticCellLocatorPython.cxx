// python wrapper for vtkStaticCellLocator
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
#include "vtkStaticCellLocator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStaticCellLocator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStaticCellLocator_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractCellLocator_ClassNew
extern "C" { PyObject *PyvtkAbstractCellLocator_ClassNew(); }
#define DECLARED_PyvtkAbstractCellLocator_ClassNew
#endif

static const char *PyvtkStaticCellLocator_Doc =
  "vtkStaticCellLocator - perform fast cell location operations\n\n"
  "Superclass: vtkAbstractCellLocator\n\n"
  "vtkStaticCellLocator is a type of vtkAbstractCellLocator that\n"
  "accelerates certain operations when performing spatial operations on\n"
  "cells. These operations include finding a point that contains a cell,\n"
  "and intersecting cells with a line.\n\n"
  "vtkStaticCellLocator is an accelerated version of vtkCellLocator. It\n"
  "is threaded (via vtkSMPTools), and supports one-time static\n"
  "construction (i.e., incremental cell insertion is not supported).\n\n"
  "@warning\n"
  "This class is templated. It may run slower than serial execution if\n"
  "the code is not optimized during compilation. Build in Release or\n"
  "ReleaseWithDebugInfo.\n\n"
  "@warning\n"
  "This class *always* caches cell bounds.\n\n"
  "@sa\n"
  "vtkLocator vakAbstractCellLocator vtkCellLocator vtkCellTreeLocator\n"
  "vtkModifiedBSPTree\n\n";


static PyObject *
PyvtkStaticCellLocator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStaticCellLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStaticCellLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStaticCellLocator *tempr = vtkStaticCellLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStaticCellLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStaticCellLocator::NewInstance());

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
PyvtkStaticCellLocator_SetDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::SetDivisions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStaticCellLocator_SetDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::SetDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStaticCellLocator_SetDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkStaticCellLocator_SetDivisions_s1(self, args);
    case 1:
      return PyvtkStaticCellLocator_SetDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisions");
  return nullptr;
}



static PyObject *
PyvtkStaticCellLocator_GetDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDivisions() :
      op->vtkStaticCellLocator::GetDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  vtkGenericCell *temp2 = nullptr;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4) :
      op->vtkStaticCellLocator::FindCell(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStaticCellLocator_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0) :
      op->vtkStaticCellLocator::FindCell(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStaticCellLocator_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkStaticCellLocator_FindCell_s1(self, args);
    case 1:
      return PyvtkStaticCellLocator_FindCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}



static PyObject *
PyvtkStaticCellLocator_FindCellsWithinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsWithinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->FindCellsWithinBounds(temp0, temp1);
    }
    else
    {
      op->vtkStaticCellLocator::FindCellsWithinBounds(temp0, temp1);
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
PyvtkStaticCellLocator_FindCellsAlongLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsAlongLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->FindCellsAlongLine(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkStaticCellLocator::FindCellsAlongLine(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_IntersectWithLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  vtkIdType temp7;
  vtkGenericCell *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkGenericCell"))
  {
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8) :
      op->vtkStaticCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

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
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStaticCellLocator_IntersectWithLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
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
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkStaticCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkStaticCellLocator_IntersectWithLine_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  vtkIdType temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkStaticCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStaticCellLocator_IntersectWithLine_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  vtkPoints *temp2 = nullptr;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3) :
      op->vtkStaticCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStaticCellLocator_IntersectWithLine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 9:
      return PyvtkStaticCellLocator_IntersectWithLine_s1(self, args);
    case 7:
      return PyvtkStaticCellLocator_IntersectWithLine_s2(self, args);
    case 8:
      return PyvtkStaticCellLocator_IntersectWithLine_s3(self, args);
    case 4:
      return PyvtkStaticCellLocator_IntersectWithLine_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWithLine");
  return nullptr;
}



static PyObject *
PyvtkStaticCellLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::GenerateRepresentation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeSearchStructure();
    }
    else
    {
      op->vtkStaticCellLocator::FreeSearchStructure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLocator();
    }
    else
    {
      op->vtkStaticCellLocator::BuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_SetMaxNumberOfBuckets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfBuckets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::SetMaxNumberOfBuckets(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_GetMaxNumberOfBucketsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfBucketsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxNumberOfBucketsMinValue() :
      op->vtkStaticCellLocator::GetMaxNumberOfBucketsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_GetMaxNumberOfBucketsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfBucketsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxNumberOfBucketsMaxValue() :
      op->vtkStaticCellLocator::GetMaxNumberOfBucketsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_GetMaxNumberOfBuckets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfBuckets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaxNumberOfBuckets() :
      op->vtkStaticCellLocator::GetMaxNumberOfBuckets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_GetLargeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLargeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLargeIds() :
      op->vtkStaticCellLocator::GetLargeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStaticCellLocator_Methods[] = {
  {"IsTypeOf", PyvtkStaticCellLocator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods to instantiate, print and obtain type-related\ninformation.\n"},
  {"IsA", PyvtkStaticCellLocator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods to instantiate, print and obtain type-related\ninformation.\n"},
  {"SafeDownCast", PyvtkStaticCellLocator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStaticCellLocator\nC++: static vtkStaticCellLocator *SafeDownCast(vtkObjectBase *o)\n\nStandard methods to instantiate, print and obtain type-related\ninformation.\n"},
  {"NewInstance", PyvtkStaticCellLocator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStaticCellLocator\nC++: vtkStaticCellLocator *NewInstance()\n\nStandard methods to instantiate, print and obtain type-related\ninformation.\n"},
  {"SetDivisions", PyvtkStaticCellLocator_SetDivisions, METH_VARARGS,
   "V.SetDivisions(int, int, int)\nC++: void SetDivisions(int, int, int)\nV.SetDivisions((int, int, int))\nC++: void SetDivisions(int a[3])\n\n"},
  {"GetDivisions", PyvtkStaticCellLocator_GetDivisions, METH_VARARGS,
   "V.GetDivisions() -> (int, int, int)\nC++: int *GetDivisions()\n\nSet the number of divisions in x-y-z directions. If the Automatic\ndata member is enabled, the Divisions are set according to the\nNumberOfCellsPerNode and MaxNumberOfBuckets data members. The\nnumber of divisions must be >= 1 in each direction.\n"},
  {"FindCell", PyvtkStaticCellLocator_FindCell, METH_VARARGS,
   "V.FindCell([float, float, float], float, vtkGenericCell, [float,\n    float, float], [float, ...]) -> int\nC++: vtkIdType FindCell(double pos[3], double,\n    vtkGenericCell *cell, double pcoords[3], double *weights)\n    override;\nV.FindCell([float, float, float]) -> int\nC++: vtkIdType FindCell(double x[3]) override;\n\nTest a point to find if it is inside a cell. Returns the cellId\nif inside or -1 if not.\n"},
  {"FindCellsWithinBounds", PyvtkStaticCellLocator_FindCellsWithinBounds, METH_VARARGS,
   "V.FindCellsWithinBounds([float, ...], vtkIdList)\nC++: void FindCellsWithinBounds(double *bbox, vtkIdList *cells)\n    override;\n\nReturn a list of unique cell ids inside of a given bounding box.\nThe user must provide the vtkIdList to populate. This method\nreturns data only after the locator has been built.\n"},
  {"FindCellsAlongLine", PyvtkStaticCellLocator_FindCellsAlongLine, METH_VARARGS,
   "V.FindCellsAlongLine((float, float, float), (float, float, float),\n     float, vtkIdList)\nC++: void FindCellsAlongLine(const double p1[3],\n    const double p2[3], double tolerance, vtkIdList *cells)\n    override;\n\nGiven a finite line defined by the two points (p1,p2), return the\nlist of unique cell ids in the buckets containing the line. It is\npossible that an empty cell list is returned. The user must\nprovide the vtkIdList cell list to populate. This method returns\ndata only after the locator has been built.\n"},
  {"IntersectWithLine", PyvtkStaticCellLocator_IntersectWithLine, METH_VARARGS,
   "V.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int, int, vtkGenericCell) -> int\nC++: int IntersectWithLine(const double a0[3], const double a1[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId, vtkGenericCell *cell) override;\nV.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId) override;\nV.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int, int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId) override;\nV.IntersectWithLine((float, float, float), (float, float, float),\n    vtkPoints, vtkIdList) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     vtkPoints *points, vtkIdList *cellIds) override;\n\nReturn intersection point (if any) AND the cell which was\nintersected by the finite line. The cell is returned as a cell id\nand as a generic cell.\n"},
  {"GenerateRepresentation", PyvtkStaticCellLocator_GenerateRepresentation, METH_VARARGS,
   "V.GenerateRepresentation(int, vtkPolyData)\nC++: void GenerateRepresentation(int level, vtkPolyData *pd)\n    override;\n\nSatisfy vtkLocator abstract interface.\n"},
  {"FreeSearchStructure", PyvtkStaticCellLocator_FreeSearchStructure, METH_VARARGS,
   "V.FreeSearchStructure()\nC++: void FreeSearchStructure() override;\n\nSatisfy vtkLocator abstract interface.\n"},
  {"BuildLocator", PyvtkStaticCellLocator_BuildLocator, METH_VARARGS,
   "V.BuildLocator()\nC++: void BuildLocator() override;\n\nSatisfy vtkLocator abstract interface.\n"},
  {"SetMaxNumberOfBuckets", PyvtkStaticCellLocator_SetMaxNumberOfBuckets, METH_VARARGS,
   "V.SetMaxNumberOfBuckets(int)\nC++: virtual void SetMaxNumberOfBuckets(vtkIdType _arg)\n\nSet the maximum number of buckets in the locator. By default the\nvalue is set to VTK_INT_MAX. Note that there are significant\nperformance implications at work here. If the number of buckets\nis set very large (meaning > VTK_INT_MAX) then internal sorting\nmay be performed using 64-bit integers (which is much slower than\nusing a 32-bit int). Of course, memory requirements may\ndramatically increase as well.  It is recommended that the\ndefault value be used; but for extremely large data it may be\ndesired to create a locator with an exceptionally large number of\nbuckets. Note also that during initialization of the locator if\nthe MaxNumberOfBuckets threshold is exceeded, the Divisions are\nscaled down in such a way as not to exceed the MaxNumberOfBuckets\nproportionally to the size of the bounding box in the x-y-z\ndirections.\n"},
  {"GetMaxNumberOfBucketsMinValue", PyvtkStaticCellLocator_GetMaxNumberOfBucketsMinValue, METH_VARARGS,
   "V.GetMaxNumberOfBucketsMinValue() -> int\nC++: virtual vtkIdType GetMaxNumberOfBucketsMinValue()\n\nSet the maximum number of buckets in the locator. By default the\nvalue is set to VTK_INT_MAX. Note that there are significant\nperformance implications at work here. If the number of buckets\nis set very large (meaning > VTK_INT_MAX) then internal sorting\nmay be performed using 64-bit integers (which is much slower than\nusing a 32-bit int). Of course, memory requirements may\ndramatically increase as well.  It is recommended that the\ndefault value be used; but for extremely large data it may be\ndesired to create a locator with an exceptionally large number of\nbuckets. Note also that during initialization of the locator if\nthe MaxNumberOfBuckets threshold is exceeded, the Divisions are\nscaled down in such a way as not to exceed the MaxNumberOfBuckets\nproportionally to the size of the bounding box in the x-y-z\ndirections.\n"},
  {"GetMaxNumberOfBucketsMaxValue", PyvtkStaticCellLocator_GetMaxNumberOfBucketsMaxValue, METH_VARARGS,
   "V.GetMaxNumberOfBucketsMaxValue() -> int\nC++: virtual vtkIdType GetMaxNumberOfBucketsMaxValue()\n\nSet the maximum number of buckets in the locator. By default the\nvalue is set to VTK_INT_MAX. Note that there are significant\nperformance implications at work here. If the number of buckets\nis set very large (meaning > VTK_INT_MAX) then internal sorting\nmay be performed using 64-bit integers (which is much slower than\nusing a 32-bit int). Of course, memory requirements may\ndramatically increase as well.  It is recommended that the\ndefault value be used; but for extremely large data it may be\ndesired to create a locator with an exceptionally large number of\nbuckets. Note also that during initialization of the locator if\nthe MaxNumberOfBuckets threshold is exceeded, the Divisions are\nscaled down in such a way as not to exceed the MaxNumberOfBuckets\nproportionally to the size of the bounding box in the x-y-z\ndirections.\n"},
  {"GetMaxNumberOfBuckets", PyvtkStaticCellLocator_GetMaxNumberOfBuckets, METH_VARARGS,
   "V.GetMaxNumberOfBuckets() -> int\nC++: virtual vtkIdType GetMaxNumberOfBuckets()\n\nSet the maximum number of buckets in the locator. By default the\nvalue is set to VTK_INT_MAX. Note that there are significant\nperformance implications at work here. If the number of buckets\nis set very large (meaning > VTK_INT_MAX) then internal sorting\nmay be performed using 64-bit integers (which is much slower than\nusing a 32-bit int). Of course, memory requirements may\ndramatically increase as well.  It is recommended that the\ndefault value be used; but for extremely large data it may be\ndesired to create a locator with an exceptionally large number of\nbuckets. Note also that during initialization of the locator if\nthe MaxNumberOfBuckets threshold is exceeded, the Divisions are\nscaled down in such a way as not to exceed the MaxNumberOfBuckets\nproportionally to the size of the bounding box in the x-y-z\ndirections.\n"},
  {"GetLargeIds", PyvtkStaticCellLocator_GetLargeIds, METH_VARARGS,
   "V.GetLargeIds() -> bool\nC++: bool GetLargeIds()\n\nInform the user as to whether large ids are being used. This flag\nonly has meaning after the locator has been built. Large ids are\nused when the number of binned points, or the number of bins, is\n>= the maximum number of buckets (specified by the user). Note\nthat LargeIds are only available on 64-bit architectures.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStaticCellLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkStaticCellLocator", // tp_name
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
  PyvtkStaticCellLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStaticCellLocator_StaticNew()
{
  return vtkStaticCellLocator::New();
}

PyObject *PyvtkStaticCellLocator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStaticCellLocator_Type, PyvtkStaticCellLocator_Methods,
    "vtkStaticCellLocator",
 &PyvtkStaticCellLocator_StaticNew);

  PyTypeObject *pytype = &PyvtkStaticCellLocator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractCellLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStaticCellLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStaticCellLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStaticCellLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

