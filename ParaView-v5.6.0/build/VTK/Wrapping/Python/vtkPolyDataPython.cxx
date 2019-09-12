// python wrapper for vtkPolyData
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
#include "vtkPolyData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolyData_ClassNew(); }

#ifndef DECLARED_PyvtkPointSet_ClassNew
extern "C" { PyObject *PyvtkPointSet_ClassNew(); }
#define DECLARED_PyvtkPointSet_ClassNew
#endif

static const char *PyvtkPolyData_Doc =
  "vtkPolyData - concrete dataset represents vertices, lines, polygons,\nand triangle strips\n\n"
  "Superclass: vtkPointSet\n\n"
  "vtkPolyData is a data object that is a concrete implementation of\n"
  "vtkDataSet. vtkPolyData represents a geometric structure consisting\n"
  "of vertices, lines, polygons, and/or triangle strips. Point and cell\n"
  "attribute values (e.g., scalars, vectors, etc.) also are represented.\n\n"
  "The actual cell types (vtkCellType.h) supported by vtkPolyData are:\n"
  "vtkVertex, vtkPolyVertex, vtkLine, vtkPolyLine, vtkTriangle, vtkQuad,\n"
  "vtkPolygon, and vtkTriangleStrip.\n\n"
  "One important feature of vtkPolyData objects is that special\n"
  "traversal and data manipulation methods are available to process\n"
  "data. These methods are generally more efficient than vtkDataSet\n"
  "methods and should be used whenever possible. For example, traversing\n"
  "the cells in a dataset we would use GetCell(). To traverse cells with\n"
  "vtkPolyData we would retrieve the cell array object representing\n"
  "polygons (for example using GetPolys()) and then use vtkCellArray's\n"
  "InitTraversal() and GetNextCell() methods.\n\n"
  "@warning\n"
  "Because vtkPolyData is implemented with four separate instances of\n"
  "vtkCellArray to represent 0D vertices, 1D lines, 2D polygons, and 2D\n"
  "triangle strips, it is possible to create vtkPolyData instances that\n"
  "consist of a mixture of cell types. Because of the design of the\n"
  "class, there are certain limitations on how mixed cell types are\n"
  "inserted into the vtkPolyData, and in turn the order in which they\n"
  "are processed and rendered. To preserve the consistency of cell ids,\n"
  "and to insure that cells with cell data are rendered properly, users\n"
  "must insert mixed cells in the order of vertices (vtkVertex and\n"
  "vtkPolyVertex), lines (vtkLine and vtkPolyLine), polygons\n"
  "(vtkTriangle, vtkQuad, vtkPolygon), and triangle strips\n"
  "(vtkTriangleStrip).\n\n"
  "@warning\n"
  "Some filters when processing vtkPolyData with mixed cell types may\n"
  "process the cells in differing ways. Some will convert one type into\n"
  "another (e.g., vtkTriangleStrip into vtkTriangles) or expect a\n"
  "certain type (vtkDecimatePro expects triangles or triangle strips;\n"
  "vtkTubeFilter expects lines). Read the documentation for each filter\n"
  "carefully to understand how each part of vtkPolyData is processed.\n\n";


static PyObject *
PyvtkPolyData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyData *tempr = vtkPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyData::NewInstance());

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
PyvtkPolyData_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkPolyData::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->CopyStructure(temp0);
    }
    else
    {
      op->vtkPolyData::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkPolyData::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkPolyData::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkGenericCell *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
  {
    if (ap.IsBound())
    {
      op->GetCell(temp0, temp1);
    }
    else
    {
      op->vtkPolyData::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(2*size1);
  vtkIdType *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetCell(temp0, temp1) :
      op->vtkPolyData::GetCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1, size1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetCell_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0, temp1, temp2) :
      op->vtkPolyData::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyData_GetCell_Methods[] = {
  {nullptr, PyvtkPolyData_GetCell_s2, METH_VARARGS,
   "@kV *vtkGenericCell"},
  {nullptr, PyvtkPolyData_GetCell_s3, METH_VARARGS,
   "@kP *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolyData_GetCell(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyData_GetCell_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPolyData_GetCell_s1(self, args);
    case 3:
      return PyvtkPolyData_GetCell_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}



static PyObject *
PyvtkPolyData_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkPolyData::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetCellBounds(temp0, temp1);
    }
    else
    {
      op->vtkPolyData::GetCellBounds(temp0, temp1);
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
PyvtkPolyData_GetCellNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellNeighbors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyData::GetCellNeighbors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_CopyCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkPolyData *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkPointLocator *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkPointLocator")))
  {
    if (ap.IsBound())
    {
      op->CopyCells(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyData::CopyCells(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetCellPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellPoints(temp0, temp1);
    }
    else
    {
      op->vtkPolyData::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetCellPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetCellPoints(temp0, temp1, temp2) :
      op->vtkPolyData::GetCellPoints(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetCellPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolyData_GetCellPoints_s1(self, args);
    case 3:
      return PyvtkPolyData_GetCellPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellPoints");
  return nullptr;
}



static PyObject *
PyvtkPolyData_GetPointCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetPointCells(temp0, temp1);
    }
    else
    {
      op->vtkPolyData::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetPointCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  unsigned short temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->GetPointCells(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyData::GetPointCells(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetPointCells(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolyData_GetPointCells_s1(self, args);
    case 3:
      return PyvtkPolyData_GetPointCells_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointCells");
  return nullptr;
}



static PyObject *
PyvtkPolyData_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeBounds();
    }
    else
    {
      op->vtkPolyData::ComputeBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkPolyData::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkPolyData::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_SetVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetVerts(temp0);
    }
    else
    {
      op->vtkPolyData::SetVerts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetVerts() :
      op->vtkPolyData::GetVerts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_SetLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetLines(temp0);
    }
    else
    {
      op->vtkPolyData::SetLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetLines() :
      op->vtkPolyData::GetLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_SetPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetPolys(temp0);
    }
    else
    {
      op->vtkPolyData::SetPolys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetPolys() :
      op->vtkPolyData::GetPolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_SetStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetStrips(temp0);
    }
    else
    {
      op->vtkPolyData::SetStrips(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetStrips() :
      op->vtkPolyData::GetStrips());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfVerts() :
      op->vtkPolyData::GetNumberOfVerts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfLines() :
      op->vtkPolyData::GetNumberOfLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPolys() :
      op->vtkPolyData::GetNumberOfPolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfStrips() :
      op->vtkPolyData::GetNumberOfStrips());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_Allocate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0 = 1000;
  int temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Allocate(temp0, temp1);
    }
    else
    {
      op->vtkPolyData::Allocate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_Allocate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkPolyData *temp0 = nullptr;
  vtkIdType temp1 = 1000;
  int temp2 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Allocate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyData::Allocate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyData_Allocate_Methods[] = {
  {nullptr, PyvtkPolyData_Allocate_s1, METH_VARARGS,
   "@|ki"},
  {nullptr, PyvtkPolyData_Allocate_s2, METH_VARARGS,
   "@V|ki *vtkPolyData"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolyData_Allocate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyData_Allocate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolyData_Allocate_s1(self, args);
    case 3:
      return PyvtkPolyData_Allocate_s2(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Allocate");
  return nullptr;
}



static PyObject *
PyvtkPolyData_InsertNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(size2);
  vtkIdType *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1, temp2) :
      op->vtkPolyData::InsertNextCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_InsertNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkPolyData::InsertNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_InsertNextCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolyData_InsertNextCell_s1(self, args);
    case 2:
      return PyvtkPolyData_InsertNextCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextCell");
  return nullptr;
}



static PyObject *
PyvtkPolyData_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkPolyData::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_BuildCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildCells();
    }
    else
    {
      op->vtkPolyData::BuildCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_NeedToBuildCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToBuildCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->NeedToBuildCells() :
      op->vtkPolyData::NeedToBuildCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_BuildLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->BuildLinks(temp0);
    }
    else
    {
      op->vtkPolyData::BuildLinks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_DeleteCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteCells();
    }
    else
    {
      op->vtkPolyData::DeleteCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_DeleteLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteLinks();
    }
    else
    {
      op->vtkPolyData::DeleteLinks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetCellEdgeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellEdgeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellEdgeNeighbors(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPolyData::GetCellEdgeNeighbors(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_IsTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->IsTriangle(temp0, temp1, temp2) :
      op->vtkPolyData::IsTriangle(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_IsEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->IsEdge(temp0, temp1) :
      op->vtkPolyData::IsEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_IsPointUsedByCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointUsedByCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->IsPointUsedByCell(temp0, temp1) :
      op->vtkPolyData::IsPointUsedByCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_ReplaceCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(size2);
  vtkIdType *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1))
  {
    if (ap.IsBound())
    {
      op->ReplaceCell(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyData::ReplaceCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_ReplaceCellPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCellPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->ReplaceCellPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyData::ReplaceCellPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_ReverseCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReverseCell(temp0);
    }
    else
    {
      op->vtkPolyData::ReverseCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_DeletePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeletePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeletePoint(temp0);
    }
    else
    {
      op->vtkPolyData::DeletePoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_DeleteCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteCell(temp0);
    }
    else
    {
      op->vtkPolyData::DeleteCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_RemoveDeletedCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDeletedCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveDeletedCells();
    }
    else
    {
      op->vtkPolyData::RemoveDeletedCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_InsertNextLinkedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextLinkedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextLinkedPoint(temp0) :
      op->vtkPolyData::InsertNextLinkedPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_InsertNextLinkedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextLinkedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextLinkedPoint(temp0, temp1) :
      op->vtkPolyData::InsertNextLinkedPoint(temp0, temp1));

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
PyvtkPolyData_InsertNextLinkedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPolyData_InsertNextLinkedPoint_s1(self, args);
    case 2:
      return PyvtkPolyData_InsertNextLinkedPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextLinkedPoint");
  return nullptr;
}



static PyObject *
PyvtkPolyData_InsertNextLinkedCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextLinkedCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(size2);
  vtkIdType *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextLinkedCell(temp0, temp1, temp2) :
      op->vtkPolyData::InsertNextLinkedCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_ReplaceLinkedCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceLinkedCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(size2);
  vtkIdType *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1))
  {
    if (ap.IsBound())
    {
      op->ReplaceLinkedCell(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyData::ReplaceLinkedCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_RemoveCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveCellReference(temp0);
    }
    else
    {
      op->vtkPolyData::RemoveCellReference(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_AddCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddCellReference(temp0);
    }
    else
    {
      op->vtkPolyData::AddCellReference(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_RemoveReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveReferenceToCell(temp0, temp1);
    }
    else
    {
      op->vtkPolyData::RemoveReferenceToCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_AddReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddReferenceToCell(temp0, temp1);
    }
    else
    {
      op->vtkPolyData::AddReferenceToCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_ResizeCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizeCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ResizeCellList(temp0, temp1);
    }
    else
    {
      op->vtkPolyData::ResizeCellList(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPolyData::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkPolyData::GetPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkPolyData::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkPolyData::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkPolyData::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkPolyData::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkPolyData::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_RemoveGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveGhostCells();
    }
    else
    {
      op->vtkPolyData::RemoveGhostCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkPolyData *tempr = vtkPolyData::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPolyData *tempr = vtkPolyData::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyData_GetData_Methods[] = {
  {nullptr, PyvtkPolyData_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkPolyData_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolyData_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyData_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolyData_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}



static PyObject *
PyvtkPolyData_GetScalarFieldCriticalIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFieldCriticalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarFieldCriticalIndex(temp0, temp1) :
      op->vtkPolyData::GetScalarFieldCriticalIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetScalarFieldCriticalIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFieldCriticalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarFieldCriticalIndex(temp0, temp1) :
      op->vtkPolyData::GetScalarFieldCriticalIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetScalarFieldCriticalIndex_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFieldCriticalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkIdType temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarFieldCriticalIndex(temp0, temp1) :
      op->vtkPolyData::GetScalarFieldCriticalIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyData_GetScalarFieldCriticalIndex_Methods[] = {
  {nullptr, PyvtkPolyData_GetScalarFieldCriticalIndex_s1, METH_VARARGS,
   "@kV *vtkDataArray"},
  {nullptr, PyvtkPolyData_GetScalarFieldCriticalIndex_s2, METH_VARARGS,
   "@ki"},
  {nullptr, PyvtkPolyData_GetScalarFieldCriticalIndex_s3, METH_VARARGS,
   "@kz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolyData_GetScalarFieldCriticalIndex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyData_GetScalarFieldCriticalIndex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarFieldCriticalIndex");
  return nullptr;
}



static PyObject *
PyvtkPolyData_GetMeshMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMeshMTime() :
      op->vtkPolyData::GetMeshMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPolyData::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyData_Methods[] = {
  {"IsTypeOf", PyvtkPolyData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPolyData\nC++: static vtkPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolyData\nC++: vtkPolyData *NewInstance()\n\n"},
  {"GetDataObjectType", PyvtkPolyData_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"CopyStructure", PyvtkPolyData_CopyStructure, METH_VARARGS,
   "V.CopyStructure(vtkDataSet)\nC++: void CopyStructure(vtkDataSet *ds) override;\n\nCopy the geometric and topological structure of an input poly\ndata object.\n"},
  {"GetNumberOfCells", PyvtkPolyData_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nStandard vtkDataSet interface.\n"},
  {"GetCell", PyvtkPolyData_GetCell, METH_VARARGS,
   "V.GetCell(int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType cellId) override;\nV.GetCell(int, vtkGenericCell)\nC++: void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n    override;\nV.GetCell(int, [int, ...]) -> int\nC++: unsigned char GetCell(vtkIdType cellId, vtkIdType *&pts)\nV.GetCell(int, int, int) -> vtkCell\nC++: virtual vtkCell *GetCell(int i, int j, int k)\n\nStandard vtkDataSet interface.\n"},
  {"GetCellType", PyvtkPolyData_GetCellType, METH_VARARGS,
   "V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType cellId) override;\n\nStandard vtkDataSet interface.\n"},
  {"GetCellBounds", PyvtkPolyData_GetCellBounds, METH_VARARGS,
   "V.GetCellBounds(int, [float, float, float, float, float, float])\nC++: void GetCellBounds(vtkIdType cellId, double bounds[6])\n    override;\n\nStandard vtkDataSet interface.\n"},
  {"GetCellNeighbors", PyvtkPolyData_GetCellNeighbors, METH_VARARGS,
   "V.GetCellNeighbors(int, vtkIdList, vtkIdList)\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds) override;\n\nStandard vtkDataSet interface.\n"},
  {"CopyCells", PyvtkPolyData_CopyCells, METH_VARARGS,
   "V.CopyCells(vtkPolyData, vtkIdList, vtkPointLocator)\nC++: void CopyCells(vtkPolyData *pd, vtkIdList *idList,\n    vtkPointLocator *locator=nullptr)\n\nCopy cells listed in idList from pd, including points, point\ndata, and cell data.  This method assumes that point and cell\ndata have been allocated.  If you pass in a point locator, then\nthe points won't be duplicated in the output.\n"},
  {"GetCellPoints", PyvtkPolyData_GetCellPoints, METH_VARARGS,
   "V.GetCellPoints(int, vtkIdList)\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n    override;\nV.GetCellPoints(int, int, [int, ...]) -> int\nC++: unsigned char GetCellPoints(vtkIdType cellId,\n    vtkIdType &npts, vtkIdType *&pts)\n\nCopy a cells point ids into list provided. (Less efficient.)\n"},
  {"GetPointCells", PyvtkPolyData_GetPointCells, METH_VARARGS,
   "V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n    override;\nV.GetPointCells(int, int, [int, ...])\nC++: void GetPointCells(vtkIdType ptId, unsigned short &ncells,\n    vtkIdType *&cells)\n\nEfficient method to obtain cells using a particular point. Make\nsure that routine BuildLinks() has been called.\n"},
  {"ComputeBounds", PyvtkPolyData_ComputeBounds, METH_VARARGS,
   "V.ComputeBounds()\nC++: void ComputeBounds() override;\n\nCompute the (X, Y, Z)  bounds of the data.\n"},
  {"Squeeze", PyvtkPolyData_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: void Squeeze() override;\n\nRecover extra allocated memory when creating data whose initial\nsize is unknown. Examples include using the InsertNextCell()\nmethod, or when using the CellArray::EstimateSize() method to\ncreate vertices, lines, polygons, or triangle strips.\n"},
  {"GetMaxCellSize", PyvtkPolyData_GetMaxCellSize, METH_VARARGS,
   "V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize() override;\n\nReturn the maximum cell size in this poly data.\n"},
  {"SetVerts", PyvtkPolyData_SetVerts, METH_VARARGS,
   "V.SetVerts(vtkCellArray)\nC++: void SetVerts(vtkCellArray *v)\n\nSet the cell array defining vertices.\n"},
  {"GetVerts", PyvtkPolyData_GetVerts, METH_VARARGS,
   "V.GetVerts() -> vtkCellArray\nC++: vtkCellArray *GetVerts()\n\nGet the cell array defining vertices. If there are no vertices,\nan empty array will be returned (convenience to simplify\ntraversal).\n"},
  {"SetLines", PyvtkPolyData_SetLines, METH_VARARGS,
   "V.SetLines(vtkCellArray)\nC++: void SetLines(vtkCellArray *l)\n\nSet the cell array defining lines.\n"},
  {"GetLines", PyvtkPolyData_GetLines, METH_VARARGS,
   "V.GetLines() -> vtkCellArray\nC++: vtkCellArray *GetLines()\n\nGet the cell array defining lines. If there are no lines, an\nempty array will be returned (convenience to simplify traversal).\n"},
  {"SetPolys", PyvtkPolyData_SetPolys, METH_VARARGS,
   "V.SetPolys(vtkCellArray)\nC++: void SetPolys(vtkCellArray *p)\n\nSet the cell array defining polygons.\n"},
  {"GetPolys", PyvtkPolyData_GetPolys, METH_VARARGS,
   "V.GetPolys() -> vtkCellArray\nC++: vtkCellArray *GetPolys()\n\nGet the cell array defining polygons. If there are no polygons,\nan empty array will be returned (convenience to simplify\ntraversal).\n"},
  {"SetStrips", PyvtkPolyData_SetStrips, METH_VARARGS,
   "V.SetStrips(vtkCellArray)\nC++: void SetStrips(vtkCellArray *s)\n\nSet the cell array defining triangle strips.\n"},
  {"GetStrips", PyvtkPolyData_GetStrips, METH_VARARGS,
   "V.GetStrips() -> vtkCellArray\nC++: vtkCellArray *GetStrips()\n\nGet the cell array defining triangle strips. If there are no\ntriangle strips, an empty array will be returned (convenience to\nsimplify traversal).\n"},
  {"GetNumberOfVerts", PyvtkPolyData_GetNumberOfVerts, METH_VARARGS,
   "V.GetNumberOfVerts() -> int\nC++: vtkIdType GetNumberOfVerts()\n\nReturn the number of primitives of a particular type held.\n"},
  {"GetNumberOfLines", PyvtkPolyData_GetNumberOfLines, METH_VARARGS,
   "V.GetNumberOfLines() -> int\nC++: vtkIdType GetNumberOfLines()\n\nReturn the number of primitives of a particular type held.\n"},
  {"GetNumberOfPolys", PyvtkPolyData_GetNumberOfPolys, METH_VARARGS,
   "V.GetNumberOfPolys() -> int\nC++: vtkIdType GetNumberOfPolys()\n\nReturn the number of primitives of a particular type held.\n"},
  {"GetNumberOfStrips", PyvtkPolyData_GetNumberOfStrips, METH_VARARGS,
   "V.GetNumberOfStrips() -> int\nC++: vtkIdType GetNumberOfStrips()\n\nReturn the number of primitives of a particular type held.\n"},
  {"Allocate", PyvtkPolyData_Allocate, METH_VARARGS,
   "V.Allocate(int, int)\nC++: void Allocate(vtkIdType numCells=1000, int extSize=1000)\nV.Allocate(vtkPolyData, int, int)\nC++: void Allocate(vtkPolyData *inPolyData,\n    vtkIdType numCells=1000, int extSize=1000)\n\nMethod allocates initial storage for vertex, line, polygon, and\ntriangle strip arrays. Use this method before the method\nPolyData::InsertNextCell(). (Or, provide vertex, line, polygon,\nand triangle strip cell arrays.) The array capacity is doubled\nwhen the inserting a cell exceeds the current capacity. extSize\nis no longer used.\n"},
  {"InsertNextCell", PyvtkPolyData_InsertNextCell, METH_VARARGS,
   "V.InsertNextCell(int, int, (int, ...)) -> int\nC++: vtkIdType InsertNextCell(int type, int npts,\n    const vtkIdType pts[])\nV.InsertNextCell(int, vtkIdList) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdList *pts)\n\nInsert a cell of type VTK_VERTEX, VTK_POLY_VERTEX, VTK_LINE,\nVTK_POLY_LINE, VTK_TRIANGLE, VTK_QUAD, VTK_POLYGON, or\nVTK_TRIANGLE_STRIP.  Make sure that the PolyData::Allocate()\nfunction has been called first or that vertex, line, polygon, and\ntriangle strip arrays have been supplied. Note: will also insert\nVTK_PIXEL, but converts it to VTK_QUAD.\n"},
  {"Reset", PyvtkPolyData_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nBegin inserting data all over again. Memory is not freed but\notherwise objects are returned to their initial state.\n"},
  {"BuildCells", PyvtkPolyData_BuildCells, METH_VARARGS,
   "V.BuildCells()\nC++: void BuildCells()\n\nCreate data structure that allows random access of cells.\nBuildCells is expensive but necessary to make use of the faster\nnon-virtual implementations of GetCell/GetCellPoints. One may\ncheck if cells need to be built via NeedToBuilds before invoking.\nCells always need to be built/re-built after low level direct\nmodifications to verts, lines, polys or strips cell arrays.\n"},
  {"NeedToBuildCells", PyvtkPolyData_NeedToBuildCells, METH_VARARGS,
   "V.NeedToBuildCells() -> bool\nC++: bool NeedToBuildCells()\n\nCheck if BuildCells is needed.\n"},
  {"BuildLinks", PyvtkPolyData_BuildLinks, METH_VARARGS,
   "V.BuildLinks(int)\nC++: void BuildLinks(int initialSize=0)\n\nCreate upward links from points to cells that use each point.\nEnables topologically complex queries. Normally the links array\nis allocated based on the number of points in the vtkPolyData.\nThe optional initialSize parameter can be used to allocate a\nlarger size initially.\n"},
  {"DeleteCells", PyvtkPolyData_DeleteCells, METH_VARARGS,
   "V.DeleteCells()\nC++: void DeleteCells()\n\nRelease data structure that allows random access of the cells.\nThis must be done before a 2nd call to BuildLinks(). DeleteCells\nimplicitly deletes the links as well since they are no longer\nvalid.\n"},
  {"DeleteLinks", PyvtkPolyData_DeleteLinks, METH_VARARGS,
   "V.DeleteLinks()\nC++: void DeleteLinks()\n\nRelease the upward links from point to cells that use each point.\n"},
  {"GetCellEdgeNeighbors", PyvtkPolyData_GetCellEdgeNeighbors, METH_VARARGS,
   "V.GetCellEdgeNeighbors(int, int, int, vtkIdList)\nC++: void GetCellEdgeNeighbors(vtkIdType cellId, vtkIdType p1,\n    vtkIdType p2, vtkIdList *cellIds)\n\nGet the neighbors at an edge. More efficient than the general\nGetCellNeighbors(). Assumes links have been built (with\nBuildLinks()), and looks specifically for edge neighbors.\n"},
  {"IsTriangle", PyvtkPolyData_IsTriangle, METH_VARARGS,
   "V.IsTriangle(int, int, int) -> int\nC++: int IsTriangle(int v1, int v2, int v3)\n\nGiven three vertices, determine whether it's a triangle. Make\nsure BuildLinks() has been called first.\n"},
  {"IsEdge", PyvtkPolyData_IsEdge, METH_VARARGS,
   "V.IsEdge(int, int) -> int\nC++: int IsEdge(vtkIdType p1, vtkIdType p2)\n\nDetermine whether two points form an edge. If they do, return\nnon-zero. By definition PolyVertex and PolyLine have no edges\nsince 1-dimensional edges are only found on cells 2D and higher.\nEdges are defined as 1-D boundary entities to cells. Make sure\nBuildLinks() has been called first.\n"},
  {"IsPointUsedByCell", PyvtkPolyData_IsPointUsedByCell, METH_VARARGS,
   "V.IsPointUsedByCell(int, int) -> int\nC++: int IsPointUsedByCell(vtkIdType ptId, vtkIdType cellId)\n\nDetermine whether a point is used by a particular cell. If it is,\nreturn non-zero. Make sure BuildCells() has been called first.\n"},
  {"ReplaceCell", PyvtkPolyData_ReplaceCell, METH_VARARGS,
   "V.ReplaceCell(int, int, (int, ...))\nC++: void ReplaceCell(vtkIdType cellId, int npts,\n    const vtkIdType pts[])\n\nReplace the points defining cell \"cellId\" with a new set of\npoints. This operator is (typically) used when links from points\nto cells have not been built (i.e., BuildLinks() has not been\nexecuted). Use the operator ReplaceLinkedCell() to replace a cell\nwhen cell structure has been built.\n"},
  {"ReplaceCellPoint", PyvtkPolyData_ReplaceCellPoint, METH_VARARGS,
   "V.ReplaceCellPoint(int, int, int)\nC++: void ReplaceCellPoint(vtkIdType cellId, vtkIdType oldPtId,\n    vtkIdType newPtId)\n\nReplace a point in the cell connectivity list with a different\npoint.\n"},
  {"ReverseCell", PyvtkPolyData_ReverseCell, METH_VARARGS,
   "V.ReverseCell(int)\nC++: void ReverseCell(vtkIdType cellId)\n\nReverse the order of point ids defining the cell.\n"},
  {"DeletePoint", PyvtkPolyData_DeletePoint, METH_VARARGS,
   "V.DeletePoint(int)\nC++: void DeletePoint(vtkIdType ptId)\n\nMark a point/cell as deleted from this vtkPolyData.\n"},
  {"DeleteCell", PyvtkPolyData_DeleteCell, METH_VARARGS,
   "V.DeleteCell(int)\nC++: void DeleteCell(vtkIdType cellId)\n\nMark a point/cell as deleted from this vtkPolyData.\n"},
  {"RemoveDeletedCells", PyvtkPolyData_RemoveDeletedCells, METH_VARARGS,
   "V.RemoveDeletedCells()\nC++: void RemoveDeletedCells()\n\nThe cells marked by calls to DeleteCell are stored in the Cell\nArray VTK_EMPTY_CELL, but they still exist in the cell arrays.\nCalling RemoveDeletedCells will traverse the cell arrays and\nremove/compact the cell arrays as well as any cell data thus\ntruly removing the cells from the polydata object.\n"},
  {"InsertNextLinkedPoint", PyvtkPolyData_InsertNextLinkedPoint, METH_VARARGS,
   "V.InsertNextLinkedPoint(int) -> int\nC++: vtkIdType InsertNextLinkedPoint(int numLinks)\nV.InsertNextLinkedPoint([float, float, float], int) -> int\nC++: vtkIdType InsertNextLinkedPoint(double x[3], int numLinks)\n\nAdd a point to the cell data structure (after cell pointers have\nbeen built). This method adds the point and then allocates memory\nfor the links to the cells.  (To use this method, make sure\npoints are available and BuildLinks() has been invoked.) Of the\ntwo methods below, one inserts a point coordinate and the other\njust makes room for cell links.\n"},
  {"InsertNextLinkedCell", PyvtkPolyData_InsertNextLinkedCell, METH_VARARGS,
   "V.InsertNextLinkedCell(int, int, (int, ...)) -> int\nC++: vtkIdType InsertNextLinkedCell(int type, int npts,\n    const vtkIdType pts[])\n\nAdd a new cell to the cell data structure (after cell pointers\nhave been built). This method adds the cell and then updates the\nlinks from the points to the cells. (Memory is allocated as\nnecessary.)\n"},
  {"ReplaceLinkedCell", PyvtkPolyData_ReplaceLinkedCell, METH_VARARGS,
   "V.ReplaceLinkedCell(int, int, (int, ...))\nC++: void ReplaceLinkedCell(vtkIdType cellId, int npts,\n    const vtkIdType pts[])\n\nReplace one cell with another in cell structure. This operator\nupdates the connectivity list and the point's link list. It does\nnot delete references to the old cell in the point's link list.\nUse the operator RemoveCellReference() to delete all references\nfrom points to (old) cell. You may also want to consider using\nthe operator ResizeCellList() if the link list is changing size.\n"},
  {"RemoveCellReference", PyvtkPolyData_RemoveCellReference, METH_VARARGS,
   "V.RemoveCellReference(int)\nC++: void RemoveCellReference(vtkIdType cellId)\n\nRemove all references to cell in cell structure. This means the\nlinks from the cell's points to the cell are deleted. Memory is\nnot reclaimed. Use the method ResizeCellList() to resize the link\nlist from a point to its using cells. (This operator assumes\nBuildLinks() has been called.)\n"},
  {"AddCellReference", PyvtkPolyData_AddCellReference, METH_VARARGS,
   "V.AddCellReference(int)\nC++: void AddCellReference(vtkIdType cellId)\n\nAdd references to cell in cell structure. This means the links\nfrom the cell's points to the cell are modified. Memory is not\nextended. Use the method ResizeCellList() to resize the link list\nfrom a point to its using cells. (This operator assumes\nBuildLinks() has been called.)\n"},
  {"RemoveReferenceToCell", PyvtkPolyData_RemoveReferenceToCell, METH_VARARGS,
   "V.RemoveReferenceToCell(int, int)\nC++: void RemoveReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\nRemove a reference to a cell in a particular point's link list.\nYou may also consider using RemoveCellReference() to remove the\nreferences from all the cell's points to the cell. This operator\ndoes not reallocate memory; use the operator ResizeCellList() to\ndo this if necessary.\n"},
  {"AddReferenceToCell", PyvtkPolyData_AddReferenceToCell, METH_VARARGS,
   "V.AddReferenceToCell(int, int)\nC++: void AddReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\nAdd a reference to a cell in a particular point's link list. (You\nmay also consider using AddCellReference() to add the references\nfrom all the cell's points to the cell.) This operator does not\nrealloc memory; use the operator ResizeCellList() to do this if\nnecessary.\n"},
  {"ResizeCellList", PyvtkPolyData_ResizeCellList, METH_VARARGS,
   "V.ResizeCellList(int, int)\nC++: void ResizeCellList(vtkIdType ptId, int size)\n\nResize the list of cells using a particular point. (This operator\nassumes that BuildLinks() has been called.)\n"},
  {"Initialize", PyvtkPolyData_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nRestore object to initial state. Release memory back to system.\n"},
  {"GetPiece", PyvtkPolyData_GetPiece, METH_VARARGS,
   "V.GetPiece() -> int\nC++: virtual int GetPiece()\n\nGet the piece and the number of pieces. Similar to extent in 3D.\n"},
  {"GetNumberOfPieces", PyvtkPolyData_GetNumberOfPieces, METH_VARARGS,
   "V.GetNumberOfPieces() -> int\nC++: virtual int GetNumberOfPieces()\n\nGet the piece and the number of pieces. Similar to extent in 3D.\n"},
  {"GetGhostLevel", PyvtkPolyData_GetGhostLevel, METH_VARARGS,
   "V.GetGhostLevel() -> int\nC++: virtual int GetGhostLevel()\n\nGet the ghost level.\n"},
  {"GetActualMemorySize", PyvtkPolyData_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value). THIS METHOD\nIS THREAD SAFE.\n"},
  {"ShallowCopy", PyvtkPolyData_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"DeepCopy", PyvtkPolyData_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"RemoveGhostCells", PyvtkPolyData_RemoveGhostCells, METH_VARARGS,
   "V.RemoveGhostCells()\nC++: void RemoveGhostCells()\n\nThis method will remove any cell that is marked as ghost (has the\nvtkDataSetAttributes::DUPLICATECELL bit set). It does not remove\nunused points.\n"},
  {"GetData", PyvtkPolyData_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkPolyData\nC++: static vtkPolyData *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkPolyData\nC++: static vtkPolyData *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"GetScalarFieldCriticalIndex", PyvtkPolyData_GetScalarFieldCriticalIndex, METH_VARARGS,
   "V.GetScalarFieldCriticalIndex(int, vtkDataArray) -> int\nC++: int GetScalarFieldCriticalIndex(vtkIdType pointId,\n    vtkDataArray *scalarField)\nV.GetScalarFieldCriticalIndex(int, int) -> int\nC++: int GetScalarFieldCriticalIndex(vtkIdType pointId,\n    int fieldId)\nV.GetScalarFieldCriticalIndex(int, string) -> int\nC++: int GetScalarFieldCriticalIndex(vtkIdType pointId,\n    const char *fieldName)\n\n"},
  {"GetMeshMTime", PyvtkPolyData_GetMeshMTime, METH_VARARGS,
   "V.GetMeshMTime() -> int\nC++: virtual vtkMTimeType GetMeshMTime()\n\nReturn the mesh (geometry/topology) modification time. This time\nis different from the usual MTime which also takes into account\nthe modification of data arrays. This function can be used to\ntrack the changes on the mesh separately from the data arrays\n(eg. static mesh over time with transient data).\n"},
  {"GetMTime", PyvtkPolyData_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet MTime which also considers its cell array MTime.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkPolyData", // tp_name
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
  PyvtkPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyData_StaticNew()
{
  return vtkPolyData::New();
}

PyObject *PyvtkPolyData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolyData_Type, PyvtkPolyData_Methods,
    "vtkPolyData",
 &PyvtkPolyData_StaticNew);

  PyTypeObject *pytype = &PyvtkPolyData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointSet_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "ERR_NO_SUCH_FIELD", vtkPolyData::ERR_NO_SUCH_FIELD },
        { "ERR_INCORRECT_FIELD", vtkPolyData::ERR_INCORRECT_FIELD },
        { "ERR_NON_MANIFOLD_STAR", vtkPolyData::ERR_NON_MANIFOLD_STAR },
        { "REGULAR_POINT", vtkPolyData::REGULAR_POINT },
        { "MINIMUM", vtkPolyData::MINIMUM },
        { "SADDLE", vtkPolyData::SADDLE },
        { "MAXIMUM", vtkPolyData::MAXIMUM },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

