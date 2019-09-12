// python wrapper for vtkCamera
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
#include "vtkRect.h"
#include "vtkCamera.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCamera(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCamera_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCamera_Doc =
  "vtkCamera - a virtual camera for 3D rendering\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCamera is a virtual camera for 3D rendering. It provides methods\n"
  "to position and orient the view point and focal point. Convenience\n"
  "methods for moving about the focal point also are provided. More\n"
  "complex methods allow the manipulation of the computer graphics model\n"
  "including view up vector, clipping planes, and camera perspective.\n"
  "@sa\n"
  "vtkPerspectiveTransform\n\n";


static PyObject *
PyvtkCamera_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCamera::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCamera::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCamera *tempr = vtkCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCamera::NewInstance());

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
PyvtkCamera_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCamera::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkCamera::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCamera_SetPosition_s1(self, args);
    case 1:
      return PyvtkCamera_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}



static PyObject *
PyvtkCamera_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkCamera::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetFocalPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCamera::SetFocalPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetFocalPoint(temp0);
    }
    else
    {
      op->vtkCamera::SetFocalPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCamera_SetFocalPoint_s1(self, args);
    case 1:
      return PyvtkCamera_SetFocalPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFocalPoint");
  return nullptr;
}



static PyObject *
PyvtkCamera_GetFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFocalPoint() :
      op->vtkCamera::GetFocalPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetViewUp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetViewUp(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCamera::SetViewUp(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetViewUp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetViewUp(temp0);
    }
    else
    {
      op->vtkCamera::SetViewUp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetViewUp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCamera_SetViewUp_s1(self, args);
    case 1:
      return PyvtkCamera_SetViewUp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetViewUp");
  return nullptr;
}



static PyObject *
PyvtkCamera_GetViewUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetViewUp() :
      op->vtkCamera::GetViewUp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_OrthogonalizeViewUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrthogonalizeViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OrthogonalizeViewUp();
    }
    else
    {
      op->vtkCamera::OrthogonalizeViewUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistance(temp0);
    }
    else
    {
      op->vtkCamera::SetDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkCamera::GetDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetDirectionOfProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionOfProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDirectionOfProjection() :
      op->vtkCamera::GetDirectionOfProjection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_Dolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Dolly(temp0);
    }
    else
    {
      op->vtkCamera::Dolly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetRoll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRoll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRoll(temp0);
    }
    else
    {
      op->vtkCamera::SetRoll(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetRoll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRoll() :
      op->vtkCamera::GetRoll());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_Roll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Roll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Roll(temp0);
    }
    else
    {
      op->vtkCamera::Roll(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_Azimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Azimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Azimuth(temp0);
    }
    else
    {
      op->vtkCamera::Azimuth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_Yaw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Yaw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Yaw(temp0);
    }
    else
    {
      op->vtkCamera::Yaw(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_Elevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Elevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Elevation(temp0);
    }
    else
    {
      op->vtkCamera::Elevation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_Pitch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pitch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Pitch(temp0);
    }
    else
    {
      op->vtkCamera::Pitch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetParallelProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParallelProjection(temp0);
    }
    else
    {
      op->vtkCamera::SetParallelProjection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetParallelProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParallelProjection() :
      op->vtkCamera::GetParallelProjection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_ParallelProjectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelProjectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParallelProjectionOn();
    }
    else
    {
      op->vtkCamera::ParallelProjectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_ParallelProjectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelProjectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParallelProjectionOff();
    }
    else
    {
      op->vtkCamera::ParallelProjectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetUseHorizontalViewAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseHorizontalViewAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseHorizontalViewAngle(temp0);
    }
    else
    {
      op->vtkCamera::SetUseHorizontalViewAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetUseHorizontalViewAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseHorizontalViewAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseHorizontalViewAngle() :
      op->vtkCamera::GetUseHorizontalViewAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_UseHorizontalViewAngleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHorizontalViewAngleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHorizontalViewAngleOn();
    }
    else
    {
      op->vtkCamera::UseHorizontalViewAngleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_UseHorizontalViewAngleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHorizontalViewAngleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHorizontalViewAngleOff();
    }
    else
    {
      op->vtkCamera::UseHorizontalViewAngleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetViewAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewAngle(temp0);
    }
    else
    {
      op->vtkCamera::SetViewAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetViewAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngle() :
      op->vtkCamera::GetViewAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetParallelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParallelScale(temp0);
    }
    else
    {
      op->vtkCamera::SetParallelScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetParallelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetParallelScale() :
      op->vtkCamera::GetParallelScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_Zoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->vtkCamera::Zoom(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetClippingRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetClippingRange(temp0, temp1);
    }
    else
    {
      op->vtkCamera::SetClippingRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetClippingRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetClippingRange(temp0);
    }
    else
    {
      op->vtkCamera::SetClippingRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetClippingRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCamera_SetClippingRange_s1(self, args);
    case 1:
      return PyvtkCamera_SetClippingRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClippingRange");
  return nullptr;
}



static PyObject *
PyvtkCamera_GetClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetClippingRange() :
      op->vtkCamera::GetClippingRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThickness(temp0);
    }
    else
    {
      op->vtkCamera::SetThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThickness() :
      op->vtkCamera::GetThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetWindowCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetWindowCenter(temp0, temp1);
    }
    else
    {
      op->vtkCamera::SetWindowCenter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetWindowCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWindowCenter() :
      op->vtkCamera::GetWindowCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetObliqueAngles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObliqueAngles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetObliqueAngles(temp0, temp1);
    }
    else
    {
      op->vtkCamera::SetObliqueAngles(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_ApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->ApplyTransform(temp0);
    }
    else
    {
      op->vtkCamera::ApplyTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetViewPlaneNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewPlaneNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetViewPlaneNormal() :
      op->vtkCamera::GetViewPlaneNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetViewShear_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetViewShear(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCamera::SetViewShear(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetViewShear_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetViewShear(temp0);
    }
    else
    {
      op->vtkCamera::SetViewShear(temp0);
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
PyvtkCamera_SetViewShear(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCamera_SetViewShear_s1(self, args);
    case 1:
      return PyvtkCamera_SetViewShear_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetViewShear");
  return nullptr;
}



static PyObject *
PyvtkCamera_GetViewShear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetViewShear() :
      op->vtkCamera::GetViewShear());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetEyeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEyeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEyeAngle(temp0);
    }
    else
    {
      op->vtkCamera::SetEyeAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetEyeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEyeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEyeAngle() :
      op->vtkCamera::GetEyeAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetFocalDisk(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalDisk");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFocalDisk(temp0);
    }
    else
    {
      op->vtkCamera::SetFocalDisk(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetFocalDisk(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalDisk");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFocalDisk() :
      op->vtkCamera::GetFocalDisk());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetUseOffAxisProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOffAxisProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOffAxisProjection(temp0);
    }
    else
    {
      op->vtkCamera::SetUseOffAxisProjection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetUseOffAxisProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOffAxisProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseOffAxisProjection() :
      op->vtkCamera::GetUseOffAxisProjection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_UseOffAxisProjectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffAxisProjectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseOffAxisProjectionOn();
    }
    else
    {
      op->vtkCamera::UseOffAxisProjectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_UseOffAxisProjectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffAxisProjectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseOffAxisProjectionOff();
    }
    else
    {
      op->vtkCamera::UseOffAxisProjectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetScreenBottomLeft_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenBottomLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetScreenBottomLeft(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCamera::SetScreenBottomLeft(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetScreenBottomLeft_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenBottomLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScreenBottomLeft(temp0);
    }
    else
    {
      op->vtkCamera::SetScreenBottomLeft(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetScreenBottomLeft(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCamera_SetScreenBottomLeft_s1(self, args);
    case 1:
      return PyvtkCamera_SetScreenBottomLeft_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScreenBottomLeft");
  return nullptr;
}



static PyObject *
PyvtkCamera_GetScreenBottomLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenBottomLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScreenBottomLeft() :
      op->vtkCamera::GetScreenBottomLeft());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetScreenBottomRight_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenBottomRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetScreenBottomRight(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCamera::SetScreenBottomRight(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetScreenBottomRight_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenBottomRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScreenBottomRight(temp0);
    }
    else
    {
      op->vtkCamera::SetScreenBottomRight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetScreenBottomRight(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCamera_SetScreenBottomRight_s1(self, args);
    case 1:
      return PyvtkCamera_SetScreenBottomRight_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScreenBottomRight");
  return nullptr;
}



static PyObject *
PyvtkCamera_GetScreenBottomRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenBottomRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScreenBottomRight() :
      op->vtkCamera::GetScreenBottomRight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetScreenTopRight_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenTopRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

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
      op->SetScreenTopRight(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCamera::SetScreenTopRight(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetScreenTopRight_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenTopRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScreenTopRight(temp0);
    }
    else
    {
      op->vtkCamera::SetScreenTopRight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetScreenTopRight(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCamera_SetScreenTopRight_s1(self, args);
    case 1:
      return PyvtkCamera_SetScreenTopRight_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScreenTopRight");
  return nullptr;
}



static PyObject *
PyvtkCamera_GetScreenTopRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenTopRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScreenTopRight() :
      op->vtkCamera::GetScreenTopRight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetEyeSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEyeSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEyeSeparation(temp0);
    }
    else
    {
      op->vtkCamera::SetEyeSeparation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetEyeSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEyeSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEyeSeparation() :
      op->vtkCamera::GetEyeSeparation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetEyePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEyePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetEyePosition(temp0);
    }
    else
    {
      op->vtkCamera::SetEyePosition(temp0);
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
PyvtkCamera_GetEyePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEyePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetEyePosition(temp0);
    }
    else
    {
      op->vtkCamera::GetEyePosition(temp0);
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
PyvtkCamera_GetEyePlaneNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEyePlaneNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetEyePlaneNormal(temp0);
    }
    else
    {
      op->vtkCamera::GetEyePlaneNormal(temp0);
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
PyvtkCamera_SetEyeTransformMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEyeTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetEyeTransformMatrix(temp0);
    }
    else
    {
      op->vtkCamera::SetEyeTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetEyeTransformMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEyeTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetEyeTransformMatrix(temp0);
    }
    else
    {
      op->vtkCamera::SetEyeTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCamera_SetEyeTransformMatrix_Methods[] = {
  {nullptr, PyvtkCamera_SetEyeTransformMatrix_s1, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {nullptr, PyvtkCamera_SetEyeTransformMatrix_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCamera_SetEyeTransformMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCamera_SetEyeTransformMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEyeTransformMatrix");
  return nullptr;
}



static PyObject *
PyvtkCamera_GetEyeTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEyeTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetEyeTransformMatrix() :
      op->vtkCamera::GetEyeTransformMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetModelTransformMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetModelTransformMatrix(temp0);
    }
    else
    {
      op->vtkCamera::SetModelTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_SetModelTransformMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetModelTransformMatrix(temp0);
    }
    else
    {
      op->vtkCamera::SetModelTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCamera_SetModelTransformMatrix_Methods[] = {
  {nullptr, PyvtkCamera_SetModelTransformMatrix_s1, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {nullptr, PyvtkCamera_SetModelTransformMatrix_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCamera_SetModelTransformMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCamera_SetModelTransformMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelTransformMatrix");
  return nullptr;
}



static PyObject *
PyvtkCamera_GetModelTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetModelTransformMatrix() :
      op->vtkCamera::GetModelTransformMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetModelViewTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelViewTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetModelViewTransformMatrix() :
      op->vtkCamera::GetModelViewTransformMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetModelViewTransformObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelViewTransformObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetModelViewTransformObject() :
      op->vtkCamera::GetModelViewTransformObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetViewTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetViewTransformMatrix() :
      op->vtkCamera::GetViewTransformMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetViewTransformObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewTransformObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetViewTransformObject() :
      op->vtkCamera::GetViewTransformObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetExplicitProjectionTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExplicitProjectionTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetExplicitProjectionTransformMatrix(temp0);
    }
    else
    {
      op->vtkCamera::SetExplicitProjectionTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetExplicitProjectionTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExplicitProjectionTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetExplicitProjectionTransformMatrix() :
      op->vtkCamera::GetExplicitProjectionTransformMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetUseExplicitProjectionTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseExplicitProjectionTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseExplicitProjectionTransformMatrix(temp0);
    }
    else
    {
      op->vtkCamera::SetUseExplicitProjectionTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetUseExplicitProjectionTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseExplicitProjectionTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseExplicitProjectionTransformMatrix() :
      op->vtkCamera::GetUseExplicitProjectionTransformMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_UseExplicitProjectionTransformMatrixOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseExplicitProjectionTransformMatrixOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseExplicitProjectionTransformMatrixOn();
    }
    else
    {
      op->vtkCamera::UseExplicitProjectionTransformMatrixOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_UseExplicitProjectionTransformMatrixOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseExplicitProjectionTransformMatrixOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseExplicitProjectionTransformMatrixOff();
    }
    else
    {
      op->vtkCamera::UseExplicitProjectionTransformMatrixOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetProjectionTransformMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetProjectionTransformMatrix(temp0, temp1, temp2) :
      op->vtkCamera::GetProjectionTransformMatrix(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_GetProjectionTransformMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetProjectionTransformMatrix(temp0) :
      op->vtkCamera::GetProjectionTransformMatrix(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCamera_GetProjectionTransformMatrix(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCamera_GetProjectionTransformMatrix_s1(self, args);
    case 1:
      return PyvtkCamera_GetProjectionTransformMatrix_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProjectionTransformMatrix");
  return nullptr;
}



static PyObject *
PyvtkCamera_GetProjectionTransformObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionTransformObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPerspectiveTransform *tempr = (ap.IsBound() ?
      op->GetProjectionTransformObject(temp0, temp1, temp2) :
      op->vtkCamera::GetProjectionTransformObject(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetCompositeProjectionTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeProjectionTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetCompositeProjectionTransformMatrix(temp0, temp1, temp2) :
      op->vtkCamera::GetCompositeProjectionTransformMatrix(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetUserViewTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserViewTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkHomogeneousTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHomogeneousTransform"))
  {
    if (ap.IsBound())
    {
      op->SetUserViewTransform(temp0);
    }
    else
    {
      op->vtkCamera::SetUserViewTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetUserViewTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserViewTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHomogeneousTransform *tempr = (ap.IsBound() ?
      op->GetUserViewTransform() :
      op->vtkCamera::GetUserViewTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkHomogeneousTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHomogeneousTransform"))
  {
    if (ap.IsBound())
    {
      op->SetUserTransform(temp0);
    }
    else
    {
      op->vtkCamera::SetUserTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHomogeneousTransform *tempr = (ap.IsBound() ?
      op->GetUserTransform() :
      op->vtkCamera::GetUserTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0);
    }
    else
    {
      op->vtkCamera::Render(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetViewingRaysMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewingRaysMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetViewingRaysMTime() :
      op->vtkCamera::GetViewingRaysMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_ViewingRaysModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewingRaysModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ViewingRaysModified();
    }
    else
    {
      op->vtkCamera::ViewingRaysModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetFrustumPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrustumPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  double temp0;
  const size_t size1 = 24;
  double temp1[24];
  double save1[24];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetFrustumPlanes(temp0, temp1);
    }
    else
    {
      op->vtkCamera::GetFrustumPlanes(temp0, temp1);
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
PyvtkCamera_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkCamera::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetOrientationWXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientationWXYZ() :
      op->vtkCamera::GetOrientationWXYZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_ComputeViewPlaneNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeViewPlaneNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeViewPlaneNormal();
    }
    else
    {
      op->vtkCamera::ComputeViewPlaneNormal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetCameraLightTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraLightTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetCameraLightTransformMatrix() :
      op->vtkCamera::GetCameraLightTransformMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_UpdateViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->UpdateViewport(temp0);
    }
    else
    {
      op->vtkCamera::UpdateViewport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetLeftEye(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftEye");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftEye(temp0);
    }
    else
    {
      op->vtkCamera::SetLeftEye(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetLeftEye(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftEye");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftEye() :
      op->vtkCamera::GetLeftEye());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkCamera::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkCamera::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetFreezeFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFreezeFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFreezeFocalPoint(temp0);
    }
    else
    {
      op->vtkCamera::SetFreezeFocalPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetFreezeFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFreezeFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFreezeFocalPoint() :
      op->vtkCamera::GetFreezeFocalPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetUseScissor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseScissor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseScissor(temp0);
    }
    else
    {
      op->vtkCamera::SetUseScissor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_GetUseScissor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseScissor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseScissor() :
      op->vtkCamera::GetUseScissor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera_SetScissorRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScissorRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkRecti *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRecti"))
  {
    if (ap.IsBound())
    {
      op->SetScissorRect(*temp0);
    }
    else
    {
      op->vtkCamera::SetScissorRect(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCamera_GetScissorRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScissorRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera *op = static_cast<vtkCamera *>(vp);

  vtkRecti *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkRecti"))
  {
    if (ap.IsBound())
    {
      op->GetScissorRect(*temp0);
    }
    else
    {
      op->vtkCamera::GetScissorRect(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCamera_Methods[] = {
  {"IsTypeOf", PyvtkCamera_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCamera_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCamera_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCamera\nC++: static vtkCamera *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCamera_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCamera\nC++: vtkCamera *NewInstance()\n\n"},
  {"SetPosition", PyvtkCamera_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double x, double y, double z)\nV.SetPosition((float, float, float))\nC++: void SetPosition(const double a[3])\n\nSet/Get the position of the camera in world coordinates. The\ndefault position is (0,0,1).\n"},
  {"GetPosition", PyvtkCamera_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\n"},
  {"SetFocalPoint", PyvtkCamera_SetFocalPoint, METH_VARARGS,
   "V.SetFocalPoint(float, float, float)\nC++: void SetFocalPoint(double x, double y, double z)\nV.SetFocalPoint((float, float, float))\nC++: void SetFocalPoint(const double a[3])\n\nSet/Get the focal of the camera in world coordinates. The default\nfocal point is the origin.\n"},
  {"GetFocalPoint", PyvtkCamera_GetFocalPoint, METH_VARARGS,
   "V.GetFocalPoint() -> (float, float, float)\nC++: double *GetFocalPoint()\n\n"},
  {"SetViewUp", PyvtkCamera_SetViewUp, METH_VARARGS,
   "V.SetViewUp(float, float, float)\nC++: void SetViewUp(double vx, double vy, double vz)\nV.SetViewUp((float, float, float))\nC++: void SetViewUp(const double a[3])\n\nSet/Get the view up direction for the camera.  The default is\n(0,1,0).\n"},
  {"GetViewUp", PyvtkCamera_GetViewUp, METH_VARARGS,
   "V.GetViewUp() -> (float, float, float)\nC++: double *GetViewUp()\n\n"},
  {"OrthogonalizeViewUp", PyvtkCamera_OrthogonalizeViewUp, METH_VARARGS,
   "V.OrthogonalizeViewUp()\nC++: void OrthogonalizeViewUp()\n\nRecompute the ViewUp vector to force it to be perpendicular to\ncamera->focalpoint vector.  Unless you are going to use Yaw or\nAzimuth on the camera, there is no need to do this.\n"},
  {"SetDistance", PyvtkCamera_SetDistance, METH_VARARGS,
   "V.SetDistance(float)\nC++: void SetDistance(double)\n\nMove the focal point so that it is the specified distance from\nthe camera position.  This distance must be positive.\n"},
  {"GetDistance", PyvtkCamera_GetDistance, METH_VARARGS,
   "V.GetDistance() -> float\nC++: virtual double GetDistance()\n\nReturn the distance from the camera position to the focal point.\nThis distance is positive.\n"},
  {"GetDirectionOfProjection", PyvtkCamera_GetDirectionOfProjection, METH_VARARGS,
   "V.GetDirectionOfProjection() -> (float, float, float)\nC++: double *GetDirectionOfProjection()\n\n"},
  {"Dolly", PyvtkCamera_Dolly, METH_VARARGS,
   "V.Dolly(float)\nC++: void Dolly(double value)\n\nDivide the camera's distance from the focal point by the given\ndolly value.  Use a value greater than one to dolly-in toward the\nfocal point, and use a value less than one to dolly-out away from\nthe focal point.\n"},
  {"SetRoll", PyvtkCamera_SetRoll, METH_VARARGS,
   "V.SetRoll(float)\nC++: void SetRoll(double angle)\n\nSet the roll angle of the camera about the direction of\nprojection.\n"},
  {"GetRoll", PyvtkCamera_GetRoll, METH_VARARGS,
   "V.GetRoll() -> float\nC++: double GetRoll()\n\nSet the roll angle of the camera about the direction of\nprojection.\n"},
  {"Roll", PyvtkCamera_Roll, METH_VARARGS,
   "V.Roll(float)\nC++: void Roll(double angle)\n\nRotate the camera about the direction of projection.  This will\nspin the camera about its axis.\n"},
  {"Azimuth", PyvtkCamera_Azimuth, METH_VARARGS,
   "V.Azimuth(float)\nC++: void Azimuth(double angle)\n\nRotate the camera about the view up vector centered at the focal\npoint. Note that the view up vector is whatever was set via\nSetViewUp, and is not necessarily perpendicular to the direction\nof projection.  The result is a horizontal rotation of the\ncamera.\n"},
  {"Yaw", PyvtkCamera_Yaw, METH_VARARGS,
   "V.Yaw(float)\nC++: void Yaw(double angle)\n\nRotate the focal point about the view up vector, using the\ncamera's position as the center of rotation. Note that the view\nup vector is whatever was set via SetViewUp, and is not\nnecessarily perpendicular to the direction of projection.  The\nresult is a horizontal rotation of the scene.\n"},
  {"Elevation", PyvtkCamera_Elevation, METH_VARARGS,
   "V.Elevation(float)\nC++: void Elevation(double angle)\n\nRotate the camera about the cross product of the negative of the\ndirection of projection and the view up vector, using the focal\npoint as the center of rotation.  The result is a vertical\nrotation of the scene.\n"},
  {"Pitch", PyvtkCamera_Pitch, METH_VARARGS,
   "V.Pitch(float)\nC++: void Pitch(double angle)\n\nRotate the focal point about the cross product of the view up\nvector and the direction of projection, using the camera's\nposition as the center of rotation.  The result is a vertical\nrotation of the camera.\n"},
  {"SetParallelProjection", PyvtkCamera_SetParallelProjection, METH_VARARGS,
   "V.SetParallelProjection(int)\nC++: void SetParallelProjection(vtkTypeBool flag)\n\nSet/Get the value of the ParallelProjection instance variable.\nThis determines if the camera should do a perspective or parallel\nprojection.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"GetParallelProjection", PyvtkCamera_GetParallelProjection, METH_VARARGS,
   "V.GetParallelProjection() -> int\nC++: virtual vtkTypeBool GetParallelProjection()\n\nSet/Get the value of the ParallelProjection instance variable.\nThis determines if the camera should do a perspective or parallel\nprojection.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"ParallelProjectionOn", PyvtkCamera_ParallelProjectionOn, METH_VARARGS,
   "V.ParallelProjectionOn()\nC++: virtual void ParallelProjectionOn()\n\nSet/Get the value of the ParallelProjection instance variable.\nThis determines if the camera should do a perspective or parallel\nprojection.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"ParallelProjectionOff", PyvtkCamera_ParallelProjectionOff, METH_VARARGS,
   "V.ParallelProjectionOff()\nC++: virtual void ParallelProjectionOff()\n\nSet/Get the value of the ParallelProjection instance variable.\nThis determines if the camera should do a perspective or parallel\nprojection.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"SetUseHorizontalViewAngle", PyvtkCamera_SetUseHorizontalViewAngle, METH_VARARGS,
   "V.SetUseHorizontalViewAngle(int)\nC++: void SetUseHorizontalViewAngle(vtkTypeBool flag)\n\nSet/Get the value of the UseHorizontalViewAngle instance\nvariable. If set, the camera's view angle represents a horizontal\nview angle, rather than the default vertical view angle. This is\nuseful if the application uses a display device which whose specs\nindicate a particular horizontal view angle, or if the\napplication varies the window height but wants to keep the\nperspective transform unchanges.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"GetUseHorizontalViewAngle", PyvtkCamera_GetUseHorizontalViewAngle, METH_VARARGS,
   "V.GetUseHorizontalViewAngle() -> int\nC++: virtual vtkTypeBool GetUseHorizontalViewAngle()\n\nSet/Get the value of the UseHorizontalViewAngle instance\nvariable. If set, the camera's view angle represents a horizontal\nview angle, rather than the default vertical view angle. This is\nuseful if the application uses a display device which whose specs\nindicate a particular horizontal view angle, or if the\napplication varies the window height but wants to keep the\nperspective transform unchanges.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"UseHorizontalViewAngleOn", PyvtkCamera_UseHorizontalViewAngleOn, METH_VARARGS,
   "V.UseHorizontalViewAngleOn()\nC++: virtual void UseHorizontalViewAngleOn()\n\nSet/Get the value of the UseHorizontalViewAngle instance\nvariable. If set, the camera's view angle represents a horizontal\nview angle, rather than the default vertical view angle. This is\nuseful if the application uses a display device which whose specs\nindicate a particular horizontal view angle, or if the\napplication varies the window height but wants to keep the\nperspective transform unchanges.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"UseHorizontalViewAngleOff", PyvtkCamera_UseHorizontalViewAngleOff, METH_VARARGS,
   "V.UseHorizontalViewAngleOff()\nC++: virtual void UseHorizontalViewAngleOff()\n\nSet/Get the value of the UseHorizontalViewAngle instance\nvariable. If set, the camera's view angle represents a horizontal\nview angle, rather than the default vertical view angle. This is\nuseful if the application uses a display device which whose specs\nindicate a particular horizontal view angle, or if the\napplication varies the window height but wants to keep the\nperspective transform unchanges.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"SetViewAngle", PyvtkCamera_SetViewAngle, METH_VARARGS,
   "V.SetViewAngle(float)\nC++: void SetViewAngle(double angle)\n\nSet/Get the camera view angle, which is the angular height of the\ncamera view measured in degrees.  The default angle is 30\ndegrees. This method has no effect in parallel projection mode.\nThe formula for setting the angle up for perfect perspective\nviewing is: angle = 2*atan((h/2)/d) where h is the height of the\nRenderWindow (measured by holding a ruler up to your screen) and\nd is the distance from your eyes to the screen.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"GetViewAngle", PyvtkCamera_GetViewAngle, METH_VARARGS,
   "V.GetViewAngle() -> float\nC++: virtual double GetViewAngle()\n\nSet/Get the camera view angle, which is the angular height of the\ncamera view measured in degrees.  The default angle is 30\ndegrees. This method has no effect in parallel projection mode.\nThe formula for setting the angle up for perfect perspective\nviewing is: angle = 2*atan((h/2)/d) where h is the height of the\nRenderWindow (measured by holding a ruler up to your screen) and\nd is the distance from your eyes to the screen.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"SetParallelScale", PyvtkCamera_SetParallelScale, METH_VARARGS,
   "V.SetParallelScale(float)\nC++: void SetParallelScale(double scale)\n\nSet/Get the scaling used for a parallel projection, i.e. the\nheight of the viewport in world-coordinate distances. The default\nis 1. Note that the \"scale\" parameter works as an \"inverse scale\"\n--- larger numbers produce smaller images. This method has no\neffect in perspective projection mode.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"GetParallelScale", PyvtkCamera_GetParallelScale, METH_VARARGS,
   "V.GetParallelScale() -> float\nC++: virtual double GetParallelScale()\n\nSet/Get the scaling used for a parallel projection, i.e. the\nheight of the viewport in world-coordinate distances. The default\nis 1. Note that the \"scale\" parameter works as an \"inverse scale\"\n--- larger numbers produce smaller images. This method has no\neffect in perspective projection mode.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"Zoom", PyvtkCamera_Zoom, METH_VARARGS,
   "V.Zoom(float)\nC++: void Zoom(double factor)\n\nIn perspective mode, decrease the view angle by the specified\nfactor. In parallel mode, decrease the parallel scale by the\nspecified factor. A value greater than 1 is a zoom-in, a value\nless than 1 is a zoom-out.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"SetClippingRange", PyvtkCamera_SetClippingRange, METH_VARARGS,
   "V.SetClippingRange(float, float)\nC++: void SetClippingRange(double dNear, double dFar)\nV.SetClippingRange((float, float))\nC++: void SetClippingRange(const double a[2])\n\nSet/Get the location of the near and far clipping planes along\nthe direction of projection.  Both of these values must be\npositive. How the clipping planes are set can have a large impact\non how well z-buffering works.  In particular the front clipping\nplane can make a very big difference. Setting it to 0.01 when it\nreally could be 1.0 can have a big impact on your z-buffer\nresolution farther away.  The default clipping range is\n(0.1,1000). Clipping distance is measured in world coordinate\nunless a scale factor exists in camera's ModelTransformMatrix.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"GetClippingRange", PyvtkCamera_GetClippingRange, METH_VARARGS,
   "V.GetClippingRange() -> (float, float)\nC++: double *GetClippingRange()\n\n"},
  {"SetThickness", PyvtkCamera_SetThickness, METH_VARARGS,
   "V.SetThickness(float)\nC++: void SetThickness(double)\n\nSet the distance between clipping planes.  This method adjusts\nthe far clipping plane to be set a distance 'thickness' beyond\nthe near clipping plane.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"GetThickness", PyvtkCamera_GetThickness, METH_VARARGS,
   "V.GetThickness() -> float\nC++: virtual double GetThickness()\n\nSet the distance between clipping planes.  This method adjusts\nthe far clipping plane to be set a distance 'thickness' beyond\nthe near clipping plane.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"SetWindowCenter", PyvtkCamera_SetWindowCenter, METH_VARARGS,
   "V.SetWindowCenter(float, float)\nC++: void SetWindowCenter(double x, double y)\n\nSet/Get the center of the window in viewport coordinates. The\nviewport coordinate range is ([-1,+1],[-1,+1]).  This method is\nfor if you have one window which consists of several viewports,\nor if you have several screens which you want to act together as\none large screen.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"GetWindowCenter", PyvtkCamera_GetWindowCenter, METH_VARARGS,
   "V.GetWindowCenter() -> (float, float)\nC++: double *GetWindowCenter()\n\n"},
  {"SetObliqueAngles", PyvtkCamera_SetObliqueAngles, METH_VARARGS,
   "V.SetObliqueAngles(float, float)\nC++: void SetObliqueAngles(double alpha, double beta)\n\nGet/Set the oblique viewing angles.  The first angle, alpha, is\nthe angle (measured from the horizontal) that rays along the\ndirection of projection will follow once projected onto the 2D\nscreen. The second angle, beta, is the angle between the view\nplane and the direction of projection.  This creates a shear\ntransform x' = x + dz*cos(alpha)/tan(beta), y' =\ndz*sin(alpha)/tan(beta) where dz is the distance of the point\nfrom the focal plane. The angles are (45,90) by default.  Oblique\nprojections commonly use (30,63.435).\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"ApplyTransform", PyvtkCamera_ApplyTransform, METH_VARARGS,
   "V.ApplyTransform(vtkTransform)\nC++: void ApplyTransform(vtkTransform *t)\n\nApply a transform to the camera.  The camera position,\nfocal-point, and view-up are re-calculated using the transform's\nmatrix to multiply the old points by the new transform.\n"},
  {"GetViewPlaneNormal", PyvtkCamera_GetViewPlaneNormal, METH_VARARGS,
   "V.GetViewPlaneNormal() -> (float, float, float)\nC++: double *GetViewPlaneNormal()\n\n"},
  {"SetViewShear", PyvtkCamera_SetViewShear, METH_VARARGS,
   "V.SetViewShear(float, float, float)\nC++: void SetViewShear(double dxdz, double dydz, double center)\nV.SetViewShear([float, float, float])\nC++: void SetViewShear(double d[3])\n\nSet/get the shear transform of the viewing frustum.  Parameters\nare dx/dz, dy/dz, and center.  center is a factor that describes\nwhere to shear around. The distance dshear from the camera where\nno shear occurs is given by (dshear = center * FocalDistance).\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"GetViewShear", PyvtkCamera_GetViewShear, METH_VARARGS,
   "V.GetViewShear() -> (float, float, float)\nC++: double *GetViewShear()\n\n"},
  {"SetEyeAngle", PyvtkCamera_SetEyeAngle, METH_VARARGS,
   "V.SetEyeAngle(float)\nC++: virtual void SetEyeAngle(double _arg)\n\nSet/Get the separation between eyes (in degrees). This is used\nwhen generating stereo images.\n"},
  {"GetEyeAngle", PyvtkCamera_GetEyeAngle, METH_VARARGS,
   "V.GetEyeAngle() -> float\nC++: virtual double GetEyeAngle()\n\nSet/Get the separation between eyes (in degrees). This is used\nwhen generating stereo images.\n"},
  {"SetFocalDisk", PyvtkCamera_SetFocalDisk, METH_VARARGS,
   "V.SetFocalDisk(float)\nC++: virtual void SetFocalDisk(double _arg)\n\nSet the size of the cameras lens in world coordinates. This is\nonly used when the renderer is doing focal depth rendering. When\nthat is being done the size of the focal disk will effect how\nsignificant the depth effects will be.\n"},
  {"GetFocalDisk", PyvtkCamera_GetFocalDisk, METH_VARARGS,
   "V.GetFocalDisk() -> float\nC++: virtual double GetFocalDisk()\n\nSet the size of the cameras lens in world coordinates. This is\nonly used when the renderer is doing focal depth rendering. When\nthat is being done the size of the focal disk will effect how\nsignificant the depth effects will be.\n"},
  {"SetUseOffAxisProjection", PyvtkCamera_SetUseOffAxisProjection, METH_VARARGS,
   "V.SetUseOffAxisProjection(int)\nC++: virtual void SetUseOffAxisProjection(vtkTypeBool _arg)\n\nSet/Get use offaxis frustum. OffAxis frustum is used for off-axis\nfrustum calculations specifically for stereo rendering. For\nreference see \"High Resolution Virtual Reality\", in Proc.\nSIGGRAPH '92, Computer Graphics, pages 195-202, 1992.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"GetUseOffAxisProjection", PyvtkCamera_GetUseOffAxisProjection, METH_VARARGS,
   "V.GetUseOffAxisProjection() -> int\nC++: virtual vtkTypeBool GetUseOffAxisProjection()\n\nSet/Get use offaxis frustum. OffAxis frustum is used for off-axis\nfrustum calculations specifically for stereo rendering. For\nreference see \"High Resolution Virtual Reality\", in Proc.\nSIGGRAPH '92, Computer Graphics, pages 195-202, 1992.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"UseOffAxisProjectionOn", PyvtkCamera_UseOffAxisProjectionOn, METH_VARARGS,
   "V.UseOffAxisProjectionOn()\nC++: virtual void UseOffAxisProjectionOn()\n\nSet/Get use offaxis frustum. OffAxis frustum is used for off-axis\nfrustum calculations specifically for stereo rendering. For\nreference see \"High Resolution Virtual Reality\", in Proc.\nSIGGRAPH '92, Computer Graphics, pages 195-202, 1992.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"UseOffAxisProjectionOff", PyvtkCamera_UseOffAxisProjectionOff, METH_VARARGS,
   "V.UseOffAxisProjectionOff()\nC++: virtual void UseOffAxisProjectionOff()\n\nSet/Get use offaxis frustum. OffAxis frustum is used for off-axis\nfrustum calculations specifically for stereo rendering. For\nreference see \"High Resolution Virtual Reality\", in Proc.\nSIGGRAPH '92, Computer Graphics, pages 195-202, 1992.\n\note This setting is ignored when\nUseExplicitProjectionTransformMatrix is true.\n"},
  {"SetScreenBottomLeft", PyvtkCamera_SetScreenBottomLeft, METH_VARARGS,
   "V.SetScreenBottomLeft(float, float, float)\nC++: void SetScreenBottomLeft(double, double, double)\nV.SetScreenBottomLeft((float, float, float))\nC++: void SetScreenBottomLeft(double a[3])\n\n"},
  {"GetScreenBottomLeft", PyvtkCamera_GetScreenBottomLeft, METH_VARARGS,
   "V.GetScreenBottomLeft() -> (float, float, float)\nC++: double *GetScreenBottomLeft()\n\n"},
  {"SetScreenBottomRight", PyvtkCamera_SetScreenBottomRight, METH_VARARGS,
   "V.SetScreenBottomRight(float, float, float)\nC++: void SetScreenBottomRight(double, double, double)\nV.SetScreenBottomRight((float, float, float))\nC++: void SetScreenBottomRight(double a[3])\n\n"},
  {"GetScreenBottomRight", PyvtkCamera_GetScreenBottomRight, METH_VARARGS,
   "V.GetScreenBottomRight() -> (float, float, float)\nC++: double *GetScreenBottomRight()\n\n"},
  {"SetScreenTopRight", PyvtkCamera_SetScreenTopRight, METH_VARARGS,
   "V.SetScreenTopRight(float, float, float)\nC++: void SetScreenTopRight(double, double, double)\nV.SetScreenTopRight((float, float, float))\nC++: void SetScreenTopRight(double a[3])\n\n"},
  {"GetScreenTopRight", PyvtkCamera_GetScreenTopRight, METH_VARARGS,
   "V.GetScreenTopRight() -> (float, float, float)\nC++: double *GetScreenTopRight()\n\n"},
  {"SetEyeSeparation", PyvtkCamera_SetEyeSeparation, METH_VARARGS,
   "V.SetEyeSeparation(float)\nC++: virtual void SetEyeSeparation(double _arg)\n\nSet/Get distance between the eyes. This will be used only for\noffaxis frustum calculation. Default is 0.06.\n"},
  {"GetEyeSeparation", PyvtkCamera_GetEyeSeparation, METH_VARARGS,
   "V.GetEyeSeparation() -> float\nC++: virtual double GetEyeSeparation()\n\nSet/Get distance between the eyes. This will be used only for\noffaxis frustum calculation. Default is 0.06.\n"},
  {"SetEyePosition", PyvtkCamera_SetEyePosition, METH_VARARGS,
   "V.SetEyePosition([float, float, float])\nC++: void SetEyePosition(double eyePosition[3])\n\nSet/Get the eye position (center point between two eyes). This is\na convenience function that sets the translation component of\nEyeTransformMatrix. This will be used only for offaxis frustum\ncalculation.\n"},
  {"GetEyePosition", PyvtkCamera_GetEyePosition, METH_VARARGS,
   "V.GetEyePosition([float, float, float])\nC++: void GetEyePosition(double eyePosition[3])\n\nSet/Get the eye position (center point between two eyes). This is\na convenience function that sets the translation component of\nEyeTransformMatrix. This will be used only for offaxis frustum\ncalculation.\n"},
  {"GetEyePlaneNormal", PyvtkCamera_GetEyePlaneNormal, METH_VARARGS,
   "V.GetEyePlaneNormal([float, float, float])\nC++: void GetEyePlaneNormal(double normal[3])\n\nGet normal vector from eye to screen rotated by\nEyeTransformMatrix. This will be used only for offaxis frustum\ncalculation.\n"},
  {"SetEyeTransformMatrix", PyvtkCamera_SetEyeTransformMatrix, METH_VARARGS,
   "V.SetEyeTransformMatrix(vtkMatrix4x4)\nC++: void SetEyeTransformMatrix(vtkMatrix4x4 *matrix)\nV.SetEyeTransformMatrix((float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float))\nC++: void SetEyeTransformMatrix(const double elements[16])\n\nSet/Get eye transformation matrix. This is the transformation\nmatrix for the point between eyes. This will be used only for\noffaxis frustum calculation. Default is identity.\n"},
  {"GetEyeTransformMatrix", PyvtkCamera_GetEyeTransformMatrix, METH_VARARGS,
   "V.GetEyeTransformMatrix() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetEyeTransformMatrix()\n\nSet/Get eye transformation matrix. This is the transformation\nmatrix for the point between eyes. This will be used only for\noffaxis frustum calculation. Default is identity.\n"},
  {"SetModelTransformMatrix", PyvtkCamera_SetModelTransformMatrix, METH_VARARGS,
   "V.SetModelTransformMatrix(vtkMatrix4x4)\nC++: void SetModelTransformMatrix(vtkMatrix4x4 *matrix)\nV.SetModelTransformMatrix((float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float))\nC++: void SetModelTransformMatrix(const double elements[16])\n\nSet/Get model transformation matrix. This matrix could be used\nfor model related transformations such as scale, shear, rotations\nand translations.\n"},
  {"GetModelTransformMatrix", PyvtkCamera_GetModelTransformMatrix, METH_VARARGS,
   "V.GetModelTransformMatrix() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetModelTransformMatrix()\n\nSet/Get model transformation matrix. This matrix could be used\nfor model related transformations such as scale, shear, rotations\nand translations.\n"},
  {"GetModelViewTransformMatrix", PyvtkCamera_GetModelViewTransformMatrix, METH_VARARGS,
   "V.GetModelViewTransformMatrix() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetModelViewTransformMatrix()\n\nReturn the model view matrix of model view transform.\n"},
  {"GetModelViewTransformObject", PyvtkCamera_GetModelViewTransformObject, METH_VARARGS,
   "V.GetModelViewTransformObject() -> vtkTransform\nC++: virtual vtkTransform *GetModelViewTransformObject()\n\nReturn the model view transform.\n"},
  {"GetViewTransformMatrix", PyvtkCamera_GetViewTransformMatrix, METH_VARARGS,
   "V.GetViewTransformMatrix() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetViewTransformMatrix()\n\nFor backward compatibility. Use GetModelViewTransformMatrix()\nnow. Return the matrix of the view transform. The ViewTransform\ndepends on only three ivars:  the Position, the FocalPoint, and\nthe ViewUp vector.  All the other methods are there simply for\nthe sake of the users' convenience.\n"},
  {"GetViewTransformObject", PyvtkCamera_GetViewTransformObject, METH_VARARGS,
   "V.GetViewTransformObject() -> vtkTransform\nC++: virtual vtkTransform *GetViewTransformObject()\n\nFor backward compatibility. Use GetModelViewTransformObject()\nnow. Return the view transform. If the camera's\nModelTransformMatrix is identity then the ViewTransform depends\non only three ivars: the Position, the FocalPoint, and the ViewUp\nvector. All the other methods are there simply for the sake of\nthe users' convenience.\n"},
  {"SetExplicitProjectionTransformMatrix", PyvtkCamera_SetExplicitProjectionTransformMatrix, METH_VARARGS,
   "V.SetExplicitProjectionTransformMatrix(vtkMatrix4x4)\nC++: virtual void SetExplicitProjectionTransformMatrix(\n    vtkMatrix4x4 *)\n\n"},
  {"GetExplicitProjectionTransformMatrix", PyvtkCamera_GetExplicitProjectionTransformMatrix, METH_VARARGS,
   "V.GetExplicitProjectionTransformMatrix() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetExplicitProjectionTransformMatrix()\n\n"},
  {"SetUseExplicitProjectionTransformMatrix", PyvtkCamera_SetUseExplicitProjectionTransformMatrix, METH_VARARGS,
   "V.SetUseExplicitProjectionTransformMatrix(bool)\nC++: virtual void SetUseExplicitProjectionTransformMatrix(\n    bool _arg)\n\n"},
  {"GetUseExplicitProjectionTransformMatrix", PyvtkCamera_GetUseExplicitProjectionTransformMatrix, METH_VARARGS,
   "V.GetUseExplicitProjectionTransformMatrix() -> bool\nC++: virtual bool GetUseExplicitProjectionTransformMatrix()\n\n"},
  {"UseExplicitProjectionTransformMatrixOn", PyvtkCamera_UseExplicitProjectionTransformMatrixOn, METH_VARARGS,
   "V.UseExplicitProjectionTransformMatrixOn()\nC++: virtual void UseExplicitProjectionTransformMatrixOn()\n\n"},
  {"UseExplicitProjectionTransformMatrixOff", PyvtkCamera_UseExplicitProjectionTransformMatrixOff, METH_VARARGS,
   "V.UseExplicitProjectionTransformMatrixOff()\nC++: virtual void UseExplicitProjectionTransformMatrixOff()\n\n"},
  {"GetProjectionTransformMatrix", PyvtkCamera_GetProjectionTransformMatrix, METH_VARARGS,
   "V.GetProjectionTransformMatrix(float, float, float)\n    -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetProjectionTransformMatrix(\n    double aspect, double nearz, double farz)\nV.GetProjectionTransformMatrix(vtkRenderer) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetProjectionTransformMatrix(\n    vtkRenderer *ren)\n\nReturn the projection transform matrix, which converts from\ncamera coordinates to viewport coordinates.  The 'aspect' is the\nwidth/height for the viewport, and the nearz and farz are the\nZ-buffer values that map to the near and far clipping planes. The\nviewport coordinates of a point located inside the frustum are in\nthe range ([-1,+1],[-1,+1],[nearz,farz]).\n@sa ExplicitProjectionTransformMatrix\n"},
  {"GetProjectionTransformObject", PyvtkCamera_GetProjectionTransformObject, METH_VARARGS,
   "V.GetProjectionTransformObject(float, float, float)\n    -> vtkPerspectiveTransform\nC++: virtual vtkPerspectiveTransform *GetProjectionTransformObject(\n    double aspect, double nearz, double farz)\n\nReturn the projection transform matrix, which converts from\ncamera coordinates to viewport coordinates. The 'aspect' is the\nwidth/height for the viewport, and the nearz and farz are the\nZ-buffer values that map to the near and far clipping planes. The\nviewport coordinates of a point located inside the frustum are in\nthe range ([-1,+1],[-1,+1],[nearz,farz]).\n@sa ExplicitProjectionTransformMatrix\n"},
  {"GetCompositeProjectionTransformMatrix", PyvtkCamera_GetCompositeProjectionTransformMatrix, METH_VARARGS,
   "V.GetCompositeProjectionTransformMatrix(float, float, float)\n    -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetCompositeProjectionTransformMatrix(\n    double aspect, double nearz, double farz)\n\nReturn the concatenation of the ViewTransform and the\nProjectionTransform. This transform will convert world\ncoordinates to viewport coordinates. The 'aspect' is the\nwidth/height for the viewport, and the nearz and farz are the\nZ-buffer values that map to the near and far clipping planes. The\nviewport coordinates of a point located inside the frustum are in\nthe range ([-1,+1],[-1,+1],[nearz,farz]).\n@sa ExplicitProjectionTransformMatrix\n"},
  {"SetUserViewTransform", PyvtkCamera_SetUserViewTransform, METH_VARARGS,
   "V.SetUserViewTransform(vtkHomogeneousTransform)\nC++: void SetUserViewTransform(vtkHomogeneousTransform *transform)\n\nIn addition to the instance variables such as position and\norientation, you can add an additional transformation for your\nown use.  This transformation is concatenated to the camera's\nViewTransform\n"},
  {"GetUserViewTransform", PyvtkCamera_GetUserViewTransform, METH_VARARGS,
   "V.GetUserViewTransform() -> vtkHomogeneousTransform\nC++: virtual vtkHomogeneousTransform *GetUserViewTransform()\n\nIn addition to the instance variables such as position and\norientation, you can add an additional transformation for your\nown use.  This transformation is concatenated to the camera's\nViewTransform\n"},
  {"SetUserTransform", PyvtkCamera_SetUserTransform, METH_VARARGS,
   "V.SetUserTransform(vtkHomogeneousTransform)\nC++: void SetUserTransform(vtkHomogeneousTransform *transform)\n\nIn addition to the instance variables such as position and\norientation, you can add an additional transformation for your\nown use. This transformation is concatenated to the camera's\nProjectionTransform\n"},
  {"GetUserTransform", PyvtkCamera_GetUserTransform, METH_VARARGS,
   "V.GetUserTransform() -> vtkHomogeneousTransform\nC++: virtual vtkHomogeneousTransform *GetUserTransform()\n\nIn addition to the instance variables such as position and\norientation, you can add an additional transformation for your\nown use. This transformation is concatenated to the camera's\nProjectionTransform\n"},
  {"Render", PyvtkCamera_Render, METH_VARARGS,
   "V.Render(vtkRenderer)\nC++: virtual void Render(vtkRenderer *)\n\nThis method causes the camera to set up whatever is required for\nviewing the scene. This is actually handled by an subclass of\nvtkCamera, which is created through New()\n"},
  {"GetViewingRaysMTime", PyvtkCamera_GetViewingRaysMTime, METH_VARARGS,
   "V.GetViewingRaysMTime() -> int\nC++: vtkMTimeType GetViewingRaysMTime()\n\nReturn the MTime that concerns recomputing the view rays of the\ncamera.\n"},
  {"ViewingRaysModified", PyvtkCamera_ViewingRaysModified, METH_VARARGS,
   "V.ViewingRaysModified()\nC++: void ViewingRaysModified()\n\nMark that something has changed which requires the view rays to\nbe recomputed.\n"},
  {"GetFrustumPlanes", PyvtkCamera_GetFrustumPlanes, METH_VARARGS,
   "V.GetFrustumPlanes(float, [float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float])\nC++: virtual void GetFrustumPlanes(double aspect,\n    double planes[24])\n\nGet the plane equations that bound the view frustum. The plane\nnormals point inward. The planes array contains six plane\nequations of the form (Ax+By+Cz+D=0), the first four values are\n(A,B,C,D) which repeats for each of the planes. The planes are\ngiven in the following order: -x,+x,-y,+y,-z,+z. Warning: it\nmeans left,right,bottom,top,far,near (NOT near,far) The aspect of\nthe viewport is needed to correctly compute the planes\n"},
  {"GetOrientation", PyvtkCamera_GetOrientation, METH_VARARGS,
   "V.GetOrientation() -> (float, float, float)\nC++: double *GetOrientation()\n\nGet the orientation of the camera.\n"},
  {"GetOrientationWXYZ", PyvtkCamera_GetOrientationWXYZ, METH_VARARGS,
   "V.GetOrientationWXYZ() -> (float, float, float, float)\nC++: double *GetOrientationWXYZ()\n\nGet the orientation of the camera.\n"},
  {"ComputeViewPlaneNormal", PyvtkCamera_ComputeViewPlaneNormal, METH_VARARGS,
   "V.ComputeViewPlaneNormal()\nC++: void ComputeViewPlaneNormal()\n\nThis method is called automatically whenever necessary, it should\nnever be used outside of vtkCamera.cxx.\n"},
  {"GetCameraLightTransformMatrix", PyvtkCamera_GetCameraLightTransformMatrix, METH_VARARGS,
   "V.GetCameraLightTransformMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetCameraLightTransformMatrix()\n\nReturns a transformation matrix for a coordinate frame attached\nto the camera, where the camera is located at (0, 0, 1) looking\nat the focal point at (0, 0, 0), with up being (0, 1, 0).\n"},
  {"UpdateViewport", PyvtkCamera_UpdateViewport, METH_VARARGS,
   "V.UpdateViewport(vtkRenderer)\nC++: virtual void UpdateViewport(vtkRenderer *ren)\n\nUpdate the viewport\n"},
  {"SetLeftEye", PyvtkCamera_SetLeftEye, METH_VARARGS,
   "V.SetLeftEye(int)\nC++: virtual void SetLeftEye(int _arg)\n\nSet the Left Eye setting\n"},
  {"GetLeftEye", PyvtkCamera_GetLeftEye, METH_VARARGS,
   "V.GetLeftEye() -> int\nC++: virtual int GetLeftEye()\n\nSet the Left Eye setting\n"},
  {"ShallowCopy", PyvtkCamera_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkCamera)\nC++: void ShallowCopy(vtkCamera *source)\n\nCopy the properties of `source' into `this'. Copy pointers of\nmatrices.\n\\pre source_exists!=0\n\\pre not_this: source!=this\n"},
  {"DeepCopy", PyvtkCamera_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkCamera)\nC++: void DeepCopy(vtkCamera *source)\n\nCopy the properties of `source' into `this'. Copy the contents of\nthe matrices.\n\\pre source_exists!=0\n\\pre not_this: source!=this\n"},
  {"SetFreezeFocalPoint", PyvtkCamera_SetFreezeFocalPoint, METH_VARARGS,
   "V.SetFreezeFocalPoint(bool)\nC++: virtual void SetFreezeFocalPoint(bool _arg)\n\nSet/Get the value of the FreezeDolly instance variable. This\ndetermines if the camera should move the focal point with the\ncamera position. HACK!!!\n"},
  {"GetFreezeFocalPoint", PyvtkCamera_GetFreezeFocalPoint, METH_VARARGS,
   "V.GetFreezeFocalPoint() -> bool\nC++: virtual bool GetFreezeFocalPoint()\n\nSet/Get the value of the FreezeDolly instance variable. This\ndetermines if the camera should move the focal point with the\ncamera position. HACK!!!\n"},
  {"SetUseScissor", PyvtkCamera_SetUseScissor, METH_VARARGS,
   "V.SetUseScissor(bool)\nC++: virtual void SetUseScissor(bool _arg)\n\nEnable/Disable the scissor\n"},
  {"GetUseScissor", PyvtkCamera_GetUseScissor, METH_VARARGS,
   "V.GetUseScissor() -> bool\nC++: virtual bool GetUseScissor()\n\nEnable/Disable the scissor\n"},
  {"SetScissorRect", PyvtkCamera_SetScissorRect, METH_VARARGS,
   "V.SetScissorRect(vtkRecti)\nC++: void SetScissorRect(vtkRecti scissorRect)\n\nSet/Get the vtkRect value of the scissor\n"},
  {"GetScissorRect", PyvtkCamera_GetScissorRect, METH_VARARGS,
   "V.GetScissorRect(vtkRecti)\nC++: void GetScissorRect(vtkRecti &scissorRect)\n\nSet/Get the vtkRect value of the scissor\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCamera_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkCamera", // tp_name
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
  PyvtkCamera_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCamera_StaticNew()
{
  return vtkCamera::New();
}

PyObject *PyvtkCamera_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCamera_Type, PyvtkCamera_Methods,
    "vtkCamera",
 &PyvtkCamera_StaticNew);

  PyTypeObject *pytype = &PyvtkCamera_Type;

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

void PyVTKAddFile_vtkCamera(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCamera_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCamera", o) != 0)
  {
    Py_DECREF(o);
  }

}

