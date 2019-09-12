// python wrapper for vtkUniformGrid
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
#include "vtkUniformGrid.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUniformGrid(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUniformGrid_ClassNew(); }

#ifndef DECLARED_PyvtkImageData_ClassNew
extern "C" { PyObject *PyvtkImageData_ClassNew(); }
#define DECLARED_PyvtkImageData_ClassNew
#endif

static const char *PyvtkUniformGrid_Doc =
  "vtkUniformGrid - image data with blanking\n\n"
  "Superclass: vtkImageData\n\n"
  "vtkUniformGrid is a subclass of vtkImageData. In addition to all the\n"
  "image data functionality, it supports blanking.\n\n";


static PyObject *
PyvtkUniformGrid_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUniformGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUniformGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUniformGrid *tempr = vtkUniformGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUniformGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUniformGrid::NewInstance());

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
PyvtkUniformGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkUniformGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkUniformGrid::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGrid_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkUniformGrid_GetCell_s1(self, args);
    case 1:
      return PyvtkUniformGrid_GetCell_s2(self, args);
    case 2:
      return PyvtkUniformGrid_GetCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}



static PyObject *
PyvtkUniformGrid_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkUniformGrid_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkUniformGrid_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return PyvtkUniformGrid_FindCell_s1(self, args);
    case 8:
      return PyvtkUniformGrid_FindCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}



static PyObject *
PyvtkUniformGrid_FindAndGetCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAndGetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::FindAndGetCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkUniformGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkUniformGrid::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->vtkUniformGrid::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkUniformGrid::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkUniformGrid::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetGridDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridDescription() :
      op->vtkUniformGrid::GetGridDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_BlankPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->BlankPoint(temp0);
    }
    else
    {
      op->vtkUniformGrid::BlankPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGrid_BlankPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->BlankPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUniformGrid::BlankPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGrid_BlankPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUniformGrid_BlankPoint_s1(self, args);
    case 3:
      return PyvtkUniformGrid_BlankPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "BlankPoint");
  return nullptr;
}



static PyObject *
PyvtkUniformGrid_UnBlankPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnBlankPoint(temp0);
    }
    else
    {
      op->vtkUniformGrid::UnBlankPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGrid_UnBlankPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->UnBlankPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUniformGrid::UnBlankPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGrid_UnBlankPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUniformGrid_UnBlankPoint_s1(self, args);
    case 3:
      return PyvtkUniformGrid_UnBlankPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UnBlankPoint");
  return nullptr;
}



static PyObject *
PyvtkUniformGrid_BlankCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->BlankCell(temp0);
    }
    else
    {
      op->vtkUniformGrid::BlankCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGrid_BlankCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->BlankCell(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUniformGrid::BlankCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGrid_BlankCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUniformGrid_BlankCell_s1(self, args);
    case 3:
      return PyvtkUniformGrid_BlankCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "BlankCell");
  return nullptr;
}



static PyObject *
PyvtkUniformGrid_UnBlankCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnBlankCell(temp0);
    }
    else
    {
      op->vtkUniformGrid::UnBlankCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGrid_UnBlankCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

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
      op->UnBlankCell(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUniformGrid::UnBlankCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGrid_UnBlankCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUniformGrid_UnBlankCell_s1(self, args);
    case 3:
      return PyvtkUniformGrid_UnBlankCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UnBlankCell");
  return nullptr;
}



static PyObject *
PyvtkUniformGrid_HasAnyBlankCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyBlankCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyBlankCells() :
      op->vtkUniformGrid::HasAnyBlankCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_HasAnyBlankPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyBlankPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyBlankPoints() :
      op->vtkUniformGrid::HasAnyBlankPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_IsPointVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->IsPointVisible(temp0) :
      op->vtkUniformGrid::IsPointVisible(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_IsCellVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCellVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->IsCellVisible(temp0) :
      op->vtkUniformGrid::IsCellVisible(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_NewImageDataCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewImageDataCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGrid *op = static_cast<vtkUniformGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->NewImageDataCopy() :
      op->vtkUniformGrid::NewImageDataCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGrid_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkUniformGrid *tempr = vtkUniformGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUniformGrid_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkUniformGrid *tempr = vtkUniformGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUniformGrid_GetData_Methods[] = {
  {nullptr, PyvtkUniformGrid_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkUniformGrid_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUniformGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUniformGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkUniformGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyMethodDef PyvtkUniformGrid_Methods[] = {
  {"IsTypeOf", PyvtkUniformGrid_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct an empty uniform grid.\n"},
  {"IsA", PyvtkUniformGrid_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct an empty uniform grid.\n"},
  {"SafeDownCast", PyvtkUniformGrid_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUniformGrid\nC++: static vtkUniformGrid *SafeDownCast(vtkObjectBase *o)\n\nConstruct an empty uniform grid.\n"},
  {"NewInstance", PyvtkUniformGrid_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUniformGrid\nC++: vtkUniformGrid *NewInstance()\n\nConstruct an empty uniform grid.\n"},
  {"CopyStructure", PyvtkUniformGrid_CopyStructure, METH_VARARGS,
   "V.CopyStructure(vtkDataSet)\nC++: void CopyStructure(vtkDataSet *ds) override;\n\nCopy the geometric and topological structure of an input image\ndata object.\n"},
  {"GetDataObjectType", PyvtkUniformGrid_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"GetCell", PyvtkUniformGrid_GetCell, METH_VARARGS,
   "V.GetCell(int, int, int) -> vtkCell\nC++: vtkCell *GetCell(int i, int j, int k) override;\nV.GetCell(int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType cellId) override;\nV.GetCell(int, vtkGenericCell)\nC++: void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n    override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"FindCell", PyvtkUniformGrid_FindCell, METH_VARARGS,
   "V.FindCell([float, float, float], vtkCell, int, float, int,\n    [float, float, float], [float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights) override;\nV.FindCell([float, float, float], vtkCell, vtkGenericCell, int,\n    float, int, [float, float, float], [float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkGenericCell *gencell, vtkIdType cellId, double tol2,\n    int &subId, double pcoords[3], double *weights) override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"FindAndGetCell", PyvtkUniformGrid_FindAndGetCell, METH_VARARGS,
   "V.FindAndGetCell([float, float, float], vtkCell, int, float, int,\n    [float, float, float], [float, ...]) -> vtkCell\nC++: vtkCell *FindAndGetCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights) override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetCellType", PyvtkUniformGrid_GetCellType, METH_VARARGS,
   "V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType cellId) override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetCellPoints", PyvtkUniformGrid_GetCellPoints, METH_VARARGS,
   "V.GetCellPoints(int, vtkIdList)\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n    override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetPointCells", PyvtkUniformGrid_GetPointCells, METH_VARARGS,
   "V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n    override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"Initialize", PyvtkUniformGrid_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetMaxCellSize", PyvtkUniformGrid_GetMaxCellSize, METH_VARARGS,
   "V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize() override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetGridDescription", PyvtkUniformGrid_GetGridDescription, METH_VARARGS,
   "V.GetGridDescription() -> int\nC++: int GetGridDescription()\n\nReturns the data description of this uniform grid instance.\n"},
  {"BlankPoint", PyvtkUniformGrid_BlankPoint, METH_VARARGS,
   "V.BlankPoint(int)\nC++: virtual void BlankPoint(vtkIdType ptId)\nV.BlankPoint(int, int, int)\nC++: virtual void BlankPoint(const int i, const int j,\n    const int k)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff points in the structured grid, and hence the cells connected\nto them. These methods should be called only after the dimensions\nof the grid are set.\n"},
  {"UnBlankPoint", PyvtkUniformGrid_UnBlankPoint, METH_VARARGS,
   "V.UnBlankPoint(int)\nC++: virtual void UnBlankPoint(vtkIdType ptId)\nV.UnBlankPoint(int, int, int)\nC++: virtual void UnBlankPoint(const int i, const int j,\n    const int k)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff points in the structured grid, and hence the cells connected\nto them. These methods should be called only after the dimensions\nof the grid are set.\n"},
  {"BlankCell", PyvtkUniformGrid_BlankCell, METH_VARARGS,
   "V.BlankCell(int)\nC++: virtual void BlankCell(vtkIdType ptId)\nV.BlankCell(int, int, int)\nC++: virtual void BlankCell(const int i, const int j, const int k)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff cells in the structured grid. These methods should be called\nonly after the dimensions of the grid are set.\n"},
  {"UnBlankCell", PyvtkUniformGrid_UnBlankCell, METH_VARARGS,
   "V.UnBlankCell(int)\nC++: virtual void UnBlankCell(vtkIdType ptId)\nV.UnBlankCell(int, int, int)\nC++: virtual void UnBlankCell(const int i, const int j,\n    const int k)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff cells in the structured grid. These methods should be called\nonly after the dimensions of the grid are set.\n"},
  {"HasAnyBlankCells", PyvtkUniformGrid_HasAnyBlankCells, METH_VARARGS,
   "V.HasAnyBlankCells() -> bool\nC++: bool HasAnyBlankCells() override;\n\nReturns 1 if there is any visibility constraint on the cells, 0\notherwise.\n"},
  {"HasAnyBlankPoints", PyvtkUniformGrid_HasAnyBlankPoints, METH_VARARGS,
   "V.HasAnyBlankPoints() -> bool\nC++: bool HasAnyBlankPoints() override;\n\nReturns 1 if there is any visibility constraint on the points, 0\notherwise.\n"},
  {"IsPointVisible", PyvtkUniformGrid_IsPointVisible, METH_VARARGS,
   "V.IsPointVisible(int) -> int\nC++: virtual unsigned char IsPointVisible(vtkIdType ptId)\n\nReturn non-zero value if specified point is visible. These\nmethods should be called only after the dimensions of the grid\nare set.\n"},
  {"IsCellVisible", PyvtkUniformGrid_IsCellVisible, METH_VARARGS,
   "V.IsCellVisible(int) -> int\nC++: virtual unsigned char IsCellVisible(vtkIdType cellId)\n\nReturn non-zero value if specified cell is visible. These methods\nshould be called only after the dimensions of the grid are set.\n"},
  {"NewImageDataCopy", PyvtkUniformGrid_NewImageDataCopy, METH_VARARGS,
   "V.NewImageDataCopy() -> vtkImageData\nC++: virtual vtkImageData *NewImageDataCopy()\n\n"},
  {"GetData", PyvtkUniformGrid_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkUniformGrid\nC++: static vtkUniformGrid *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkUniformGrid\nC++: static vtkUniformGrid *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUniformGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkUniformGrid", // tp_name
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
  PyvtkUniformGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUniformGrid_StaticNew()
{
  return vtkUniformGrid::New();
}

PyObject *PyvtkUniformGrid_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUniformGrid_Type, PyvtkUniformGrid_Methods,
    "vtkUniformGrid",
 &PyvtkUniformGrid_StaticNew);

  PyTypeObject *pytype = &PyvtkUniformGrid_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageData_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUniformGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUniformGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUniformGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

