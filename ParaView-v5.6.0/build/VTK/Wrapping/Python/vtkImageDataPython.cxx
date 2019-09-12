// python wrapper for vtkImageData
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
#include "vtkImageData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageData_ClassNew(); }

#ifndef DECLARED_PyvtkDataSet_ClassNew
extern "C" { PyObject *PyvtkDataSet_ClassNew(); }
#define DECLARED_PyvtkDataSet_ClassNew
#endif

static const char *PyvtkImageData_Doc =
  "vtkImageData - topologically and geometrically regular array of data\n\n"
  "Superclass: vtkDataSet\n\n"
  "vtkImageData is a data object that is a concrete implementation of\n"
  "vtkDataSet. vtkImageData represents a geometric structure that is a\n"
  "topological and geometrical regular array of points. Examples include\n"
  "volumes (voxel data) and pixmaps.\n\n";


static PyObject *
PyvtkImageData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageData *tempr = vtkImageData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageData::NewInstance());

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
PyvtkImageData_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkImageData::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkImageData::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkImageData::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkIdType temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint(temp0) :
      op->vtkImageData::GetPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkIdType temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetPoint(temp0, temp1);
    }
    else
    {
      op->vtkImageData::GetPoint(temp0, temp1);
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
PyvtkImageData_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_GetPoint_s1(self, args);
    case 2:
      return PyvtkImageData_GetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return nullptr;
}



static PyObject *
PyvtkImageData_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkImageData::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_GetCell_s1(self, args);
    case 3:
      return PyvtkImageData_GetCell_s2(self, args);
    case 2:
      return PyvtkImageData_GetCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}



static PyObject *
PyvtkImageData_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCellBounds(temp0, temp1);
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
PyvtkImageData_FindPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->FindPoint(temp0, temp1, temp2) :
      op->vtkImageData::FindPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_FindPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindPoint(temp0) :
      op->vtkImageData::FindPoint(temp0));

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
PyvtkImageData_FindPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageData_FindPoint_s1(self, args);
    case 1:
      return PyvtkImageData_FindPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindPoint");
  return nullptr;
}



static PyObject *
PyvtkImageData_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  vtkIdType temp2;
  double temp3;
  int temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(2*size6);
  double *temp6 = store6.Data();
  double *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp5, save5, size5);
    ap.Save(temp6, save6, size6);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkImageData::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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

    if (ap.HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  vtkGenericCell *temp2 = nullptr;
  vtkIdType temp3;
  double temp4;
  int temp5;
  const size_t size6 = 3;
  double temp6[3];
  double save6[3];
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<double> store7(2*size7);
  double *temp7 = store7.Data();
  double *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp6, save6, size6);
    ap.Save(temp7, save7, size7);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkImageData::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (ap.HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
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
PyvtkImageData_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return PyvtkImageData_FindCell_s1(self, args);
    case 8:
      return PyvtkImageData_FindCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}



static PyObject *
PyvtkImageData_FindAndGetCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAndGetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  vtkIdType temp2;
  double temp3;
  int temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(2*size6);
  double *temp6 = store6.Data();
  double *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp5, save5, size5);
    ap.Save(temp6, save6, size6);

    vtkCell *tempr = (ap.IsBound() ?
      op->FindAndGetCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkImageData::FindAndGetCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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

    if (ap.HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkImageData::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeBounds();
    }
    else
    {
      op->vtkImageData::ComputeBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkImageData::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkImageData::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->SetDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageData::SetDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkImageData::SetDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageData_SetDimensions_s1(self, args);
    case 1:
      return PyvtkImageData_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}



static PyObject *
PyvtkImageData_GetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkImageData::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDimensions(temp0);
    }
    else
    {
      op->vtkImageData::GetDimensions(temp0);
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
PyvtkImageData_GetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageData_GetDimensions_s1(self, args);
    case 1:
      return PyvtkImageData_GetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDimensions");
  return nullptr;
}



static PyObject *
PyvtkImageData_ComputeStructuredCoordinates_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStructuredCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->ComputeStructuredCoordinates(temp0, temp1, temp2) :
      op->vtkImageData::ComputeStructuredCoordinates(temp0, temp1, temp2));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_ComputeStructuredCoordinates_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeStructuredCoordinates");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(size3);
  int *temp3 = store3.Data();
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(size4);
  double *temp4 = store4.Data();
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(size5);
  double *temp5 = store5.Data();
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(size6);
  double *temp6 = store6.Data();
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    int tempr = vtkImageData::ComputeStructuredCoordinates(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_ComputeStructuredCoordinates(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageData_ComputeStructuredCoordinates_s1(self, args);
    case 7:
      return PyvtkImageData_ComputeStructuredCoordinates_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeStructuredCoordinates");
  return nullptr;
}



static PyObject *
PyvtkImageData_GetVoxelGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxelGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  vtkDataArray *temp3 = nullptr;
  vtkDataArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetVTKObject(temp4, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->GetVoxelGradient(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageData::GetVoxelGradient(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetPointGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  vtkDataArray *temp3 = nullptr;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->GetPointGradient(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageData::GetPointGradient(temp0, temp1, temp2, temp3, temp4);
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
PyvtkImageData_GetDataDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataDimension() :
      op->vtkImageData::GetDataDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_ComputePointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->ComputePointId(temp0) :
      op->vtkImageData::ComputePointId(temp0));

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
PyvtkImageData_ComputeCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->ComputeCellId(temp0) :
      op->vtkImageData::ComputeCellId(temp0));

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
PyvtkImageData_SetAxisUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(size3);
  int *temp3 = store3.Data();
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->SetAxisUpdateExtent(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageData::SetAxisUpdateExtent(temp0, temp1, temp2, temp3, temp4);
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
PyvtkImageData_GetAxisUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(size3);
  int *temp3 = store3.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    if (ap.IsBound())
    {
      op->GetAxisUpdateExtent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageData::GetAxisUpdateExtent(temp0, temp1, temp2, temp3);
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
PyvtkImageData_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetExtent(temp0);
    }
    else
    {
      op->vtkImageData::SetExtent(temp0);
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
PyvtkImageData_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageData::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_SetExtent_s1(self, args);
    case 6:
      return PyvtkImageData_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}



static PyObject *
PyvtkImageData_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkImageData::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarTypeMin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarTypeMin(temp0) :
      op->vtkImageData::GetScalarTypeMin(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarTypeMin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarTypeMin() :
      op->vtkImageData::GetScalarTypeMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarTypeMin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_GetScalarTypeMin_s1(self, args);
    case 0:
      return PyvtkImageData_GetScalarTypeMin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarTypeMin");
  return nullptr;
}



static PyObject *
PyvtkImageData_GetScalarTypeMax_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarTypeMax(temp0) :
      op->vtkImageData::GetScalarTypeMax(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarTypeMax_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarTypeMax() :
      op->vtkImageData::GetScalarTypeMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarTypeMax(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_GetScalarTypeMax_s1(self, args);
    case 0:
      return PyvtkImageData_GetScalarTypeMax_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarTypeMax");
  return nullptr;
}



static PyObject *
PyvtkImageData_GetScalarSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarSize(temp0) :
      op->vtkImageData::GetScalarSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarSize() :
      op->vtkImageData::GetScalarSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_GetScalarSize_s1(self, args);
    case 0:
      return PyvtkImageData_GetScalarSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarSize");
  return nullptr;
}



static PyObject *
PyvtkImageData_GetIncrements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetIncrements() :
      op->vtkImageData::GetIncrements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetIncrements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->GetIncrements(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageData::GetIncrements(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
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
PyvtkImageData_GetIncrements_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  vtkIdType temp0[3];
  vtkIdType save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetIncrements(temp0);
    }
    else
    {
      op->vtkImageData::GetIncrements(temp0);
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
PyvtkImageData_GetIncrements_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetIncrements(temp0) :
      op->vtkImageData::GetIncrements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetIncrements_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->GetIncrements(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageData::GetIncrements(temp0, temp1, temp2, temp3);
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
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetIncrements_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  const size_t size1 = 3;
  vtkIdType temp1[3];
  vtkIdType save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetIncrements(temp0, temp1);
    }
    else
    {
      op->vtkImageData::GetIncrements(temp0, temp1);
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

static PyMethodDef PyvtkImageData_GetIncrements_Methods[] = {
  {nullptr, PyvtkImageData_GetIncrements_s3, METH_VARARGS,
   "@P *k"},
  {nullptr, PyvtkImageData_GetIncrements_s4, METH_VARARGS,
   "@V *vtkDataArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageData_GetIncrements(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageData_GetIncrements_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageData_GetIncrements_s1(self, args);
    case 3:
      return PyvtkImageData_GetIncrements_s2(self, args);
    case 4:
      return PyvtkImageData_GetIncrements_s5(self, args);
    case 2:
      return PyvtkImageData_GetIncrements_s6(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetIncrements");
  return nullptr;
}



static PyObject *
PyvtkImageData_GetContinuousIncrements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContinuousIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  vtkIdType temp1;
  vtkIdType temp2;
  vtkIdType temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetContinuousIncrements(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageData::GetContinuousIncrements(temp0, temp1, temp2, temp3);
    }

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
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetContinuousIncrements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContinuousIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  vtkIdType temp2;
  vtkIdType temp3;
  vtkIdType temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetContinuousIncrements(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageData::GetContinuousIncrements(temp0, temp1, temp2, temp3, temp4);
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
PyvtkImageData_GetContinuousIncrements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageData_GetContinuousIncrements_s1(self, args);
    case 5:
      return PyvtkImageData_GetContinuousIncrements_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetContinuousIncrements");
  return nullptr;
}



static PyObject *
PyvtkImageData_GetScalarPointerForExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarPointerForExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    void  *tempr = (ap.IsBound() ?
      op->GetScalarPointerForExtent(temp0) :
      op->vtkImageData::GetScalarPointerForExtent(temp0));

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
PyvtkImageData_GetScalarPointer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    void  *tempr = (ap.IsBound() ?
      op->GetScalarPointer(temp0) :
      op->vtkImageData::GetScalarPointer(temp0));

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
PyvtkImageData_GetScalarPointer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetScalarPointer(temp0, temp1, temp2) :
      op->vtkImageData::GetScalarPointer(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarPointer_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetScalarPointer() :
      op->vtkImageData::GetScalarPointer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarPointer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_GetScalarPointer_s1(self, args);
    case 3:
      return PyvtkImageData_GetScalarPointer_s2(self, args);
    case 0:
      return PyvtkImageData_GetScalarPointer_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarPointer");
  return nullptr;
}



static PyObject *
PyvtkImageData_GetScalarComponentAsFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentAsFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    float tempr = (ap.IsBound() ?
      op->GetScalarComponentAsFloat(temp0, temp1, temp2, temp3) :
      op->vtkImageData::GetScalarComponentAsFloat(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarComponentFromFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponentFromFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  float temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetScalarComponentFromFloat(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageData::SetScalarComponentFromFloat(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarComponentAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarComponentAsDouble(temp0, temp1, temp2, temp3) :
      op->vtkImageData::GetScalarComponentAsDouble(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarComponentFromDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponentFromDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetScalarComponentFromDouble(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageData::SetScalarComponentFromDouble(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_AllocateScalars_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AllocateScalars(temp0, temp1);
    }
    else
    {
      op->vtkImageData::AllocateScalars(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_AllocateScalars_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->AllocateScalars(temp0);
    }
    else
    {
      op->vtkImageData::AllocateScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_AllocateScalars(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageData_AllocateScalars_s1(self, args);
    case 1:
      return PyvtkImageData_AllocateScalars_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllocateScalars");
  return nullptr;
}



static PyObject *
PyvtkImageData_CopyAndCastFrom_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAndCastFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkImageData *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->CopyAndCastFrom(temp0, temp1);
    }
    else
    {
      op->vtkImageData::CopyAndCastFrom(temp0, temp1);
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
PyvtkImageData_CopyAndCastFrom_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAndCastFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkImageData *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    if (ap.IsBound())
    {
      op->CopyAndCastFrom(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkImageData::CopyAndCastFrom(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_CopyAndCastFrom(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageData_CopyAndCastFrom_s1(self, args);
    case 7:
      return PyvtkImageData_CopyAndCastFrom_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyAndCastFrom");
  return nullptr;
}



static PyObject *
PyvtkImageData_Crop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Crop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Crop(temp0);
    }
    else
    {
      op->vtkImageData::Crop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkImageData::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageData::SetSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSpacing(temp0);
    }
    else
    {
      op->vtkImageData::SetSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageData_SetSpacing_s1(self, args);
    case 1:
      return PyvtkImageData_SetSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacing");
  return nullptr;
}



static PyObject *
PyvtkImageData_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkImageData::GetSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageData::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkImageData::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageData_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImageData_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}



static PyObject *
PyvtkImageData_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkImageData::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetScalarType");

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    vtkImageData::SetScalarType(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarType_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScalarType");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = vtkImageData::GetScalarType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarType() :
      op->vtkImageData::GetScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageData_GetScalarType_Methods[] = {
  {nullptr, PyvtkImageData_GetScalarType_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageData_GetScalarType(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageData_GetScalarType_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageData_GetScalarType_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarType");
  return nullptr;
}



static PyObject *
PyvtkImageData_HasScalarType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HasScalarType");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    bool tempr = vtkImageData::HasScalarType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarTypeAsString() :
      op->vtkImageData::GetScalarTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SetNumberOfScalarComponents(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetNumberOfScalarComponents");

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    vtkImageData::SetNumberOfScalarComponents(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetNumberOfScalarComponents_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfScalarComponents");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = vtkImageData::GetNumberOfScalarComponents(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetNumberOfScalarComponents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarComponents() :
      op->vtkImageData::GetNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageData_GetNumberOfScalarComponents_Methods[] = {
  {nullptr, PyvtkImageData_GetNumberOfScalarComponents_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageData_GetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageData_GetNumberOfScalarComponents_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageData_GetNumberOfScalarComponents_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfScalarComponents");
  return nullptr;
}



static PyObject *
PyvtkImageData_HasNumberOfScalarComponents(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HasNumberOfScalarComponents");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    bool tempr = vtkImageData::HasNumberOfScalarComponents(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_CopyInformationFromPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationFromPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyInformationFromPipeline(temp0);
    }
    else
    {
      op->vtkImageData::CopyInformationFromPipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_CopyInformationToPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationToPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyInformationToPipeline(temp0);
    }
    else
    {
      op->vtkImageData::CopyInformationToPipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_PrepareForNewData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForNewData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrepareForNewData();
    }
    else
    {
      op->vtkImageData::PrepareForNewData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetArrayPointerForExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayPointerForExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    void  *tempr = (ap.IsBound() ?
      op->GetArrayPointerForExtent(temp0, temp1) :
      op->vtkImageData::GetArrayPointerForExtent(temp0, temp1));

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
PyvtkImageData_GetArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    void  *tempr = (ap.IsBound() ?
      op->GetArrayPointer(temp0, temp1) :
      op->vtkImageData::GetArrayPointer(temp0, temp1));

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
PyvtkImageData_GetArrayIncrements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  const size_t size1 = 3;
  vtkIdType temp1[3];
  vtkIdType save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetArrayIncrements(temp0, temp1);
    }
    else
    {
      op->vtkImageData::GetArrayIncrements(temp0, temp1);
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
PyvtkImageData_ComputeInternalExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInternalExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->ComputeInternalExtent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageData::ComputeInternalExtent(temp0, temp1, temp2);
    }

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
PyvtkImageData_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentType() :
      op->vtkImageData::GetExtentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkImageData *tempr = vtkImageData::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkImageData *tempr = vtkImageData::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageData_GetData_Methods[] = {
  {nullptr, PyvtkImageData_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkImageData_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageData_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageData_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageData_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyMethodDef PyvtkImageData_Methods[] = {
  {"IsTypeOf", PyvtkImageData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageData\nC++: static vtkImageData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageData\nC++: vtkImageData *NewInstance()\n\n"},
  {"CopyStructure", PyvtkImageData_CopyStructure, METH_VARARGS,
   "V.CopyStructure(vtkDataSet)\nC++: void CopyStructure(vtkDataSet *ds) override;\n\nCopy the geometric and topological structure of an input image\ndata object.\n"},
  {"GetDataObjectType", PyvtkImageData_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"GetNumberOfCells", PyvtkImageData_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetNumberOfPoints", PyvtkImageData_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints() override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetPoint", PyvtkImageData_GetPoint, METH_VARARGS,
   "V.GetPoint(int) -> (float, float, float)\nC++: double *GetPoint(vtkIdType ptId) override;\nV.GetPoint(int, [float, float, float])\nC++: void GetPoint(vtkIdType id, double x[3]) override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetCell", PyvtkImageData_GetCell, METH_VARARGS,
   "V.GetCell(int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType cellId) override;\nV.GetCell(int, int, int) -> vtkCell\nC++: vtkCell *GetCell(int i, int j, int k) override;\nV.GetCell(int, vtkGenericCell)\nC++: void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n    override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetCellBounds", PyvtkImageData_GetCellBounds, METH_VARARGS,
   "V.GetCellBounds(int, [float, float, float, float, float, float])\nC++: void GetCellBounds(vtkIdType cellId, double bounds[6])\n    override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"FindPoint", PyvtkImageData_FindPoint, METH_VARARGS,
   "V.FindPoint(float, float, float) -> int\nC++: virtual vtkIdType FindPoint(double x, double y, double z)\nV.FindPoint([float, float, float]) -> int\nC++: vtkIdType FindPoint(double x[3]) override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"FindCell", PyvtkImageData_FindCell, METH_VARARGS,
   "V.FindCell([float, float, float], vtkCell, int, float, int,\n    [float, float, float], [float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights) override;\nV.FindCell([float, float, float], vtkCell, vtkGenericCell, int,\n    float, int, [float, float, float], [float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkGenericCell *gencell, vtkIdType cellId, double tol2,\n    int &subId, double pcoords[3], double *weights) override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"FindAndGetCell", PyvtkImageData_FindAndGetCell, METH_VARARGS,
   "V.FindAndGetCell([float, float, float], vtkCell, int, float, int,\n    [float, float, float], [float, ...]) -> vtkCell\nC++: vtkCell *FindAndGetCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights) override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetCellType", PyvtkImageData_GetCellType, METH_VARARGS,
   "V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType cellId) override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetCellPoints", PyvtkImageData_GetCellPoints, METH_VARARGS,
   "V.GetCellPoints(int, vtkIdList)\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n    override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetPointCells", PyvtkImageData_GetPointCells, METH_VARARGS,
   "V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n    override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"ComputeBounds", PyvtkImageData_ComputeBounds, METH_VARARGS,
   "V.ComputeBounds()\nC++: void ComputeBounds() override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetMaxCellSize", PyvtkImageData_GetMaxCellSize, METH_VARARGS,
   "V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize() override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"Initialize", PyvtkImageData_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nRestore data object to initial state.\n"},
  {"SetDimensions", PyvtkImageData_SetDimensions, METH_VARARGS,
   "V.SetDimensions(int, int, int)\nC++: virtual void SetDimensions(int i, int j, int k)\nV.SetDimensions((int, int, int))\nC++: virtual void SetDimensions(const int dims[3])\n\nSame as SetExtent(0, i-1, 0, j-1, 0, k-1)\n"},
  {"GetDimensions", PyvtkImageData_GetDimensions, METH_VARARGS,
   "V.GetDimensions() -> (int, int, int)\nC++: virtual int *GetDimensions()\nV.GetDimensions([int, int, int])\nC++: virtual void GetDimensions(int dims[3])\n\nGet dimensions of this structured points dataset. It is the\nnumber of points on each axis. Dimensions are computed from\nExtents during this call.\n\\warning Non thread-safe, use second signature if you want it to\n    be.\n"},
  {"ComputeStructuredCoordinates", PyvtkImageData_ComputeStructuredCoordinates, METH_VARARGS,
   "V.ComputeStructuredCoordinates((float, float, float), [int, int,\n    int], [float, float, float]) -> int\nC++: virtual int ComputeStructuredCoordinates(const double x[3],\n    int ijk[3], double pcoords[3])\nV.ComputeStructuredCoordinates((float, float, float), [int, int,\n    int], [float, float, float], (int, ...), (float, ...), (float,\n     ...), (float, ...)) -> int\nC++: static int ComputeStructuredCoordinates(const double x[3],\n    int ijk[3], double pcoords[3], const int *extent,\n    const double *spacing, const double *origin,\n    const double *bounds)\n\nConvenience function computes the structured coordinates for a\npoint x[3]. The voxel is specified by the array ijk[3], and the\nparametric coordinates in the cell are specified with pcoords[3].\nThe function returns a 0 if the point x is outside of the volume,\nand a 1 if inside the volume.\n"},
  {"GetVoxelGradient", PyvtkImageData_GetVoxelGradient, METH_VARARGS,
   "V.GetVoxelGradient(int, int, int, vtkDataArray, vtkDataArray)\nC++: virtual void GetVoxelGradient(int i, int j, int k,\n    vtkDataArray *s, vtkDataArray *g)\n\nGiven structured coordinates (i,j,k) for a voxel cell, compute\nthe eight gradient values for the voxel corners. The order in\nwhich the gradient vectors are arranged corresponds to the\nordering of the voxel points. Gradient vector is computed by\ncentral differences (except on edges of volume where forward\ndifference is used). The scalars s are the scalars from which the\ngradient is to be computed. This method will treat only 3D\nstructured point datasets (i.e., volumes).\n"},
  {"GetPointGradient", PyvtkImageData_GetPointGradient, METH_VARARGS,
   "V.GetPointGradient(int, int, int, vtkDataArray, [float, float,\n    float])\nC++: virtual void GetPointGradient(int i, int j, int k,\n    vtkDataArray *s, double g[3])\n\nGiven structured coordinates (i,j,k) for a point in a structured\npoint dataset, compute the gradient vector from the scalar data\nat that point. The scalars s are the scalars from which the\ngradient is to be computed. This method will treat structured\npoint datasets of any dimension.\n"},
  {"GetDataDimension", PyvtkImageData_GetDataDimension, METH_VARARGS,
   "V.GetDataDimension() -> int\nC++: virtual int GetDataDimension()\n\nReturn the dimensionality of the data.\n"},
  {"ComputePointId", PyvtkImageData_ComputePointId, METH_VARARGS,
   "V.ComputePointId([int, int, int]) -> int\nC++: virtual vtkIdType ComputePointId(int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), return the\npoint id.\n"},
  {"ComputeCellId", PyvtkImageData_ComputeCellId, METH_VARARGS,
   "V.ComputeCellId([int, int, int]) -> int\nC++: virtual vtkIdType ComputeCellId(int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), return the\ncell id.\n"},
  {"SetAxisUpdateExtent", PyvtkImageData_SetAxisUpdateExtent, METH_VARARGS,
   "V.SetAxisUpdateExtent(int, int, int, (int, ...), [int, ...])\nC++: virtual void SetAxisUpdateExtent(int axis, int min, int max,\n    const int *updateExtent, int *axisUpdateExtent)\n\nSet / Get the extent on just one axis\n"},
  {"GetAxisUpdateExtent", PyvtkImageData_GetAxisUpdateExtent, METH_VARARGS,
   "V.GetAxisUpdateExtent(int, int, int, (int, ...))\nC++: virtual void GetAxisUpdateExtent(int axis, int &min,\n    int &max, const int *updateExtent)\n\nSet / Get the extent on just one axis\n"},
  {"SetExtent", PyvtkImageData_SetExtent, METH_VARARGS,
   "V.SetExtent([int, int, int, int, int, int])\nC++: virtual void SetExtent(int extent[6])\nV.SetExtent(int, int, int, int, int, int)\nC++: virtual void SetExtent(int x1, int x2, int y1, int y2,\n    int z1, int z2)\n\nSet/Get the extent. On each axis, the extent is defined by the\nindex of the first point and the index of the last point.  The\nextent should be set before the \"Scalars\" are set or allocated. \nThe Extent is stored in the order (X, Y, Z). The dataset extent\ndoes not have to start at (0,0,0). (0,0,0) is just the extent of\nthe origin. The first point (the one with Id=0) is at extent\n(Extent[0],Extent[2],Extent[4]). As for any dataset, a data array\non point data starts at Id=0.\n"},
  {"GetExtent", PyvtkImageData_GetExtent, METH_VARARGS,
   "V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\n"},
  {"GetScalarTypeMin", PyvtkImageData_GetScalarTypeMin, METH_VARARGS,
   "V.GetScalarTypeMin(vtkInformation) -> float\nC++: virtual double GetScalarTypeMin(vtkInformation *meta_data)\nV.GetScalarTypeMin() -> float\nC++: virtual double GetScalarTypeMin()\n\nThese returns the minimum and maximum values the ScalarType can\nhold without overflowing.\n"},
  {"GetScalarTypeMax", PyvtkImageData_GetScalarTypeMax, METH_VARARGS,
   "V.GetScalarTypeMax(vtkInformation) -> float\nC++: virtual double GetScalarTypeMax(vtkInformation *meta_data)\nV.GetScalarTypeMax() -> float\nC++: virtual double GetScalarTypeMax()\n\nThese returns the minimum and maximum values the ScalarType can\nhold without overflowing.\n"},
  {"GetScalarSize", PyvtkImageData_GetScalarSize, METH_VARARGS,
   "V.GetScalarSize(vtkInformation) -> int\nC++: virtual int GetScalarSize(vtkInformation *meta_data)\nV.GetScalarSize() -> int\nC++: virtual int GetScalarSize()\n\nGet the size of the scalar type in bytes.\n"},
  {"GetIncrements", PyvtkImageData_GetIncrements, METH_VARARGS,
   "V.GetIncrements() -> (int, int, int)\nC++: virtual vtkIdType *GetIncrements()\nV.GetIncrements(int, int, int)\nC++: virtual void GetIncrements(vtkIdType &incX, vtkIdType &incY,\n    vtkIdType &incZ)\nV.GetIncrements([int, int, int])\nC++: virtual void GetIncrements(vtkIdType inc[3])\nV.GetIncrements(vtkDataArray) -> (int, int, int)\nC++: virtual vtkIdType *GetIncrements(vtkDataArray *scalars)\nV.GetIncrements(vtkDataArray, int, int, int)\nC++: virtual void GetIncrements(vtkDataArray *scalars,\n    vtkIdType &incX, vtkIdType &incY, vtkIdType &incZ)\nV.GetIncrements(vtkDataArray, [int, int, int])\nC++: virtual void GetIncrements(vtkDataArray *scalars,\n    vtkIdType inc[3])\n\nDifferent ways to get the increments for moving around the data.\nGetIncrements() calls ComputeIncrements() to ensure the\nincrements are up to date.  The first three methods compute the\nincrements based on the active scalar field while the next three,\nthe scalar field is passed in.\n"},
  {"GetContinuousIncrements", PyvtkImageData_GetContinuousIncrements, METH_VARARGS,
   "V.GetContinuousIncrements([int, int, int, int, int, int], int,\n    int, int)\nC++: virtual void GetContinuousIncrements(int extent[6],\n    vtkIdType &incX, vtkIdType &incY, vtkIdType &incZ)\nV.GetContinuousIncrements(vtkDataArray, [int, int, int, int, int,\n    int], int, int, int)\nC++: virtual void GetContinuousIncrements(vtkDataArray *scalars,\n    int extent[6], vtkIdType &incX, vtkIdType &incY,\n    vtkIdType &incZ)\n\nDifferent ways to get the increments for moving around the data.\nincX is always returned with 0.  incY is returned with the\nincrement needed to move from the end of one X scanline of data\nto the start of the next line.  incZ is filled in with the\nincrement needed to move from the end of one image to the start\nof the next.  The proper way to use these values is to for a loop\nover Z, Y, X, C, incrementing the pointer by 1 after each\ncomponent.  When the end of the component is reached, the pointer\nis set to the beginning of the next pixel, thus incX is properly\nset to 0. The first form of GetContinuousIncrements uses the\nactive scalar field while the second form allows the scalar array\nto be passed in.\n"},
  {"GetScalarPointerForExtent", PyvtkImageData_GetScalarPointerForExtent, METH_VARARGS,
   "V.GetScalarPointerForExtent([int, int, int, int, int, int])\n    -> void\nC++: virtual void *GetScalarPointerForExtent(int extent[6])\n\nAccess the native pointer for the scalar data\n"},
  {"GetScalarPointer", PyvtkImageData_GetScalarPointer, METH_VARARGS,
   "V.GetScalarPointer([int, int, int]) -> void\nC++: virtual void *GetScalarPointer(int coordinates[3])\nV.GetScalarPointer(int, int, int) -> void\nC++: virtual void *GetScalarPointer(int x, int y, int z)\nV.GetScalarPointer() -> void\nC++: virtual void *GetScalarPointer()\n\nAccess the native pointer for the scalar data\n"},
  {"GetScalarComponentAsFloat", PyvtkImageData_GetScalarComponentAsFloat, METH_VARARGS,
   "V.GetScalarComponentAsFloat(int, int, int, int) -> float\nC++: virtual float GetScalarComponentAsFloat(int x, int y, int z,\n    int component)\n\nFor access to data from wrappers\n"},
  {"SetScalarComponentFromFloat", PyvtkImageData_SetScalarComponentFromFloat, METH_VARARGS,
   "V.SetScalarComponentFromFloat(int, int, int, int, float)\nC++: virtual void SetScalarComponentFromFloat(int x, int y, int z,\n     int component, float v)\n\nFor access to data from wrappers\n"},
  {"GetScalarComponentAsDouble", PyvtkImageData_GetScalarComponentAsDouble, METH_VARARGS,
   "V.GetScalarComponentAsDouble(int, int, int, int) -> float\nC++: virtual double GetScalarComponentAsDouble(int x, int y,\n    int z, int component)\n\nFor access to data from wrappers\n"},
  {"SetScalarComponentFromDouble", PyvtkImageData_SetScalarComponentFromDouble, METH_VARARGS,
   "V.SetScalarComponentFromDouble(int, int, int, int, float)\nC++: virtual void SetScalarComponentFromDouble(int x, int y,\n    int z, int component, double v)\n\nFor access to data from wrappers\n"},
  {"AllocateScalars", PyvtkImageData_AllocateScalars, METH_VARARGS,
   "V.AllocateScalars(int, int)\nC++: virtual void AllocateScalars(int dataType, int numComponents)\nV.AllocateScalars(vtkInformation)\nC++: virtual void AllocateScalars(vtkInformation *pipeline_info)\n\nAllocate the point scalars for this dataset. The data type\ndetermines the type of the array (VTK_FLOAT, VTK_INT etc.) where\nas numComponents determines its number of components.\n"},
  {"CopyAndCastFrom", PyvtkImageData_CopyAndCastFrom, METH_VARARGS,
   "V.CopyAndCastFrom(vtkImageData, [int, int, int, int, int, int])\nC++: virtual void CopyAndCastFrom(vtkImageData *inData,\n    int extent[6])\nV.CopyAndCastFrom(vtkImageData, int, int, int, int, int, int)\nC++: virtual void CopyAndCastFrom(vtkImageData *inData, int x0,\n    int x1, int y0, int y1, int z0, int z1)\n\nThis method is passed a input and output region, and executes the\nfilter algorithm to fill the output from the input. It just\nexecutes a switch statement to call the correct function for the\nregions data types.\n"},
  {"Crop", PyvtkImageData_Crop, METH_VARARGS,
   "V.Crop((int, ...))\nC++: void Crop(const int *updateExtent) override;\n\nReallocates and copies to set the Extent to updateExtent. This is\nused internally when the exact extent is requested, and the\nsource generated more than the update extent.\n"},
  {"GetActualMemorySize", PyvtkImageData_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value). THIS METHOD\nIS THREAD SAFE.\n"},
  {"SetSpacing", PyvtkImageData_SetSpacing, METH_VARARGS,
   "V.SetSpacing(float, float, float)\nC++: void SetSpacing(double, double, double)\nV.SetSpacing((float, float, float))\nC++: void SetSpacing(double a[3])\n\n"},
  {"GetSpacing", PyvtkImageData_GetSpacing, METH_VARARGS,
   "V.GetSpacing() -> (float, float, float)\nC++: double *GetSpacing()\n\n"},
  {"SetOrigin", PyvtkImageData_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {"GetOrigin", PyvtkImageData_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {"SetScalarType", PyvtkImageData_SetScalarType, METH_VARARGS,
   "V.SetScalarType(int, vtkInformation)\nC++: static void SetScalarType(int, vtkInformation *meta_data)\n\n"},
  {"GetScalarType", PyvtkImageData_GetScalarType, METH_VARARGS,
   "V.GetScalarType(vtkInformation) -> int\nC++: static int GetScalarType(vtkInformation *meta_data)\nV.GetScalarType() -> int\nC++: int GetScalarType()\n\n"},
  {"HasScalarType", PyvtkImageData_HasScalarType, METH_VARARGS,
   "V.HasScalarType(vtkInformation) -> bool\nC++: static bool HasScalarType(vtkInformation *meta_data)\n\n"},
  {"GetScalarTypeAsString", PyvtkImageData_GetScalarTypeAsString, METH_VARARGS,
   "V.GetScalarTypeAsString() -> string\nC++: const char *GetScalarTypeAsString()\n\n"},
  {"SetNumberOfScalarComponents", PyvtkImageData_SetNumberOfScalarComponents, METH_VARARGS,
   "V.SetNumberOfScalarComponents(int, vtkInformation)\nC++: static void SetNumberOfScalarComponents(int n,\n    vtkInformation *meta_data)\n\nSet/Get the number of scalar components for points. As with the\nSetScalarType method this is setting pipeline info.\n"},
  {"GetNumberOfScalarComponents", PyvtkImageData_GetNumberOfScalarComponents, METH_VARARGS,
   "V.GetNumberOfScalarComponents(vtkInformation) -> int\nC++: static int GetNumberOfScalarComponents(\n    vtkInformation *meta_data)\nV.GetNumberOfScalarComponents() -> int\nC++: int GetNumberOfScalarComponents()\n\nSet/Get the number of scalar components for points. As with the\nSetScalarType method this is setting pipeline info.\n"},
  {"HasNumberOfScalarComponents", PyvtkImageData_HasNumberOfScalarComponents, METH_VARARGS,
   "V.HasNumberOfScalarComponents(vtkInformation) -> bool\nC++: static bool HasNumberOfScalarComponents(\n    vtkInformation *meta_data)\n\nSet/Get the number of scalar components for points. As with the\nSetScalarType method this is setting pipeline info.\n"},
  {"CopyInformationFromPipeline", PyvtkImageData_CopyInformationFromPipeline, METH_VARARGS,
   "V.CopyInformationFromPipeline(vtkInformation)\nC++: void CopyInformationFromPipeline(vtkInformation *information)\n     override;\n\nOverride these to handle origin, spacing, scalar type, and scalar\nnumber of components.  See vtkDataObject for details.\n"},
  {"CopyInformationToPipeline", PyvtkImageData_CopyInformationToPipeline, METH_VARARGS,
   "V.CopyInformationToPipeline(vtkInformation)\nC++: void CopyInformationToPipeline(vtkInformation *information)\n    override;\n\nCopy information from this data object to the pipeline\ninformation. This is used by the vtkTrivialProducer that is\ncreated when someone calls SetInputData() to connect the image to\na pipeline.\n"},
  {"PrepareForNewData", PyvtkImageData_PrepareForNewData, METH_VARARGS,
   "V.PrepareForNewData()\nC++: void PrepareForNewData() override;\n\nmake the output data ready for new data to be inserted. For most\nobjects we just call Initialize. But for image data we leave the\nold data in case the memory can be reused.\n"},
  {"ShallowCopy", PyvtkImageData_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"DeepCopy", PyvtkImageData_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"GetArrayPointerForExtent", PyvtkImageData_GetArrayPointerForExtent, METH_VARARGS,
   "V.GetArrayPointerForExtent(vtkDataArray, [int, int, int, int, int,\n     int]) -> void\nC++: void *GetArrayPointerForExtent(vtkDataArray *array,\n    int extent[6])\n\nThese are convenience methods for getting a pointer from any\nfiled array.  It is a start at expanding image filters to process\nany array (not just scalars).\n"},
  {"GetArrayPointer", PyvtkImageData_GetArrayPointer, METH_VARARGS,
   "V.GetArrayPointer(vtkDataArray, [int, int, int]) -> void\nC++: void *GetArrayPointer(vtkDataArray *array,\n    int coordinates[3])\n\nThese are convenience methods for getting a pointer from any\nfiled array.  It is a start at expanding image filters to process\nany array (not just scalars).\n"},
  {"GetArrayIncrements", PyvtkImageData_GetArrayIncrements, METH_VARARGS,
   "V.GetArrayIncrements(vtkDataArray, [int, int, int])\nC++: void GetArrayIncrements(vtkDataArray *array,\n    vtkIdType increments[3])\n\nSince various arrays have different number of components, the\nwill have different increments.\n"},
  {"ComputeInternalExtent", PyvtkImageData_ComputeInternalExtent, METH_VARARGS,
   "V.ComputeInternalExtent([int, ...], [int, ...], [int, ...])\nC++: void ComputeInternalExtent(int *intExt, int *tgtExt,\n    int *bnds)\n\nGiven how many pixel are required on a side for bounrary\nconditions (in bnds), the target extent to traverse, compute the\ninternal extent (the extent for this ImageData that does not\nsuffer from any boundary conditions) and place it in intExt\n"},
  {"GetExtentType", PyvtkImageData_GetExtentType, METH_VARARGS,
   "V.GetExtentType() -> int\nC++: int GetExtentType() override;\n\nThe extent type is a 3D extent\n"},
  {"GetData", PyvtkImageData_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkImageData\nC++: static vtkImageData *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkImageData\nC++: static vtkImageData *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkImageData", // tp_name
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
  PyvtkImageData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageData_StaticNew()
{
  return vtkImageData::New();
}

PyObject *PyvtkImageData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageData_Type, PyvtkImageData_Methods,
    "vtkImageData",
 &PyvtkImageData_StaticNew);

  PyTypeObject *pytype = &PyvtkImageData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageData", o) != 0)
  {
    Py_DECREF(o);
  }

}

