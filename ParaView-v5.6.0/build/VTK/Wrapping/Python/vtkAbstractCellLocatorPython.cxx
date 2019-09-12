// python wrapper for vtkAbstractCellLocator
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
#include "vtkAbstractCellLocator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractCellLocator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractCellLocator_ClassNew(); }

#ifndef DECLARED_PyvtkLocator_ClassNew
extern "C" { PyObject *PyvtkLocator_ClassNew(); }
#define DECLARED_PyvtkLocator_ClassNew
#endif

static const char *PyvtkAbstractCellLocator_Doc =
  "vtkAbstractCellLocator - an abstract base class for locators which\nfind cells\n\n"
  "Superclass: vtkLocator\n\n"
  "vtkAbstractCellLocator is a spatial search object to quickly locate\n"
  "cells in 3D. vtkAbstractCellLocator supplies a basic interface which\n"
  "concrete subclasses should implement.\n\n"
  "@warning\n"
  "When deriving a class from vtkAbstractCellLocator, one should include\n"
  "the 'hidden' member functions by the following construct in the\n"
  "derived class\n"
  "  using vtkAbstractCellLocator::IntersectWithLine;\n"
  "  using vtkAbstractCellLocator::FindClosestPoint;\n"
  "  using vtkAbstractCellLocator::FindClosestPointWithinRadius;\n"
  " \n\n"
  "@sa\n"
  "vtkLocator vtkPointLocator vtkOBBTree vtkCellLocator\n\n";


static PyObject *
PyvtkAbstractCellLocator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractCellLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractCellLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractCellLocator *tempr = vtkAbstractCellLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractCellLocator::NewInstance());

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
PyvtkAbstractCellLocator_SetNumberOfCellsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCellsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCellsPerNode(temp0);
    }
    else
    {
      op->vtkAbstractCellLocator::SetNumberOfCellsPerNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetNumberOfCellsPerNodeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerNodeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellsPerNodeMinValue() :
      op->vtkAbstractCellLocator::GetNumberOfCellsPerNodeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetNumberOfCellsPerNodeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerNodeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellsPerNodeMaxValue() :
      op->vtkAbstractCellLocator::GetNumberOfCellsPerNodeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetNumberOfCellsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellsPerNode() :
      op->vtkAbstractCellLocator::GetNumberOfCellsPerNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SetCacheCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheCellBounds(temp0);
    }
    else
    {
      op->vtkAbstractCellLocator::SetCacheCellBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetCacheCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheCellBounds() :
      op->vtkAbstractCellLocator::GetCacheCellBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_CacheCellBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheCellBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheCellBoundsOn();
    }
    else
    {
      op->vtkAbstractCellLocator::CacheCellBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_CacheCellBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheCellBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheCellBoundsOff();
    }
    else
    {
      op->vtkAbstractCellLocator::CacheCellBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SetRetainCellLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRetainCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRetainCellLists(temp0);
    }
    else
    {
      op->vtkAbstractCellLocator::SetRetainCellLists(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetRetainCellLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRetainCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRetainCellLists() :
      op->vtkAbstractCellLocator::GetRetainCellLists());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_RetainCellListsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RetainCellListsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RetainCellListsOn();
    }
    else
    {
      op->vtkAbstractCellLocator::RetainCellListsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_RetainCellListsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RetainCellListsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RetainCellListsOff();
    }
    else
    {
      op->vtkAbstractCellLocator::RetainCellListsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SetLazyEvaluation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLazyEvaluation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLazyEvaluation(temp0);
    }
    else
    {
      op->vtkAbstractCellLocator::SetLazyEvaluation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetLazyEvaluation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLazyEvaluation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLazyEvaluation() :
      op->vtkAbstractCellLocator::GetLazyEvaluation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_LazyEvaluationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyEvaluationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LazyEvaluationOn();
    }
    else
    {
      op->vtkAbstractCellLocator::LazyEvaluationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_LazyEvaluationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LazyEvaluationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LazyEvaluationOff();
    }
    else
    {
      op->vtkAbstractCellLocator::LazyEvaluationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SetUseExistingSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseExistingSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseExistingSearchStructure(temp0);
    }
    else
    {
      op->vtkAbstractCellLocator::SetUseExistingSearchStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetUseExistingSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseExistingSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseExistingSearchStructure() :
      op->vtkAbstractCellLocator::GetUseExistingSearchStructure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_UseExistingSearchStructureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseExistingSearchStructureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseExistingSearchStructureOn();
    }
    else
    {
      op->vtkAbstractCellLocator::UseExistingSearchStructureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_UseExistingSearchStructureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseExistingSearchStructureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseExistingSearchStructureOff();
    }
    else
    {
      op->vtkAbstractCellLocator::UseExistingSearchStructureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_IntersectWithLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkAbstractCellLocator_IntersectWithLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkAbstractCellLocator_IntersectWithLine_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

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
PyvtkAbstractCellLocator_IntersectWithLine_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_IntersectWithLine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return PyvtkAbstractCellLocator_IntersectWithLine_s1(self, args);
    case 8:
      return PyvtkAbstractCellLocator_IntersectWithLine_s2(self, args);
    case 9:
      return PyvtkAbstractCellLocator_IntersectWithLine_s3(self, args);
    case 4:
      return PyvtkAbstractCellLocator_IntersectWithLine_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWithLine");
  return nullptr;
}



static PyObject *
PyvtkAbstractCellLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  vtkIdType temp2;
  int temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->FindClosestPoint(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkAbstractCellLocator::FindClosestPoint(temp0, temp1, temp2, temp3, temp4);
    }

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
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  vtkGenericCell *temp2 = nullptr;
  vtkIdType temp3;
  int temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->FindClosestPoint(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkAbstractCellLocator::FindClosestPoint(temp0, temp1, temp2, temp3, temp4, temp5);
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
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkAbstractCellLocator_FindClosestPoint_s1(self, args);
    case 6:
      return PyvtkAbstractCellLocator_FindClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return nullptr;
}



static PyObject *
PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  vtkIdType temp3;
  int temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkAbstractCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  vtkGenericCell *temp3 = nullptr;
  vtkIdType temp4;
  int temp5;
  double temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkGenericCell") &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkAbstractCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
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
PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  vtkGenericCell *temp3 = nullptr;
  vtkIdType temp4;
  int temp5;
  double temp6;
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkGenericCell") &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkAbstractCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
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
PyvtkAbstractCellLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s1(self, args);
    case 7:
      return PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s2(self, args);
    case 8:
      return PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPointWithinRadius");
  return nullptr;
}



static PyObject *
PyvtkAbstractCellLocator_FindCellsWithinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsWithinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindCellsWithinBounds(temp0, temp1);
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
PyvtkAbstractCellLocator_FindCellsAlongLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsAlongLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindCellsAlongLine(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindCell(temp0));

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
PyvtkAbstractCellLocator_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindCell(temp0, temp1, temp2, temp3, temp4));

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
PyvtkAbstractCellLocator_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAbstractCellLocator_FindCell_s1(self, args);
    case 5:
      return PyvtkAbstractCellLocator_FindCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}



static PyObject *
PyvtkAbstractCellLocator_InsideCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->InsideCellBounds(temp0, temp1) :
      op->vtkAbstractCellLocator::InsideCellBounds(temp0, temp1));

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

static PyMethodDef PyvtkAbstractCellLocator_Methods[] = {
  {"IsTypeOf", PyvtkAbstractCellLocator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type and print methods.\n"},
  {"IsA", PyvtkAbstractCellLocator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type and print methods.\n"},
  {"SafeDownCast", PyvtkAbstractCellLocator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractCellLocator\nC++: static vtkAbstractCellLocator *SafeDownCast(vtkObjectBase *o)\n\nStandard type and print methods.\n"},
  {"NewInstance", PyvtkAbstractCellLocator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractCellLocator\nC++: vtkAbstractCellLocator *NewInstance()\n\nStandard type and print methods.\n"},
  {"SetNumberOfCellsPerNode", PyvtkAbstractCellLocator_SetNumberOfCellsPerNode, METH_VARARGS,
   "V.SetNumberOfCellsPerNode(int)\nC++: virtual void SetNumberOfCellsPerNode(int _arg)\n\nSpecify the preferred/maximum number of cells in each\nnode/bucket. Default 32. Locators generally operate by\nsubdividing space into smaller regions until the number of cells\nin each region (or node) reaches the desired level.\n"},
  {"GetNumberOfCellsPerNodeMinValue", PyvtkAbstractCellLocator_GetNumberOfCellsPerNodeMinValue, METH_VARARGS,
   "V.GetNumberOfCellsPerNodeMinValue() -> int\nC++: virtual int GetNumberOfCellsPerNodeMinValue()\n\nSpecify the preferred/maximum number of cells in each\nnode/bucket. Default 32. Locators generally operate by\nsubdividing space into smaller regions until the number of cells\nin each region (or node) reaches the desired level.\n"},
  {"GetNumberOfCellsPerNodeMaxValue", PyvtkAbstractCellLocator_GetNumberOfCellsPerNodeMaxValue, METH_VARARGS,
   "V.GetNumberOfCellsPerNodeMaxValue() -> int\nC++: virtual int GetNumberOfCellsPerNodeMaxValue()\n\nSpecify the preferred/maximum number of cells in each\nnode/bucket. Default 32. Locators generally operate by\nsubdividing space into smaller regions until the number of cells\nin each region (or node) reaches the desired level.\n"},
  {"GetNumberOfCellsPerNode", PyvtkAbstractCellLocator_GetNumberOfCellsPerNode, METH_VARARGS,
   "V.GetNumberOfCellsPerNode() -> int\nC++: virtual int GetNumberOfCellsPerNode()\n\nSpecify the preferred/maximum number of cells in each\nnode/bucket. Default 32. Locators generally operate by\nsubdividing space into smaller regions until the number of cells\nin each region (or node) reaches the desired level.\n"},
  {"SetCacheCellBounds", PyvtkAbstractCellLocator_SetCacheCellBounds, METH_VARARGS,
   "V.SetCacheCellBounds(int)\nC++: virtual void SetCacheCellBounds(vtkTypeBool _arg)\n\nBoolean controls whether the bounds of each cell are computed\nonly once and then saved.  Should be 10 to 20% faster if\nrepeatedly calling any of the Intersect/Find routines and the\nextra memory won't cause disk caching (24 extra bytes per cell\nare required to save the bounds).\n"},
  {"GetCacheCellBounds", PyvtkAbstractCellLocator_GetCacheCellBounds, METH_VARARGS,
   "V.GetCacheCellBounds() -> int\nC++: virtual vtkTypeBool GetCacheCellBounds()\n\nBoolean controls whether the bounds of each cell are computed\nonly once and then saved.  Should be 10 to 20% faster if\nrepeatedly calling any of the Intersect/Find routines and the\nextra memory won't cause disk caching (24 extra bytes per cell\nare required to save the bounds).\n"},
  {"CacheCellBoundsOn", PyvtkAbstractCellLocator_CacheCellBoundsOn, METH_VARARGS,
   "V.CacheCellBoundsOn()\nC++: virtual void CacheCellBoundsOn()\n\nBoolean controls whether the bounds of each cell are computed\nonly once and then saved.  Should be 10 to 20% faster if\nrepeatedly calling any of the Intersect/Find routines and the\nextra memory won't cause disk caching (24 extra bytes per cell\nare required to save the bounds).\n"},
  {"CacheCellBoundsOff", PyvtkAbstractCellLocator_CacheCellBoundsOff, METH_VARARGS,
   "V.CacheCellBoundsOff()\nC++: virtual void CacheCellBoundsOff()\n\nBoolean controls whether the bounds of each cell are computed\nonly once and then saved.  Should be 10 to 20% faster if\nrepeatedly calling any of the Intersect/Find routines and the\nextra memory won't cause disk caching (24 extra bytes per cell\nare required to save the bounds).\n"},
  {"SetRetainCellLists", PyvtkAbstractCellLocator_SetRetainCellLists, METH_VARARGS,
   "V.SetRetainCellLists(int)\nC++: virtual void SetRetainCellLists(vtkTypeBool _arg)\n\nBoolean controls whether to maintain list of cells in each node.\nnot applicable to all implementations, but if the locator is\nbeing used as a geometry simplification technique, there is no\nneed to keep them.\n"},
  {"GetRetainCellLists", PyvtkAbstractCellLocator_GetRetainCellLists, METH_VARARGS,
   "V.GetRetainCellLists() -> int\nC++: virtual vtkTypeBool GetRetainCellLists()\n\nBoolean controls whether to maintain list of cells in each node.\nnot applicable to all implementations, but if the locator is\nbeing used as a geometry simplification technique, there is no\nneed to keep them.\n"},
  {"RetainCellListsOn", PyvtkAbstractCellLocator_RetainCellListsOn, METH_VARARGS,
   "V.RetainCellListsOn()\nC++: virtual void RetainCellListsOn()\n\nBoolean controls whether to maintain list of cells in each node.\nnot applicable to all implementations, but if the locator is\nbeing used as a geometry simplification technique, there is no\nneed to keep them.\n"},
  {"RetainCellListsOff", PyvtkAbstractCellLocator_RetainCellListsOff, METH_VARARGS,
   "V.RetainCellListsOff()\nC++: virtual void RetainCellListsOff()\n\nBoolean controls whether to maintain list of cells in each node.\nnot applicable to all implementations, but if the locator is\nbeing used as a geometry simplification technique, there is no\nneed to keep them.\n"},
  {"SetLazyEvaluation", PyvtkAbstractCellLocator_SetLazyEvaluation, METH_VARARGS,
   "V.SetLazyEvaluation(int)\nC++: virtual void SetLazyEvaluation(vtkTypeBool _arg)\n\nMost Locators build their search structures during BuildLocator\nbut some may delay construction until it is actually needed. If\nLazyEvaluation is supported, this turns on/off the feature. if\nnot supported, it is ignored.\n"},
  {"GetLazyEvaluation", PyvtkAbstractCellLocator_GetLazyEvaluation, METH_VARARGS,
   "V.GetLazyEvaluation() -> int\nC++: virtual vtkTypeBool GetLazyEvaluation()\n\nMost Locators build their search structures during BuildLocator\nbut some may delay construction until it is actually needed. If\nLazyEvaluation is supported, this turns on/off the feature. if\nnot supported, it is ignored.\n"},
  {"LazyEvaluationOn", PyvtkAbstractCellLocator_LazyEvaluationOn, METH_VARARGS,
   "V.LazyEvaluationOn()\nC++: virtual void LazyEvaluationOn()\n\nMost Locators build their search structures during BuildLocator\nbut some may delay construction until it is actually needed. If\nLazyEvaluation is supported, this turns on/off the feature. if\nnot supported, it is ignored.\n"},
  {"LazyEvaluationOff", PyvtkAbstractCellLocator_LazyEvaluationOff, METH_VARARGS,
   "V.LazyEvaluationOff()\nC++: virtual void LazyEvaluationOff()\n\nMost Locators build their search structures during BuildLocator\nbut some may delay construction until it is actually needed. If\nLazyEvaluation is supported, this turns on/off the feature. if\nnot supported, it is ignored.\n"},
  {"SetUseExistingSearchStructure", PyvtkAbstractCellLocator_SetUseExistingSearchStructure, METH_VARARGS,
   "V.SetUseExistingSearchStructure(int)\nC++: virtual void SetUseExistingSearchStructure(vtkTypeBool _arg)\n\nSome locators support querying a new dataset without rebuilding\nthe search structure (typically this may occur when a dataset\nchanges due to a time update, but is actually the same topology)\nTurning on this flag enables some locators to skip the rebuilding\nphase\n"},
  {"GetUseExistingSearchStructure", PyvtkAbstractCellLocator_GetUseExistingSearchStructure, METH_VARARGS,
   "V.GetUseExistingSearchStructure() -> int\nC++: virtual vtkTypeBool GetUseExistingSearchStructure()\n\nSome locators support querying a new dataset without rebuilding\nthe search structure (typically this may occur when a dataset\nchanges due to a time update, but is actually the same topology)\nTurning on this flag enables some locators to skip the rebuilding\nphase\n"},
  {"UseExistingSearchStructureOn", PyvtkAbstractCellLocator_UseExistingSearchStructureOn, METH_VARARGS,
   "V.UseExistingSearchStructureOn()\nC++: virtual void UseExistingSearchStructureOn()\n\nSome locators support querying a new dataset without rebuilding\nthe search structure (typically this may occur when a dataset\nchanges due to a time update, but is actually the same topology)\nTurning on this flag enables some locators to skip the rebuilding\nphase\n"},
  {"UseExistingSearchStructureOff", PyvtkAbstractCellLocator_UseExistingSearchStructureOff, METH_VARARGS,
   "V.UseExistingSearchStructureOff()\nC++: virtual void UseExistingSearchStructureOff()\n\nSome locators support querying a new dataset without rebuilding\nthe search structure (typically this may occur when a dataset\nchanges due to a time update, but is actually the same topology)\nTurning on this flag enables some locators to skip the rebuilding\nphase\n"},
  {"IntersectWithLine", PyvtkAbstractCellLocator_IntersectWithLine, METH_VARARGS,
   "V.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, double &t, double x[3],\n    double pcoords[3], int &subId)\nV.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int, int) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, double &t, double x[3],\n    double pcoords[3], int &subId, vtkIdType &cellId)\nV.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int, int, vtkGenericCell) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, double &t, double x[3],\n    double pcoords[3], int &subId, vtkIdType &cellId,\n    vtkGenericCell *cell)\nV.IntersectWithLine((float, float, float), (float, float, float),\n    vtkPoints, vtkIdList) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], vtkPoints *points, vtkIdList *cellIds)\n\nReturn intersection point (if any) of finite line with cells\ncontained in cell locator. See vtkCell.h parameters\ndocumentation.\n"},
  {"FindClosestPoint", PyvtkAbstractCellLocator_FindClosestPoint, METH_VARARGS,
   "V.FindClosestPoint((float, float, float), [float, float, float],\n    int, int, float)\nC++: virtual void FindClosestPoint(const double x[3],\n    double closestPoint[3], vtkIdType &cellId, int &subId,\n    double &dist2)\nV.FindClosestPoint((float, float, float), [float, float, float],\n    vtkGenericCell, int, int, float)\nC++: virtual void FindClosestPoint(const double x[3],\n    double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2)\n\nReturn the closest point and the cell which is closest to the\npoint x. The closest point is somewhere on a cell, it need not be\none of the vertices of the cell.\n"},
  {"FindClosestPointWithinRadius", PyvtkAbstractCellLocator_FindClosestPointWithinRadius, METH_VARARGS,
   "V.FindClosestPointWithinRadius([float, float, float], float,\n    [float, float, float], int, int, float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkIdType &cellId,\n    int &subId, double &dist2)\nV.FindClosestPointWithinRadius([float, float, float], float,\n    [float, float, float], vtkGenericCell, int, int, float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2)\nV.FindClosestPointWithinRadius([float, float, float], float,\n    [float, float, float], vtkGenericCell, int, int, float, int)\n    -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2, int &inside)\n\nReturn the closest point within a specified radius and the cell\nwhich is closest to the point x. The closest point is somewhere\non a cell, it need not be one of the vertices of the cell. This\nmethod returns 1 if a point is found within the specified radius.\nIf there are no cells within the specified radius, the method\nreturns 0 and the values of closestPoint, cellId, subId, and\ndist2 are undefined.\n"},
  {"FindCellsWithinBounds", PyvtkAbstractCellLocator_FindCellsWithinBounds, METH_VARARGS,
   "V.FindCellsWithinBounds([float, ...], vtkIdList)\nC++: virtual void FindCellsWithinBounds(double *bbox,\n    vtkIdList *cells)\n\nReturn a list of unique cell ids inside of a given bounding box.\nThe user must provide the vtkIdList to populate. This method\nreturns data only after the locator has been built.\n"},
  {"FindCellsAlongLine", PyvtkAbstractCellLocator_FindCellsAlongLine, METH_VARARGS,
   "V.FindCellsAlongLine((float, float, float), (float, float, float),\n     float, vtkIdList)\nC++: virtual void FindCellsAlongLine(const double p1[3],\n    const double p2[3], double tolerance, vtkIdList *cells)\n\nGiven a finite line defined by the two points (p1,p2), return the\nlist of unique cell ids in the buckets containing the line. It is\npossible that an empty cell list is returned. The user must\nprovide the vtkIdList to populate. This method returns data only\nafter the locator has been built.\n"},
  {"FindCell", PyvtkAbstractCellLocator_FindCell, METH_VARARGS,
   "V.FindCell([float, float, float]) -> int\nC++: virtual vtkIdType FindCell(double x[3])\nV.FindCell([float, float, float], float, vtkGenericCell, [float,\n    float, float], [float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], double tol2,\n    vtkGenericCell *GenCell, double pcoords[3], double *weights)\n\nReturns the Id of the cell containing the point, returns -1 if no\ncell found. This interface uses a tolerance of zero\n"},
  {"InsideCellBounds", PyvtkAbstractCellLocator_InsideCellBounds, METH_VARARGS,
   "V.InsideCellBounds([float, float, float], int) -> bool\nC++: virtual bool InsideCellBounds(double x[3], vtkIdType cell_ID)\n\nQuickly test if a point is inside the bounds of a particular\ncell. Some locators cache cell bounds and this function can make\nuse of fast access to the data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractCellLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkAbstractCellLocator", // tp_name
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
  PyvtkAbstractCellLocator_Doc, // tp_doc
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

PyObject *PyvtkAbstractCellLocator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractCellLocator_Type, PyvtkAbstractCellLocator_Methods,
    "vtkAbstractCellLocator",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractCellLocator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractCellLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractCellLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractCellLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

