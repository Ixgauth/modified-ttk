// python wrapper for vtkViewport
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
#include "vtkViewport.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkViewport(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkViewport_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkViewport_Doc =
  "vtkViewport - abstract specification for Viewports\n\n"
  "Superclass: vtkObject\n\n"
  "vtkViewport provides an abstract specification for Viewports. A\n"
  "Viewport is an object that controls the rendering process for\n"
  "objects. Rendering is the process of converting geometry, a\n"
  "specification for lights, and a camera view into an image.\n"
  "vtkViewport also performs coordinate transformation between world\n"
  "coordinates, view coordinates (the computer graphics rendering\n"
  "coordinate system), and display coordinates (the actual screen\n"
  "coordinates on the display device). Certain advanced rendering\n"
  "features such as two-sided lighting can also be controlled.\n\n"
  "@sa\n"
  "vtkWindow vtkRenderer\n\n";


static PyObject *
PyvtkViewport_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkViewport::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkViewport::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkViewport *tempr = vtkViewport::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewport *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkViewport::NewInstance());

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
PyvtkViewport_AddViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->AddViewProp(temp0);
    }
    else
    {
      op->vtkViewport::AddViewProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetViewProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPropCollection *tempr = (ap.IsBound() ?
      op->GetViewProps() :
      op->vtkViewport::GetViewProps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_HasViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    int tempr = (ap.IsBound() ?
      op->HasViewProp(temp0) :
      op->vtkViewport::HasViewProp(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_RemoveViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->RemoveViewProp(temp0);
    }
    else
    {
      op->vtkViewport::RemoveViewProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_RemoveAllViewProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllViewProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllViewProps();
    }
    else
    {
      op->vtkViewport::RemoveAllViewProps();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_AddActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->AddActor2D(temp0);
    }
    else
    {
      op->vtkViewport::AddActor2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_RemoveActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->RemoveActor2D(temp0);
    }
    else
    {
      op->vtkViewport::RemoveActor2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2DCollection *tempr = (ap.IsBound() ?
      op->GetActors2D() :
      op->vtkViewport::GetActors2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_SetBackground_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->SetBackground(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewport::SetBackground(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetBackground_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackground(temp0);
    }
    else
    {
      op->vtkViewport::SetBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetBackground(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewport_SetBackground_s1(self, args);
    case 1:
      return PyvtkViewport_SetBackground_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackground");
  return nullptr;
}



static PyObject *
PyvtkViewport_GetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackground() :
      op->vtkViewport::GetBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_SetBackground2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->SetBackground2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewport::SetBackground2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetBackground2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackground2(temp0);
    }
    else
    {
      op->vtkViewport::SetBackground2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetBackground2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewport_SetBackground2_s1(self, args);
    case 1:
      return PyvtkViewport_SetBackground2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackground2");
  return nullptr;
}



static PyObject *
PyvtkViewport_GetBackground2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackground2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackground2() :
      op->vtkViewport::GetBackground2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_SetBackgroundAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundAlpha(temp0);
    }
    else
    {
      op->vtkViewport::SetBackgroundAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetBackgroundAlphaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundAlphaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundAlphaMinValue() :
      op->vtkViewport::GetBackgroundAlphaMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetBackgroundAlphaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundAlphaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundAlphaMaxValue() :
      op->vtkViewport::GetBackgroundAlphaMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetBackgroundAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundAlpha() :
      op->vtkViewport::GetBackgroundAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_SetGradientBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGradientBackground(temp0);
    }
    else
    {
      op->vtkViewport::SetGradientBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetGradientBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGradientBackground() :
      op->vtkViewport::GetGradientBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GradientBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GradientBackgroundOn();
    }
    else
    {
      op->vtkViewport::GradientBackgroundOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GradientBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GradientBackgroundOff();
    }
    else
    {
      op->vtkViewport::GradientBackgroundOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_SetAspect_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAspect(temp0, temp1);
    }
    else
    {
      op->vtkViewport::SetAspect(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetAspect_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAspect(temp0);
    }
    else
    {
      op->vtkViewport::SetAspect(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetAspect(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewport_SetAspect_s1(self, args);
    case 1:
      return PyvtkViewport_SetAspect_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAspect");
  return nullptr;
}



static PyObject *
PyvtkViewport_GetAspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAspect() :
      op->vtkViewport::GetAspect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_ComputeAspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeAspect();
    }
    else
    {
      op->vtkViewport::ComputeAspect();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_SetPixelAspect_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPixelAspect(temp0, temp1);
    }
    else
    {
      op->vtkViewport::SetPixelAspect(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetPixelAspect_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPixelAspect(temp0);
    }
    else
    {
      op->vtkViewport::SetPixelAspect(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetPixelAspect(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewport_SetPixelAspect_s1(self, args);
    case 1:
      return PyvtkViewport_SetPixelAspect_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPixelAspect");
  return nullptr;
}



static PyObject *
PyvtkViewport_GetPixelAspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPixelAspect() :
      op->vtkViewport::GetPixelAspect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_SetViewport_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetViewport(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkViewport::SetViewport(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetViewport_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetViewport(temp0);
    }
    else
    {
      op->vtkViewport::SetViewport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetViewport(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkViewport_SetViewport_s1(self, args);
    case 1:
      return PyvtkViewport_SetViewport_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetViewport");
  return nullptr;
}



static PyObject *
PyvtkViewport_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkViewport::GetViewport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_SetDisplayPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->SetDisplayPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewport::SetDisplayPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetDisplayPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayPoint(temp0);
    }
    else
    {
      op->vtkViewport::SetDisplayPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetDisplayPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewport_SetDisplayPoint_s1(self, args);
    case 1:
      return PyvtkViewport_SetDisplayPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDisplayPoint");
  return nullptr;
}



static PyObject *
PyvtkViewport_GetDisplayPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDisplayPoint() :
      op->vtkViewport::GetDisplayPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_SetViewPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->SetViewPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewport::SetViewPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetViewPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetViewPoint(temp0);
    }
    else
    {
      op->vtkViewport::SetViewPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetViewPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewport_SetViewPoint_s1(self, args);
    case 1:
      return PyvtkViewport_SetViewPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetViewPoint");
  return nullptr;
}



static PyObject *
PyvtkViewport_GetViewPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetViewPoint() :
      op->vtkViewport::GetViewPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_SetWorldPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetWorldPoint(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkViewport::SetWorldPoint(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetWorldPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWorldPoint(temp0);
    }
    else
    {
      op->vtkViewport::SetWorldPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_SetWorldPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkViewport_SetWorldPoint_s1(self, args);
    case 1:
      return PyvtkViewport_SetWorldPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWorldPoint");
  return nullptr;
}



static PyObject *
PyvtkViewport_GetWorldPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWorldPoint() :
      op->vtkViewport::GetWorldPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkViewport::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_IsInViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->IsInViewport(temp0, temp1) :
      op->vtkViewport::IsInViewport(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetVTKWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkWindow *tempr = op->GetVTKWindow();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_DisplayToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayToView();
    }
    else
    {
      op->vtkViewport::DisplayToView();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_ViewToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ViewToDisplay();
    }
    else
    {
      op->vtkViewport::ViewToDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_WorldToView_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WorldToView();
    }
    else
    {
      op->vtkViewport::WorldToView();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_WorldToView_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->WorldToView(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewport::WorldToView(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_WorldToView(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewport_WorldToView_s1(self, args);
    case 3:
      return PyvtkViewport_WorldToView_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "WorldToView");
  return nullptr;
}



static PyObject *
PyvtkViewport_ViewToWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ViewToWorld();
    }
    else
    {
      op->vtkViewport::ViewToWorld();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_ViewToWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->ViewToWorld(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewport::ViewToWorld(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_ViewToWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewport_ViewToWorld_s1(self, args);
    case 3:
      return PyvtkViewport_ViewToWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ViewToWorld");
  return nullptr;
}



static PyObject *
PyvtkViewport_DisplayToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayToWorld();
    }
    else
    {
      op->vtkViewport::DisplayToWorld();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_WorldToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WorldToDisplay();
    }
    else
    {
      op->vtkViewport::WorldToDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_LocalDisplayToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LocalDisplayToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->LocalDisplayToDisplay(temp0, temp1);
    }
    else
    {
      op->vtkViewport::LocalDisplayToDisplay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_DisplayToNormalizedDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayToNormalizedDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->DisplayToNormalizedDisplay(temp0, temp1);
    }
    else
    {
      op->vtkViewport::DisplayToNormalizedDisplay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_NormalizedDisplayToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizedDisplayToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->NormalizedDisplayToViewport(temp0, temp1);
    }
    else
    {
      op->vtkViewport::NormalizedDisplayToViewport(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_ViewportToNormalizedViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewportToNormalizedViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ViewportToNormalizedViewport(temp0, temp1);
    }
    else
    {
      op->vtkViewport::ViewportToNormalizedViewport(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_NormalizedViewportToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizedViewportToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->NormalizedViewportToView(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewport::NormalizedViewportToView(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_ViewToPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->ViewToPose(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewport::ViewToPose(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_PoseToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PoseToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->PoseToWorld(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewport::PoseToWorld(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_DisplayToLocalDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayToLocalDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->DisplayToLocalDisplay(temp0, temp1);
    }
    else
    {
      op->vtkViewport::DisplayToLocalDisplay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_NormalizedDisplayToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizedDisplayToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->NormalizedDisplayToDisplay(temp0, temp1);
    }
    else
    {
      op->vtkViewport::NormalizedDisplayToDisplay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_ViewportToNormalizedDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewportToNormalizedDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ViewportToNormalizedDisplay(temp0, temp1);
    }
    else
    {
      op->vtkViewport::ViewportToNormalizedDisplay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_NormalizedViewportToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizedViewportToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->NormalizedViewportToViewport(temp0, temp1);
    }
    else
    {
      op->vtkViewport::NormalizedViewportToViewport(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_ViewToNormalizedViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToNormalizedViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->ViewToNormalizedViewport(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewport::ViewToNormalizedViewport(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_PoseToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PoseToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->PoseToView(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewport::PoseToView(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_WorldToPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->WorldToPose(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewport::WorldToPose(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkViewport::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkViewport::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetTiledSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTiledSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTiledSize(temp0, temp1);
    }
    else
    {
      op->vtkViewport::GetTiledSize(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkViewport_GetTiledSizeAndOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTiledSizeAndOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->GetTiledSizeAndOrigin(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkViewport::GetTiledSizeAndOrigin(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_PickProp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAssemblyPath *tempr = op->PickProp(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_PickProp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkAssemblyPath *tempr = op->PickProp(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_PickProp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewport_PickProp_s1(self, args);
    case 4:
      return PyvtkViewport_PickProp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PickProp");
  return nullptr;
}



static PyObject *
PyvtkViewport_PickPropFrom_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickPropFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  vtkPropCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPropCollection"))
  {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->PickPropFrom(temp0, temp1, temp2) :
      op->vtkViewport::PickPropFrom(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_PickPropFrom_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickPropFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkPropCollection *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkPropCollection"))
  {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->PickPropFrom(temp0, temp1, temp2, temp3, temp4) :
      op->vtkViewport::PickPropFrom(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewport_PickPropFrom(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewport_PickPropFrom_s1(self, args);
    case 5:
      return PyvtkViewport_PickPropFrom_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PickPropFrom");
  return nullptr;
}



static PyObject *
PyvtkViewport_GetPickX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPickX() :
      op->vtkViewport::GetPickX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetPickY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPickY() :
      op->vtkViewport::GetPickY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetPickWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPickWidth() :
      op->vtkViewport::GetPickWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetPickHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPickHeight() :
      op->vtkViewport::GetPickHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetPickX1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickX1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPickX1() :
      op->vtkViewport::GetPickX1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetPickY1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickY1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPickY1() :
      op->vtkViewport::GetPickY1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetPickX2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickX2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPickX2() :
      op->vtkViewport::GetPickX2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetPickY2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickY2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPickY2() :
      op->vtkViewport::GetPickY2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetPickResultProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickResultProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPropCollection *tempr = (ap.IsBound() ?
      op->GetPickResultProps() :
      op->vtkViewport::GetPickResultProps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewport_GetPickedZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPickedZ() :
      op->vtkViewport::GetPickedZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkViewport_Methods[] = {
  {"IsTypeOf", PyvtkViewport_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkViewport_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkViewport_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkViewport\nC++: static vtkViewport *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkViewport_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkViewport\nC++: vtkViewport *NewInstance()\n\n"},
  {"AddViewProp", PyvtkViewport_AddViewProp, METH_VARARGS,
   "V.AddViewProp(vtkProp)\nC++: void AddViewProp(vtkProp *)\n\nAdd a prop to the list of props. Does nothing if the prop is\nalready present. Prop is the superclass of all actors, volumes,\n2D actors, composite props etc.\n"},
  {"GetViewProps", PyvtkViewport_GetViewProps, METH_VARARGS,
   "V.GetViewProps() -> vtkPropCollection\nC++: vtkPropCollection *GetViewProps()\n\nReturn any props in this viewport.\n"},
  {"HasViewProp", PyvtkViewport_HasViewProp, METH_VARARGS,
   "V.HasViewProp(vtkProp) -> int\nC++: int HasViewProp(vtkProp *)\n\nQuery if a prop is in the list of props.\n"},
  {"RemoveViewProp", PyvtkViewport_RemoveViewProp, METH_VARARGS,
   "V.RemoveViewProp(vtkProp)\nC++: void RemoveViewProp(vtkProp *)\n\nRemove a prop from the list of props. Does nothing if the prop is\nnot already present.\n"},
  {"RemoveAllViewProps", PyvtkViewport_RemoveAllViewProps, METH_VARARGS,
   "V.RemoveAllViewProps()\nC++: void RemoveAllViewProps(void)\n\nRemove all props from the list of props.\n"},
  {"AddActor2D", PyvtkViewport_AddActor2D, METH_VARARGS,
   "V.AddActor2D(vtkProp)\nC++: void AddActor2D(vtkProp *p)\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {"RemoveActor2D", PyvtkViewport_RemoveActor2D, METH_VARARGS,
   "V.RemoveActor2D(vtkProp)\nC++: void RemoveActor2D(vtkProp *p)\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {"GetActors2D", PyvtkViewport_GetActors2D, METH_VARARGS,
   "V.GetActors2D() -> vtkActor2DCollection\nC++: vtkActor2DCollection *GetActors2D()\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {"SetBackground", PyvtkViewport_SetBackground, METH_VARARGS,
   "V.SetBackground(float, float, float)\nC++: void SetBackground(double, double, double)\nV.SetBackground((float, float, float))\nC++: void SetBackground(double a[3])\n\n"},
  {"GetBackground", PyvtkViewport_GetBackground, METH_VARARGS,
   "V.GetBackground() -> (float, float, float)\nC++: double *GetBackground()\n\n"},
  {"SetBackground2", PyvtkViewport_SetBackground2, METH_VARARGS,
   "V.SetBackground2(float, float, float)\nC++: void SetBackground2(double, double, double)\nV.SetBackground2((float, float, float))\nC++: void SetBackground2(double a[3])\n\n"},
  {"GetBackground2", PyvtkViewport_GetBackground2, METH_VARARGS,
   "V.GetBackground2() -> (float, float, float)\nC++: double *GetBackground2()\n\n"},
  {"SetBackgroundAlpha", PyvtkViewport_SetBackgroundAlpha, METH_VARARGS,
   "V.SetBackgroundAlpha(float)\nC++: virtual void SetBackgroundAlpha(double _arg)\n\nSet/Get the alpha value used to fill the background with. By\ndefault, this is set to 0.0.\n"},
  {"GetBackgroundAlphaMinValue", PyvtkViewport_GetBackgroundAlphaMinValue, METH_VARARGS,
   "V.GetBackgroundAlphaMinValue() -> float\nC++: virtual double GetBackgroundAlphaMinValue()\n\nSet/Get the alpha value used to fill the background with. By\ndefault, this is set to 0.0.\n"},
  {"GetBackgroundAlphaMaxValue", PyvtkViewport_GetBackgroundAlphaMaxValue, METH_VARARGS,
   "V.GetBackgroundAlphaMaxValue() -> float\nC++: virtual double GetBackgroundAlphaMaxValue()\n\nSet/Get the alpha value used to fill the background with. By\ndefault, this is set to 0.0.\n"},
  {"GetBackgroundAlpha", PyvtkViewport_GetBackgroundAlpha, METH_VARARGS,
   "V.GetBackgroundAlpha() -> float\nC++: virtual double GetBackgroundAlpha()\n\nSet/Get the alpha value used to fill the background with. By\ndefault, this is set to 0.0.\n"},
  {"SetGradientBackground", PyvtkViewport_SetGradientBackground, METH_VARARGS,
   "V.SetGradientBackground(bool)\nC++: virtual void SetGradientBackground(bool _arg)\n\nSet/Get whether this viewport should have a gradient background\nusing the Background (bottom) and Background2 (top) colors.\nDefault is off.\n"},
  {"GetGradientBackground", PyvtkViewport_GetGradientBackground, METH_VARARGS,
   "V.GetGradientBackground() -> bool\nC++: virtual bool GetGradientBackground()\n\nSet/Get whether this viewport should have a gradient background\nusing the Background (bottom) and Background2 (top) colors.\nDefault is off.\n"},
  {"GradientBackgroundOn", PyvtkViewport_GradientBackgroundOn, METH_VARARGS,
   "V.GradientBackgroundOn()\nC++: virtual void GradientBackgroundOn()\n\nSet/Get whether this viewport should have a gradient background\nusing the Background (bottom) and Background2 (top) colors.\nDefault is off.\n"},
  {"GradientBackgroundOff", PyvtkViewport_GradientBackgroundOff, METH_VARARGS,
   "V.GradientBackgroundOff()\nC++: virtual void GradientBackgroundOff()\n\nSet/Get whether this viewport should have a gradient background\nusing the Background (bottom) and Background2 (top) colors.\nDefault is off.\n"},
  {"SetAspect", PyvtkViewport_SetAspect, METH_VARARGS,
   "V.SetAspect(float, float)\nC++: void SetAspect(double, double)\nV.SetAspect((float, float))\nC++: void SetAspect(double a[2])\n\n"},
  {"GetAspect", PyvtkViewport_GetAspect, METH_VARARGS,
   "V.GetAspect() -> (float, float)\nC++: double *GetAspect()\n\nSet the aspect ratio of the rendered image. This is computed\nautomatically and should not be set by the user.\n"},
  {"ComputeAspect", PyvtkViewport_ComputeAspect, METH_VARARGS,
   "V.ComputeAspect()\nC++: virtual void ComputeAspect()\n\nSet the aspect ratio of the rendered image. This is computed\nautomatically and should not be set by the user.\n"},
  {"SetPixelAspect", PyvtkViewport_SetPixelAspect, METH_VARARGS,
   "V.SetPixelAspect(float, float)\nC++: void SetPixelAspect(double, double)\nV.SetPixelAspect((float, float))\nC++: void SetPixelAspect(double a[2])\n\n"},
  {"GetPixelAspect", PyvtkViewport_GetPixelAspect, METH_VARARGS,
   "V.GetPixelAspect() -> (float, float)\nC++: double *GetPixelAspect()\n\nSet the aspect ratio of a pixel in the rendered image. This\nfactor permits the image to rendered anisotropically (i.e.,\nstretched in one direction or the other).\n"},
  {"SetViewport", PyvtkViewport_SetViewport, METH_VARARGS,
   "V.SetViewport(float, float, float, float)\nC++: void SetViewport(double, double, double, double)\nV.SetViewport((float, float, float, float))\nC++: void SetViewport(double a[4])\n\n"},
  {"GetViewport", PyvtkViewport_GetViewport, METH_VARARGS,
   "V.GetViewport() -> (float, float, float, float)\nC++: double *GetViewport()\n\nSpecify the viewport for the Viewport to draw in the rendering\nwindow. Coordinates are expressed as (xmin,ymin,xmax,ymax), where\neach coordinate is 0 <= coordinate <= 1.0.\n"},
  {"SetDisplayPoint", PyvtkViewport_SetDisplayPoint, METH_VARARGS,
   "V.SetDisplayPoint(float, float, float)\nC++: void SetDisplayPoint(double, double, double)\nV.SetDisplayPoint((float, float, float))\nC++: void SetDisplayPoint(double a[3])\n\n"},
  {"GetDisplayPoint", PyvtkViewport_GetDisplayPoint, METH_VARARGS,
   "V.GetDisplayPoint() -> (float, float, float)\nC++: double *GetDisplayPoint()\n\nSet/get a point location in display (or screen) coordinates. The\nlower left corner of the window is the origin and y increases as\nyou go up the screen.\n"},
  {"SetViewPoint", PyvtkViewport_SetViewPoint, METH_VARARGS,
   "V.SetViewPoint(float, float, float)\nC++: void SetViewPoint(double, double, double)\nV.SetViewPoint((float, float, float))\nC++: void SetViewPoint(double a[3])\n\n"},
  {"GetViewPoint", PyvtkViewport_GetViewPoint, METH_VARARGS,
   "V.GetViewPoint() -> (float, float, float)\nC++: double *GetViewPoint()\n\nSpecify a point location in view coordinates. The origin is in\nthe middle of the viewport and it extends from -1 to 1 in all\nthree dimensions.\n"},
  {"SetWorldPoint", PyvtkViewport_SetWorldPoint, METH_VARARGS,
   "V.SetWorldPoint(float, float, float, float)\nC++: void SetWorldPoint(double, double, double, double)\nV.SetWorldPoint((float, float, float, float))\nC++: void SetWorldPoint(double a[4])\n\n"},
  {"GetWorldPoint", PyvtkViewport_GetWorldPoint, METH_VARARGS,
   "V.GetWorldPoint() -> (float, float, float, float)\nC++: double *GetWorldPoint()\n\nSpecify a point location in world coordinates. This method takes\nhomogeneous coordinates.\n"},
  {"GetCenter", PyvtkViewport_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float)\nC++: virtual double *GetCenter()\n\nReturn the center of this viewport in display coordinates.\n"},
  {"IsInViewport", PyvtkViewport_IsInViewport, METH_VARARGS,
   "V.IsInViewport(int, int) -> int\nC++: virtual int IsInViewport(int x, int y)\n\nIs a given display point in this Viewport's viewport.\n"},
  {"GetVTKWindow", PyvtkViewport_GetVTKWindow, METH_VARARGS,
   "V.GetVTKWindow() -> vtkWindow\nC++: virtual vtkWindow *GetVTKWindow()\n\nReturn the vtkWindow that owns this vtkViewport.\n"},
  {"DisplayToView", PyvtkViewport_DisplayToView, METH_VARARGS,
   "V.DisplayToView()\nC++: virtual void DisplayToView()\n\nConvert display coordinates to view coordinates.\n"},
  {"ViewToDisplay", PyvtkViewport_ViewToDisplay, METH_VARARGS,
   "V.ViewToDisplay()\nC++: virtual void ViewToDisplay()\n\nConvert view coordinates to display coordinates.\n"},
  {"WorldToView", PyvtkViewport_WorldToView, METH_VARARGS,
   "V.WorldToView()\nC++: virtual void WorldToView()\nV.WorldToView(float, float, float)\nC++: virtual void WorldToView(double &, double &, double &)\n\nConvert world point coordinates to view coordinates.\n"},
  {"ViewToWorld", PyvtkViewport_ViewToWorld, METH_VARARGS,
   "V.ViewToWorld()\nC++: virtual void ViewToWorld()\nV.ViewToWorld(float, float, float)\nC++: virtual void ViewToWorld(double &, double &, double &)\n\nConvert view point coordinates to world coordinates.\n"},
  {"DisplayToWorld", PyvtkViewport_DisplayToWorld, METH_VARARGS,
   "V.DisplayToWorld()\nC++: void DisplayToWorld()\n\nConvert display (or screen) coordinates to world coordinates.\n"},
  {"WorldToDisplay", PyvtkViewport_WorldToDisplay, METH_VARARGS,
   "V.WorldToDisplay()\nC++: void WorldToDisplay()\n\nConvert world point coordinates to display (or screen)\ncoordinates.\n"},
  {"LocalDisplayToDisplay", PyvtkViewport_LocalDisplayToDisplay, METH_VARARGS,
   "V.LocalDisplayToDisplay(float, float)\nC++: virtual void LocalDisplayToDisplay(double &x, double &y)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"DisplayToNormalizedDisplay", PyvtkViewport_DisplayToNormalizedDisplay, METH_VARARGS,
   "V.DisplayToNormalizedDisplay(float, float)\nC++: virtual void DisplayToNormalizedDisplay(double &u, double &v)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"NormalizedDisplayToViewport", PyvtkViewport_NormalizedDisplayToViewport, METH_VARARGS,
   "V.NormalizedDisplayToViewport(float, float)\nC++: virtual void NormalizedDisplayToViewport(double &x,\n    double &y)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"ViewportToNormalizedViewport", PyvtkViewport_ViewportToNormalizedViewport, METH_VARARGS,
   "V.ViewportToNormalizedViewport(float, float)\nC++: virtual void ViewportToNormalizedViewport(double &u,\n    double &v)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"NormalizedViewportToView", PyvtkViewport_NormalizedViewportToView, METH_VARARGS,
   "V.NormalizedViewportToView(float, float, float)\nC++: virtual void NormalizedViewportToView(double &x, double &y,\n    double &z)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"ViewToPose", PyvtkViewport_ViewToPose, METH_VARARGS,
   "V.ViewToPose(float, float, float)\nC++: virtual void ViewToPose(double &, double &, double &)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"PoseToWorld", PyvtkViewport_PoseToWorld, METH_VARARGS,
   "V.PoseToWorld(float, float, float)\nC++: virtual void PoseToWorld(double &, double &, double &)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"DisplayToLocalDisplay", PyvtkViewport_DisplayToLocalDisplay, METH_VARARGS,
   "V.DisplayToLocalDisplay(float, float)\nC++: virtual void DisplayToLocalDisplay(double &x, double &y)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"NormalizedDisplayToDisplay", PyvtkViewport_NormalizedDisplayToDisplay, METH_VARARGS,
   "V.NormalizedDisplayToDisplay(float, float)\nC++: virtual void NormalizedDisplayToDisplay(double &u, double &v)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"ViewportToNormalizedDisplay", PyvtkViewport_ViewportToNormalizedDisplay, METH_VARARGS,
   "V.ViewportToNormalizedDisplay(float, float)\nC++: virtual void ViewportToNormalizedDisplay(double &x,\n    double &y)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"NormalizedViewportToViewport", PyvtkViewport_NormalizedViewportToViewport, METH_VARARGS,
   "V.NormalizedViewportToViewport(float, float)\nC++: virtual void NormalizedViewportToViewport(double &u,\n    double &v)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"ViewToNormalizedViewport", PyvtkViewport_ViewToNormalizedViewport, METH_VARARGS,
   "V.ViewToNormalizedViewport(float, float, float)\nC++: virtual void ViewToNormalizedViewport(double &x, double &y,\n    double &z)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"PoseToView", PyvtkViewport_PoseToView, METH_VARARGS,
   "V.PoseToView(float, float, float)\nC++: virtual void PoseToView(double &, double &, double &)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"WorldToPose", PyvtkViewport_WorldToPose, METH_VARARGS,
   "V.WorldToPose(float, float, float)\nC++: virtual void WorldToPose(double &, double &, double &)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {"GetSize", PyvtkViewport_GetSize, METH_VARARGS,
   "V.GetSize() -> (int, int)\nC++: virtual int *GetSize()\n\nGet the size and origin of the viewport in display coordinates.\nNote: if the window has not yet been realized, GetSize() and\nGetOrigin() return (0,0).\n"},
  {"GetOrigin", PyvtkViewport_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (int, int)\nC++: virtual int *GetOrigin()\n\nGet the size and origin of the viewport in display coordinates.\nNote: if the window has not yet been realized, GetSize() and\nGetOrigin() return (0,0).\n"},
  {"GetTiledSize", PyvtkViewport_GetTiledSize, METH_VARARGS,
   "V.GetTiledSize([int, ...], [int, ...])\nC++: void GetTiledSize(int *width, int *height)\n\nGet the size and origin of the viewport in display coordinates.\nNote: if the window has not yet been realized, GetSize() and\nGetOrigin() return (0,0).\n"},
  {"GetTiledSizeAndOrigin", PyvtkViewport_GetTiledSizeAndOrigin, METH_VARARGS,
   "V.GetTiledSizeAndOrigin([int, ...], [int, ...], [int, ...], [int,\n    ...])\nC++: virtual void GetTiledSizeAndOrigin(int *width, int *height,\n    int *lowerLeftX, int *lowerLeftY)\n\nGet the size and origin of the viewport in display coordinates.\nNote: if the window has not yet been realized, GetSize() and\nGetOrigin() return (0,0).\n"},
  {"PickProp", PyvtkViewport_PickProp, METH_VARARGS,
   "V.PickProp(float, float) -> vtkAssemblyPath\nC++: virtual vtkAssemblyPath *PickProp(double selectionX,\n    double selectionY)\nV.PickProp(float, float, float, float) -> vtkAssemblyPath\nC++: virtual vtkAssemblyPath *PickProp(double selectionX1,\n    double selectionY1, double selectionX2, double selectionY2)\n\nReturn the Prop that has the highest z value at the given x, y\nposition in the viewport.  Basically, the top most prop that\nrenders the pixel at selectionX, selectionY will be returned.  If\nno Props are there NULL is returned.  This method selects from\nthe Viewports Prop list.\n"},
  {"PickPropFrom", PyvtkViewport_PickPropFrom, METH_VARARGS,
   "V.PickPropFrom(float, float, vtkPropCollection) -> vtkAssemblyPath\nC++: vtkAssemblyPath *PickPropFrom(double selectionX,\n    double selectionY, vtkPropCollection *)\nV.PickPropFrom(float, float, float, float, vtkPropCollection)\n    -> vtkAssemblyPath\nC++: vtkAssemblyPath *PickPropFrom(double selectionX1,\n    double selectionY1, double selectionX2, double selectionY2,\n    vtkPropCollection *)\n\nSame as PickProp with two arguments, but selects from the given\ncollection of Props instead of the Renderers props.  Make sure\nthe Props in the collection are in this renderer.\n"},
  {"GetPickX", PyvtkViewport_GetPickX, METH_VARARGS,
   "V.GetPickX() -> float\nC++: double GetPickX()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {"GetPickY", PyvtkViewport_GetPickY, METH_VARARGS,
   "V.GetPickY() -> float\nC++: double GetPickY()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {"GetPickWidth", PyvtkViewport_GetPickWidth, METH_VARARGS,
   "V.GetPickWidth() -> float\nC++: double GetPickWidth()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {"GetPickHeight", PyvtkViewport_GetPickHeight, METH_VARARGS,
   "V.GetPickHeight() -> float\nC++: double GetPickHeight()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {"GetPickX1", PyvtkViewport_GetPickX1, METH_VARARGS,
   "V.GetPickX1() -> float\nC++: double GetPickX1()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {"GetPickY1", PyvtkViewport_GetPickY1, METH_VARARGS,
   "V.GetPickY1() -> float\nC++: double GetPickY1()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {"GetPickX2", PyvtkViewport_GetPickX2, METH_VARARGS,
   "V.GetPickX2() -> float\nC++: double GetPickX2()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {"GetPickY2", PyvtkViewport_GetPickY2, METH_VARARGS,
   "V.GetPickY2() -> float\nC++: double GetPickY2()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {"GetPickResultProps", PyvtkViewport_GetPickResultProps, METH_VARARGS,
   "V.GetPickResultProps() -> vtkPropCollection\nC++: virtual vtkPropCollection *GetPickResultProps()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {"GetPickedZ", PyvtkViewport_GetPickedZ, METH_VARARGS,
   "V.GetPickedZ() -> float\nC++: virtual double GetPickedZ()\n\nReturn the Z value for the last picked Prop.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkViewport_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkViewport", // tp_name
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
  PyvtkViewport_Doc, // tp_doc
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

PyObject *PyvtkViewport_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkViewport_Type, PyvtkViewport_Methods,
    "vtkViewport",
 nullptr);

  PyTypeObject *pytype = &PyvtkViewport_Type;

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

void PyVTKAddFile_vtkViewport(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkViewport_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkViewport", o) != 0)
  {
    Py_DECREF(o);
  }

}

