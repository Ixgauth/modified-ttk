// python wrapper for vtkImageGridSource
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
#include "vtkImageGridSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageGridSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageGridSource_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageGridSource_Doc =
  "vtkImageGridSource - Create an image of a grid.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageGridSource produces an image of a grid.  The default output\n"
  "type is double.\n\n";


static PyObject *
PyvtkImageGridSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageGridSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageGridSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageGridSource *tempr = vtkImageGridSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageGridSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageGridSource::NewInstance());

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
PyvtkImageGridSource_SetGridSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetGridSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGridSource::SetGridSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridSpacing(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetGridSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageGridSource_SetGridSpacing_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetGridSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridSpacing");
  return nullptr;
}



static PyObject *
PyvtkImageGridSource_GetGridSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetGridSpacing() :
      op->vtkImageGridSource::GetGridSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetGridOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetGridOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGridSource::SetGridOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridOrigin(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetGridOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageGridSource_SetGridOrigin_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetGridOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridOrigin");
  return nullptr;
}



static PyObject *
PyvtkImageGridSource_GetGridOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetGridOrigin() :
      op->vtkImageGridSource::GetGridOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetLineValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineValue(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetLineValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetLineValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineValue() :
      op->vtkImageGridSource::GetLineValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillValue(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetFillValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFillValue() :
      op->vtkImageGridSource::GetFillValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarType(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetDataScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToDouble();
    }
    else
    {
      op->vtkImageGridSource::SetDataScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToInt();
    }
    else
    {
      op->vtkImageGridSource::SetDataScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToShort();
    }
    else
    {
      op->vtkImageGridSource::SetDataScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkImageGridSource::SetDataScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkImageGridSource::SetDataScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataScalarType() :
      op->vtkImageGridSource::GetDataScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetDataScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataScalarTypeAsString() :
      op->vtkImageGridSource::GetDataScalarTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageGridSource::SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataExtent(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetDataExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageGridSource_SetDataExtent_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetDataExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataExtent");
  return nullptr;
}



static PyObject *
PyvtkImageGridSource_GetDataExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDataExtent() :
      op->vtkImageGridSource::GetDataExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetDataSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGridSource::SetDataSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataSpacing(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetDataSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageGridSource_SetDataSpacing_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetDataSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSpacing");
  return nullptr;
}



static PyObject *
PyvtkImageGridSource_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkImageGridSource::GetDataSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetDataOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGridSource::SetDataOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataOrigin(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetDataOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageGridSource_SetDataOrigin_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetDataOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataOrigin");
  return nullptr;
}



static PyObject *
PyvtkImageGridSource_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkImageGridSource::GetDataOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageGridSource_Methods[] = {
  {"IsTypeOf", PyvtkImageGridSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageGridSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageGridSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageGridSource\nC++: static vtkImageGridSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageGridSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageGridSource\nC++: vtkImageGridSource *NewInstance()\n\n"},
  {"SetGridSpacing", PyvtkImageGridSource_SetGridSpacing, METH_VARARGS,
   "V.SetGridSpacing(int, int, int)\nC++: void SetGridSpacing(int, int, int)\nV.SetGridSpacing((int, int, int))\nC++: void SetGridSpacing(int a[3])\n\n"},
  {"GetGridSpacing", PyvtkImageGridSource_GetGridSpacing, METH_VARARGS,
   "V.GetGridSpacing() -> (int, int, int)\nC++: int *GetGridSpacing()\n\n"},
  {"SetGridOrigin", PyvtkImageGridSource_SetGridOrigin, METH_VARARGS,
   "V.SetGridOrigin(int, int, int)\nC++: void SetGridOrigin(int, int, int)\nV.SetGridOrigin((int, int, int))\nC++: void SetGridOrigin(int a[3])\n\n"},
  {"GetGridOrigin", PyvtkImageGridSource_GetGridOrigin, METH_VARARGS,
   "V.GetGridOrigin() -> (int, int, int)\nC++: int *GetGridOrigin()\n\n"},
  {"SetLineValue", PyvtkImageGridSource_SetLineValue, METH_VARARGS,
   "V.SetLineValue(float)\nC++: virtual void SetLineValue(double _arg)\n\nSet the grey level of the lines. Default 1.0.\n"},
  {"GetLineValue", PyvtkImageGridSource_GetLineValue, METH_VARARGS,
   "V.GetLineValue() -> float\nC++: virtual double GetLineValue()\n\nSet the grey level of the lines. Default 1.0.\n"},
  {"SetFillValue", PyvtkImageGridSource_SetFillValue, METH_VARARGS,
   "V.SetFillValue(float)\nC++: virtual void SetFillValue(double _arg)\n\nSet the grey level of the fill. Default 0.0.\n"},
  {"GetFillValue", PyvtkImageGridSource_GetFillValue, METH_VARARGS,
   "V.GetFillValue() -> float\nC++: virtual double GetFillValue()\n\nSet the grey level of the fill. Default 0.0.\n"},
  {"SetDataScalarType", PyvtkImageGridSource_SetDataScalarType, METH_VARARGS,
   "V.SetDataScalarType(int)\nC++: virtual void SetDataScalarType(int _arg)\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {"SetDataScalarTypeToDouble", PyvtkImageGridSource_SetDataScalarTypeToDouble, METH_VARARGS,
   "V.SetDataScalarTypeToDouble()\nC++: void SetDataScalarTypeToDouble()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {"SetDataScalarTypeToInt", PyvtkImageGridSource_SetDataScalarTypeToInt, METH_VARARGS,
   "V.SetDataScalarTypeToInt()\nC++: void SetDataScalarTypeToInt()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {"SetDataScalarTypeToShort", PyvtkImageGridSource_SetDataScalarTypeToShort, METH_VARARGS,
   "V.SetDataScalarTypeToShort()\nC++: void SetDataScalarTypeToShort()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {"SetDataScalarTypeToUnsignedShort", PyvtkImageGridSource_SetDataScalarTypeToUnsignedShort, METH_VARARGS,
   "V.SetDataScalarTypeToUnsignedShort()\nC++: void SetDataScalarTypeToUnsignedShort()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {"SetDataScalarTypeToUnsignedChar", PyvtkImageGridSource_SetDataScalarTypeToUnsignedChar, METH_VARARGS,
   "V.SetDataScalarTypeToUnsignedChar()\nC++: void SetDataScalarTypeToUnsignedChar()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {"GetDataScalarType", PyvtkImageGridSource_GetDataScalarType, METH_VARARGS,
   "V.GetDataScalarType() -> int\nC++: virtual int GetDataScalarType()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {"GetDataScalarTypeAsString", PyvtkImageGridSource_GetDataScalarTypeAsString, METH_VARARGS,
   "V.GetDataScalarTypeAsString() -> string\nC++: const char *GetDataScalarTypeAsString()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {"SetDataExtent", PyvtkImageGridSource_SetDataExtent, METH_VARARGS,
   "V.SetDataExtent(int, int, int, int, int, int)\nC++: void SetDataExtent(int, int, int, int, int, int)\nV.SetDataExtent((int, int, int, int, int, int))\nC++: void SetDataExtent(int a[6])\n\n"},
  {"GetDataExtent", PyvtkImageGridSource_GetDataExtent, METH_VARARGS,
   "V.GetDataExtent() -> (int, int, int, int, int, int)\nC++: int *GetDataExtent()\n\n"},
  {"SetDataSpacing", PyvtkImageGridSource_SetDataSpacing, METH_VARARGS,
   "V.SetDataSpacing(float, float, float)\nC++: void SetDataSpacing(double, double, double)\nV.SetDataSpacing((float, float, float))\nC++: void SetDataSpacing(double a[3])\n\n"},
  {"GetDataSpacing", PyvtkImageGridSource_GetDataSpacing, METH_VARARGS,
   "V.GetDataSpacing() -> (float, float, float)\nC++: double *GetDataSpacing()\n\n"},
  {"SetDataOrigin", PyvtkImageGridSource_SetDataOrigin, METH_VARARGS,
   "V.SetDataOrigin(float, float, float)\nC++: void SetDataOrigin(double, double, double)\nV.SetDataOrigin((float, float, float))\nC++: void SetDataOrigin(double a[3])\n\n"},
  {"GetDataOrigin", PyvtkImageGridSource_GetDataOrigin, METH_VARARGS,
   "V.GetDataOrigin() -> (float, float, float)\nC++: double *GetDataOrigin()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageGridSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingSourcesPython.vtkImageGridSource", // tp_name
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
  PyvtkImageGridSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageGridSource_StaticNew()
{
  return vtkImageGridSource::New();
}

PyObject *PyvtkImageGridSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageGridSource_Type, PyvtkImageGridSource_Methods,
    "vtkImageGridSource",
 &PyvtkImageGridSource_StaticNew);

  PyTypeObject *pytype = &PyvtkImageGridSource_Type;

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

void PyVTKAddFile_vtkImageGridSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageGridSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageGridSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

