// python wrapper for vtkProjectedTexture
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
#include "vtkProjectedTexture.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProjectedTexture(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProjectedTexture_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkProjectedTexture_Doc =
  "vtkProjectedTexture - assign texture coordinates for a projected\ntexture\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkProjectedTexture assigns texture coordinates to a dataset as if\n"
  "the texture was projected from a slide projected located somewhere in\n"
  "the scene.  Methods are provided to position the projector and aim it\n"
  "at a location, to set the width of the projector's frustum, and to\n"
  "set the range of texture coordinates assigned to the dataset.\n\n"
  "Objects in the scene that appear behind the projector are also\n"
  "assigned texture coordinates; the projected image is left-right and\n"
  "top-bottom flipped, much as a lens' focus flips the rays of light\n"
  "that pass through it.  A warning is issued if a point in the dataset\n"
  "falls at the focus of the projector.\n\n";


static PyObject *
PyvtkProjectedTexture_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProjectedTexture::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProjectedTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProjectedTexture *tempr = vtkProjectedTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProjectedTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProjectedTexture::NewInstance());

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
PyvtkProjectedTexture_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->vtkProjectedTexture::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->vtkProjectedTexture::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProjectedTexture_SetPosition_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}



static PyObject *
PyvtkProjectedTexture_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkProjectedTexture::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->SetFocalPoint(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetFocalPoint(temp0);
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
PyvtkProjectedTexture_SetFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->vtkProjectedTexture::SetFocalPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkProjectedTexture_SetFocalPoint_s1(self, args);
    case 3:
      return PyvtkProjectedTexture_SetFocalPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFocalPoint");
  return nullptr;
}



static PyObject *
PyvtkProjectedTexture_GetFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFocalPoint() :
      op->vtkProjectedTexture::GetFocalPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetCameraMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCameraMode(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetCameraMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_GetCameraMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCameraMode() :
      op->vtkProjectedTexture::GetCameraMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetCameraModeToPinhole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraModeToPinhole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCameraModeToPinhole();
    }
    else
    {
      op->vtkProjectedTexture::SetCameraModeToPinhole();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetCameraModeToTwoMirror(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraModeToTwoMirror");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCameraModeToTwoMirror();
    }
    else
    {
      op->vtkProjectedTexture::SetCameraModeToTwoMirror();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetMirrorSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMirrorSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMirrorSeparation(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetMirrorSeparation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_GetMirrorSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMirrorSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMirrorSeparation() :
      op->vtkProjectedTexture::GetMirrorSeparation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkProjectedTexture::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetUp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->SetUp(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProjectedTexture::SetUp(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetUp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUp(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetUp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetUp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProjectedTexture_SetUp_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetUp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUp");
  return nullptr;
}



static PyObject *
PyvtkProjectedTexture_GetUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUp() :
      op->vtkProjectedTexture::GetUp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetAspectRatio_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->SetAspectRatio(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProjectedTexture::SetAspectRatio(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetAspectRatio_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAspectRatio(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetAspectRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetAspectRatio(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProjectedTexture_SetAspectRatio_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetAspectRatio_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAspectRatio");
  return nullptr;
}



static PyObject *
PyvtkProjectedTexture_GetAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAspectRatio() :
      op->vtkProjectedTexture::GetAspectRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetSRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSRange(temp0, temp1);
    }
    else
    {
      op->vtkProjectedTexture::SetSRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetSRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSRange(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetSRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetSRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkProjectedTexture_SetSRange_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetSRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSRange");
  return nullptr;
}



static PyObject *
PyvtkProjectedTexture_GetSRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSRange() :
      op->vtkProjectedTexture::GetSRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetTRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTRange(temp0, temp1);
    }
    else
    {
      op->vtkProjectedTexture::SetTRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetTRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTRange(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetTRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetTRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkProjectedTexture_SetTRange_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetTRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTRange");
  return nullptr;
}



static PyObject *
PyvtkProjectedTexture_GetTRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTRange() :
      op->vtkProjectedTexture::GetTRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkProjectedTexture_Methods[] = {
  {"IsTypeOf", PyvtkProjectedTexture_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProjectedTexture_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProjectedTexture_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProjectedTexture\nC++: static vtkProjectedTexture *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProjectedTexture_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProjectedTexture\nC++: vtkProjectedTexture *NewInstance()\n\n"},
  {"SetPosition", PyvtkProjectedTexture_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\nV.SetPosition((float, float, float))\nC++: void SetPosition(double a[3])\n\n"},
  {"GetPosition", PyvtkProjectedTexture_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\nSet/Get the position of the focus of the projector.\n"},
  {"SetFocalPoint", PyvtkProjectedTexture_SetFocalPoint, METH_VARARGS,
   "V.SetFocalPoint([float, float, float])\nC++: void SetFocalPoint(double focalPoint[3])\nV.SetFocalPoint(float, float, float)\nC++: void SetFocalPoint(double x, double y, double z)\n\nSet/Get the focal point of the projector (a point that lies along\nthe center axis of the projector's frustum).\n"},
  {"GetFocalPoint", PyvtkProjectedTexture_GetFocalPoint, METH_VARARGS,
   "V.GetFocalPoint() -> (float, float, float)\nC++: double *GetFocalPoint()\n\nSet/Get the focal point of the projector (a point that lies along\nthe center axis of the projector's frustum).\n"},
  {"SetCameraMode", PyvtkProjectedTexture_SetCameraMode, METH_VARARGS,
   "V.SetCameraMode(int)\nC++: virtual void SetCameraMode(int _arg)\n\nSet/Get the camera mode of the projection -- pinhole projection\nor two mirror projection.\n"},
  {"GetCameraMode", PyvtkProjectedTexture_GetCameraMode, METH_VARARGS,
   "V.GetCameraMode() -> int\nC++: virtual int GetCameraMode()\n\nSet/Get the camera mode of the projection -- pinhole projection\nor two mirror projection.\n"},
  {"SetCameraModeToPinhole", PyvtkProjectedTexture_SetCameraModeToPinhole, METH_VARARGS,
   "V.SetCameraModeToPinhole()\nC++: void SetCameraModeToPinhole()\n\nSet/Get the camera mode of the projection -- pinhole projection\nor two mirror projection.\n"},
  {"SetCameraModeToTwoMirror", PyvtkProjectedTexture_SetCameraModeToTwoMirror, METH_VARARGS,
   "V.SetCameraModeToTwoMirror()\nC++: void SetCameraModeToTwoMirror()\n\nSet/Get the camera mode of the projection -- pinhole projection\nor two mirror projection.\n"},
  {"SetMirrorSeparation", PyvtkProjectedTexture_SetMirrorSeparation, METH_VARARGS,
   "V.SetMirrorSeparation(float)\nC++: virtual void SetMirrorSeparation(double _arg)\n\nSet/Get the mirror separation for the two mirror system.\n"},
  {"GetMirrorSeparation", PyvtkProjectedTexture_GetMirrorSeparation, METH_VARARGS,
   "V.GetMirrorSeparation() -> float\nC++: virtual double GetMirrorSeparation()\n\nSet/Get the mirror separation for the two mirror system.\n"},
  {"GetOrientation", PyvtkProjectedTexture_GetOrientation, METH_VARARGS,
   "V.GetOrientation() -> (float, float, float)\nC++: double *GetOrientation()\n\nGet the normalized orientation vector of the projector.\n"},
  {"SetUp", PyvtkProjectedTexture_SetUp, METH_VARARGS,
   "V.SetUp(float, float, float)\nC++: void SetUp(double, double, double)\nV.SetUp((float, float, float))\nC++: void SetUp(double a[3])\n\n"},
  {"GetUp", PyvtkProjectedTexture_GetUp, METH_VARARGS,
   "V.GetUp() -> (float, float, float)\nC++: double *GetUp()\n\nSet/Get the up vector of the projector.\n"},
  {"SetAspectRatio", PyvtkProjectedTexture_SetAspectRatio, METH_VARARGS,
   "V.SetAspectRatio(float, float, float)\nC++: void SetAspectRatio(double, double, double)\nV.SetAspectRatio((float, float, float))\nC++: void SetAspectRatio(double a[3])\n\n"},
  {"GetAspectRatio", PyvtkProjectedTexture_GetAspectRatio, METH_VARARGS,
   "V.GetAspectRatio() -> (float, float, float)\nC++: double *GetAspectRatio()\n\nSet/Get the aspect ratio of a perpendicular cross-section of the\nthe projector's frustum.  The aspect ratio consists of three\nnumbers:  (x, y, z), where x is the width of the frustum, y is\nthe height, and z is the perpendicular distance from the focus of\nthe projector.\n\n* For example, if the source of the image is a pinhole camera\n  with\n* view angle A, then you could set x=1, y=1, z=1/tan(A).\n"},
  {"SetSRange", PyvtkProjectedTexture_SetSRange, METH_VARARGS,
   "V.SetSRange(float, float)\nC++: void SetSRange(double, double)\nV.SetSRange((float, float))\nC++: void SetSRange(double a[2])\n\n"},
  {"GetSRange", PyvtkProjectedTexture_GetSRange, METH_VARARGS,
   "V.GetSRange() -> (float, float)\nC++: double *GetSRange()\n\nSpecify s-coordinate range for texture s-t coordinate pair.\n"},
  {"SetTRange", PyvtkProjectedTexture_SetTRange, METH_VARARGS,
   "V.SetTRange(float, float)\nC++: void SetTRange(double, double)\nV.SetTRange((float, float))\nC++: void SetTRange(double a[2])\n\n"},
  {"GetTRange", PyvtkProjectedTexture_GetTRange, METH_VARARGS,
   "V.GetTRange() -> (float, float)\nC++: double *GetTRange()\n\nSpecify t-coordinate range for texture s-t coordinate pair.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProjectedTexture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkProjectedTexture", // tp_name
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
  PyvtkProjectedTexture_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProjectedTexture_StaticNew()
{
  return vtkProjectedTexture::New();
}

PyObject *PyvtkProjectedTexture_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProjectedTexture_Type, PyvtkProjectedTexture_Methods,
    "vtkProjectedTexture",
 &PyvtkProjectedTexture_StaticNew);

  PyTypeObject *pytype = &PyvtkProjectedTexture_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProjectedTexture(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProjectedTexture_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProjectedTexture", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_PROJECTED_TEXTURE_USE_PINHOLE", 0 },
        { "VTK_PROJECTED_TEXTURE_USE_TWO_MIRRORS", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

