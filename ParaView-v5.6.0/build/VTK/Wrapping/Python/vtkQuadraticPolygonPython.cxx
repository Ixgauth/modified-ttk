// python wrapper for vtkQuadraticPolygon
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
#include "vtkQuadraticPolygon.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuadraticPolygon(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkQuadraticPolygon_ClassNew(); }

#ifndef DECLARED_PyvtkNonLinearCell_ClassNew
extern "C" { PyObject *PyvtkNonLinearCell_ClassNew(); }
#define DECLARED_PyvtkNonLinearCell_ClassNew
#endif

static const char *PyvtkQuadraticPolygon_Doc =
  "vtkQuadraticPolygon - a cell that represents a parabolic n-sided\npolygon\n\n"
  "Superclass: vtkNonLinearCell\n\n"
  "vtkQuadraticPolygon is a concrete implementation of vtkNonLinearCell\n"
  "to represent a 2D n-sided (2*n nodes) parabolic polygon. The polygon\n"
  "cannot have any internal holes, and cannot self-intersect. The cell\n"
  "includes a mid-edge node for each of the n edges of the cell. The\n"
  "ordering of the 2*n points defining the cell are point ids (0..n-1\n"
  "and n..2*n-1) where ids 0..n-1 define the corner vertices of the\n"
  "polygon; ids n..2*n-1 define the midedge nodes. Define the polygon\n"
  "with points ordered in the counter- clockwise direction; do not\n"
  "repeat the last point.\n\n"
  "@sa\n"
  "vtkQuadraticEdge vtkQuadraticTriangle vtkQuadraticTetra\n"
  "vtkQuadraticHexahedron vtkQuadraticWedge vtkQuadraticPyramid\n\n";


static PyObject *
PyvtkQuadraticPolygon_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuadraticPolygon::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadraticPolygon::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuadraticPolygon *tempr = vtkQuadraticPolygon::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuadraticPolygon *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadraticPolygon::NewInstance());

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
PyvtkQuadraticPolygon_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkQuadraticPolygon::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkQuadraticPolygon::GetCellDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkQuadraticPolygon::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkQuadraticPolygon::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkQuadraticPolygon::GetEdge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkQuadraticPolygon::GetFace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsPrimaryCell() :
      op->vtkQuadraticPolygon::IsPrimaryCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

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
      op->vtkQuadraticPolygon::CellBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

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
      op->vtkQuadraticPolygon::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

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
      op->vtkQuadraticPolygon::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

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
      op->vtkQuadraticPolygon::EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkQuadraticPolygon_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

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
      op->vtkQuadraticPolygon::EvaluateLocation(temp0, temp1, temp2, temp3);
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
PyvtkQuadraticPolygon_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

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
      op->vtkQuadraticPolygon::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkQuadraticPolygon_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

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
      op->vtkQuadraticPolygon::InterpolateFunctions(temp0, temp1);
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
PyvtkQuadraticPolygon_ComputeCentroid(PyObject *, PyObject *args)
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

    vtkQuadraticPolygon::ComputeCentroid(temp0, temp1, temp2);

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
PyvtkQuadraticPolygon_ParameterizePolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParameterizePolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

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
      op->vtkQuadraticPolygon::ParameterizePolygon(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkQuadraticPolygon_PointInPolygon(PyObject *, PyObject *args)
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

    int tempr = vtkQuadraticPolygon::PointInPolygon(temp0, temp1, temp2, temp3, temp4);

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
PyvtkQuadraticPolygon_Triangulate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->Triangulate(temp0) :
      op->vtkQuadraticPolygon::Triangulate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkQuadraticPolygon_Triangulate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

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
      op->vtkQuadraticPolygon::Triangulate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkQuadraticPolygon_Triangulate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkQuadraticPolygon_Triangulate_s1(self, args);
    case 3:
      return PyvtkQuadraticPolygon_Triangulate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Triangulate");
  return nullptr;
}



static PyObject *
PyvtkQuadraticPolygon_NonDegenerateTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonDegenerateTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->NonDegenerateTriangulate(temp0) :
      op->vtkQuadraticPolygon::NonDegenerateTriangulate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_DistanceToPolygon(PyObject *, PyObject *args)
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

    double tempr = vtkQuadraticPolygon::DistanceToPolygon(temp0, temp1, temp2, temp3, temp4);

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
PyvtkQuadraticPolygon_IntersectPolygonWithPolygon(PyObject *, PyObject *args)
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

    int tempr = vtkQuadraticPolygon::IntersectPolygonWithPolygon(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

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
PyvtkQuadraticPolygon_IntersectConvex2DCells(PyObject *, PyObject *args)
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

    int tempr = vtkQuadraticPolygon::IntersectConvex2DCells(temp0, temp1, temp2, temp3, temp4);

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
PyvtkQuadraticPolygon_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

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
      op->vtkQuadraticPolygon::Derivatives(temp0, temp1, temp2, temp3, temp4);
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
PyvtkQuadraticPolygon_GetUseMVCInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMVCInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseMVCInterpolation() :
      op->vtkQuadraticPolygon::GetUseMVCInterpolation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadraticPolygon_SetUseMVCInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMVCInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadraticPolygon *op = static_cast<vtkQuadraticPolygon *>(vp);

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
      op->vtkQuadraticPolygon::SetUseMVCInterpolation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkQuadraticPolygon_Methods[] = {
  {"IsTypeOf", PyvtkQuadraticPolygon_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkQuadraticPolygon_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkQuadraticPolygon_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkQuadraticPolygon\nC++: static vtkQuadraticPolygon *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkQuadraticPolygon_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkQuadraticPolygon\nC++: vtkQuadraticPolygon *NewInstance()\n\n"},
  {"GetCellType", PyvtkQuadraticPolygon_GetCellType, METH_VARARGS,
   "V.GetCellType() -> int\nC++: int GetCellType() override;\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {"GetCellDimension", PyvtkQuadraticPolygon_GetCellDimension, METH_VARARGS,
   "V.GetCellDimension() -> int\nC++: int GetCellDimension() override;\n\nReturn the topological dimensional of the cell (0,1,2, or 3).\n"},
  {"GetNumberOfEdges", PyvtkQuadraticPolygon_GetNumberOfEdges, METH_VARARGS,
   "V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges() override;\n\nReturn the number of edges in the cell.\n"},
  {"GetNumberOfFaces", PyvtkQuadraticPolygon_GetNumberOfFaces, METH_VARARGS,
   "V.GetNumberOfFaces() -> int\nC++: int GetNumberOfFaces() override;\n\nReturn the number of faces in the cell.\n"},
  {"GetEdge", PyvtkQuadraticPolygon_GetEdge, METH_VARARGS,
   "V.GetEdge(int) -> vtkCell\nC++: vtkCell *GetEdge(int) override;\n\nReturn the edge cell from the edgeId of the cell.\n"},
  {"GetFace", PyvtkQuadraticPolygon_GetFace, METH_VARARGS,
   "V.GetFace(int) -> vtkCell\nC++: vtkCell *GetFace(int) override;\n\nReturn the face cell from the faceId of the cell.\n"},
  {"IsPrimaryCell", PyvtkQuadraticPolygon_IsPrimaryCell, METH_VARARGS,
   "V.IsPrimaryCell() -> int\nC++: int IsPrimaryCell() override;\n\nReturn whether this cell type has a fixed topology or whether the\ntopology varies depending on the data (e.g., vtkConvexPointSet).\nThis compares to composite cells that are typically composed of\nprimary cells (e.g., a triangle strip composite cell is made up\nof triangle primary cells).\n"},
  {"CellBoundary", PyvtkQuadraticPolygon_CellBoundary, METH_VARARGS,
   "V.CellBoundary(int, (float, float, float), vtkIdList) -> int\nC++: int CellBoundary(int subId, const double pcoords[3],\n    vtkIdList *pts) override;\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"Contour", PyvtkQuadraticPolygon_Contour, METH_VARARGS,
   "V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd) override;\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"Clip", PyvtkQuadraticPolygon_Clip, METH_VARARGS,
   "V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *polys,\n    vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd,\n    vtkIdType cellId, vtkCellData *outCd, int insideOut) override;\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"EvaluatePosition", PyvtkQuadraticPolygon_EvaluatePosition, METH_VARARGS,
   "V.EvaluatePosition((float, float, float), [float, float, float],\n    int, [float, float, float], float, [float, ...]) -> int\nC++: int EvaluatePosition(const double x[3],\n    double closestPoint[3], int &subId, double pcoords[3],\n    double &dist2, double weights[]) override;\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"EvaluateLocation", PyvtkQuadraticPolygon_EvaluateLocation, METH_VARARGS,
   "V.EvaluateLocation(int, (float, float, float), [float, float,\n    float], [float, ...])\nC++: void EvaluateLocation(int &subId, const double pcoords[3],\n    double x[3], double *weights) override;\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"IntersectWithLine", PyvtkQuadraticPolygon_IntersectWithLine, METH_VARARGS,
   "V.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId) override;\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"InterpolateFunctions", PyvtkQuadraticPolygon_InterpolateFunctions, METH_VARARGS,
   "V.InterpolateFunctions((float, float, float), [float, ...])\nC++: void InterpolateFunctions(const double x[3], double *weights)\n     override;\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"ComputeCentroid", PyvtkQuadraticPolygon_ComputeCentroid, METH_VARARGS,
   "V.ComputeCentroid(vtkIdTypeArray, vtkPoints, [float, float,\n    float])\nC++: static void ComputeCentroid(vtkIdTypeArray *ids,\n    vtkPoints *pts, double centroid[3])\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"ParameterizePolygon", PyvtkQuadraticPolygon_ParameterizePolygon, METH_VARARGS,
   "V.ParameterizePolygon([float, float, float], [float, float,\n    float], float, [float, float, float], float, [float, float,\n    float]) -> int\nC++: int ParameterizePolygon(double p0[3], double p10[3],\n    double &l10, double p20[3], double &l20, double n[3])\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"PointInPolygon", PyvtkQuadraticPolygon_PointInPolygon, METH_VARARGS,
   "V.PointInPolygon([float, float, float], int, [float, ...], [float,\n     float, float, float, float, float], [float, float, float])\n    -> int\nC++: static int PointInPolygon(double x[3], int numPts,\n    double *pts, double bounds[6], double n[3])\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"Triangulate", PyvtkQuadraticPolygon_Triangulate, METH_VARARGS,
   "V.Triangulate(vtkIdList) -> int\nC++: int Triangulate(vtkIdList *outTris)\nV.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n    override;\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"NonDegenerateTriangulate", PyvtkQuadraticPolygon_NonDegenerateTriangulate, METH_VARARGS,
   "V.NonDegenerateTriangulate(vtkIdList) -> int\nC++: int NonDegenerateTriangulate(vtkIdList *outTris)\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"DistanceToPolygon", PyvtkQuadraticPolygon_DistanceToPolygon, METH_VARARGS,
   "V.DistanceToPolygon([float, float, float], int, [float, ...],\n    [float, float, float, float, float, float], [float, float,\n    float]) -> float\nC++: static double DistanceToPolygon(double x[3], int numPts,\n    double *pts, double bounds[6], double closest[3])\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"IntersectPolygonWithPolygon", PyvtkQuadraticPolygon_IntersectPolygonWithPolygon, METH_VARARGS,
   "V.IntersectPolygonWithPolygon(int, [float, ...], [float, float,\n    float, float, float, float], int, [float, ...], [float, float,\n     float], float, [float, float, float]) -> int\nC++: static int IntersectPolygonWithPolygon(int npts, double *pts,\n     double bounds[6], int npts2, double *pts2, double bounds2[3],\n     double tol, double x[3])\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"IntersectConvex2DCells", PyvtkQuadraticPolygon_IntersectConvex2DCells, METH_VARARGS,
   "V.IntersectConvex2DCells(vtkCell, vtkCell, float, [float, float,\n    float], [float, float, float]) -> int\nC++: static int IntersectConvex2DCells(vtkCell *cell1,\n    vtkCell *cell2, double tol, double p0[3], double p1[3])\n\nThese methods are based on the vtkPolygon ones : the\nvtkQuadraticPolygon (with n edges and 2*n points) is transform\ninto a vtkPolygon (with 2*n edges and 2*n points) and the\nvtkPolygon methods are called.\n"},
  {"Derivatives", PyvtkQuadraticPolygon_Derivatives, METH_VARARGS,
   "V.Derivatives(int, (float, float, float), (float, ...), int,\n    [float, ...])\nC++: void Derivatives(int subId, const double pcoords[3],\n    const double *values, int dim, double *derivs) override;\n\nCompute derivatives given cell subId and parametric coordinates.\nThe values array is a series of data value(s) at the cell points.\nThere is a one-to-one correspondence between cell point and data\nvalue(s). Dim is the number of data values per cell point. Derivs\nare derivatives in the x-y-z coordinate directions for each data\nvalue. Thus, if computing derivatives for a scalar function in a\nhexahedron, dim=1, 8 values are supplied, and 3 deriv values are\nreturned (i.e., derivatives in x-y-z directions). On the other\nhand, if computing derivatives of velocity (vx,vy,vz) dim=3, 24\nvalues are supplied ((vx,vy,vz)1, (vx,vy,vz)2, ....()8), and 9\nderiv values are returned ((d(vx)/dx),(d(vx)/dy),(d(vx)/dz),\n(d(vy)/dx),(d(vy)/dy), (d(vy)/dz),\n(d(vz)/dx),(d(vz)/dy),(d(vz)/dz)).\n"},
  {"GetUseMVCInterpolation", PyvtkQuadraticPolygon_GetUseMVCInterpolation, METH_VARARGS,
   "V.GetUseMVCInterpolation() -> bool\nC++: virtual bool GetUseMVCInterpolation()\n\nSet/Get the flag indicating whether to use Mean Value Coordinate\nfor the interpolation. If true, InterpolateFunctions() uses the\nMean Value Coordinate to compute weights. Otherwise, the\nconventional 1/r^2 method is used. The UseMVCInterpolation\nparameter is set to true by default.\n"},
  {"SetUseMVCInterpolation", PyvtkQuadraticPolygon_SetUseMVCInterpolation, METH_VARARGS,
   "V.SetUseMVCInterpolation(bool)\nC++: virtual void SetUseMVCInterpolation(bool _arg)\n\nSet/Get the flag indicating whether to use Mean Value Coordinate\nfor the interpolation. If true, InterpolateFunctions() uses the\nMean Value Coordinate to compute weights. Otherwise, the\nconventional 1/r^2 method is used. The UseMVCInterpolation\nparameter is set to true by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkQuadraticPolygon_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkQuadraticPolygon", // tp_name
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
  PyvtkQuadraticPolygon_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuadraticPolygon_StaticNew()
{
  return vtkQuadraticPolygon::New();
}

PyObject *PyvtkQuadraticPolygon_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkQuadraticPolygon_Type, PyvtkQuadraticPolygon_Methods,
    "vtkQuadraticPolygon",
 &PyvtkQuadraticPolygon_StaticNew);

  PyTypeObject *pytype = &PyvtkQuadraticPolygon_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkNonLinearCell_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkQuadraticPolygon(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuadraticPolygon_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuadraticPolygon", o) != 0)
  {
    Py_DECREF(o);
  }

}

