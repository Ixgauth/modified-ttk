// python wrapper for vtkUnstructuredGrid
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
#include "vtkUnstructuredGrid.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGrid(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnstructuredGrid_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridBase_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridBase_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridBase_ClassNew
#endif

static const char *PyvtkUnstructuredGrid_Doc =
  "vtkUnstructuredGrid - dataset represents arbitrary combinations of\nall possible cell types\n\n"
  "Superclass: vtkUnstructuredGridBase\n\n"
  "vtkUnstructuredGrid is a data object that is a concrete\n"
  "implementation of vtkDataSet. vtkUnstructuredGrid represents any\n"
  "combinations of any cell types. This includes 0D (e.g., points), 1D\n"
  "(e.g., lines, polylines), 2D (e.g., triangles, polygons), and 3D\n"
  "(e.g., hexahedron, tetrahedron, polyhedron, etc.).\n\n";


static PyObject *
PyvtkUnstructuredGrid_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGrid *tempr = vtkUnstructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGrid::NewInstance());

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
PyvtkUnstructuredGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkUnstructuredGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::Allocate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkUnstructuredGrid::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkUnstructuredGrid::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkUnstructuredGrid::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUnstructuredGrid_GetCell_s1(self, args);
    case 2:
      return PyvtkUnstructuredGrid_GetCell_s2(self, args);
    case 3:
      return PyvtkUnstructuredGrid_GetCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}



static PyObject *
PyvtkUnstructuredGrid_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetCellBounds(temp0, temp1);
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
PyvtkUnstructuredGrid_GetCellPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCellPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
    if (ap.IsBound())
    {
      op->GetCellPoints(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnstructuredGrid::GetCellPoints(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2, size2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkUnstructuredGrid_GetCellPoints_s1(self, args);
    case 3:
      return PyvtkUnstructuredGrid_GetCellPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellPoints");
  return nullptr;
}



static PyObject *
PyvtkUnstructuredGrid_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_NewCellIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCellIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellIterator *tempr = (ap.IsBound() ?
      op->NewCellIterator() :
      op->vtkUnstructuredGrid::NewCellIterator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkUnstructuredGrid::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellTypesArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypesArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetCellTypesArray() :
      op->vtkUnstructuredGrid::GetCellTypesArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellLocationsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocationsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetCellLocationsArray() :
      op->vtkUnstructuredGrid::GetCellLocationsArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkUnstructuredGrid::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkUnstructuredGrid::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkUnstructuredGrid::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_BuildLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLinks();
    }
    else
    {
      op->vtkUnstructuredGrid::BuildLinks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellLinks *tempr = (ap.IsBound() ?
      op->GetCellLinks() :
      op->vtkUnstructuredGrid::GetCellLinks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetFaceStream_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetFaceStream(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGrid::GetFaceStream(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetFaceStream_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
    if (ap.IsBound())
    {
      op->GetFaceStream(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnstructuredGrid::GetFaceStream(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2, size2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetFaceStream(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkUnstructuredGrid_GetFaceStream_s1(self, args);
    case 3:
      return PyvtkUnstructuredGrid_GetFaceStream_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFaceStream");
  return nullptr;
}



static PyObject *
PyvtkUnstructuredGrid_SetCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  vtkCellArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetCells(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_SetCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkCellArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetCells(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1);
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
PyvtkUnstructuredGrid_SetCells_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetCells(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_SetCells_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  vtkIdTypeArray *temp3 = nullptr;
  vtkIdTypeArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetCells(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGrid_SetCells_Methods[] = {
  {nullptr, PyvtkUnstructuredGrid_SetCells_s1, METH_VARARGS,
   "@iV *vtkCellArray"},
  {nullptr, PyvtkUnstructuredGrid_SetCells_s2, METH_VARARGS,
   "@PV *i *vtkCellArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUnstructuredGrid_SetCells(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGrid_SetCells_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkUnstructuredGrid_SetCells_s3(self, args);
    case 5:
      return PyvtkUnstructuredGrid_SetCells_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCells");
  return nullptr;
}



static PyObject *
PyvtkUnstructuredGrid_GetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetCells() :
      op->vtkUnstructuredGrid::GetCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_InsertNextLinkedCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextLinkedCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::InsertNextLinkedCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_RemoveReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::RemoveReferenceToCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_AddReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::AddReferenceToCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_ResizeCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizeCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::ResizeCellList(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetCellNeighbors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkUnstructuredGrid::GetPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkUnstructuredGrid::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkUnstructuredGrid::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkUnstructuredGrid::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetIdsOfCellsOfType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdsOfCellsOfType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->GetIdsOfCellsOfType(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGrid::GetIdsOfCellsOfType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_IsHomogeneous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHomogeneous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsHomogeneous() :
      op->vtkUnstructuredGrid::IsHomogeneous());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_RemoveGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveGhostCells();
    }
    else
    {
      op->vtkUnstructuredGrid::RemoveGhostCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkUnstructuredGrid *tempr = vtkUnstructuredGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkUnstructuredGrid *tempr = vtkUnstructuredGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGrid_GetData_Methods[] = {
  {nullptr, PyvtkUnstructuredGrid_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkUnstructuredGrid_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUnstructuredGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkUnstructuredGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}



static PyObject *
PyvtkUnstructuredGrid_GetFaces_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetFaces(temp0) :
      op->vtkUnstructuredGrid::GetFaces(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetFaces_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetFaces() :
      op->vtkUnstructuredGrid::GetFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetFaces(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUnstructuredGrid_GetFaces_s1(self, args);
    case 0:
      return PyvtkUnstructuredGrid_GetFaces_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFaces");
  return nullptr;
}



static PyObject *
PyvtkUnstructuredGrid_GetFaceLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetFaceLocations() :
      op->vtkUnstructuredGrid::GetFaceLocations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_InitializeFacesRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeFacesRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->InitializeFacesRepresentation(temp0) :
      op->vtkUnstructuredGrid::InitializeFacesRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetMeshMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMeshMTime() :
      op->vtkUnstructuredGrid::GetMeshMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DecomposeAPolyhedronCell");

  vtkCellArray *temp0 = nullptr;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkCellArray *temp3 = nullptr;
  vtkIdTypeArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkCellArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
  {
    vtkUnstructuredGrid::DecomposeAPolyhedronCell(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DecomposeAPolyhedronCell");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(2*size0);
  vtkIdType *temp0 = store0.Data();
  vtkIdType *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdType temp1;
  vtkIdType temp2;
  vtkCellArray *temp3 = nullptr;
  vtkIdTypeArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
  {
    ap.Save(temp0, save0, size0);

    vtkUnstructuredGrid::DecomposeAPolyhedronCell(temp0, temp1, temp2, temp3, temp4);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DecomposeAPolyhedronCell");

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(size1);
  vtkIdType *temp1 = store1.Data();
  vtkIdType temp2;
  vtkCellArray *temp3 = nullptr;
  vtkIdTypeArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
  {
    vtkUnstructuredGrid::DecomposeAPolyhedronCell(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_Methods[] = {
  {nullptr, PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s1, METH_VARARGS | METH_STATIC,
   "VkkVV *vtkCellArray *vtkCellArray *vtkIdTypeArray"},
  {nullptr, PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s2, METH_VARARGS | METH_STATIC,
   "PkkVV *k *vtkCellArray *vtkIdTypeArray"},
  {nullptr, PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s3, METH_VARARGS | METH_STATIC,
   "kPkVV *k *vtkCellArray *vtkIdTypeArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUnstructuredGrid_DecomposeAPolyhedronCell(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DecomposeAPolyhedronCell");
  return nullptr;
}



static PyObject *
PyvtkUnstructuredGrid_ConvertFaceStreamPointIds_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertFaceStreamPointIds");

  vtkIdList *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(2*size1);
  vtkIdType *temp1 = store1.Data();
  vtkIdType *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkUnstructuredGrid::ConvertFaceStreamPointIds(temp0, temp1);

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
PyvtkUnstructuredGrid_ConvertFaceStreamPointIds_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertFaceStreamPointIds");

  vtkIdType temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<vtkIdType> store1(2*size1);
  vtkIdType *temp1 = store1.Data();
  vtkIdType *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  vtkIdType *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    vtkUnstructuredGrid::ConvertFaceStreamPointIds(temp0, temp1, temp2);

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

static PyObject *
PyvtkUnstructuredGrid_ConvertFaceStreamPointIds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkUnstructuredGrid_ConvertFaceStreamPointIds_s1(self, args);
    case 3:
      return PyvtkUnstructuredGrid_ConvertFaceStreamPointIds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ConvertFaceStreamPointIds");
  return nullptr;
}


static PyMethodDef PyvtkUnstructuredGrid_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGrid_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGrid_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGrid_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUnstructuredGrid\nC++: static vtkUnstructuredGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGrid_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *NewInstance()\n\n"},
  {"GetDataObjectType", PyvtkUnstructuredGrid_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"Allocate", PyvtkUnstructuredGrid_Allocate, METH_VARARGS,
   "V.Allocate(int, int)\nC++: void Allocate(vtkIdType numCells=1000, int extSize=1000)\n    override;\n\nMethod allocates initial storage for the cell connectivity. Use\nthis method before the method InsertNextCell(). The array\ncapacity is doubled when the inserting a cell exceeds the current\ncapacity. extSize is no longer used.\n"},
  {"Reset", PyvtkUnstructuredGrid_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {"CopyStructure", PyvtkUnstructuredGrid_CopyStructure, METH_VARARGS,
   "V.CopyStructure(vtkDataSet)\nC++: void CopyStructure(vtkDataSet *ds) override;\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {"GetNumberOfCells", PyvtkUnstructuredGrid_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {"GetCell", PyvtkUnstructuredGrid_GetCell, METH_VARARGS,
   "V.GetCell(int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType cellId) override;\nV.GetCell(int, vtkGenericCell)\nC++: void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n    override;\nV.GetCell(int, int, int) -> vtkCell\nC++: virtual vtkCell *GetCell(int i, int j, int k)\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {"GetCellBounds", PyvtkUnstructuredGrid_GetCellBounds, METH_VARARGS,
   "V.GetCellBounds(int, [float, float, float, float, float, float])\nC++: void GetCellBounds(vtkIdType cellId, double bounds[6])\n    override;\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {"GetCellPoints", PyvtkUnstructuredGrid_GetCellPoints, METH_VARARGS,
   "V.GetCellPoints(int, vtkIdList)\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n    override;\nV.GetCellPoints(int, int, [int, ...])\nC++: virtual void GetCellPoints(vtkIdType cellId, vtkIdType &npts,\n     vtkIdType *&pts)\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {"GetPointCells", PyvtkUnstructuredGrid_GetPointCells, METH_VARARGS,
   "V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n    override;\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {"NewCellIterator", PyvtkUnstructuredGrid_NewCellIterator, METH_VARARGS,
   "V.NewCellIterator() -> vtkCellIterator\nC++: vtkCellIterator *NewCellIterator() override;\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {"GetCellType", PyvtkUnstructuredGrid_GetCellType, METH_VARARGS,
   "V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType cellId) override;\n\nGet type of cell with cellId such that: 0 <= cellId <\nNumberOfCells. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"GetCellTypesArray", PyvtkUnstructuredGrid_GetCellTypesArray, METH_VARARGS,
   "V.GetCellTypesArray() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetCellTypesArray()\n\n"},
  {"GetCellLocationsArray", PyvtkUnstructuredGrid_GetCellLocationsArray, METH_VARARGS,
   "V.GetCellLocationsArray() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetCellLocationsArray()\n\n"},
  {"Squeeze", PyvtkUnstructuredGrid_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: void Squeeze() override;\n\nReclaim any unused memory.\n"},
  {"Initialize", PyvtkUnstructuredGrid_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nReset to an empty state and free any memory.\n"},
  {"GetMaxCellSize", PyvtkUnstructuredGrid_GetMaxCellSize, METH_VARARGS,
   "V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize() override;\n\nConvenience method returns largest cell size in dataset. This is\ngenerally used to allocate memory for supporting data structures.\nTHIS METHOD IS THREAD SAFE\n"},
  {"BuildLinks", PyvtkUnstructuredGrid_BuildLinks, METH_VARARGS,
   "V.BuildLinks()\nC++: void BuildLinks()\n\n"},
  {"GetCellLinks", PyvtkUnstructuredGrid_GetCellLinks, METH_VARARGS,
   "V.GetCellLinks() -> vtkCellLinks\nC++: vtkCellLinks *GetCellLinks()\n\n"},
  {"GetFaceStream", PyvtkUnstructuredGrid_GetFaceStream, METH_VARARGS,
   "V.GetFaceStream(int, vtkIdList)\nC++: void GetFaceStream(vtkIdType cellId, vtkIdList *ptIds)\nV.GetFaceStream(int, int, [int, ...])\nC++: void GetFaceStream(vtkIdType cellId, vtkIdType &nfaces,\n    vtkIdType *&ptIds)\n\nGet the face stream of a polyhedron cell in the following format:\n(numCellFaces, numFace0Pts, id1, id2, id3, numFace1Pts,id1, id2,\nid3, ...). If the requested cell is not a polyhedron, then the\nstandard GetCellPoints is called to return a list of unique point\nids (id1, id2, id3, ...).\n"},
  {"SetCells", PyvtkUnstructuredGrid_SetCells, METH_VARARGS,
   "V.SetCells(int, vtkCellArray)\nC++: void SetCells(int type, vtkCellArray *cells)\nV.SetCells([int, ...], vtkCellArray)\nC++: void SetCells(int *types, vtkCellArray *cells)\nV.SetCells(vtkUnsignedCharArray, vtkIdTypeArray, vtkCellArray)\nC++: void SetCells(vtkUnsignedCharArray *cellTypes,\n    vtkIdTypeArray *cellLocations, vtkCellArray *cells)\nV.SetCells(vtkUnsignedCharArray, vtkIdTypeArray, vtkCellArray,\n    vtkIdTypeArray, vtkIdTypeArray)\nC++: void SetCells(vtkUnsignedCharArray *cellTypes,\n    vtkIdTypeArray *cellLocations, vtkCellArray *cells,\n    vtkIdTypeArray *faceLocations, vtkIdTypeArray *faces)\n\nSpecial methods specific to vtkUnstructuredGrid for defining the\ncells composing the dataset. Most cells require just arrays of\ncellTypes, cellLocations and cellConnectivities which implicitly\ndefine the set of points in each cell and their ordering. In\nthose cases the cellConnectivities are of the format\n(numFace0Pts, id1, id2, id3, numFace1Pts, id1, id2, id3...).\nHowever, some cells like vtkPolyhedron require points plus a list\nof faces. To handle vtkPolyhedron, SetCells() support a special\ninput cellConnectivities format (numCellFaces, numFace0Pts, id1,\nid2, id3, numFace1Pts,id1, id2, id3, ...) The functions use\nvtkPolyhedron::DecomposeAPolyhedronCell() to convert polyhedron\ncells into standard format.\n"},
  {"GetCells", PyvtkUnstructuredGrid_GetCells, METH_VARARGS,
   "V.GetCells() -> vtkCellArray\nC++: vtkCellArray *GetCells()\n\n"},
  {"InsertNextLinkedCell", PyvtkUnstructuredGrid_InsertNextLinkedCell, METH_VARARGS,
   "V.InsertNextLinkedCell(int, int, (int, ...)) -> int\nC++: vtkIdType InsertNextLinkedCell(int type, int npts,\n    const vtkIdType pts[])\n\n"},
  {"RemoveReferenceToCell", PyvtkUnstructuredGrid_RemoveReferenceToCell, METH_VARARGS,
   "V.RemoveReferenceToCell(int, int)\nC++: void RemoveReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\n"},
  {"AddReferenceToCell", PyvtkUnstructuredGrid_AddReferenceToCell, METH_VARARGS,
   "V.AddReferenceToCell(int, int)\nC++: void AddReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\n"},
  {"ResizeCellList", PyvtkUnstructuredGrid_ResizeCellList, METH_VARARGS,
   "V.ResizeCellList(int, int)\nC++: void ResizeCellList(vtkIdType ptId, int size)\n\n"},
  {"GetCellNeighbors", PyvtkUnstructuredGrid_GetCellNeighbors, METH_VARARGS,
   "V.GetCellNeighbors(int, vtkIdList, vtkIdList)\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds) override;\n\nTopological inquiry to get all cells using list of points\nexclusive of cell specified (e.g., cellId). THIS METHOD IS THREAD\nSAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT\nMODIFIED\n"},
  {"GetPiece", PyvtkUnstructuredGrid_GetPiece, METH_VARARGS,
   "V.GetPiece() -> int\nC++: virtual int GetPiece()\n\nSet / Get the piece and the number of pieces. Similar to extent\nin 3D.\n"},
  {"GetNumberOfPieces", PyvtkUnstructuredGrid_GetNumberOfPieces, METH_VARARGS,
   "V.GetNumberOfPieces() -> int\nC++: virtual int GetNumberOfPieces()\n\nSet / Get the piece and the number of pieces. Similar to extent\nin 3D.\n"},
  {"GetGhostLevel", PyvtkUnstructuredGrid_GetGhostLevel, METH_VARARGS,
   "V.GetGhostLevel() -> int\nC++: virtual int GetGhostLevel()\n\nGet the ghost level.\n"},
  {"GetActualMemorySize", PyvtkUnstructuredGrid_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value). THIS METHOD\nIS THREAD SAFE.\n"},
  {"ShallowCopy", PyvtkUnstructuredGrid_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"DeepCopy", PyvtkUnstructuredGrid_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"GetIdsOfCellsOfType", PyvtkUnstructuredGrid_GetIdsOfCellsOfType, METH_VARARGS,
   "V.GetIdsOfCellsOfType(int, vtkIdTypeArray)\nC++: void GetIdsOfCellsOfType(int type, vtkIdTypeArray *array)\n    override;\n\nFill vtkIdTypeArray container with list of cell Ids.  This method\ntraverses all cells and, for a particular cell type, inserts the\ncell Id into the container.\n"},
  {"IsHomogeneous", PyvtkUnstructuredGrid_IsHomogeneous, METH_VARARGS,
   "V.IsHomogeneous() -> int\nC++: int IsHomogeneous() override;\n\nTraverse cells and determine if cells are all of the same type.\n"},
  {"RemoveGhostCells", PyvtkUnstructuredGrid_RemoveGhostCells, METH_VARARGS,
   "V.RemoveGhostCells()\nC++: void RemoveGhostCells()\n\nThis method will remove any cell that is marked as ghost (has the\nvtkDataSetAttributes::DUPLICATECELL bit set).\n"},
  {"GetData", PyvtkUnstructuredGrid_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkUnstructuredGrid\nC++: static vtkUnstructuredGrid *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkUnstructuredGrid\nC++: static vtkUnstructuredGrid *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"GetFaces", PyvtkUnstructuredGrid_GetFaces, METH_VARARGS,
   "V.GetFaces(int) -> (int, ...)\nC++: vtkIdType *GetFaces(vtkIdType cellId)\nV.GetFaces() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetFaces()\n\nSpecial support for polyhedron. Return nullptr for all other cell\ntypes.\n"},
  {"GetFaceLocations", PyvtkUnstructuredGrid_GetFaceLocations, METH_VARARGS,
   "V.GetFaceLocations() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetFaceLocations()\n\nGet pointer to faces and facelocations. Support for polyhedron\ncells.\n"},
  {"InitializeFacesRepresentation", PyvtkUnstructuredGrid_InitializeFacesRepresentation, METH_VARARGS,
   "V.InitializeFacesRepresentation(int) -> int\nC++: int InitializeFacesRepresentation(vtkIdType numPrevCells)\n\nSpecial function used by vtkUnstructuredGridReader. By default\nvtkUnstructuredGrid does not contain face information, which is\nonly used by polyhedron cells. If so far no polyhedron cells have\nbeen added, Faces and FaceLocations pointers will be nullptr. In\nthis case, need to initialize the arrays and assign values to the\nprevious non-polyhedron cells.\n"},
  {"GetMeshMTime", PyvtkUnstructuredGrid_GetMeshMTime, METH_VARARGS,
   "V.GetMeshMTime() -> int\nC++: virtual vtkMTimeType GetMeshMTime()\n\nReturn the mesh (geometry/topology) modification time. This time\nis different from the usual MTime which also takes into account\nthe modification of data arrays. This function can be used to\ntrack the changes on the mesh separately from the data arrays\n(eg. static mesh over time with transient data).\n"},
  {"DecomposeAPolyhedronCell", PyvtkUnstructuredGrid_DecomposeAPolyhedronCell, METH_VARARGS,
   "V.DecomposeAPolyhedronCell(vtkCellArray, int, int, vtkCellArray,\n    vtkIdTypeArray)\nC++: static void DecomposeAPolyhedronCell(\n    vtkCellArray *polyhedronCellArray, vtkIdType &nCellpts,\n    vtkIdType &nCellfaces, vtkCellArray *cellArray,\n    vtkIdTypeArray *faces)\nV.DecomposeAPolyhedronCell([int, ...], int, int, vtkCellArray,\n    vtkIdTypeArray)\nC++: static void DecomposeAPolyhedronCell(\n    vtkIdType *polyhedronCellStream, vtkIdType &nCellpts,\n    vtkIdType &nCellfaces, vtkCellArray *cellArray,\n    vtkIdTypeArray *faces)\nV.DecomposeAPolyhedronCell(int, (int, ...), int, vtkCellArray,\n    vtkIdTypeArray)\nC++: static void DecomposeAPolyhedronCell(vtkIdType nCellFaces,\n    const vtkIdType *inFaceStream, vtkIdType &nCellpts,\n    vtkCellArray *cellArray, vtkIdTypeArray *faces)\n\nA static method for converting a polyhedron vtkCellArray of\nformat [nCellFaces, nFace0Pts, i, j, k, nFace1Pts, i, j, k, ...]\ninto three components: (1) an integer indicating the number of\nfaces (2) a standard vtkCellArray storing point ids [nCell0Pts,\ni, j, k] and (3) an vtkIdTypeArray storing face connectivity in\nformat [nFace0Pts, i, j, k, nFace1Pts, i, j, k, ...] Note: input\nis assumed to contain only one polyhedron cell. Outputs (2) and\n(3) will be stacked at the end of the input cellArray and faces.\nThe original data in the input will not be touched.\n"},
  {"ConvertFaceStreamPointIds", PyvtkUnstructuredGrid_ConvertFaceStreamPointIds, METH_VARARGS,
   "V.ConvertFaceStreamPointIds(vtkIdList, [int, ...])\nC++: static void ConvertFaceStreamPointIds(vtkIdList *faceStream,\n    vtkIdType *idMap)\nV.ConvertFaceStreamPointIds(int, [int, ...], [int, ...])\nC++: static void ConvertFaceStreamPointIds(vtkIdType nfaces,\n    vtkIdType *faceStream, vtkIdType *idMap)\n\nConvert pid in a face stream into idMap[pid]. The face stream is\nof format [nCellFaces, nFace0Pts, i, j, k, nFace1Pts, i, j, k,\n...]. The user is responsible to make sure all the Ids in\nfaceStream do not exceed the range of idMap.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnstructuredGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkUnstructuredGrid", // tp_name
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
  PyvtkUnstructuredGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGrid_StaticNew()
{
  return vtkUnstructuredGrid::New();
}

PyObject *PyvtkUnstructuredGrid_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnstructuredGrid_Type, PyvtkUnstructuredGrid_Methods,
    "vtkUnstructuredGrid",
 &PyvtkUnstructuredGrid_StaticNew);

  PyTypeObject *pytype = &PyvtkUnstructuredGrid_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridBase_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

