// python wrapper for vtkPolygon
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
#include "vtkPolygon.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolygon(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolygon_ClassNew(); }

#ifndef DECLARED_PyvtkCell_ClassNew
extern "C" { PyObject *PyvtkCell_ClassNew(); }
#define DECLARED_PyvtkCell_ClassNew
#endif

static const char *PyvtkPolygon_Doc =
  "vtkPolygon - a cell that represents an n-sided polygon\n\n"
  "Superclass: vtkCell\n\n"
  "vtkPolygon is a concrete implementation of vtkCell to represent a 2D\n"
  "n-sided polygon. The polygons cannot have any internal holes, and\n"
  "cannot self-intersect. Define the polygon with n-points ordered in\n"
  "the counter- clockwise direction; do not repeat the last point.\n\n";


static PyObject *
PyvtkPolygon_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolygon::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolygon::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolygon *tempr = vtkPolygon::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolygon *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolygon::NewInstance());

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
PyvtkPolygon_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkPolygon::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkPolygon::GetCellDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkPolygon::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkPolygon::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkPolygon::GetEdge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkPolygon::GetFace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      op->vtkPolygon::CellBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      op->vtkPolygon::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      op->vtkPolygon::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      op->vtkPolygon::EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkPolygon_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      op->vtkPolygon::EvaluateLocation(temp0, temp1, temp2, temp3);
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
PyvtkPolygon_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      op->vtkPolygon::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkPolygon_Triangulate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      op->vtkPolygon::Triangulate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_Triangulate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->Triangulate(temp0) :
      op->vtkPolygon::Triangulate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_Triangulate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolygon_Triangulate_s1(self, args);
    case 1:
      return PyvtkPolygon_Triangulate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Triangulate");
  return nullptr;
}



static PyObject *
PyvtkPolygon_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      op->vtkPolygon::Derivatives(temp0, temp1, temp2, temp3, temp4);
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
PyvtkPolygon_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsPrimaryCell() :
      op->vtkPolygon::IsPrimaryCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_ComputeArea_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeArea() :
      op->vtkPolygon::ComputeArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_ComputeArea_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeArea");

  vtkPoints *temp0 = nullptr;
  vtkIdType temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    double tempr = vtkPolygon::ComputeArea(temp0, temp1, temp2, temp3);

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_ComputeArea(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolygon_ComputeArea_s1(self, args);
    case 4:
      return PyvtkPolygon_ComputeArea_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeArea");
  return nullptr;
}



static PyObject *
PyvtkPolygon_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

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
      op->vtkPolygon::InterpolateFunctions(temp0, temp1);
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
PyvtkPolygon_ComputeNormal_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeNormal");

  vtkPoints *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    vtkPolygon::ComputeNormal(temp0, temp1, temp2, temp3);

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
PyvtkPolygon_ComputeNormal_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeNormal");

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkPolygon::ComputeNormal(temp0, temp1);

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
PyvtkPolygon_ComputeNormal_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeNormal");

  vtkIdTypeArray *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    vtkPolygon::ComputeNormal(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_ComputeNormal_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeNormal");

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    vtkPolygon::ComputeNormal(temp0, temp1, temp2);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolygon_ComputeNormal_Methods[] = {
  {nullptr, PyvtkPolygon_ComputeNormal_s3, METH_VARARGS | METH_STATIC,
   "VVP *vtkIdTypeArray *vtkPoints *d"},
  {nullptr, PyvtkPolygon_ComputeNormal_s4, METH_VARARGS | METH_STATIC,
   "iPP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolygon_ComputeNormal(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolygon_ComputeNormal_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkPolygon_ComputeNormal_s1(self, args);
    case 2:
      return PyvtkPolygon_ComputeNormal_s2(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeNormal");
  return nullptr;
}



static PyObject *
PyvtkPolygon_IsConvex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsConvex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsConvex() :
      op->vtkPolygon::IsConvex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_IsConvex_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsConvex");

  vtkPoints *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    bool tempr = vtkPolygon::IsConvex(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_IsConvex_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsConvex");

  vtkIdTypeArray *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    bool tempr = vtkPolygon::IsConvex(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_IsConvex_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsConvex");

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    bool tempr = vtkPolygon::IsConvex(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_IsConvex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolygon_IsConvex_s1(self, args);
    case 3:
      return PyvtkPolygon_IsConvex_s2(self, args);
    case 2:
      return PyvtkPolygon_IsConvex_s3(self, args);
    case 1:
      return PyvtkPolygon_IsConvex_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsConvex");
  return nullptr;
}



static PyObject *
PyvtkPolygon_ComputeCentroid_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCentroid");

  vtkPoints *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    bool tempr = vtkPolygon::ComputeCentroid(temp0, temp1, temp2, temp3);

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_ComputeCentroid_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCentroid");

  vtkIdTypeArray *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    bool tempr = vtkPolygon::ComputeCentroid(temp0, temp1, temp2);

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_ComputeCentroid(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkPolygon_ComputeCentroid_s1(self, args);
    case 3:
      return PyvtkPolygon_ComputeCentroid_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeCentroid");
  return nullptr;
}



static PyObject *
PyvtkPolygon_ParameterizePolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParameterizePolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  double temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  double temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);
    ap.Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->ParameterizePolygon(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkPolygon::ParameterizePolygon(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkPolygon_PointInPolygon(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PointInPolygon");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  const size_t size3 = 6;
  double temp3[6];
  double save3[6];
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = vtkPolygon::PointInPolygon(temp0, temp1, temp2, temp3, temp4);

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
PyvtkPolygon_NonDegenerateTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonDegenerateTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->NonDegenerateTriangulate(temp0) :
      op->vtkPolygon::NonDegenerateTriangulate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_BoundedTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundedTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  vtkIdList *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->BoundedTriangulate(temp0, temp1) :
      op->vtkPolygon::BoundedTriangulate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_DistanceToPolygon(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DistanceToPolygon");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  const size_t size3 = 6;
  double temp3[6];
  double save3[6];
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    double tempr = vtkPolygon::DistanceToPolygon(temp0, temp1, temp2, temp3, temp4);

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
PyvtkPolygon_IntersectPolygonWithPolygon(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectPolygonWithPolygon");

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  const size_t size2 = 6;
  double temp2[6];
  double save2[6];
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  double temp6;
  const size_t size7 = 3;
  double temp7[3];
  double save7[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetArray(temp7, size7))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);
    ap.Save(temp7, save7, size7);

    int tempr = vtkPolygon::IntersectPolygonWithPolygon(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
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

    if (ap.HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_IntersectConvex2DCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectConvex2DCells");

  vtkCell *temp0 = nullptr;
  vtkCell *temp1 = nullptr;
  double temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkCell") &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = vtkPolygon::IntersectConvex2DCells(temp0, temp1, temp2, temp3, temp4);

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
PyvtkPolygon_GetUseMVCInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMVCInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseMVCInterpolation() :
      op->vtkPolygon::GetUseMVCInterpolation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_SetUseMVCInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMVCInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseMVCInterpolation(temp0);
    }
    else
    {
      op->vtkPolygon::SetUseMVCInterpolation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolygon_Methods[] = {
  {"IsTypeOf", PyvtkPolygon_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolygon_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolygon_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPolygon\nC++: static vtkPolygon *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolygon_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolygon\nC++: vtkPolygon *NewInstance()\n\n"},
  {"GetCellType", PyvtkPolygon_GetCellType, METH_VARARGS,
   "V.GetCellType() -> int\nC++: int GetCellType() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetCellDimension", PyvtkPolygon_GetCellDimension, METH_VARARGS,
   "V.GetCellDimension() -> int\nC++: int GetCellDimension() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetNumberOfEdges", PyvtkPolygon_GetNumberOfEdges, METH_VARARGS,
   "V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetNumberOfFaces", PyvtkPolygon_GetNumberOfFaces, METH_VARARGS,
   "V.GetNumberOfFaces() -> int\nC++: int GetNumberOfFaces() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetEdge", PyvtkPolygon_GetEdge, METH_VARARGS,
   "V.GetEdge(int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetFace", PyvtkPolygon_GetFace, METH_VARARGS,
   "V.GetFace(int) -> vtkCell\nC++: vtkCell *GetFace(int) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"CellBoundary", PyvtkPolygon_CellBoundary, METH_VARARGS,
   "V.CellBoundary(int, (float, float, float), vtkIdList) -> int\nC++: int CellBoundary(int subId, const double pcoords[3],\n    vtkIdList *pts) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"Contour", PyvtkPolygon_Contour, METH_VARARGS,
   "V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"Clip", PyvtkPolygon_Clip, METH_VARARGS,
   "V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *tris,\n    vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd,\n    vtkIdType cellId, vtkCellData *outCd, int insideOut) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"EvaluatePosition", PyvtkPolygon_EvaluatePosition, METH_VARARGS,
   "V.EvaluatePosition((float, float, float), [float, float, float],\n    int, [float, float, float], float, [float, ...]) -> int\nC++: int EvaluatePosition(const double x[3],\n    double closestPoint[3], int &subId, double pcoords[3],\n    double &dist2, double weights[]) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"EvaluateLocation", PyvtkPolygon_EvaluateLocation, METH_VARARGS,
   "V.EvaluateLocation(int, (float, float, float), [float, float,\n    float], [float, ...])\nC++: void EvaluateLocation(int &subId, const double pcoords[3],\n    double x[3], double *weights) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"IntersectWithLine", PyvtkPolygon_IntersectWithLine, METH_VARARGS,
   "V.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"Triangulate", PyvtkPolygon_Triangulate, METH_VARARGS,
   "V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n    override;\nV.Triangulate(vtkIdList) -> int\nC++: int Triangulate(vtkIdList *outTris)\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"Derivatives", PyvtkPolygon_Derivatives, METH_VARARGS,
   "V.Derivatives(int, (float, float, float), (float, ...), int,\n    [float, ...])\nC++: void Derivatives(int subId, const double pcoords[3],\n    const double *values, int dim, double *derivs) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"IsPrimaryCell", PyvtkPolygon_IsPrimaryCell, METH_VARARGS,
   "V.IsPrimaryCell() -> int\nC++: int IsPrimaryCell() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"ComputeArea", PyvtkPolygon_ComputeArea, METH_VARARGS,
   "V.ComputeArea() -> float\nC++: double ComputeArea()\nV.ComputeArea(vtkPoints, int, [int, ...], [float, float, float])\n    -> float\nC++: static double ComputeArea(vtkPoints *p, vtkIdType numPts,\n    vtkIdType *pts, double normal[3])\n\nCompute the area of a polygon. This is a convenience function\nwhich simply calls static double ComputeArea(vtkPoints *p,\nvtkIdType numPts, vtkIdType *pts, double normal[3]); with the\nappropriate parameters from the instantiated vtkPolygon.\n"},
  {"InterpolateFunctions", PyvtkPolygon_InterpolateFunctions, METH_VARARGS,
   "V.InterpolateFunctions((float, float, float), [float, ...])\nC++: void InterpolateFunctions(const double x[3], double *sf)\n    override;\n\nCompute the interpolation functions/derivatives. (aka shape\nfunctions/derivatives) Two interpolation algorithms are\navailable: 1/r^2 and Mean Value Coordinate. The former is used by\ndefault. To use the second algorithm, set UseMVCInterpolation to\nbe true. The function assumes the input point lies on the polygon\nplane without checking that.\n"},
  {"ComputeNormal", PyvtkPolygon_ComputeNormal, METH_VARARGS,
   "V.ComputeNormal(vtkPoints, int, [int, ...], [float, float, float])\nC++: static void ComputeNormal(vtkPoints *p, int numPts,\n    vtkIdType *pts, double n[3])\nV.ComputeNormal(vtkPoints, [float, float, float])\nC++: static void ComputeNormal(vtkPoints *p, double n[3])\nV.ComputeNormal(vtkIdTypeArray, vtkPoints, [float, float, float])\nC++: static void ComputeNormal(vtkIdTypeArray *ids,\n    vtkPoints *pts, double n[3])\nV.ComputeNormal(int, [float, ...], [float, float, float])\nC++: static void ComputeNormal(int numPts, double *pts,\n    double n[3])\n\nComputes the unit normal to the polygon. If pts=nullptr, point\nindexing is assumed to be {0, 1, ..., numPts-1}.\n"},
  {"IsConvex", PyvtkPolygon_IsConvex, METH_VARARGS,
   "V.IsConvex() -> bool\nC++: bool IsConvex()\nV.IsConvex(vtkPoints, int, [int, ...]) -> bool\nC++: static bool IsConvex(vtkPoints *p, int numPts,\n    vtkIdType *pts)\nV.IsConvex(vtkIdTypeArray, vtkPoints) -> bool\nC++: static bool IsConvex(vtkIdTypeArray *ids, vtkPoints *p)\nV.IsConvex(vtkPoints) -> bool\nC++: static bool IsConvex(vtkPoints *p)\n\nDetermine whether or not a polygon is convex. This is a\nconvenience function that simply calls static bool IsConvex(int\nnumPts, vtkIdType *pts, vtkPoints *p) with the appropriate\nparameters from the instantiated vtkPolygon.\n"},
  {"ComputeCentroid", PyvtkPolygon_ComputeCentroid, METH_VARARGS,
   "V.ComputeCentroid(vtkPoints, int, [int, ...], [float, float,\n    float]) -> bool\nC++: static bool ComputeCentroid(vtkPoints *p, int numPts,\n    vtkIdType *pts, double centroid[3])\nV.ComputeCentroid(vtkIdTypeArray, vtkPoints, [float, float,\n    float]) -> bool\nC++: static bool ComputeCentroid(vtkIdTypeArray *ids,\n    vtkPoints *pts, double centroid[3])\n\nCompute the centroid of a set of points. Returns false if the\ncomputation is invalid (this occurs when numPts=0 or when ids is\nempty).\n"},
  {"ParameterizePolygon", PyvtkPolygon_ParameterizePolygon, METH_VARARGS,
   "V.ParameterizePolygon([float, float, float], [float, float,\n    float], float, [float, float, float], float, [float, float,\n    float]) -> int\nC++: int ParameterizePolygon(double p0[3], double p10[3],\n    double &l10, double p20[3], double &l20, double n[3])\n\nCreate a local s-t coordinate system for a polygon. The point p0\nis the origin of the local system, p10 is s-axis vector, and p20\nis the t-axis vector. (These are expressed in the modeling\ncoordinate system and are vectors of dimension [3].) The values\nl20 and l20 are the lengths of the vectors p10 and p20, and n is\nthe polygon normal.\n"},
  {"PointInPolygon", PyvtkPolygon_PointInPolygon, METH_VARARGS,
   "V.PointInPolygon([float, float, float], int, [float, ...], [float,\n     float, float, float, float, float], [float, float, float])\n    -> int\nC++: static int PointInPolygon(double x[3], int numPts,\n    double *pts, double bounds[6], double n[3])\n\nDetermine whether point is inside polygon. Function uses\nray-casting to determine if point is inside polygon. Works for\narbitrary polygon shape (e.g., non-convex). Returns 0 if point is\nnot in polygon; 1 if it is. Can also return -1 to indicate\ndegenerate polygon.\n"},
  {"NonDegenerateTriangulate", PyvtkPolygon_NonDegenerateTriangulate, METH_VARARGS,
   "V.NonDegenerateTriangulate(vtkIdList) -> int\nC++: int NonDegenerateTriangulate(vtkIdList *outTris)\n\nSame as Triangulate(vtkIdList *outTris) but with a first pass to\nsplit the polygon into non-degenerate polygons.\n"},
  {"BoundedTriangulate", PyvtkPolygon_BoundedTriangulate, METH_VARARGS,
   "V.BoundedTriangulate(vtkIdList, float) -> int\nC++: int BoundedTriangulate(vtkIdList *outTris, double tol)\n\nTriangulate polygon and enforce that the ratio of the smallest\ntriangle area to the polygon area is greater than a user-defined\ntolerance. The user must provide the vtkIdList outTris. On\noutput, the outTris list contains the ids of the points defining\nthe triangulation. The ids are ordered into groups of three: each\nthree-group defines one triangle.\n"},
  {"DistanceToPolygon", PyvtkPolygon_DistanceToPolygon, METH_VARARGS,
   "V.DistanceToPolygon([float, float, float], int, [float, ...],\n    [float, float, float, float, float, float], [float, float,\n    float]) -> float\nC++: static double DistanceToPolygon(double x[3], int numPts,\n    double *pts, double bounds[6], double closest[3])\n\nCompute the distance of a point to a polygon. The closest point\non the polygon is also returned. The bounds should be provided to\naccelerate the computation.\n"},
  {"IntersectPolygonWithPolygon", PyvtkPolygon_IntersectPolygonWithPolygon, METH_VARARGS,
   "V.IntersectPolygonWithPolygon(int, [float, ...], [float, float,\n    float, float, float, float], int, [float, ...], [float, float,\n     float], float, [float, float, float]) -> int\nC++: static int IntersectPolygonWithPolygon(int npts, double *pts,\n     double bounds[6], int npts2, double *pts2, double bounds2[3],\n     double tol, double x[3])\n\nMethod intersects two polygons. You must supply the number of\npoints and point coordinates (npts, *pts) and the bounding box\n(bounds) of the two polygons. Also supply a tolerance squared for\ncontrolling error. The method returns 1 if there is an\nintersection, and 0 if not. A single point of intersection x[3]\nis also returned if there is an intersection.\n"},
  {"IntersectConvex2DCells", PyvtkPolygon_IntersectConvex2DCells, METH_VARARGS,
   "V.IntersectConvex2DCells(vtkCell, vtkCell, float, [float, float,\n    float], [float, float, float]) -> int\nC++: static int IntersectConvex2DCells(vtkCell *cell1,\n    vtkCell *cell2, double tol, double p0[3], double p1[3])\n\nIntersect two convex 2D polygons to produce a line segment as\noutput. The return status of the methods indicated no\nintersection (returns 0); a single point of intersection (returns\n1); or a line segment (i.e., two points of intersection, returns\n2). The points of intersection are returned in the arrays p0 and\np1.  If less than two points of intersection are generated then\np1 and/or p0 may be indeterminiate. Finally, if the two convex\npolygons are parallel, then \"0\" is returned (i.e., no\nintersection) even if the triangles lie on one another.\n"},
  {"GetUseMVCInterpolation", PyvtkPolygon_GetUseMVCInterpolation, METH_VARARGS,
   "V.GetUseMVCInterpolation() -> bool\nC++: virtual bool GetUseMVCInterpolation()\n\nSet/Get the flag indicating whether to use Mean Value Coordinate\nfor the interpolation. If true, InterpolateFunctions() uses the\nMean Value Coordinate to compute weights. Otherwise, the\nconventional 1/r^2 method is used. The UseMVCInterpolation\nparameter is set to false by default.\n"},
  {"SetUseMVCInterpolation", PyvtkPolygon_SetUseMVCInterpolation, METH_VARARGS,
   "V.SetUseMVCInterpolation(bool)\nC++: virtual void SetUseMVCInterpolation(bool _arg)\n\nSet/Get the flag indicating whether to use Mean Value Coordinate\nfor the interpolation. If true, InterpolateFunctions() uses the\nMean Value Coordinate to compute weights. Otherwise, the\nconventional 1/r^2 method is used. The UseMVCInterpolation\nparameter is set to false by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolygon_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkPolygon", // tp_name
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
  PyvtkPolygon_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolygon_StaticNew()
{
  return vtkPolygon::New();
}

PyObject *PyvtkPolygon_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolygon_Type, PyvtkPolygon_Methods,
    "vtkPolygon",
 &PyvtkPolygon_StaticNew);

  PyTypeObject *pytype = &PyvtkPolygon_Type;

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

void PyVTKAddFile_vtkPolygon(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolygon_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolygon", o) != 0)
  {
    Py_DECREF(o);
  }

}

