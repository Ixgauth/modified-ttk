// python wrapper for vtkFixedPointVolumeRayCastMapper
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
#include "vtkFixedPointVolumeRayCastMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFixedPointVolumeRayCastMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFixedPointVolumeRayCastMapper_ClassNew(); }

#ifndef DECLARED_PyvtkVolumeMapper_ClassNew
extern "C" { PyObject *PyvtkVolumeMapper_ClassNew(); }
#define DECLARED_PyvtkVolumeMapper_ClassNew
#endif

static const char *PyvtkFixedPointVolumeRayCastMapper_Doc =
  "vtkFixedPointVolumeRayCastMapper - A fixed point mapper for volumes\n\n"
  "Superclass: vtkVolumeMapper\n\n"
  "This is a software ray caster for rendering volumes in vtkImageData.\n"
  "It works with all input data types and up to four components. It\n"
  "performs composite or MIP rendering, and can be intermixed with\n"
  "geometric data. Space leaping is used to speed up the rendering\n"
  "process. In addition, calculation are performed in 15 bit fixed point\n"
  "precision. This mapper is threaded, and will interleave scan lines\n"
  "across processors.\n\n"
  "WARNING: This ray caster may not produce consistent results when the\n"
  "number of threads exceeds 1. The class warns if the number of threads\n"
  "> 1. The differences may be subtle. Applications should decide if the\n"
  "trade-off in performance is worth the lack of consistency.\n\n"
  "Other limitations of this ray caster include that:\n"
  "- it does not do isosurface ray casting\n"
  "- it does only interpolate before classify compositing\n"
  "- it does only maximum scalar value MIP\n\n"
  "This mapper handles all data type from unsigned char through double.\n"
  "However, some of the internal calcultions are performed in float and\n"
  "therefore even the full float range may cause problems for this\n"
  "mapper (both in scalar data values and in spacing between samples).\n\n"
  "Space leaping is performed by creating a sub-sampled volume. 4x4x4\n"
  "cells in the original volume are represented by a min, max, and\n"
  "combined gradient and flag value. The min max volume has three\n"
  "unsigned shorts per 4x4x4 group of cells from the original volume -\n"
  "one reprenting the minimum scalar index (the scalar value adjusted to\n"
  "fit in the 15 bit range), the maximum scalar index, and a third\n"
  "unsigned short which is both the maximum gradient opacity in the\n"
  "neighborhood (an unsigned char) and the flag that is filled in for\n"
  "the current lookup tables to indicate whether this region can be\n"
  "skipped.\n\n"
  "@sa\n"
  "vtkVolumeMapper\n\n";


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFixedPointVolumeRayCastMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFixedPointVolumeRayCastMapper *tempr = vtkFixedPointVolumeRayCastMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFixedPointVolumeRayCastMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFixedPointVolumeRayCastMapper::NewInstance());

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
PyvtkFixedPointVolumeRayCastMapper_SetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleDistance(temp0);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::SetSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSampleDistance() :
      op->vtkFixedPointVolumeRayCastMapper::GetSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetInteractiveSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractiveSampleDistance(temp0);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::SetInteractiveSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetInteractiveSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetInteractiveSampleDistance() :
      op->vtkFixedPointVolumeRayCastMapper::GetInteractiveSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageSampleDistance(temp0);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::SetImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMinValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMaxValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistance() :
      op->vtkFixedPointVolumeRayCastMapper::GetImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumImageSampleDistance(temp0);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::SetMinimumImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMinValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMaxValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistance() :
      op->vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumImageSampleDistance(temp0);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::SetMaximumImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMinValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMaxValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistance() :
      op->vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoAdjustSampleDistances(temp0);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::SetAutoAdjustSampleDistances(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMinValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMaxValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistances() :
      op->vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistances());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_AutoAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOn();
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::AutoAdjustSampleDistancesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_AutoAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOff();
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::AutoAdjustSampleDistancesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetLockSampleDistanceToInputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockSampleDistanceToInputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockSampleDistanceToInputSpacing(temp0);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::SetLockSampleDistanceToInputSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockSampleDistanceToInputSpacingMinValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockSampleDistanceToInputSpacingMaxValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockSampleDistanceToInputSpacing() :
      op->vtkFixedPointVolumeRayCastMapper::GetLockSampleDistanceToInputSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_LockSampleDistanceToInputSpacingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockSampleDistanceToInputSpacingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockSampleDistanceToInputSpacingOn();
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::LockSampleDistanceToInputSpacingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_LockSampleDistanceToInputSpacingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockSampleDistanceToInputSpacingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockSampleDistanceToInputSpacingOff();
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::LockSampleDistanceToInputSpacingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

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
      op->vtkFixedPointVolumeRayCastMapper::SetNumberOfThreads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkFixedPointVolumeRayCastMapper::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntermixIntersectingGeometry(temp0);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::SetIntermixIntersectingGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometryMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntermixIntersectingGeometryMinValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometryMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometryMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntermixIntersectingGeometryMaxValue() :
      op->vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometryMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntermixIntersectingGeometry() :
      op->vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_IntermixIntersectingGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntermixIntersectingGeometryOn();
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::IntermixIntersectingGeometryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_IntermixIntersectingGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntermixIntersectingGeometryOff();
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::IntermixIntersectingGeometryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeRequiredImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    float tempr = (ap.IsBound() ?
      op->ComputeRequiredImageSampleDistance(temp0, temp1) :
      op->vtkFixedPointVolumeRayCastMapper::ComputeRequiredImageSampleDistance(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeRequiredImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  vtkRenderer *temp1 = nullptr;
  vtkVolume *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkVolume"))
  {
    float tempr = (ap.IsBound() ?
      op->ComputeRequiredImageSampleDistance(temp0, temp1, temp2) :
      op->vtkFixedPointVolumeRayCastMapper::ComputeRequiredImageSampleDistance(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance_s1(self, args);
    case 3:
      return PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeRequiredImageSampleDistance");
  return nullptr;
}



static PyObject *
PyvtkFixedPointVolumeRayCastMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFixedPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->ToFixedPointPosition(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::ToFixedPointPosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFixedPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  float save0[3];
  const size_t size1 = 3;
  unsigned int temp1[3];
  unsigned int save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ToFixedPointPosition(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::ToFixedPointPosition(temp0, temp1);
    }

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
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition_s1(self, args);
    case 2:
      return PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToFixedPointPosition");
  return nullptr;
}



static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFixedPointDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->ToFixedPointDirection(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::ToFixedPointDirection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFixedPointDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  float save0[3];
  const size_t size1 = 3;
  unsigned int temp1[3];
  unsigned int save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ToFixedPointDirection(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::ToFixedPointDirection(temp0, temp1);
    }

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
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection_s1(self, args);
    case 2:
      return PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToFixedPointDirection");
  return nullptr;
}



static PyObject *
PyvtkFixedPointVolumeRayCastMapper_FixedPointIncrement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixedPointIncrement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  const size_t size0 = 3;
  unsigned int temp0[3];
  unsigned int save0[3];
  const size_t size1 = 3;
  unsigned int temp1[3];
  unsigned int save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->FixedPointIncrement(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::FixedPointIncrement(temp0, temp1);
    }

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
PyvtkFixedPointVolumeRayCastMapper_GetFloatTripleFromPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFloatTripleFromPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  float save0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetFloatTripleFromPointer(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::GetFloatTripleFromPointer(temp0, temp1);
    }

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
PyvtkFixedPointVolumeRayCastMapper_GetUIntTripleFromPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUIntTripleFromPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  const size_t size0 = 3;
  unsigned int temp0[3];
  unsigned int save0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned int> store1(2*size1);
  unsigned int *temp1 = store1.Data();
  unsigned int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetUIntTripleFromPointer(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::GetUIntTripleFromPointer(temp0, temp1);
    }

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
PyvtkFixedPointVolumeRayCastMapper_ShiftVectorDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShiftVectorDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  const size_t size0 = 3;
  unsigned int temp0[3];
  unsigned int save0[3];
  const size_t size1 = 3;
  unsigned int temp1[3];
  unsigned int save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ShiftVectorDown(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::ShiftVectorDown(temp0, temp1);
    }

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
PyvtkFixedPointVolumeRayCastMapper_CheckMinMaxVolumeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckMinMaxVolumeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  const size_t size0 = 3;
  unsigned int temp0[3];
  unsigned int save0[3];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->CheckMinMaxVolumeFlag(temp0, temp1) :
      op->vtkFixedPointVolumeRayCastMapper::CheckMinMaxVolumeFlag(temp0, temp1));

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
PyvtkFixedPointVolumeRayCastMapper_CheckMIPMinMaxVolumeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckMIPMinMaxVolumeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  const size_t size0 = 3;
  unsigned int temp0[3];
  unsigned int save0[3];
  int temp1;
  unsigned short temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->CheckMIPMinMaxVolumeFlag(temp0, temp1, temp2, temp3) :
      op->vtkFixedPointVolumeRayCastMapper::CheckMIPMinMaxVolumeFlag(temp0, temp1, temp2, temp3));

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
PyvtkFixedPointVolumeRayCastMapper_LookupColorUC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupColorUC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned short> store0(2*size0);
  unsigned short *temp0 = store0.Data();
  unsigned short *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned short> store1(2*size1);
  unsigned short *temp1 = store1.Data();
  unsigned short *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  unsigned short temp2;
  const size_t size3 = 4;
  unsigned char temp3[4];
  unsigned char save3[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->LookupColorUC(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::LookupColorUC(temp0, temp1, temp2, temp3);
    }

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
PyvtkFixedPointVolumeRayCastMapper_LookupDependentColorUC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupDependentColorUC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned short> store0(2*size0);
  unsigned short *temp0 = store0.Data();
  unsigned short *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned short> store1(2*size1);
  unsigned short *temp1 = store1.Data();
  unsigned short *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  const size_t size2 = 4;
  unsigned short temp2[4];
  unsigned short save2[4];
  int temp3;
  const size_t size4 = 4;
  unsigned char temp4[4];
  unsigned char save4[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->LookupDependentColorUC(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::LookupDependentColorUC(temp0, temp1, temp2, temp3, temp4);
    }

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
PyvtkFixedPointVolumeRayCastMapper_CheckIfCropped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckIfCropped");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  const size_t size0 = 3;
  unsigned int temp0[3];
  unsigned int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->CheckIfCropped(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::CheckIfCropped(temp0));

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
PyvtkFixedPointVolumeRayCastMapper_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkFixedPointVolumeRayCastMapper::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMIPHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMIPHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFixedPointVolumeRayCastMIPHelper *tempr = (ap.IsBound() ?
      op->GetMIPHelper() :
      op->vtkFixedPointVolumeRayCastMapper::GetMIPHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCompositeHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFixedPointVolumeRayCastCompositeHelper *tempr = (ap.IsBound() ?
      op->GetCompositeHelper() :
      op->vtkFixedPointVolumeRayCastMapper::GetCompositeHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCompositeGOHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeGOHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFixedPointVolumeRayCastCompositeGOHelper *tempr = (ap.IsBound() ?
      op->GetCompositeGOHelper() :
      op->vtkFixedPointVolumeRayCastMapper::GetCompositeGOHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCompositeGOShadeHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeGOShadeHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFixedPointVolumeRayCastCompositeGOShadeHelper *tempr = (ap.IsBound() ?
      op->GetCompositeGOShadeHelper() :
      op->vtkFixedPointVolumeRayCastMapper::GetCompositeGOShadeHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCompositeShadeHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeShadeHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFixedPointVolumeRayCastCompositeShadeHelper *tempr = (ap.IsBound() ?
      op->GetCompositeShadeHelper() :
      op->vtkFixedPointVolumeRayCastMapper::GetCompositeShadeHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetTableShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetTableShift() :
      op->vtkFixedPointVolumeRayCastMapper::GetTableShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetTableScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetTableScale() :
      op->vtkFixedPointVolumeRayCastMapper::GetTableScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetShadingRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadingRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShadingRequired() :
      op->vtkFixedPointVolumeRayCastMapper::GetShadingRequired());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetGradientOpacityRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGradientOpacityRequired() :
      op->vtkFixedPointVolumeRayCastMapper::GetGradientOpacityRequired());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCurrentScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetCurrentScalars() :
      op->vtkFixedPointVolumeRayCastMapper::GetCurrentScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetPreviousScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreviousScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetPreviousScalars() :
      op->vtkFixedPointVolumeRayCastMapper::GetPreviousScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetRowBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetRowBounds() :
      op->vtkFixedPointVolumeRayCastMapper::GetRowBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetColorTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetColorTable(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::GetColorTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetScalarOpacityTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetScalarOpacityTable(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::GetScalarOpacityTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetGradientOpacityTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetGradientOpacityTable(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::GetGradientOpacityTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolume *tempr = (ap.IsBound() ?
      op->GetVolume() :
      op->vtkFixedPointVolumeRayCastMapper::GetVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetDiffuseShadingTable(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::GetDiffuseShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetSpecularShadingTable(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::GetSpecularShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ComputeRayInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeRayInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  int temp1;
  const size_t size2 = 3;
  unsigned int temp2[3];
  unsigned int save2[3];
  const size_t size3 = 3;
  unsigned int temp3[3];
  unsigned int save3[3];
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned int> store4(2*size4);
  unsigned int *temp4 = store4.Data();
  unsigned int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->ComputeRayInfo(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::ComputeRayInfo(temp0, temp1, temp2, temp3, temp4);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

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
PyvtkFixedPointVolumeRayCastMapper_InitializeRayInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeRayInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->InitializeRayInfo(temp0);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::InitializeRayInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ShouldUseNearestNeighborInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShouldUseNearestNeighborInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    int tempr = (ap.IsBound() ?
      op->ShouldUseNearestNeighborInterpolation(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::ShouldUseNearestNeighborInterpolation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetRayCastImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRayCastImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkFixedPointRayCastImage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFixedPointRayCastImage"))
  {
    if (ap.IsBound())
    {
      op->SetRayCastImage(temp0);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::SetRayCastImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetRayCastImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRayCastImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFixedPointRayCastImage *tempr = (ap.IsBound() ?
      op->GetRayCastImage() :
      op->vtkFixedPointVolumeRayCastMapper::GetRayCastImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_PerImageInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerImageInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<int> store5(2*size5);
  int *temp5 = store5.Data();
  int *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->PerImageInitialization(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkFixedPointVolumeRayCastMapper::PerImageInitialization(temp0, temp1, temp2, temp3, temp4, temp5));

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

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_PerVolumeInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerVolumeInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->PerVolumeInitialization(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::PerVolumeInitialization(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_PerSubVolumeInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerSubVolumeInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->PerSubVolumeInitialization(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::PerSubVolumeInitialization(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_RenderSubVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderSubVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderSubVolume();
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::RenderSubVolume();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_DisplayRenderedImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayRenderedImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->DisplayRenderedImage(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::DisplayRenderedImage(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_AbortRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AbortRender();
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::AbortRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_CreateCanonicalView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCanonicalView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkVolume *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  int temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->CreateCanonicalView(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::CreateCanonicalView(temp0, temp1, temp2, temp3, temp4);
    }

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
PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    float tempr = (ap.IsBound() ?
      op->GetEstimatedRenderTime(temp0, temp1) :
      op->vtkFixedPointVolumeRayCastMapper::GetEstimatedRenderTime(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    float tempr = (ap.IsBound() ?
      op->GetEstimatedRenderTime(temp0) :
      op->vtkFixedPointVolumeRayCastMapper::GetEstimatedRenderTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime_s1(self, args);
    case 1:
      return PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEstimatedRenderTime");
  return nullptr;
}



static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFinalColorWindow(temp0);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::SetFinalColorWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorWindow() :
      op->vtkFixedPointVolumeRayCastMapper::GetFinalColorWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFinalColorLevel(temp0);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::SetFinalColorLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorLevel() :
      op->vtkFixedPointVolumeRayCastMapper::GetFinalColorLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetFlipMIPComparison(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipMIPComparison");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlipMIPComparison() :
      op->vtkFixedPointVolumeRayCastMapper::GetFlipMIPComparison());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFixedPointVolumeRayCastMapper_Methods[] = {
  {"IsTypeOf", PyvtkFixedPointVolumeRayCastMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFixedPointVolumeRayCastMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFixedPointVolumeRayCastMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFixedPointVolumeRayCastMapper\nC++: static vtkFixedPointVolumeRayCastMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFixedPointVolumeRayCastMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFixedPointVolumeRayCastMapper\nC++: vtkFixedPointVolumeRayCastMapper *NewInstance()\n\n"},
  {"SetSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetSampleDistance, METH_VARARGS,
   "V.SetSampleDistance(float)\nC++: virtual void SetSampleDistance(float _arg)\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering.\n"},
  {"GetSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetSampleDistance, METH_VARARGS,
   "V.GetSampleDistance() -> float\nC++: virtual float GetSampleDistance()\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering.\n"},
  {"SetInteractiveSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetInteractiveSampleDistance, METH_VARARGS,
   "V.SetInteractiveSampleDistance(float)\nC++: virtual void SetInteractiveSampleDistance(float _arg)\n\nSet/Get the distance between samples when interactive rendering\nis happening. In this case, interactive is defined as this volume\nmapper having less than 1 second allocated for rendering. When\nAutoAdjustSampleDistance is On, and the allocated render time is\nless than 1 second, then this InteractiveSampleDistance will be\nused instead of the SampleDistance above.\n"},
  {"GetInteractiveSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetInteractiveSampleDistance, METH_VARARGS,
   "V.GetInteractiveSampleDistance() -> float\nC++: virtual float GetInteractiveSampleDistance()\n\nSet/Get the distance between samples when interactive rendering\nis happening. In this case, interactive is defined as this volume\nmapper having less than 1 second allocated for rendering. When\nAutoAdjustSampleDistance is On, and the allocated render time is\nless than 1 second, then this InteractiveSampleDistance will be\nused instead of the SampleDistance above.\n"},
  {"SetImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetImageSampleDistance, METH_VARARGS,
   "V.SetImageSampleDistance(float)\nC++: virtual void SetImageSampleDistance(float _arg)\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {"GetImageSampleDistanceMinValue", PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistanceMinValue, METH_VARARGS,
   "V.GetImageSampleDistanceMinValue() -> float\nC++: virtual float GetImageSampleDistanceMinValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {"GetImageSampleDistanceMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistanceMaxValue, METH_VARARGS,
   "V.GetImageSampleDistanceMaxValue() -> float\nC++: virtual float GetImageSampleDistanceMaxValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {"GetImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistance, METH_VARARGS,
   "V.GetImageSampleDistance() -> float\nC++: virtual float GetImageSampleDistance()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {"SetMinimumImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetMinimumImageSampleDistance, METH_VARARGS,
   "V.SetMinimumImageSampleDistance(float)\nC++: virtual void SetMinimumImageSampleDistance(float _arg)\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMinimumImageSampleDistanceMinValue", PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue, METH_VARARGS,
   "V.GetMinimumImageSampleDistanceMinValue() -> float\nC++: virtual float GetMinimumImageSampleDistanceMinValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMinimumImageSampleDistanceMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue, METH_VARARGS,
   "V.GetMinimumImageSampleDistanceMaxValue() -> float\nC++: virtual float GetMinimumImageSampleDistanceMaxValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMinimumImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistance, METH_VARARGS,
   "V.GetMinimumImageSampleDistance() -> float\nC++: virtual float GetMinimumImageSampleDistance()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"SetMaximumImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetMaximumImageSampleDistance, METH_VARARGS,
   "V.SetMaximumImageSampleDistance(float)\nC++: virtual void SetMaximumImageSampleDistance(float _arg)\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMaximumImageSampleDistanceMinValue", PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue, METH_VARARGS,
   "V.GetMaximumImageSampleDistanceMinValue() -> float\nC++: virtual float GetMaximumImageSampleDistanceMinValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMaximumImageSampleDistanceMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue, METH_VARARGS,
   "V.GetMaximumImageSampleDistanceMaxValue() -> float\nC++: virtual float GetMaximumImageSampleDistanceMaxValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMaximumImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistance, METH_VARARGS,
   "V.GetMaximumImageSampleDistance() -> float\nC++: virtual float GetMaximumImageSampleDistance()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"SetAutoAdjustSampleDistances", PyvtkFixedPointVolumeRayCastMapper_SetAutoAdjustSampleDistances, METH_VARARGS,
   "V.SetAutoAdjustSampleDistances(int)\nC++: virtual void SetAutoAdjustSampleDistances(vtkTypeBool _arg)\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance and\nthe SampleDistance will be varied to achieve the allocated render\ntime of this prop (controlled by the desired update rate and any\nculling in use). If this is an interactive render (more than 1\nframe per second) the SampleDistance will be increased, otherwise\nit will not be altered (a binary decision, as opposed to the\nImageSampleDistance which will vary continuously).\n"},
  {"GetAutoAdjustSampleDistancesMinValue", PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue, METH_VARARGS,
   "V.GetAutoAdjustSampleDistancesMinValue() -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMinValue()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance and\nthe SampleDistance will be varied to achieve the allocated render\ntime of this prop (controlled by the desired update rate and any\nculling in use). If this is an interactive render (more than 1\nframe per second) the SampleDistance will be increased, otherwise\nit will not be altered (a binary decision, as opposed to the\nImageSampleDistance which will vary continuously).\n"},
  {"GetAutoAdjustSampleDistancesMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue, METH_VARARGS,
   "V.GetAutoAdjustSampleDistancesMaxValue() -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMaxValue()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance and\nthe SampleDistance will be varied to achieve the allocated render\ntime of this prop (controlled by the desired update rate and any\nculling in use). If this is an interactive render (more than 1\nframe per second) the SampleDistance will be increased, otherwise\nit will not be altered (a binary decision, as opposed to the\nImageSampleDistance which will vary continuously).\n"},
  {"GetAutoAdjustSampleDistances", PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistances, METH_VARARGS,
   "V.GetAutoAdjustSampleDistances() -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistances()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance and\nthe SampleDistance will be varied to achieve the allocated render\ntime of this prop (controlled by the desired update rate and any\nculling in use). If this is an interactive render (more than 1\nframe per second) the SampleDistance will be increased, otherwise\nit will not be altered (a binary decision, as opposed to the\nImageSampleDistance which will vary continuously).\n"},
  {"AutoAdjustSampleDistancesOn", PyvtkFixedPointVolumeRayCastMapper_AutoAdjustSampleDistancesOn, METH_VARARGS,
   "V.AutoAdjustSampleDistancesOn()\nC++: virtual void AutoAdjustSampleDistancesOn()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance and\nthe SampleDistance will be varied to achieve the allocated render\ntime of this prop (controlled by the desired update rate and any\nculling in use). If this is an interactive render (more than 1\nframe per second) the SampleDistance will be increased, otherwise\nit will not be altered (a binary decision, as opposed to the\nImageSampleDistance which will vary continuously).\n"},
  {"AutoAdjustSampleDistancesOff", PyvtkFixedPointVolumeRayCastMapper_AutoAdjustSampleDistancesOff, METH_VARARGS,
   "V.AutoAdjustSampleDistancesOff()\nC++: virtual void AutoAdjustSampleDistancesOff()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance and\nthe SampleDistance will be varied to achieve the allocated render\ntime of this prop (controlled by the desired update rate and any\nculling in use). If this is an interactive render (more than 1\nframe per second) the SampleDistance will be increased, otherwise\nit will not be altered (a binary decision, as opposed to the\nImageSampleDistance which will vary continuously).\n"},
  {"SetLockSampleDistanceToInputSpacing", PyvtkFixedPointVolumeRayCastMapper_SetLockSampleDistanceToInputSpacing, METH_VARARGS,
   "V.SetLockSampleDistanceToInputSpacing(int)\nC++: virtual void SetLockSampleDistanceToInputSpacing(\n    vtkTypeBool _arg)\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {"GetLockSampleDistanceToInputSpacingMinValue", PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMinValue, METH_VARARGS,
   "V.GetLockSampleDistanceToInputSpacingMinValue() -> int\nC++: virtual vtkTypeBool GetLockSampleDistanceToInputSpacingMinValue(\n    )\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {"GetLockSampleDistanceToInputSpacingMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMaxValue, METH_VARARGS,
   "V.GetLockSampleDistanceToInputSpacingMaxValue() -> int\nC++: virtual vtkTypeBool GetLockSampleDistanceToInputSpacingMaxValue(\n    )\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {"GetLockSampleDistanceToInputSpacing", PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacing, METH_VARARGS,
   "V.GetLockSampleDistanceToInputSpacing() -> int\nC++: virtual vtkTypeBool GetLockSampleDistanceToInputSpacing()\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {"LockSampleDistanceToInputSpacingOn", PyvtkFixedPointVolumeRayCastMapper_LockSampleDistanceToInputSpacingOn, METH_VARARGS,
   "V.LockSampleDistanceToInputSpacingOn()\nC++: virtual void LockSampleDistanceToInputSpacingOn()\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {"LockSampleDistanceToInputSpacingOff", PyvtkFixedPointVolumeRayCastMapper_LockSampleDistanceToInputSpacingOff, METH_VARARGS,
   "V.LockSampleDistanceToInputSpacingOff()\nC++: virtual void LockSampleDistanceToInputSpacingOff()\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {"SetNumberOfThreads", PyvtkFixedPointVolumeRayCastMapper_SetNumberOfThreads, METH_VARARGS,
   "V.SetNumberOfThreads(int)\nC++: void SetNumberOfThreads(int num)\n\nSet/Get the number of threads to use. This by default is equal to\nthe number of available processors detected. WARNING: If number\nof threads > 1, results may not be consistent.\n"},
  {"GetNumberOfThreads", PyvtkFixedPointVolumeRayCastMapper_GetNumberOfThreads, METH_VARARGS,
   "V.GetNumberOfThreads() -> int\nC++: int GetNumberOfThreads()\n\nSet/Get the number of threads to use. This by default is equal to\nthe number of available processors detected. WARNING: If number\nof threads > 1, results may not be consistent.\n"},
  {"SetIntermixIntersectingGeometry", PyvtkFixedPointVolumeRayCastMapper_SetIntermixIntersectingGeometry, METH_VARARGS,
   "V.SetIntermixIntersectingGeometry(int)\nC++: virtual void SetIntermixIntersectingGeometry(\n    vtkTypeBool _arg)\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {"GetIntermixIntersectingGeometryMinValue", PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometryMinValue, METH_VARARGS,
   "V.GetIntermixIntersectingGeometryMinValue() -> int\nC++: virtual vtkTypeBool GetIntermixIntersectingGeometryMinValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {"GetIntermixIntersectingGeometryMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometryMaxValue, METH_VARARGS,
   "V.GetIntermixIntersectingGeometryMaxValue() -> int\nC++: virtual vtkTypeBool GetIntermixIntersectingGeometryMaxValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {"GetIntermixIntersectingGeometry", PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometry, METH_VARARGS,
   "V.GetIntermixIntersectingGeometry() -> int\nC++: virtual vtkTypeBool GetIntermixIntersectingGeometry()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {"IntermixIntersectingGeometryOn", PyvtkFixedPointVolumeRayCastMapper_IntermixIntersectingGeometryOn, METH_VARARGS,
   "V.IntermixIntersectingGeometryOn()\nC++: virtual void IntermixIntersectingGeometryOn()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {"IntermixIntersectingGeometryOff", PyvtkFixedPointVolumeRayCastMapper_IntermixIntersectingGeometryOff, METH_VARARGS,
   "V.IntermixIntersectingGeometryOff()\nC++: virtual void IntermixIntersectingGeometryOff()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {"ComputeRequiredImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance, METH_VARARGS,
   "V.ComputeRequiredImageSampleDistance(float, vtkRenderer) -> float\nC++: float ComputeRequiredImageSampleDistance(float desiredTime,\n    vtkRenderer *ren)\nV.ComputeRequiredImageSampleDistance(float, vtkRenderer,\n    vtkVolume) -> float\nC++: float ComputeRequiredImageSampleDistance(float desiredTime,\n    vtkRenderer *ren, vtkVolume *vol)\n\nWhat is the image sample distance required to achieve the desired\ntime? A version of this method is provided that does not require\nthe volume argument since if you are using an LODProp3D you may\nnot know this information. If you use this version you must be\ncertain that the ray cast mapper is only used for one volume (and\nnot shared among multiple volumes)\n"},
  {"Render", PyvtkFixedPointVolumeRayCastMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *, vtkVolume *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nInitialize rendering for this volume.\n"},
  {"ToFixedPointPosition", PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition, METH_VARARGS,
   "V.ToFixedPointPosition(float) -> int\nC++: unsigned int ToFixedPointPosition(float val)\nV.ToFixedPointPosition([float, float, float], [int, int, int])\nC++: void ToFixedPointPosition(float in[3], unsigned int out[3])\n\n"},
  {"ToFixedPointDirection", PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection, METH_VARARGS,
   "V.ToFixedPointDirection(float) -> int\nC++: unsigned int ToFixedPointDirection(float dir)\nV.ToFixedPointDirection([float, float, float], [int, int, int])\nC++: void ToFixedPointDirection(float in[3], unsigned int out[3])\n\n"},
  {"FixedPointIncrement", PyvtkFixedPointVolumeRayCastMapper_FixedPointIncrement, METH_VARARGS,
   "V.FixedPointIncrement([int, int, int], [int, int, int])\nC++: void FixedPointIncrement(unsigned int position[3],\n    unsigned int increment[3])\n\n"},
  {"GetFloatTripleFromPointer", PyvtkFixedPointVolumeRayCastMapper_GetFloatTripleFromPointer, METH_VARARGS,
   "V.GetFloatTripleFromPointer([float, float, float], [float, ...])\nC++: void GetFloatTripleFromPointer(float v[3], float *ptr)\n\n"},
  {"GetUIntTripleFromPointer", PyvtkFixedPointVolumeRayCastMapper_GetUIntTripleFromPointer, METH_VARARGS,
   "V.GetUIntTripleFromPointer([int, int, int], [int, ...])\nC++: void GetUIntTripleFromPointer(unsigned int v[3],\n    unsigned int *ptr)\n\n"},
  {"ShiftVectorDown", PyvtkFixedPointVolumeRayCastMapper_ShiftVectorDown, METH_VARARGS,
   "V.ShiftVectorDown([int, int, int], [int, int, int])\nC++: void ShiftVectorDown(unsigned int in[3], unsigned int out[3])\n\n"},
  {"CheckMinMaxVolumeFlag", PyvtkFixedPointVolumeRayCastMapper_CheckMinMaxVolumeFlag, METH_VARARGS,
   "V.CheckMinMaxVolumeFlag([int, int, int], int) -> int\nC++: int CheckMinMaxVolumeFlag(unsigned int pos[3], int c)\n\n"},
  {"CheckMIPMinMaxVolumeFlag", PyvtkFixedPointVolumeRayCastMapper_CheckMIPMinMaxVolumeFlag, METH_VARARGS,
   "V.CheckMIPMinMaxVolumeFlag([int, int, int], int, int, int) -> int\nC++: int CheckMIPMinMaxVolumeFlag(unsigned int pos[3], int c,\n    unsigned short maxIdx, int flip)\n\n"},
  {"LookupColorUC", PyvtkFixedPointVolumeRayCastMapper_LookupColorUC, METH_VARARGS,
   "V.LookupColorUC([int, ...], [int, ...], int, [int, int, int, int])\nC++: void LookupColorUC(unsigned short *colorTable,\n    unsigned short *scalarOpacityTable, unsigned short index,\n    unsigned char color[4])\n\n"},
  {"LookupDependentColorUC", PyvtkFixedPointVolumeRayCastMapper_LookupDependentColorUC, METH_VARARGS,
   "V.LookupDependentColorUC([int, ...], [int, ...], [int, int, int,\n    int], int, [int, int, int, int])\nC++: void LookupDependentColorUC(unsigned short *colorTable,\n    unsigned short *scalarOpacityTable, unsigned short index[4],\n    int components, unsigned char color[4])\n\n"},
  {"CheckIfCropped", PyvtkFixedPointVolumeRayCastMapper_CheckIfCropped, METH_VARARGS,
   "V.CheckIfCropped([int, int, int]) -> int\nC++: int CheckIfCropped(unsigned int pos[3])\n\n"},
  {"GetRenderWindow", PyvtkFixedPointVolumeRayCastMapper_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\n"},
  {"GetMIPHelper", PyvtkFixedPointVolumeRayCastMapper_GetMIPHelper, METH_VARARGS,
   "V.GetMIPHelper() -> vtkFixedPointVolumeRayCastMIPHelper\nC++: virtual vtkFixedPointVolumeRayCastMIPHelper *GetMIPHelper()\n\n"},
  {"GetCompositeHelper", PyvtkFixedPointVolumeRayCastMapper_GetCompositeHelper, METH_VARARGS,
   "V.GetCompositeHelper()\n    -> vtkFixedPointVolumeRayCastCompositeHelper\nC++: virtual vtkFixedPointVolumeRayCastCompositeHelper *GetCompositeHelper(\n    )\n\n"},
  {"GetCompositeGOHelper", PyvtkFixedPointVolumeRayCastMapper_GetCompositeGOHelper, METH_VARARGS,
   "V.GetCompositeGOHelper()\n    -> vtkFixedPointVolumeRayCastCompositeGOHelper\nC++: virtual vtkFixedPointVolumeRayCastCompositeGOHelper *GetCompositeGOHelper(\n    )\n\n"},
  {"GetCompositeGOShadeHelper", PyvtkFixedPointVolumeRayCastMapper_GetCompositeGOShadeHelper, METH_VARARGS,
   "V.GetCompositeGOShadeHelper()\n    -> vtkFixedPointVolumeRayCastCompositeGOShadeHelper\nC++: virtual vtkFixedPointVolumeRayCastCompositeGOShadeHelper *GetCompositeGOShadeHelper(\n    )\n\n"},
  {"GetCompositeShadeHelper", PyvtkFixedPointVolumeRayCastMapper_GetCompositeShadeHelper, METH_VARARGS,
   "V.GetCompositeShadeHelper()\n    -> vtkFixedPointVolumeRayCastCompositeShadeHelper\nC++: virtual vtkFixedPointVolumeRayCastCompositeShadeHelper *GetCompositeShadeHelper(\n    )\n\n"},
  {"GetTableShift", PyvtkFixedPointVolumeRayCastMapper_GetTableShift, METH_VARARGS,
   "V.GetTableShift() -> (float, float, float, float)\nC++: float *GetTableShift()\n\n"},
  {"GetTableScale", PyvtkFixedPointVolumeRayCastMapper_GetTableScale, METH_VARARGS,
   "V.GetTableScale() -> (float, float, float, float)\nC++: float *GetTableScale()\n\n"},
  {"GetShadingRequired", PyvtkFixedPointVolumeRayCastMapper_GetShadingRequired, METH_VARARGS,
   "V.GetShadingRequired() -> int\nC++: virtual int GetShadingRequired()\n\n"},
  {"GetGradientOpacityRequired", PyvtkFixedPointVolumeRayCastMapper_GetGradientOpacityRequired, METH_VARARGS,
   "V.GetGradientOpacityRequired() -> int\nC++: virtual int GetGradientOpacityRequired()\n\n"},
  {"GetCurrentScalars", PyvtkFixedPointVolumeRayCastMapper_GetCurrentScalars, METH_VARARGS,
   "V.GetCurrentScalars() -> vtkDataArray\nC++: virtual vtkDataArray *GetCurrentScalars()\n\n"},
  {"GetPreviousScalars", PyvtkFixedPointVolumeRayCastMapper_GetPreviousScalars, METH_VARARGS,
   "V.GetPreviousScalars() -> vtkDataArray\nC++: virtual vtkDataArray *GetPreviousScalars()\n\n"},
  {"GetRowBounds", PyvtkFixedPointVolumeRayCastMapper_GetRowBounds, METH_VARARGS,
   "V.GetRowBounds() -> (int, ...)\nC++: int *GetRowBounds()\n\n"},
  {"GetColorTable", PyvtkFixedPointVolumeRayCastMapper_GetColorTable, METH_VARARGS,
   "V.GetColorTable(int) -> (int, ...)\nC++: unsigned short *GetColorTable(int c)\n\n"},
  {"GetScalarOpacityTable", PyvtkFixedPointVolumeRayCastMapper_GetScalarOpacityTable, METH_VARARGS,
   "V.GetScalarOpacityTable(int) -> (int, ...)\nC++: unsigned short *GetScalarOpacityTable(int c)\n\n"},
  {"GetGradientOpacityTable", PyvtkFixedPointVolumeRayCastMapper_GetGradientOpacityTable, METH_VARARGS,
   "V.GetGradientOpacityTable(int) -> (int, ...)\nC++: unsigned short *GetGradientOpacityTable(int c)\n\n"},
  {"GetVolume", PyvtkFixedPointVolumeRayCastMapper_GetVolume, METH_VARARGS,
   "V.GetVolume() -> vtkVolume\nC++: vtkVolume *GetVolume()\n\n"},
  {"GetDiffuseShadingTable", PyvtkFixedPointVolumeRayCastMapper_GetDiffuseShadingTable, METH_VARARGS,
   "V.GetDiffuseShadingTable(int) -> (int, ...)\nC++: unsigned short *GetDiffuseShadingTable(int c)\n\n"},
  {"GetSpecularShadingTable", PyvtkFixedPointVolumeRayCastMapper_GetSpecularShadingTable, METH_VARARGS,
   "V.GetSpecularShadingTable(int) -> (int, ...)\nC++: unsigned short *GetSpecularShadingTable(int c)\n\n"},
  {"ComputeRayInfo", PyvtkFixedPointVolumeRayCastMapper_ComputeRayInfo, METH_VARARGS,
   "V.ComputeRayInfo(int, int, [int, int, int], [int, int, int], [int,\n     ...])\nC++: void ComputeRayInfo(int x, int y, unsigned int pos[3],\n    unsigned int dir[3], unsigned int *numSteps)\n\n"},
  {"InitializeRayInfo", PyvtkFixedPointVolumeRayCastMapper_InitializeRayInfo, METH_VARARGS,
   "V.InitializeRayInfo(vtkVolume)\nC++: void InitializeRayInfo(vtkVolume *vol)\n\n"},
  {"ShouldUseNearestNeighborInterpolation", PyvtkFixedPointVolumeRayCastMapper_ShouldUseNearestNeighborInterpolation, METH_VARARGS,
   "V.ShouldUseNearestNeighborInterpolation(vtkVolume) -> int\nC++: int ShouldUseNearestNeighborInterpolation(vtkVolume *vol)\n\n"},
  {"SetRayCastImage", PyvtkFixedPointVolumeRayCastMapper_SetRayCastImage, METH_VARARGS,
   "V.SetRayCastImage(vtkFixedPointRayCastImage)\nC++: void SetRayCastImage(vtkFixedPointRayCastImage *)\n\nSet / Get the underlying image object. One will be automatically\ncreated - only need to set it when using from an AMR mapper which\nrenders multiple times into the same image.\n"},
  {"GetRayCastImage", PyvtkFixedPointVolumeRayCastMapper_GetRayCastImage, METH_VARARGS,
   "V.GetRayCastImage() -> vtkFixedPointRayCastImage\nC++: virtual vtkFixedPointRayCastImage *GetRayCastImage()\n\nSet / Get the underlying image object. One will be automatically\ncreated - only need to set it when using from an AMR mapper which\nrenders multiple times into the same image.\n"},
  {"PerImageInitialization", PyvtkFixedPointVolumeRayCastMapper_PerImageInitialization, METH_VARARGS,
   "V.PerImageInitialization(vtkRenderer, vtkVolume, int, [float,\n    ...], [float, ...], [int, ...]) -> int\nC++: int PerImageInitialization(vtkRenderer *, vtkVolume *, int,\n    double *, double *, int *)\n\n"},
  {"PerVolumeInitialization", PyvtkFixedPointVolumeRayCastMapper_PerVolumeInitialization, METH_VARARGS,
   "V.PerVolumeInitialization(vtkRenderer, vtkVolume)\nC++: void PerVolumeInitialization(vtkRenderer *, vtkVolume *)\n\n"},
  {"PerSubVolumeInitialization", PyvtkFixedPointVolumeRayCastMapper_PerSubVolumeInitialization, METH_VARARGS,
   "V.PerSubVolumeInitialization(vtkRenderer, vtkVolume, int)\nC++: void PerSubVolumeInitialization(vtkRenderer *, vtkVolume *,\n    int)\n\n"},
  {"RenderSubVolume", PyvtkFixedPointVolumeRayCastMapper_RenderSubVolume, METH_VARARGS,
   "V.RenderSubVolume()\nC++: void RenderSubVolume()\n\n"},
  {"DisplayRenderedImage", PyvtkFixedPointVolumeRayCastMapper_DisplayRenderedImage, METH_VARARGS,
   "V.DisplayRenderedImage(vtkRenderer, vtkVolume)\nC++: void DisplayRenderedImage(vtkRenderer *, vtkVolume *)\n\n"},
  {"AbortRender", PyvtkFixedPointVolumeRayCastMapper_AbortRender, METH_VARARGS,
   "V.AbortRender()\nC++: void AbortRender()\n\n"},
  {"CreateCanonicalView", PyvtkFixedPointVolumeRayCastMapper_CreateCanonicalView, METH_VARARGS,
   "V.CreateCanonicalView(vtkVolume, vtkImageData, int, [float, float,\n     float], [float, float, float])\nC++: void CreateCanonicalView(vtkVolume *volume,\n    vtkImageData *image, int blend_mode, double viewDirection[3],\n    double viewUp[3])\n\n"},
  {"GetEstimatedRenderTime", PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime, METH_VARARGS,
   "V.GetEstimatedRenderTime(vtkRenderer, vtkVolume) -> float\nC++: float GetEstimatedRenderTime(vtkRenderer *ren,\n    vtkVolume *vol)\nV.GetEstimatedRenderTime(vtkRenderer) -> float\nC++: float GetEstimatedRenderTime(vtkRenderer *ren)\n\nGet an estimate of the rendering time for a given volume /\nrenderer. Only valid if this mapper has been used to render that\nvolume for that renderer previously. Estimate is good when the\nviewing parameters have not changed much since that last render.\n"},
  {"SetFinalColorWindow", PyvtkFixedPointVolumeRayCastMapper_SetFinalColorWindow, METH_VARARGS,
   "V.SetFinalColorWindow(float)\nC++: virtual void SetFinalColorWindow(float _arg)\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {"GetFinalColorWindow", PyvtkFixedPointVolumeRayCastMapper_GetFinalColorWindow, METH_VARARGS,
   "V.GetFinalColorWindow() -> float\nC++: virtual float GetFinalColorWindow()\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {"SetFinalColorLevel", PyvtkFixedPointVolumeRayCastMapper_SetFinalColorLevel, METH_VARARGS,
   "V.SetFinalColorLevel(float)\nC++: virtual void SetFinalColorLevel(float _arg)\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {"GetFinalColorLevel", PyvtkFixedPointVolumeRayCastMapper_GetFinalColorLevel, METH_VARARGS,
   "V.GetFinalColorLevel() -> float\nC++: virtual float GetFinalColorLevel()\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {"GetFlipMIPComparison", PyvtkFixedPointVolumeRayCastMapper_GetFlipMIPComparison, METH_VARARGS,
   "V.GetFlipMIPComparison() -> int\nC++: virtual int GetFlipMIPComparison()\n\n"},
  {"ReleaseGraphicsResources", PyvtkFixedPointVolumeRayCastMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFixedPointVolumeRayCastMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkFixedPointVolumeRayCastMapper", // tp_name
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
  PyvtkFixedPointVolumeRayCastMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFixedPointVolumeRayCastMapper_StaticNew()
{
  return vtkFixedPointVolumeRayCastMapper::New();
}

PyObject *PyvtkFixedPointVolumeRayCastMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFixedPointVolumeRayCastMapper_Type, PyvtkFixedPointVolumeRayCastMapper_Methods,
    "vtkFixedPointVolumeRayCastMapper",
 &PyvtkFixedPointVolumeRayCastMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkFixedPointVolumeRayCastMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkVolumeMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFixedPointVolumeRayCastMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFixedPointVolumeRayCastMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFixedPointVolumeRayCastMapper", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTKKW_FP_SHIFT", 15 },
        { "VTKKW_FPMM_SHIFT", 17 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyFloat_FromDouble(0x7fff);
  if (o)
  {
    PyDict_SetItemString(dict, "VTKKW_FP_MASK", o);
    Py_DECREF(o);
  }
  o = PyFloat_FromDouble(32767.0);
  if (o)
  {
    PyDict_SetItemString(dict, "VTKKW_FP_SCALE", o);
    Py_DECREF(o);
  }
}

