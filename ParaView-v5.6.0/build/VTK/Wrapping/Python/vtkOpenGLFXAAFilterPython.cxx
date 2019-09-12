// python wrapper for vtkOpenGLFXAAFilter
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
#include "vtkOpenGLFXAAFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLFXAAFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenGLFXAAFilter_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkOpenGLFXAAFilter_Doc =
  "vtkOpenGLFXAAFilter - Perform FXAA antialiasing on the current\nframebuffer.\n\n"
  "Superclass: vtkObject\n\n"
  "Call Execute() to run a FXAA antialiasing pass on the current OpenGL\n"
  "framebuffer. See method documentation for tunable parameters.\n\n"
  "Based on the following implementation and description:\n\n"
  "Whitepaper:\n"
  "http://developer.download.nvidia.com/assets/gamedev/files/sdk/11/FXAA_\n"
  "WhitePaper.pdf\n\n"
  "Sample implementation:\n"
  "https://github.com/NVIDIAGameWorks/GraphicsSamples/blob/master/samples\n"
  "/es3-kepler/FXAA/FXAA3_11.h\n\n"
  "TODO there are currently some \"banding\" artifacts on some edges,\n"
  "particularly single pixel lines. These seem to be caused by using a\n"
  "linear RGB input, rather than a gamma-correct sRGB input. Future work\n"
  "should combine this pass with a gamma correction pass to correct\n"
  "this. Bonus points for precomputing luminosity into the sRGB's alpha\n"
  "channel to save cycles in the FXAA shader!\n\n";


static PyObject *
PyvtkOpenGLFXAAFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLFXAAFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLFXAAFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLFXAAFilter *tempr = vtkOpenGLFXAAFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLFXAAFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLFXAAFilter::NewInstance());

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
PyvtkOpenGLFXAAFilter_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  vtkOpenGLRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderer"))
  {
    if (ap.IsBound())
    {
      op->Execute(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::Execute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources();
    }
    else
    {
      op->vtkOpenGLFXAAFilter::ReleaseGraphicsResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_UpdateConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  vtkFXAAOptions *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFXAAOptions"))
  {
    if (ap.IsBound())
    {
      op->UpdateConfiguration(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::UpdateConfiguration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetRelativeContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelativeContrastThreshold(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetRelativeContrastThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetRelativeContrastThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeContrastThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRelativeContrastThresholdMinValue() :
      op->vtkOpenGLFXAAFilter::GetRelativeContrastThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetRelativeContrastThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeContrastThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRelativeContrastThresholdMaxValue() :
      op->vtkOpenGLFXAAFilter::GetRelativeContrastThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetRelativeContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRelativeContrastThreshold() :
      op->vtkOpenGLFXAAFilter::GetRelativeContrastThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetHardContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHardContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHardContrastThreshold(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetHardContrastThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetHardContrastThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHardContrastThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHardContrastThresholdMinValue() :
      op->vtkOpenGLFXAAFilter::GetHardContrastThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetHardContrastThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHardContrastThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHardContrastThresholdMaxValue() :
      op->vtkOpenGLFXAAFilter::GetHardContrastThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetHardContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHardContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHardContrastThreshold() :
      op->vtkOpenGLFXAAFilter::GetHardContrastThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetSubpixelBlendLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubpixelBlendLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubpixelBlendLimit(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetSubpixelBlendLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetSubpixelBlendLimitMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelBlendLimitMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelBlendLimitMinValue() :
      op->vtkOpenGLFXAAFilter::GetSubpixelBlendLimitMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetSubpixelBlendLimitMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelBlendLimitMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelBlendLimitMaxValue() :
      op->vtkOpenGLFXAAFilter::GetSubpixelBlendLimitMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetSubpixelBlendLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelBlendLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelBlendLimit() :
      op->vtkOpenGLFXAAFilter::GetSubpixelBlendLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetSubpixelContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubpixelContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubpixelContrastThreshold(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetSubpixelContrastThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetSubpixelContrastThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelContrastThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelContrastThresholdMinValue() :
      op->vtkOpenGLFXAAFilter::GetSubpixelContrastThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetSubpixelContrastThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelContrastThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelContrastThresholdMaxValue() :
      op->vtkOpenGLFXAAFilter::GetSubpixelContrastThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetSubpixelContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelContrastThreshold() :
      op->vtkOpenGLFXAAFilter::GetSubpixelContrastThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetUseHighQualityEndpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseHighQualityEndpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseHighQualityEndpoints(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetUseHighQualityEndpoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetUseHighQualityEndpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseHighQualityEndpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseHighQualityEndpoints() :
      op->vtkOpenGLFXAAFilter::GetUseHighQualityEndpoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_UseHighQualityEndpointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHighQualityEndpointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHighQualityEndpointsOn();
    }
    else
    {
      op->vtkOpenGLFXAAFilter::UseHighQualityEndpointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_UseHighQualityEndpointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHighQualityEndpointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHighQualityEndpointsOff();
    }
    else
    {
      op->vtkOpenGLFXAAFilter::UseHighQualityEndpointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetEndpointSearchIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndpointSearchIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndpointSearchIterations(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetEndpointSearchIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetEndpointSearchIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndpointSearchIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEndpointSearchIterationsMinValue() :
      op->vtkOpenGLFXAAFilter::GetEndpointSearchIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetEndpointSearchIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndpointSearchIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEndpointSearchIterationsMaxValue() :
      op->vtkOpenGLFXAAFilter::GetEndpointSearchIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetEndpointSearchIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndpointSearchIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEndpointSearchIterations() :
      op->vtkOpenGLFXAAFilter::GetEndpointSearchIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetDebugOptionValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebugOptionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  vtkFXAAOptions::DebugOption temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkFXAAOptions.DebugOption"))
  {
    if (ap.IsBound())
    {
      op->SetDebugOptionValue(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetDebugOptionValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetDebugOptionValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebugOptionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFXAAOptions::DebugOption tempr = (ap.IsBound() ?
      op->GetDebugOptionValue() :
      op->vtkOpenGLFXAAFilter::GetDebugOptionValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLFXAAFilter_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLFXAAFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLFXAAFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLFXAAFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenGLFXAAFilter\nC++: static vtkOpenGLFXAAFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLFXAAFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenGLFXAAFilter\nC++: vtkOpenGLFXAAFilter *NewInstance()\n\n"},
  {"Execute", PyvtkOpenGLFXAAFilter_Execute, METH_VARARGS,
   "V.Execute(vtkOpenGLRenderer)\nC++: void Execute(vtkOpenGLRenderer *ren)\n\nPerform FXAA on the current render buffer in ren.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLFXAAFilter_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources()\nC++: void ReleaseGraphicsResources()\n\nRelease all OpenGL state.\n"},
  {"UpdateConfiguration", PyvtkOpenGLFXAAFilter_UpdateConfiguration, METH_VARARGS,
   "V.UpdateConfiguration(vtkFXAAOptions)\nC++: void UpdateConfiguration(vtkFXAAOptions *opts)\n\nCopy the configuration values from opts into this filter. Note\nthat this copies the configuration values from opts -- it does\nnot save theopts pointer.\n"},
  {"SetRelativeContrastThreshold", PyvtkOpenGLFXAAFilter_SetRelativeContrastThreshold, METH_VARARGS,
   "V.SetRelativeContrastThreshold(float)\nC++: virtual void SetRelativeContrastThreshold(float _arg)\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetRelativeContrastThresholdMinValue", PyvtkOpenGLFXAAFilter_GetRelativeContrastThresholdMinValue, METH_VARARGS,
   "V.GetRelativeContrastThresholdMinValue() -> float\nC++: virtual float GetRelativeContrastThresholdMinValue()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetRelativeContrastThresholdMaxValue", PyvtkOpenGLFXAAFilter_GetRelativeContrastThresholdMaxValue, METH_VARARGS,
   "V.GetRelativeContrastThresholdMaxValue() -> float\nC++: virtual float GetRelativeContrastThresholdMaxValue()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetRelativeContrastThreshold", PyvtkOpenGLFXAAFilter_GetRelativeContrastThreshold, METH_VARARGS,
   "V.GetRelativeContrastThreshold() -> float\nC++: virtual float GetRelativeContrastThreshold()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"SetHardContrastThreshold", PyvtkOpenGLFXAAFilter_SetHardContrastThreshold, METH_VARARGS,
   "V.SetHardContrastThreshold(float)\nC++: virtual void SetHardContrastThreshold(float _arg)\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetHardContrastThresholdMinValue", PyvtkOpenGLFXAAFilter_GetHardContrastThresholdMinValue, METH_VARARGS,
   "V.GetHardContrastThresholdMinValue() -> float\nC++: virtual float GetHardContrastThresholdMinValue()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetHardContrastThresholdMaxValue", PyvtkOpenGLFXAAFilter_GetHardContrastThresholdMaxValue, METH_VARARGS,
   "V.GetHardContrastThresholdMaxValue() -> float\nC++: virtual float GetHardContrastThresholdMaxValue()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetHardContrastThreshold", PyvtkOpenGLFXAAFilter_GetHardContrastThreshold, METH_VARARGS,
   "V.GetHardContrastThreshold() -> float\nC++: virtual float GetHardContrastThreshold()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"SetSubpixelBlendLimit", PyvtkOpenGLFXAAFilter_SetSubpixelBlendLimit, METH_VARARGS,
   "V.SetSubpixelBlendLimit(float)\nC++: virtual void SetSubpixelBlendLimit(float _arg)\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetSubpixelBlendLimitMinValue", PyvtkOpenGLFXAAFilter_GetSubpixelBlendLimitMinValue, METH_VARARGS,
   "V.GetSubpixelBlendLimitMinValue() -> float\nC++: virtual float GetSubpixelBlendLimitMinValue()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetSubpixelBlendLimitMaxValue", PyvtkOpenGLFXAAFilter_GetSubpixelBlendLimitMaxValue, METH_VARARGS,
   "V.GetSubpixelBlendLimitMaxValue() -> float\nC++: virtual float GetSubpixelBlendLimitMaxValue()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetSubpixelBlendLimit", PyvtkOpenGLFXAAFilter_GetSubpixelBlendLimit, METH_VARARGS,
   "V.GetSubpixelBlendLimit() -> float\nC++: virtual float GetSubpixelBlendLimit()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"SetSubpixelContrastThreshold", PyvtkOpenGLFXAAFilter_SetSubpixelContrastThreshold, METH_VARARGS,
   "V.SetSubpixelContrastThreshold(float)\nC++: virtual void SetSubpixelContrastThreshold(float _arg)\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetSubpixelContrastThresholdMinValue", PyvtkOpenGLFXAAFilter_GetSubpixelContrastThresholdMinValue, METH_VARARGS,
   "V.GetSubpixelContrastThresholdMinValue() -> float\nC++: virtual float GetSubpixelContrastThresholdMinValue()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetSubpixelContrastThresholdMaxValue", PyvtkOpenGLFXAAFilter_GetSubpixelContrastThresholdMaxValue, METH_VARARGS,
   "V.GetSubpixelContrastThresholdMaxValue() -> float\nC++: virtual float GetSubpixelContrastThresholdMaxValue()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetSubpixelContrastThreshold", PyvtkOpenGLFXAAFilter_GetSubpixelContrastThreshold, METH_VARARGS,
   "V.GetSubpixelContrastThreshold() -> float\nC++: virtual float GetSubpixelContrastThreshold()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"SetUseHighQualityEndpoints", PyvtkOpenGLFXAAFilter_SetUseHighQualityEndpoints, METH_VARARGS,
   "V.SetUseHighQualityEndpoints(bool)\nC++: virtual void SetUseHighQualityEndpoints(bool val)\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetUseHighQualityEndpoints", PyvtkOpenGLFXAAFilter_GetUseHighQualityEndpoints, METH_VARARGS,
   "V.GetUseHighQualityEndpoints() -> bool\nC++: virtual bool GetUseHighQualityEndpoints()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"UseHighQualityEndpointsOn", PyvtkOpenGLFXAAFilter_UseHighQualityEndpointsOn, METH_VARARGS,
   "V.UseHighQualityEndpointsOn()\nC++: virtual void UseHighQualityEndpointsOn()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"UseHighQualityEndpointsOff", PyvtkOpenGLFXAAFilter_UseHighQualityEndpointsOff, METH_VARARGS,
   "V.UseHighQualityEndpointsOff()\nC++: virtual void UseHighQualityEndpointsOff()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"SetEndpointSearchIterations", PyvtkOpenGLFXAAFilter_SetEndpointSearchIterations, METH_VARARGS,
   "V.SetEndpointSearchIterations(int)\nC++: virtual void SetEndpointSearchIterations(int _arg)\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetEndpointSearchIterationsMinValue", PyvtkOpenGLFXAAFilter_GetEndpointSearchIterationsMinValue, METH_VARARGS,
   "V.GetEndpointSearchIterationsMinValue() -> int\nC++: virtual int GetEndpointSearchIterationsMinValue()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetEndpointSearchIterationsMaxValue", PyvtkOpenGLFXAAFilter_GetEndpointSearchIterationsMaxValue, METH_VARARGS,
   "V.GetEndpointSearchIterationsMaxValue() -> int\nC++: virtual int GetEndpointSearchIterationsMaxValue()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetEndpointSearchIterations", PyvtkOpenGLFXAAFilter_GetEndpointSearchIterations, METH_VARARGS,
   "V.GetEndpointSearchIterations() -> int\nC++: virtual int GetEndpointSearchIterations()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"SetDebugOptionValue", PyvtkOpenGLFXAAFilter_SetDebugOptionValue, METH_VARARGS,
   "V.SetDebugOptionValue(vtkFXAAOptions.DebugOption)\nC++: virtual void SetDebugOptionValue(\n    vtkFXAAOptions::DebugOption opt)\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetDebugOptionValue", PyvtkOpenGLFXAAFilter_GetDebugOptionValue, METH_VARARGS,
   "V.GetDebugOptionValue() -> vtkFXAAOptions.DebugOption\nC++: virtual vtkFXAAOptions::DebugOption GetDebugOptionValue()\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenGLFXAAFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingOpenGL2Python.vtkOpenGLFXAAFilter", // tp_name
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
  PyvtkOpenGLFXAAFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLFXAAFilter_StaticNew()
{
  return vtkOpenGLFXAAFilter::New();
}

PyObject *PyvtkOpenGLFXAAFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenGLFXAAFilter_Type, PyvtkOpenGLFXAAFilter_Methods,
    "vtkOpenGLFXAAFilter",
 &PyvtkOpenGLFXAAFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenGLFXAAFilter_Type;

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

void PyVTKAddFile_vtkOpenGLFXAAFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLFXAAFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLFXAAFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

