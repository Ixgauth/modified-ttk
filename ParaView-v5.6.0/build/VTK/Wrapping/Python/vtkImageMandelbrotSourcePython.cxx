// python wrapper for vtkImageMandelbrotSource
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
#include "vtkImageMandelbrotSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageMandelbrotSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageMandelbrotSource_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageMandelbrotSource_Doc =
  "vtkImageMandelbrotSource - Mandelbrot image.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageMandelbrotSource creates an unsigned char image of the\n"
  "Mandelbrot set.  The values in the image are the number of iterations\n"
  "it takes for the magnitude of the value to get over 2.  The equation\n"
  "repeated is z = z^2 + C (z and C are complex).  Initial value of z is\n"
  "zero, and the real value of C is mapped onto the x axis, and the\n"
  "imaginary value of C is mapped onto the Y Axis.  I was thinking of\n"
  "extending this source to generate Julia Sets (initial value of Z\n"
  "varies).  This would be 4 possible parameters to vary, but there are\n"
  "no more 4d images :( The third dimension (z axis) is the imaginary\n"
  "value of the initial value.\n\n";


static PyObject *
PyvtkImageMandelbrotSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageMandelbrotSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMandelbrotSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageMandelbrotSource *tempr = vtkImageMandelbrotSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMandelbrotSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMandelbrotSource::NewInstance());

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
PyvtkImageMandelbrotSource_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

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
      op->SetWholeExtent(temp0);
    }
    else
    {
      op->vtkImageMandelbrotSource::SetWholeExtent(temp0);
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
PyvtkImageMandelbrotSource_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageMandelbrotSource::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageMandelbrotSource_SetWholeExtent_s1(self, args);
    case 6:
      return PyvtkImageMandelbrotSource_SetWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return nullptr;
}



static PyObject *
PyvtkImageMandelbrotSource_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkImageMandelbrotSource::GetWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SetConstantSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstantSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstantSize(temp0);
    }
    else
    {
      op->vtkImageMandelbrotSource::SetConstantSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetConstantSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstantSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstantSize() :
      op->vtkImageMandelbrotSource::GetConstantSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_ConstantSizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstantSizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstantSizeOn();
    }
    else
    {
      op->vtkImageMandelbrotSource::ConstantSizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_ConstantSizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstantSizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstantSizeOff();
    }
    else
    {
      op->vtkImageMandelbrotSource::ConstantSizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SetProjectionAxes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

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
      op->SetProjectionAxes(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageMandelbrotSource::SetProjectionAxes(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_SetProjectionAxes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

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
      op->SetProjectionAxes(temp0);
    }
    else
    {
      op->vtkImageMandelbrotSource::SetProjectionAxes(temp0);
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
PyvtkImageMandelbrotSource_SetProjectionAxes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageMandelbrotSource_SetProjectionAxes_s1(self, args);
    case 1:
      return PyvtkImageMandelbrotSource_SetProjectionAxes_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetProjectionAxes");
  return nullptr;
}



static PyObject *
PyvtkImageMandelbrotSource_GetProjectionAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetProjectionAxes() :
      op->vtkImageMandelbrotSource::GetProjectionAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SetOriginCX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

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
      op->SetOriginCX(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageMandelbrotSource::SetOriginCX(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_SetOriginCX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOriginCX(temp0);
    }
    else
    {
      op->vtkImageMandelbrotSource::SetOriginCX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_SetOriginCX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageMandelbrotSource_SetOriginCX_s1(self, args);
    case 1:
      return PyvtkImageMandelbrotSource_SetOriginCX_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginCX");
  return nullptr;
}



static PyObject *
PyvtkImageMandelbrotSource_GetOriginCX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOriginCX() :
      op->vtkImageMandelbrotSource::GetOriginCX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SetSampleCX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

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
      op->SetSampleCX(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageMandelbrotSource::SetSampleCX(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_SetSampleCX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSampleCX(temp0);
    }
    else
    {
      op->vtkImageMandelbrotSource::SetSampleCX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_SetSampleCX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageMandelbrotSource_SetSampleCX_s1(self, args);
    case 1:
      return PyvtkImageMandelbrotSource_SetSampleCX_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleCX");
  return nullptr;
}



static PyObject *
PyvtkImageMandelbrotSource_GetSampleCX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSampleCX() :
      op->vtkImageMandelbrotSource::GetSampleCX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SetSizeCX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

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
      op->SetSizeCX(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageMandelbrotSource::SetSizeCX(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetSizeCX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSizeCX() :
      op->vtkImageMandelbrotSource::GetSizeCX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageMandelbrotSource_GetSizeCX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

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
      op->GetSizeCX(temp0);
    }
    else
    {
      op->vtkImageMandelbrotSource::GetSizeCX(temp0);
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
PyvtkImageMandelbrotSource_GetSizeCX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageMandelbrotSource_GetSizeCX_s1(self, args);
    case 1:
      return PyvtkImageMandelbrotSource_GetSizeCX_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSizeCX");
  return nullptr;
}



static PyObject *
PyvtkImageMandelbrotSource_SetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfIterations(temp0);
    }
    else
    {
      op->vtkImageMandelbrotSource::SetMaximumNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetMaximumNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterationsMinValue() :
      op->vtkImageMandelbrotSource::GetMaximumNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetMaximumNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterationsMaxValue() :
      op->vtkImageMandelbrotSource::GetMaximumNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterations() :
      op->vtkImageMandelbrotSource::GetMaximumNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_Zoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Zoom(temp0);
    }
    else
    {
      op->vtkImageMandelbrotSource::Zoom(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

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
      op->Pan(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageMandelbrotSource::Pan(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_CopyOriginAndSample(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOriginAndSample");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  vtkImageMandelbrotSource *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageMandelbrotSource"))
  {
    if (ap.IsBound())
    {
      op->CopyOriginAndSample(temp0);
    }
    else
    {
      op->vtkImageMandelbrotSource::CopyOriginAndSample(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_SetSubsampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubsampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubsampleRate(temp0);
    }
    else
    {
      op->vtkImageMandelbrotSource::SetSubsampleRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetSubsampleRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsampleRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubsampleRateMinValue() :
      op->vtkImageMandelbrotSource::GetSubsampleRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetSubsampleRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsampleRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubsampleRateMaxValue() :
      op->vtkImageMandelbrotSource::GetSubsampleRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMandelbrotSource_GetSubsampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMandelbrotSource *op = static_cast<vtkImageMandelbrotSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubsampleRate() :
      op->vtkImageMandelbrotSource::GetSubsampleRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageMandelbrotSource_Methods[] = {
  {"IsTypeOf", PyvtkImageMandelbrotSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageMandelbrotSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageMandelbrotSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageMandelbrotSource\nC++: static vtkImageMandelbrotSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageMandelbrotSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageMandelbrotSource\nC++: vtkImageMandelbrotSource *NewInstance()\n\n"},
  {"SetWholeExtent", PyvtkImageMandelbrotSource_SetWholeExtent, METH_VARARGS,
   "V.SetWholeExtent([int, int, int, int, int, int])\nC++: void SetWholeExtent(int extent[6])\nV.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int minX, int maxX, int minY, int maxY,\n    int minZ, int maxZ)\n\nSet/Get the extent of the whole output Volume.\n"},
  {"GetWholeExtent", PyvtkImageMandelbrotSource_GetWholeExtent, METH_VARARGS,
   "V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {"SetConstantSize", PyvtkImageMandelbrotSource_SetConstantSize, METH_VARARGS,
   "V.SetConstantSize(int)\nC++: virtual void SetConstantSize(vtkTypeBool _arg)\n\nThis flag determines whether the Size or spacing of a data set\nremain constant (when extent is changed). By default, size\nremains constant.\n"},
  {"GetConstantSize", PyvtkImageMandelbrotSource_GetConstantSize, METH_VARARGS,
   "V.GetConstantSize() -> int\nC++: virtual vtkTypeBool GetConstantSize()\n\nThis flag determines whether the Size or spacing of a data set\nremain constant (when extent is changed). By default, size\nremains constant.\n"},
  {"ConstantSizeOn", PyvtkImageMandelbrotSource_ConstantSizeOn, METH_VARARGS,
   "V.ConstantSizeOn()\nC++: virtual void ConstantSizeOn()\n\nThis flag determines whether the Size or spacing of a data set\nremain constant (when extent is changed). By default, size\nremains constant.\n"},
  {"ConstantSizeOff", PyvtkImageMandelbrotSource_ConstantSizeOff, METH_VARARGS,
   "V.ConstantSizeOff()\nC++: virtual void ConstantSizeOff()\n\nThis flag determines whether the Size or spacing of a data set\nremain constant (when extent is changed). By default, size\nremains constant.\n"},
  {"SetProjectionAxes", PyvtkImageMandelbrotSource_SetProjectionAxes, METH_VARARGS,
   "V.SetProjectionAxes(int, int, int)\nC++: void SetProjectionAxes(int x, int y, int z)\nV.SetProjectionAxes([int, int, int])\nC++: void SetProjectionAxes(int a[3])\n\nSet the projection from the 4D space (4 parameters / 2 imaginary\nnumbers) to the axes of the 3D Volume. 0=C_Real, 1=C_Imaginary,\n2=X_Real, 4=X_Imaginary\n"},
  {"GetProjectionAxes", PyvtkImageMandelbrotSource_GetProjectionAxes, METH_VARARGS,
   "V.GetProjectionAxes() -> (int, int, int)\nC++: int *GetProjectionAxes()\n\n"},
  {"SetOriginCX", PyvtkImageMandelbrotSource_SetOriginCX, METH_VARARGS,
   "V.SetOriginCX(float, float, float, float)\nC++: void SetOriginCX(double, double, double, double)\nV.SetOriginCX((float, float, float, float))\nC++: void SetOriginCX(double a[4])\n\n"},
  {"GetOriginCX", PyvtkImageMandelbrotSource_GetOriginCX, METH_VARARGS,
   "V.GetOriginCX() -> (float, float, float, float)\nC++: double *GetOriginCX()\n\n"},
  {"SetSampleCX", PyvtkImageMandelbrotSource_SetSampleCX, METH_VARARGS,
   "V.SetSampleCX(float, float, float, float)\nC++: void SetSampleCX(double, double, double, double)\nV.SetSampleCX((float, float, float, float))\nC++: void SetSampleCX(double a[4])\n\n"},
  {"GetSampleCX", PyvtkImageMandelbrotSource_GetSampleCX, METH_VARARGS,
   "V.GetSampleCX() -> (float, float, float, float)\nC++: double *GetSampleCX()\n\n"},
  {"SetSizeCX", PyvtkImageMandelbrotSource_SetSizeCX, METH_VARARGS,
   "V.SetSizeCX(float, float, float, float)\nC++: void SetSizeCX(double cReal, double cImag, double xReal,\n    double xImag)\n\nJust a different way of setting the sample. This sets the size of\nthe 4D volume. SampleCX is computed from size and extent. Size is\nignored when a dimension i 0 (collapsed).\n"},
  {"GetSizeCX", PyvtkImageMandelbrotSource_GetSizeCX, METH_VARARGS,
   "V.GetSizeCX() -> (float, float, float, float)\nC++: double *GetSizeCX()\nV.GetSizeCX([float, float, float, float])\nC++: void GetSizeCX(double s[4])\n\nJust a different way of setting the sample. This sets the size of\nthe 4D volume. SampleCX is computed from size and extent. Size is\nignored when a dimension i 0 (collapsed).\n"},
  {"SetMaximumNumberOfIterations", PyvtkImageMandelbrotSource_SetMaximumNumberOfIterations, METH_VARARGS,
   "V.SetMaximumNumberOfIterations(int)\nC++: virtual void SetMaximumNumberOfIterations(\n    unsigned short _arg)\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {"GetMaximumNumberOfIterationsMinValue", PyvtkImageMandelbrotSource_GetMaximumNumberOfIterationsMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfIterationsMinValue() -> int\nC++: virtual unsigned short GetMaximumNumberOfIterationsMinValue()\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {"GetMaximumNumberOfIterationsMaxValue", PyvtkImageMandelbrotSource_GetMaximumNumberOfIterationsMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfIterationsMaxValue() -> int\nC++: virtual unsigned short GetMaximumNumberOfIterationsMaxValue()\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {"GetMaximumNumberOfIterations", PyvtkImageMandelbrotSource_GetMaximumNumberOfIterations, METH_VARARGS,
   "V.GetMaximumNumberOfIterations() -> int\nC++: virtual unsigned short GetMaximumNumberOfIterations()\n\nThe maximum number of cycles run to see if the value goes over 2\n"},
  {"Zoom", PyvtkImageMandelbrotSource_Zoom, METH_VARARGS,
   "V.Zoom(float)\nC++: void Zoom(double factor)\n\nConvenience for Viewer.  Pan 3D volume relative to spacing. Zoom\nconstant factor.\n"},
  {"Pan", PyvtkImageMandelbrotSource_Pan, METH_VARARGS,
   "V.Pan(float, float, float)\nC++: void Pan(double x, double y, double z)\n\nConvenience for Viewer.  Pan 3D volume relative to spacing. Zoom\nconstant factor.\n"},
  {"CopyOriginAndSample", PyvtkImageMandelbrotSource_CopyOriginAndSample, METH_VARARGS,
   "V.CopyOriginAndSample(vtkImageMandelbrotSource)\nC++: void CopyOriginAndSample(vtkImageMandelbrotSource *source)\n\nConvenience for Viewer.  Copy the OriginCX and the SpacingCX.\nWhat about other parameters ???\n"},
  {"SetSubsampleRate", PyvtkImageMandelbrotSource_SetSubsampleRate, METH_VARARGS,
   "V.SetSubsampleRate(int)\nC++: virtual void SetSubsampleRate(int _arg)\n\nSet/Get a subsample rate.\n"},
  {"GetSubsampleRateMinValue", PyvtkImageMandelbrotSource_GetSubsampleRateMinValue, METH_VARARGS,
   "V.GetSubsampleRateMinValue() -> int\nC++: virtual int GetSubsampleRateMinValue()\n\nSet/Get a subsample rate.\n"},
  {"GetSubsampleRateMaxValue", PyvtkImageMandelbrotSource_GetSubsampleRateMaxValue, METH_VARARGS,
   "V.GetSubsampleRateMaxValue() -> int\nC++: virtual int GetSubsampleRateMaxValue()\n\nSet/Get a subsample rate.\n"},
  {"GetSubsampleRate", PyvtkImageMandelbrotSource_GetSubsampleRate, METH_VARARGS,
   "V.GetSubsampleRate() -> int\nC++: virtual int GetSubsampleRate()\n\nSet/Get a subsample rate.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageMandelbrotSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingSourcesPython.vtkImageMandelbrotSource", // tp_name
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
  PyvtkImageMandelbrotSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageMandelbrotSource_StaticNew()
{
  return vtkImageMandelbrotSource::New();
}

PyObject *PyvtkImageMandelbrotSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageMandelbrotSource_Type, PyvtkImageMandelbrotSource_Methods,
    "vtkImageMandelbrotSource",
 &PyvtkImageMandelbrotSource_StaticNew);

  PyTypeObject *pytype = &PyvtkImageMandelbrotSource_Type;

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

void PyVTKAddFile_vtkImageMandelbrotSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageMandelbrotSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageMandelbrotSource", o) != 0)
  {
    Py_DECREF(o);
  }

}
