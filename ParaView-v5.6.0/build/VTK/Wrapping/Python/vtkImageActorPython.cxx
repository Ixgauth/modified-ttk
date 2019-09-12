// python wrapper for vtkImageActor
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
#include "vtkImageActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageActor_ClassNew(); }

#ifndef DECLARED_PyvtkImageSlice_ClassNew
extern "C" { PyObject *PyvtkImageSlice_ClassNew(); }
#define DECLARED_PyvtkImageSlice_ClassNew
#endif

static const char *PyvtkImageActor_Doc =
  "vtkImageActor - draw an image in a rendered 3D scene\n\n"
  "Superclass: vtkImageSlice\n\n"
  "vtkImageActor is used to render an image in a 3D scene.  The image is\n"
  "placed at the origin of the image, and its size is controlled by the\n"
  "image dimensions and image spacing. The orientation of the image is\n"
  "orthogonal to one of the x-y-z axes depending on which plane the\n"
  "image is defined in.  This class has been mostly superseded by the\n"
  "vtkImageSlice class, which provides more functionality than\n"
  "vtkImageActor.\n\n"
  "@sa\n"
  "vtkImageData vtkImageSliceMapper vtkImageProperty\n\n";


static PyObject *
PyvtkImageActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageActor *tempr = vtkImageActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageActor::NewInstance());

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
PyvtkImageActor_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

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
      op->vtkImageActor::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageActor::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolate(temp0);
    }
    else
    {
      op->vtkImageActor::SetInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolate() :
      op->vtkImageActor::GetInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOn();
    }
    else
    {
      op->vtkImageActor::InterpolateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOff();
    }
    else
    {
      op->vtkImageActor::InterpolateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkImageActor::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkImageActor::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMinValue() :
      op->vtkImageActor::GetOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMaxValue() :
      op->vtkImageActor::GetOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_SetDisplayExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayExtent(temp0);
    }
    else
    {
      op->vtkImageActor::SetDisplayExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageActor_SetDisplayExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

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
      op->SetDisplayExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageActor::SetDisplayExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageActor_SetDisplayExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageActor_SetDisplayExtent_s1(self, args);
    case 6:
      return PyvtkImageActor_SetDisplayExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDisplayExtent");
  return nullptr;
}



static PyObject *
PyvtkImageActor_GetDisplayExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDisplayExtent(temp0);
    }
    else
    {
      op->vtkImageActor::GetDisplayExtent(temp0);
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
PyvtkImageActor_GetDisplayExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDisplayExtent() :
      op->vtkImageActor::GetDisplayExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageActor_GetDisplayExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageActor_GetDisplayExtent_s1(self, args);
    case 0:
      return PyvtkImageActor_GetDisplayExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDisplayExtent");
  return nullptr;
}



static PyObject *
PyvtkImageActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImageActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

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
      op->vtkImageActor::GetBounds(temp0);
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
PyvtkImageActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageActor_GetBounds_s1(self, args);
    case 1:
      return PyvtkImageActor_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkImageActor_GetDisplayBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDisplayBounds() :
      op->vtkImageActor::GetDisplayBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageActor_GetDisplayBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

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
      op->GetDisplayBounds(temp0);
    }
    else
    {
      op->vtkImageActor::GetDisplayBounds(temp0);
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
PyvtkImageActor_GetDisplayBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageActor_GetDisplayBounds_s1(self, args);
    case 1:
      return PyvtkImageActor_GetDisplayBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDisplayBounds");
  return nullptr;
}



static PyObject *
PyvtkImageActor_GetSliceNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumber() :
      op->vtkImageActor::GetSliceNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetSliceNumberMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumberMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumberMax() :
      op->vtkImageActor::GetSliceNumberMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetSliceNumberMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumberMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumberMin() :
      op->vtkImageActor::GetSliceNumberMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_SetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZSlice(temp0);
    }
    else
    {
      op->vtkImageActor::SetZSlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZSlice() :
      op->vtkImageActor::GetZSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetWholeZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMin() :
      op->vtkImageActor::GetWholeZMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetWholeZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMax() :
      op->vtkImageActor::GetWholeZMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkImageActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_GetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceOpaque() :
      op->vtkImageActor::GetForceOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_SetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceOpaque(temp0);
    }
    else
    {
      op->vtkImageActor::SetForceOpaque(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_ForceOpaqueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOn();
    }
    else
    {
      op->vtkImageActor::ForceOpaqueOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActor_ForceOpaqueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActor *op = static_cast<vtkImageActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOff();
    }
    else
    {
      op->vtkImageActor::ForceOpaqueOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageActor_Methods[] = {
  {"IsTypeOf", PyvtkImageActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageActor\nC++: static vtkImageActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageActor\nC++: vtkImageActor *NewInstance()\n\n"},
  {"SetInputData", PyvtkImageActor_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkImageData)\nC++: virtual void SetInputData(vtkImageData *)\n\nSet/Get the image data input for the image actor.  This is for\nbackwards compatibility, for a proper pipeline connection you\nshould use GetMapper()->SetInputConnection() instead.\n"},
  {"GetInput", PyvtkImageActor_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkImageData\nC++: virtual vtkImageData *GetInput()\n\nSet/Get the image data input for the image actor.  This is for\nbackwards compatibility, for a proper pipeline connection you\nshould use GetMapper()->SetInputConnection() instead.\n"},
  {"SetInterpolate", PyvtkImageActor_SetInterpolate, METH_VARARGS,
   "V.SetInterpolate(int)\nC++: virtual void SetInterpolate(vtkTypeBool)\n\nTurn on/off linear interpolation of the image when rendering.\nMore options are available in the Property of the image actor.\n"},
  {"GetInterpolate", PyvtkImageActor_GetInterpolate, METH_VARARGS,
   "V.GetInterpolate() -> int\nC++: virtual vtkTypeBool GetInterpolate()\n\nTurn on/off linear interpolation of the image when rendering.\nMore options are available in the Property of the image actor.\n"},
  {"InterpolateOn", PyvtkImageActor_InterpolateOn, METH_VARARGS,
   "V.InterpolateOn()\nC++: virtual void InterpolateOn()\n\nTurn on/off linear interpolation of the image when rendering.\nMore options are available in the Property of the image actor.\n"},
  {"InterpolateOff", PyvtkImageActor_InterpolateOff, METH_VARARGS,
   "V.InterpolateOff()\nC++: virtual void InterpolateOff()\n\nTurn on/off linear interpolation of the image when rendering.\nMore options are available in the Property of the image actor.\n"},
  {"SetOpacity", PyvtkImageActor_SetOpacity, METH_VARARGS,
   "V.SetOpacity(float)\nC++: virtual void SetOpacity(double)\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent. The default is 1.0.\n"},
  {"GetOpacity", PyvtkImageActor_GetOpacity, METH_VARARGS,
   "V.GetOpacity() -> float\nC++: virtual double GetOpacity()\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent. The default is 1.0.\n"},
  {"GetOpacityMinValue", PyvtkImageActor_GetOpacityMinValue, METH_VARARGS,
   "V.GetOpacityMinValue() -> float\nC++: double GetOpacityMinValue()\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent. The default is 1.0.\n"},
  {"GetOpacityMaxValue", PyvtkImageActor_GetOpacityMaxValue, METH_VARARGS,
   "V.GetOpacityMaxValue() -> float\nC++: double GetOpacityMaxValue()\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent. The default is 1.0.\n"},
  {"SetDisplayExtent", PyvtkImageActor_SetDisplayExtent, METH_VARARGS,
   "V.SetDisplayExtent((int, int, int, int, int, int))\nC++: void SetDisplayExtent(const int extent[6])\nV.SetDisplayExtent(int, int, int, int, int, int)\nC++: void SetDisplayExtent(int minX, int maxX, int minY, int maxY,\n     int minZ, int maxZ)\n\nThe image extent is generally set explicitly, but if not set it\nwill be determined from the input image data.\n"},
  {"GetDisplayExtent", PyvtkImageActor_GetDisplayExtent, METH_VARARGS,
   "V.GetDisplayExtent([int, int, int, int, int, int])\nC++: void GetDisplayExtent(int extent[6])\nV.GetDisplayExtent() -> (int, int, int, int, int, int)\nC++: int *GetDisplayExtent()\n\nThe image extent is generally set explicitly, but if not set it\nwill be determined from the input image data.\n"},
  {"GetBounds", PyvtkImageActor_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nGet the bounds of this image actor. Either copy the bounds into a\nuser provided array or return a pointer to an array. In either\ncase the bounds is expressed as a 6-vector (xmin,xmax, ymin,ymax,\nzmin,zmax).\n"},
  {"GetDisplayBounds", PyvtkImageActor_GetDisplayBounds, METH_VARARGS,
   "V.GetDisplayBounds() -> (float, ...)\nC++: double *GetDisplayBounds()\nV.GetDisplayBounds([float, float, float, float, float, float])\nC++: void GetDisplayBounds(double bounds[6])\n\nGet the bounds of the data that is displayed by this image actor.\n If the transformation matrix for this actor is the identity\nmatrix, this will return the same value as GetBounds.\n"},
  {"GetSliceNumber", PyvtkImageActor_GetSliceNumber, METH_VARARGS,
   "V.GetSliceNumber() -> int\nC++: int GetSliceNumber()\n\nReturn the slice number (& min/max slice number) computed from\nthe display extent.\n"},
  {"GetSliceNumberMax", PyvtkImageActor_GetSliceNumberMax, METH_VARARGS,
   "V.GetSliceNumberMax() -> int\nC++: int GetSliceNumberMax()\n\nReturn the slice number (& min/max slice number) computed from\nthe display extent.\n"},
  {"GetSliceNumberMin", PyvtkImageActor_GetSliceNumberMin, METH_VARARGS,
   "V.GetSliceNumberMin() -> int\nC++: int GetSliceNumberMin()\n\nReturn the slice number (& min/max slice number) computed from\nthe display extent.\n"},
  {"SetZSlice", PyvtkImageActor_SetZSlice, METH_VARARGS,
   "V.SetZSlice(int)\nC++: void SetZSlice(int z)\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {"GetZSlice", PyvtkImageActor_GetZSlice, METH_VARARGS,
   "V.GetZSlice() -> int\nC++: int GetZSlice()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {"GetWholeZMin", PyvtkImageActor_GetWholeZMin, METH_VARARGS,
   "V.GetWholeZMin() -> int\nC++: int GetWholeZMin()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {"GetWholeZMax", PyvtkImageActor_GetWholeZMax, METH_VARARGS,
   "V.GetWholeZMax() -> int\nC++: int GetWholeZMax()\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkImageActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nInternal method, should only be used by rendering. Returns true\nif this image actor has an alpha component or if it has an\nopacity that is less than 1.0.  This can be overridden by\nForceOpaqueOn(), which forces this method to return false, or\nForceTranslucentOn(), which forces this method to return true.\n"},
  {"GetForceOpaque", PyvtkImageActor_GetForceOpaque, METH_VARARGS,
   "V.GetForceOpaque() -> bool\nC++: virtual bool GetForceOpaque()\n\nForce the actor to be rendered during the opaque rendering pass.\nDefault is false. See also: ForceTranslucentOn() to use\ntranslucent rendering pass.\n"},
  {"SetForceOpaque", PyvtkImageActor_SetForceOpaque, METH_VARARGS,
   "V.SetForceOpaque(bool)\nC++: virtual void SetForceOpaque(bool _arg)\n\nForce the actor to be rendered during the opaque rendering pass.\nDefault is false. See also: ForceTranslucentOn() to use\ntranslucent rendering pass.\n"},
  {"ForceOpaqueOn", PyvtkImageActor_ForceOpaqueOn, METH_VARARGS,
   "V.ForceOpaqueOn()\nC++: virtual void ForceOpaqueOn()\n\nForce the actor to be rendered during the opaque rendering pass.\nDefault is false. See also: ForceTranslucentOn() to use\ntranslucent rendering pass.\n"},
  {"ForceOpaqueOff", PyvtkImageActor_ForceOpaqueOff, METH_VARARGS,
   "V.ForceOpaqueOff()\nC++: virtual void ForceOpaqueOff()\n\nForce the actor to be rendered during the opaque rendering pass.\nDefault is false. See also: ForceTranslucentOn() to use\ntranslucent rendering pass.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkImageActor", // tp_name
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
  PyvtkImageActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageActor_StaticNew()
{
  return vtkImageActor::New();
}

PyObject *PyvtkImageActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageActor_Type, PyvtkImageActor_Methods,
    "vtkImageActor",
 &PyvtkImageActor_StaticNew);

  PyTypeObject *pytype = &PyvtkImageActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageSlice_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

