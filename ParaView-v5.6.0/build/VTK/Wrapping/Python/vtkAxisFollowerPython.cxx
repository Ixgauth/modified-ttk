// python wrapper for vtkAxisFollower
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
#include "vtkAxisFollower.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAxisFollower(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAxisFollower_ClassNew(); }

#ifndef DECLARED_PyvtkFollower_ClassNew
extern "C" { PyObject *PyvtkFollower_ClassNew(); }
#define DECLARED_PyvtkFollower_ClassNew
#endif

static const char *PyvtkAxisFollower_Doc =
  "vtkAxisFollower - a subclass of vtkFollower that ensures that data is\nalways parallel to the axis defined by a vtkAxisActor.\n\n"
  "Superclass: vtkFollower\n\n"
  "vtkAxisFollower is a subclass of vtkFollower that always follows its\n"
  "specified axis. More specifically it will not change its position or\n"
  "scale, but it will continually update its orientation so that it is\n"
  "aliged with the axis and facing at angle to the camera to provide\n"
  "maximum visibilty. This is typically used for text labels for 3d\n"
  "plots.\n"
  "@sa\n"
  "vtkActor vtkFollower vtkCamera vtkAxisActor vtkCubeAxesActor\n\n";


static PyObject *
PyvtkAxisFollower_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAxisFollower::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxisFollower::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAxisFollower *tempr = vtkAxisFollower::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisFollower *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxisFollower::NewInstance());

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
PyvtkAxisFollower_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkAxisFollower::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetAutoCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetAutoCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetAutoCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoCenter() :
      op->vtkAxisFollower::GetAutoCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_AutoCenterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCenterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoCenterOn();
    }
    else
    {
      op->vtkAxisFollower::AutoCenterOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_AutoCenterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCenterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoCenterOff();
    }
    else
    {
      op->vtkAxisFollower::AutoCenterOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetEnableDistanceLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableDistanceLOD() :
      op->vtkAxisFollower::GetEnableDistanceLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetDistanceLODThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetDistanceLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMinValue() :
      op->vtkAxisFollower::GetDistanceLODThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetDistanceLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMaxValue() :
      op->vtkAxisFollower::GetDistanceLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThreshold() :
      op->vtkAxisFollower::GetDistanceLODThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetEnableViewAngleLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableViewAngleLOD() :
      op->vtkAxisFollower::GetEnableViewAngleLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetViewAngleLODThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetViewAngleLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMinValue() :
      op->vtkAxisFollower::GetViewAngleLODThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetViewAngleLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMaxValue() :
      op->vtkAxisFollower::GetViewAngleLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThreshold() :
      op->vtkAxisFollower::GetViewAngleLODThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_GetScreenOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScreenOffset() :
      op->vtkAxisFollower::GetScreenOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetScreenOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetScreenOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_SetScreenOffsetVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenOffsetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetScreenOffsetVector(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisFollower_SetScreenOffsetVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenOffsetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::SetScreenOffsetVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisFollower_SetScreenOffsetVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAxisFollower_SetScreenOffsetVector_s1(self, args);
    case 1:
      return PyvtkAxisFollower_SetScreenOffsetVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScreenOffsetVector");
  return nullptr;
}



static PyObject *
PyvtkAxisFollower_GetScreenOffsetVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenOffsetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScreenOffsetVector() :
      op->vtkAxisFollower::GetScreenOffsetVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAxisFollower::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAxisFollower::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::Render(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_ComputeTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->ComputeTransformMatrix(temp0);
    }
    else
    {
      op->vtkAxisFollower::ComputeTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisFollower *op = static_cast<vtkAxisFollower *>(vp);

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
      op->vtkAxisFollower::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisFollower_AutoScale(PyObject *, PyObject *args)
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

    double tempr = vtkAxisFollower::AutoScale(temp0, temp1, temp2, temp3);

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

static PyMethodDef PyvtkAxisFollower_Methods[] = {
  {"IsTypeOf", PyvtkAxisFollower_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAxisFollower_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAxisFollower_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAxisFollower\nC++: static vtkAxisFollower *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAxisFollower_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAxisFollower\nC++: vtkAxisFollower *NewInstance()\n\n"},
  {"SetAxis", PyvtkAxisFollower_SetAxis, METH_VARARGS,
   "V.SetAxis(vtkAxisActor)\nC++: virtual void SetAxis(vtkAxisActor *)\n\nSet axis that needs to be followed.\n"},
  {"GetAxis", PyvtkAxisFollower_GetAxis, METH_VARARGS,
   "V.GetAxis() -> vtkAxisActor\nC++: virtual vtkAxisActor *GetAxis()\n\nSet axis that needs to be followed.\n"},
  {"SetAutoCenter", PyvtkAxisFollower_SetAutoCenter, METH_VARARGS,
   "V.SetAutoCenter(int)\nC++: virtual void SetAutoCenter(vtkTypeBool _arg)\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {"GetAutoCenter", PyvtkAxisFollower_GetAutoCenter, METH_VARARGS,
   "V.GetAutoCenter() -> int\nC++: virtual vtkTypeBool GetAutoCenter()\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {"AutoCenterOn", PyvtkAxisFollower_AutoCenterOn, METH_VARARGS,
   "V.AutoCenterOn()\nC++: virtual void AutoCenterOn()\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {"AutoCenterOff", PyvtkAxisFollower_AutoCenterOff, METH_VARARGS,
   "V.AutoCenterOff()\nC++: virtual void AutoCenterOff()\n\nSet/Get state of auto center mode where additional translation\nwill be added to make sure the underlying geometry has its pivot\npoint at the center of its bounds.\n"},
  {"SetEnableDistanceLOD", PyvtkAxisFollower_SetEnableDistanceLOD, METH_VARARGS,
   "V.SetEnableDistanceLOD(int)\nC++: virtual void SetEnableDistanceLOD(int _arg)\n\nEnable / disable use of distance based LOD. If enabled the actor\nwill not be visible at a certain distance from the camera.\nDefault is false.\n"},
  {"GetEnableDistanceLOD", PyvtkAxisFollower_GetEnableDistanceLOD, METH_VARARGS,
   "V.GetEnableDistanceLOD() -> int\nC++: virtual int GetEnableDistanceLOD()\n\nEnable / disable use of distance based LOD. If enabled the actor\nwill not be visible at a certain distance from the camera.\nDefault is false.\n"},
  {"SetDistanceLODThreshold", PyvtkAxisFollower_SetDistanceLODThreshold, METH_VARARGS,
   "V.SetDistanceLODThreshold(float)\nC++: virtual void SetDistanceLODThreshold(double _arg)\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {"GetDistanceLODThresholdMinValue", PyvtkAxisFollower_GetDistanceLODThresholdMinValue, METH_VARARGS,
   "V.GetDistanceLODThresholdMinValue() -> float\nC++: virtual double GetDistanceLODThresholdMinValue()\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {"GetDistanceLODThresholdMaxValue", PyvtkAxisFollower_GetDistanceLODThresholdMaxValue, METH_VARARGS,
   "V.GetDistanceLODThresholdMaxValue() -> float\nC++: virtual double GetDistanceLODThresholdMaxValue()\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {"GetDistanceLODThreshold", PyvtkAxisFollower_GetDistanceLODThreshold, METH_VARARGS,
   "V.GetDistanceLODThreshold() -> float\nC++: virtual double GetDistanceLODThreshold()\n\nSet distance LOD threshold (0.0 - 1.0).This determines at what\nfraction of camera far clip range, actor is not visible. Default\nis 0.80.\n"},
  {"SetEnableViewAngleLOD", PyvtkAxisFollower_SetEnableViewAngleLOD, METH_VARARGS,
   "V.SetEnableViewAngleLOD(int)\nC++: virtual void SetEnableViewAngleLOD(int _arg)\n\nEnable / disable use of view angle based LOD. If enabled the\nactor will not be visible at a certain view angle. Default is\ntrue.\n"},
  {"GetEnableViewAngleLOD", PyvtkAxisFollower_GetEnableViewAngleLOD, METH_VARARGS,
   "V.GetEnableViewAngleLOD() -> int\nC++: virtual int GetEnableViewAngleLOD()\n\nEnable / disable use of view angle based LOD. If enabled the\nactor will not be visible at a certain view angle. Default is\ntrue.\n"},
  {"SetViewAngleLODThreshold", PyvtkAxisFollower_SetViewAngleLODThreshold, METH_VARARGS,
   "V.SetViewAngleLODThreshold(float)\nC++: virtual void SetViewAngleLODThreshold(double _arg)\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visible.\nDefault is 0.34.\n"},
  {"GetViewAngleLODThresholdMinValue", PyvtkAxisFollower_GetViewAngleLODThresholdMinValue, METH_VARARGS,
   "V.GetViewAngleLODThresholdMinValue() -> float\nC++: virtual double GetViewAngleLODThresholdMinValue()\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visible.\nDefault is 0.34.\n"},
  {"GetViewAngleLODThresholdMaxValue", PyvtkAxisFollower_GetViewAngleLODThresholdMaxValue, METH_VARARGS,
   "V.GetViewAngleLODThresholdMaxValue() -> float\nC++: virtual double GetViewAngleLODThresholdMaxValue()\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visible.\nDefault is 0.34.\n"},
  {"GetViewAngleLODThreshold", PyvtkAxisFollower_GetViewAngleLODThreshold, METH_VARARGS,
   "V.GetViewAngleLODThreshold() -> float\nC++: virtual double GetViewAngleLODThreshold()\n\nSet view angle LOD threshold (0.0 - 1.0).This determines at what\nview angle to geometry will make the geometry not visible.\nDefault is 0.34.\n"},
  {"GetScreenOffset", PyvtkAxisFollower_GetScreenOffset, METH_VARARGS,
   "V.GetScreenOffset() -> float\nC++: double GetScreenOffset()\n\nSet/Get the desired screen offset from the axis. Convenience\nmethod, using a zero horizontal offset\n"},
  {"SetScreenOffset", PyvtkAxisFollower_SetScreenOffset, METH_VARARGS,
   "V.SetScreenOffset(float)\nC++: void SetScreenOffset(double offset)\n\nSet/Get the desired screen offset from the axis. Convenience\nmethod, using a zero horizontal offset\n"},
  {"SetScreenOffsetVector", PyvtkAxisFollower_SetScreenOffsetVector, METH_VARARGS,
   "V.SetScreenOffsetVector(float, float)\nC++: void SetScreenOffsetVector(double, double)\nV.SetScreenOffsetVector((float, float))\nC++: void SetScreenOffsetVector(double a[2])\n\n"},
  {"GetScreenOffsetVector", PyvtkAxisFollower_GetScreenOffsetVector, METH_VARARGS,
   "V.GetScreenOffsetVector() -> (float, float)\nC++: double *GetScreenOffsetVector()\n\n"},
  {"RenderOpaqueGeometry", PyvtkAxisFollower_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkAxisFollower_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {"Render", PyvtkAxisFollower_Render, METH_VARARGS,
   "V.Render(vtkRenderer)\nC++: void Render(vtkRenderer *ren) override;\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically.\n"},
  {"ComputeTransformMatrix", PyvtkAxisFollower_ComputeTransformMatrix, METH_VARARGS,
   "V.ComputeTransformMatrix(vtkRenderer)\nC++: virtual void ComputeTransformMatrix(vtkRenderer *ren)\n\nGenerate the matrix based on ivars. This method overloads its\nsuperclasses ComputeMatrix() method due to the special\nvtkFollower matrix operations.\n"},
  {"ShallowCopy", PyvtkAxisFollower_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of a follower. Overloads the virtual vtkProp method.\n"},
  {"AutoScale", PyvtkAxisFollower_AutoScale, METH_VARARGS,
   "V.AutoScale(vtkViewport, vtkCamera, float, [float, float, float])\n    -> float\nC++: static double AutoScale(vtkViewport *viewport,\n    vtkCamera *camera, double screenSize, double position[3])\n\nCalculate scale factor to maintain same size of a object on the\nscreen.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAxisFollower_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingAnnotationPython.vtkAxisFollower", // tp_name
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
  PyvtkAxisFollower_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAxisFollower_StaticNew()
{
  return vtkAxisFollower::New();
}

PyObject *PyvtkAxisFollower_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAxisFollower_Type, PyvtkAxisFollower_Methods,
    "vtkAxisFollower",
 &PyvtkAxisFollower_StaticNew);

  PyTypeObject *pytype = &PyvtkAxisFollower_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkFollower_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAxisFollower(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAxisFollower_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAxisFollower", o) != 0)
  {
    Py_DECREF(o);
  }

}

