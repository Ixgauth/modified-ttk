// python wrapper for vtkPoints
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
#include "vtkPoints.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPoints(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPoints_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPoints_Doc =
  "vtkPoints - represent and manipulate 3D points\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPoints represents 3D points. The data model for vtkPoints is an\n"
  "array of vx-vy-vz triplets accessible by (point or cell) id.\n\n";


static PyObject *
PyvtkPoints_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPoints *tempr = vtkPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPoints::NewInstance());

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
PyvtkPoints_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkPoints::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPoints::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetData(temp0);
    }
    else
    {
      op->vtkPoints::SetData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkPoints::GetData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkPoints::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataType(temp0);
    }
    else
    {
      op->vtkPoints::SetDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToBit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToBit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToBit();
    }
    else
    {
      op->vtkPoints::SetDataTypeToBit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToChar();
    }
    else
    {
      op->vtkPoints::SetDataTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedChar();
    }
    else
    {
      op->vtkPoints::SetDataTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToShort();
    }
    else
    {
      op->vtkPoints::SetDataTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedShort();
    }
    else
    {
      op->vtkPoints::SetDataTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToInt();
    }
    else
    {
      op->vtkPoints::SetDataTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedInt();
    }
    else
    {
      op->vtkPoints::SetDataTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToLong();
    }
    else
    {
      op->vtkPoints::SetDataTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedLong();
    }
    else
    {
      op->vtkPoints::SetDataTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToFloat();
    }
    else
    {
      op->vtkPoints::SetDataTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_SetDataTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToDouble();
    }
    else
    {
      op->vtkPoints::SetDataTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkPoints::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkPoints::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkPoints::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkPoints::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkPoints::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkPoints::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkPoints::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfPoints()),
                      "0 <= id && id < GetNumberOfPoints()"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint(temp0) :
      op->vtkPoints::GetPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPoints_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfPoints()),
                      "0 <= id && id < GetNumberOfPoints()"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetPoint(temp0, temp1);
    }
    else
    {
      op->vtkPoints::GetPoint(temp0, temp1);
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
PyvtkPoints_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPoints_GetPoint_s1(self, args);
    case 2:
      return PyvtkPoints_GetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return nullptr;
}



static PyObject *
PyvtkPoints_SetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfPoints()),
                      "0 <= id && id < GetNumberOfPoints()"))
  {
    if (ap.IsBound())
    {
      op->SetPoint(temp0, temp1);
    }
    else
    {
      op->vtkPoints::SetPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints_SetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfPoints()),
                      "0 <= id && id < GetNumberOfPoints()"))
  {
    if (ap.IsBound())
    {
      op->SetPoint(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPoints::SetPoint(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints_SetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPoints_SetPoint_s1(self, args);
    case 4:
      return PyvtkPoints_SetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint");
  return nullptr;
}



static PyObject *
PyvtkPoints_InsertPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0), "0 <= id"))
  {
    if (ap.IsBound())
    {
      op->InsertPoint(temp0, temp1);
    }
    else
    {
      op->vtkPoints::InsertPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints_InsertPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.CheckPrecond((0 <= temp0), "0 <= id"))
  {
    if (ap.IsBound())
    {
      op->InsertPoint(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPoints::InsertPoint(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints_InsertPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPoints_InsertPoint_s1(self, args);
    case 4:
      return PyvtkPoints_InsertPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertPoint");
  return nullptr;
}



static PyObject *
PyvtkPoints_InsertPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkPoints *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->InsertPoints(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPoints::InsertPoints(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints_InsertPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkPoints *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->InsertPoints(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPoints::InsertPoints(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints_InsertPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPoints_InsertPoints_s1(self, args);
    case 4:
      return PyvtkPoints_InsertPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertPoints");
  return nullptr;
}



static PyObject *
PyvtkPoints_InsertNextPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextPoint(temp0) :
      op->vtkPoints::InsertNextPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPoints_InsertNextPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

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
      op->InsertNextPoint(temp0, temp1, temp2) :
      op->vtkPoints::InsertNextPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPoints_InsertNextPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPoints_InsertNextPoint_s1(self, args);
    case 3:
      return PyvtkPoints_InsertNextPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextPoint");
  return nullptr;
}



static PyObject *
PyvtkPoints_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPoints(temp0);
    }
    else
    {
      op->vtkPoints::SetNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Resize(temp0) :
      op->vtkPoints::Resize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->GetPoints(temp0, temp1);
    }
    else
    {
      op->vtkPoints::GetPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeBounds();
    }
    else
    {
      op->vtkPoints::ComputeBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPoints::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPoints_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkPoints::GetBounds(temp0);
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
PyvtkPoints_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPoints_GetBounds_s1(self, args);
    case 1:
      return PyvtkPoints_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkPoints_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPoints::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints *op = static_cast<vtkPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkPoints::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPoints_Methods[] = {
  {"IsTypeOf", PyvtkPoints_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPoints_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPoints_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPoints\nC++: static vtkPoints *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPoints_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPoints\nC++: vtkPoints *NewInstance()\n\n"},
  {"Allocate", PyvtkPoints_Allocate, METH_VARARGS,
   "V.Allocate(int, int) -> int\nC++: virtual int Allocate(vtkIdType sz, vtkIdType ext=1000)\n\nAllocate initial memory size. ext is no longer used.\n"},
  {"Initialize", PyvtkPoints_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize()\n\nReturn object to instantiated state.\n"},
  {"SetData", PyvtkPoints_SetData, METH_VARARGS,
   "V.SetData(vtkDataArray)\nC++: virtual void SetData(vtkDataArray *)\n\nSet/Get the underlying data array. This function must be\nimplemented in a concrete subclass to check for consistency. (The\ntuple size must match the type of data. For example, 3-tuple data\narray can be assigned to a vector, normal, or points object, but\nnot a tensor object, which has a tuple dimension of 9. Scalars,\non the other hand, can have tuple dimension from 1-4, depending\non the type of scalar.)\n"},
  {"GetData", PyvtkPoints_GetData, METH_VARARGS,
   "V.GetData() -> vtkDataArray\nC++: vtkDataArray *GetData()\n\n"},
  {"GetDataType", PyvtkPoints_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: virtual int GetDataType()\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkSetGet.h.\n"},
  {"SetDataType", PyvtkPoints_SetDataType, METH_VARARGS,
   "V.SetDataType(int)\nC++: virtual void SetDataType(int dataType)\n\nSpecify the underlying data type of the object.\n"},
  {"SetDataTypeToBit", PyvtkPoints_SetDataTypeToBit, METH_VARARGS,
   "V.SetDataTypeToBit()\nC++: void SetDataTypeToBit()\n\n"},
  {"SetDataTypeToChar", PyvtkPoints_SetDataTypeToChar, METH_VARARGS,
   "V.SetDataTypeToChar()\nC++: void SetDataTypeToChar()\n\n"},
  {"SetDataTypeToUnsignedChar", PyvtkPoints_SetDataTypeToUnsignedChar, METH_VARARGS,
   "V.SetDataTypeToUnsignedChar()\nC++: void SetDataTypeToUnsignedChar()\n\n"},
  {"SetDataTypeToShort", PyvtkPoints_SetDataTypeToShort, METH_VARARGS,
   "V.SetDataTypeToShort()\nC++: void SetDataTypeToShort()\n\n"},
  {"SetDataTypeToUnsignedShort", PyvtkPoints_SetDataTypeToUnsignedShort, METH_VARARGS,
   "V.SetDataTypeToUnsignedShort()\nC++: void SetDataTypeToUnsignedShort()\n\n"},
  {"SetDataTypeToInt", PyvtkPoints_SetDataTypeToInt, METH_VARARGS,
   "V.SetDataTypeToInt()\nC++: void SetDataTypeToInt()\n\n"},
  {"SetDataTypeToUnsignedInt", PyvtkPoints_SetDataTypeToUnsignedInt, METH_VARARGS,
   "V.SetDataTypeToUnsignedInt()\nC++: void SetDataTypeToUnsignedInt()\n\n"},
  {"SetDataTypeToLong", PyvtkPoints_SetDataTypeToLong, METH_VARARGS,
   "V.SetDataTypeToLong()\nC++: void SetDataTypeToLong()\n\n"},
  {"SetDataTypeToUnsignedLong", PyvtkPoints_SetDataTypeToUnsignedLong, METH_VARARGS,
   "V.SetDataTypeToUnsignedLong()\nC++: void SetDataTypeToUnsignedLong()\n\n"},
  {"SetDataTypeToFloat", PyvtkPoints_SetDataTypeToFloat, METH_VARARGS,
   "V.SetDataTypeToFloat()\nC++: void SetDataTypeToFloat()\n\n"},
  {"SetDataTypeToDouble", PyvtkPoints_SetDataTypeToDouble, METH_VARARGS,
   "V.SetDataTypeToDouble()\nC++: void SetDataTypeToDouble()\n\n"},
  {"GetVoidPointer", PyvtkPoints_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(const int id)\n\nReturn a void pointer. For image pipeline interface and other\nspecial pointer manipulation.\n"},
  {"Squeeze", PyvtkPoints_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: virtual void Squeeze()\n\nReclaim any extra memory.\n"},
  {"Reset", PyvtkPoints_Reset, METH_VARARGS,
   "V.Reset()\nC++: virtual void Reset()\n\nMake object look empty but do not delete memory.\n"},
  {"DeepCopy", PyvtkPoints_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkPoints)\nC++: virtual void DeepCopy(vtkPoints *ad)\n\nDifferent ways to copy data. Shallow copy does reference count\n(i.e., assigns pointers and updates reference count); deep copy\nruns through entire data array assigning values.\n"},
  {"ShallowCopy", PyvtkPoints_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkPoints)\nC++: virtual void ShallowCopy(vtkPoints *ad)\n\nDifferent ways to copy data. Shallow copy does reference count\n(i.e., assigns pointers and updates reference count); deep copy\nruns through entire data array assigning values.\n"},
  {"GetActualMemorySize", PyvtkPoints_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kibibytes (1024 bytes) consumed by this\nattribute data. Used to support streaming and reading/writing\ndata. The value returned is guaranteed to be greater than or\nequal to the memory required to actually represent the data\nrepresented by this object. The information returned is valid\nonly after the pipeline has been updated.\n"},
  {"GetNumberOfPoints", PyvtkPoints_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nReturn number of points in array.\n"},
  {"GetPoint", PyvtkPoints_GetPoint, METH_VARARGS,
   "V.GetPoint(int) -> (float, float, float)\nC++: double *GetPoint(vtkIdType id)\nV.GetPoint(int, [float, float, float])\nC++: void GetPoint(vtkIdType id, double x[3])\n\nReturn a pointer to a double point x[3] for a specific id.\nWARNING: Just don't use this error-prone method, the returned\npointer and its values are only valid as long as another method\ninvocation is not performed. Prefer GetPoint() with the return\nvalue in argument.\n"},
  {"SetPoint", PyvtkPoints_SetPoint, METH_VARARGS,
   "V.SetPoint(int, (float, float, float))\nC++: void SetPoint(vtkIdType id, const double x[3])\nV.SetPoint(int, float, float, float)\nC++: void SetPoint(vtkIdType id, double x, double y, double z)\n\n"},
  {"InsertPoint", PyvtkPoints_InsertPoint, METH_VARARGS,
   "V.InsertPoint(int, (float, float, float))\nC++: void InsertPoint(vtkIdType id, const double x[3])\nV.InsertPoint(int, float, float, float)\nC++: void InsertPoint(vtkIdType id, double x, double y, double z)\n\nInsert point into object. Range checking performed and memory\nallocated as necessary.\n"},
  {"InsertPoints", PyvtkPoints_InsertPoints, METH_VARARGS,
   "V.InsertPoints(vtkIdList, vtkIdList, vtkPoints)\nC++: void InsertPoints(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkPoints *source)\nV.InsertPoints(int, int, int, vtkPoints)\nC++: void InsertPoints(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkPoints *source)\n\nCopy the points indexed in srcIds from the source array to the\ntuple locations indexed by dstIds in this array. Note that memory\nallocation is performed as necessary to hold the data.\n"},
  {"InsertNextPoint", PyvtkPoints_InsertNextPoint, METH_VARARGS,
   "V.InsertNextPoint((float, float, float)) -> int\nC++: vtkIdType InsertNextPoint(const double x[3])\nV.InsertNextPoint(float, float, float) -> int\nC++: vtkIdType InsertNextPoint(double x, double y, double z)\n\n"},
  {"SetNumberOfPoints", PyvtkPoints_SetNumberOfPoints, METH_VARARGS,
   "V.SetNumberOfPoints(int)\nC++: void SetNumberOfPoints(vtkIdType numPoints)\n\nSpecify the number of points for this object to hold. Does an\nallocation as well as setting the MaxId ivar. Used in conjunction\nwith SetPoint() method for fast insertion.\n"},
  {"Resize", PyvtkPoints_Resize, METH_VARARGS,
   "V.Resize(int) -> int\nC++: int Resize(vtkIdType numPoints)\n\nResize the internal array while conserving the data.  Returns 1\nif resizing succeeded and 0 otherwise.\n"},
  {"GetPoints", PyvtkPoints_GetPoints, METH_VARARGS,
   "V.GetPoints(vtkIdList, vtkPoints)\nC++: void GetPoints(vtkIdList *ptId, vtkPoints *fp)\n\nGiven a list of pt ids, return an array of points.\n"},
  {"ComputeBounds", PyvtkPoints_ComputeBounds, METH_VARARGS,
   "V.ComputeBounds()\nC++: virtual void ComputeBounds()\n\nDetermine (xmin,xmax, ymin,ymax, zmin,zmax) bounds of points.\n"},
  {"GetBounds", PyvtkPoints_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nReturn the bounds of the points.\n"},
  {"GetMTime", PyvtkPoints_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time of the points.\n"},
  {"Modified", PyvtkPoints_Modified, METH_VARARGS,
   "V.Modified()\nC++: void Modified() override;\n\nUpdate the modification time for this object and its Data. As\nthis object acts as a shell around a DataArray and forwards Set\nmethods it needs to forward Modified as well.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkPoints", // tp_name
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
  PyvtkPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPoints_StaticNew()
{
  return vtkPoints::New();
}

PyObject *PyvtkPoints_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPoints_Type, PyvtkPoints_Methods,
    "vtkPoints",
 &PyvtkPoints_StaticNew);

  PyTypeObject *pytype = &PyvtkPoints_Type;

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

void PyVTKAddFile_vtkPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

