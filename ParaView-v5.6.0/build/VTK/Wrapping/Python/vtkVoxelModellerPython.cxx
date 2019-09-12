// python wrapper for vtkVoxelModeller
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
#include "vtkVoxelModeller.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVoxelModeller(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVoxelModeller_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkVoxelModeller_Doc =
  "vtkVoxelModeller - convert an arbitrary dataset to a voxel\nrepresentation\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkVoxelModeller is a filter that converts an arbitrary data set to a\n"
  "structured point (i.e., voxel) representation. It is very similar to\n"
  "vtkImplicitModeller, except that it doesn't record distance; instead\n"
  "it records occupancy. By default it supports a compact output of 0/1\n"
  "VTK_BIT. Other vtk scalar types can be specified. The Foreground and\n"
  "Background values of the output can also be specified. NOTE: Not all\n"
  "vtk filters/readers/writers support the VTK_BIT scalar type. You may\n"
  "want to use VTK_CHAR as an alternative.\n"
  "@sa\n"
  "vtkImplicitModeller\n\n";


static PyObject *
PyvtkVoxelModeller_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVoxelModeller::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVoxelModeller::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVoxelModeller *tempr = vtkVoxelModeller::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVoxelModeller *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVoxelModeller::NewInstance());

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
PyvtkVoxelModeller_ComputeModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    double tempr = (ap.IsBound() ?
      op->ComputeModelBounds(temp0, temp1) :
      op->vtkVoxelModeller::ComputeModelBounds(temp0, temp1));

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
PyvtkVoxelModeller_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

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
      op->SetSampleDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVoxelModeller::SetSampleDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelModeller_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

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
      op->SetSampleDimensions(temp0);
    }
    else
    {
      op->vtkVoxelModeller::SetSampleDimensions(temp0);
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
PyvtkVoxelModeller_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVoxelModeller_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkVoxelModeller_SetSampleDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return nullptr;
}



static PyObject *
PyvtkVoxelModeller_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkVoxelModeller::GetSampleDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumDistance(temp0);
    }
    else
    {
      op->vtkVoxelModeller::SetMaximumDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetMaximumDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMinValue() :
      op->vtkVoxelModeller::GetMaximumDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetMaximumDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMaxValue() :
      op->vtkVoxelModeller::GetMaximumDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistance() :
      op->vtkVoxelModeller::GetMaximumDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0);
    }
    else
    {
      op->vtkVoxelModeller::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelModeller_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkVoxelModeller::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelModeller_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVoxelModeller_SetModelBounds_s1(self, args);
    case 6:
      return PyvtkVoxelModeller_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}



static PyObject *
PyvtkVoxelModeller_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkVoxelModeller::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarType(temp0);
    }
    else
    {
      op->vtkVoxelModeller::SetScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToFloat();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToDouble();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToInt();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToLong();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedLong();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToShort();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToChar();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToBit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToBit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToBit();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToBit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarType() :
      op->vtkVoxelModeller::GetScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetForegroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForegroundValue(temp0);
    }
    else
    {
      op->vtkVoxelModeller::SetForegroundValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetForegroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForegroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetForegroundValue() :
      op->vtkVoxelModeller::GetForegroundValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundValue(temp0);
    }
    else
    {
      op->vtkVoxelModeller::SetBackgroundValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundValue() :
      op->vtkVoxelModeller::GetBackgroundValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVoxelModeller_Methods[] = {
  {"IsTypeOf", PyvtkVoxelModeller_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVoxelModeller_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVoxelModeller_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVoxelModeller\nC++: static vtkVoxelModeller *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVoxelModeller_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVoxelModeller\nC++: vtkVoxelModeller *NewInstance()\n\n"},
  {"ComputeModelBounds", PyvtkVoxelModeller_ComputeModelBounds, METH_VARARGS,
   "V.ComputeModelBounds([float, float, float], [float, float, float])\n     -> float\nC++: double ComputeModelBounds(double origin[3], double ar[3])\n\nCompute the ModelBounds based on the input geometry.\n"},
  {"SetSampleDimensions", PyvtkVoxelModeller_SetSampleDimensions, METH_VARARGS,
   "V.SetSampleDimensions(int, int, int)\nC++: void SetSampleDimensions(int i, int j, int k)\nV.SetSampleDimensions([int, int, int])\nC++: void SetSampleDimensions(int dim[3])\n\nSet the i-j-k dimensions on which to sample the distance\nfunction. Default is (50, 50, 50)\n"},
  {"GetSampleDimensions", PyvtkVoxelModeller_GetSampleDimensions, METH_VARARGS,
   "V.GetSampleDimensions() -> (int, int, int)\nC++: int *GetSampleDimensions()\n\nSet the i-j-k dimensions on which to sample the distance\nfunction. Default is (50, 50, 50)\n"},
  {"SetMaximumDistance", PyvtkVoxelModeller_SetMaximumDistance, METH_VARARGS,
   "V.SetMaximumDistance(float)\nC++: virtual void SetMaximumDistance(double _arg)\n\nSpecify distance away from surface of input geometry to sample.\nSmaller values make large increases in performance. Default is\n1.0.\n"},
  {"GetMaximumDistanceMinValue", PyvtkVoxelModeller_GetMaximumDistanceMinValue, METH_VARARGS,
   "V.GetMaximumDistanceMinValue() -> float\nC++: virtual double GetMaximumDistanceMinValue()\n\nSpecify distance away from surface of input geometry to sample.\nSmaller values make large increases in performance. Default is\n1.0.\n"},
  {"GetMaximumDistanceMaxValue", PyvtkVoxelModeller_GetMaximumDistanceMaxValue, METH_VARARGS,
   "V.GetMaximumDistanceMaxValue() -> float\nC++: virtual double GetMaximumDistanceMaxValue()\n\nSpecify distance away from surface of input geometry to sample.\nSmaller values make large increases in performance. Default is\n1.0.\n"},
  {"GetMaximumDistance", PyvtkVoxelModeller_GetMaximumDistance, METH_VARARGS,
   "V.GetMaximumDistance() -> float\nC++: virtual double GetMaximumDistance()\n\nSpecify distance away from surface of input geometry to sample.\nSmaller values make large increases in performance. Default is\n1.0.\n"},
  {"SetModelBounds", PyvtkVoxelModeller_SetModelBounds, METH_VARARGS,
   "V.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(const double bounds[6])\nV.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nSpecify the position in space to perform the voxelization.\nDefault is (0, 0, 0, 0, 0, 0)\n"},
  {"GetModelBounds", PyvtkVoxelModeller_GetModelBounds, METH_VARARGS,
   "V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSpecify the position in space to perform the voxelization.\nDefault is (0, 0, 0, 0, 0, 0)\n"},
  {"SetScalarType", PyvtkVoxelModeller_SetScalarType, METH_VARARGS,
   "V.SetScalarType(int)\nC++: virtual void SetScalarType(int _arg)\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"SetScalarTypeToFloat", PyvtkVoxelModeller_SetScalarTypeToFloat, METH_VARARGS,
   "V.SetScalarTypeToFloat()\nC++: void SetScalarTypeToFloat()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"SetScalarTypeToDouble", PyvtkVoxelModeller_SetScalarTypeToDouble, METH_VARARGS,
   "V.SetScalarTypeToDouble()\nC++: void SetScalarTypeToDouble()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"SetScalarTypeToInt", PyvtkVoxelModeller_SetScalarTypeToInt, METH_VARARGS,
   "V.SetScalarTypeToInt()\nC++: void SetScalarTypeToInt()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"SetScalarTypeToUnsignedInt", PyvtkVoxelModeller_SetScalarTypeToUnsignedInt, METH_VARARGS,
   "V.SetScalarTypeToUnsignedInt()\nC++: void SetScalarTypeToUnsignedInt()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"SetScalarTypeToLong", PyvtkVoxelModeller_SetScalarTypeToLong, METH_VARARGS,
   "V.SetScalarTypeToLong()\nC++: void SetScalarTypeToLong()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"SetScalarTypeToUnsignedLong", PyvtkVoxelModeller_SetScalarTypeToUnsignedLong, METH_VARARGS,
   "V.SetScalarTypeToUnsignedLong()\nC++: void SetScalarTypeToUnsignedLong()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"SetScalarTypeToShort", PyvtkVoxelModeller_SetScalarTypeToShort, METH_VARARGS,
   "V.SetScalarTypeToShort()\nC++: void SetScalarTypeToShort()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"SetScalarTypeToUnsignedShort", PyvtkVoxelModeller_SetScalarTypeToUnsignedShort, METH_VARARGS,
   "V.SetScalarTypeToUnsignedShort()\nC++: void SetScalarTypeToUnsignedShort()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"SetScalarTypeToUnsignedChar", PyvtkVoxelModeller_SetScalarTypeToUnsignedChar, METH_VARARGS,
   "V.SetScalarTypeToUnsignedChar()\nC++: void SetScalarTypeToUnsignedChar()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"SetScalarTypeToChar", PyvtkVoxelModeller_SetScalarTypeToChar, METH_VARARGS,
   "V.SetScalarTypeToChar()\nC++: void SetScalarTypeToChar()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"SetScalarTypeToBit", PyvtkVoxelModeller_SetScalarTypeToBit, METH_VARARGS,
   "V.SetScalarTypeToBit()\nC++: void SetScalarTypeToBit()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"GetScalarType", PyvtkVoxelModeller_GetScalarType, METH_VARARGS,
   "V.GetScalarType() -> int\nC++: virtual int GetScalarType()\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"SetForegroundValue", PyvtkVoxelModeller_SetForegroundValue, METH_VARARGS,
   "V.SetForegroundValue(float)\nC++: virtual void SetForegroundValue(double _arg)\n\nSet the Foreground/Background values of the output. The\nForeground value is set when a voxel is occupied. The Background\nvalue is set when a voxel is not occupied. The default\nForegroundValue is 1. The default BackgroundValue is 0.\n"},
  {"GetForegroundValue", PyvtkVoxelModeller_GetForegroundValue, METH_VARARGS,
   "V.GetForegroundValue() -> float\nC++: virtual double GetForegroundValue()\n\nSet the Foreground/Background values of the output. The\nForeground value is set when a voxel is occupied. The Background\nvalue is set when a voxel is not occupied. The default\nForegroundValue is 1. The default BackgroundValue is 0.\n"},
  {"SetBackgroundValue", PyvtkVoxelModeller_SetBackgroundValue, METH_VARARGS,
   "V.SetBackgroundValue(float)\nC++: virtual void SetBackgroundValue(double _arg)\n\nSet the Foreground/Background values of the output. The\nForeground value is set when a voxel is occupied. The Background\nvalue is set when a voxel is not occupied. The default\nForegroundValue is 1. The default BackgroundValue is 0.\n"},
  {"GetBackgroundValue", PyvtkVoxelModeller_GetBackgroundValue, METH_VARARGS,
   "V.GetBackgroundValue() -> float\nC++: virtual double GetBackgroundValue()\n\nSet the Foreground/Background values of the output. The\nForeground value is set when a voxel is occupied. The Background\nvalue is set when a voxel is not occupied. The default\nForegroundValue is 1. The default BackgroundValue is 0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVoxelModeller_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingHybridPython.vtkVoxelModeller", // tp_name
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
  PyvtkVoxelModeller_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVoxelModeller_StaticNew()
{
  return vtkVoxelModeller::New();
}

PyObject *PyvtkVoxelModeller_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVoxelModeller_Type, PyvtkVoxelModeller_Methods,
    "vtkVoxelModeller",
 &PyvtkVoxelModeller_StaticNew);

  PyTypeObject *pytype = &PyvtkVoxelModeller_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVoxelModeller(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVoxelModeller_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVoxelModeller", o) != 0)
  {
    Py_DECREF(o);
  }

}

