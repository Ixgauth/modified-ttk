// python wrapper for vtkPVAxesActor
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
#include "vtkPVAxesActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVAxesActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVAxesActor_ClassNew(); }

#ifndef DECLARED_PyvtkProp3D_ClassNew
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }
#define DECLARED_PyvtkProp3D_ClassNew
#endif

static const char *PyvtkPVAxesActor_Doc =
  "vtkPVAxesActor - a 3D axes representation\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkPVAxesActor is used to represent 3D axes in the scene. The user\n"
  "can define the geometry to use for the shaft and the tip, and the\n"
  "user can set the text for the three axes. The text will follow the\n"
  "camera.\n\n";


static PyObject *
PyvtkPVAxesActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVAxesActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVAxesActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVAxesActor *tempr = vtkPVAxesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVAxesActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVAxesActor::NewInstance());

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
PyvtkPVAxesActor_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkPVAxesActor::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPVAxesActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkPVAxesActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkPVAxesActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

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
      op->vtkPVAxesActor::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

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
      op->vtkPVAxesActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkPVAxesActor::GetBounds(temp0);
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
PyvtkPVAxesActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPVAxesActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPVAxesActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVAxesActor_GetBounds_s1(self, args);
    case 0:
      return PyvtkPVAxesActor_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkPVAxesActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPVAxesActor::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetRedrawMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedrawMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetRedrawMTime() :
      op->vtkPVAxesActor::GetRedrawMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetTotalLength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  float save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetTotalLength(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetTotalLength(temp0);
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
PyvtkPVAxesActor_SetTotalLength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetTotalLength(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVAxesActor::SetTotalLength(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVAxesActor_SetTotalLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVAxesActor_SetTotalLength_s1(self, args);
    case 3:
      return PyvtkPVAxesActor_SetTotalLength_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTotalLength");
  return nullptr;
}



static PyObject *
PyvtkPVAxesActor_GetTotalLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetTotalLength() :
      op->vtkPVAxesActor::GetTotalLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetNormalizedShaftLength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedShaftLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  float save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNormalizedShaftLength(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetNormalizedShaftLength(temp0);
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
PyvtkPVAxesActor_SetNormalizedShaftLength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedShaftLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetNormalizedShaftLength(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVAxesActor::SetNormalizedShaftLength(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVAxesActor_SetNormalizedShaftLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVAxesActor_SetNormalizedShaftLength_s1(self, args);
    case 3:
      return PyvtkPVAxesActor_SetNormalizedShaftLength_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalizedShaftLength");
  return nullptr;
}



static PyObject *
PyvtkPVAxesActor_GetNormalizedShaftLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedShaftLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetNormalizedShaftLength() :
      op->vtkPVAxesActor::GetNormalizedShaftLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetNormalizedTipLength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  float save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNormalizedTipLength(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetNormalizedTipLength(temp0);
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
PyvtkPVAxesActor_SetNormalizedTipLength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetNormalizedTipLength(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVAxesActor::SetNormalizedTipLength(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVAxesActor_SetNormalizedTipLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVAxesActor_SetNormalizedTipLength_s1(self, args);
    case 3:
      return PyvtkPVAxesActor_SetNormalizedTipLength_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalizedTipLength");
  return nullptr;
}



static PyObject *
PyvtkPVAxesActor_GetNormalizedTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetNormalizedTipLength() :
      op->vtkPVAxesActor::GetNormalizedTipLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetConeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConeResolution(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetConeResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetConeResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConeResolutionMinValue() :
      op->vtkPVAxesActor::GetConeResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetConeResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConeResolutionMaxValue() :
      op->vtkPVAxesActor::GetConeResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetConeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConeResolution() :
      op->vtkPVAxesActor::GetConeResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetSphereResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSphereResolution(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetSphereResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetSphereResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolutionMinValue() :
      op->vtkPVAxesActor::GetSphereResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetSphereResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolutionMaxValue() :
      op->vtkPVAxesActor::GetSphereResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetSphereResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolution() :
      op->vtkPVAxesActor::GetSphereResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetCylinderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCylinderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCylinderResolution(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetCylinderResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetCylinderResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCylinderResolutionMinValue() :
      op->vtkPVAxesActor::GetCylinderResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetCylinderResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCylinderResolutionMaxValue() :
      op->vtkPVAxesActor::GetCylinderResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetCylinderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCylinderResolution() :
      op->vtkPVAxesActor::GetCylinderResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetConeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConeRadius(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetConeRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetConeRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetConeRadiusMinValue() :
      op->vtkPVAxesActor::GetConeRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetConeRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetConeRadiusMaxValue() :
      op->vtkPVAxesActor::GetConeRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetConeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetConeRadius() :
      op->vtkPVAxesActor::GetConeRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetSphereRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSphereRadius(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetSphereRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetSphereRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSphereRadiusMinValue() :
      op->vtkPVAxesActor::GetSphereRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetSphereRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSphereRadiusMaxValue() :
      op->vtkPVAxesActor::GetSphereRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetSphereRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSphereRadius() :
      op->vtkPVAxesActor::GetSphereRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetCylinderRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCylinderRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCylinderRadius(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetCylinderRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetCylinderRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetCylinderRadiusMinValue() :
      op->vtkPVAxesActor::GetCylinderRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetCylinderRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetCylinderRadiusMaxValue() :
      op->vtkPVAxesActor::GetCylinderRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetCylinderRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetCylinderRadius() :
      op->vtkPVAxesActor::GetCylinderRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetXAxisLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisLabelPosition(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetXAxisLabelPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetXAxisLabelPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetXAxisLabelPositionMinValue() :
      op->vtkPVAxesActor::GetXAxisLabelPositionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetXAxisLabelPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetXAxisLabelPositionMaxValue() :
      op->vtkPVAxesActor::GetXAxisLabelPositionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetXAxisLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetXAxisLabelPosition() :
      op->vtkPVAxesActor::GetXAxisLabelPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetYAxisLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisLabelPosition(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetYAxisLabelPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetYAxisLabelPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetYAxisLabelPositionMinValue() :
      op->vtkPVAxesActor::GetYAxisLabelPositionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetYAxisLabelPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetYAxisLabelPositionMaxValue() :
      op->vtkPVAxesActor::GetYAxisLabelPositionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetYAxisLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetYAxisLabelPosition() :
      op->vtkPVAxesActor::GetYAxisLabelPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetZAxisLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisLabelPosition(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetZAxisLabelPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetZAxisLabelPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZAxisLabelPositionMinValue() :
      op->vtkPVAxesActor::GetZAxisLabelPositionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetZAxisLabelPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZAxisLabelPositionMaxValue() :
      op->vtkPVAxesActor::GetZAxisLabelPositionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetZAxisLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZAxisLabelPosition() :
      op->vtkPVAxesActor::GetZAxisLabelPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetShaftType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShaftType(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetShaftType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetShaftTypeToCylinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftTypeToCylinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShaftTypeToCylinder();
    }
    else
    {
      op->vtkPVAxesActor::SetShaftTypeToCylinder();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetShaftTypeToLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftTypeToLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShaftTypeToLine();
    }
    else
    {
      op->vtkPVAxesActor::SetShaftTypeToLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetShaftTypeToUserDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftTypeToUserDefined");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShaftTypeToUserDefined();
    }
    else
    {
      op->vtkPVAxesActor::SetShaftTypeToUserDefined();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetTipType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTipType(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetTipType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetTipTypeToCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipTypeToCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTipTypeToCone();
    }
    else
    {
      op->vtkPVAxesActor::SetTipTypeToCone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetTipTypeToSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipTypeToSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTipTypeToSphere();
    }
    else
    {
      op->vtkPVAxesActor::SetTipTypeToSphere();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetTipTypeToUserDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipTypeToUserDefined");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTipTypeToUserDefined();
    }
    else
    {
      op->vtkPVAxesActor::SetTipTypeToUserDefined();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetUserDefinedTip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserDefinedTip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetUserDefinedTip(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetUserDefinedTip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetUserDefinedTip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedTip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetUserDefinedTip() :
      op->vtkPVAxesActor::GetUserDefinedTip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetUserDefinedShaft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserDefinedShaft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetUserDefinedShaft(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetUserDefinedShaft(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetUserDefinedShaft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedShaft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetUserDefinedShaft() :
      op->vtkPVAxesActor::GetUserDefinedShaft());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetXAxisTipProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisTipProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxisTipProperty() :
      op->vtkPVAxesActor::GetXAxisTipProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetYAxisTipProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisTipProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxisTipProperty() :
      op->vtkPVAxesActor::GetYAxisTipProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetZAxisTipProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisTipProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxisTipProperty() :
      op->vtkPVAxesActor::GetZAxisTipProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetXAxisShaftProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisShaftProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxisShaftProperty() :
      op->vtkPVAxesActor::GetXAxisShaftProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetYAxisShaftProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisShaftProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxisShaftProperty() :
      op->vtkPVAxesActor::GetYAxisShaftProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetZAxisShaftProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisShaftProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxisShaftProperty() :
      op->vtkPVAxesActor::GetZAxisShaftProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetXAxisLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxisLabelProperty() :
      op->vtkPVAxesActor::GetXAxisLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetYAxisLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxisLabelProperty() :
      op->vtkPVAxesActor::GetYAxisLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_GetZAxisLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxisLabelProperty() :
      op->vtkPVAxesActor::GetZAxisLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetXAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisLabelText(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetXAxisLabelText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetYAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisLabelText(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetYAxisLabelText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesActor_SetZAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesActor *op = static_cast<vtkPVAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisLabelText(temp0);
    }
    else
    {
      op->vtkPVAxesActor::SetZAxisLabelText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVAxesActor_Methods[] = {
  {"IsTypeOf", PyvtkPVAxesActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVAxesActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVAxesActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVAxesActor\nC++: static vtkPVAxesActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVAxesActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVAxesActor\nC++: vtkPVAxesActor *NewInstance()\n\n"},
  {"GetActors", PyvtkPVAxesActor_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"RenderOpaqueGeometry", PyvtkPVAxesActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkPVAxesActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nSupport the standard render methods.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkPVAxesActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nSupport the standard render methods.\n"},
  {"ShallowCopy", PyvtkPVAxesActor_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of an axes actor. Overloads the virtual vtkProp\nmethod.\n"},
  {"ReleaseGraphicsResources", PyvtkPVAxesActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetBounds", PyvtkPVAxesActor_GetBounds, METH_VARARGS,
   "V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\nV.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nGet the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n(The method GetBounds(double bounds[6]) is available from the\nsuperclass.)\n"},
  {"GetMTime", PyvtkPVAxesActor_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the actors mtime plus consider its properties and texture if\nset.\n"},
  {"GetRedrawMTime", PyvtkPVAxesActor_GetRedrawMTime, METH_VARARGS,
   "V.GetRedrawMTime() -> int\nC++: vtkMTimeType GetRedrawMTime() override;\n\nReturn the mtime of anything that would cause the rendered image\nto appear differently. Usually this involves checking the mtime\nof the prop plus anything else it depends on such as properties,\ntextures etc.\n"},
  {"SetTotalLength", PyvtkPVAxesActor_SetTotalLength, METH_VARARGS,
   "V.SetTotalLength([float, float, float])\nC++: void SetTotalLength(float v[3])\nV.SetTotalLength(float, float, float)\nC++: void SetTotalLength(float x, float y, float z)\n\nSet the total length of the axes in 3 dimensions.\n"},
  {"GetTotalLength", PyvtkPVAxesActor_GetTotalLength, METH_VARARGS,
   "V.GetTotalLength() -> (float, float, float)\nC++: float *GetTotalLength()\n\nSet the total length of the axes in 3 dimensions.\n"},
  {"SetNormalizedShaftLength", PyvtkPVAxesActor_SetNormalizedShaftLength, METH_VARARGS,
   "V.SetNormalizedShaftLength([float, float, float])\nC++: void SetNormalizedShaftLength(float v[3])\nV.SetNormalizedShaftLength(float, float, float)\nC++: void SetNormalizedShaftLength(float x, float y, float z)\n\nSet the normalized (0-1) length of the shaft.\n"},
  {"GetNormalizedShaftLength", PyvtkPVAxesActor_GetNormalizedShaftLength, METH_VARARGS,
   "V.GetNormalizedShaftLength() -> (float, float, float)\nC++: float *GetNormalizedShaftLength()\n\nSet the normalized (0-1) length of the shaft.\n"},
  {"SetNormalizedTipLength", PyvtkPVAxesActor_SetNormalizedTipLength, METH_VARARGS,
   "V.SetNormalizedTipLength([float, float, float])\nC++: void SetNormalizedTipLength(float v[3])\nV.SetNormalizedTipLength(float, float, float)\nC++: void SetNormalizedTipLength(float x, float y, float z)\n\nSet the normalized (0-1) length of the tip.\n"},
  {"GetNormalizedTipLength", PyvtkPVAxesActor_GetNormalizedTipLength, METH_VARARGS,
   "V.GetNormalizedTipLength() -> (float, float, float)\nC++: float *GetNormalizedTipLength()\n\nSet the normalized (0-1) length of the tip.\n"},
  {"SetConeResolution", PyvtkPVAxesActor_SetConeResolution, METH_VARARGS,
   "V.SetConeResolution(int)\nC++: virtual void SetConeResolution(int _arg)\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {"GetConeResolutionMinValue", PyvtkPVAxesActor_GetConeResolutionMinValue, METH_VARARGS,
   "V.GetConeResolutionMinValue() -> int\nC++: virtual int GetConeResolutionMinValue()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {"GetConeResolutionMaxValue", PyvtkPVAxesActor_GetConeResolutionMaxValue, METH_VARARGS,
   "V.GetConeResolutionMaxValue() -> int\nC++: virtual int GetConeResolutionMaxValue()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {"GetConeResolution", PyvtkPVAxesActor_GetConeResolution, METH_VARARGS,
   "V.GetConeResolution() -> int\nC++: virtual int GetConeResolution()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {"SetSphereResolution", PyvtkPVAxesActor_SetSphereResolution, METH_VARARGS,
   "V.SetSphereResolution(int)\nC++: virtual void SetSphereResolution(int _arg)\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {"GetSphereResolutionMinValue", PyvtkPVAxesActor_GetSphereResolutionMinValue, METH_VARARGS,
   "V.GetSphereResolutionMinValue() -> int\nC++: virtual int GetSphereResolutionMinValue()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {"GetSphereResolutionMaxValue", PyvtkPVAxesActor_GetSphereResolutionMaxValue, METH_VARARGS,
   "V.GetSphereResolutionMaxValue() -> int\nC++: virtual int GetSphereResolutionMaxValue()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {"GetSphereResolution", PyvtkPVAxesActor_GetSphereResolution, METH_VARARGS,
   "V.GetSphereResolution() -> int\nC++: virtual int GetSphereResolution()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {"SetCylinderResolution", PyvtkPVAxesActor_SetCylinderResolution, METH_VARARGS,
   "V.SetCylinderResolution(int)\nC++: virtual void SetCylinderResolution(int _arg)\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {"GetCylinderResolutionMinValue", PyvtkPVAxesActor_GetCylinderResolutionMinValue, METH_VARARGS,
   "V.GetCylinderResolutionMinValue() -> int\nC++: virtual int GetCylinderResolutionMinValue()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {"GetCylinderResolutionMaxValue", PyvtkPVAxesActor_GetCylinderResolutionMaxValue, METH_VARARGS,
   "V.GetCylinderResolutionMaxValue() -> int\nC++: virtual int GetCylinderResolutionMaxValue()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {"GetCylinderResolution", PyvtkPVAxesActor_GetCylinderResolution, METH_VARARGS,
   "V.GetCylinderResolution() -> int\nC++: virtual int GetCylinderResolution()\n\nSet/get the resolution of the pieces of the axes actor\n"},
  {"SetConeRadius", PyvtkPVAxesActor_SetConeRadius, METH_VARARGS,
   "V.SetConeRadius(float)\nC++: virtual void SetConeRadius(float _arg)\n\nSet/get the radius of the pieces of the axes actor\n"},
  {"GetConeRadiusMinValue", PyvtkPVAxesActor_GetConeRadiusMinValue, METH_VARARGS,
   "V.GetConeRadiusMinValue() -> float\nC++: virtual float GetConeRadiusMinValue()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {"GetConeRadiusMaxValue", PyvtkPVAxesActor_GetConeRadiusMaxValue, METH_VARARGS,
   "V.GetConeRadiusMaxValue() -> float\nC++: virtual float GetConeRadiusMaxValue()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {"GetConeRadius", PyvtkPVAxesActor_GetConeRadius, METH_VARARGS,
   "V.GetConeRadius() -> float\nC++: virtual float GetConeRadius()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {"SetSphereRadius", PyvtkPVAxesActor_SetSphereRadius, METH_VARARGS,
   "V.SetSphereRadius(float)\nC++: virtual void SetSphereRadius(float _arg)\n\nSet/get the radius of the pieces of the axes actor\n"},
  {"GetSphereRadiusMinValue", PyvtkPVAxesActor_GetSphereRadiusMinValue, METH_VARARGS,
   "V.GetSphereRadiusMinValue() -> float\nC++: virtual float GetSphereRadiusMinValue()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {"GetSphereRadiusMaxValue", PyvtkPVAxesActor_GetSphereRadiusMaxValue, METH_VARARGS,
   "V.GetSphereRadiusMaxValue() -> float\nC++: virtual float GetSphereRadiusMaxValue()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {"GetSphereRadius", PyvtkPVAxesActor_GetSphereRadius, METH_VARARGS,
   "V.GetSphereRadius() -> float\nC++: virtual float GetSphereRadius()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {"SetCylinderRadius", PyvtkPVAxesActor_SetCylinderRadius, METH_VARARGS,
   "V.SetCylinderRadius(float)\nC++: virtual void SetCylinderRadius(float _arg)\n\nSet/get the radius of the pieces of the axes actor\n"},
  {"GetCylinderRadiusMinValue", PyvtkPVAxesActor_GetCylinderRadiusMinValue, METH_VARARGS,
   "V.GetCylinderRadiusMinValue() -> float\nC++: virtual float GetCylinderRadiusMinValue()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {"GetCylinderRadiusMaxValue", PyvtkPVAxesActor_GetCylinderRadiusMaxValue, METH_VARARGS,
   "V.GetCylinderRadiusMaxValue() -> float\nC++: virtual float GetCylinderRadiusMaxValue()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {"GetCylinderRadius", PyvtkPVAxesActor_GetCylinderRadius, METH_VARARGS,
   "V.GetCylinderRadius() -> float\nC++: virtual float GetCylinderRadius()\n\nSet/get the radius of the pieces of the axes actor\n"},
  {"SetXAxisLabelPosition", PyvtkPVAxesActor_SetXAxisLabelPosition, METH_VARARGS,
   "V.SetXAxisLabelPosition(float)\nC++: virtual void SetXAxisLabelPosition(float _arg)\n\nSet/get the positions of the axis labels\n"},
  {"GetXAxisLabelPositionMinValue", PyvtkPVAxesActor_GetXAxisLabelPositionMinValue, METH_VARARGS,
   "V.GetXAxisLabelPositionMinValue() -> float\nC++: virtual float GetXAxisLabelPositionMinValue()\n\nSet/get the positions of the axis labels\n"},
  {"GetXAxisLabelPositionMaxValue", PyvtkPVAxesActor_GetXAxisLabelPositionMaxValue, METH_VARARGS,
   "V.GetXAxisLabelPositionMaxValue() -> float\nC++: virtual float GetXAxisLabelPositionMaxValue()\n\nSet/get the positions of the axis labels\n"},
  {"GetXAxisLabelPosition", PyvtkPVAxesActor_GetXAxisLabelPosition, METH_VARARGS,
   "V.GetXAxisLabelPosition() -> float\nC++: virtual float GetXAxisLabelPosition()\n\nSet/get the positions of the axis labels\n"},
  {"SetYAxisLabelPosition", PyvtkPVAxesActor_SetYAxisLabelPosition, METH_VARARGS,
   "V.SetYAxisLabelPosition(float)\nC++: virtual void SetYAxisLabelPosition(float _arg)\n\nSet/get the positions of the axis labels\n"},
  {"GetYAxisLabelPositionMinValue", PyvtkPVAxesActor_GetYAxisLabelPositionMinValue, METH_VARARGS,
   "V.GetYAxisLabelPositionMinValue() -> float\nC++: virtual float GetYAxisLabelPositionMinValue()\n\nSet/get the positions of the axis labels\n"},
  {"GetYAxisLabelPositionMaxValue", PyvtkPVAxesActor_GetYAxisLabelPositionMaxValue, METH_VARARGS,
   "V.GetYAxisLabelPositionMaxValue() -> float\nC++: virtual float GetYAxisLabelPositionMaxValue()\n\nSet/get the positions of the axis labels\n"},
  {"GetYAxisLabelPosition", PyvtkPVAxesActor_GetYAxisLabelPosition, METH_VARARGS,
   "V.GetYAxisLabelPosition() -> float\nC++: virtual float GetYAxisLabelPosition()\n\nSet/get the positions of the axis labels\n"},
  {"SetZAxisLabelPosition", PyvtkPVAxesActor_SetZAxisLabelPosition, METH_VARARGS,
   "V.SetZAxisLabelPosition(float)\nC++: virtual void SetZAxisLabelPosition(float _arg)\n\nSet/get the positions of the axis labels\n"},
  {"GetZAxisLabelPositionMinValue", PyvtkPVAxesActor_GetZAxisLabelPositionMinValue, METH_VARARGS,
   "V.GetZAxisLabelPositionMinValue() -> float\nC++: virtual float GetZAxisLabelPositionMinValue()\n\nSet/get the positions of the axis labels\n"},
  {"GetZAxisLabelPositionMaxValue", PyvtkPVAxesActor_GetZAxisLabelPositionMaxValue, METH_VARARGS,
   "V.GetZAxisLabelPositionMaxValue() -> float\nC++: virtual float GetZAxisLabelPositionMaxValue()\n\nSet/get the positions of the axis labels\n"},
  {"GetZAxisLabelPosition", PyvtkPVAxesActor_GetZAxisLabelPosition, METH_VARARGS,
   "V.GetZAxisLabelPosition() -> float\nC++: virtual float GetZAxisLabelPosition()\n\nSet/get the positions of the axis labels\n"},
  {"SetShaftType", PyvtkPVAxesActor_SetShaftType, METH_VARARGS,
   "V.SetShaftType(int)\nC++: void SetShaftType(int type)\n\nSet the type of the shaft to a cylinder, line, or user defined\ngeometry.\n"},
  {"SetShaftTypeToCylinder", PyvtkPVAxesActor_SetShaftTypeToCylinder, METH_VARARGS,
   "V.SetShaftTypeToCylinder()\nC++: void SetShaftTypeToCylinder()\n\n"},
  {"SetShaftTypeToLine", PyvtkPVAxesActor_SetShaftTypeToLine, METH_VARARGS,
   "V.SetShaftTypeToLine()\nC++: void SetShaftTypeToLine()\n\n"},
  {"SetShaftTypeToUserDefined", PyvtkPVAxesActor_SetShaftTypeToUserDefined, METH_VARARGS,
   "V.SetShaftTypeToUserDefined()\nC++: void SetShaftTypeToUserDefined()\n\n"},
  {"SetTipType", PyvtkPVAxesActor_SetTipType, METH_VARARGS,
   "V.SetTipType(int)\nC++: void SetTipType(int type)\n\nSet the type of the tip to a cone, sphere, or user defined\ngeometry.\n"},
  {"SetTipTypeToCone", PyvtkPVAxesActor_SetTipTypeToCone, METH_VARARGS,
   "V.SetTipTypeToCone()\nC++: void SetTipTypeToCone()\n\n"},
  {"SetTipTypeToSphere", PyvtkPVAxesActor_SetTipTypeToSphere, METH_VARARGS,
   "V.SetTipTypeToSphere()\nC++: void SetTipTypeToSphere()\n\n"},
  {"SetTipTypeToUserDefined", PyvtkPVAxesActor_SetTipTypeToUserDefined, METH_VARARGS,
   "V.SetTipTypeToUserDefined()\nC++: void SetTipTypeToUserDefined()\n\n"},
  {"SetUserDefinedTip", PyvtkPVAxesActor_SetUserDefinedTip, METH_VARARGS,
   "V.SetUserDefinedTip(vtkPolyData)\nC++: void SetUserDefinedTip(vtkPolyData *)\n\nSet the user defined tip polydata.\n"},
  {"GetUserDefinedTip", PyvtkPVAxesActor_GetUserDefinedTip, METH_VARARGS,
   "V.GetUserDefinedTip() -> vtkPolyData\nC++: virtual vtkPolyData *GetUserDefinedTip()\n\nSet the user defined tip polydata.\n"},
  {"SetUserDefinedShaft", PyvtkPVAxesActor_SetUserDefinedShaft, METH_VARARGS,
   "V.SetUserDefinedShaft(vtkPolyData)\nC++: void SetUserDefinedShaft(vtkPolyData *)\n\nSet the user defined shaft polydata.\n"},
  {"GetUserDefinedShaft", PyvtkPVAxesActor_GetUserDefinedShaft, METH_VARARGS,
   "V.GetUserDefinedShaft() -> vtkPolyData\nC++: virtual vtkPolyData *GetUserDefinedShaft()\n\nSet the user defined shaft polydata.\n"},
  {"GetXAxisTipProperty", PyvtkPVAxesActor_GetXAxisTipProperty, METH_VARARGS,
   "V.GetXAxisTipProperty() -> vtkProperty\nC++: vtkProperty *GetXAxisTipProperty()\n\nGet the tip properties.\n"},
  {"GetYAxisTipProperty", PyvtkPVAxesActor_GetYAxisTipProperty, METH_VARARGS,
   "V.GetYAxisTipProperty() -> vtkProperty\nC++: vtkProperty *GetYAxisTipProperty()\n\nGet the tip properties.\n"},
  {"GetZAxisTipProperty", PyvtkPVAxesActor_GetZAxisTipProperty, METH_VARARGS,
   "V.GetZAxisTipProperty() -> vtkProperty\nC++: vtkProperty *GetZAxisTipProperty()\n\nGet the tip properties.\n"},
  {"GetXAxisShaftProperty", PyvtkPVAxesActor_GetXAxisShaftProperty, METH_VARARGS,
   "V.GetXAxisShaftProperty() -> vtkProperty\nC++: vtkProperty *GetXAxisShaftProperty()\n\nGet the shaft properties.\n"},
  {"GetYAxisShaftProperty", PyvtkPVAxesActor_GetYAxisShaftProperty, METH_VARARGS,
   "V.GetYAxisShaftProperty() -> vtkProperty\nC++: vtkProperty *GetYAxisShaftProperty()\n\nGet the shaft properties.\n"},
  {"GetZAxisShaftProperty", PyvtkPVAxesActor_GetZAxisShaftProperty, METH_VARARGS,
   "V.GetZAxisShaftProperty() -> vtkProperty\nC++: vtkProperty *GetZAxisShaftProperty()\n\nGet the shaft properties.\n"},
  {"GetXAxisLabelProperty", PyvtkPVAxesActor_GetXAxisLabelProperty, METH_VARARGS,
   "V.GetXAxisLabelProperty() -> vtkProperty\nC++: vtkProperty *GetXAxisLabelProperty()\n\nGet the label properties.\n"},
  {"GetYAxisLabelProperty", PyvtkPVAxesActor_GetYAxisLabelProperty, METH_VARARGS,
   "V.GetYAxisLabelProperty() -> vtkProperty\nC++: vtkProperty *GetYAxisLabelProperty()\n\nGet the label properties.\n"},
  {"GetZAxisLabelProperty", PyvtkPVAxesActor_GetZAxisLabelProperty, METH_VARARGS,
   "V.GetZAxisLabelProperty() -> vtkProperty\nC++: vtkProperty *GetZAxisLabelProperty()\n\nGet the label properties.\n"},
  {"SetXAxisLabelText", PyvtkPVAxesActor_SetXAxisLabelText, METH_VARARGS,
   "V.SetXAxisLabelText(string)\nC++: virtual void SetXAxisLabelText(const char *_arg)\n\nSet the label text.\n"},
  {"SetYAxisLabelText", PyvtkPVAxesActor_SetYAxisLabelText, METH_VARARGS,
   "V.SetYAxisLabelText(string)\nC++: virtual void SetYAxisLabelText(const char *_arg)\n\nSet the label text.\n"},
  {"SetZAxisLabelText", PyvtkPVAxesActor_SetZAxisLabelText, METH_VARARGS,
   "V.SetZAxisLabelText(string)\nC++: virtual void SetZAxisLabelText(const char *_arg)\n\nSet the label text.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVAxesActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVAxesActor", // tp_name
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
  PyvtkPVAxesActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVAxesActor_StaticNew()
{
  return vtkPVAxesActor::New();
}

PyObject *PyvtkPVAxesActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVAxesActor_Type, PyvtkPVAxesActor_Methods,
    "vtkPVAxesActor",
 &PyvtkPVAxesActor_StaticNew);

  PyTypeObject *pytype = &PyvtkPVAxesActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProp3D_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "CYLINDER_SHAFT", vtkPVAxesActor::CYLINDER_SHAFT },
        { "LINE_SHAFT", vtkPVAxesActor::LINE_SHAFT },
        { "USER_DEFINED_SHAFT", vtkPVAxesActor::USER_DEFINED_SHAFT },
        { "CONE_TIP", vtkPVAxesActor::CONE_TIP },
        { "SPHERE_TIP", vtkPVAxesActor::SPHERE_TIP },
        { "USER_DEFINED_TIP", vtkPVAxesActor::USER_DEFINED_TIP },
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

void PyVTKAddFile_vtkPVAxesActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVAxesActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVAxesActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

