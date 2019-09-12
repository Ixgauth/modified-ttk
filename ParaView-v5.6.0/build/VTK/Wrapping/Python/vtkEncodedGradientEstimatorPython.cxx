// python wrapper for vtkEncodedGradientEstimator
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
#include "vtkEncodedGradientEstimator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEncodedGradientEstimator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEncodedGradientEstimator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkEncodedGradientEstimator_Doc =
  "vtkEncodedGradientEstimator - Superclass for gradient estimation\n\n"
  "Superclass: vtkObject\n\n"
  "vtkEncodedGradientEstimator is an abstract superclass for gradient\n"
  "estimation. It takes a scalar input of vtkImageData, computes a\n"
  "gradient value for every point, and encodes this value into a three\n"
  "byte value (2 for direction, 1 for magnitude) using the\n"
  "vtkDirectionEncoder. The direction encoder is defaulted to a\n"
  "vtkRecursiveSphereDirectionEncoder, but can be overridden with the\n"
  "SetDirectionEncoder method. The scale and the bias values for the\n"
  "gradient magnitude are used to convert it into a one byte value\n"
  "according to v = m*scale + bias where m is the magnitude and v is the\n"
  "resulting one byte value.\n"
  "@sa\n"
  "vtkFiniteDifferenceGradientEstimator vtkDirectionEncoder\n\n";


static PyObject *
PyvtkEncodedGradientEstimator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEncodedGradientEstimator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEncodedGradientEstimator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEncodedGradientEstimator *tempr = vtkEncodedGradientEstimator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEncodedGradientEstimator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEncodedGradientEstimator::NewInstance());

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
PyvtkEncodedGradientEstimator_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInputData() :
      op->vtkEncodedGradientEstimator::GetInputData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetGradientMagnitudeScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGradientMagnitudeScale(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetGradientMagnitudeScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetGradientMagnitudeScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeScale() :
      op->vtkEncodedGradientEstimator::GetGradientMagnitudeScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetGradientMagnitudeBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGradientMagnitudeBias(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetGradientMagnitudeBias(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetGradientMagnitudeBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeBias() :
      op->vtkEncodedGradientEstimator::GetGradientMagnitudeBias());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetBoundsClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundsClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundsClip(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetBoundsClip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetBoundsClipMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundsClipMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundsClipMinValue() :
      op->vtkEncodedGradientEstimator::GetBoundsClipMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetBoundsClipMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundsClipMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundsClipMaxValue() :
      op->vtkEncodedGradientEstimator::GetBoundsClipMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetBoundsClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundsClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundsClip() :
      op->vtkEncodedGradientEstimator::GetBoundsClip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_BoundsClipOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundsClipOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundsClipOn();
    }
    else
    {
      op->vtkEncodedGradientEstimator::BoundsClipOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_BoundsClipOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundsClipOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundsClipOff();
    }
    else
    {
      op->vtkEncodedGradientEstimator::BoundsClipOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEncodedGradientEstimator_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEncodedGradientEstimator_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkEncodedGradientEstimator_SetBounds_s1(self, args);
    case 1:
      return PyvtkEncodedGradientEstimator_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkEncodedGradientEstimator_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkEncodedGradientEstimator::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkEncodedGradientEstimator::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetEncodedNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetEncodedNormals() :
      op->vtkEncodedGradientEstimator::GetEncodedNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetEncodedNormalIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedNormalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEncodedNormalIndex(temp0) :
      op->vtkEncodedGradientEstimator::GetEncodedNormalIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEncodedGradientEstimator_GetEncodedNormalIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedNormalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GetEncodedNormalIndex(temp0, temp1, temp2) :
      op->vtkEncodedGradientEstimator::GetEncodedNormalIndex(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEncodedGradientEstimator_GetEncodedNormalIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkEncodedGradientEstimator_GetEncodedNormalIndex_s1(self, args);
    case 3:
      return PyvtkEncodedGradientEstimator_GetEncodedNormalIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEncodedNormalIndex");
  return nullptr;
}



static PyObject *
PyvtkEncodedGradientEstimator_GetGradientMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetGradientMagnitudes() :
      op->vtkEncodedGradientEstimator::GetGradientMagnitudes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfThreads(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetNumberOfThreads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMinValue() :
      op->vtkEncodedGradientEstimator::GetNumberOfThreadsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMaxValue() :
      op->vtkEncodedGradientEstimator::GetNumberOfThreadsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkEncodedGradientEstimator::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetDirectionEncoder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionEncoder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  vtkDirectionEncoder *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDirectionEncoder"))
  {
    if (ap.IsBound())
    {
      op->SetDirectionEncoder(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetDirectionEncoder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetDirectionEncoder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionEncoder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDirectionEncoder *tempr = (ap.IsBound() ?
      op->GetDirectionEncoder() :
      op->vtkEncodedGradientEstimator::GetDirectionEncoder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetComputeGradientMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradientMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeGradientMagnitudes(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetComputeGradientMagnitudes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetComputeGradientMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradientMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeGradientMagnitudes() :
      op->vtkEncodedGradientEstimator::GetComputeGradientMagnitudes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_ComputeGradientMagnitudesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientMagnitudesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientMagnitudesOn();
    }
    else
    {
      op->vtkEncodedGradientEstimator::ComputeGradientMagnitudesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_ComputeGradientMagnitudesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientMagnitudesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientMagnitudesOff();
    }
    else
    {
      op->vtkEncodedGradientEstimator::ComputeGradientMagnitudesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetCylinderClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCylinderClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCylinderClip(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetCylinderClip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetCylinderClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCylinderClip() :
      op->vtkEncodedGradientEstimator::GetCylinderClip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_CylinderClipOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CylinderClipOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CylinderClipOn();
    }
    else
    {
      op->vtkEncodedGradientEstimator::CylinderClipOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_CylinderClipOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CylinderClipOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CylinderClipOff();
    }
    else
    {
      op->vtkEncodedGradientEstimator::CylinderClipOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetLastUpdateTimeInSeconds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastUpdateTimeInSeconds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLastUpdateTimeInSeconds() :
      op->vtkEncodedGradientEstimator::GetLastUpdateTimeInSeconds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetLastUpdateTimeInCPUSeconds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastUpdateTimeInCPUSeconds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLastUpdateTimeInCPUSeconds() :
      op->vtkEncodedGradientEstimator::GetLastUpdateTimeInCPUSeconds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetUseCylinderClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCylinderClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseCylinderClip() :
      op->vtkEncodedGradientEstimator::GetUseCylinderClip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetCircleLimits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircleLimits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCircleLimits() :
      op->vtkEncodedGradientEstimator::GetCircleLimits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetZeroNormalThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroNormalThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZeroNormalThreshold(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetZeroNormalThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetZeroNormalThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalThreshold() :
      op->vtkEncodedGradientEstimator::GetZeroNormalThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetZeroPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZeroPad(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetZeroPad(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetZeroPadMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroPadMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZeroPadMinValue() :
      op->vtkEncodedGradientEstimator::GetZeroPadMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetZeroPadMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroPadMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZeroPadMaxValue() :
      op->vtkEncodedGradientEstimator::GetZeroPadMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetZeroPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZeroPad() :
      op->vtkEncodedGradientEstimator::GetZeroPad());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_ZeroPadOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZeroPadOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZeroPadOn();
    }
    else
    {
      op->vtkEncodedGradientEstimator::ZeroPadOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_ZeroPadOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZeroPadOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZeroPadOff();
    }
    else
    {
      op->vtkEncodedGradientEstimator::ZeroPadOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetInputSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetInputSize() :
      op->vtkEncodedGradientEstimator::GetInputSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetInputAspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetInputAspect() :
      op->vtkEncodedGradientEstimator::GetInputAspect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkEncodedGradientEstimator_Methods[] = {
  {"IsTypeOf", PyvtkEncodedGradientEstimator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEncodedGradientEstimator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEncodedGradientEstimator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEncodedGradientEstimator\nC++: static vtkEncodedGradientEstimator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEncodedGradientEstimator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEncodedGradientEstimator\nC++: vtkEncodedGradientEstimator *NewInstance()\n\n"},
  {"SetInputData", PyvtkEncodedGradientEstimator_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkImageData)\nC++: virtual void SetInputData(vtkImageData *)\n\nSet/Get the scalar input for which the normals will be\ncalculated. Note that this call does not setup a pipeline\nconnection. vtkEncodedGradientEstimator is not an algorithm and\ndoes not update its input. If you are directly using this class,\nyou may need to manually update the algorithm that produces this\ndata object.\n"},
  {"GetInputData", PyvtkEncodedGradientEstimator_GetInputData, METH_VARARGS,
   "V.GetInputData() -> vtkImageData\nC++: virtual vtkImageData *GetInputData()\n\nSet/Get the scalar input for which the normals will be\ncalculated. Note that this call does not setup a pipeline\nconnection. vtkEncodedGradientEstimator is not an algorithm and\ndoes not update its input. If you are directly using this class,\nyou may need to manually update the algorithm that produces this\ndata object.\n"},
  {"SetGradientMagnitudeScale", PyvtkEncodedGradientEstimator_SetGradientMagnitudeScale, METH_VARARGS,
   "V.SetGradientMagnitudeScale(float)\nC++: virtual void SetGradientMagnitudeScale(float _arg)\n\nSet/Get the scale and bias for the gradient magnitude\n"},
  {"GetGradientMagnitudeScale", PyvtkEncodedGradientEstimator_GetGradientMagnitudeScale, METH_VARARGS,
   "V.GetGradientMagnitudeScale() -> float\nC++: virtual float GetGradientMagnitudeScale()\n\nSet/Get the scale and bias for the gradient magnitude\n"},
  {"SetGradientMagnitudeBias", PyvtkEncodedGradientEstimator_SetGradientMagnitudeBias, METH_VARARGS,
   "V.SetGradientMagnitudeBias(float)\nC++: virtual void SetGradientMagnitudeBias(float _arg)\n\nSet/Get the scale and bias for the gradient magnitude\n"},
  {"GetGradientMagnitudeBias", PyvtkEncodedGradientEstimator_GetGradientMagnitudeBias, METH_VARARGS,
   "V.GetGradientMagnitudeBias() -> float\nC++: virtual float GetGradientMagnitudeBias()\n\nSet/Get the scale and bias for the gradient magnitude\n"},
  {"SetBoundsClip", PyvtkEncodedGradientEstimator_SetBoundsClip, METH_VARARGS,
   "V.SetBoundsClip(int)\nC++: virtual void SetBoundsClip(vtkTypeBool _arg)\n\nTurn on / off the bounding of the normal computation by the\nthis->Bounds bounding box\n"},
  {"GetBoundsClipMinValue", PyvtkEncodedGradientEstimator_GetBoundsClipMinValue, METH_VARARGS,
   "V.GetBoundsClipMinValue() -> int\nC++: virtual vtkTypeBool GetBoundsClipMinValue()\n\nTurn on / off the bounding of the normal computation by the\nthis->Bounds bounding box\n"},
  {"GetBoundsClipMaxValue", PyvtkEncodedGradientEstimator_GetBoundsClipMaxValue, METH_VARARGS,
   "V.GetBoundsClipMaxValue() -> int\nC++: virtual vtkTypeBool GetBoundsClipMaxValue()\n\nTurn on / off the bounding of the normal computation by the\nthis->Bounds bounding box\n"},
  {"GetBoundsClip", PyvtkEncodedGradientEstimator_GetBoundsClip, METH_VARARGS,
   "V.GetBoundsClip() -> int\nC++: virtual vtkTypeBool GetBoundsClip()\n\nTurn on / off the bounding of the normal computation by the\nthis->Bounds bounding box\n"},
  {"BoundsClipOn", PyvtkEncodedGradientEstimator_BoundsClipOn, METH_VARARGS,
   "V.BoundsClipOn()\nC++: virtual void BoundsClipOn()\n\nTurn on / off the bounding of the normal computation by the\nthis->Bounds bounding box\n"},
  {"BoundsClipOff", PyvtkEncodedGradientEstimator_BoundsClipOff, METH_VARARGS,
   "V.BoundsClipOff()\nC++: virtual void BoundsClipOff()\n\nTurn on / off the bounding of the normal computation by the\nthis->Bounds bounding box\n"},
  {"SetBounds", PyvtkEncodedGradientEstimator_SetBounds, METH_VARARGS,
   "V.SetBounds(int, int, int, int, int, int)\nC++: void SetBounds(int, int, int, int, int, int)\nV.SetBounds((int, int, int, int, int, int))\nC++: void SetBounds(int a[6])\n\n"},
  {"GetBounds", PyvtkEncodedGradientEstimator_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (int, int, int, int, int, int)\nC++: int *GetBounds()\n\nSet / Get the bounds of the computation (used if\nthis->ComputationBounds is 1.) The bounds are specified xmin,\nxmax, ymin, ymax, zmin, zmax.\n"},
  {"Update", PyvtkEncodedGradientEstimator_Update, METH_VARARGS,
   "V.Update()\nC++: void Update(void)\n\nRecompute the encoded normals and gradient magnitudes.\n"},
  {"GetEncodedNormals", PyvtkEncodedGradientEstimator_GetEncodedNormals, METH_VARARGS,
   "V.GetEncodedNormals() -> (int, ...)\nC++: unsigned short *GetEncodedNormals(void)\n\nGet the encoded normals.\n"},
  {"GetEncodedNormalIndex", PyvtkEncodedGradientEstimator_GetEncodedNormalIndex, METH_VARARGS,
   "V.GetEncodedNormalIndex(int) -> int\nC++: int GetEncodedNormalIndex(vtkIdType xyz_index)\nV.GetEncodedNormalIndex(int, int, int) -> int\nC++: int GetEncodedNormalIndex(int x_index, int y_index,\n    int z_index)\n\nGet the encoded normal at an x,y,z location in the volume\n"},
  {"GetGradientMagnitudes", PyvtkEncodedGradientEstimator_GetGradientMagnitudes, METH_VARARGS,
   "V.GetGradientMagnitudes() -> (int, ...)\nC++: unsigned char *GetGradientMagnitudes(void)\n\nGet the gradient magnitudes\n"},
  {"SetNumberOfThreads", PyvtkEncodedGradientEstimator_SetNumberOfThreads, METH_VARARGS,
   "V.SetNumberOfThreads(int)\nC++: virtual void SetNumberOfThreads(int _arg)\n\nGet/Set the number of threads to create when encoding normals\nThis defaults to the number of available processors on the\nmachine\n"},
  {"GetNumberOfThreadsMinValue", PyvtkEncodedGradientEstimator_GetNumberOfThreadsMinValue, METH_VARARGS,
   "V.GetNumberOfThreadsMinValue() -> int\nC++: virtual int GetNumberOfThreadsMinValue()\n\nGet/Set the number of threads to create when encoding normals\nThis defaults to the number of available processors on the\nmachine\n"},
  {"GetNumberOfThreadsMaxValue", PyvtkEncodedGradientEstimator_GetNumberOfThreadsMaxValue, METH_VARARGS,
   "V.GetNumberOfThreadsMaxValue() -> int\nC++: virtual int GetNumberOfThreadsMaxValue()\n\nGet/Set the number of threads to create when encoding normals\nThis defaults to the number of available processors on the\nmachine\n"},
  {"GetNumberOfThreads", PyvtkEncodedGradientEstimator_GetNumberOfThreads, METH_VARARGS,
   "V.GetNumberOfThreads() -> int\nC++: virtual int GetNumberOfThreads()\n\nGet/Set the number of threads to create when encoding normals\nThis defaults to the number of available processors on the\nmachine\n"},
  {"SetDirectionEncoder", PyvtkEncodedGradientEstimator_SetDirectionEncoder, METH_VARARGS,
   "V.SetDirectionEncoder(vtkDirectionEncoder)\nC++: void SetDirectionEncoder(vtkDirectionEncoder *direnc)\n\nSet / Get the direction encoder used to encode normal directions\nto fit within two bytes\n"},
  {"GetDirectionEncoder", PyvtkEncodedGradientEstimator_GetDirectionEncoder, METH_VARARGS,
   "V.GetDirectionEncoder() -> vtkDirectionEncoder\nC++: virtual vtkDirectionEncoder *GetDirectionEncoder()\n\nSet / Get the direction encoder used to encode normal directions\nto fit within two bytes\n"},
  {"SetComputeGradientMagnitudes", PyvtkEncodedGradientEstimator_SetComputeGradientMagnitudes, METH_VARARGS,
   "V.SetComputeGradientMagnitudes(int)\nC++: virtual void SetComputeGradientMagnitudes(vtkTypeBool _arg)\n\nIf you don't want to compute gradient magnitudes (but you do want\nnormals for shading) this can be used. Be careful - if if you a\nnon-constant gradient magnitude transfer function and you turn\nthis on, it may crash\n"},
  {"GetComputeGradientMagnitudes", PyvtkEncodedGradientEstimator_GetComputeGradientMagnitudes, METH_VARARGS,
   "V.GetComputeGradientMagnitudes() -> int\nC++: virtual vtkTypeBool GetComputeGradientMagnitudes()\n\nIf you don't want to compute gradient magnitudes (but you do want\nnormals for shading) this can be used. Be careful - if if you a\nnon-constant gradient magnitude transfer function and you turn\nthis on, it may crash\n"},
  {"ComputeGradientMagnitudesOn", PyvtkEncodedGradientEstimator_ComputeGradientMagnitudesOn, METH_VARARGS,
   "V.ComputeGradientMagnitudesOn()\nC++: virtual void ComputeGradientMagnitudesOn()\n\nIf you don't want to compute gradient magnitudes (but you do want\nnormals for shading) this can be used. Be careful - if if you a\nnon-constant gradient magnitude transfer function and you turn\nthis on, it may crash\n"},
  {"ComputeGradientMagnitudesOff", PyvtkEncodedGradientEstimator_ComputeGradientMagnitudesOff, METH_VARARGS,
   "V.ComputeGradientMagnitudesOff()\nC++: virtual void ComputeGradientMagnitudesOff()\n\nIf you don't want to compute gradient magnitudes (but you do want\nnormals for shading) this can be used. Be careful - if if you a\nnon-constant gradient magnitude transfer function and you turn\nthis on, it may crash\n"},
  {"SetCylinderClip", PyvtkEncodedGradientEstimator_SetCylinderClip, METH_VARARGS,
   "V.SetCylinderClip(int)\nC++: virtual void SetCylinderClip(vtkTypeBool _arg)\n\nIf the data in each slice is only contained within a circle\ncircumscribed within the slice, and the slice is square, then\ndon't compute anything outside the circle. This circle through\nthe slices forms a cylinder.\n"},
  {"GetCylinderClip", PyvtkEncodedGradientEstimator_GetCylinderClip, METH_VARARGS,
   "V.GetCylinderClip() -> int\nC++: virtual vtkTypeBool GetCylinderClip()\n\nIf the data in each slice is only contained within a circle\ncircumscribed within the slice, and the slice is square, then\ndon't compute anything outside the circle. This circle through\nthe slices forms a cylinder.\n"},
  {"CylinderClipOn", PyvtkEncodedGradientEstimator_CylinderClipOn, METH_VARARGS,
   "V.CylinderClipOn()\nC++: virtual void CylinderClipOn()\n\nIf the data in each slice is only contained within a circle\ncircumscribed within the slice, and the slice is square, then\ndon't compute anything outside the circle. This circle through\nthe slices forms a cylinder.\n"},
  {"CylinderClipOff", PyvtkEncodedGradientEstimator_CylinderClipOff, METH_VARARGS,
   "V.CylinderClipOff()\nC++: virtual void CylinderClipOff()\n\nIf the data in each slice is only contained within a circle\ncircumscribed within the slice, and the slice is square, then\ndon't compute anything outside the circle. This circle through\nthe slices forms a cylinder.\n"},
  {"GetLastUpdateTimeInSeconds", PyvtkEncodedGradientEstimator_GetLastUpdateTimeInSeconds, METH_VARARGS,
   "V.GetLastUpdateTimeInSeconds() -> float\nC++: virtual float GetLastUpdateTimeInSeconds()\n\nGet the time required for the last update in seconds or cpu\nseconds\n"},
  {"GetLastUpdateTimeInCPUSeconds", PyvtkEncodedGradientEstimator_GetLastUpdateTimeInCPUSeconds, METH_VARARGS,
   "V.GetLastUpdateTimeInCPUSeconds() -> float\nC++: virtual float GetLastUpdateTimeInCPUSeconds()\n\nGet the time required for the last update in seconds or cpu\nseconds\n"},
  {"GetUseCylinderClip", PyvtkEncodedGradientEstimator_GetUseCylinderClip, METH_VARARGS,
   "V.GetUseCylinderClip() -> int\nC++: virtual int GetUseCylinderClip()\n\n"},
  {"GetCircleLimits", PyvtkEncodedGradientEstimator_GetCircleLimits, METH_VARARGS,
   "V.GetCircleLimits() -> (int, ...)\nC++: int *GetCircleLimits()\n\n"},
  {"SetZeroNormalThreshold", PyvtkEncodedGradientEstimator_SetZeroNormalThreshold, METH_VARARGS,
   "V.SetZeroNormalThreshold(float)\nC++: void SetZeroNormalThreshold(float v)\n\nSet / Get the ZeroNormalThreshold - this defines the minimum\nmagnitude of a gradient that is considered sufficient to define a\ndirection. Gradients with magnitudes at or less than this value\nare given a \"zero normal\" index. These are handled specially in\nthe shader, and you can set the intensity of light for these zero\nnormals in the gradient shader.\n"},
  {"GetZeroNormalThreshold", PyvtkEncodedGradientEstimator_GetZeroNormalThreshold, METH_VARARGS,
   "V.GetZeroNormalThreshold() -> float\nC++: virtual float GetZeroNormalThreshold()\n\nSet / Get the ZeroNormalThreshold - this defines the minimum\nmagnitude of a gradient that is considered sufficient to define a\ndirection. Gradients with magnitudes at or less than this value\nare given a \"zero normal\" index. These are handled specially in\nthe shader, and you can set the intensity of light for these zero\nnormals in the gradient shader.\n"},
  {"SetZeroPad", PyvtkEncodedGradientEstimator_SetZeroPad, METH_VARARGS,
   "V.SetZeroPad(int)\nC++: virtual void SetZeroPad(vtkTypeBool _arg)\n\nAssume that the data value outside the volume is zero when\ncomputing normals.\n"},
  {"GetZeroPadMinValue", PyvtkEncodedGradientEstimator_GetZeroPadMinValue, METH_VARARGS,
   "V.GetZeroPadMinValue() -> int\nC++: virtual vtkTypeBool GetZeroPadMinValue()\n\nAssume that the data value outside the volume is zero when\ncomputing normals.\n"},
  {"GetZeroPadMaxValue", PyvtkEncodedGradientEstimator_GetZeroPadMaxValue, METH_VARARGS,
   "V.GetZeroPadMaxValue() -> int\nC++: virtual vtkTypeBool GetZeroPadMaxValue()\n\nAssume that the data value outside the volume is zero when\ncomputing normals.\n"},
  {"GetZeroPad", PyvtkEncodedGradientEstimator_GetZeroPad, METH_VARARGS,
   "V.GetZeroPad() -> int\nC++: virtual vtkTypeBool GetZeroPad()\n\nAssume that the data value outside the volume is zero when\ncomputing normals.\n"},
  {"ZeroPadOn", PyvtkEncodedGradientEstimator_ZeroPadOn, METH_VARARGS,
   "V.ZeroPadOn()\nC++: virtual void ZeroPadOn()\n\nAssume that the data value outside the volume is zero when\ncomputing normals.\n"},
  {"ZeroPadOff", PyvtkEncodedGradientEstimator_ZeroPadOff, METH_VARARGS,
   "V.ZeroPadOff()\nC++: virtual void ZeroPadOff()\n\nAssume that the data value outside the volume is zero when\ncomputing normals.\n"},
  {"GetInputSize", PyvtkEncodedGradientEstimator_GetInputSize, METH_VARARGS,
   "V.GetInputSize() -> (int, int, int)\nC++: int *GetInputSize()\n\n"},
  {"GetInputAspect", PyvtkEncodedGradientEstimator_GetInputAspect, METH_VARARGS,
   "V.GetInputAspect() -> (float, float, float)\nC++: float *GetInputAspect()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEncodedGradientEstimator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkEncodedGradientEstimator", // tp_name
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
  PyvtkEncodedGradientEstimator_Doc, // tp_doc
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

PyObject *PyvtkEncodedGradientEstimator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEncodedGradientEstimator_Type, PyvtkEncodedGradientEstimator_Methods,
    "vtkEncodedGradientEstimator",
 nullptr);

  PyTypeObject *pytype = &PyvtkEncodedGradientEstimator_Type;

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

void PyVTKAddFile_vtkEncodedGradientEstimator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEncodedGradientEstimator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEncodedGradientEstimator", o) != 0)
  {
    Py_DECREF(o);
  }

}

