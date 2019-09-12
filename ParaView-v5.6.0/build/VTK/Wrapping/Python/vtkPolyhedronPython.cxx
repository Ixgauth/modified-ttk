// python wrapper for vtkPolyhedron
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
#include "vtkPolyhedron.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyhedron(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolyhedron_ClassNew(); }

#ifndef DECLARED_PyvtkCell3D_ClassNew
extern "C" { PyObject *PyvtkCell3D_ClassNew(); }
#define DECLARED_PyvtkCell3D_ClassNew
#endif

static const char *PyvtkPolyhedron_Doc =
  "vtkPolyhedron - a 3D cell defined by a set of polygonal faces\n\n"
  "Superclass: vtkCell3D\n\n"
  "vtkPolyhedron is a concrete implementation that represents a 3D cell\n"
  "defined by a set of polygonal faces. The polyhedron should be\n"
  "watertight, non-self-intersecting and manifold (each edge is used\n"
  "twice).\n\n"
  "Interpolation functions and weights are defined / computed using the\n"
  "method of Mean Value Coordinates (MVC). See the VTK class\n"
  "vtkMeanValueCoordinatesInterpolator for more information.\n\n"
  "The class does not require the polyhedron to be convex. However, the\n"
  "polygonal faces must be planar. Non-planar polygonal faces will\n"
  "definitely cause problems, especially in severely warped situations.\n\n"
  "@sa\n"
  "vtkCell3D vtkConvecPointSet vtkMeanValueCoordinatesInterpolator\n\n";


static PyObject *
PyvtkPolyhedron_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyhedron::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyhedron::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyhedron *tempr = vtkPolyhedron::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyhedron *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyhedron::NewInstance());

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
PyvtkPolyhedron_GetEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->GetEdgePoints(temp0, temp1);
    }
    else
    {
      op->vtkPolyhedron::GetEdgePoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1, size1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetFacePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFacePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->GetFacePoints(temp0, temp1);
    }
    else
    {
      op->vtkPolyhedron::GetFacePoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1, size1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetParametricCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t sizer = 3 * op->GetNumberOfPoints();
    double *tempr = (ap.IsBound() ?
      op->GetParametricCoords() :
      op->vtkPolyhedron::GetParametricCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkPolyhedron::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_RequiresInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->RequiresInitialization() :
      op->vtkPolyhedron::RequiresInitialization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPolyhedron::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkPolyhedron::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkPolyhedron::GetEdge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkPolyhedron::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkPolyhedron::GetFace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkPolyhedron_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::EvaluateLocation(temp0, temp1, temp2, temp3);
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
PyvtkPolyhedron_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkPolyhedron_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::Triangulate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::Derivatives(temp0, temp1, temp2, temp3, temp4);
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
PyvtkPolyhedron_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::CellBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::GetParametricCenter(temp0));

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
PyvtkPolyhedron_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsPrimaryCell() :
      op->vtkPolyhedron::IsPrimaryCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::InterpolateFunctions(temp0, temp1);
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
PyvtkPolyhedron_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::InterpolateDerivs(temp0, temp1);
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
PyvtkPolyhedron_RequiresExplicitFaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresExplicitFaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->RequiresExplicitFaceRepresentation() :
      op->vtkPolyhedron::RequiresExplicitFaceRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_SetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

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
      op->vtkPolyhedron::SetFaces(temp0);
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
PyvtkPolyhedron_GetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetFaces() :
      op->vtkPolyhedron::GetFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_IsInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->IsInside(temp0, temp1) :
      op->vtkPolyhedron::IsInside(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_IsConvex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsConvex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsConvex() :
      op->vtkPolyhedron::IsConvex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyhedron_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyhedron *op = static_cast<vtkPolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyData() :
      op->vtkPolyhedron::GetPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyhedron_Methods[] = {
  {"IsTypeOf", PyvtkPolyhedron_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard new methods.\n"},
  {"IsA", PyvtkPolyhedron_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard new methods.\n"},
  {"SafeDownCast", PyvtkPolyhedron_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPolyhedron\nC++: static vtkPolyhedron *SafeDownCast(vtkObjectBase *o)\n\nStandard new methods.\n"},
  {"NewInstance", PyvtkPolyhedron_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolyhedron\nC++: vtkPolyhedron *NewInstance()\n\nStandard new methods.\n"},
  {"GetEdgePoints", PyvtkPolyhedron_GetEdgePoints, METH_VARARGS,
   "V.GetEdgePoints(int, [int, ...])\nC++: void GetEdgePoints(int edgeId, int *&pts) override;\n\nSee vtkCell3D API for description of these methods.\n"},
  {"GetFacePoints", PyvtkPolyhedron_GetFacePoints, METH_VARARGS,
   "V.GetFacePoints(int, [int, ...])\nC++: void GetFacePoints(int faceId, int *&pts) override;\n\nGet the list of vertices that define a face.  The list is\nterminated with a negative number. Note that the vertices are\n0-offset; that is, they refer to the ids of the cell, not the\npoint ids of the mesh that the cell belongs to. The faceId must\nrange between 0<=faceId<this->GetNumberOfFaces().\n"},
  {"GetParametricCoords", PyvtkPolyhedron_GetParametricCoords, METH_VARARGS,
   "V.GetParametricCoords() -> (float, ...)\nC++: double *GetParametricCoords() override;\n\nReturn a contiguous array of parametric coordinates of the points\ndefining this cell. In other words, (px,py,pz, px,py,pz, etc..) \nThe coordinates are ordered consistent with the definition of the\npoint ordering for the cell. This method returns a non-nullptr\npointer when the cell is a primary type (i.e., IsPrimaryCell() is\ntrue). Note that 3D parametric coordinates are returned no matter\nwhat the topological dimension of the cell.\n"},
  {"GetCellType", PyvtkPolyhedron_GetCellType, METH_VARARGS,
   "V.GetCellType() -> int\nC++: int GetCellType() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"RequiresInitialization", PyvtkPolyhedron_RequiresInitialization, METH_VARARGS,
   "V.RequiresInitialization() -> int\nC++: int RequiresInitialization() override;\n\nThis cell requires that it be initialized prior to access.\n"},
  {"Initialize", PyvtkPolyhedron_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\n"},
  {"GetNumberOfEdges", PyvtkPolyhedron_GetNumberOfEdges, METH_VARARGS,
   "V.GetNumberOfEdges() -> int\nC++: int GetNumberOfEdges() override;\n\nA polyhedron is represented internally by a set of polygonal\nfaces. These faces can be processed to explicitly determine\nedges.\n"},
  {"GetEdge", PyvtkPolyhedron_GetEdge, METH_VARARGS,
   "V.GetEdge(int) -> vtkCell\nC++: vtkCell *GetEdge(int) override;\n\nA polyhedron is represented internally by a set of polygonal\nfaces. These faces can be processed to explicitly determine\nedges.\n"},
  {"GetNumberOfFaces", PyvtkPolyhedron_GetNumberOfFaces, METH_VARARGS,
   "V.GetNumberOfFaces() -> int\nC++: int GetNumberOfFaces() override;\n\nA polyhedron is represented internally by a set of polygonal\nfaces. These faces can be processed to explicitly determine\nedges.\n"},
  {"GetFace", PyvtkPolyhedron_GetFace, METH_VARARGS,
   "V.GetFace(int) -> vtkCell\nC++: vtkCell *GetFace(int faceId) override;\n\nA polyhedron is represented internally by a set of polygonal\nfaces. These faces can be processed to explicitly determine\nedges.\n"},
  {"Contour", PyvtkPolyhedron_Contour, METH_VARARGS,
   "V.Contour(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkCellArray, vtkCellArray, vtkPointData,\n    vtkPointData, vtkCellData, int, vtkCellData)\nC++: void Contour(double value, vtkDataArray *scalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd) override;\n\nSatisfy the vtkCell API. This method contours the input\npolyhedron and outputs a polygon. When the result polygon is not\nplanar, it will be triangulated. The current implementation\nassumes water-tight polyhedron cells.\n"},
  {"Clip", PyvtkPolyhedron_Clip, METH_VARARGS,
   "V.Clip(float, vtkDataArray, vtkIncrementalPointLocator,\n    vtkCellArray, vtkPointData, vtkPointData, vtkCellData, int,\n    vtkCellData, int)\nC++: void Clip(double value, vtkDataArray *scalars,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *connectivity, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd, int insideOut) override;\n\nSatisfy the vtkCell API. This method clips the input polyhedron\nand outputs a new polyhedron. The face information of the output\npolyhedron is encoded in the output vtkCellArray using a special\nformat: CellLength [nCellFaces, nFace0Pts, i, j, k, nFace1Pts, i,\nj, k, ...]. Use the static method\nvtkUnstructuredGrid::DecomposePolyhedronCellArray to convert it\ninto a standard format. Note: the algorithm assumes water-tight\npolyhedron cells.\n"},
  {"EvaluatePosition", PyvtkPolyhedron_EvaluatePosition, METH_VARARGS,
   "V.EvaluatePosition((float, float, float), [float, float, float],\n    int, [float, float, float], float, [float, ...]) -> int\nC++: int EvaluatePosition(const double x[3],\n    double closestPoint[3], int &subId, double pcoords[3],\n    double &dist2, double weights[]) override;\n\nSatisfy the vtkCell API. The subId is ignored and zero is always\nreturned. The parametric coordinates pcoords are normalized\nvalues in the bounding box of the polyhedron. The weights are\ndetermined by evaluating the MVC coordinates. The dist is always\nzero if the point x[3] is inside the polyhedron; otherwise it's\nthe distance to the surface.\n"},
  {"EvaluateLocation", PyvtkPolyhedron_EvaluateLocation, METH_VARARGS,
   "V.EvaluateLocation(int, (float, float, float), [float, float,\n    float], [float, ...])\nC++: void EvaluateLocation(int &subId, const double pcoords[3],\n    double x[3], double *weights) override;\n\nThe inverse of EvaluatePosition. Note the weights should be the\nMVC weights.\n"},
  {"IntersectWithLine", PyvtkPolyhedron_IntersectWithLine, METH_VARARGS,
   "V.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId) override;\n\nIntersect the line (p1,p2) with a given tolerance tol to\ndetermine a point of intersection x[3] with parametric coordinate\nt along the line. The parametric coordinates are returned as well\n(subId can be ignored). Returns true if the line intersects a\nface.\n"},
  {"Triangulate", PyvtkPolyhedron_Triangulate, METH_VARARGS,
   "V.Triangulate(int, vtkIdList, vtkPoints) -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n    override;\n\nUse vtkOrderedTriangulator to tetrahedralize the polyhedron mesh.\nThis method works well for a convex polyhedron but may return\nwrong result in a concave case. Once triangulation has been\nperformed, the results are saved in ptIds and pts. The ptIds is a\nvtkIdList with 4xn number of ids (n is the number of result\ntetrahedrons). The first 4 represent the point ids of the first\ntetrahedron, the second 4 represents the point ids of the second\ntetrahedron and so on. The point ids represent global dataset\nids. The points of result tetrahedons are stored in pts. Note\nthat there are 4xm output points (m is the number of points in\nthe original polyhedron). A point may be stored multiple times\nwhen it is shared by more than one tetrahedrons. The points\nstored in pts are ordered the same as they are listed in ptIds.\n"},
  {"Derivatives", PyvtkPolyhedron_Derivatives, METH_VARARGS,
   "V.Derivatives(int, (float, float, float), (float, ...), int,\n    [float, ...])\nC++: void Derivatives(int subId, const double pcoords[3],\n    const double *values, int dim, double *derivs) override;\n\nComputes derivatives at the point specified by the parameter\ncoordinate. Current implementation uses all vertices and subId is\nnot used. To accelerate the speed, the future implementation can\ntriangulate and extract the local tetrahedron from subId and\npcoords, then evaluate derivatives on the local tetrahedron.\n"},
  {"CellBoundary", PyvtkPolyhedron_CellBoundary, METH_VARARGS,
   "V.CellBoundary(int, (float, float, float), vtkIdList) -> int\nC++: int CellBoundary(int subId, const double pcoords[3],\n    vtkIdList *pts) override;\n\nFind the boundary face closest to the point defined by the\npcoords[3] and subId of the cell (subId can be ignored).\n"},
  {"GetParametricCenter", PyvtkPolyhedron_GetParametricCenter, METH_VARARGS,
   "V.GetParametricCenter([float, float, float]) -> int\nC++: int GetParametricCenter(double pcoords[3]) override;\n\nReturn the center of the cell in parametric coordinates. In this\ncell, the center of the bounding box is returned.\n"},
  {"IsPrimaryCell", PyvtkPolyhedron_IsPrimaryCell, METH_VARARGS,
   "V.IsPrimaryCell() -> int\nC++: int IsPrimaryCell() override;\n\nA polyhedron is a full-fledged primary cell.\n"},
  {"InterpolateFunctions", PyvtkPolyhedron_InterpolateFunctions, METH_VARARGS,
   "V.InterpolateFunctions((float, float, float), [float, ...])\nC++: void InterpolateFunctions(const double x[3], double *sf)\n    override;\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives). Here we use the MVC calculation process\nto compute the interpolation functions.\n"},
  {"InterpolateDerivs", PyvtkPolyhedron_InterpolateDerivs, METH_VARARGS,
   "V.InterpolateDerivs((float, float, float), [float, ...])\nC++: void InterpolateDerivs(const double x[3], double *derivs)\n    override;\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives). Here we use the MVC calculation process\nto compute the interpolation functions.\n"},
  {"RequiresExplicitFaceRepresentation", PyvtkPolyhedron_RequiresExplicitFaceRepresentation, METH_VARARGS,
   "V.RequiresExplicitFaceRepresentation() -> int\nC++: int RequiresExplicitFaceRepresentation() override;\n\nMethods supporting the definition of faces. Note that the\nGetFaces() returns a list of faces in vtkCellArray form; use the\nmethod GetNumberOfFaces() to determine the number of faces in the\nlist. The SetFaces() method is also in vtkCellArray form, except\nthat it begins with a leading count indicating the total number\nof faces in the list.\n"},
  {"SetFaces", PyvtkPolyhedron_SetFaces, METH_VARARGS,
   "V.SetFaces([int, ...])\nC++: void SetFaces(vtkIdType *faces) override;\n\nMethods supporting the definition of faces. Note that the\nGetFaces() returns a list of faces in vtkCellArray form; use the\nmethod GetNumberOfFaces() to determine the number of faces in the\nlist. The SetFaces() method is also in vtkCellArray form, except\nthat it begins with a leading count indicating the total number\nof faces in the list.\n"},
  {"GetFaces", PyvtkPolyhedron_GetFaces, METH_VARARGS,
   "V.GetFaces() -> (int, ...)\nC++: vtkIdType *GetFaces() override;\n\nMethods supporting the definition of faces. Note that the\nGetFaces() returns a list of faces in vtkCellArray form; use the\nmethod GetNumberOfFaces() to determine the number of faces in the\nlist. The SetFaces() method is also in vtkCellArray form, except\nthat it begins with a leading count indicating the total number\nof faces in the list.\n"},
  {"IsInside", PyvtkPolyhedron_IsInside, METH_VARARGS,
   "V.IsInside((float, float, float), float) -> int\nC++: int IsInside(const double x[3], double tolerance)\n\nA method particular to vtkPolyhedron. It determines whether a\npoint x[3] is inside the polyhedron or not (returns 1 is the\npoint is inside, 0 otherwise). The tolerance is expressed in\nnormalized space; i.e., a fraction of the size of the bounding\nbox.\n"},
  {"IsConvex", PyvtkPolyhedron_IsConvex, METH_VARARGS,
   "V.IsConvex() -> bool\nC++: bool IsConvex()\n\nDetermine whether or not a polyhedron is convex. This method is\nadapted from Devillers et al., \"Checking the Convexity of\nPolytopes and the Planarity of Subdivisions\", Computational\nGeometry, Volume 11, Issues 3 - 4, December 1998, Pages 187 -\n208.\n"},
  {"GetPolyData", PyvtkPolyhedron_GetPolyData, METH_VARARGS,
   "V.GetPolyData() -> vtkPolyData\nC++: vtkPolyData *GetPolyData()\n\nConstruct polydata if no one exist, then return this->PolyData\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolyhedron_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkPolyhedron", // tp_name
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
  PyvtkPolyhedron_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyhedron_StaticNew()
{
  return vtkPolyhedron::New();
}

PyObject *PyvtkPolyhedron_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolyhedron_Type, PyvtkPolyhedron_Methods,
    "vtkPolyhedron",
 &PyvtkPolyhedron_StaticNew);

  PyTypeObject *pytype = &PyvtkPolyhedron_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCell3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyhedron(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyhedron_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyhedron", o) != 0)
  {
    Py_DECREF(o);
  }

}

