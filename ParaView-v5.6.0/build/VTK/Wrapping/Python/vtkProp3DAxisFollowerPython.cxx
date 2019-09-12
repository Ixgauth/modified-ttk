// python wrapper for vtkProp3DAxisFollower
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
#include "vtkProp3DAxisFollower.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProp3DAxisFollower(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProp3DAxisFollower_ClassNew(); }

#ifndef DECLARED_PyvtkProp3DFollower_ClassNew
extern "C" { PyObject *PyvtkProp3DFollower_ClassNew(); }
#define DECLARED_PyvtkProp3DFollower_ClassNew
#endif

static const char *PyvtkProp3DAxisFollower_Doc =
  "vtkProp3DAxisFollower - a subclass of vtkProp3DFollower that ensures\nthat data is always parallel to the axis defined by a vtkAxisActor.\n\n"
  "Superclass: vtkProp3DFollower\n\n"
  "vtkProp3DAxisFollower is a subclass of vtkProp3DFollower that always\n"
  "follows its specified axis. More specifically it will not change its\n"
  "position or scale, but it will continually update its orientation so\n"
  "that it is aligned with the axis and facing at angle to the camera to\n"
  "provide maximum visibilty. This is typically used for text labels for\n"
  "3d plots.\n"
  "@sa\n"
  "vtkFollower vtkAxisFollower vtkProp3DFollower\n\n";


static PyObject *
PyvtkProp3DAxisFollower_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProp3DAxisFollower::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProp3DAxisFollower::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProp3DAxisFollower *tempr = vtkProp3DAxisFollower::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3DAxisFollower *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProp3DAxisFollower::NewInstance());

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
PyvtkProp3DAxisFollower_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  vtkAxisActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAxisActor"))
  {
    if (ap.IsBound())
    {
      op->SetAxis(temp0);
    }
    else
    {
      op->vtkProp3DAxisFollower::SetAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkProp3DAxisFollower::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetAutoCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoCenter(temp0);
    }
    else
    {
      op->vtkProp3DAxisFollower::SetAutoCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetAutoCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoCenter() :
      op->vtkProp3DAxisFollower::GetAutoCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_AutoCenterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCenterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoCenterOn();
    }
    else
    {
      op->vtkProp3DAxisFollower::AutoCenterOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_AutoCenterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCenterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoCenterOff();
    }
    else
    {
      op->vtkProp3DAxisFollower::AutoCenterOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableDistanceLOD(temp0);
    }
    else
    {
      op->vtkProp3DAxisFollower::SetEnableDistanceLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableDistanceLOD() :
      op->vtkProp3DAxisFollower::GetEnableDistanceLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceLODThreshold(temp0);
    }
    else
    {
      op->vtkProp3DAxisFollower::SetDistanceLODThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetDistanceLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMinValue() :
      op->vtkProp3DAxisFollower::GetDistanceLODThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetDistanceLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMaxValue() :
      op->vtkProp3DAxisFollower::GetDistanceLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThreshold() :
      op->vtkProp3DAxisFollower::GetDistanceLODThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableViewAngleLOD(temp0);
    }
    else
    {
      op->vtkProp3DAxisFollower::SetEnableViewAngleLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableViewAngleLOD() :
      op->vtkProp3DAxisFollower::GetEnableViewAngleLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewAngleLODThreshold(temp0);
    }
    else
    {
      op->vtkProp3DAxisFollower::SetViewAngleLODThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetViewAngleLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMinValue() :
      op->vtkProp3DAxisFollower::GetViewAngleLODThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetViewAngleLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMaxValue() :
      op->vtkProp3DAxisFollower::GetViewAngleLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThreshold() :
      op->vtkProp3DAxisFollower::GetViewAngleLODThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetScreenOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScreenOffset() :
      op->vtkProp3DAxisFollower::GetScreenOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetScreenOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScreenOffset(temp0);
    }
    else
    {
      op->vtkProp3DAxisFollower::SetScreenOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetScreenOffsetVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenOffsetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScreenOffsetVector(temp0, temp1);
    }
    else
    {
      op->vtkProp3DAxisFollower::SetScreenOffsetVector(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProp3DAxisFollower_SetScreenOffsetVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenOffsetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScreenOffsetVector(temp0);
    }
    else
    {
      op->vtkProp3DAxisFollower::SetScreenOffsetVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProp3DAxisFollower_SetScreenOffsetVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkProp3DAxisFollower_SetScreenOffsetVector_s1(self, args);
    case 1:
      return PyvtkProp3DAxisFollower_SetScreenOffsetVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScreenOffsetVector");
  return nullptr;
}



static PyObject *
PyvtkProp3DAxisFollower_GetScreenOffsetVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenOffsetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScreenOffsetVector() :
      op->vtkProp3DAxisFollower::GetScreenOffsetVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_ComputeMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMatrix();
    }
    else
    {
      op->vtkProp3DAxisFollower::ComputeMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkProp3DAxisFollower::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_AutoScale(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AutoScale");

  vtkViewport *temp0 = nullptr;
  vtkCamera *temp1 = nullptr;
  double temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkCamera") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    double tempr = vtkProp3DAxisFollower::AutoScale(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkProp3DAxisFollower::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkProp3DAxisFollower::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkProp3DAxisFollower::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->SetViewport(temp0);
    }
    else
    {
      op->vtkProp3DAxisFollower::SetViewport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DAxisFollower_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DAxisFollower *op = static_cast<vtkProp3DAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewport *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkProp3DAxisFollower::GetViewport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProp3DAxisFollower_Methods[] = {
  {"IsTypeOf", PyvtkProp3DAxisFollower_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods for type and printing.\n"},
  {"IsA", PyvtkProp3DAxisFollower_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods for type and printing.\n"},
  {"SafeDownCast", PyvtkProp3DAxisFollower_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProp3DAxisFollower\nC++: static vtkProp3DAxisFollower *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK methods for type and printing.\n"},
  {"NewInstance", PyvtkProp3DAxisFollower_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProp3DAxisFollower\nC++: vtkProp3DAxisFollower *NewInstance()\n\nStandard VTK methods for type and printing.\n"},
  {"SetAxis", PyvtkProp3DAxisFollower_SetAxis, METH_VARARGS,
   "V.SetAxis(vtkAxisActor)\nC++: virtual void SetAxis(vtkAxisActor *)\n\nSet axis that needs to be followed.\n"},
  {"GetAxis", PyvtkProp3DAxisFollower_GetAxis, METH_VARARGS,
   "V.GetAxis() -> vtkAxisActor\nC++: virtual vtkAxisActor *GetAxis()\n\nSet axis that needs to be followed.\n"},
  {"SetAutoCenter", PyvtkProp3DAxisFollower_SetAutoCenter, METH_VARARGS,
   "V.SetAutoCenter(int)\nC++: virtual void SetAutoCenter(vtkTypeBool _arg)\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {"GetAutoCenter", PyvtkProp3DAxisFollower_GetAutoCenter, METH_VARARGS,
   "V.GetAutoCenter() -> int\nC++: virtual vtkTypeBool GetAutoCenter()\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {"AutoCenterOn", PyvtkProp3DAxisFollower_AutoCenterOn, METH_VARARGS,
   "V.AutoCenterOn()\nC++: virtual void AutoCenterOn()\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {"AutoCenterOff", PyvtkProp3DAxisFollower_AutoCenterOff, METH_VARARGS,
   "V.AutoCenterOff()\nC++: virtual void AutoCenterOff()\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {"SetEnableDistanceLOD", PyvtkProp3DAxisFollower_SetEnableDistanceLOD, METH_VARARGS,
   "V.SetEnableDistanceLOD(int)\nC++: virtual void SetEnableDistanceLOD(int _arg)\n\nEnable / disable use of distance based LOD. If enabled the actor\nwill not be visible at a certain distance from the camera.\nDefault is false.\n"},
  {"GetEnableDistanceLOD", PyvtkProp3DAxisFollower_GetEnableDistanceLOD, METH_VARARGS,
   "V.GetEnableDistanceLOD() -> int\nC++: virtual int GetEnableDistanceLOD()\n\nEnable / disable use of distance based LOD. If enabled the actor\nwill not be visible at a certain distance from the camera.\nDefault is false.\n"},
  {"SetDistanceLODThreshold", PyvtkProp3DAxisFollower_SetDistanceLODThreshold, METH_VARARGS,
   "V.SetDistanceLODThreshold(float)\nC++: virtual void SetDistanceLODThreshold(double _arg)\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {"GetDistanceLODThresholdMinValue", PyvtkProp3DAxisFollower_GetDistanceLODThresholdMinValue, METH_VARARGS,
   "V.GetDistanceLODThresholdMinValue() -> float\nC++: virtual double GetDistanceLODThresholdMinValue()\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {"GetDistanceLODThresholdMaxValue", PyvtkProp3DAxisFollower_GetDistanceLODThresholdMaxValue, METH_VARARGS,
   "V.GetDistanceLODThresholdMaxValue() -> float\nC++: virtual double GetDistanceLODThresholdMaxValue()\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {"GetDistanceLODThreshold", PyvtkProp3DAxisFollower_GetDistanceLODThreshold, METH_VARARGS,
   "V.GetDistanceLODThreshold() -> float\nC++: virtual double GetDistanceLODThreshold()\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {"SetEnableViewAngleLOD", PyvtkProp3DAxisFollower_SetEnableViewAngleLOD, METH_VARARGS,
   "V.SetEnableViewAngleLOD(int)\nC++: virtual void SetEnableViewAngleLOD(int _arg)\n\nEnable / disable use of view angle based LOD. If enabled the\nactor will not be visible at a certain view angle. Default is\ntrue.\n"},
  {"GetEnableViewAngleLOD", PyvtkProp3DAxisFollower_GetEnableViewAngleLOD, METH_VARARGS,
   "V.GetEnableViewAngleLOD() -> int\nC++: virtual int GetEnableViewAngleLOD()\n\nEnable / disable use of view angle based LOD. If enabled the\nactor will not be visible at a certain view angle. Default is\ntrue.\n"},
  {"SetViewAngleLODThreshold", PyvtkProp3DAxisFollower_SetViewAngleLODThreshold, METH_VARARGS,
   "V.SetViewAngleLODThreshold(float)\nC++: virtual void SetViewAngleLODThreshold(double _arg)\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visible.\nDefault is 0.34.\n"},
  {"GetViewAngleLODThresholdMinValue", PyvtkProp3DAxisFollower_GetViewAngleLODThresholdMinValue, METH_VARARGS,
   "V.GetViewAngleLODThresholdMinValue() -> float\nC++: virtual double GetViewAngleLODThresholdMinValue()\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visible.\nDefault is 0.34.\n"},
  {"GetViewAngleLODThresholdMaxValue", PyvtkProp3DAxisFollower_GetViewAngleLODThresholdMaxValue, METH_VARARGS,
   "V.GetViewAngleLODThresholdMaxValue() -> float\nC++: virtual double GetViewAngleLODThresholdMaxValue()\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visible.\nDefault is 0.34.\n"},
  {"GetViewAngleLODThreshold", PyvtkProp3DAxisFollower_GetViewAngleLODThreshold, METH_VARARGS,
   "V.GetViewAngleLODThreshold() -> float\nC++: virtual double GetViewAngleLODThreshold()\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visible.\nDefault is 0.34.\n"},
  {"GetScreenOffset", PyvtkProp3DAxisFollower_GetScreenOffset, METH_VARARGS,
   "V.GetScreenOffset() -> float\nC++: double GetScreenOffset()\n\nSet/Get the desired screen vertical offset from the axis.\nConvenience method, using a zero horizontal offset\n"},
  {"SetScreenOffset", PyvtkProp3DAxisFollower_SetScreenOffset, METH_VARARGS,
   "V.SetScreenOffset(float)\nC++: void SetScreenOffset(double offset)\n\nSet/Get the desired screen vertical offset from the axis.\nConvenience method, using a zero horizontal offset\n"},
  {"SetScreenOffsetVector", PyvtkProp3DAxisFollower_SetScreenOffsetVector, METH_VARARGS,
   "V.SetScreenOffsetVector(float, float)\nC++: void SetScreenOffsetVector(double, double)\nV.SetScreenOffsetVector((float, float))\nC++: void SetScreenOffsetVector(double a[2])\n\n"},
  {"GetScreenOffsetVector", PyvtkProp3DAxisFollower_GetScreenOffsetVector, METH_VARARGS,
   "V.GetScreenOffsetVector() -> (float, float)\nC++: double *GetScreenOffsetVector()\n\n"},
  {"ComputeMatrix", PyvtkProp3DAxisFollower_ComputeMatrix, METH_VARARGS,
   "V.ComputeMatrix()\nC++: void ComputeMatrix() override;\n\nGenerate the matrix based on ivars. This method overloads its\nsuperclasses ComputeMatrix() method due to the special\nvtkProp3DAxisFollower matrix operations.\n"},
  {"ShallowCopy", PyvtkProp3DAxisFollower_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of a follower. Overloads the virtual vtkProp method.\n"},
  {"AutoScale", PyvtkProp3DAxisFollower_AutoScale, METH_VARARGS,
   "V.AutoScale(vtkViewport, vtkCamera, float, [float, float, float])\n    -> float\nC++: static double AutoScale(vtkViewport *viewport,\n    vtkCamera *camera, double screenSize, double position[3])\n\nCalculate scale factor to maintain same size of a object on the\nscreen.\n"},
  {"RenderOpaqueGeometry", PyvtkProp3DAxisFollower_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkProp3DAxisFollower_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {"RenderVolumetricGeometry", PyvtkProp3DAxisFollower_RenderVolumetricGeometry, METH_VARARGS,
   "V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: int RenderVolumetricGeometry(vtkViewport *viewport) override;\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {"SetViewport", PyvtkProp3DAxisFollower_SetViewport, METH_VARARGS,
   "V.SetViewport(vtkViewport)\nC++: virtual void SetViewport(vtkViewport *viewport)\n\n"},
  {"GetViewport", PyvtkProp3DAxisFollower_GetViewport, METH_VARARGS,
   "V.GetViewport() -> vtkViewport\nC++: virtual vtkViewport *GetViewport()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProp3DAxisFollower_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkProp3DAxisFollower", // tp_name
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
  PyvtkProp3DAxisFollower_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProp3DAxisFollower_StaticNew()
{
  return vtkProp3DAxisFollower::New();
}

PyObject *PyvtkProp3DAxisFollower_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProp3DAxisFollower_Type, PyvtkProp3DAxisFollower_Methods,
    "vtkProp3DAxisFollower",
 &PyvtkProp3DAxisFollower_StaticNew);

  PyTypeObject *pytype = &PyvtkProp3DAxisFollower_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProp3DFollower_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProp3DAxisFollower(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProp3DAxisFollower_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProp3DAxisFollower", o) != 0)
  {
    Py_DECREF(o);
  }

}

