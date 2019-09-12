// python wrapper for vtkAbstractInterpolatedVelocityField
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
#include "vtkAbstractInterpolatedVelocityField.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractInterpolatedVelocityField(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractInterpolatedVelocityField_ClassNew(); }

#ifndef DECLARED_PyvtkFunctionSet_ClassNew
extern "C" { PyObject *PyvtkFunctionSet_ClassNew(); }
#define DECLARED_PyvtkFunctionSet_ClassNew
#endif

static const char *PyvtkAbstractInterpolatedVelocityField_Doc =
  "vtkAbstractInterpolatedVelocityField - An abstract class for\n obtaining the interpolated velocity values at a point\n\n"
  "Superclass: vtkFunctionSet\n\n"
  "vtkAbstractInterpolatedVelocityField acts as a continuous velocity\n"
  "field\n"
  " by performing cell interpolation on the underlying vtkDataSet. This\n"
  "is an\n"
  " abstract sub-class of vtkFunctionSet, NumberOfIndependentVariables =\n"
  "4\n"
  " (x,y,z,t) and NumberOfFunctions = 3 (u,v,w). With a brute-force\n"
  "scheme,\n"
  " every time an evaluation is performed, the target cell containing\n"
  "point\n"
  " (x,y,z) needs to be found by calling FindCell(), via either\n"
  "vtkDataSet or\n"
  " vtkAbstractCelllocator's sub-classes (vtkCellLocator &\n"
  "vtkModifiedBSPTree).\n"
  " As it incurs a large cost, one (for\n"
  "vtkCellLocatorInterpolatedVelocityField\n"
  " via vtkAbstractCellLocator) or two (for vtkInterpolatedVelocityField\n"
  "via\n"
  " vtkDataSet that involves vtkPointLocator in addressing vtkPointSet)\n"
  "levels\n"
  " of cell caching may be exploited to increase the performance.\n\n\n"
  " For vtkInterpolatedVelocityField, level #0 begins with intra-cell\n"
  "caching.\n"
  " Specifically if the previous cell is valid and the next point is\n"
  "still in\n"
  " it ( i.e., vtkCell::EvaluatePosition() returns 1, coupled with newly\n"
  "created\n"
  " parametric coordinates & weights ), the function values can be\n"
  "interpolated\n"
  " and only vtkCell::EvaluatePosition() is invoked. If this fails, then\n"
  "level #1\n"
  " follows by inter-cell search for the target cell that contains the\n"
  "next point.\n"
  " By an inter-cell search, the previous cell provides an important\n"
  "clue or serves\n"
  " as an immediate neighbor to aid in locating the target cell via\n"
  "vtkPointSet::\n"
  " FindCell(). If this still fails, a global cell location / search is\n"
  "invoked via\n"
  " vtkPointSet::FindCell(). Here regardless of either inter-cell or\n"
  "global search,\n"
  " vtkPointLocator is in fact employed (for datasets of type\n"
  "vtkPointSet only, note\n"
  " vtkImageData and vtkRectilinearGrid are able to provide rapid and\n"
  "robust cell\n"
  " location due to the simple mesh topology) as a crucial tool\n"
  "underlying the cell\n"
  " locator. However, the use of vtkPointLocator makes\n"
  "vtkInterpolatedVelocityField\n"
  " non-robust in cell location for vtkPointSet.\n\n\n"
  " For vtkCellLocatorInterpolatedVelocityField, the only caching (level\n"
  "#0) works\n"
  " by intra-cell trial. In case of failure, a global search for the\n"
  "target cell is\n"
  " invoked via vtkAbstractCellLocator::FindCell() and the actual work\n"
  "is done by\n"
  " either vtkCellLocator or vtkModifiedBSPTree (for datasets of type\n"
  "vtkPointSet\n"
  " only, while vtkImageData and vtkRectilinearGrid themselves are able\n"
  "to provide\n"
  " fast robust cell location). Without the involvement of\n"
  "vtkPointLocator, robust\n"
  " cell location is achieved for vtkPointSet.\n\n"
  "@warning\n"
  " vtkAbstractInterpolatedVelocityField is not thread safe. A new\n"
  "instance\n"
  " should be created by each thread.\n\n"
  "@sa\n"
  " vtkInterpolatedVelocityField vtkCellLocatorInterpolatedVelocityField\n"
  " vtkGenericInterpolatedVelocityField\n"
  "vtkCachingInterpolatedVelocityField\n"
  " vtkTemporalInterpolatedVelocityField vtkFunctionSet vtkStreamTracer\n\n";


static PyObject *
PyvtkAbstractInterpolatedVelocityField_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractInterpolatedVelocityField *tempr = vtkAbstractInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractInterpolatedVelocityField::NewInstance());

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
PyvtkAbstractInterpolatedVelocityField_SetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCaching(temp0);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::SetCaching(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCaching() :
      op->vtkAbstractInterpolatedVelocityField::GetCaching());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheHit() :
      op->vtkAbstractInterpolatedVelocityField::GetCacheHit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetCacheMiss(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMiss");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheMiss() :
      op->vtkAbstractInterpolatedVelocityField::GetCacheMiss());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetLastDataSet() :
      op->vtkAbstractInterpolatedVelocityField::GetLastDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetLastCellId() :
      op->vtkAbstractInterpolatedVelocityField::GetLastCellId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastCellId(temp0);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::SetLastCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetLastCellId(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetLastCellId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s1(self, args);
    case 2:
      return PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLastCellId");
  return nullptr;
}



static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsSelection() :
      op->vtkAbstractInterpolatedVelocityField::GetVectorsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetVectorsType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorsType() :
      op->vtkAbstractInterpolatedVelocityField::GetVectorsType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SelectVectors(temp0, temp1);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::SelectVectors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetNormalizeVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizeVector(temp0);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::SetNormalizeVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetNormalizeVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNormalizeVector() :
      op->vtkAbstractInterpolatedVelocityField::GetNormalizeVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetForceSurfaceTangentVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceSurfaceTangentVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceSurfaceTangentVector(temp0);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::SetForceSurfaceTangentVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetForceSurfaceTangentVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceSurfaceTangentVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceSurfaceTangentVector() :
      op->vtkAbstractInterpolatedVelocityField::GetForceSurfaceTangentVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetSurfaceDataset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceDataset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceDataset(temp0);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::SetSurfaceDataset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetSurfaceDataset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceDataset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSurfaceDataset() :
      op->vtkAbstractInterpolatedVelocityField::GetSurfaceDataset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkAbstractInterpolatedVelocityField *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractInterpolatedVelocityField"))
  {
    if (ap.IsBound())
    {
      op->CopyParameters(temp0);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::CopyParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = op->FunctionValues(temp0, temp1);

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_ClearLastCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLastCellId();
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::ClearLastCellId();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetLastWeights(temp0) :
      op->vtkAbstractInterpolatedVelocityField::GetLastWeights(temp0));

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
PyvtkAbstractInterpolatedVelocityField_GetLastLocalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastLocalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetLastLocalCoordinates(temp0) :
      op->vtkAbstractInterpolatedVelocityField::GetLastLocalCoordinates(temp0));

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

static PyMethodDef PyvtkAbstractInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkAbstractInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractInterpolatedVelocityField_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkAbstractInterpolatedVelocityField\nC++: static vtkAbstractInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractInterpolatedVelocityField\nC++: vtkAbstractInterpolatedVelocityField *NewInstance()\n\n"},
  {"SetCaching", PyvtkAbstractInterpolatedVelocityField_SetCaching, METH_VARARGS,
   "V.SetCaching(bool)\nC++: virtual void SetCaching(bool _arg)\n\nSet/Get the caching flag. If this flag is turned ON, there are\ntwo levels of caching for derived concrete class\nvtkInterpolatedVelocityField and one level of caching for derived\nconcrete class vtkCellLocatorInterpolatedVelocityField. Otherwise\na global cell location is always invoked for evaluating the\nfunction values at any point.\n"},
  {"GetCaching", PyvtkAbstractInterpolatedVelocityField_GetCaching, METH_VARARGS,
   "V.GetCaching() -> bool\nC++: virtual bool GetCaching()\n\nSet/Get the caching flag. If this flag is turned ON, there are\ntwo levels of caching for derived concrete class\nvtkInterpolatedVelocityField and one level of caching for derived\nconcrete class vtkCellLocatorInterpolatedVelocityField. Otherwise\na global cell location is always invoked for evaluating the\nfunction values at any point.\n"},
  {"GetCacheHit", PyvtkAbstractInterpolatedVelocityField_GetCacheHit, METH_VARARGS,
   "V.GetCacheHit() -> int\nC++: virtual int GetCacheHit()\n\nGet the caching statistics. CacheHit refers to the number of\nlevel #0 cache hits while CacheMiss is the number of level #0\ncache misses.\n"},
  {"GetCacheMiss", PyvtkAbstractInterpolatedVelocityField_GetCacheMiss, METH_VARARGS,
   "V.GetCacheMiss() -> int\nC++: virtual int GetCacheMiss()\n\nGet the caching statistics. CacheHit refers to the number of\nlevel #0 cache hits while CacheMiss is the number of level #0\ncache misses.\n"},
  {"GetLastDataSet", PyvtkAbstractInterpolatedVelocityField_GetLastDataSet, METH_VARARGS,
   "V.GetLastDataSet() -> vtkDataSet\nC++: virtual vtkDataSet *GetLastDataSet()\n\n"},
  {"GetLastCellId", PyvtkAbstractInterpolatedVelocityField_GetLastCellId, METH_VARARGS,
   "V.GetLastCellId() -> int\nC++: virtual vtkIdType GetLastCellId()\n\nGet/Set the id of the cell cached from last evaluation.\n"},
  {"SetLastCellId", PyvtkAbstractInterpolatedVelocityField_SetLastCellId, METH_VARARGS,
   "V.SetLastCellId(int)\nC++: virtual void SetLastCellId(vtkIdType c)\nV.SetLastCellId(int, int)\nC++: virtual void SetLastCellId(vtkIdType c, int dataindex)\n\nGet/Set the id of the cell cached from last evaluation.\n"},
  {"GetVectorsSelection", PyvtkAbstractInterpolatedVelocityField_GetVectorsSelection, METH_VARARGS,
   "V.GetVectorsSelection() -> string\nC++: virtual char *GetVectorsSelection()\n\nGet/Set the name of a spcified vector array. By default it is\nnullptr, with the active vector array for use.\n"},
  {"GetVectorsType", PyvtkAbstractInterpolatedVelocityField_GetVectorsType, METH_VARARGS,
   "V.GetVectorsType() -> int\nC++: virtual int GetVectorsType()\n\nGet/Set the name of a spcified vector array. By default it is\nnullptr, with the active vector array for use.\n"},
  {"SelectVectors", PyvtkAbstractInterpolatedVelocityField_SelectVectors, METH_VARARGS,
   "V.SelectVectors(int, string)\nC++: void SelectVectors(int fieldAssociation,\n    const char *fieldName)\n\nthe association type (see vtkDataObject::FieldAssociations) and\nthe name of the velocity data field\n"},
  {"SetNormalizeVector", PyvtkAbstractInterpolatedVelocityField_SetNormalizeVector, METH_VARARGS,
   "V.SetNormalizeVector(bool)\nC++: virtual void SetNormalizeVector(bool _arg)\n\nSet/Get the flag indicating vector post-normalization (following\nvector interpolation). Vector post-normalization is required to\navoid the 'curve-overshooting' problem (caused by high velocity\nmagnitude) that occurs when Cell-Length is used as the step size\nunit (particularly the Minimum step size unit). Furthermore, it\nis required by RK45 to achieve, as expected, high numerical\naccuracy (or high smoothness of flow lines) through adaptive step\nsizing. Note this operation is performed (when NormalizeVector\nTRUE) right after vector interpolation such that the differing\namount of contribution of each node (of a cell) to the resulting\ndirection of the interpolated vector, due to the possibly\nsignificantly-differing velocity magnitude values at the nodes\n(which is the case with large cells), can be reflected as is.\nAlso note that this flag needs to be turned to FALSE after\nvtkInitialValueProblemSolver:: ComputeNextStep() as subsequent\noperations, e.g., vorticity computation, may need non-normalized\nvectors.\n"},
  {"GetNormalizeVector", PyvtkAbstractInterpolatedVelocityField_GetNormalizeVector, METH_VARARGS,
   "V.GetNormalizeVector() -> bool\nC++: virtual bool GetNormalizeVector()\n\nSet/Get the flag indicating vector post-normalization (following\nvector interpolation). Vector post-normalization is required to\navoid the 'curve-overshooting' problem (caused by high velocity\nmagnitude) that occurs when Cell-Length is used as the step size\nunit (particularly the Minimum step size unit). Furthermore, it\nis required by RK45 to achieve, as expected, high numerical\naccuracy (or high smoothness of flow lines) through adaptive step\nsizing. Note this operation is performed (when NormalizeVector\nTRUE) right after vector interpolation such that the differing\namount of contribution of each node (of a cell) to the resulting\ndirection of the interpolated vector, due to the possibly\nsignificantly-differing velocity magnitude values at the nodes\n(which is the case with large cells), can be reflected as is.\nAlso note that this flag needs to be turned to FALSE after\nvtkInitialValueProblemSolver:: ComputeNextStep() as subsequent\noperations, e.g., vorticity computation, may need non-normalized\nvectors.\n"},
  {"SetForceSurfaceTangentVector", PyvtkAbstractInterpolatedVelocityField_SetForceSurfaceTangentVector, METH_VARARGS,
   "V.SetForceSurfaceTangentVector(bool)\nC++: virtual void SetForceSurfaceTangentVector(bool _arg)\n\nIf set to true, the first three point of the cell will be used to\ncompute a normal to the cell, this normal will then be removed\nfrom the vorticity so the resulting vector in tangent to the\ncell.\n"},
  {"GetForceSurfaceTangentVector", PyvtkAbstractInterpolatedVelocityField_GetForceSurfaceTangentVector, METH_VARARGS,
   "V.GetForceSurfaceTangentVector() -> bool\nC++: virtual bool GetForceSurfaceTangentVector()\n\nIf set to true, the first three point of the cell will be used to\ncompute a normal to the cell, this normal will then be removed\nfrom the vorticity so the resulting vector in tangent to the\ncell.\n"},
  {"SetSurfaceDataset", PyvtkAbstractInterpolatedVelocityField_SetSurfaceDataset, METH_VARARGS,
   "V.SetSurfaceDataset(bool)\nC++: virtual void SetSurfaceDataset(bool _arg)\n\nIf set to true, cell within tolerance factor will always be\nfound, except for edges.\n"},
  {"GetSurfaceDataset", PyvtkAbstractInterpolatedVelocityField_GetSurfaceDataset, METH_VARARGS,
   "V.GetSurfaceDataset() -> bool\nC++: virtual bool GetSurfaceDataset()\n\nIf set to true, cell within tolerance factor will always be\nfound, except for edges.\n"},
  {"CopyParameters", PyvtkAbstractInterpolatedVelocityField_CopyParameters, METH_VARARGS,
   "V.CopyParameters(vtkAbstractInterpolatedVelocityField)\nC++: virtual void CopyParameters(\n    vtkAbstractInterpolatedVelocityField *from)\n\nImport parameters. Sub-classes can add more after chaining.\n"},
  {"FunctionValues", PyvtkAbstractInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   "V.FunctionValues([float, ...], [float, ...]) -> int\nC++: int FunctionValues(double *x, double *f) override = 0;\n\nEvaluate the velocity field f at point (x, y, z).\n"},
  {"ClearLastCellId", PyvtkAbstractInterpolatedVelocityField_ClearLastCellId, METH_VARARGS,
   "V.ClearLastCellId()\nC++: void ClearLastCellId()\n\nSet the last cell id to -1 to incur a global cell search for the\nnext point.\n"},
  {"GetLastWeights", PyvtkAbstractInterpolatedVelocityField_GetLastWeights, METH_VARARGS,
   "V.GetLastWeights([float, ...]) -> int\nC++: int GetLastWeights(double *w)\n\nGet the interpolation weights cached from last evaluation. Return\n1 if the cached cell is valid and 0 otherwise.\n"},
  {"GetLastLocalCoordinates", PyvtkAbstractInterpolatedVelocityField_GetLastLocalCoordinates, METH_VARARGS,
   "V.GetLastLocalCoordinates([float, float, float]) -> int\nC++: int GetLastLocalCoordinates(double pcoords[3])\n\nGet the interpolation weights cached from last evaluation. Return\n1 if the cached cell is valid and 0 otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkAbstractInterpolatedVelocityField", // tp_name
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
  PyvtkAbstractInterpolatedVelocityField_Doc, // tp_doc
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

PyObject *PyvtkAbstractInterpolatedVelocityField_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractInterpolatedVelocityField_Type, PyvtkAbstractInterpolatedVelocityField_Methods,
    "vtkAbstractInterpolatedVelocityField",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractInterpolatedVelocityField_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkFunctionSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

}

