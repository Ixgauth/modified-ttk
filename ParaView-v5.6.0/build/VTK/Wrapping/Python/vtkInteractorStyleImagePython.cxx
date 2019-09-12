// python wrapper for vtkInteractorStyleImage
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
#include "vtkInteractorStyleImage.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleImage(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInteractorStyleImage_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
extern "C" { PyObject *PyvtkInteractorStyleTrackballCamera_ClassNew(); }
#define DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
#endif

static const char *PyvtkInteractorStyleImage_Doc =
  "vtkInteractorStyleImage - interactive manipulation of the camera\nspecialized for images\n\n"
  "Superclass: vtkInteractorStyleTrackballCamera\n\n"
  "vtkInteractorStyleImage allows the user to interactively manipulate\n"
  "(rotate, pan, zoom etc.) the camera. vtkInteractorStyleImage is\n"
  "specially designed to work with images that are being rendered with\n"
  "vtkImageActor. Several events are overloaded from its superclass\n"
  "vtkInteractorStyle, hence the mouse bindings are different. (The\n"
  "bindings keep the camera's view plane normal perpendicular to the x-y\n"
  "plane.) In summary the mouse events for 2D image interaction are as\n"
  "follows:\n"
  "- Left Mouse button triggers window level events\n"
  "- CTRL Left Mouse spins the camera around its view plane normal\n"
  "- SHIFT Left Mouse pans the camera\n"
  "- CTRL SHIFT Left Mouse dollys (a positional zoom) the camera\n"
  "- Middle mouse button pans the camera\n"
  "- Right mouse button dollys the camera.\n"
  "- SHIFT Right Mouse triggers pick events\n\n"
  "If SetInteractionModeToImageSlicing() is called, then some of the\n"
  "mouse events are changed as follows:\n"
  "- CTRL Left Mouse slices through the image\n"
  "- SHIFT Middle Mouse slices through the image\n"
  "- CTRL Right Mouse spins the camera\n\n"
  "If SetInteractionModeToImage3D() is called, then some of the mouse\n"
  "events are changed as follows:\n"
  "- SHIFT Left Mouse rotates the camera for oblique slicing\n"
  "- SHIFT Middle Mouse slices through the image\n"
  "- CTRL Right Mouse also slices through the image\n\n"
  "In all modes, the following key bindings are in effect:\n"
  "- R Reset the Window/Level\n"
  "- X Reset to a sagittal view\n"
  "- Y Reset to a coronal view\n"
  "- Z Reset to an axial view\n\n"
  "Note that the renderer's actors are not moved; instead the camera is\n"
  "moved.\n\n"
  "@sa\n"
  "vtkInteractorStyle vtkInteractorStyleTrackballActor\n"
  "vtkInteractorStyleJoystickCamera vtkInteractorStyleJoystickActor\n\n";


static PyObject *
PyvtkInteractorStyleImage_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleImage::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleImage::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleImage *tempr = vtkInteractorStyleImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleImage::NewInstance());

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
PyvtkInteractorStyleImage_GetWindowLevelStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWindowLevelStartPosition() :
      op->vtkInteractorStyleImage::GetWindowLevelStartPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetWindowLevelCurrentPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelCurrentPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWindowLevelCurrentPosition() :
      op->vtkInteractorStyleImage::GetWindowLevelCurrentPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleImage::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkInteractorStyleImage::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkInteractorStyleImage::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDown();
    }
    else
    {
      op->vtkInteractorStyleImage::OnMiddleButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonUp();
    }
    else
    {
      op->vtkInteractorStyleImage::OnMiddleButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDown();
    }
    else
    {
      op->vtkInteractorStyleImage::OnRightButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonUp();
    }
    else
    {
      op->vtkInteractorStyleImage::OnRightButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkInteractorStyleImage::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_WindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WindowLevel();
    }
    else
    {
      op->vtkInteractorStyleImage::WindowLevel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_Pick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Pick();
    }
    else
    {
      op->vtkInteractorStyleImage::Pick();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_Slice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Slice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Slice();
    }
    else
    {
      op->vtkInteractorStyleImage::Slice();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_StartWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartWindowLevel();
    }
    else
    {
      op->vtkInteractorStyleImage::StartWindowLevel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_EndWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndWindowLevel();
    }
    else
    {
      op->vtkInteractorStyleImage::EndWindowLevel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_StartPick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartPick();
    }
    else
    {
      op->vtkInteractorStyleImage::StartPick();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_EndPick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndPick();
    }
    else
    {
      op->vtkInteractorStyleImage::EndPick();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_StartSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartSlice();
    }
    else
    {
      op->vtkInteractorStyleImage::StartSlice();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_EndSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndSlice();
    }
    else
    {
      op->vtkInteractorStyleImage::EndSlice();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionMode(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetInteractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetInteractionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionModeMinValue() :
      op->vtkInteractorStyleImage::GetInteractionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetInteractionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionModeMaxValue() :
      op->vtkInteractorStyleImage::GetInteractionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionMode() :
      op->vtkInteractorStyleImage::GetInteractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetInteractionModeToImage2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionModeToImage2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionModeToImage2D();
    }
    else
    {
      op->vtkInteractorStyleImage::SetInteractionModeToImage2D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetInteractionModeToImage3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionModeToImage3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionModeToImage3D();
    }
    else
    {
      op->vtkInteractorStyleImage::SetInteractionModeToImage3D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetInteractionModeToImageSlicing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionModeToImageSlicing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionModeToImageSlicing();
    }
    else
    {
      op->vtkInteractorStyleImage::SetInteractionModeToImageSlicing();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetXViewRightVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetXViewRightVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleImage::SetXViewRightVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetXViewRightVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXViewRightVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetXViewRightVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetXViewRightVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInteractorStyleImage_SetXViewRightVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetXViewRightVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXViewRightVector");
  return nullptr;
}



static PyObject *
PyvtkInteractorStyleImage_GetXViewRightVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXViewRightVector() :
      op->vtkInteractorStyleImage::GetXViewRightVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetXViewUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetXViewUpVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleImage::SetXViewUpVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetXViewUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXViewUpVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetXViewUpVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetXViewUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInteractorStyleImage_SetXViewUpVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetXViewUpVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXViewUpVector");
  return nullptr;
}



static PyObject *
PyvtkInteractorStyleImage_GetXViewUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXViewUpVector() :
      op->vtkInteractorStyleImage::GetXViewUpVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetYViewRightVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetYViewRightVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleImage::SetYViewRightVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetYViewRightVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYViewRightVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetYViewRightVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetYViewRightVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInteractorStyleImage_SetYViewRightVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetYViewRightVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYViewRightVector");
  return nullptr;
}



static PyObject *
PyvtkInteractorStyleImage_GetYViewRightVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYViewRightVector() :
      op->vtkInteractorStyleImage::GetYViewRightVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetYViewUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetYViewUpVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleImage::SetYViewUpVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetYViewUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYViewUpVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetYViewUpVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetYViewUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInteractorStyleImage_SetYViewUpVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetYViewUpVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYViewUpVector");
  return nullptr;
}



static PyObject *
PyvtkInteractorStyleImage_GetYViewUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYViewUpVector() :
      op->vtkInteractorStyleImage::GetYViewUpVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetZViewRightVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetZViewRightVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleImage::SetZViewRightVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetZViewRightVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZViewRightVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetZViewRightVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetZViewRightVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInteractorStyleImage_SetZViewRightVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetZViewRightVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZViewRightVector");
  return nullptr;
}



static PyObject *
PyvtkInteractorStyleImage_GetZViewRightVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetZViewRightVector() :
      op->vtkInteractorStyleImage::GetZViewRightVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetZViewUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetZViewUpVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleImage::SetZViewUpVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetZViewUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZViewUpVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetZViewUpVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetZViewUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInteractorStyleImage_SetZViewUpVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetZViewUpVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZViewUpVector");
  return nullptr;
}



static PyObject *
PyvtkInteractorStyleImage_GetZViewUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetZViewUpVector() :
      op->vtkInteractorStyleImage::GetZViewUpVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetImageOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetImageOrientation(temp0, temp1);
    }
    else
    {
      op->vtkInteractorStyleImage::SetImageOrientation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetCurrentImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentImageNumber(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetCurrentImageNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetCurrentImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentImageNumber() :
      op->vtkInteractorStyleImage::GetCurrentImageNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetCurrentImageProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentImageProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageProperty *tempr = (ap.IsBound() ?
      op->GetCurrentImageProperty() :
      op->vtkInteractorStyleImage::GetCurrentImageProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleImage_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleImage_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleImage_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleImage_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInteractorStyleImage\nC++: static vtkInteractorStyleImage *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleImage_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInteractorStyleImage\nC++: vtkInteractorStyleImage *NewInstance()\n\n"},
  {"GetWindowLevelStartPosition", PyvtkInteractorStyleImage_GetWindowLevelStartPosition, METH_VARARGS,
   "V.GetWindowLevelStartPosition() -> (int, int)\nC++: int *GetWindowLevelStartPosition()\n\n"},
  {"GetWindowLevelCurrentPosition", PyvtkInteractorStyleImage_GetWindowLevelCurrentPosition, METH_VARARGS,
   "V.GetWindowLevelCurrentPosition() -> (int, int)\nC++: int *GetWindowLevelCurrentPosition()\n\n"},
  {"OnMouseMove", PyvtkInteractorStyleImage_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove()\nC++: void OnMouseMove() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeftButtonDown", PyvtkInteractorStyleImage_OnLeftButtonDown, METH_VARARGS,
   "V.OnLeftButtonDown()\nC++: void OnLeftButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeftButtonUp", PyvtkInteractorStyleImage_OnLeftButtonUp, METH_VARARGS,
   "V.OnLeftButtonUp()\nC++: void OnLeftButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnMiddleButtonDown", PyvtkInteractorStyleImage_OnMiddleButtonDown, METH_VARARGS,
   "V.OnMiddleButtonDown()\nC++: void OnMiddleButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnMiddleButtonUp", PyvtkInteractorStyleImage_OnMiddleButtonUp, METH_VARARGS,
   "V.OnMiddleButtonUp()\nC++: void OnMiddleButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnRightButtonDown", PyvtkInteractorStyleImage_OnRightButtonDown, METH_VARARGS,
   "V.OnRightButtonDown()\nC++: void OnRightButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnRightButtonUp", PyvtkInteractorStyleImage_OnRightButtonUp, METH_VARARGS,
   "V.OnRightButtonUp()\nC++: void OnRightButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnChar", PyvtkInteractorStyleImage_OnChar, METH_VARARGS,
   "V.OnChar()\nC++: void OnChar() override;\n\nOverride the \"fly-to\" (f keypress) for images.\n"},
  {"WindowLevel", PyvtkInteractorStyleImage_WindowLevel, METH_VARARGS,
   "V.WindowLevel()\nC++: virtual void WindowLevel()\n\n"},
  {"Pick", PyvtkInteractorStyleImage_Pick, METH_VARARGS,
   "V.Pick()\nC++: virtual void Pick()\n\n"},
  {"Slice", PyvtkInteractorStyleImage_Slice, METH_VARARGS,
   "V.Slice()\nC++: virtual void Slice()\n\n"},
  {"StartWindowLevel", PyvtkInteractorStyleImage_StartWindowLevel, METH_VARARGS,
   "V.StartWindowLevel()\nC++: virtual void StartWindowLevel()\n\n"},
  {"EndWindowLevel", PyvtkInteractorStyleImage_EndWindowLevel, METH_VARARGS,
   "V.EndWindowLevel()\nC++: virtual void EndWindowLevel()\n\n"},
  {"StartPick", PyvtkInteractorStyleImage_StartPick, METH_VARARGS,
   "V.StartPick()\nC++: virtual void StartPick()\n\n"},
  {"EndPick", PyvtkInteractorStyleImage_EndPick, METH_VARARGS,
   "V.EndPick()\nC++: virtual void EndPick()\n\n"},
  {"StartSlice", PyvtkInteractorStyleImage_StartSlice, METH_VARARGS,
   "V.StartSlice()\nC++: virtual void StartSlice()\n\n"},
  {"EndSlice", PyvtkInteractorStyleImage_EndSlice, METH_VARARGS,
   "V.EndSlice()\nC++: virtual void EndSlice()\n\n"},
  {"SetInteractionMode", PyvtkInteractorStyleImage_SetInteractionMode, METH_VARARGS,
   "V.SetInteractionMode(int)\nC++: virtual void SetInteractionMode(int _arg)\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {"GetInteractionModeMinValue", PyvtkInteractorStyleImage_GetInteractionModeMinValue, METH_VARARGS,
   "V.GetInteractionModeMinValue() -> int\nC++: virtual int GetInteractionModeMinValue()\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {"GetInteractionModeMaxValue", PyvtkInteractorStyleImage_GetInteractionModeMaxValue, METH_VARARGS,
   "V.GetInteractionModeMaxValue() -> int\nC++: virtual int GetInteractionModeMaxValue()\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {"GetInteractionMode", PyvtkInteractorStyleImage_GetInteractionMode, METH_VARARGS,
   "V.GetInteractionMode() -> int\nC++: virtual int GetInteractionMode()\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {"SetInteractionModeToImage2D", PyvtkInteractorStyleImage_SetInteractionModeToImage2D, METH_VARARGS,
   "V.SetInteractionModeToImage2D()\nC++: void SetInteractionModeToImage2D()\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {"SetInteractionModeToImage3D", PyvtkInteractorStyleImage_SetInteractionModeToImage3D, METH_VARARGS,
   "V.SetInteractionModeToImage3D()\nC++: void SetInteractionModeToImage3D()\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {"SetInteractionModeToImageSlicing", PyvtkInteractorStyleImage_SetInteractionModeToImageSlicing, METH_VARARGS,
   "V.SetInteractionModeToImageSlicing()\nC++: void SetInteractionModeToImageSlicing()\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {"SetXViewRightVector", PyvtkInteractorStyleImage_SetXViewRightVector, METH_VARARGS,
   "V.SetXViewRightVector(float, float, float)\nC++: void SetXViewRightVector(double, double, double)\nV.SetXViewRightVector((float, float, float))\nC++: void SetXViewRightVector(double a[3])\n\n"},
  {"GetXViewRightVector", PyvtkInteractorStyleImage_GetXViewRightVector, METH_VARARGS,
   "V.GetXViewRightVector() -> (float, float, float)\nC++: double *GetXViewRightVector()\n\n"},
  {"SetXViewUpVector", PyvtkInteractorStyleImage_SetXViewUpVector, METH_VARARGS,
   "V.SetXViewUpVector(float, float, float)\nC++: void SetXViewUpVector(double, double, double)\nV.SetXViewUpVector((float, float, float))\nC++: void SetXViewUpVector(double a[3])\n\n"},
  {"GetXViewUpVector", PyvtkInteractorStyleImage_GetXViewUpVector, METH_VARARGS,
   "V.GetXViewUpVector() -> (float, float, float)\nC++: double *GetXViewUpVector()\n\n"},
  {"SetYViewRightVector", PyvtkInteractorStyleImage_SetYViewRightVector, METH_VARARGS,
   "V.SetYViewRightVector(float, float, float)\nC++: void SetYViewRightVector(double, double, double)\nV.SetYViewRightVector((float, float, float))\nC++: void SetYViewRightVector(double a[3])\n\n"},
  {"GetYViewRightVector", PyvtkInteractorStyleImage_GetYViewRightVector, METH_VARARGS,
   "V.GetYViewRightVector() -> (float, float, float)\nC++: double *GetYViewRightVector()\n\n"},
  {"SetYViewUpVector", PyvtkInteractorStyleImage_SetYViewUpVector, METH_VARARGS,
   "V.SetYViewUpVector(float, float, float)\nC++: void SetYViewUpVector(double, double, double)\nV.SetYViewUpVector((float, float, float))\nC++: void SetYViewUpVector(double a[3])\n\n"},
  {"GetYViewUpVector", PyvtkInteractorStyleImage_GetYViewUpVector, METH_VARARGS,
   "V.GetYViewUpVector() -> (float, float, float)\nC++: double *GetYViewUpVector()\n\n"},
  {"SetZViewRightVector", PyvtkInteractorStyleImage_SetZViewRightVector, METH_VARARGS,
   "V.SetZViewRightVector(float, float, float)\nC++: void SetZViewRightVector(double, double, double)\nV.SetZViewRightVector((float, float, float))\nC++: void SetZViewRightVector(double a[3])\n\n"},
  {"GetZViewRightVector", PyvtkInteractorStyleImage_GetZViewRightVector, METH_VARARGS,
   "V.GetZViewRightVector() -> (float, float, float)\nC++: double *GetZViewRightVector()\n\n"},
  {"SetZViewUpVector", PyvtkInteractorStyleImage_SetZViewUpVector, METH_VARARGS,
   "V.SetZViewUpVector(float, float, float)\nC++: void SetZViewUpVector(double, double, double)\nV.SetZViewUpVector((float, float, float))\nC++: void SetZViewUpVector(double a[3])\n\n"},
  {"GetZViewUpVector", PyvtkInteractorStyleImage_GetZViewUpVector, METH_VARARGS,
   "V.GetZViewUpVector() -> (float, float, float)\nC++: double *GetZViewUpVector()\n\n"},
  {"SetImageOrientation", PyvtkInteractorStyleImage_SetImageOrientation, METH_VARARGS,
   "V.SetImageOrientation((float, float, float), (float, float, float)\n    )\nC++: void SetImageOrientation(const double leftToRight[3],\n    const double bottomToTop[3])\n\nSet the view orientation, in terms of the horizontal and vertical\ndirections of the computer screen.  The first vector gives the\ndirection that will correspond to moving horizontally\nleft-to-right across the screen, and the second vector gives the\ndirection that will correspond to moving bottom-to-top up the\nscreen.  This method changes the position of the camera to\nprovide the desired view.\n"},
  {"SetCurrentImageNumber", PyvtkInteractorStyleImage_SetCurrentImageNumber, METH_VARARGS,
   "V.SetCurrentImageNumber(int)\nC++: virtual void SetCurrentImageNumber(int i)\n\nSet the image to use for WindowLevel interaction. Any images for\nwhich the Pickable flag is off are ignored. Images are counted\nback-to-front, so 0 is the rearmost image. Negative values can be\nused to count front-to-back, so -1 is the frontmost image, -2 is\nthe image behind that one, etc. The default is to use the\nfrontmost image for interaction. If the specified image does not\nexist, then no WindowLevel interaction will take place.\n"},
  {"GetCurrentImageNumber", PyvtkInteractorStyleImage_GetCurrentImageNumber, METH_VARARGS,
   "V.GetCurrentImageNumber() -> int\nC++: int GetCurrentImageNumber()\n\n"},
  {"GetCurrentImageProperty", PyvtkInteractorStyleImage_GetCurrentImageProperty, METH_VARARGS,
   "V.GetCurrentImageProperty() -> vtkImageProperty\nC++: vtkImageProperty *GetCurrentImageProperty()\n\nGet the current image property, which is set when\nStartWindowLevel is called immediately before\nStartWindowLevelEvent is generated. This is the image property of\nthe topmost vtkImageSlice in the renderer or nullptr if no image\nactors are present.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInteractorStyleImage_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionStylePython.vtkInteractorStyleImage", // tp_name
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
  PyvtkInteractorStyleImage_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleImage_StaticNew()
{
  return vtkInteractorStyleImage::New();
}

PyObject *PyvtkInteractorStyleImage_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInteractorStyleImage_Type, PyvtkInteractorStyleImage_Methods,
    "vtkInteractorStyleImage",
 &PyvtkInteractorStyleImage_StaticNew);

  PyTypeObject *pytype = &PyvtkInteractorStyleImage_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyleTrackballCamera_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyleImage(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleImage_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleImage", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTKIS_WINDOW_LEVEL", 1024 },
        { "VTKIS_SLICE", 1025 },
        { "VTKIS_IMAGE2D", 2 },
        { "VTKIS_IMAGE3D", 3 },
        { "VTKIS_IMAGE_SLICING", 4 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

