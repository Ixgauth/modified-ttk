// python wrapper for vtkGenericCell
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
#include "vtkGenericCell.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericCell(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericCell_ClassNew(); }

#ifndef DECLARED_PyvtkCell_ClassNew
extern "C" { PyObject *PyvtkCell_ClassNew(); }
#define DECLARED_PyvtkCell_ClassNew
#endif

static const char *PyvtkGenericCell_Doc =
  "vtkGenericCell - provides thread-safe access to cells\n\n"
  "Superclass: vtkCell\n\n"
  "vtkGenericCell is a class that provides access to concrete types of\n"
  "cells. It's main purpose is to allow thread-safe access to cells,\n"
  "supporting the vtkDataSet::GetCell(vtkGenericCell *) method.\n"
  "vtkGenericCell acts like any type of cell, it just dereferences an\n"
  "internal representation. The SetCellType() methods use #define\n"
  "constants; these are defined in the file vtkCellType.h.\n\n"
  "@sa\n"
  "vtkCell vtkDataSet\n\n";


static PyObject *
PyvtkGenericCell_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericCell::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericCell::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericCell *tempr = vtkGenericCell::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericCell *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericCell::NewInstance());

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
PyvtkGenericCell_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0);
    }
    else
    {
      op->vtkGenericCell::SetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->SetPointIds(temp0);
    }
    else
    {
      op->vtkGenericCell::SetPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkGenericCell::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkGenericCell::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkGenericCell::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkGenericCell::GetCellDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_IsLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsLinear() :
      op->vtkGenericCell::IsLinear());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_RequiresInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->RequiresInitialization() :
      op->vtkGenericCell::RequiresInitialization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkGenericCell::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_RequiresExplicitFaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresExplicitFaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->RequiresExplicitFaceRepresentation() :
      op->vtkGenericCell::RequiresExplicitFaceRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(2*size0);
  vtkIdType *temp0 = store0.Data();
  vtkIdType *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetFaces(temp0);
    }
    else
    {
      op->vtkGenericCell::SetFaces(temp0);
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
PyvtkGenericCell_GetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetFaces() :
      op->vtkGenericCell::GetFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkGenericCell::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkGenericCell::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkGenericCell::GetEdge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkGenericCell::GetFace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->CellBoundary(temp0, temp1, temp2) :
      op->vtkGenericCell::CellBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  int temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  double temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);
    ap.Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkGenericCell::EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->EvaluateLocation(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkGenericCell::EvaluateLocation(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  double temp0;
  vtkDataArray *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkCellArray *temp4 = nullptr;
  vtkCellArray *temp5 = nullptr;
  vtkPointData *temp6 = nullptr;
  vtkPointData *temp7 = nullptr;
  vtkCellData *temp8 = nullptr;
  vtkIdType temp9;
  vtkCellData *temp10 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(11) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkCellArray") &&
      ap.GetVTKObject(temp5, "vtkCellArray") &&
      ap.GetVTKObject(temp6, "vtkPointData") &&
      ap.GetVTKObject(temp7, "vtkPointData") &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetValue(temp9) &&
      ap.GetVTKObject(temp10, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }
    else
    {
      op->vtkGenericCell::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  double temp0;
  vtkDataArray *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  vtkIdType temp7;
  vtkCellData *temp8 = nullptr;
  int temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetValue(temp9))
  {
    if (ap.IsBound())
    {
      op->Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }
    else
    {
      op->vtkGenericCell::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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
      op->vtkGenericCell::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkGenericCell_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  vtkPoints *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkPoints"))
  {
    int tempr = (ap.IsBound() ?
      op->Triangulate(temp0, temp1, temp2) :
      op->vtkGenericCell::Triangulate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->Derivatives(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkGenericCell::Derivatives(temp0, temp1, temp2, temp3, temp4);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetParametricCenter(temp0) :
      op->vtkGenericCell::GetParametricCenter(temp0));

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
PyvtkGenericCell_GetParametricCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t sizer = 3 * op->GetNumberOfPoints();
    double *tempr = (ap.IsBound() ?
      op->GetParametricCoords() :
      op->vtkGenericCell::GetParametricCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsPrimaryCell() :
      op->vtkGenericCell::IsPrimaryCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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

    if (ap.IsBound())
    {
      op->InterpolateFunctions(temp0, temp1);
    }
    else
    {
      op->vtkGenericCell::InterpolateFunctions(temp0, temp1);
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
PyvtkGenericCell_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

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

    if (ap.IsBound())
    {
      op->InterpolateDerivs(temp0, temp1);
    }
    else
    {
      op->vtkGenericCell::InterpolateDerivs(temp0, temp1);
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
PyvtkGenericCell_SetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellType(temp0);
    }
    else
    {
      op->vtkGenericCell::SetCellType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToEmptyCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToEmptyCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToEmptyCell();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToEmptyCell();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToVertex();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToVertex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPolyVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPolyVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPolyVertex();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPolyVertex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLine();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPolyLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPolyLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPolyLine();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPolyLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToTriangle();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToTriangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToTriangleStrip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToTriangleStrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToTriangleStrip();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToTriangleStrip();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPolygon();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPolygon();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPixel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPixel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPixel();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPixel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuad();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToTetra();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToTetra();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToVoxel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToVoxel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToVoxel();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToVoxel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToHexahedron();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToHexahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToWedge();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToWedge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPyramid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPyramid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPyramid();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPyramid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPentagonalPrism(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPentagonalPrism");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPentagonalPrism();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPentagonalPrism();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToHexagonalPrism(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToHexagonalPrism");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToHexagonalPrism();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToHexagonalPrism();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPolyhedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPolyhedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPolyhedron();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPolyhedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToConvexPointSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToConvexPointSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToConvexPointSet();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToConvexPointSet();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticEdge();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticEdge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToCubicLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToCubicLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToCubicLine();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToCubicLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticTriangle();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticTriangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBiQuadraticTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBiQuadraticTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBiQuadraticTriangle();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBiQuadraticTriangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticQuad();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticQuad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticPolygon();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticPolygon();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticTetra();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticTetra();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticHexahedron();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticHexahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticWedge();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticWedge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticPyramid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticPyramid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticPyramid();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticPyramid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticLinearQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticLinearQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticLinearQuad();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticLinearQuad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBiQuadraticQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBiQuadraticQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBiQuadraticQuad();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBiQuadraticQuad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticLinearWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticLinearWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticLinearWedge();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticLinearWedge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBiQuadraticQuadraticWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBiQuadraticQuadraticWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBiQuadraticQuadraticWedge();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBiQuadraticQuadraticWedge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToTriQuadraticHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToTriQuadraticHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToTriQuadraticHexahedron();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToTriQuadraticHexahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBiQuadraticQuadraticHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBiQuadraticQuadraticHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBiQuadraticQuadraticHexahedron();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBiQuadraticQuadraticHexahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLagrangeTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLagrangeTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLagrangeTriangle();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLagrangeTriangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLagrangeTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLagrangeTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLagrangeTetra();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLagrangeTetra();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLagrangeCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLagrangeCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLagrangeCurve();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLagrangeCurve();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLagrangeQuadrilateral(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLagrangeQuadrilateral");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLagrangeQuadrilateral();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLagrangeQuadrilateral();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLagrangeHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLagrangeHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLagrangeHexahedron();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLagrangeHexahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLagrangeWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLagrangeWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLagrangeWedge();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLagrangeWedge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_InstantiateCell(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InstantiateCell");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = vtkGenericCell::InstantiateCell(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetRepresentativeCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentativeCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetRepresentativeCell() :
      op->vtkGenericCell::GetRepresentativeCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericCell_Methods[] = {
  {"IsTypeOf", PyvtkGenericCell_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericCell_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericCell_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericCell\nC++: static vtkGenericCell *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericCell_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericCell\nC++: vtkGenericCell *NewInstance()\n\n"},
  {"SetPoints", PyvtkGenericCell_SetPoints, METH_VARARGS,
   "V.SetPoints(vtkPoints)\nC++: void SetPoints(vtkPoints *points)\n\nSet the points object to use for this cell. This updates the\ninternal cell storage as well as the public member variable\nPoints.\n"},
  {"SetPointIds", PyvtkGenericCell_SetPointIds, METH_VARARGS,
   "V.SetPointIds(vtkIdList)\nC++: void SetPointIds(vtkIdList *pointIds)\n\nSet the point ids to use for this cell. This updates the internal\ncell storage as well as the public member variable PointIds.\n"},
  {"ShallowCopy", PyvtkGenericCell_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkCell)\nC++: void ShallowCopy(vtkCell *c) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"DeepCopy", PyvtkGenericCell_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkCell)\nC++: void DeepCopy(vtkCell *c) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetCellType", PyvtkGenericCell_GetCellType, METH_VARARGS,
   "V.GetCellType() -> int\nC++: int GetCellType() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetCellDimension", PyvtkGenericCell_GetCellDimension, METH_VARARGS,
   "V.GetCellDimension() -> int\nC++: int GetCellDimension() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"IsLinear", PyvtkGenericCell_IsLinear, METH_VARARGS,
   "V.IsLinear() -> int\nC++: int IsLinear() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"RequiresInitialization", PyvtkGenericCell_RequiresInitialization, METH_VARARGS,
   "V.RequiresInitialization() -> int\nC++: int RequiresInitialization() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"Initialize", PyvtkGenericCell_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"RequiresExplicitFaceRepresentation", PyvtkGenericCell_RequiresExplicitFaceRepresentation, METH_VARARGS,
   "V.RequiresExplicitFaceRepresentation() -> int\nC++: int RequiresExplicitFaceRepresentation() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"SetFaces", PyvtkGenericCell_SetFaces, METH_VARARGS,
   "V.SetFaces([int, ...])\nC++: void SetFaces(vtkIdType *faces) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetFaces", PyvtkGenericCell_GetFaces, METH_VARARGS,
   "V.GetFaces() -> (int, ...)\nC++: vtkIdType *GetFaces() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetNumberOfEdges", PyvtkGenericCell_GetNumberOfEdges, METH_VARARGS,
   "V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetNumberOfFaces", PyvtkGenericCell_GetNumberOfFaces, METH_VARARGS,
   "V.GetNumberOfFaces() -> int\nC++: int GetNumberOfFaces() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetEdge", PyvtkGenericCell_GetEdge, METH_VARARGS,
   "V.GetEdge(int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetFace", PyvtkGenericCell_GetFace, METH_VARARGS,
   "V.GetFace(int) -> vtkCell\nC++: vtkCell *GetFace(int faceId) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"CellBoundary", PyvtkGenericCell_CellBoundary, METH_VARARGS,
   "V.CellBoundary(int, (float, float, float), vtkIdList) -> int\nC++: int CellBoundary(int subId, const double pcoords[3],\n    vtkIdList *pts) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"EvaluatePosition", PyvtkGenericCell_EvaluatePosition, METH_VARARGS,
   "V.EvaluatePosition((float, float, float), [float, float, float],\n    int, [float, float, float], float, [float, ...]) -> int\nC++: int EvaluatePosition(const double x[3],\n    double closestPoint[3], int &subId, double pcoords[3],\n    double &dist2, double weights[]) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"EvaluateLocation", PyvtkGenericCell_EvaluateLocation, METH_VARARGS,
   "V.EvaluateLocation(int, (float, float, float), [float, float,\n    float], [float, ...])\nC++: void EvaluateLocation(int &subId, const double pcoords[3],\n    double x[3], double *weights) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"Contour", PyvtkGenericCell_Contour, METH_VARARGS,
   "V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"Clip", PyvtkGenericCell_Clip, METH_VARARGS,
   "V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *connectivity, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd, int insideOut) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"IntersectWithLine", PyvtkGenericCell_IntersectWithLine, METH_VARARGS,
   "V.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"Triangulate", PyvtkGenericCell_Triangulate, METH_VARARGS,
   "V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n    override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"Derivatives", PyvtkGenericCell_Derivatives, METH_VARARGS,
   "V.Derivatives(int, (float, float, float), (float, ...), int,\n    [float, ...])\nC++: void Derivatives(int subId, const double pcoords[3],\n    const double *values, int dim, double *derivs) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetParametricCenter", PyvtkGenericCell_GetParametricCenter, METH_VARARGS,
   "V.GetParametricCenter([float, float, float]) -> int\nC++: int GetParametricCenter(double pcoords[3]) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetParametricCoords", PyvtkGenericCell_GetParametricCoords, METH_VARARGS,
   "V.GetParametricCoords() -> (float, ...)\nC++: double *GetParametricCoords() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"IsPrimaryCell", PyvtkGenericCell_IsPrimaryCell, METH_VARARGS,
   "V.IsPrimaryCell() -> int\nC++: int IsPrimaryCell() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"InterpolateFunctions", PyvtkGenericCell_InterpolateFunctions, METH_VARARGS,
   "V.InterpolateFunctions((float, float, float), [float, ...])\nC++: void InterpolateFunctions(const double pcoords[3],\n    double *weights) override;\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {"InterpolateDerivs", PyvtkGenericCell_InterpolateDerivs, METH_VARARGS,
   "V.InterpolateDerivs((float, float, float), [float, ...])\nC++: void InterpolateDerivs(const double pcoords[3],\n    double *derivs) override;\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {"SetCellType", PyvtkGenericCell_SetCellType, METH_VARARGS,
   "V.SetCellType(int)\nC++: void SetCellType(int cellType)\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {"SetCellTypeToEmptyCell", PyvtkGenericCell_SetCellTypeToEmptyCell, METH_VARARGS,
   "V.SetCellTypeToEmptyCell()\nC++: void SetCellTypeToEmptyCell()\n\n"},
  {"SetCellTypeToVertex", PyvtkGenericCell_SetCellTypeToVertex, METH_VARARGS,
   "V.SetCellTypeToVertex()\nC++: void SetCellTypeToVertex()\n\n"},
  {"SetCellTypeToPolyVertex", PyvtkGenericCell_SetCellTypeToPolyVertex, METH_VARARGS,
   "V.SetCellTypeToPolyVertex()\nC++: void SetCellTypeToPolyVertex()\n\n"},
  {"SetCellTypeToLine", PyvtkGenericCell_SetCellTypeToLine, METH_VARARGS,
   "V.SetCellTypeToLine()\nC++: void SetCellTypeToLine()\n\n"},
  {"SetCellTypeToPolyLine", PyvtkGenericCell_SetCellTypeToPolyLine, METH_VARARGS,
   "V.SetCellTypeToPolyLine()\nC++: void SetCellTypeToPolyLine()\n\n"},
  {"SetCellTypeToTriangle", PyvtkGenericCell_SetCellTypeToTriangle, METH_VARARGS,
   "V.SetCellTypeToTriangle()\nC++: void SetCellTypeToTriangle()\n\n"},
  {"SetCellTypeToTriangleStrip", PyvtkGenericCell_SetCellTypeToTriangleStrip, METH_VARARGS,
   "V.SetCellTypeToTriangleStrip()\nC++: void SetCellTypeToTriangleStrip()\n\n"},
  {"SetCellTypeToPolygon", PyvtkGenericCell_SetCellTypeToPolygon, METH_VARARGS,
   "V.SetCellTypeToPolygon()\nC++: void SetCellTypeToPolygon()\n\n"},
  {"SetCellTypeToPixel", PyvtkGenericCell_SetCellTypeToPixel, METH_VARARGS,
   "V.SetCellTypeToPixel()\nC++: void SetCellTypeToPixel()\n\n"},
  {"SetCellTypeToQuad", PyvtkGenericCell_SetCellTypeToQuad, METH_VARARGS,
   "V.SetCellTypeToQuad()\nC++: void SetCellTypeToQuad()\n\n"},
  {"SetCellTypeToTetra", PyvtkGenericCell_SetCellTypeToTetra, METH_VARARGS,
   "V.SetCellTypeToTetra()\nC++: void SetCellTypeToTetra()\n\n"},
  {"SetCellTypeToVoxel", PyvtkGenericCell_SetCellTypeToVoxel, METH_VARARGS,
   "V.SetCellTypeToVoxel()\nC++: void SetCellTypeToVoxel()\n\n"},
  {"SetCellTypeToHexahedron", PyvtkGenericCell_SetCellTypeToHexahedron, METH_VARARGS,
   "V.SetCellTypeToHexahedron()\nC++: void SetCellTypeToHexahedron()\n\n"},
  {"SetCellTypeToWedge", PyvtkGenericCell_SetCellTypeToWedge, METH_VARARGS,
   "V.SetCellTypeToWedge()\nC++: void SetCellTypeToWedge()\n\n"},
  {"SetCellTypeToPyramid", PyvtkGenericCell_SetCellTypeToPyramid, METH_VARARGS,
   "V.SetCellTypeToPyramid()\nC++: void SetCellTypeToPyramid()\n\n"},
  {"SetCellTypeToPentagonalPrism", PyvtkGenericCell_SetCellTypeToPentagonalPrism, METH_VARARGS,
   "V.SetCellTypeToPentagonalPrism()\nC++: void SetCellTypeToPentagonalPrism()\n\n"},
  {"SetCellTypeToHexagonalPrism", PyvtkGenericCell_SetCellTypeToHexagonalPrism, METH_VARARGS,
   "V.SetCellTypeToHexagonalPrism()\nC++: void SetCellTypeToHexagonalPrism()\n\n"},
  {"SetCellTypeToPolyhedron", PyvtkGenericCell_SetCellTypeToPolyhedron, METH_VARARGS,
   "V.SetCellTypeToPolyhedron()\nC++: void SetCellTypeToPolyhedron()\n\n"},
  {"SetCellTypeToConvexPointSet", PyvtkGenericCell_SetCellTypeToConvexPointSet, METH_VARARGS,
   "V.SetCellTypeToConvexPointSet()\nC++: void SetCellTypeToConvexPointSet()\n\n"},
  {"SetCellTypeToQuadraticEdge", PyvtkGenericCell_SetCellTypeToQuadraticEdge, METH_VARARGS,
   "V.SetCellTypeToQuadraticEdge()\nC++: void SetCellTypeToQuadraticEdge()\n\n"},
  {"SetCellTypeToCubicLine", PyvtkGenericCell_SetCellTypeToCubicLine, METH_VARARGS,
   "V.SetCellTypeToCubicLine()\nC++: void SetCellTypeToCubicLine()\n\n"},
  {"SetCellTypeToQuadraticTriangle", PyvtkGenericCell_SetCellTypeToQuadraticTriangle, METH_VARARGS,
   "V.SetCellTypeToQuadraticTriangle()\nC++: void SetCellTypeToQuadraticTriangle()\n\n"},
  {"SetCellTypeToBiQuadraticTriangle", PyvtkGenericCell_SetCellTypeToBiQuadraticTriangle, METH_VARARGS,
   "V.SetCellTypeToBiQuadraticTriangle()\nC++: void SetCellTypeToBiQuadraticTriangle()\n\n"},
  {"SetCellTypeToQuadraticQuad", PyvtkGenericCell_SetCellTypeToQuadraticQuad, METH_VARARGS,
   "V.SetCellTypeToQuadraticQuad()\nC++: void SetCellTypeToQuadraticQuad()\n\n"},
  {"SetCellTypeToQuadraticPolygon", PyvtkGenericCell_SetCellTypeToQuadraticPolygon, METH_VARARGS,
   "V.SetCellTypeToQuadraticPolygon()\nC++: void SetCellTypeToQuadraticPolygon()\n\n"},
  {"SetCellTypeToQuadraticTetra", PyvtkGenericCell_SetCellTypeToQuadraticTetra, METH_VARARGS,
   "V.SetCellTypeToQuadraticTetra()\nC++: void SetCellTypeToQuadraticTetra()\n\n"},
  {"SetCellTypeToQuadraticHexahedron", PyvtkGenericCell_SetCellTypeToQuadraticHexahedron, METH_VARARGS,
   "V.SetCellTypeToQuadraticHexahedron()\nC++: void SetCellTypeToQuadraticHexahedron()\n\n"},
  {"SetCellTypeToQuadraticWedge", PyvtkGenericCell_SetCellTypeToQuadraticWedge, METH_VARARGS,
   "V.SetCellTypeToQuadraticWedge()\nC++: void SetCellTypeToQuadraticWedge()\n\n"},
  {"SetCellTypeToQuadraticPyramid", PyvtkGenericCell_SetCellTypeToQuadraticPyramid, METH_VARARGS,
   "V.SetCellTypeToQuadraticPyramid()\nC++: void SetCellTypeToQuadraticPyramid()\n\n"},
  {"SetCellTypeToQuadraticLinearQuad", PyvtkGenericCell_SetCellTypeToQuadraticLinearQuad, METH_VARARGS,
   "V.SetCellTypeToQuadraticLinearQuad()\nC++: void SetCellTypeToQuadraticLinearQuad()\n\n"},
  {"SetCellTypeToBiQuadraticQuad", PyvtkGenericCell_SetCellTypeToBiQuadraticQuad, METH_VARARGS,
   "V.SetCellTypeToBiQuadraticQuad()\nC++: void SetCellTypeToBiQuadraticQuad()\n\n"},
  {"SetCellTypeToQuadraticLinearWedge", PyvtkGenericCell_SetCellTypeToQuadraticLinearWedge, METH_VARARGS,
   "V.SetCellTypeToQuadraticLinearWedge()\nC++: void SetCellTypeToQuadraticLinearWedge()\n\n"},
  {"SetCellTypeToBiQuadraticQuadraticWedge", PyvtkGenericCell_SetCellTypeToBiQuadraticQuadraticWedge, METH_VARARGS,
   "V.SetCellTypeToBiQuadraticQuadraticWedge()\nC++: void SetCellTypeToBiQuadraticQuadraticWedge()\n\n"},
  {"SetCellTypeToTriQuadraticHexahedron", PyvtkGenericCell_SetCellTypeToTriQuadraticHexahedron, METH_VARARGS,
   "V.SetCellTypeToTriQuadraticHexahedron()\nC++: void SetCellTypeToTriQuadraticHexahedron()\n\n"},
  {"SetCellTypeToBiQuadraticQuadraticHexahedron", PyvtkGenericCell_SetCellTypeToBiQuadraticQuadraticHexahedron, METH_VARARGS,
   "V.SetCellTypeToBiQuadraticQuadraticHexahedron()\nC++: void SetCellTypeToBiQuadraticQuadraticHexahedron()\n\n"},
  {"SetCellTypeToLagrangeTriangle", PyvtkGenericCell_SetCellTypeToLagrangeTriangle, METH_VARARGS,
   "V.SetCellTypeToLagrangeTriangle()\nC++: void SetCellTypeToLagrangeTriangle()\n\n"},
  {"SetCellTypeToLagrangeTetra", PyvtkGenericCell_SetCellTypeToLagrangeTetra, METH_VARARGS,
   "V.SetCellTypeToLagrangeTetra()\nC++: void SetCellTypeToLagrangeTetra()\n\n"},
  {"SetCellTypeToLagrangeCurve", PyvtkGenericCell_SetCellTypeToLagrangeCurve, METH_VARARGS,
   "V.SetCellTypeToLagrangeCurve()\nC++: void SetCellTypeToLagrangeCurve()\n\n"},
  {"SetCellTypeToLagrangeQuadrilateral", PyvtkGenericCell_SetCellTypeToLagrangeQuadrilateral, METH_VARARGS,
   "V.SetCellTypeToLagrangeQuadrilateral()\nC++: void SetCellTypeToLagrangeQuadrilateral()\n\n"},
  {"SetCellTypeToLagrangeHexahedron", PyvtkGenericCell_SetCellTypeToLagrangeHexahedron, METH_VARARGS,
   "V.SetCellTypeToLagrangeHexahedron()\nC++: void SetCellTypeToLagrangeHexahedron()\n\n"},
  {"SetCellTypeToLagrangeWedge", PyvtkGenericCell_SetCellTypeToLagrangeWedge, METH_VARARGS,
   "V.SetCellTypeToLagrangeWedge()\nC++: void SetCellTypeToLagrangeWedge()\n\n"},
  {"InstantiateCell", PyvtkGenericCell_InstantiateCell, METH_VARARGS,
   "V.InstantiateCell(int) -> vtkCell\nC++: static vtkCell *InstantiateCell(int cellType)\n\nInstantiate a new vtkCell based on it's cell type value\n"},
  {"GetRepresentativeCell", PyvtkGenericCell_GetRepresentativeCell, METH_VARARGS,
   "V.GetRepresentativeCell() -> vtkCell\nC++: vtkCell *GetRepresentativeCell()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericCell_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkGenericCell", // tp_name
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
  PyvtkGenericCell_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericCell_StaticNew()
{
  return vtkGenericCell::New();
}

PyObject *PyvtkGenericCell_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericCell_Type, PyvtkGenericCell_Methods,
    "vtkGenericCell",
 &PyvtkGenericCell_StaticNew);

  PyTypeObject *pytype = &PyvtkGenericCell_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCell_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericCell(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericCell_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericCell", o) != 0)
  {
    Py_DECREF(o);
  }

}

