// python wrapper for vtkCameraInterpolator
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
#include "vtkCameraInterpolator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCameraInterpolator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCameraInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCameraInterpolator_Doc =
  "vtkCameraInterpolator - interpolate a series of cameras to update a\nnew camera\n\n"
  "Superclass: vtkObject\n\n"
  "This class is used to interpolate a series of cameras to update a\n"
  "specified camera. Either linear interpolation or spline interpolation\n"
  "may be used. The instance variables currently interpolated include\n"
  "position, focal point, view up, view angle, parallel scale, and\n"
  "clipping range.\n\n"
  "To use this class, specify the type of interpolation to use, and add\n"
  "a series of cameras at various times \"t\" to the list of cameras from\n"
  "which to interpolate. Then to interpolate in between cameras, simply\n"
  "invoke the function InterpolateCamera(t,camera) where \"camera\" is the\n"
  "camera to be updated with interpolated values. Note that \"t\" should\n"
  "be in the range (min,max) times specified with the AddCamera()\n"
  "method. If outside this range, the interpolation is clamped. This\n"
  "class copies the camera information (as compared to referencing the\n"
  "cameras) so you do not need to keep separate instances of the camera\n"
  "around for each camera added to the list of cameras to interpolate.\n\n"
  "@warning\n"
  "The interpolator classes are initialized the first time\n"
  "InterpolateCamera() is called. Any later changes to the\n"
  "interpolators, or additions to the list of cameras to be\n"
  "interpolated, causes a reinitialization of the interpolators the next\n"
  "time InterpolateCamera() is invoked. Thus the best performance is\n"
  "obtained by 1) configuring the interpolators, 2) adding all the\n"
  "cameras, and 3) finally performing interpolation.\n\n"
  "@warning\n"
  "Currently position, focal point and view up are interpolated to\n"
  "define the orientation of the camera. Quaternion interpolation may be\n"
  "added in the future as an alternative interpolation method for camera\n"
  "orientation.\n\n";


static PyObject *
PyvtkCameraInterpolator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCameraInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCameraInterpolator *tempr = vtkCameraInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraInterpolator::NewInstance());

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
PyvtkCameraInterpolator_GetNumberOfCameras(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCameras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCameras() :
      op->vtkCameraInterpolator::GetNumberOfCameras());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetMinimumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumT() :
      op->vtkCameraInterpolator::GetMinimumT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetMaximumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumT() :
      op->vtkCameraInterpolator::GetMaximumT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCameraInterpolator::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_AddCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  double temp0;
  vtkCamera *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->AddCamera(temp0, temp1);
    }
    else
    {
      op->vtkCameraInterpolator::AddCamera(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_RemoveCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveCamera(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::RemoveCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_InterpolateCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  double temp0;
  vtkCamera *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->InterpolateCamera(temp0, temp1);
    }
    else
    {
      op->vtkCameraInterpolator::InterpolateCamera(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationType(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetInterpolationType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMinValue() :
      op->vtkCameraInterpolator::GetInterpolationTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMaxValue() :
      op->vtkCameraInterpolator::GetInterpolationTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationType() :
      op->vtkCameraInterpolator::GetInterpolationType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToLinear();
    }
    else
    {
      op->vtkCameraInterpolator::SetInterpolationTypeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetInterpolationTypeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToSpline();
    }
    else
    {
      op->vtkCameraInterpolator::SetInterpolationTypeToSpline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetInterpolationTypeToManual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToManual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToManual();
    }
    else
    {
      op->vtkCameraInterpolator::SetInterpolationTypeToManual();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetPositionInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetPositionInterpolator(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetPositionInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetPositionInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetPositionInterpolator() :
      op->vtkCameraInterpolator::GetPositionInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetFocalPointInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPointInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetFocalPointInterpolator(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetFocalPointInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetFocalPointInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPointInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetFocalPointInterpolator() :
      op->vtkCameraInterpolator::GetFocalPointInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetViewUpInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewUpInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetViewUpInterpolator(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetViewUpInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetViewUpInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewUpInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetViewUpInterpolator() :
      op->vtkCameraInterpolator::GetViewUpInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetViewAngleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetViewAngleInterpolator(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetViewAngleInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetViewAngleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetViewAngleInterpolator() :
      op->vtkCameraInterpolator::GetViewAngleInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetParallelScaleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelScaleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetParallelScaleInterpolator(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetParallelScaleInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetParallelScaleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelScaleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetParallelScaleInterpolator() :
      op->vtkCameraInterpolator::GetParallelScaleInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetClippingRangeInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingRangeInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetClippingRangeInterpolator(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetClippingRangeInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetClippingRangeInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingRangeInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetClippingRangeInterpolator() :
      op->vtkCameraInterpolator::GetClippingRangeInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCameraInterpolator::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCameraInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkCameraInterpolator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCameraInterpolator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCameraInterpolator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCameraInterpolator\nC++: static vtkCameraInterpolator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCameraInterpolator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCameraInterpolator\nC++: vtkCameraInterpolator *NewInstance()\n\n"},
  {"GetNumberOfCameras", PyvtkCameraInterpolator_GetNumberOfCameras, METH_VARARGS,
   "V.GetNumberOfCameras() -> int\nC++: int GetNumberOfCameras()\n\nReturn the number of cameras in the list of cameras.\n"},
  {"GetMinimumT", PyvtkCameraInterpolator_GetMinimumT, METH_VARARGS,
   "V.GetMinimumT() -> float\nC++: double GetMinimumT()\n\nObtain some information about the interpolation range. The\nnumbers returned are undefined if the list of cameras is empty.\n"},
  {"GetMaximumT", PyvtkCameraInterpolator_GetMaximumT, METH_VARARGS,
   "V.GetMaximumT() -> float\nC++: double GetMaximumT()\n\nObtain some information about the interpolation range. The\nnumbers returned are undefined if the list of cameras is empty.\n"},
  {"Initialize", PyvtkCameraInterpolator_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nClear the list of cameras.\n"},
  {"AddCamera", PyvtkCameraInterpolator_AddCamera, METH_VARARGS,
   "V.AddCamera(float, vtkCamera)\nC++: void AddCamera(double t, vtkCamera *camera)\n\nAdd another camera to the list of cameras defining the camera\nfunction. Note that using the same time t value more than once\nreplaces the previous camera value at t. At least one camera must\nbe added to define a function.\n"},
  {"RemoveCamera", PyvtkCameraInterpolator_RemoveCamera, METH_VARARGS,
   "V.RemoveCamera(float)\nC++: void RemoveCamera(double t)\n\nDelete the camera at a particular parameter t. If there is no\ncamera defined at location t, then the method does nothing.\n"},
  {"InterpolateCamera", PyvtkCameraInterpolator_InterpolateCamera, METH_VARARGS,
   "V.InterpolateCamera(float, vtkCamera)\nC++: void InterpolateCamera(double t, vtkCamera *camera)\n\nInterpolate the list of cameras and determine a new camera (i.e.,\nfill in the camera provided). If t is outside the range of\n(min,max) values, then t is clamped to lie within this range.\n"},
  {"SetInterpolationType", PyvtkCameraInterpolator_SetInterpolationType, METH_VARARGS,
   "V.SetInterpolationType(int)\nC++: virtual void SetInterpolationType(int _arg)\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {"GetInterpolationTypeMinValue", PyvtkCameraInterpolator_GetInterpolationTypeMinValue, METH_VARARGS,
   "V.GetInterpolationTypeMinValue() -> int\nC++: virtual int GetInterpolationTypeMinValue()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {"GetInterpolationTypeMaxValue", PyvtkCameraInterpolator_GetInterpolationTypeMaxValue, METH_VARARGS,
   "V.GetInterpolationTypeMaxValue() -> int\nC++: virtual int GetInterpolationTypeMaxValue()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {"GetInterpolationType", PyvtkCameraInterpolator_GetInterpolationType, METH_VARARGS,
   "V.GetInterpolationType() -> int\nC++: virtual int GetInterpolationType()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {"SetInterpolationTypeToLinear", PyvtkCameraInterpolator_SetInterpolationTypeToLinear, METH_VARARGS,
   "V.SetInterpolationTypeToLinear()\nC++: void SetInterpolationTypeToLinear()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {"SetInterpolationTypeToSpline", PyvtkCameraInterpolator_SetInterpolationTypeToSpline, METH_VARARGS,
   "V.SetInterpolationTypeToSpline()\nC++: void SetInterpolationTypeToSpline()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {"SetInterpolationTypeToManual", PyvtkCameraInterpolator_SetInterpolationTypeToManual, METH_VARARGS,
   "V.SetInterpolationTypeToManual()\nC++: void SetInterpolationTypeToManual()\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {"SetPositionInterpolator", PyvtkCameraInterpolator_SetPositionInterpolator, METH_VARARGS,
   "V.SetPositionInterpolator(vtkTupleInterpolator)\nC++: virtual void SetPositionInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the position\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {"GetPositionInterpolator", PyvtkCameraInterpolator_GetPositionInterpolator, METH_VARARGS,
   "V.GetPositionInterpolator() -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetPositionInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the position\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {"SetFocalPointInterpolator", PyvtkCameraInterpolator_SetFocalPointInterpolator, METH_VARARGS,
   "V.SetFocalPointInterpolator(vtkTupleInterpolator)\nC++: virtual void SetFocalPointInterpolator(\n    vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the focal\npoint portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {"GetFocalPointInterpolator", PyvtkCameraInterpolator_GetFocalPointInterpolator, METH_VARARGS,
   "V.GetFocalPointInterpolator() -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetFocalPointInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the focal\npoint portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {"SetViewUpInterpolator", PyvtkCameraInterpolator_SetViewUpInterpolator, METH_VARARGS,
   "V.SetViewUpInterpolator(vtkTupleInterpolator)\nC++: virtual void SetViewUpInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the view up\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {"GetViewUpInterpolator", PyvtkCameraInterpolator_GetViewUpInterpolator, METH_VARARGS,
   "V.GetViewUpInterpolator() -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetViewUpInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the view up\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {"SetViewAngleInterpolator", PyvtkCameraInterpolator_SetViewAngleInterpolator, METH_VARARGS,
   "V.SetViewAngleInterpolator(vtkTupleInterpolator)\nC++: virtual void SetViewAngleInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the view angle\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {"GetViewAngleInterpolator", PyvtkCameraInterpolator_GetViewAngleInterpolator, METH_VARARGS,
   "V.GetViewAngleInterpolator() -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetViewAngleInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the view angle\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {"SetParallelScaleInterpolator", PyvtkCameraInterpolator_SetParallelScaleInterpolator, METH_VARARGS,
   "V.SetParallelScaleInterpolator(vtkTupleInterpolator)\nC++: virtual void SetParallelScaleInterpolator(\n    vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the parallel\nscale portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {"GetParallelScaleInterpolator", PyvtkCameraInterpolator_GetParallelScaleInterpolator, METH_VARARGS,
   "V.GetParallelScaleInterpolator() -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetParallelScaleInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the parallel\nscale portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {"SetClippingRangeInterpolator", PyvtkCameraInterpolator_SetClippingRangeInterpolator, METH_VARARGS,
   "V.SetClippingRangeInterpolator(vtkTupleInterpolator)\nC++: virtual void SetClippingRangeInterpolator(\n    vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the clipping\nrange portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {"GetClippingRangeInterpolator", PyvtkCameraInterpolator_GetClippingRangeInterpolator, METH_VARARGS,
   "V.GetClippingRangeInterpolator() -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetClippingRangeInterpolator()\n\nSet/Get the tuple interpolator used to interpolate the clipping\nrange portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {"GetMTime", PyvtkCameraInterpolator_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime() because we depend on the interpolators which\nmay be modified outside of this class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCameraInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkCameraInterpolator", // tp_name
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
  PyvtkCameraInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCameraInterpolator_StaticNew()
{
  return vtkCameraInterpolator::New();
}

PyObject *PyvtkCameraInterpolator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCameraInterpolator_Type, PyvtkCameraInterpolator_Methods,
    "vtkCameraInterpolator",
 &PyvtkCameraInterpolator_StaticNew);

  PyTypeObject *pytype = &PyvtkCameraInterpolator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "INTERPOLATION_TYPE_LINEAR", vtkCameraInterpolator::INTERPOLATION_TYPE_LINEAR },
        { "INTERPOLATION_TYPE_SPLINE", vtkCameraInterpolator::INTERPOLATION_TYPE_SPLINE },
        { "INTERPOLATION_TYPE_MANUAL", vtkCameraInterpolator::INTERPOLATION_TYPE_MANUAL },
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

void PyVTKAddFile_vtkCameraInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCameraInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCameraInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

