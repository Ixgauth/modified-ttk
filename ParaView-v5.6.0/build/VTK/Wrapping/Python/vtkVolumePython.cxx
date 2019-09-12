// python wrapper for vtkVolume
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
#include "vtkVolume.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolume(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVolume_ClassNew(); }

#ifndef DECLARED_PyvtkProp3D_ClassNew
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }
#define DECLARED_PyvtkProp3D_ClassNew
#endif

static const char *PyvtkVolume_Doc =
  "vtkVolume - represents a volume (data & properties) in a rendered\nscene\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkVolume is used to represent a volumetric entity in a rendering\n"
  "scene. It inherits functions related to the volume's position,\n"
  "orientation and origin from vtkProp3D. The volume maintains a\n"
  "reference to the volumetric data (i.e., the volume mapper). The\n"
  "volume also contains a reference to a volume property which contains\n"
  "all common volume rendering parameters.\n\n"
  "@sa\n"
  "vtkAbstractVolumeMapper vtkVolumeProperty vtkProp3D\n\n";


static PyObject *
PyvtkVolume_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolume::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolume::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolume *tempr = vtkVolume::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolume *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolume::NewInstance());

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
PyvtkVolume_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkAbstractVolumeMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractVolumeMapper"))
  {
    if (ap.IsBound())
    {
      op->SetMapper(temp0);
    }
    else
    {
      op->vtkVolume::SetMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractVolumeMapper *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkVolume::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkVolumeProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkVolume::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkVolume::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetVolumes(temp0);
    }
    else
    {
      op->vtkVolume::GetVolumes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkVolume::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkVolume::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

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
      op->vtkVolume::GetBounds(temp0);
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
PyvtkVolume_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkVolume_GetBounds_s1(self, args);
    case 1:
      return PyvtkVolume_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkVolume_GetMinXBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinXBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinXBound() :
      op->vtkVolume::GetMinXBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMaxXBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxXBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxXBound() :
      op->vtkVolume::GetMaxXBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMinYBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinYBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinYBound() :
      op->vtkVolume::GetMinYBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMaxYBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxYBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxYBound() :
      op->vtkVolume::GetMaxYBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMinZBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinZBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinZBound() :
      op->vtkVolume::GetMinZBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMaxZBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxZBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxZBound() :
      op->vtkVolume::GetMaxZBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkVolume::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetRedrawMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedrawMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetRedrawMTime() :
      op->vtkVolume::GetRedrawMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

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
      op->vtkVolume::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkVolume::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

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
      op->vtkVolume::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetCorrectedScalarOpacityArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorrectedScalarOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetCorrectedScalarOpacityArray(temp0) :
      op->vtkVolume::GetCorrectedScalarOpacityArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetCorrectedScalarOpacityArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorrectedScalarOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetCorrectedScalarOpacityArray() :
      op->vtkVolume::GetCorrectedScalarOpacityArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetCorrectedScalarOpacityArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolume_GetCorrectedScalarOpacityArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetCorrectedScalarOpacityArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCorrectedScalarOpacityArray");
  return nullptr;
}



static PyObject *
PyvtkVolume_GetScalarOpacityArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetScalarOpacityArray(temp0) :
      op->vtkVolume::GetScalarOpacityArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetScalarOpacityArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetScalarOpacityArray() :
      op->vtkVolume::GetScalarOpacityArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetScalarOpacityArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolume_GetScalarOpacityArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetScalarOpacityArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarOpacityArray");
  return nullptr;
}



static PyObject *
PyvtkVolume_GetGradientOpacityArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetGradientOpacityArray(temp0) :
      op->vtkVolume::GetGradientOpacityArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetGradientOpacityArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetGradientOpacityArray() :
      op->vtkVolume::GetGradientOpacityArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetGradientOpacityArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolume_GetGradientOpacityArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetGradientOpacityArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientOpacityArray");
  return nullptr;
}



static PyObject *
PyvtkVolume_GetGrayArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetGrayArray(temp0) :
      op->vtkVolume::GetGrayArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetGrayArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetGrayArray() :
      op->vtkVolume::GetGrayArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetGrayArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolume_GetGrayArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetGrayArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGrayArray");
  return nullptr;
}



static PyObject *
PyvtkVolume_GetRGBArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetRGBArray(temp0) :
      op->vtkVolume::GetRGBArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetRGBArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetRGBArray() :
      op->vtkVolume::GetRGBArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetRGBArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolume_GetRGBArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetRGBArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBArray");
  return nullptr;
}



static PyObject *
PyvtkVolume_GetGradientOpacityConstant_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientOpacityConstant(temp0) :
      op->vtkVolume::GetGradientOpacityConstant(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetGradientOpacityConstant_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientOpacityConstant() :
      op->vtkVolume::GetGradientOpacityConstant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetGradientOpacityConstant(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolume_GetGradientOpacityConstant_s1(self, args);
    case 0:
      return PyvtkVolume_GetGradientOpacityConstant_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientOpacityConstant");
  return nullptr;
}



static PyObject *
PyvtkVolume_GetArraySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArraySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetArraySize() :
      op->vtkVolume::GetArraySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_UpdateTransferFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTransferFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->UpdateTransferFunctions(temp0);
    }
    else
    {
      op->vtkVolume::UpdateTransferFunctions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_UpdateScalarOpacityforSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScalarOpacityforSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkRenderer *temp0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateScalarOpacityforSampleSize(temp0, temp1);
    }
    else
    {
      op->vtkVolume::UpdateScalarOpacityforSampleSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkVolume::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolume_Methods[] = {
  {"IsTypeOf", PyvtkVolume_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolume_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolume_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVolume\nC++: static vtkVolume *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolume_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVolume\nC++: vtkVolume *NewInstance()\n\n"},
  {"SetMapper", PyvtkVolume_SetMapper, METH_VARARGS,
   "V.SetMapper(vtkAbstractVolumeMapper)\nC++: void SetMapper(vtkAbstractVolumeMapper *mapper)\n\nSet/Get the volume mapper.\n"},
  {"GetMapper", PyvtkVolume_GetMapper, METH_VARARGS,
   "V.GetMapper() -> vtkAbstractVolumeMapper\nC++: virtual vtkAbstractVolumeMapper *GetMapper()\n\nSet/Get the volume mapper.\n"},
  {"SetProperty", PyvtkVolume_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkVolumeProperty)\nC++: virtual void SetProperty(vtkVolumeProperty *property)\n\nSet/Get the volume property.\n"},
  {"GetProperty", PyvtkVolume_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkVolumeProperty\nC++: virtual vtkVolumeProperty *GetProperty()\n\nSet/Get the volume property.\n"},
  {"GetVolumes", PyvtkVolume_GetVolumes, METH_VARARGS,
   "V.GetVolumes(vtkPropCollection)\nC++: void GetVolumes(vtkPropCollection *vc) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. This method is used in that\nprocess.\n"},
  {"Update", PyvtkVolume_Update, METH_VARARGS,
   "V.Update()\nC++: void Update()\n\nUpdate the volume rendering pipeline by updating the volume\nmapper\n"},
  {"GetBounds", PyvtkVolume_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMinXBound", PyvtkVolume_GetMinXBound, METH_VARARGS,
   "V.GetMinXBound() -> float\nC++: double GetMinXBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMaxXBound", PyvtkVolume_GetMaxXBound, METH_VARARGS,
   "V.GetMaxXBound() -> float\nC++: double GetMaxXBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMinYBound", PyvtkVolume_GetMinYBound, METH_VARARGS,
   "V.GetMinYBound() -> float\nC++: double GetMinYBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMaxYBound", PyvtkVolume_GetMaxYBound, METH_VARARGS,
   "V.GetMaxYBound() -> float\nC++: double GetMaxYBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMinZBound", PyvtkVolume_GetMinZBound, METH_VARARGS,
   "V.GetMinZBound() -> float\nC++: double GetMinZBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMaxZBound", PyvtkVolume_GetMaxZBound, METH_VARARGS,
   "V.GetMaxZBound() -> float\nC++: double GetMaxZBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMTime", PyvtkVolume_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the property etc.\n"},
  {"GetRedrawMTime", PyvtkVolume_GetRedrawMTime, METH_VARARGS,
   "V.GetRedrawMTime() -> int\nC++: vtkMTimeType GetRedrawMTime() override;\n\nReturn the mtime of anything that would cause the rendered image\nto appear differently. Usually this involves checking the mtime\nof the prop plus anything else it depends on such as properties,\nmappers, etc.\n"},
  {"ShallowCopy", PyvtkVolume_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of this vtkVolume. Overloads the virtual vtkProp\nmethod.\n"},
  {"RenderVolumetricGeometry", PyvtkVolume_RenderVolumetricGeometry, METH_VARARGS,
   "V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: int RenderVolumetricGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Support the\nstandard render methods. Depending on the mapper type, the volume\nmay be rendered using this method (FRAMEBUFFER volume such as\ntexture mapping will be rendered this way)\n"},
  {"ReleaseGraphicsResources", PyvtkVolume_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this volume.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {"GetCorrectedScalarOpacityArray", PyvtkVolume_GetCorrectedScalarOpacityArray, METH_VARARGS,
   "V.GetCorrectedScalarOpacityArray(int) -> (float, ...)\nC++: float *GetCorrectedScalarOpacityArray(int)\nV.GetCorrectedScalarOpacityArray() -> (float, ...)\nC++: float *GetCorrectedScalarOpacityArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetScalarOpacityArray", PyvtkVolume_GetScalarOpacityArray, METH_VARARGS,
   "V.GetScalarOpacityArray(int) -> (float, ...)\nC++: float *GetScalarOpacityArray(int)\nV.GetScalarOpacityArray() -> (float, ...)\nC++: float *GetScalarOpacityArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetGradientOpacityArray", PyvtkVolume_GetGradientOpacityArray, METH_VARARGS,
   "V.GetGradientOpacityArray(int) -> (float, ...)\nC++: float *GetGradientOpacityArray(int)\nV.GetGradientOpacityArray() -> (float, ...)\nC++: float *GetGradientOpacityArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetGrayArray", PyvtkVolume_GetGrayArray, METH_VARARGS,
   "V.GetGrayArray(int) -> (float, ...)\nC++: float *GetGrayArray(int)\nV.GetGrayArray() -> (float, ...)\nC++: float *GetGrayArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetRGBArray", PyvtkVolume_GetRGBArray, METH_VARARGS,
   "V.GetRGBArray(int) -> (float, ...)\nC++: float *GetRGBArray(int)\nV.GetRGBArray() -> (float, ...)\nC++: float *GetRGBArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetGradientOpacityConstant", PyvtkVolume_GetGradientOpacityConstant, METH_VARARGS,
   "V.GetGradientOpacityConstant(int) -> float\nC++: float GetGradientOpacityConstant(int)\nV.GetGradientOpacityConstant() -> float\nC++: float GetGradientOpacityConstant()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetArraySize", PyvtkVolume_GetArraySize, METH_VARARGS,
   "V.GetArraySize() -> float\nC++: float GetArraySize()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"UpdateTransferFunctions", PyvtkVolume_UpdateTransferFunctions, METH_VARARGS,
   "V.UpdateTransferFunctions(vtkRenderer)\nC++: void UpdateTransferFunctions(vtkRenderer *ren)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"UpdateScalarOpacityforSampleSize", PyvtkVolume_UpdateScalarOpacityforSampleSize, METH_VARARGS,
   "V.UpdateScalarOpacityforSampleSize(vtkRenderer, float)\nC++: void UpdateScalarOpacityforSampleSize(vtkRenderer *ren,\n    float sample_distance)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetSupportsSelection", PyvtkVolume_GetSupportsSelection, METH_VARARGS,
   "V.GetSupportsSelection() -> bool\nC++: bool GetSupportsSelection() override;\n\nUsed by vtkHardwareSelector to determine if the prop supports\nhardware selection.\n\n@warning INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nDO NOT USE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVolume_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkVolume", // tp_name
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
  PyvtkVolume_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolume_StaticNew()
{
  return vtkVolume::New();
}

PyObject *PyvtkVolume_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVolume_Type, PyvtkVolume_Methods,
    "vtkVolume",
 &PyvtkVolume_StaticNew);

  PyTypeObject *pytype = &PyvtkVolume_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProp3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVolume(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolume_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolume", o) != 0)
  {
    Py_DECREF(o);
  }

}

