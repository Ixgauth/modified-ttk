// python wrapper for vtkColorTransferFunction
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
#include "vtkColorTransferFunction.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkColorTransferFunction(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkColorTransferFunction_ClassNew(); }

#ifndef DECLARED_PyvtkScalarsToColors_ClassNew
extern "C" { PyObject *PyvtkScalarsToColors_ClassNew(); }
#define DECLARED_PyvtkScalarsToColors_ClassNew
#endif

static const char *PyvtkColorTransferFunction_Doc =
  "vtkColorTransferFunction - Defines a transfer function for mapping a\nproperty to an RGB color value.\n\n"
  "Superclass: vtkScalarsToColors\n\n"
  "vtkColorTransferFunction is a color mapping in RGB or HSV space that\n"
  "uses piecewise hermite functions to allow interpolation that can be\n"
  "piecewise constant, piecewise linear, or somewhere in-between (a\n"
  "modified piecewise hermite function that squishes the function\n"
  "according to a sharpness parameter). The function also allows for the\n"
  "specification of the midpoint (the place where the function reaches\n"
  "the average of the two bounding nodes) as a normalize distance\n"
  "between nodes. See the description of class vtkPiecewiseFunction for\n"
  "an explanation of midpoint and sharpness.\n\n"
  "@sa\n"
  "vtkPiecewiseFunction\n\n";


static PyObject *
PyvtkColorTransferFunction_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkColorTransferFunction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkColorTransferFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkColorTransferFunction *tempr = vtkColorTransferFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkColorTransferFunction::NewInstance());

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
PyvtkColorTransferFunction_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  vtkColorTransferFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkColorTransferFunction::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AddRGBPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRGBPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AddRGBPoint(temp0, temp1, temp2, temp3) :
      op->vtkColorTransferFunction::AddRGBPoint(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_AddRGBPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRGBPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->AddRGBPoint(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkColorTransferFunction::AddRGBPoint(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_AddRGBPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkColorTransferFunction_AddRGBPoint_s1(self, args);
    case 6:
      return PyvtkColorTransferFunction_AddRGBPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddRGBPoint");
  return nullptr;
}



static PyObject *
PyvtkColorTransferFunction_AddHSVPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHSVPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AddHSVPoint(temp0, temp1, temp2, temp3) :
      op->vtkColorTransferFunction::AddHSVPoint(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_AddHSVPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHSVPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->AddHSVPoint(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkColorTransferFunction::AddHSVPoint(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_AddHSVPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkColorTransferFunction_AddHSVPoint_s1(self, args);
    case 6:
      return PyvtkColorTransferFunction_AddHSVPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddHSVPoint");
  return nullptr;
}



static PyObject *
PyvtkColorTransferFunction_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RemovePoint(temp0) :
      op->vtkColorTransferFunction::RemovePoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AddRGBSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRGBSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    if (ap.IsBound())
    {
      op->AddRGBSegment(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkColorTransferFunction::AddRGBSegment(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AddHSVSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHSVSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    if (ap.IsBound())
    {
      op->AddHSVSegment(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkColorTransferFunction::AddHSVSegment(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_RemoveAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllPoints();
    }
    else
    {
      op->vtkColorTransferFunction::RemoveAllPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor(temp0) :
      op->vtkColorTransferFunction::GetColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
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
      op->GetColor(temp0, temp1);
    }
    else
    {
      op->vtkColorTransferFunction::GetColor(temp0, temp1);
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
PyvtkColorTransferFunction_GetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkColorTransferFunction_GetColor_s1(self, args);
    case 2:
      return PyvtkColorTransferFunction_GetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return nullptr;
}



static PyObject *
PyvtkColorTransferFunction_GetRedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRedValue(temp0) :
      op->vtkColorTransferFunction::GetRedValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetGreenValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreenValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGreenValue(temp0) :
      op->vtkColorTransferFunction::GetGreenValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetBlueValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBlueValue(temp0) :
      op->vtkColorTransferFunction::GetBlueValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetNodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNodeValue(temp0, temp1) :
      op->vtkColorTransferFunction::GetNodeValue(temp0, temp1));

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
PyvtkColorTransferFunction_SetNodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetNodeValue(temp0, temp1) :
      op->vtkColorTransferFunction::SetNodeValue(temp0, temp1));

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
PyvtkColorTransferFunction_MapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      op->MapValue(temp0) :
      op->vtkColorTransferFunction::MapValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkColorTransferFunction::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_GetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetRange(temp0, temp1);
    }
    else
    {
      op->vtkColorTransferFunction::GetRange(temp0, temp1);
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
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_GetRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetRange(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::GetRange(temp0);
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
PyvtkColorTransferFunction_GetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkColorTransferFunction_GetRange_s1(self, args);
    case 2:
      return PyvtkColorTransferFunction_GetRange_s2(self, args);
    case 1:
      return PyvtkColorTransferFunction_GetRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRange");
  return nullptr;
}



static PyObject *
PyvtkColorTransferFunction_AdjustRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AdjustRange(temp0) :
      op->vtkColorTransferFunction::AdjustRange(temp0));

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
PyvtkColorTransferFunction_GetTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->GetTable(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkColorTransferFunction::GetTable(temp0, temp1, temp2, temp3);
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
PyvtkColorTransferFunction_GetTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      op->GetTable(temp0, temp1, temp2) :
      op->vtkColorTransferFunction::GetTable(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_GetTable(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkColorTransferFunction_GetTable_s1(self, args);
    case 3:
      return PyvtkColorTransferFunction_GetTable_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTable");
  return nullptr;
}



static PyObject *
PyvtkColorTransferFunction_BuildFunctionFromTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildFunctionFromTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->BuildFunctionFromTable(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkColorTransferFunction::BuildFunctionFromTable(temp0, temp1, temp2, temp3);
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
PyvtkColorTransferFunction_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClamping(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::SetClamping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetClampingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClampingMinValue() :
      op->vtkColorTransferFunction::GetClampingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetClampingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClampingMaxValue() :
      op->vtkColorTransferFunction::GetClampingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClamping() :
      op->vtkColorTransferFunction::GetClamping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampingOn();
    }
    else
    {
      op->vtkColorTransferFunction::ClampingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampingOff();
    }
    else
    {
      op->vtkColorTransferFunction::ClampingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorSpace(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::SetColorSpace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetColorSpaceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSpaceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorSpaceMinValue() :
      op->vtkColorTransferFunction::GetColorSpaceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetColorSpaceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSpaceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorSpaceMaxValue() :
      op->vtkColorTransferFunction::GetColorSpaceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpaceToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpaceToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorSpaceToRGB();
    }
    else
    {
      op->vtkColorTransferFunction::SetColorSpaceToRGB();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpaceToHSV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpaceToHSV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorSpaceToHSV();
    }
    else
    {
      op->vtkColorTransferFunction::SetColorSpaceToHSV();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpaceToLab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpaceToLab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorSpaceToLab();
    }
    else
    {
      op->vtkColorTransferFunction::SetColorSpaceToLab();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpaceToLabCIEDE2000(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpaceToLabCIEDE2000");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorSpaceToLabCIEDE2000();
    }
    else
    {
      op->vtkColorTransferFunction::SetColorSpaceToLabCIEDE2000();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetColorSpaceToDiverging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpaceToDiverging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorSpaceToDiverging();
    }
    else
    {
      op->vtkColorTransferFunction::SetColorSpaceToDiverging();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorSpace() :
      op->vtkColorTransferFunction::GetColorSpace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetHSVWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHSVWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHSVWrap(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::SetHSVWrap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetHSVWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHSVWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHSVWrap() :
      op->vtkColorTransferFunction::GetHSVWrap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_HSVWrapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HSVWrapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HSVWrapOn();
    }
    else
    {
      op->vtkColorTransferFunction::HSVWrapOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_HSVWrapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HSVWrapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HSVWrapOff();
    }
    else
    {
      op->vtkColorTransferFunction::HSVWrapOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetScaleToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleToLinear();
    }
    else
    {
      op->vtkColorTransferFunction::SetScaleToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetScaleToLog10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToLog10");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleToLog10();
    }
    else
    {
      op->vtkColorTransferFunction::SetScaleToLog10();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkColorTransferFunction::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetNanColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
      op->SetNanColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkColorTransferFunction::SetNanColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetNanColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNanColor(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::SetNanColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetNanColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkColorTransferFunction_SetNanColor_s1(self, args);
    case 1:
      return PyvtkColorTransferFunction_SetNanColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNanColor");
  return nullptr;
}



static PyObject *
PyvtkColorTransferFunction_GetNanColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNanColor() :
      op->vtkColorTransferFunction::GetNanColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetNanOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNanOpacity(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::SetNanOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetNanOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNanOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNanOpacity() :
      op->vtkColorTransferFunction::GetNanOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetNanColorRGBA_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColorRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetNanColorRGBA(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkColorTransferFunction::SetNanColorRGBA(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetNanColorRGBA_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColorRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
      op->SetNanColorRGBA(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::SetNanColorRGBA(temp0);
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
PyvtkColorTransferFunction_SetNanColorRGBA(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkColorTransferFunction_SetNanColorRGBA_s1(self, args);
    case 1:
      return PyvtkColorTransferFunction_SetNanColorRGBA_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNanColorRGBA");
  return nullptr;
}



static PyObject *
PyvtkColorTransferFunction_SetBelowRangeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
      op->SetBelowRangeColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkColorTransferFunction::SetBelowRangeColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetBelowRangeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBelowRangeColor(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::SetBelowRangeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetBelowRangeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkColorTransferFunction_SetBelowRangeColor_s1(self, args);
    case 1:
      return PyvtkColorTransferFunction_SetBelowRangeColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBelowRangeColor");
  return nullptr;
}



static PyObject *
PyvtkColorTransferFunction_GetBelowRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBelowRangeColor() :
      op->vtkColorTransferFunction::GetBelowRangeColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetUseBelowRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseBelowRangeColor(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::SetUseBelowRangeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetUseBelowRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseBelowRangeColor() :
      op->vtkColorTransferFunction::GetUseBelowRangeColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_UseBelowRangeColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBelowRangeColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBelowRangeColorOn();
    }
    else
    {
      op->vtkColorTransferFunction::UseBelowRangeColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_UseBelowRangeColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBelowRangeColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBelowRangeColorOff();
    }
    else
    {
      op->vtkColorTransferFunction::UseBelowRangeColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetAboveRangeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

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
      op->SetAboveRangeColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkColorTransferFunction::SetAboveRangeColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetAboveRangeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAboveRangeColor(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::SetAboveRangeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkColorTransferFunction_SetAboveRangeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkColorTransferFunction_SetAboveRangeColor_s1(self, args);
    case 1:
      return PyvtkColorTransferFunction_SetAboveRangeColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAboveRangeColor");
  return nullptr;
}



static PyObject *
PyvtkColorTransferFunction_GetAboveRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAboveRangeColor() :
      op->vtkColorTransferFunction::GetAboveRangeColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetUseAboveRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseAboveRangeColor(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::SetUseAboveRangeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetUseAboveRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseAboveRangeColor() :
      op->vtkColorTransferFunction::GetUseAboveRangeColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_UseAboveRangeColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAboveRangeColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAboveRangeColorOn();
    }
    else
    {
      op->vtkColorTransferFunction::UseAboveRangeColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_UseAboveRangeColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAboveRangeColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAboveRangeColorOff();
    }
    else
    {
      op->vtkColorTransferFunction::UseAboveRangeColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetDataPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataPointer() :
      op->vtkColorTransferFunction::GetDataPointer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_FillFromDataPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillFromDataPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->FillFromDataPointer(temp0, temp1);
    }
    else
    {
      op->vtkColorTransferFunction::FillFromDataPointer(temp0, temp1);
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
PyvtkColorTransferFunction_MapScalarsThroughTable2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkColorTransferFunction::MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
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

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkColorTransferFunction_SetAllowDuplicateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowDuplicateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowDuplicateScalars(temp0);
    }
    else
    {
      op->vtkColorTransferFunction::SetAllowDuplicateScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetAllowDuplicateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowDuplicateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowDuplicateScalars() :
      op->vtkColorTransferFunction::GetAllowDuplicateScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AllowDuplicateScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowDuplicateScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowDuplicateScalarsOn();
    }
    else
    {
      op->vtkColorTransferFunction::AllowDuplicateScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_AllowDuplicateScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowDuplicateScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowDuplicateScalarsOff();
    }
    else
    {
      op->vtkColorTransferFunction::AllowDuplicateScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetNumberOfAvailableColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAvailableColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAvailableColors() :
      op->vtkColorTransferFunction::GetNumberOfAvailableColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColorTransferFunction_GetIndexedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  vtkIdType temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetIndexedColor(temp0, temp1);
    }
    else
    {
      op->vtkColorTransferFunction::GetIndexedColor(temp0, temp1);
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
PyvtkColorTransferFunction_EstimateMinNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EstimateMinNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferFunction *op = static_cast<vtkColorTransferFunction *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->EstimateMinNumberOfSamples(temp0, temp1) :
      op->vtkColorTransferFunction::EstimateMinNumberOfSamples(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkColorTransferFunction_Methods[] = {
  {"IsTypeOf", PyvtkColorTransferFunction_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkColorTransferFunction_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkColorTransferFunction_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkColorTransferFunction\nC++: static vtkColorTransferFunction *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkColorTransferFunction_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *NewInstance()\n\n"},
  {"DeepCopy", PyvtkColorTransferFunction_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkScalarsToColors)\nC++: void DeepCopy(vtkScalarsToColors *f) override;\n\nCopy the contents from another object.\n"},
  {"ShallowCopy", PyvtkColorTransferFunction_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkColorTransferFunction)\nC++: void ShallowCopy(vtkColorTransferFunction *f)\n\n"},
  {"GetSize", PyvtkColorTransferFunction_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: int GetSize()\n\nHow many nodes define this function?\n"},
  {"AddRGBPoint", PyvtkColorTransferFunction_AddRGBPoint, METH_VARARGS,
   "V.AddRGBPoint(float, float, float, float) -> int\nC++: int AddRGBPoint(double x, double r, double g, double b)\nV.AddRGBPoint(float, float, float, float, float, float) -> int\nC++: int AddRGBPoint(double x, double r, double g, double b,\n    double midpoint, double sharpness)\n\nAdd/Remove a point to/from the function defined in RGB or HSV\nReturn the index of the point (0 based), or -1 on error. See the\ndescription of class vtkPiecewiseFunction for an explanation of\nmidpoint and sharpness.\n"},
  {"AddHSVPoint", PyvtkColorTransferFunction_AddHSVPoint, METH_VARARGS,
   "V.AddHSVPoint(float, float, float, float) -> int\nC++: int AddHSVPoint(double x, double h, double s, double v)\nV.AddHSVPoint(float, float, float, float, float, float) -> int\nC++: int AddHSVPoint(double x, double h, double s, double v,\n    double midpoint, double sharpness)\n\nAdd/Remove a point to/from the function defined in RGB or HSV\nReturn the index of the point (0 based), or -1 on error. See the\ndescription of class vtkPiecewiseFunction for an explanation of\nmidpoint and sharpness.\n"},
  {"RemovePoint", PyvtkColorTransferFunction_RemovePoint, METH_VARARGS,
   "V.RemovePoint(float) -> int\nC++: int RemovePoint(double x)\n\nAdd/Remove a point to/from the function defined in RGB or HSV\nReturn the index of the point (0 based), or -1 on error. See the\ndescription of class vtkPiecewiseFunction for an explanation of\nmidpoint and sharpness.\n"},
  {"AddRGBSegment", PyvtkColorTransferFunction_AddRGBSegment, METH_VARARGS,
   "V.AddRGBSegment(float, float, float, float, float, float, float,\n    float)\nC++: void AddRGBSegment(double x1, double r1, double g1,\n    double b1, double x2, double r2, double g2, double b2)\n\nAdd two points to the function and remove all the points between\nthem\n"},
  {"AddHSVSegment", PyvtkColorTransferFunction_AddHSVSegment, METH_VARARGS,
   "V.AddHSVSegment(float, float, float, float, float, float, float,\n    float)\nC++: void AddHSVSegment(double x1, double h1, double s1,\n    double v1, double x2, double h2, double s2, double v2)\n\nAdd two points to the function and remove all the points between\nthem\n"},
  {"RemoveAllPoints", PyvtkColorTransferFunction_RemoveAllPoints, METH_VARARGS,
   "V.RemoveAllPoints()\nC++: void RemoveAllPoints()\n\nRemove all points\n"},
  {"GetColor", PyvtkColorTransferFunction_GetColor, METH_VARARGS,
   "V.GetColor(float) -> (float, float, float)\nC++: double *GetColor(double x)\nV.GetColor(float, [float, float, float])\nC++: void GetColor(double x, double rgb[3]) override;\n\nReturns an RGB color for the specified scalar value\n"},
  {"GetRedValue", PyvtkColorTransferFunction_GetRedValue, METH_VARARGS,
   "V.GetRedValue(float) -> float\nC++: double GetRedValue(double x)\n\nGet the color components individually.\n"},
  {"GetGreenValue", PyvtkColorTransferFunction_GetGreenValue, METH_VARARGS,
   "V.GetGreenValue(float) -> float\nC++: double GetGreenValue(double x)\n\nGet the color components individually.\n"},
  {"GetBlueValue", PyvtkColorTransferFunction_GetBlueValue, METH_VARARGS,
   "V.GetBlueValue(float) -> float\nC++: double GetBlueValue(double x)\n\nGet the color components individually.\n"},
  {"GetNodeValue", PyvtkColorTransferFunction_GetNodeValue, METH_VARARGS,
   "V.GetNodeValue(int, [float, float, float, float, float, float])\n    -> int\nC++: int GetNodeValue(int index, double val[6])\n\nFor the node specified by index, set/get the location (X), R, G,\nand B values, midpoint, and sharpness values at the node.\n"},
  {"SetNodeValue", PyvtkColorTransferFunction_SetNodeValue, METH_VARARGS,
   "V.SetNodeValue(int, [float, float, float, float, float, float])\n    -> int\nC++: int SetNodeValue(int index, double val[6])\n\nFor the node specified by index, set/get the location (X), R, G,\nand B values, midpoint, and sharpness values at the node.\n"},
  {"MapValue", PyvtkColorTransferFunction_MapValue, METH_VARARGS,
   "V.MapValue(float) -> (int, ...)\nC++: const unsigned char *MapValue(double v) override;\n\nMap one value through the lookup table.\n"},
  {"GetRange", PyvtkColorTransferFunction_GetRange, METH_VARARGS,
   "V.GetRange() -> (float, float)\nC++: double *GetRange() override;\nV.GetRange(float, float)\nC++: virtual void GetRange(double &arg1, double &arg2)\nV.GetRange([float, float])\nC++: virtual void GetRange(double _arg[2])\n\nReturns min and max position of all function points.\n"},
  {"AdjustRange", PyvtkColorTransferFunction_AdjustRange, METH_VARARGS,
   "V.AdjustRange([float, float]) -> int\nC++: int AdjustRange(double range[2])\n\nRemove all points out of the new range, and make sure there is a\npoint at each end of that range. Returns 1 on success, 0\notherwise.\n"},
  {"GetTable", PyvtkColorTransferFunction_GetTable, METH_VARARGS,
   "V.GetTable(float, float, int, [float, ...])\nC++: void GetTable(double x1, double x2, int n, double *table)\nV.GetTable(float, float, int) -> (int, ...)\nC++: const unsigned char *GetTable(double x1, double x2, int n)\n\nFills in a table of n colors mapped from values mapped with even\nspacing between x1 and x2, inclusive.\n\n* Note that GetTable ignores IndexedLookup\n"},
  {"BuildFunctionFromTable", PyvtkColorTransferFunction_BuildFunctionFromTable, METH_VARARGS,
   "V.BuildFunctionFromTable(float, float, int, [float, ...])\nC++: void BuildFunctionFromTable(double x1, double x2, int size,\n    double *table)\n\nConstruct a color transfer function from a table. Unlike\nFillFromDataPointer(), the table parameter's layout is assumed to\nbe [R1, G1, B1, R2, G2, B2, ..., Rn, Gn, Bn], and it is assumed\nto be a block of memory of size [3*size]. After calling this\nmethod, the function range will be [x1, x2], the function will\nhave size nodes, and function values will be regularly spaced\nbetween x1 and x2.\n"},
  {"SetClamping", PyvtkColorTransferFunction_SetClamping, METH_VARARGS,
   "V.SetClamping(int)\nC++: virtual void SetClamping(vtkTypeBool _arg)\n\nSets/gets whether clamping is used. If on, scalar values below\nthe lower range value set for the transfer function will be\nmapped to the first node color, and scalar values above the upper\nrange value set for the transfer function will be mapped to the\nlast node color. If off, values outside the range are mapped to\nblack.\n"},
  {"GetClampingMinValue", PyvtkColorTransferFunction_GetClampingMinValue, METH_VARARGS,
   "V.GetClampingMinValue() -> int\nC++: virtual vtkTypeBool GetClampingMinValue()\n\nSets/gets whether clamping is used. If on, scalar values below\nthe lower range value set for the transfer function will be\nmapped to the first node color, and scalar values above the upper\nrange value set for the transfer function will be mapped to the\nlast node color. If off, values outside the range are mapped to\nblack.\n"},
  {"GetClampingMaxValue", PyvtkColorTransferFunction_GetClampingMaxValue, METH_VARARGS,
   "V.GetClampingMaxValue() -> int\nC++: virtual vtkTypeBool GetClampingMaxValue()\n\nSets/gets whether clamping is used. If on, scalar values below\nthe lower range value set for the transfer function will be\nmapped to the first node color, and scalar values above the upper\nrange value set for the transfer function will be mapped to the\nlast node color. If off, values outside the range are mapped to\nblack.\n"},
  {"GetClamping", PyvtkColorTransferFunction_GetClamping, METH_VARARGS,
   "V.GetClamping() -> int\nC++: virtual vtkTypeBool GetClamping()\n\nSets/gets whether clamping is used. If on, scalar values below\nthe lower range value set for the transfer function will be\nmapped to the first node color, and scalar values above the upper\nrange value set for the transfer function will be mapped to the\nlast node color. If off, values outside the range are mapped to\nblack.\n"},
  {"ClampingOn", PyvtkColorTransferFunction_ClampingOn, METH_VARARGS,
   "V.ClampingOn()\nC++: virtual void ClampingOn()\n\nSets/gets whether clamping is used. If on, scalar values below\nthe lower range value set for the transfer function will be\nmapped to the first node color, and scalar values above the upper\nrange value set for the transfer function will be mapped to the\nlast node color. If off, values outside the range are mapped to\nblack.\n"},
  {"ClampingOff", PyvtkColorTransferFunction_ClampingOff, METH_VARARGS,
   "V.ClampingOff()\nC++: virtual void ClampingOff()\n\nSets/gets whether clamping is used. If on, scalar values below\nthe lower range value set for the transfer function will be\nmapped to the first node color, and scalar values above the upper\nrange value set for the transfer function will be mapped to the\nlast node color. If off, values outside the range are mapped to\nblack.\n"},
  {"SetColorSpace", PyvtkColorTransferFunction_SetColorSpace, METH_VARARGS,
   "V.SetColorSpace(int)\nC++: virtual void SetColorSpace(int _arg)\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  In Lab/CIEDE2000 mode, it will\ntake the shortest path in the Lab color space with respect to the\nCIE Delta E 2000 color distance measure. Diverging is a special\nmode where colors will pass through white when interpolating\nbetween two saturated colors.\n"},
  {"GetColorSpaceMinValue", PyvtkColorTransferFunction_GetColorSpaceMinValue, METH_VARARGS,
   "V.GetColorSpaceMinValue() -> int\nC++: virtual int GetColorSpaceMinValue()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  In Lab/CIEDE2000 mode, it will\ntake the shortest path in the Lab color space with respect to the\nCIE Delta E 2000 color distance measure. Diverging is a special\nmode where colors will pass through white when interpolating\nbetween two saturated colors.\n"},
  {"GetColorSpaceMaxValue", PyvtkColorTransferFunction_GetColorSpaceMaxValue, METH_VARARGS,
   "V.GetColorSpaceMaxValue() -> int\nC++: virtual int GetColorSpaceMaxValue()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  In Lab/CIEDE2000 mode, it will\ntake the shortest path in the Lab color space with respect to the\nCIE Delta E 2000 color distance measure. Diverging is a special\nmode where colors will pass through white when interpolating\nbetween two saturated colors.\n"},
  {"SetColorSpaceToRGB", PyvtkColorTransferFunction_SetColorSpaceToRGB, METH_VARARGS,
   "V.SetColorSpaceToRGB()\nC++: void SetColorSpaceToRGB()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  In Lab/CIEDE2000 mode, it will\ntake the shortest path in the Lab color space with respect to the\nCIE Delta E 2000 color distance measure. Diverging is a special\nmode where colors will pass through white when interpolating\nbetween two saturated colors.\n"},
  {"SetColorSpaceToHSV", PyvtkColorTransferFunction_SetColorSpaceToHSV, METH_VARARGS,
   "V.SetColorSpaceToHSV()\nC++: void SetColorSpaceToHSV()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  In Lab/CIEDE2000 mode, it will\ntake the shortest path in the Lab color space with respect to the\nCIE Delta E 2000 color distance measure. Diverging is a special\nmode where colors will pass through white when interpolating\nbetween two saturated colors.\n"},
  {"SetColorSpaceToLab", PyvtkColorTransferFunction_SetColorSpaceToLab, METH_VARARGS,
   "V.SetColorSpaceToLab()\nC++: void SetColorSpaceToLab()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  In Lab/CIEDE2000 mode, it will\ntake the shortest path in the Lab color space with respect to the\nCIE Delta E 2000 color distance measure. Diverging is a special\nmode where colors will pass through white when interpolating\nbetween two saturated colors.\n"},
  {"SetColorSpaceToLabCIEDE2000", PyvtkColorTransferFunction_SetColorSpaceToLabCIEDE2000, METH_VARARGS,
   "V.SetColorSpaceToLabCIEDE2000()\nC++: void SetColorSpaceToLabCIEDE2000()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  In Lab/CIEDE2000 mode, it will\ntake the shortest path in the Lab color space with respect to the\nCIE Delta E 2000 color distance measure. Diverging is a special\nmode where colors will pass through white when interpolating\nbetween two saturated colors.\n"},
  {"SetColorSpaceToDiverging", PyvtkColorTransferFunction_SetColorSpaceToDiverging, METH_VARARGS,
   "V.SetColorSpaceToDiverging()\nC++: void SetColorSpaceToDiverging()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  In Lab/CIEDE2000 mode, it will\ntake the shortest path in the Lab color space with respect to the\nCIE Delta E 2000 color distance measure. Diverging is a special\nmode where colors will pass through white when interpolating\nbetween two saturated colors.\n"},
  {"GetColorSpace", PyvtkColorTransferFunction_GetColorSpace, METH_VARARGS,
   "V.GetColorSpace() -> int\nC++: virtual int GetColorSpace()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  In Lab/CIEDE2000 mode, it will\ntake the shortest path in the Lab color space with respect to the\nCIE Delta E 2000 color distance measure. Diverging is a special\nmode where colors will pass through white when interpolating\nbetween two saturated colors.\n"},
  {"SetHSVWrap", PyvtkColorTransferFunction_SetHSVWrap, METH_VARARGS,
   "V.SetHSVWrap(int)\nC++: virtual void SetHSVWrap(vtkTypeBool _arg)\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  In Lab/CIEDE2000 mode, it will\ntake the shortest path in the Lab color space with respect to the\nCIE Delta E 2000 color distance measure. Diverging is a special\nmode where colors will pass through white when interpolating\nbetween two saturated colors.\n"},
  {"GetHSVWrap", PyvtkColorTransferFunction_GetHSVWrap, METH_VARARGS,
   "V.GetHSVWrap() -> int\nC++: virtual vtkTypeBool GetHSVWrap()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  In Lab/CIEDE2000 mode, it will\ntake the shortest path in the Lab color space with respect to the\nCIE Delta E 2000 color distance measure. Diverging is a special\nmode where colors will pass through white when interpolating\nbetween two saturated colors.\n"},
  {"HSVWrapOn", PyvtkColorTransferFunction_HSVWrapOn, METH_VARARGS,
   "V.HSVWrapOn()\nC++: virtual void HSVWrapOn()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  In Lab/CIEDE2000 mode, it will\ntake the shortest path in the Lab color space with respect to the\nCIE Delta E 2000 color distance measure. Diverging is a special\nmode where colors will pass through white when interpolating\nbetween two saturated colors.\n"},
  {"HSVWrapOff", PyvtkColorTransferFunction_HSVWrapOff, METH_VARARGS,
   "V.HSVWrapOff()\nC++: virtual void HSVWrapOff()\n\nSet/Get the color space used for interpolation: RGB, HSV, CIELAB,\nor Diverging.  In HSV mode, if HSVWrap is on, it will take the\nshortest path in Hue (going back through 0 if that is the\nshortest way around the hue circle) whereas if HSVWrap is off it\nwill not go through 0 (in order the match the current\nfunctionality of vtkLookupTable).  In Lab/CIEDE2000 mode, it will\ntake the shortest path in the Lab color space with respect to the\nCIE Delta E 2000 color distance measure. Diverging is a special\nmode where colors will pass through white when interpolating\nbetween two saturated colors.\n"},
  {"SetScale", PyvtkColorTransferFunction_SetScale, METH_VARARGS,
   "V.SetScale(int)\nC++: virtual void SetScale(int _arg)\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, and the range contains\nzero, the color mapping will be linear.\n"},
  {"SetScaleToLinear", PyvtkColorTransferFunction_SetScaleToLinear, METH_VARARGS,
   "V.SetScaleToLinear()\nC++: void SetScaleToLinear()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, and the range contains\nzero, the color mapping will be linear.\n"},
  {"SetScaleToLog10", PyvtkColorTransferFunction_SetScaleToLog10, METH_VARARGS,
   "V.SetScaleToLog10()\nC++: void SetScaleToLog10()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, and the range contains\nzero, the color mapping will be linear.\n"},
  {"GetScale", PyvtkColorTransferFunction_GetScale, METH_VARARGS,
   "V.GetScale() -> int\nC++: virtual int GetScale()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, and the range contains\nzero, the color mapping will be linear.\n"},
  {"SetNanColor", PyvtkColorTransferFunction_SetNanColor, METH_VARARGS,
   "V.SetNanColor(float, float, float)\nC++: void SetNanColor(double, double, double)\nV.SetNanColor((float, float, float))\nC++: void SetNanColor(double a[3])\n\n"},
  {"GetNanColor", PyvtkColorTransferFunction_GetNanColor, METH_VARARGS,
   "V.GetNanColor() -> (float, float, float)\nC++: double *GetNanColor()\n\n"},
  {"SetNanOpacity", PyvtkColorTransferFunction_SetNanOpacity, METH_VARARGS,
   "V.SetNanOpacity(float)\nC++: virtual void SetNanOpacity(double _arg)\n\nGet/Set the opacity to use when a NaN (not a number) is\nencountered. This a double in the range [0,1].\n"},
  {"GetNanOpacity", PyvtkColorTransferFunction_GetNanOpacity, METH_VARARGS,
   "V.GetNanOpacity() -> float\nC++: virtual double GetNanOpacity()\n\nGet/Set the opacity to use when a NaN (not a number) is\nencountered. This a double in the range [0,1].\n"},
  {"SetNanColorRGBA", PyvtkColorTransferFunction_SetNanColorRGBA, METH_VARARGS,
   "V.SetNanColorRGBA(float, float, float, float)\nC++: virtual void SetNanColorRGBA(double r, double g, double b,\n    double a)\nV.SetNanColorRGBA([float, float, float, float])\nC++: void SetNanColorRGBA(double rgba[4])\n\nSet the RGBA color to use when a NaN (not a number) is\nencountered.  This is an RGBA 4-tuple color of doubles in the\nrange [0,1].\n"},
  {"SetBelowRangeColor", PyvtkColorTransferFunction_SetBelowRangeColor, METH_VARARGS,
   "V.SetBelowRangeColor(float, float, float)\nC++: void SetBelowRangeColor(double, double, double)\nV.SetBelowRangeColor((float, float, float))\nC++: void SetBelowRangeColor(double a[3])\n\n"},
  {"GetBelowRangeColor", PyvtkColorTransferFunction_GetBelowRangeColor, METH_VARARGS,
   "V.GetBelowRangeColor() -> (float, float, float)\nC++: double *GetBelowRangeColor()\n\n"},
  {"SetUseBelowRangeColor", PyvtkColorTransferFunction_SetUseBelowRangeColor, METH_VARARGS,
   "V.SetUseBelowRangeColor(int)\nC++: virtual void SetUseBelowRangeColor(vtkTypeBool _arg)\n\nSet whether the below range color should be used.\n"},
  {"GetUseBelowRangeColor", PyvtkColorTransferFunction_GetUseBelowRangeColor, METH_VARARGS,
   "V.GetUseBelowRangeColor() -> int\nC++: virtual vtkTypeBool GetUseBelowRangeColor()\n\nSet whether the below range color should be used.\n"},
  {"UseBelowRangeColorOn", PyvtkColorTransferFunction_UseBelowRangeColorOn, METH_VARARGS,
   "V.UseBelowRangeColorOn()\nC++: virtual void UseBelowRangeColorOn()\n\nSet whether the below range color should be used.\n"},
  {"UseBelowRangeColorOff", PyvtkColorTransferFunction_UseBelowRangeColorOff, METH_VARARGS,
   "V.UseBelowRangeColorOff()\nC++: virtual void UseBelowRangeColorOff()\n\nSet whether the below range color should be used.\n"},
  {"SetAboveRangeColor", PyvtkColorTransferFunction_SetAboveRangeColor, METH_VARARGS,
   "V.SetAboveRangeColor(float, float, float)\nC++: void SetAboveRangeColor(double, double, double)\nV.SetAboveRangeColor((float, float, float))\nC++: void SetAboveRangeColor(double a[3])\n\n"},
  {"GetAboveRangeColor", PyvtkColorTransferFunction_GetAboveRangeColor, METH_VARARGS,
   "V.GetAboveRangeColor() -> (float, float, float)\nC++: double *GetAboveRangeColor()\n\n"},
  {"SetUseAboveRangeColor", PyvtkColorTransferFunction_SetUseAboveRangeColor, METH_VARARGS,
   "V.SetUseAboveRangeColor(int)\nC++: virtual void SetUseAboveRangeColor(vtkTypeBool _arg)\n\nSet whether the below range color should be used.\n"},
  {"GetUseAboveRangeColor", PyvtkColorTransferFunction_GetUseAboveRangeColor, METH_VARARGS,
   "V.GetUseAboveRangeColor() -> int\nC++: virtual vtkTypeBool GetUseAboveRangeColor()\n\nSet whether the below range color should be used.\n"},
  {"UseAboveRangeColorOn", PyvtkColorTransferFunction_UseAboveRangeColorOn, METH_VARARGS,
   "V.UseAboveRangeColorOn()\nC++: virtual void UseAboveRangeColorOn()\n\nSet whether the below range color should be used.\n"},
  {"UseAboveRangeColorOff", PyvtkColorTransferFunction_UseAboveRangeColorOff, METH_VARARGS,
   "V.UseAboveRangeColorOff()\nC++: virtual void UseAboveRangeColorOff()\n\nSet whether the below range color should be used.\n"},
  {"GetDataPointer", PyvtkColorTransferFunction_GetDataPointer, METH_VARARGS,
   "V.GetDataPointer() -> (float, ...)\nC++: double *GetDataPointer()\n\nReturns a pointer to an array of all node values in an\ninterleaved array with the layout [X1, R1, G1, B1, X2, R2, G2,\nB2, ..., Xn, Rn, Gn, Bn] where n is the number of nodes defining\nthe transfer function. The returned pointer points to an array\nthat is managed by this class, so callers should not free it.\n"},
  {"FillFromDataPointer", PyvtkColorTransferFunction_FillFromDataPointer, METH_VARARGS,
   "V.FillFromDataPointer(int, [float, ...])\nC++: void FillFromDataPointer(int n, double *ptr)\n\nDefines the nodes from an array ptr with the layout [X1, R1, G1,\nB1, X2, R2, G2, B2, ..., Xn, Rn, Gn, Bn] where n is the number of\nnodes.\n"},
  {"MapScalarsThroughTable2", PyvtkColorTransferFunction_MapScalarsThroughTable2, METH_VARARGS,
   "V.MapScalarsThroughTable2(void, [int, ...], int, int, int, int)\nC++: void MapScalarsThroughTable2(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputIncrement) override;\n\nMap a set of scalars through the lookup table.\n"},
  {"SetAllowDuplicateScalars", PyvtkColorTransferFunction_SetAllowDuplicateScalars, METH_VARARGS,
   "V.SetAllowDuplicateScalars(int)\nC++: virtual void SetAllowDuplicateScalars(vtkTypeBool _arg)\n\nToggle whether to allow duplicate scalar values in the color\ntransfer function (off by default).\n"},
  {"GetAllowDuplicateScalars", PyvtkColorTransferFunction_GetAllowDuplicateScalars, METH_VARARGS,
   "V.GetAllowDuplicateScalars() -> int\nC++: virtual vtkTypeBool GetAllowDuplicateScalars()\n\nToggle whether to allow duplicate scalar values in the color\ntransfer function (off by default).\n"},
  {"AllowDuplicateScalarsOn", PyvtkColorTransferFunction_AllowDuplicateScalarsOn, METH_VARARGS,
   "V.AllowDuplicateScalarsOn()\nC++: virtual void AllowDuplicateScalarsOn()\n\nToggle whether to allow duplicate scalar values in the color\ntransfer function (off by default).\n"},
  {"AllowDuplicateScalarsOff", PyvtkColorTransferFunction_AllowDuplicateScalarsOff, METH_VARARGS,
   "V.AllowDuplicateScalarsOff()\nC++: virtual void AllowDuplicateScalarsOff()\n\nToggle whether to allow duplicate scalar values in the color\ntransfer function (off by default).\n"},
  {"GetNumberOfAvailableColors", PyvtkColorTransferFunction_GetNumberOfAvailableColors, METH_VARARGS,
   "V.GetNumberOfAvailableColors() -> int\nC++: vtkIdType GetNumberOfAvailableColors() override;\n\nGet the number of available colors for mapping to.\n"},
  {"GetIndexedColor", PyvtkColorTransferFunction_GetIndexedColor, METH_VARARGS,
   "V.GetIndexedColor(int, [float, float, float, float])\nC++: void GetIndexedColor(vtkIdType idx, double rgba[4]) override;\n\nReturn a color given an integer index.\n\n* This is used to assign colors to annotations (given an offset\n  into the list of annotations).\n* If there are no control points or idx < 0, then NanColor is\n  returned.\n"},
  {"EstimateMinNumberOfSamples", PyvtkColorTransferFunction_EstimateMinNumberOfSamples, METH_VARARGS,
   "V.EstimateMinNumberOfSamples(float, float) -> int\nC++: int EstimateMinNumberOfSamples(double const &x1,\n    double const &x2)\n\nEstimates the minimum size of a table such that it would\ncorrectly sample this function. The returned value should be\npassed as parameter 'n' when calling GetTable().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkColorTransferFunction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkColorTransferFunction", // tp_name
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
  PyvtkColorTransferFunction_Doc, // tp_doc
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

static vtkObjectBase *PyvtkColorTransferFunction_StaticNew()
{
  return vtkColorTransferFunction::New();
}

PyObject *PyvtkColorTransferFunction_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkColorTransferFunction_Type, PyvtkColorTransferFunction_Methods,
    "vtkColorTransferFunction",
 &PyvtkColorTransferFunction_StaticNew);

  PyTypeObject *pytype = &PyvtkColorTransferFunction_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkScalarsToColors_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkColorTransferFunction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkColorTransferFunction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkColorTransferFunction", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_CTF_RGB", 0 },
        { "VTK_CTF_HSV", 1 },
        { "VTK_CTF_LAB", 2 },
        { "VTK_CTF_DIVERGING", 3 },
        { "VTK_CTF_LAB_CIEDE2000", 4 },
        { "VTK_CTF_LINEAR", 0 },
        { "VTK_CTF_LOG10", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

