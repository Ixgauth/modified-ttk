// python wrapper for vtkBiQuadraticQuadraticWedge
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
#include "vtkBiQuadraticQuadraticWedge.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBiQuadraticQuadraticWedge(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBiQuadraticQuadraticWedge_ClassNew(); }

#ifndef DECLARED_PyvtkNonLinearCell_ClassNew
extern "C" { PyObject *PyvtkNonLinearCell_ClassNew(); }
#define DECLARED_PyvtkNonLinearCell_ClassNew
#endif

static const char *PyvtkBiQuadraticQuadraticWedge_Doc =
  "vtkBiQuadraticQuadraticWedge - cell represents a parabolic, 18-node\nisoparametric wedge\n\n"
  "Superclass: vtkNonLinearCell\n\n"
  "vtkBiQuadraticQuadraticWedge is a concrete implementation of\n"
  "vtkNonLinearCell to represent a three-dimensional, 18-node\n"
  "isoparametric biquadratic wedge. The interpolation is the standard\n"
  "finite element, biquadratic-quadratic isoparametric shape function\n"
  "plus the linear functions. The cell includes a mid-edge node. The\n"
  "ordering of the 18 points defining the cell is point ids (0-5,6-15,\n"
  "16-18) where point ids 0-5 are the six corner vertices of the wedge;\n"
  "followed by nine midedge nodes (6-15) and 3 center-face nodes. Note\n"
  "that these midedge nodes correspond lie on the edges defined by\n"
  "(0,1), (1,2), (2,0), (3,4), (4,5), (5,3), (0,3), (1,4), (2,5), and\n"
  "the center-face nodes are laying in quads 16-(0,1,4,3), 17-(1,2,5,4)\n"
  "and (2,0,3,5).\n\n"
  "@sa\n"
  "vtkQuadraticEdge vtkQuadraticTriangle vtkQuadraticTetra\n"
  "vtkQuadraticHexahedron vtkQuadraticQuad vtkQuadraticPyramid\n\n"
  "@par Thanks: Thanks to Soeren Gebbert who developed this class and\n"
  "integrated it into VTK 5.0.\n\n";


static PyObject *
PyvtkBiQuadraticQuadraticWedge_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBiQuadraticQuadraticWedge::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBiQuadraticQuadraticWedge::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBiQuadraticQuadraticWedge *tempr = vtkBiQuadraticQuadraticWedge::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBiQuadraticQuadraticWedge *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBiQuadraticQuadraticWedge::NewInstance());

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
PyvtkBiQuadraticQuadraticWedge_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkBiQuadraticQuadraticWedge::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkBiQuadraticQuadraticWedge::GetCellDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkBiQuadraticQuadraticWedge::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkBiQuadraticQuadraticWedge::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkBiQuadraticQuadraticWedge::GetEdge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkBiQuadraticQuadraticWedge::GetFace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      op->vtkBiQuadraticQuadraticWedge::CellBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      op->vtkBiQuadraticQuadraticWedge::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      op->vtkBiQuadraticQuadraticWedge::EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkBiQuadraticQuadraticWedge_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      op->vtkBiQuadraticQuadraticWedge::EvaluateLocation(temp0, temp1, temp2, temp3);
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
PyvtkBiQuadraticQuadraticWedge_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      op->vtkBiQuadraticQuadraticWedge::Triangulate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      op->vtkBiQuadraticQuadraticWedge::Derivatives(temp0, temp1, temp2, temp3, temp4);
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
PyvtkBiQuadraticQuadraticWedge_GetParametricCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t sizer = 3 * op->GetNumberOfPoints();
    double *tempr = (ap.IsBound() ?
      op->GetParametricCoords() :
      op->vtkBiQuadraticQuadraticWedge::GetParametricCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      op->vtkBiQuadraticQuadraticWedge::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      op->vtkBiQuadraticQuadraticWedge::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkBiQuadraticQuadraticWedge_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

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
      op->vtkBiQuadraticQuadraticWedge::GetParametricCenter(temp0));

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
PyvtkBiQuadraticQuadraticWedge_InterpolationFunctions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolationFunctions");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 15;
  double temp1[15];
  double save1[15];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkBiQuadraticQuadraticWedge::InterpolationFunctions(temp0, temp1);

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
PyvtkBiQuadraticQuadraticWedge_InterpolationDerivs(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolationDerivs");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 45;
  double temp1[45];
  double save1[45];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkBiQuadraticQuadraticWedge::InterpolationDerivs(temp0, temp1);

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
PyvtkBiQuadraticQuadraticWedge_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 15;
  double temp1[15];
  double save1[15];
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
      op->vtkBiQuadraticQuadraticWedge::InterpolateFunctions(temp0, temp1);
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
PyvtkBiQuadraticQuadraticWedge_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiQuadraticQuadraticWedge *op = static_cast<vtkBiQuadraticQuadraticWedge *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 45;
  double temp1[45];
  double save1[45];
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
      op->vtkBiQuadraticQuadraticWedge::InterpolateDerivs(temp0, temp1);
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
PyvtkBiQuadraticQuadraticWedge_GetEdgeArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEdgeArray");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = vtkBiQuadraticQuadraticWedge::GetEdgeArray(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiQuadraticQuadraticWedge_GetFaceArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFaceArray");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = vtkBiQuadraticQuadraticWedge::GetFaceArray(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBiQuadraticQuadraticWedge_Methods[] = {
  {"IsTypeOf", PyvtkBiQuadraticQuadraticWedge_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBiQuadraticQuadraticWedge_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBiQuadraticQuadraticWedge_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBiQuadraticQuadraticWedge\nC++: static vtkBiQuadraticQuadraticWedge *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBiQuadraticQuadraticWedge_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBiQuadraticQuadraticWedge\nC++: vtkBiQuadraticQuadraticWedge *NewInstance()\n\n"},
  {"GetCellType", PyvtkBiQuadraticQuadraticWedge_GetCellType, METH_VARARGS,
   "V.GetCellType() -> int\nC++: int GetCellType() override;\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {"GetCellDimension", PyvtkBiQuadraticQuadraticWedge_GetCellDimension, METH_VARARGS,
   "V.GetCellDimension() -> int\nC++: int GetCellDimension() override;\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {"GetNumberOfEdges", PyvtkBiQuadraticQuadraticWedge_GetNumberOfEdges, METH_VARARGS,
   "V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges() override;\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {"GetNumberOfFaces", PyvtkBiQuadraticQuadraticWedge_GetNumberOfFaces, METH_VARARGS,
   "V.GetNumberOfFaces() -> int\nC++: int GetNumberOfFaces() override;\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {"GetEdge", PyvtkBiQuadraticQuadraticWedge_GetEdge, METH_VARARGS,
   "V.GetEdge(int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId) override;\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {"GetFace", PyvtkBiQuadraticQuadraticWedge_GetFace, METH_VARARGS,
   "V.GetFace(int) -> vtkCell\nC++: vtkCell *GetFace(int faceId) override;\n\nImplement the vtkCell API. See the vtkCell API for descriptions\nof these methods.\n"},
  {"CellBoundary", PyvtkBiQuadraticQuadraticWedge_CellBoundary, METH_VARARGS,
   "V.CellBoundary(int, (float, float, float), vtkIdList) -> int\nC++: int CellBoundary(int subId, const double pcoords[3],\n    vtkIdList *pts) override;\n\nGiven parametric coordinates of a point, return the closest cell\nboundary, and whether the point is inside or outside of the cell.\nThe cell boundary is defined by a list of points (pts) that\nspecify a face (3D cell), edge (2D cell), or vertex (1D cell). If\nthe return value of the method is != 0, then the point is inside\nthe cell.\n"},
  {"Contour", PyvtkBiQuadraticQuadraticWedge_Contour, METH_VARARGS,
   "V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd) override;\n\nGenerate contouring primitives. The scalar list cellScalars are\nscalar values at each cell point. The point locator is\nessentially a points list that merges points as they are inserted\n(i.e., prevents duplicates). Contouring primitives can be\nvertices, lines, or polygons. It is possible to interpolate point\ndata along the edge by providing input and output point data - if\noutPd is nullptr, then no interpolation is performed. Also, if\nthe output cell data is non-nullptr, the cell data from the\ncontoured cell is passed to the generated contouring primitives.\n(Note: the CopyAllocate() method must be invoked on both the\noutput cell and point data. The cellId refers to the cell from\nwhich the cell data is copied.)\n"},
  {"EvaluatePosition", PyvtkBiQuadraticQuadraticWedge_EvaluatePosition, METH_VARARGS,
   "V.EvaluatePosition((float, float, float), [float, float, float],\n    int, [float, float, float], float, [float, ...]) -> int\nC++: int EvaluatePosition(const double x[3], double *closestPoint,\n     int &subId, double pcoords[3], double &dist2,\n    double *weights) override;\n\nGiven a point x[3] return inside(=1), outside(=0) cell, or (-1)\ncomputational problem encountered; evaluate parametric\ncoordinates, sub-cell id (!=0 only if cell is composite),\ndistance squared of point x[3] to cell (in particular, the\nsub-cell indicated), closest point on cell to x[3] (unless\nclosestPoint is null, in which case, the closest point and dist2\nare not found), and interpolation weights in cell. (The number of\nweights is equal to the number of points defining the cell).\nNote: on rare occasions a -1 is returned from the method. This\nmeans that numerical error has occurred and all data returned\nfrom this method should be ignored. Also, inside/outside is\ndetermine parametrically. That is, a point is inside if it\nsatisfies parametric limits. This can cause problems for cells of\ntopological dimension 2 or less, since a point in 3D can project\nonto the cell within parametric limits but be \"far\" from the\ncell.  Thus the value dist2 may be checked to determine true\nin/out.\n"},
  {"EvaluateLocation", PyvtkBiQuadraticQuadraticWedge_EvaluateLocation, METH_VARARGS,
   "V.EvaluateLocation(int, (float, float, float), [float, float,\n    float], [float, ...])\nC++: void EvaluateLocation(int &subId, const double pcoords[3],\n    double x[3], double *weights) override;\n\nDetermine global coordinate (x[3]) from subId and parametric\ncoordinates. Also returns interpolation weights. (The number of\nweights is equal to the number of points in the cell.)\n"},
  {"Triangulate", PyvtkBiQuadraticQuadraticWedge_Triangulate, METH_VARARGS,
   "V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n    override;\n\nGenerate simplices of proper dimension. If cell is 3D,\ntetrahedron are generated; if 2D triangles; if 1D lines; if 0D\npoints. The form of the output is a sequence of points, each n+1\npoints (where n is topological cell dimension) defining a\nsimplex. The index is a parameter that controls which\ntriangulation to use (if more than one is possible). If numerical\ndegeneracy encountered, 0 is returned, otherwise 1 is returned.\nThis method does not insert new points: all the points that\ndefine the simplices are the points that define the cell.\n"},
  {"Derivatives", PyvtkBiQuadraticQuadraticWedge_Derivatives, METH_VARARGS,
   "V.Derivatives(int, (float, float, float), (float, ...), int,\n    [float, ...])\nC++: void Derivatives(int subId, const double pcoords[3],\n    const double *values, int dim, double *derivs) override;\n\nCompute derivatives given cell subId and parametric coordinates.\nThe values array is a series of data value(s) at the cell points.\nThere is a one-to-one correspondence between cell point and data\nvalue(s). Dim is the number of data values per cell point. Derivs\nare derivatives in the x-y-z coordinate directions for each data\nvalue. Thus, if computing derivatives for a scalar function in a\nhexahedron, dim=1, 8 values are supplied, and 3 deriv values are\nreturned (i.e., derivatives in x-y-z directions). On the other\nhand, if computing derivatives of velocity (vx,vy,vz) dim=3, 24\nvalues are supplied ((vx,vy,vz)1, (vx,vy,vz)2, ....()8), and 9\nderiv values are returned ((d(vx)/dx),(d(vx)/dy),(d(vx)/dz),\n(d(vy)/dx),(d(vy)/dy), (d(vy)/dz),\n(d(vz)/dx),(d(vz)/dy),(d(vz)/dz)).\n"},
  {"GetParametricCoords", PyvtkBiQuadraticQuadraticWedge_GetParametricCoords, METH_VARARGS,
   "V.GetParametricCoords() -> (float, ...)\nC++: double *GetParametricCoords() override;\n\nReturn a contiguous array of parametric coordinates of the points\ndefining this cell. In other words, (px,py,pz, px,py,pz, etc..) \nThe coordinates are ordered consistent with the definition of the\npoint ordering for the cell. This method returns a non-nullptr\npointer when the cell is a primary type (i.e., IsPrimaryCell() is\ntrue). Note that 3D parametric coordinates are returned no matter\nwhat the topological dimension of the cell.\n"},
  {"Clip", PyvtkBiQuadraticQuadraticWedge_Clip, METH_VARARGS,
   "V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *tetras,\n    vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd,\n    vtkIdType cellId, vtkCellData *outCd, int insideOut) override;\n\nClip this quadratic Wedge using scalar value provided. Like\ncontouring, except that it cuts the hex to produce linear\ntetrahedron.\n"},
  {"IntersectWithLine", PyvtkBiQuadraticQuadraticWedge_IntersectWithLine, METH_VARARGS,
   "V.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId) override;\n\nLine-edge intersection. Intersection has to occur within [0,1]\nparametric coordinates and with specified tolerance.\n"},
  {"GetParametricCenter", PyvtkBiQuadraticQuadraticWedge_GetParametricCenter, METH_VARARGS,
   "V.GetParametricCenter([float, float, float]) -> int\nC++: int GetParametricCenter(double pcoords[3]) override;\n\nReturn the center of the quadratic wedge in parametric\ncoordinates.\n"},
  {"InterpolationFunctions", PyvtkBiQuadraticQuadraticWedge_InterpolationFunctions, METH_VARARGS,
   "V.InterpolationFunctions((float, float, float), [float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float])\nC++: static void InterpolationFunctions(const double pcoords[3],\n    double weights[15])\n\n@deprecated Replaced by\nvtkBiQuadraticQuadraticWedge::InterpolateFunctions as of VTK 5.2\n"},
  {"InterpolationDerivs", PyvtkBiQuadraticQuadraticWedge_InterpolationDerivs, METH_VARARGS,
   "V.InterpolationDerivs((float, float, float), [float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float])\nC++: static void InterpolationDerivs(const double pcoords[3],\n    double derivs[45])\n\n@deprecated Replaced by\nvtkBiQuadraticQuadraticWedge::InterpolateDerivs as of VTK 5.2\n"},
  {"InterpolateFunctions", PyvtkBiQuadraticQuadraticWedge_InterpolateFunctions, METH_VARARGS,
   "V.InterpolateFunctions((float, float, float), [float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float])\nC++: void InterpolateFunctions(const double pcoords[3],\n    double weights[15]) override;\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {"InterpolateDerivs", PyvtkBiQuadraticQuadraticWedge_InterpolateDerivs, METH_VARARGS,
   "V.InterpolateDerivs((float, float, float), [float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: void InterpolateDerivs(const double pcoords[3],\n    double derivs[45]) override;\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {"GetEdgeArray", PyvtkBiQuadraticQuadraticWedge_GetEdgeArray, METH_VARARGS,
   "V.GetEdgeArray(int) -> (int, ...)\nC++: static int *GetEdgeArray(int edgeId)\n\nReturn the ids of the vertices defining edge/face\n(`edgeId`/`faceId'). Ids are related to the cell, not to the\ndataset.\n"},
  {"GetFaceArray", PyvtkBiQuadraticQuadraticWedge_GetFaceArray, METH_VARARGS,
   "V.GetFaceArray(int) -> (int, ...)\nC++: static int *GetFaceArray(int faceId)\n\nReturn the ids of the vertices defining edge/face\n(`edgeId`/`faceId'). Ids are related to the cell, not to the\ndataset.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBiQuadraticQuadraticWedge_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkBiQuadraticQuadraticWedge", // tp_name
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
  PyvtkBiQuadraticQuadraticWedge_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBiQuadraticQuadraticWedge_StaticNew()
{
  return vtkBiQuadraticQuadraticWedge::New();
}

PyObject *PyvtkBiQuadraticQuadraticWedge_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBiQuadraticQuadraticWedge_Type, PyvtkBiQuadraticQuadraticWedge_Methods,
    "vtkBiQuadraticQuadraticWedge",
 &PyvtkBiQuadraticQuadraticWedge_StaticNew);

  PyTypeObject *pytype = &PyvtkBiQuadraticQuadraticWedge_Type;

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

void PyVTKAddFile_vtkBiQuadraticQuadraticWedge(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBiQuadraticQuadraticWedge_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBiQuadraticQuadraticWedge", o) != 0)
  {
    Py_DECREF(o);
  }

}
