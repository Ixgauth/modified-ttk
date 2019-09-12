// python wrapper for vtkStructuredData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStructuredData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStructuredData_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkStructuredData_Doc =
  "vtkStructuredData - Singleton class for topologically regular data\n\n"
  "Superclass: vtkObject\n\n"
  "vtkStructuredData is a singleton class that provides an interface for\n"
  "topologically regular data. Regular data is data that can be accessed\n"
  "in rectangular fashion using an i-j-k index. A finite difference\n"
  "grid, a volume, or a pixmap are all considered regular.\n\n"
  "@sa\n"
  "vtkStructuredGrid vtkUniformGrid vtkRectilinearGrid\n"
  "vtkRectilinearGrid\n\n";


static PyObject *
PyvtkStructuredData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredData *op = static_cast<vtkStructuredData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredData *tempr = vtkStructuredData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredData *op = static_cast<vtkStructuredData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredData::NewInstance());

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
PyvtkStructuredData_SetDimensions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDimensions");

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = vtkStructuredData::SetDimensions(temp0, temp1);

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
PyvtkStructuredData_SetExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetExtent");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = vtkStructuredData::SetExtent(temp0, temp1);

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
PyvtkStructuredData_GetDataDescription(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDescription");

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = vtkStructuredData::GetDataDescription(temp0);

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
PyvtkStructuredData_GetDataDescriptionFromExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDescriptionFromExtent");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = vtkStructuredData::GetDataDescriptionFromExtent(temp0);

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
PyvtkStructuredData_GetDataDimension_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDimension");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredData::GetDataDimension(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredData_GetDataDimension_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDimension");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = vtkStructuredData::GetDataDimension(temp0);

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

static PyMethodDef PyvtkStructuredData_GetDataDimension_Methods[] = {
  {nullptr, PyvtkStructuredData_GetDataDimension_s1, METH_VARARGS | METH_STATIC,
   "i"},
  {nullptr, PyvtkStructuredData_GetDataDimension_s2, METH_VARARGS | METH_STATIC,
   "P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkStructuredData_GetDataDimension(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStructuredData_GetDataDimension_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataDimension");
  return nullptr;
}



static PyObject *
PyvtkStructuredData_GetNumberOfPoints(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfPoints");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  int temp1 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = vtkStructuredData::GetNumberOfPoints(temp0, temp1);

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
PyvtkStructuredData_GetNumberOfCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfCells");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  int temp1 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = vtkStructuredData::GetNumberOfCells(temp0, temp1);

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
PyvtkStructuredData_GetCellExtentFromPointExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellExtentFromPointExtent");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    vtkStructuredData::GetCellExtentFromPointExtent(temp0, temp1, temp2);

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_GetDimensionsFromExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDimensionsFromExtent");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    vtkStructuredData::GetDimensionsFromExtent(temp0, temp1, temp2);

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_GetCellDimensionsFromExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellDimensionsFromExtent");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    vtkStructuredData::GetCellDimensionsFromExtent(temp0, temp1, temp2);

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_GetCellDimensionsFromPointDimensions(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellDimensionsFromPointDimensions");

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    vtkStructuredData::GetCellDimensionsFromPointDimensions(temp0, temp1);

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_GetLocalStructuredCoordinates(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLocalStructuredCoordinates");

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  int temp3 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    vtkStructuredData::GetLocalStructuredCoordinates(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_GetGlobalStructuredCoordinates(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalStructuredCoordinates");

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  int temp3 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    vtkStructuredData::GetGlobalStructuredCoordinates(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_GetCellPoints(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellPoints");

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  int temp2;
  const size_t size3 = 3;
  int temp3[3];
  int save3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    vtkStructuredData::GetCellPoints(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_GetPointCells(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointCells");

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    vtkStructuredData::GetPointCells(temp0, temp1, temp2);

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
PyvtkStructuredData_GetCellNeighbors_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellNeighbors");

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  const size_t size3 = 3;
  int temp3[3];
  int save3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    vtkStructuredData::GetCellNeighbors(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_GetCellNeighbors_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellNeighbors");

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  const size_t size3 = 3;
  int temp3[3];
  int save3[3];
  const size_t size4 = 3;
  int temp4[3];
  int save4[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    vtkStructuredData::GetCellNeighbors(temp0, temp1, temp2, temp3, temp4);

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
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredData_GetCellNeighbors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkStructuredData_GetCellNeighbors_s1(self, args);
    case 5:
      return PyvtkStructuredData_GetCellNeighbors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellNeighbors");
  return nullptr;
}



static PyObject *
PyvtkStructuredData_ComputePointIdForExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointIdForExtent");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    vtkIdType tempr = vtkStructuredData::ComputePointIdForExtent(temp0, temp1, temp2);

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
PyvtkStructuredData_ComputeCellIdForExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellIdForExtent");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    vtkIdType tempr = vtkStructuredData::ComputeCellIdForExtent(temp0, temp1, temp2);

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
PyvtkStructuredData_ComputePointId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointId");

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    vtkIdType tempr = vtkStructuredData::ComputePointId(temp0, temp1, temp2);

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
PyvtkStructuredData_ComputeCellId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellId");

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    vtkIdType tempr = vtkStructuredData::ComputeCellId(temp0, temp1, temp2);

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
PyvtkStructuredData_ComputeCellStructuredCoordsForExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellStructuredCoordsForExtent");

  vtkIdType temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  int temp3 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    vtkStructuredData::ComputeCellStructuredCoordsForExtent(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_ComputeCellStructuredCoords(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellStructuredCoords");

  vtkIdType temp0;
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  int temp3 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    vtkStructuredData::ComputeCellStructuredCoords(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_ComputePointStructuredCoordsForExtent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointStructuredCoordsForExtent");

  vtkIdType temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  int temp3 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    vtkStructuredData::ComputePointStructuredCoordsForExtent(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_ComputePointStructuredCoords(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointStructuredCoords");

  vtkIdType temp0;
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  int temp3 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    vtkStructuredData::ComputePointStructuredCoords(temp0, temp1, temp2, temp3);

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

static PyMethodDef PyvtkStructuredData_Methods[] = {
  {"IsTypeOf", PyvtkStructuredData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStructuredData\nC++: static vtkStructuredData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStructuredData\nC++: vtkStructuredData *NewInstance()\n\n"},
  {"SetDimensions", PyvtkStructuredData_SetDimensions, METH_VARARGS,
   "V.SetDimensions([int, int, int], [int, int, int]) -> int\nC++: static int SetDimensions(int inDim[3], int dim[3])\n\nSpecify the dimensions of a regular, rectangular dataset. The\ninput is the new dimensions (inDim) and the current dimensions\n(dim). The function returns the dimension of the dataset (0-3D).\nIf the dimensions are improperly specified a -1 is returned. If\nthe dimensions are unchanged, a value of 100 is returned.\n"},
  {"SetExtent", PyvtkStructuredData_SetExtent, METH_VARARGS,
   "V.SetExtent([int, int, int, int, int, int], [int, int, int, int,\n    int, int]) -> int\nC++: static int SetExtent(int inExt[6], int ext[6])\n\nSpecify the dimensions of a regular, rectangular dataset. The\ninput is the new dimensions (inDim) and the current dimensions\n(dim). The function returns the dimension of the dataset (0-3D).\nIf the dimensions are improperly specified a -1 is returned. If\nthe dimensions are unchanged, a value of 100 is returned.\n"},
  {"GetDataDescription", PyvtkStructuredData_GetDataDescription, METH_VARARGS,
   "V.GetDataDescription([int, int, int]) -> int\nC++: static int GetDataDescription(int dims[3])\n\nReturns the data description given the dimensions (eg.\nVTK_SINGLE_POINT, VTK_X_LINE, VTK_XY_PLANE etc.)\n"},
  {"GetDataDescriptionFromExtent", PyvtkStructuredData_GetDataDescriptionFromExtent, METH_VARARGS,
   "V.GetDataDescriptionFromExtent([int, int, int, int, int, int])\n    -> int\nC++: static int GetDataDescriptionFromExtent(int ext[6])\n\nReturns the data description given the dimensions (eg.\nVTK_SINGLE_POINT, VTK_X_LINE, VTK_XY_PLANE etc.)\n"},
  {"GetDataDimension", PyvtkStructuredData_GetDataDimension, METH_VARARGS,
   "V.GetDataDimension(int) -> int\nC++: static int GetDataDimension(int dataDescription)\nV.GetDataDimension([int, int, int, int, int, int]) -> int\nC++: static int GetDataDimension(int ext[6])\n\nReturn the topological dimension of the data (e.g., 0, 1, 2, or\n3D).\n"},
  {"GetNumberOfPoints", PyvtkStructuredData_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints([int, int, int, int, int, int], int) -> int\nC++: static vtkIdType GetNumberOfPoints(int ext[6],\n    int dataDescription=VTK_EMPTY)\n\nGiven the grid extent, this method returns the total number of\npoints within the extent. The dataDescription field is not used.\n"},
  {"GetNumberOfCells", PyvtkStructuredData_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells([int, int, int, int, int, int], int) -> int\nC++: static vtkIdType GetNumberOfCells(int ext[6],\n    int dataDescription=VTK_EMPTY)\n\nGiven the grid extent, this method returns the total number of\ncells within the extent. The dataDescription field is not used.\n"},
  {"GetCellExtentFromPointExtent", PyvtkStructuredData_GetCellExtentFromPointExtent, METH_VARARGS,
   "V.GetCellExtentFromPointExtent([int, int, int, int, int, int],\n    [int, int, int, int, int, int], int)\nC++: static void GetCellExtentFromPointExtent(int pntExtent[6],\n    int cellExtent[6], int dataDescription=VTK_EMPTY)\n\nGiven the point extent of a grid, this method computes the\ncorresponding cell extent for the grid. The dataDescription field\nis not used.\n"},
  {"GetDimensionsFromExtent", PyvtkStructuredData_GetDimensionsFromExtent, METH_VARARGS,
   "V.GetDimensionsFromExtent([int, int, int, int, int, int], [int,\n    int, int], int)\nC++: static void GetDimensionsFromExtent(int ext[6], int dims[3],\n    int dataDescription=VTK_EMPTY)\n\nComputes the structured grid dimensions based on the given\nextent. The dataDescription field is not used.\n"},
  {"GetCellDimensionsFromExtent", PyvtkStructuredData_GetCellDimensionsFromExtent, METH_VARARGS,
   "V.GetCellDimensionsFromExtent([int, int, int, int, int, int],\n    [int, int, int], int)\nC++: static void GetCellDimensionsFromExtent(int ext[6],\n    int celldims[3], int dataDescription=VTK_EMPTY)\n\nReturns the cell dimensions, i.e., the number of cells along the\ni,j,k for the grid with the given grid extent. Note, the grid\nextent is the number of points. The dataDescription field is not\nused.\n"},
  {"GetCellDimensionsFromPointDimensions", PyvtkStructuredData_GetCellDimensionsFromPointDimensions, METH_VARARGS,
   "V.GetCellDimensionsFromPointDimensions([int, int, int], [int, int,\n     int])\nC++: static void GetCellDimensionsFromPointDimensions(\n    int pntdims[3], int cellDims[3])\n\nGiven the dimensions of the grid, in pntdims, this method returns\nthe corresponding cell dimensions for the given grid. The\ndataDescription field is not used.\n"},
  {"GetLocalStructuredCoordinates", PyvtkStructuredData_GetLocalStructuredCoordinates, METH_VARARGS,
   "V.GetLocalStructuredCoordinates([int, int, int], [int, int, int,\n    int, int, int], [int, int, int], int)\nC++: static void GetLocalStructuredCoordinates(int ijk[3],\n    int ext[6], int lijk[3], int dataDescription=VTK_EMPTY)\n\nGiven the global structured coordinates for a point or cell, ijk,\nw.r.t. as well as, the global sub-grid cell or point extent, this\nmethod computes the corresponding local structured coordinates,\nlijk, starting from 0. The dataDescription argument is not used.\n"},
  {"GetGlobalStructuredCoordinates", PyvtkStructuredData_GetGlobalStructuredCoordinates, METH_VARARGS,
   "V.GetGlobalStructuredCoordinates([int, int, int], [int, int, int,\n    int, int, int], [int, int, int], int)\nC++: static void GetGlobalStructuredCoordinates(int lijk[3],\n    int ext[6], int ijk[3], int dataDescription=VTK_EMPTY)\n\nGiven local structured coordinates, and the corresponding global\nsub-grid extent, this method computes the global ijk coordinates.\nThe dataDescription parameter is not used.\n"},
  {"GetCellPoints", PyvtkStructuredData_GetCellPoints, METH_VARARGS,
   "V.GetCellPoints(int, vtkIdList, int, [int, int, int])\nC++: static void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds,\n     int dataDescription, int dim[3])\n\nGet the points defining a cell. (See vtkDataSet for more info.)\n"},
  {"GetPointCells", PyvtkStructuredData_GetPointCells, METH_VARARGS,
   "V.GetPointCells(int, vtkIdList, [int, int, int])\nC++: static void GetPointCells(vtkIdType ptId, vtkIdList *cellIds,\n     int dim[3])\n\nGet the cells using a point. (See vtkDataSet for more info.)\n"},
  {"GetCellNeighbors", PyvtkStructuredData_GetCellNeighbors, METH_VARARGS,
   "V.GetCellNeighbors(int, vtkIdList, vtkIdList, [int, int, int])\nC++: static void GetCellNeighbors(vtkIdType cellId,\n    vtkIdList *ptIds, vtkIdList *cellIds, int dim[3])\nV.GetCellNeighbors(int, vtkIdList, vtkIdList, [int, int, int],\n    [int, int, int])\nC++: static void GetCellNeighbors(vtkIdType cellId,\n    vtkIdList *ptIds, vtkIdList *cellIds, int dim[3],\n    int seedLoc[3])\n\nGet the cells using the points ptIds, exclusive of the cell\ncellId. (See vtkDataSet for more info.)\n"},
  {"ComputePointIdForExtent", PyvtkStructuredData_ComputePointIdForExtent, METH_VARARGS,
   "V.ComputePointIdForExtent([int, int, int, int, int, int], [int,\n    int, int], int) -> int\nC++: static vtkIdType ComputePointIdForExtent(int extent[6],\n    int ijk[3], int dataDescription=VTK_EMPTY)\n\nGiven a location in structured coordinates (i-j-k), and the\nextent of the structured dataset, return the point id. The\ndataDescription argument is not used.\n"},
  {"ComputeCellIdForExtent", PyvtkStructuredData_ComputeCellIdForExtent, METH_VARARGS,
   "V.ComputeCellIdForExtent([int, int, int, int, int, int], [int,\n    int, int], int) -> int\nC++: static vtkIdType ComputeCellIdForExtent(int extent[6],\n    int ijk[3], int dataDescription=VTK_EMPTY)\n\nGiven a location in structured coordinates (i-j-k), and the\nextent of the structured dataset, return the point id. The\ndataDescription argument is not used.\n"},
  {"ComputePointId", PyvtkStructuredData_ComputePointId, METH_VARARGS,
   "V.ComputePointId([int, int, int], [int, int, int], int) -> int\nC++: static vtkIdType ComputePointId(int dim[3], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven a location in structured coordinates (i-j-k), and the\ndimensions of the structured dataset, return the point id.  This\nmethod does not adjust for the beginning of the extent. The\ndataDescription argument is not used.\n"},
  {"ComputeCellId", PyvtkStructuredData_ComputeCellId, METH_VARARGS,
   "V.ComputeCellId([int, int, int], [int, int, int], int) -> int\nC++: static vtkIdType ComputeCellId(int dim[3], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven a location in structured coordinates (i-j-k), and the\ndimensions of the structured dataset, return the cell id.  This\nmethod does not adjust for the beginning of the extent. The\ndataDescription argument is not used.\n"},
  {"ComputeCellStructuredCoordsForExtent", PyvtkStructuredData_ComputeCellStructuredCoordsForExtent, METH_VARARGS,
   "V.ComputeCellStructuredCoordsForExtent(int, [int, int, int, int,\n    int, int], [int, int, int], int)\nC++: static void ComputeCellStructuredCoordsForExtent(\n    const vtkIdType cellIdx, int ext[6], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven the global grid extent and the linear index of a cell\nwithin the grid extent, this method computes the corresponding\nstructured coordinates of the given cell. This method adjusts for\nthe beginning of the extent. The dataDescription argument is not\nused.\n"},
  {"ComputeCellStructuredCoords", PyvtkStructuredData_ComputeCellStructuredCoords, METH_VARARGS,
   "V.ComputeCellStructuredCoords(int, [int, int, int], [int, int,\n    int], int)\nC++: static void ComputeCellStructuredCoords(\n    const vtkIdType cellId, int dim[3], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven a cellId and grid dimensions 'dim', get the structured\ncoordinates (i-j-k). This method does not adjust for the\nbeginning of the extent. The dataDescription argument is not\nused.\n"},
  {"ComputePointStructuredCoordsForExtent", PyvtkStructuredData_ComputePointStructuredCoordsForExtent, METH_VARARGS,
   "V.ComputePointStructuredCoordsForExtent(int, [int, int, int, int,\n    int, int], [int, int, int], int)\nC++: static void ComputePointStructuredCoordsForExtent(\n    const vtkIdType ptId, int ext[6], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven a pointId and the grid extent ext, get the structured\ncoordinates (i-j-k). This method adjusts for the beginning of the\nextent. The dataDescription argument is not used.\n"},
  {"ComputePointStructuredCoords", PyvtkStructuredData_ComputePointStructuredCoords, METH_VARARGS,
   "V.ComputePointStructuredCoords(int, [int, int, int], [int, int,\n    int], int)\nC++: static void ComputePointStructuredCoords(\n    const vtkIdType ptId, int dim[3], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven a pointId and grid dimensions 'dim', get the structured\ncoordinates (i-j-k). This method does not adjust for the\nbeginning of the extent. The dataDescription argument is not\nused.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStructuredData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkStructuredData", // tp_name
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
  PyvtkStructuredData_Doc, // tp_doc
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

PyObject *PyvtkStructuredData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStructuredData_Type, PyvtkStructuredData_Methods,
    "vtkStructuredData",
 nullptr);

  PyTypeObject *pytype = &PyvtkStructuredData_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredData", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 10; c++)
  {
    static const struct { const char *name; int value; }
      constants[10] = {
        { "VTK_UNCHANGED", 0 },
        { "VTK_SINGLE_POINT", 1 },
        { "VTK_X_LINE", 2 },
        { "VTK_Y_LINE", 3 },
        { "VTK_Z_LINE", 4 },
        { "VTK_XY_PLANE", 5 },
        { "VTK_YZ_PLANE", 6 },
        { "VTK_XZ_PLANE", 7 },
        { "VTK_XYZ_GRID", 8 },
        { "VTK_EMPTY", 9 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

