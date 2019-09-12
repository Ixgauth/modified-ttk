// python wrapper for vtkImageResize
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
#include "vtkImageResize.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageResize(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageResize_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageResize_Doc =
  "vtkImageResize - High-quality image resizing filter\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageResize will magnify or shrink an image with interpolation and\n"
  "antialiasing.  The resizing is done with a 5-lobe Lanczos-windowed\n"
  "sinc filter that is bandlimited to the output sampling frequency in\n"
  "order to avoid aliasing when the image size is reduced.  This filter\n"
  "utilizes a O(n) algorithm to provide good efficiency even though the\n"
  "filtering kernel is large.  The sinc interpolator can be turned off\n"
  "if nearest-neighbor interpolation is required, or it can be replaced\n"
  "with a different vtkImageInterpolator object.@par Thanks: Thanks to\n"
  "David Gobbi for contributing this class to VTK.\n\n";


static PyObject *
PyvtkImageResize_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageResize::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageResize::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageResize *tempr = vtkImageResize::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageResize *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageResize::NewInstance());

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
PyvtkImageResize_SetResizeMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizeMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResizeMethod(temp0);
    }
    else
    {
      op->vtkImageResize::SetResizeMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetResizeMethodMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizeMethodMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResizeMethodMinValue() :
      op->vtkImageResize::GetResizeMethodMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetResizeMethodMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizeMethodMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResizeMethodMaxValue() :
      op->vtkImageResize::GetResizeMethodMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetResizeMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizeMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResizeMethod() :
      op->vtkImageResize::GetResizeMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetResizeMethodToOutputDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizeMethodToOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResizeMethodToOutputDimensions();
    }
    else
    {
      op->vtkImageResize::SetResizeMethodToOutputDimensions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetResizeMethodToOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizeMethodToOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResizeMethodToOutputSpacing();
    }
    else
    {
      op->vtkImageResize::SetResizeMethodToOutputSpacing();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetResizeMethodToMagnificationFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizeMethodToMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResizeMethodToMagnificationFactors();
    }
    else
    {
      op->vtkImageResize::SetResizeMethodToMagnificationFactors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetResizeMethodAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizeMethodAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetResizeMethodAsString() :
      op->vtkImageResize::GetResizeMethodAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetOutputDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

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
      op->SetOutputDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageResize::SetOutputDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetOutputDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDimensions(temp0);
    }
    else
    {
      op->vtkImageResize::SetOutputDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetOutputDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageResize_SetOutputDimensions_s1(self, args);
    case 1:
      return PyvtkImageResize_SetOutputDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputDimensions");
  return nullptr;
}



static PyObject *
PyvtkImageResize_GetOutputDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOutputDimensions() :
      op->vtkImageResize::GetOutputDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

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
      op->SetOutputSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageResize::SetOutputSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputSpacing(temp0);
    }
    else
    {
      op->vtkImageResize::SetOutputSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageResize_SetOutputSpacing_s1(self, args);
    case 1:
      return PyvtkImageResize_SetOutputSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputSpacing");
  return nullptr;
}



static PyObject *
PyvtkImageResize_GetOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputSpacing() :
      op->vtkImageResize::GetOutputSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetMagnificationFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

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
      op->SetMagnificationFactors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageResize::SetMagnificationFactors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetMagnificationFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMagnificationFactors(temp0);
    }
    else
    {
      op->vtkImageResize::SetMagnificationFactors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetMagnificationFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageResize_SetMagnificationFactors_s1(self, args);
    case 1:
      return PyvtkImageResize_SetMagnificationFactors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMagnificationFactors");
  return nullptr;
}



static PyObject *
PyvtkImageResize_GetMagnificationFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMagnificationFactors() :
      op->vtkImageResize::GetMagnificationFactors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorder(temp0);
    }
    else
    {
      op->vtkImageResize::SetBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_BorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOn();
    }
    else
    {
      op->vtkImageResize::BorderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_BorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOff();
    }
    else
    {
      op->vtkImageResize::BorderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkImageResize::GetBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCropping(temp0);
    }
    else
    {
      op->vtkImageResize::SetCropping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_CroppingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CroppingOn();
    }
    else
    {
      op->vtkImageResize::CroppingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_CroppingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CroppingOff();
    }
    else
    {
      op->vtkImageResize::CroppingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCropping() :
      op->vtkImageResize::GetCropping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetCroppingRegion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

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
      op->SetCroppingRegion(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageResize::SetCroppingRegion(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetCroppingRegion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegion(temp0);
    }
    else
    {
      op->vtkImageResize::SetCroppingRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetCroppingRegion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageResize_SetCroppingRegion_s1(self, args);
    case 1:
      return PyvtkImageResize_SetCroppingRegion_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCroppingRegion");
  return nullptr;
}



static PyObject *
PyvtkImageResize_GetCroppingRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCroppingRegion() :
      op->vtkImageResize::GetCroppingRegion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolate(temp0);
    }
    else
    {
      op->vtkImageResize::SetInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOn();
    }
    else
    {
      op->vtkImageResize::InterpolateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOff();
    }
    else
    {
      op->vtkImageResize::InterpolateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolate() :
      op->vtkImageResize::GetInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  vtkAbstractImageInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractImageInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetInterpolator(temp0);
    }
    else
    {
      op->vtkImageResize::SetInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractImageInterpolator *tempr = (ap.IsBound() ?
      op->GetInterpolator() :
      op->vtkImageResize::GetInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageResize::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageResize_Methods[] = {
  {"IsTypeOf", PyvtkImageResize_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageResize_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageResize_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageResize\nC++: static vtkImageResize *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageResize_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageResize\nC++: vtkImageResize *NewInstance()\n\n"},
  {"SetResizeMethod", PyvtkImageResize_SetResizeMethod, METH_VARARGS,
   "V.SetResizeMethod(int)\nC++: virtual void SetResizeMethod(int _arg)\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"GetResizeMethodMinValue", PyvtkImageResize_GetResizeMethodMinValue, METH_VARARGS,
   "V.GetResizeMethodMinValue() -> int\nC++: virtual int GetResizeMethodMinValue()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"GetResizeMethodMaxValue", PyvtkImageResize_GetResizeMethodMaxValue, METH_VARARGS,
   "V.GetResizeMethodMaxValue() -> int\nC++: virtual int GetResizeMethodMaxValue()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"GetResizeMethod", PyvtkImageResize_GetResizeMethod, METH_VARARGS,
   "V.GetResizeMethod() -> int\nC++: virtual int GetResizeMethod()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetResizeMethodToOutputDimensions", PyvtkImageResize_SetResizeMethodToOutputDimensions, METH_VARARGS,
   "V.SetResizeMethodToOutputDimensions()\nC++: void SetResizeMethodToOutputDimensions()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetResizeMethodToOutputSpacing", PyvtkImageResize_SetResizeMethodToOutputSpacing, METH_VARARGS,
   "V.SetResizeMethodToOutputSpacing()\nC++: void SetResizeMethodToOutputSpacing()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetResizeMethodToMagnificationFactors", PyvtkImageResize_SetResizeMethodToMagnificationFactors, METH_VARARGS,
   "V.SetResizeMethodToMagnificationFactors()\nC++: void SetResizeMethodToMagnificationFactors()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"GetResizeMethodAsString", PyvtkImageResize_GetResizeMethodAsString, METH_VARARGS,
   "V.GetResizeMethodAsString() -> string\nC++: virtual const char *GetResizeMethodAsString()\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"SetOutputDimensions", PyvtkImageResize_SetOutputDimensions, METH_VARARGS,
   "V.SetOutputDimensions(int, int, int)\nC++: void SetOutputDimensions(int, int, int)\nV.SetOutputDimensions((int, int, int))\nC++: void SetOutputDimensions(int a[3])\n\n"},
  {"GetOutputDimensions", PyvtkImageResize_GetOutputDimensions, METH_VARARGS,
   "V.GetOutputDimensions() -> (int, int, int)\nC++: int *GetOutputDimensions()\n\n"},
  {"SetOutputSpacing", PyvtkImageResize_SetOutputSpacing, METH_VARARGS,
   "V.SetOutputSpacing(float, float, float)\nC++: void SetOutputSpacing(double, double, double)\nV.SetOutputSpacing((float, float, float))\nC++: void SetOutputSpacing(double a[3])\n\n"},
  {"GetOutputSpacing", PyvtkImageResize_GetOutputSpacing, METH_VARARGS,
   "V.GetOutputSpacing() -> (float, float, float)\nC++: double *GetOutputSpacing()\n\n"},
  {"SetMagnificationFactors", PyvtkImageResize_SetMagnificationFactors, METH_VARARGS,
   "V.SetMagnificationFactors(float, float, float)\nC++: void SetMagnificationFactors(double, double, double)\nV.SetMagnificationFactors((float, float, float))\nC++: void SetMagnificationFactors(double a[3])\n\n"},
  {"GetMagnificationFactors", PyvtkImageResize_GetMagnificationFactors, METH_VARARGS,
   "V.GetMagnificationFactors() -> (float, float, float)\nC++: double *GetMagnificationFactors()\n\n"},
  {"SetBorder", PyvtkImageResize_SetBorder, METH_VARARGS,
   "V.SetBorder(int)\nC++: virtual void SetBorder(vtkTypeBool _arg)\n\nIf Border is Off (the default), then the centers of each of the\ncorner voxels will be considered to form the rectangular bounds\nof the image. This is the way that VTK normally computes image\nbounds.  If Border is On, then the image bounds will be defined\nby the outer corners of the voxels. This setting impacts how the\nresizing is done.  For example, if a MagnificationFactor of two\nis applied to a 256x256 image, the output image will be 512x512\nif Border is On, or 511x511 if Border is Off.\n"},
  {"BorderOn", PyvtkImageResize_BorderOn, METH_VARARGS,
   "V.BorderOn()\nC++: virtual void BorderOn()\n\nIf Border is Off (the default), then the centers of each of the\ncorner voxels will be considered to form the rectangular bounds\nof the image. This is the way that VTK normally computes image\nbounds.  If Border is On, then the image bounds will be defined\nby the outer corners of the voxels. This setting impacts how the\nresizing is done.  For example, if a MagnificationFactor of two\nis applied to a 256x256 image, the output image will be 512x512\nif Border is On, or 511x511 if Border is Off.\n"},
  {"BorderOff", PyvtkImageResize_BorderOff, METH_VARARGS,
   "V.BorderOff()\nC++: virtual void BorderOff()\n\nIf Border is Off (the default), then the centers of each of the\ncorner voxels will be considered to form the rectangular bounds\nof the image. This is the way that VTK normally computes image\nbounds.  If Border is On, then the image bounds will be defined\nby the outer corners of the voxels. This setting impacts how the\nresizing is done.  For example, if a MagnificationFactor of two\nis applied to a 256x256 image, the output image will be 512x512\nif Border is On, or 511x511 if Border is Off.\n"},
  {"GetBorder", PyvtkImageResize_GetBorder, METH_VARARGS,
   "V.GetBorder() -> int\nC++: virtual vtkTypeBool GetBorder()\n\nIf Border is Off (the default), then the centers of each of the\ncorner voxels will be considered to form the rectangular bounds\nof the image. This is the way that VTK normally computes image\nbounds.  If Border is On, then the image bounds will be defined\nby the outer corners of the voxels. This setting impacts how the\nresizing is done.  For example, if a MagnificationFactor of two\nis applied to a 256x256 image, the output image will be 512x512\nif Border is On, or 511x511 if Border is Off.\n"},
  {"SetCropping", PyvtkImageResize_SetCropping, METH_VARARGS,
   "V.SetCropping(int)\nC++: virtual void SetCropping(vtkTypeBool _arg)\n\nWhether to crop the input image before resizing (Off by default).\n If this is On, then the CroppingRegion must be set.\n"},
  {"CroppingOn", PyvtkImageResize_CroppingOn, METH_VARARGS,
   "V.CroppingOn()\nC++: virtual void CroppingOn()\n\nWhether to crop the input image before resizing (Off by default).\n If this is On, then the CroppingRegion must be set.\n"},
  {"CroppingOff", PyvtkImageResize_CroppingOff, METH_VARARGS,
   "V.CroppingOff()\nC++: virtual void CroppingOff()\n\nWhether to crop the input image before resizing (Off by default).\n If this is On, then the CroppingRegion must be set.\n"},
  {"GetCropping", PyvtkImageResize_GetCropping, METH_VARARGS,
   "V.GetCropping() -> int\nC++: virtual vtkTypeBool GetCropping()\n\nWhether to crop the input image before resizing (Off by default).\n If this is On, then the CroppingRegion must be set.\n"},
  {"SetCroppingRegion", PyvtkImageResize_SetCroppingRegion, METH_VARARGS,
   "V.SetCroppingRegion(float, float, float, float, float, float)\nC++: void SetCroppingRegion(double, double, double, double,\n    double, double)\nV.SetCroppingRegion((float, float, float, float, float, float))\nC++: void SetCroppingRegion(double a[6])\n\n"},
  {"GetCroppingRegion", PyvtkImageResize_GetCroppingRegion, METH_VARARGS,
   "V.GetCroppingRegion() -> (float, float, float, float, float,\n    float)\nC++: double *GetCroppingRegion()\n\n"},
  {"SetInterpolate", PyvtkImageResize_SetInterpolate, METH_VARARGS,
   "V.SetInterpolate(int)\nC++: virtual void SetInterpolate(vtkTypeBool _arg)\n\nTurn interpolation on or off (by default, interpolation is on).\n"},
  {"InterpolateOn", PyvtkImageResize_InterpolateOn, METH_VARARGS,
   "V.InterpolateOn()\nC++: virtual void InterpolateOn()\n\nTurn interpolation on or off (by default, interpolation is on).\n"},
  {"InterpolateOff", PyvtkImageResize_InterpolateOff, METH_VARARGS,
   "V.InterpolateOff()\nC++: virtual void InterpolateOff()\n\nTurn interpolation on or off (by default, interpolation is on).\n"},
  {"GetInterpolate", PyvtkImageResize_GetInterpolate, METH_VARARGS,
   "V.GetInterpolate() -> int\nC++: virtual vtkTypeBool GetInterpolate()\n\nTurn interpolation on or off (by default, interpolation is on).\n"},
  {"SetInterpolator", PyvtkImageResize_SetInterpolator, METH_VARARGS,
   "V.SetInterpolator(vtkAbstractImageInterpolator)\nC++: virtual void SetInterpolator(\n    vtkAbstractImageInterpolator *sampler)\n\nSet the interpolator for resampling the data.\n"},
  {"GetInterpolator", PyvtkImageResize_GetInterpolator, METH_VARARGS,
   "V.GetInterpolator() -> vtkAbstractImageInterpolator\nC++: virtual vtkAbstractImageInterpolator *GetInterpolator()\n\nSet the interpolator for resampling the data.\n"},
  {"GetMTime", PyvtkImageResize_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the modified time of the filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageResize_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageResize", // tp_name
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
  PyvtkImageResize_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageResize_StaticNew()
{
  return vtkImageResize::New();
}

PyObject *PyvtkImageResize_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageResize_Type, PyvtkImageResize_Methods,
    "vtkImageResize",
 &PyvtkImageResize_StaticNew);

  PyTypeObject *pytype = &PyvtkImageResize_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkThreadedImageAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "OUTPUT_DIMENSIONS", vtkImageResize::OUTPUT_DIMENSIONS },
        { "OUTPUT_SPACING", vtkImageResize::OUTPUT_SPACING },
        { "MAGNIFICATION_FACTORS", vtkImageResize::MAGNIFICATION_FACTORS },
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

void PyVTKAddFile_vtkImageResize(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageResize_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageResize", o) != 0)
  {
    Py_DECREF(o);
  }

}

