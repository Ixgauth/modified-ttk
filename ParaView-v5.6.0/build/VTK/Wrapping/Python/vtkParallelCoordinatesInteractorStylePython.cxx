// python wrapper for vtkParallelCoordinatesInteractorStyle
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
#include "vtkParallelCoordinatesInteractorStyle.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParallelCoordinatesInteractorStyle(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkParallelCoordinatesInteractorStyle_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
extern "C" { PyObject *PyvtkInteractorStyleTrackballCamera_ClassNew(); }
#define DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
#endif

static const char *PyvtkParallelCoordinatesInteractorStyle_Doc =
  "vtkParallelCoordinatesInteractorStyle - interactive manipulation of\nthe camera specialized for parallel coordinates\n\n"
  "Superclass: vtkInteractorStyleTrackballCamera\n\n"
  "vtkParallelCoordinatesInteractorStyle allows the user to\n"
  "interactively manipulate (rotate, pan, zoom etc.) the camera. Several\n"
  "events are overloaded from its superclass\n"
  "vtkInteractorStyleTrackballCamera, hence the mouse bindings are\n"
  "different. (The bindings keep the camera's view plane normal\n"
  "perpendicular to the x-y plane.) In summary, the mouse events are as\n"
  "follows: + Left Mouse button triggers window level events + CTRL Left\n"
  "Mouse spins the camera around its view plane normal + SHIFT Left\n"
  "Mouse pans the camera + CTRL SHIFT Left Mouse dollys (a positional\n"
  "zoom) the camera + Middle mouse button pans the camera + Right mouse\n"
  "button dollys the camera. + SHIFT Right Mouse triggers pick events\n\n"
  "Note that the renderer's actors are not moved; instead the camera is\n"
  "moved.\n\n"
  "@sa\n"
  "vtkInteractorStyle vtkInteractorStyleTrackballActor\n"
  "vtkInteractorStyleJoystickCamera vtkInteractorStyleJoystickActor\n\n";


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParallelCoordinatesInteractorStyle::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelCoordinatesInteractorStyle::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParallelCoordinatesInteractorStyle *tempr = vtkParallelCoordinatesInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelCoordinatesInteractorStyle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelCoordinatesInteractorStyle::NewInstance());

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
PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCursorStartPosition() :
      op->vtkParallelCoordinatesInteractorStyle::GetCursorStartPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  vtkViewport *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetCursorStartPosition(temp0, temp1);
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::GetCursorStartPosition(temp0, temp1);
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
PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition_s1(self, args);
    case 2:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCursorStartPosition");
  return nullptr;
}



static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorCurrentPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCursorCurrentPosition() :
      op->vtkParallelCoordinatesInteractorStyle::GetCursorCurrentPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorCurrentPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  vtkViewport *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetCursorCurrentPosition(temp0, temp1);
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::GetCursorCurrentPosition(temp0, temp1);
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
PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition_s1(self, args);
    case 2:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCursorCurrentPosition");
  return nullptr;
}



static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorLastPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCursorLastPosition() :
      op->vtkParallelCoordinatesInteractorStyle::GetCursorLastPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorLastPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  vtkViewport *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetCursorLastPosition(temp0, temp1);
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::GetCursorLastPosition(temp0, temp1);
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
PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition_s1(self, args);
    case 2:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCursorLastPosition");
  return nullptr;
}



static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDown();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnMiddleButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonUp();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnMiddleButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDown();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnRightButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonUp();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnRightButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnLeave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeave();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnLeave();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_StartInspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartInspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->StartInspect(temp0, temp1);
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::StartInspect(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_Inspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Inspect(temp0, temp1);
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::Inspect(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_EndInspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndInspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndInspect();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::EndInspect();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_StartZoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartZoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartZoom();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::StartZoom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_Zoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Zoom();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::Zoom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_EndZoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndZoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndZoom();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::EndZoom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_StartPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartPan();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::StartPan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Pan();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::Pan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_EndPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndPan();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::EndPan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParallelCoordinatesInteractorStyle_Methods[] = {
  {"IsTypeOf", PyvtkParallelCoordinatesInteractorStyle_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParallelCoordinatesInteractorStyle_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParallelCoordinatesInteractorStyle_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkParallelCoordinatesInteractorStyle\nC++: static vtkParallelCoordinatesInteractorStyle *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParallelCoordinatesInteractorStyle_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkParallelCoordinatesInteractorStyle\nC++: vtkParallelCoordinatesInteractorStyle *NewInstance()\n\n"},
  {"GetCursorStartPosition", PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition, METH_VARARGS,
   "V.GetCursorStartPosition() -> (int, int)\nC++: int *GetCursorStartPosition()\nV.GetCursorStartPosition(vtkViewport, [float, float])\nC++: void GetCursorStartPosition(vtkViewport *viewport,\n    double pos[2])\n\n"},
  {"GetCursorCurrentPosition", PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition, METH_VARARGS,
   "V.GetCursorCurrentPosition() -> (int, int)\nC++: int *GetCursorCurrentPosition()\nV.GetCursorCurrentPosition(vtkViewport, [float, float])\nC++: void GetCursorCurrentPosition(vtkViewport *viewport,\n    double pos[2])\n\n"},
  {"GetCursorLastPosition", PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition, METH_VARARGS,
   "V.GetCursorLastPosition() -> (int, int)\nC++: int *GetCursorLastPosition()\nV.GetCursorLastPosition(vtkViewport, [float, float])\nC++: void GetCursorLastPosition(vtkViewport *viewport,\n    double pos[2])\n\n"},
  {"OnMouseMove", PyvtkParallelCoordinatesInteractorStyle_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove()\nC++: void OnMouseMove() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeftButtonDown", PyvtkParallelCoordinatesInteractorStyle_OnLeftButtonDown, METH_VARARGS,
   "V.OnLeftButtonDown()\nC++: void OnLeftButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeftButtonUp", PyvtkParallelCoordinatesInteractorStyle_OnLeftButtonUp, METH_VARARGS,
   "V.OnLeftButtonUp()\nC++: void OnLeftButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnMiddleButtonDown", PyvtkParallelCoordinatesInteractorStyle_OnMiddleButtonDown, METH_VARARGS,
   "V.OnMiddleButtonDown()\nC++: void OnMiddleButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnMiddleButtonUp", PyvtkParallelCoordinatesInteractorStyle_OnMiddleButtonUp, METH_VARARGS,
   "V.OnMiddleButtonUp()\nC++: void OnMiddleButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnRightButtonDown", PyvtkParallelCoordinatesInteractorStyle_OnRightButtonDown, METH_VARARGS,
   "V.OnRightButtonDown()\nC++: void OnRightButtonDown() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnRightButtonUp", PyvtkParallelCoordinatesInteractorStyle_OnRightButtonUp, METH_VARARGS,
   "V.OnRightButtonUp()\nC++: void OnRightButtonUp() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeave", PyvtkParallelCoordinatesInteractorStyle_OnLeave, METH_VARARGS,
   "V.OnLeave()\nC++: void OnLeave() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"StartInspect", PyvtkParallelCoordinatesInteractorStyle_StartInspect, METH_VARARGS,
   "V.StartInspect(int, int)\nC++: virtual void StartInspect(int x, int y)\n\n"},
  {"Inspect", PyvtkParallelCoordinatesInteractorStyle_Inspect, METH_VARARGS,
   "V.Inspect(int, int)\nC++: virtual void Inspect(int x, int y)\n\n"},
  {"EndInspect", PyvtkParallelCoordinatesInteractorStyle_EndInspect, METH_VARARGS,
   "V.EndInspect()\nC++: virtual void EndInspect()\n\n"},
  {"StartZoom", PyvtkParallelCoordinatesInteractorStyle_StartZoom, METH_VARARGS,
   "V.StartZoom()\nC++: void StartZoom() override;\n\nInteraction mode entry points used internally.\n"},
  {"Zoom", PyvtkParallelCoordinatesInteractorStyle_Zoom, METH_VARARGS,
   "V.Zoom()\nC++: void Zoom() override;\n\n"},
  {"EndZoom", PyvtkParallelCoordinatesInteractorStyle_EndZoom, METH_VARARGS,
   "V.EndZoom()\nC++: void EndZoom() override;\n\nInteraction mode entry points used internally.\n"},
  {"StartPan", PyvtkParallelCoordinatesInteractorStyle_StartPan, METH_VARARGS,
   "V.StartPan()\nC++: void StartPan() override;\n\nInteraction mode entry points used internally.\n"},
  {"Pan", PyvtkParallelCoordinatesInteractorStyle_Pan, METH_VARARGS,
   "V.Pan()\nC++: void Pan() override;\n\n"},
  {"EndPan", PyvtkParallelCoordinatesInteractorStyle_EndPan, METH_VARARGS,
   "V.EndPan()\nC++: void EndPan() override;\n\nInteraction mode entry points used internally.\n"},
  {"OnChar", PyvtkParallelCoordinatesInteractorStyle_OnChar, METH_VARARGS,
   "V.OnChar()\nC++: void OnChar() override;\n\nOverride the \"fly-to\" (f keypress) for images.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkParallelCoordinatesInteractorStyle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionStylePython.vtkParallelCoordinatesInteractorStyle", // tp_name
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
  PyvtkParallelCoordinatesInteractorStyle_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParallelCoordinatesInteractorStyle_StaticNew()
{
  return vtkParallelCoordinatesInteractorStyle::New();
}

PyObject *PyvtkParallelCoordinatesInteractorStyle_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkParallelCoordinatesInteractorStyle_Type, PyvtkParallelCoordinatesInteractorStyle_Methods,
    "vtkParallelCoordinatesInteractorStyle",
 &PyvtkParallelCoordinatesInteractorStyle_StaticNew);

  PyTypeObject *pytype = &PyvtkParallelCoordinatesInteractorStyle_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyleTrackballCamera_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "INTERACT_HOVER", vtkParallelCoordinatesInteractorStyle::INTERACT_HOVER },
        { "INTERACT_INSPECT", vtkParallelCoordinatesInteractorStyle::INTERACT_INSPECT },
        { "INTERACT_ZOOM", vtkParallelCoordinatesInteractorStyle::INTERACT_ZOOM },
        { "INTERACT_PAN", vtkParallelCoordinatesInteractorStyle::INTERACT_PAN },
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

void PyVTKAddFile_vtkParallelCoordinatesInteractorStyle(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParallelCoordinatesInteractorStyle_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParallelCoordinatesInteractorStyle", o) != 0)
  {
    Py_DECREF(o);
  }

}

