// python wrapper for vtkUnstructuredGridVolumeZSweepMapper
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
#include "vtkUnstructuredGridVolumeZSweepMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridVolumeZSweepMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnstructuredGridVolumeZSweepMapper_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridVolumeMapper_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridVolumeMapper_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridVolumeMapper_ClassNew
#endif

static const char *PyvtkUnstructuredGridVolumeZSweepMapper_Doc =
  "vtkUnstructuredGridVolumeZSweepMapper - Unstructured grid volume\nmapper based the ZSweep Algorithm\n\n"
  "Superclass: vtkUnstructuredGridVolumeMapper\n\n"
  "This is a volume mapper for unstructured grid implemented with the\n"
  "ZSweep algorithm. This is a software projective method.\n\n"
  "@sa\n"
  "vtkVolumetMapper\n\n"
  "@par Background: The algorithm is described in the following paper:\n"
  "Ricardo Farias, Joseph S. B. Mitchell and Claudio T. Silva. ZSWEEP:\n"
  "An Efficient and Exact Projection Algorithm for Unstructured Volume\n"
  "Rendering. In 2000 Volume Visualization Symposium, pages 91--99.\n"
  "October 2000. http://www.cse.ogi.edu/~csilva/papers/volvis2000.pdf\n\n";


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridVolumeZSweepMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridVolumeZSweepMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridVolumeZSweepMapper *tempr = vtkUnstructuredGridVolumeZSweepMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridVolumeZSweepMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridVolumeZSweepMapper::NewInstance());

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
PyvtkUnstructuredGridVolumeZSweepMapper_SetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeZSweepMapper::SetImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMinValue() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMaxValue() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistance() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeZSweepMapper::SetMinimumImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMinimumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMinValue() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetMinimumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMinimumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMaxValue() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetMinimumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistance() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetMinimumImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeZSweepMapper::SetMaximumImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMaximumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMinValue() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetMaximumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMaximumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMaxValue() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetMaximumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistance() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetMaximumImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeZSweepMapper::SetAutoAdjustSampleDistances(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetAutoAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMinValue() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetAutoAdjustSampleDistancesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetAutoAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMaxValue() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetAutoAdjustSampleDistancesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistances() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetAutoAdjustSampleDistances());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_AutoAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOn();
    }
    else
    {
      op->vtkUnstructuredGridVolumeZSweepMapper::AutoAdjustSampleDistancesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_AutoAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOff();
    }
    else
    {
      op->vtkUnstructuredGridVolumeZSweepMapper::AutoAdjustSampleDistancesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeZSweepMapper::SetIntermixIntersectingGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetIntermixIntersectingGeometryMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntermixIntersectingGeometryMinValue() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetIntermixIntersectingGeometryMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetIntermixIntersectingGeometryMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntermixIntersectingGeometryMaxValue() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetIntermixIntersectingGeometryMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntermixIntersectingGeometry() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetIntermixIntersectingGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_IntermixIntersectingGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntermixIntersectingGeometryOn();
    }
    else
    {
      op->vtkUnstructuredGridVolumeZSweepMapper::IntermixIntersectingGeometryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_IntermixIntersectingGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntermixIntersectingGeometryOff();
    }
    else
    {
      op->vtkUnstructuredGridVolumeZSweepMapper::IntermixIntersectingGeometryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMaxPixelListSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPixelListSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxPixelListSize() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetMaxPixelListSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SetMaxPixelListSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxPixelListSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxPixelListSize(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeZSweepMapper::SetMaxPixelListSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SetRayIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRayIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  vtkUnstructuredGridVolumeRayIntegrator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGridVolumeRayIntegrator"))
  {
    if (ap.IsBound())
    {
      op->SetRayIntegrator(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeZSweepMapper::SetRayIntegrator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetRayIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRayIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridVolumeRayIntegrator *tempr = (ap.IsBound() ?
      op->GetRayIntegrator() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetRayIntegrator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeZSweepMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetImageInUseSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageInUseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageInUseSize() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetImageInUseSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetImageOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageOrigin() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetImageOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetImageViewportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageViewportSize() :
      op->vtkUnstructuredGridVolumeZSweepMapper::GetImageViewportSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridVolumeZSweepMapper_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridVolumeZSweepMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridVolumeZSweepMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridVolumeZSweepMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkUnstructuredGridVolumeZSweepMapper\nC++: static vtkUnstructuredGridVolumeZSweepMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridVolumeZSweepMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnstructuredGridVolumeZSweepMapper\nC++: vtkUnstructuredGridVolumeZSweepMapper *NewInstance()\n\n"},
  {"SetImageSampleDistance", PyvtkUnstructuredGridVolumeZSweepMapper_SetImageSampleDistance, METH_VARARGS,
   "V.SetImageSampleDistance(float)\nC++: virtual void SetImageSampleDistance(float _arg)\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {"GetImageSampleDistanceMinValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetImageSampleDistanceMinValue, METH_VARARGS,
   "V.GetImageSampleDistanceMinValue() -> float\nC++: virtual float GetImageSampleDistanceMinValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {"GetImageSampleDistanceMaxValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetImageSampleDistanceMaxValue, METH_VARARGS,
   "V.GetImageSampleDistanceMaxValue() -> float\nC++: virtual float GetImageSampleDistanceMaxValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {"GetImageSampleDistance", PyvtkUnstructuredGridVolumeZSweepMapper_GetImageSampleDistance, METH_VARARGS,
   "V.GetImageSampleDistance() -> float\nC++: virtual float GetImageSampleDistance()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {"SetMinimumImageSampleDistance", PyvtkUnstructuredGridVolumeZSweepMapper_SetMinimumImageSampleDistance, METH_VARARGS,
   "V.SetMinimumImageSampleDistance(float)\nC++: virtual void SetMinimumImageSampleDistance(float _arg)\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {"GetMinimumImageSampleDistanceMinValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetMinimumImageSampleDistanceMinValue, METH_VARARGS,
   "V.GetMinimumImageSampleDistanceMinValue() -> float\nC++: virtual float GetMinimumImageSampleDistanceMinValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {"GetMinimumImageSampleDistanceMaxValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetMinimumImageSampleDistanceMaxValue, METH_VARARGS,
   "V.GetMinimumImageSampleDistanceMaxValue() -> float\nC++: virtual float GetMinimumImageSampleDistanceMaxValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {"GetMinimumImageSampleDistance", PyvtkUnstructuredGridVolumeZSweepMapper_GetMinimumImageSampleDistance, METH_VARARGS,
   "V.GetMinimumImageSampleDistance() -> float\nC++: virtual float GetMinimumImageSampleDistance()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {"SetMaximumImageSampleDistance", PyvtkUnstructuredGridVolumeZSweepMapper_SetMaximumImageSampleDistance, METH_VARARGS,
   "V.SetMaximumImageSampleDistance(float)\nC++: virtual void SetMaximumImageSampleDistance(float _arg)\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {"GetMaximumImageSampleDistanceMinValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetMaximumImageSampleDistanceMinValue, METH_VARARGS,
   "V.GetMaximumImageSampleDistanceMinValue() -> float\nC++: virtual float GetMaximumImageSampleDistanceMinValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {"GetMaximumImageSampleDistanceMaxValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetMaximumImageSampleDistanceMaxValue, METH_VARARGS,
   "V.GetMaximumImageSampleDistanceMaxValue() -> float\nC++: virtual float GetMaximumImageSampleDistanceMaxValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {"GetMaximumImageSampleDistance", PyvtkUnstructuredGridVolumeZSweepMapper_GetMaximumImageSampleDistance, METH_VARARGS,
   "V.GetMaximumImageSampleDistance() -> float\nC++: virtual float GetMaximumImageSampleDistance()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {"SetAutoAdjustSampleDistances", PyvtkUnstructuredGridVolumeZSweepMapper_SetAutoAdjustSampleDistances, METH_VARARGS,
   "V.SetAutoAdjustSampleDistances(int)\nC++: virtual void SetAutoAdjustSampleDistances(vtkTypeBool _arg)\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"GetAutoAdjustSampleDistancesMinValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetAutoAdjustSampleDistancesMinValue, METH_VARARGS,
   "V.GetAutoAdjustSampleDistancesMinValue() -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMinValue()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"GetAutoAdjustSampleDistancesMaxValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetAutoAdjustSampleDistancesMaxValue, METH_VARARGS,
   "V.GetAutoAdjustSampleDistancesMaxValue() -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMaxValue()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"GetAutoAdjustSampleDistances", PyvtkUnstructuredGridVolumeZSweepMapper_GetAutoAdjustSampleDistances, METH_VARARGS,
   "V.GetAutoAdjustSampleDistances() -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistances()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"AutoAdjustSampleDistancesOn", PyvtkUnstructuredGridVolumeZSweepMapper_AutoAdjustSampleDistancesOn, METH_VARARGS,
   "V.AutoAdjustSampleDistancesOn()\nC++: virtual void AutoAdjustSampleDistancesOn()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"AutoAdjustSampleDistancesOff", PyvtkUnstructuredGridVolumeZSweepMapper_AutoAdjustSampleDistancesOff, METH_VARARGS,
   "V.AutoAdjustSampleDistancesOff()\nC++: virtual void AutoAdjustSampleDistancesOff()\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"SetIntermixIntersectingGeometry", PyvtkUnstructuredGridVolumeZSweepMapper_SetIntermixIntersectingGeometry, METH_VARARGS,
   "V.SetIntermixIntersectingGeometry(int)\nC++: virtual void SetIntermixIntersectingGeometry(\n    vtkTypeBool _arg)\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {"GetIntermixIntersectingGeometryMinValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetIntermixIntersectingGeometryMinValue, METH_VARARGS,
   "V.GetIntermixIntersectingGeometryMinValue() -> int\nC++: virtual vtkTypeBool GetIntermixIntersectingGeometryMinValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {"GetIntermixIntersectingGeometryMaxValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetIntermixIntersectingGeometryMaxValue, METH_VARARGS,
   "V.GetIntermixIntersectingGeometryMaxValue() -> int\nC++: virtual vtkTypeBool GetIntermixIntersectingGeometryMaxValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {"GetIntermixIntersectingGeometry", PyvtkUnstructuredGridVolumeZSweepMapper_GetIntermixIntersectingGeometry, METH_VARARGS,
   "V.GetIntermixIntersectingGeometry() -> int\nC++: virtual vtkTypeBool GetIntermixIntersectingGeometry()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {"IntermixIntersectingGeometryOn", PyvtkUnstructuredGridVolumeZSweepMapper_IntermixIntersectingGeometryOn, METH_VARARGS,
   "V.IntermixIntersectingGeometryOn()\nC++: virtual void IntermixIntersectingGeometryOn()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {"IntermixIntersectingGeometryOff", PyvtkUnstructuredGridVolumeZSweepMapper_IntermixIntersectingGeometryOff, METH_VARARGS,
   "V.IntermixIntersectingGeometryOff()\nC++: virtual void IntermixIntersectingGeometryOff()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {"GetMaxPixelListSize", PyvtkUnstructuredGridVolumeZSweepMapper_GetMaxPixelListSize, METH_VARARGS,
   "V.GetMaxPixelListSize() -> int\nC++: int GetMaxPixelListSize()\n\nMaximum size allowed for a pixel list. Default is 32. During the\nrendering, if a list of pixel is full, incremental compositing is\nperformed. Even if it is a user setting, it is an advanced\nparameter. You have to understand how the algorithm works to\nchange this value.\n"},
  {"SetMaxPixelListSize", PyvtkUnstructuredGridVolumeZSweepMapper_SetMaxPixelListSize, METH_VARARGS,
   "V.SetMaxPixelListSize(int)\nC++: void SetMaxPixelListSize(int size)\n\nChange the maximum size allowed for a pixel list. It is an\nadvanced parameter.\n\\pre positive_size: size>1\n"},
  {"SetRayIntegrator", PyvtkUnstructuredGridVolumeZSweepMapper_SetRayIntegrator, METH_VARARGS,
   "V.SetRayIntegrator(vtkUnstructuredGridVolumeRayIntegrator)\nC++: virtual void SetRayIntegrator(\n    vtkUnstructuredGridVolumeRayIntegrator *ri)\n\nSet/Get the helper class for integrating rays.  If set to NULL, a\ndefault integrator will be assigned.\n"},
  {"GetRayIntegrator", PyvtkUnstructuredGridVolumeZSweepMapper_GetRayIntegrator, METH_VARARGS,
   "V.GetRayIntegrator() -> vtkUnstructuredGridVolumeRayIntegrator\nC++: virtual vtkUnstructuredGridVolumeRayIntegrator *GetRayIntegrator(\n    )\n\nSet/Get the helper class for integrating rays.  If set to NULL, a\ndefault integrator will be assigned.\n"},
  {"Render", PyvtkUnstructuredGridVolumeZSweepMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *ren, vtkVolume *vol) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {"GetImageInUseSize", PyvtkUnstructuredGridVolumeZSweepMapper_GetImageInUseSize, METH_VARARGS,
   "V.GetImageInUseSize() -> (int, int)\nC++: int *GetImageInUseSize()\n\n"},
  {"GetImageOrigin", PyvtkUnstructuredGridVolumeZSweepMapper_GetImageOrigin, METH_VARARGS,
   "V.GetImageOrigin() -> (int, int)\nC++: int *GetImageOrigin()\n\n"},
  {"GetImageViewportSize", PyvtkUnstructuredGridVolumeZSweepMapper_GetImageViewportSize, METH_VARARGS,
   "V.GetImageViewportSize() -> (int, int)\nC++: int *GetImageViewportSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnstructuredGridVolumeZSweepMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkUnstructuredGridVolumeZSweepMapper", // tp_name
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
  PyvtkUnstructuredGridVolumeZSweepMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridVolumeZSweepMapper_StaticNew()
{
  return vtkUnstructuredGridVolumeZSweepMapper::New();
}

PyObject *PyvtkUnstructuredGridVolumeZSweepMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnstructuredGridVolumeZSweepMapper_Type, PyvtkUnstructuredGridVolumeZSweepMapper_Methods,
    "vtkUnstructuredGridVolumeZSweepMapper",
 &PyvtkUnstructuredGridVolumeZSweepMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkUnstructuredGridVolumeZSweepMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridVolumeMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridVolumeZSweepMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridVolumeZSweepMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridVolumeZSweepMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

