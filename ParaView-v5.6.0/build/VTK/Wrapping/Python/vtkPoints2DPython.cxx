// python wrapper for vtkPoints2D
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
#include "vtkPoints2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPoints2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPoints2D_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPoints2D_Doc =
  "vtkPoints2D - represent and manipulate 2D points\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPoints2D represents 2D points. The data model for vtkPoints2D is\n"
  "an array of vx-vy doublets accessible by (point or cell) id.\n\n";


static PyObject *
PyvtkPoints2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPoints2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPoints2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPoints2D *tempr = vtkPoints2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPoints2D::NewInstance());

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
PyvtkPoints2D_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkPoints2D::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPoints2D::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

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
      op->vtkPoints2D::SetData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkPoints2D::GetData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkPoints2D::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

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
      op->vtkPoints2D::SetDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToBit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToBit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToBit();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToBit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToChar();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedChar();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToShort();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedShort();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToInt();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedInt();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToLong();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedLong();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToFloat();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToDouble();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkPoints2D::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkPoints2D::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkPoints2D::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkPoints2D::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkPoints2D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkPoints2D::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkPoints2D::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint(temp0) :
      op->vtkPoints2D::GetPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
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
      op->vtkPoints2D::GetPoint(temp0, temp1);
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
PyvtkPoints2D_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPoints2D_GetPoint_s1(self, args);
    case 2:
      return PyvtkPoints2D_GetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return nullptr;
}



static PyObject *
PyvtkPoints2D_SetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
  const size_t size1 = 2;
  double temp1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetPoint(temp0, temp1);
    }
    else
    {
      op->vtkPoints2D::SetPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_SetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
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
      op->SetPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPoints2D::SetPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_SetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPoints2D_SetPoint_s1(self, args);
    case 3:
      return PyvtkPoints2D_SetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint");
  return nullptr;
}



static PyObject *
PyvtkPoints2D_InsertPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
  const size_t size1 = 2;
  double temp1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->InsertPoint(temp0, temp1);
    }
    else
    {
      op->vtkPoints2D::InsertPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_InsertPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
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
      op->InsertPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPoints2D::InsertPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_InsertPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPoints2D_InsertPoint_s1(self, args);
    case 3:
      return PyvtkPoints2D_InsertPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertPoint");
  return nullptr;
}



static PyObject *
PyvtkPoints2D_InsertNextPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextPoint(temp0) :
      op->vtkPoints2D::InsertNextPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_InsertNextPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->InsertNextPoint(temp0, temp1) :
      op->vtkPoints2D::InsertNextPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_InsertNextPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPoints2D_InsertNextPoint_s1(self, args);
    case 2:
      return PyvtkPoints2D_InsertNextPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextPoint");
  return nullptr;
}



static PyObject *
PyvtkPoints2D_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemovePoint(temp0);
    }
    else
    {
      op->vtkPoints2D::RemovePoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

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
      op->vtkPoints2D::SetNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Resize(temp0) :
      op->vtkPoints2D::Resize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkPoints2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->GetPoints(temp0, temp1);
    }
    else
    {
      op->vtkPoints2D::GetPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeBounds();
    }
    else
    {
      op->vtkPoints2D::ComputeBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPoints2D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
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
      op->vtkPoints2D::GetBounds(temp0);
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
PyvtkPoints2D_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPoints2D_GetBounds_s1(self, args);
    case 1:
      return PyvtkPoints2D_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyMethodDef PyvtkPoints2D_Methods[] = {
  {"IsTypeOf", PyvtkPoints2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPoints2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPoints2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPoints2D\nC++: static vtkPoints2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPoints2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPoints2D\nC++: vtkPoints2D *NewInstance()\n\n"},
  {"Allocate", PyvtkPoints2D_Allocate, METH_VARARGS,
   "V.Allocate(int, int) -> int\nC++: virtual int Allocate(vtkIdType sz, vtkIdType ext=1000)\n\nAllocate initial memory size. ext is no longer used.\n"},
  {"Initialize", PyvtkPoints2D_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize()\n\nReturn object to instantiated state.\n"},
  {"SetData", PyvtkPoints2D_SetData, METH_VARARGS,
   "V.SetData(vtkDataArray)\nC++: virtual void SetData(vtkDataArray *)\n\nSet/Get the underlying data array. This function must be\nimplemented in a concrete subclass to check for consistency. (The\ntuple size must match the type of data. For example, 3-tuple data\narray can be assigned to a vector, normal, or points object, but\nnot a tensor object, which has a tuple dimension of 9. Scalars,\non the other hand, can have tuple dimension from 1-4, depending\non the type of scalar.)\n"},
  {"GetData", PyvtkPoints2D_GetData, METH_VARARGS,
   "V.GetData() -> vtkDataArray\nC++: vtkDataArray *GetData()\n\n"},
  {"GetDataType", PyvtkPoints2D_GetDataType, METH_VARARGS,
   "V.GetDataType() -> int\nC++: virtual int GetDataType()\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkSetGet.h.\n"},
  {"SetDataType", PyvtkPoints2D_SetDataType, METH_VARARGS,
   "V.SetDataType(int)\nC++: virtual void SetDataType(int dataType)\n\nSpecify the underlying data type of the object.\n"},
  {"SetDataTypeToBit", PyvtkPoints2D_SetDataTypeToBit, METH_VARARGS,
   "V.SetDataTypeToBit()\nC++: void SetDataTypeToBit()\n\n"},
  {"SetDataTypeToChar", PyvtkPoints2D_SetDataTypeToChar, METH_VARARGS,
   "V.SetDataTypeToChar()\nC++: void SetDataTypeToChar()\n\n"},
  {"SetDataTypeToUnsignedChar", PyvtkPoints2D_SetDataTypeToUnsignedChar, METH_VARARGS,
   "V.SetDataTypeToUnsignedChar()\nC++: void SetDataTypeToUnsignedChar()\n\n"},
  {"SetDataTypeToShort", PyvtkPoints2D_SetDataTypeToShort, METH_VARARGS,
   "V.SetDataTypeToShort()\nC++: void SetDataTypeToShort()\n\n"},
  {"SetDataTypeToUnsignedShort", PyvtkPoints2D_SetDataTypeToUnsignedShort, METH_VARARGS,
   "V.SetDataTypeToUnsignedShort()\nC++: void SetDataTypeToUnsignedShort()\n\n"},
  {"SetDataTypeToInt", PyvtkPoints2D_SetDataTypeToInt, METH_VARARGS,
   "V.SetDataTypeToInt()\nC++: void SetDataTypeToInt()\n\n"},
  {"SetDataTypeToUnsignedInt", PyvtkPoints2D_SetDataTypeToUnsignedInt, METH_VARARGS,
   "V.SetDataTypeToUnsignedInt()\nC++: void SetDataTypeToUnsignedInt()\n\n"},
  {"SetDataTypeToLong", PyvtkPoints2D_SetDataTypeToLong, METH_VARARGS,
   "V.SetDataTypeToLong()\nC++: void SetDataTypeToLong()\n\n"},
  {"SetDataTypeToUnsignedLong", PyvtkPoints2D_SetDataTypeToUnsignedLong, METH_VARARGS,
   "V.SetDataTypeToUnsignedLong()\nC++: void SetDataTypeToUnsignedLong()\n\n"},
  {"SetDataTypeToFloat", PyvtkPoints2D_SetDataTypeToFloat, METH_VARARGS,
   "V.SetDataTypeToFloat()\nC++: void SetDataTypeToFloat()\n\n"},
  {"SetDataTypeToDouble", PyvtkPoints2D_SetDataTypeToDouble, METH_VARARGS,
   "V.SetDataTypeToDouble()\nC++: void SetDataTypeToDouble()\n\n"},
  {"GetVoidPointer", PyvtkPoints2D_GetVoidPointer, METH_VARARGS,
   "V.GetVoidPointer(int) -> void\nC++: void *GetVoidPointer(const int id)\n\nReturn a void pointer. For image pipeline interface and other\nspecial pointer manipulation.\n"},
  {"Squeeze", PyvtkPoints2D_Squeeze, METH_VARARGS,
   "V.Squeeze()\nC++: virtual void Squeeze()\n\nReclaim any extra memory.\n"},
  {"Reset", PyvtkPoints2D_Reset, METH_VARARGS,
   "V.Reset()\nC++: virtual void Reset()\n\nMake object look empty but do not delete memory.\n"},
  {"DeepCopy", PyvtkPoints2D_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkPoints2D)\nC++: virtual void DeepCopy(vtkPoints2D *ad)\n\nDifferent ways to copy data. Shallow copy does reference count\n(i.e., assigns pointers and updates reference count); deep copy\nruns through entire data array assigning values.\n"},
  {"ShallowCopy", PyvtkPoints2D_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkPoints2D)\nC++: virtual void ShallowCopy(vtkPoints2D *ad)\n\nDifferent ways to copy data. Shallow copy does reference count\n(i.e., assigns pointers and updates reference count); deep copy\nruns through entire data array assigning values.\n"},
  {"GetActualMemorySize", PyvtkPoints2D_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kibibytes (1024 bytes) consumed by this\nattribute data. Used to support streaming and reading/writing\ndata. The value returned is guaranteed to be greater than or\nequal to the memory required to actually represent the data\nrepresented by this object. The information returned is valid\nonly after the pipeline has been updated.\n"},
  {"GetNumberOfPoints", PyvtkPoints2D_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nReturn number of points in array.\n"},
  {"GetPoint", PyvtkPoints2D_GetPoint, METH_VARARGS,
   "V.GetPoint(int) -> (float, float)\nC++: double *GetPoint(vtkIdType id)\nV.GetPoint(int, [float, float])\nC++: void GetPoint(vtkIdType id, double x[2])\n\nReturn a pointer to a double point x[2] for a specific id.\nWARNING: Just don't use this error-prone method, the returned\npointer and its values are only valid as long as another method\ninvocation is not performed. Prefer GetPoint() with the return\nvalue in argument.\n"},
  {"SetPoint", PyvtkPoints2D_SetPoint, METH_VARARGS,
   "V.SetPoint(int, (float, float))\nC++: void SetPoint(vtkIdType id, const double x[2])\nV.SetPoint(int, float, float)\nC++: void SetPoint(vtkIdType id, double x, double y)\n\n"},
  {"InsertPoint", PyvtkPoints2D_InsertPoint, METH_VARARGS,
   "V.InsertPoint(int, (float, float))\nC++: void InsertPoint(vtkIdType id, const double x[2])\nV.InsertPoint(int, float, float)\nC++: void InsertPoint(vtkIdType id, double x, double y)\n\n"},
  {"InsertNextPoint", PyvtkPoints2D_InsertNextPoint, METH_VARARGS,
   "V.InsertNextPoint((float, float)) -> int\nC++: vtkIdType InsertNextPoint(const double x[2])\nV.InsertNextPoint(float, float) -> int\nC++: vtkIdType InsertNextPoint(double x, double y)\n\n"},
  {"RemovePoint", PyvtkPoints2D_RemovePoint, METH_VARARGS,
   "V.RemovePoint(int)\nC++: void RemovePoint(vtkIdType id)\n\nRemove point described by its id\n"},
  {"SetNumberOfPoints", PyvtkPoints2D_SetNumberOfPoints, METH_VARARGS,
   "V.SetNumberOfPoints(int)\nC++: void SetNumberOfPoints(vtkIdType numPoints)\n\nSpecify the number of points for this object to hold. Does an\nallocation as well as setting the MaxId ivar. Used in conjunction\nwith SetPoint() method for fast insertion.\n"},
  {"Resize", PyvtkPoints2D_Resize, METH_VARARGS,
   "V.Resize(int) -> int\nC++: int Resize(vtkIdType numPoints)\n\nResize the internal array while conserving the data.  Returns 1\nif resizing succeeded and 0 otherwise.\n"},
  {"GetPoints", PyvtkPoints2D_GetPoints, METH_VARARGS,
   "V.GetPoints(vtkIdList, vtkPoints2D)\nC++: void GetPoints(vtkIdList *ptId, vtkPoints2D *fp)\n\nGiven a list of pt ids, return an array of points.\n"},
  {"ComputeBounds", PyvtkPoints2D_ComputeBounds, METH_VARARGS,
   "V.ComputeBounds()\nC++: virtual void ComputeBounds()\n\nDetermine (xmin,xmax, ymin,ymax) bounds of points.\n"},
  {"GetBounds", PyvtkPoints2D_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float)\nC++: double *GetBounds()\nV.GetBounds([float, float, float, float])\nC++: void GetBounds(double bounds[4])\n\nReturn the bounds of the points.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPoints2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkPoints2D", // tp_name
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
  PyvtkPoints2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPoints2D_StaticNew()
{
  return vtkPoints2D::New();
}

PyObject *PyvtkPoints2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPoints2D_Type, PyvtkPoints2D_Methods,
    "vtkPoints2D",
 &PyvtkPoints2D_StaticNew);

  PyTypeObject *pytype = &PyvtkPoints2D_Type;

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

void PyVTKAddFile_vtkPoints2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPoints2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPoints2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

