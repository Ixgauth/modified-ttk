// python wrapper for vtkInteractorStyleFlight
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
#include "vtkInteractorStyleFlight.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleFlight(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInteractorStyleFlight_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyle_ClassNew
extern "C" { PyObject *PyvtkInteractorStyle_ClassNew(); }
#define DECLARED_PyvtkInteractorStyle_ClassNew
#endif

static const char *PyvtkInteractorStyleFlight_Doc =
  "vtkInteractorStyleFlight - provides flight motion routines\n\n"
  "Superclass: vtkInteractorStyle\n\n"
  "Left  mouse button press produces forward motion. Right mouse button\n"
  "press produces reverse motion. Moving mouse during motion steers user\n"
  "in desired direction. Keyboard controls are: Left/Right/Up/Down\n"
  "Arrows for steering direction 'A' forward, 'Z' reverse motion Ctrl\n"
  "Key causes sidestep instead of steering in mouse and key modes Shift\n"
  "key is accelerator in mouse and key modes Ctrl and Shift together\n"
  "causes Roll in mouse and key modes\n\n"
  "By default, one \"step\" of motion corresponds to 1/250th of the\n"
  "diagonal of bounding box of visible actors, '+' and '-' keys allow\n"
  "user to increase or decrease step size.\n\n";


static PyObject *
PyvtkInteractorStyleFlight_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleFlight::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleFlight::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleFlight *tempr = vtkInteractorStyleFlight::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleFlight *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleFlight::NewInstance());

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
PyvtkInteractorStyleFlight_JumpTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->JumpTo(temp0, temp1);
    }
    else
    {
      op->vtkInteractorStyleFlight::JumpTo(temp0, temp1);
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
PyvtkInteractorStyleFlight_SetMotionStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMotionStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMotionStepSize(temp0);
    }
    else
    {
      op->vtkInteractorStyleFlight::SetMotionStepSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetMotionStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMotionStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMotionStepSize() :
      op->vtkInteractorStyleFlight::GetMotionStepSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_SetMotionAccelerationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMotionAccelerationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMotionAccelerationFactor(temp0);
    }
    else
    {
      op->vtkInteractorStyleFlight::SetMotionAccelerationFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetMotionAccelerationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMotionAccelerationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMotionAccelerationFactor() :
      op->vtkInteractorStyleFlight::GetMotionAccelerationFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_SetAngleStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngleStepSize(temp0);
    }
    else
    {
      op->vtkInteractorStyleFlight::SetAngleStepSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetAngleStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleStepSize() :
      op->vtkInteractorStyleFlight::GetAngleStepSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_SetAngleAccelerationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleAccelerationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngleAccelerationFactor(temp0);
    }
    else
    {
      op->vtkInteractorStyleFlight::SetAngleAccelerationFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetAngleAccelerationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleAccelerationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleAccelerationFactor() :
      op->vtkInteractorStyleFlight::GetAngleAccelerationFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_SetDisableMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisableMotion(temp0);
    }
    else
    {
      op->vtkInteractorStyleFlight::SetDisableMotion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetDisableMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisableMotion() :
      op->vtkInteractorStyleFlight::GetDisableMotion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_DisableMotionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableMotionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableMotionOn();
    }
    else
    {
      op->vtkInteractorStyleFlight::DisableMotionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_DisableMotionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableMotionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableMotionOff();
    }
    else
    {
      op->vtkInteractorStyleFlight::DisableMotionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_SetRestoreUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestoreUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRestoreUpVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleFlight::SetRestoreUpVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetRestoreUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestoreUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRestoreUpVector() :
      op->vtkInteractorStyleFlight::GetRestoreUpVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_RestoreUpVectorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreUpVectorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestoreUpVectorOn();
    }
    else
    {
      op->vtkInteractorStyleFlight::RestoreUpVectorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_RestoreUpVectorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreUpVectorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestoreUpVectorOff();
    }
    else
    {
      op->vtkInteractorStyleFlight::RestoreUpVectorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_GetDefaultUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDefaultUpVector() :
      op->vtkInteractorStyleFlight::GetDefaultUpVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_SetDefaultUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultUpVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleFlight::SetDefaultUpVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleFlight::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkInteractorStyleFlight::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkInteractorStyleFlight::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDown();
    }
    else
    {
      op->vtkInteractorStyleFlight::OnMiddleButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonUp();
    }
    else
    {
      op->vtkInteractorStyleFlight::OnMiddleButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDown();
    }
    else
    {
      op->vtkInteractorStyleFlight::OnRightButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonUp();
    }
    else
    {
      op->vtkInteractorStyleFlight::OnRightButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkInteractorStyleFlight::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnKeyDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnKeyDown();
    }
    else
    {
      op->vtkInteractorStyleFlight::OnKeyDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnKeyUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnKeyUp();
    }
    else
    {
      op->vtkInteractorStyleFlight::OnKeyUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_OnTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnTimer();
    }
    else
    {
      op->vtkInteractorStyleFlight::OnTimer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_ForwardFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForwardFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForwardFly();
    }
    else
    {
      op->vtkInteractorStyleFlight::ForwardFly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_ReverseFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseFly();
    }
    else
    {
      op->vtkInteractorStyleFlight::ReverseFly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_StartForwardFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartForwardFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartForwardFly();
    }
    else
    {
      op->vtkInteractorStyleFlight::StartForwardFly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_EndForwardFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndForwardFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndForwardFly();
    }
    else
    {
      op->vtkInteractorStyleFlight::EndForwardFly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_StartReverseFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartReverseFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartReverseFly();
    }
    else
    {
      op->vtkInteractorStyleFlight::StartReverseFly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleFlight_EndReverseFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndReverseFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleFlight *op = static_cast<vtkInteractorStyleFlight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndReverseFly();
    }
    else
    {
      op->vtkInteractorStyleFlight::EndReverseFly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleFlight_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleFlight_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleFlight_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleFlight_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInteractorStyleFlight\nC++: static vtkInteractorStyleFlight *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleFlight_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInteractorStyleFlight\nC++: vtkInteractorStyleFlight *NewInstance()\n\n"},
  {"JumpTo", PyvtkInteractorStyleFlight_JumpTo, METH_VARARGS,
   "V.JumpTo([float, float, float], [float, float, float])\nC++: void JumpTo(double campos[3], double focpos[3])\n\nMove the Eye/Camera to a specific location (no intermediate steps\nare taken\n"},
  {"SetMotionStepSize", PyvtkInteractorStyleFlight_SetMotionStepSize, METH_VARARGS,
   "V.SetMotionStepSize(float)\nC++: virtual void SetMotionStepSize(double _arg)\n\nSet the basic unit step size : by default 1/250 of bounding\ndiagonal\n"},
  {"GetMotionStepSize", PyvtkInteractorStyleFlight_GetMotionStepSize, METH_VARARGS,
   "V.GetMotionStepSize() -> float\nC++: virtual double GetMotionStepSize()\n\nSet the basic unit step size : by default 1/250 of bounding\ndiagonal\n"},
  {"SetMotionAccelerationFactor", PyvtkInteractorStyleFlight_SetMotionAccelerationFactor, METH_VARARGS,
   "V.SetMotionAccelerationFactor(float)\nC++: virtual void SetMotionAccelerationFactor(double _arg)\n\nSet acceleration factor when shift key is applied : default 10\n"},
  {"GetMotionAccelerationFactor", PyvtkInteractorStyleFlight_GetMotionAccelerationFactor, METH_VARARGS,
   "V.GetMotionAccelerationFactor() -> float\nC++: virtual double GetMotionAccelerationFactor()\n\nSet acceleration factor when shift key is applied : default 10\n"},
  {"SetAngleStepSize", PyvtkInteractorStyleFlight_SetAngleStepSize, METH_VARARGS,
   "V.SetAngleStepSize(float)\nC++: virtual void SetAngleStepSize(double _arg)\n\nSet the basic angular unit for turning : default 1 degree\n"},
  {"GetAngleStepSize", PyvtkInteractorStyleFlight_GetAngleStepSize, METH_VARARGS,
   "V.GetAngleStepSize() -> float\nC++: virtual double GetAngleStepSize()\n\nSet the basic angular unit for turning : default 1 degree\n"},
  {"SetAngleAccelerationFactor", PyvtkInteractorStyleFlight_SetAngleAccelerationFactor, METH_VARARGS,
   "V.SetAngleAccelerationFactor(float)\nC++: virtual void SetAngleAccelerationFactor(double _arg)\n\nSet angular acceleration when shift key is applied : default 5\n"},
  {"GetAngleAccelerationFactor", PyvtkInteractorStyleFlight_GetAngleAccelerationFactor, METH_VARARGS,
   "V.GetAngleAccelerationFactor() -> float\nC++: virtual double GetAngleAccelerationFactor()\n\nSet angular acceleration when shift key is applied : default 5\n"},
  {"SetDisableMotion", PyvtkInteractorStyleFlight_SetDisableMotion, METH_VARARGS,
   "V.SetDisableMotion(int)\nC++: virtual void SetDisableMotion(vtkTypeBool _arg)\n\nDisable motion (temporarily - for viewing etc)\n"},
  {"GetDisableMotion", PyvtkInteractorStyleFlight_GetDisableMotion, METH_VARARGS,
   "V.GetDisableMotion() -> int\nC++: virtual vtkTypeBool GetDisableMotion()\n\nDisable motion (temporarily - for viewing etc)\n"},
  {"DisableMotionOn", PyvtkInteractorStyleFlight_DisableMotionOn, METH_VARARGS,
   "V.DisableMotionOn()\nC++: virtual void DisableMotionOn()\n\nDisable motion (temporarily - for viewing etc)\n"},
  {"DisableMotionOff", PyvtkInteractorStyleFlight_DisableMotionOff, METH_VARARGS,
   "V.DisableMotionOff()\nC++: virtual void DisableMotionOff()\n\nDisable motion (temporarily - for viewing etc)\n"},
  {"SetRestoreUpVector", PyvtkInteractorStyleFlight_SetRestoreUpVector, METH_VARARGS,
   "V.SetRestoreUpVector(int)\nC++: virtual void SetRestoreUpVector(vtkTypeBool _arg)\n\nWhen flying, apply a restorative force to the \"Up\" vector. This\nis activated when the current 'up' is close to the actual 'up'\n(as defined in DefaultUpVector). This prevents excessive twisting\nforces when viewing from arbitrary angles, but keep the horizon\nlevel when the user is flying over terrain.\n"},
  {"GetRestoreUpVector", PyvtkInteractorStyleFlight_GetRestoreUpVector, METH_VARARGS,
   "V.GetRestoreUpVector() -> int\nC++: virtual vtkTypeBool GetRestoreUpVector()\n\nWhen flying, apply a restorative force to the \"Up\" vector. This\nis activated when the current 'up' is close to the actual 'up'\n(as defined in DefaultUpVector). This prevents excessive twisting\nforces when viewing from arbitrary angles, but keep the horizon\nlevel when the user is flying over terrain.\n"},
  {"RestoreUpVectorOn", PyvtkInteractorStyleFlight_RestoreUpVectorOn, METH_VARARGS,
   "V.RestoreUpVectorOn()\nC++: virtual void RestoreUpVectorOn()\n\nWhen flying, apply a restorative force to the \"Up\" vector. This\nis activated when the current 'up' is close to the actual 'up'\n(as defined in DefaultUpVector). This prevents excessive twisting\nforces when viewing from arbitrary angles, but keep the horizon\nlevel when the user is flying over terrain.\n"},
  {"RestoreUpVectorOff", PyvtkInteractorStyleFlight_RestoreUpVectorOff, METH_VARARGS,
   "V.RestoreUpVectorOff()\nC++: virtual void RestoreUpVectorOff()\n\nWhen flying, apply a restorative force to the \"Up\" vector. This\nis activated when the current 'up' is close to the actual 'up'\n(as defined in DefaultUpVector). This prevents excessive twisting\nforces when viewing from arbitrary angles, but keep the horizon\nlevel when the user is flying over terrain.\n"},
  {"GetDefaultUpVector", PyvtkInteractorStyleFlight_GetDefaultUpVector, METH_VARARGS,
   "V.GetDefaultUpVector() -> (float, float, float)\nC++: double *GetDefaultUpVector()\n\n"},
  {"SetDefaultUpVector", PyvtkInteractorStyleFlight_SetDefaultUpVector, METH_VARARGS,
   "V.SetDefaultUpVector((float, float, float))\nC++: void SetDefaultUpVector(double a[3])\n\n"},
  {"OnMouseMove", PyvtkInteractorStyleFlight_OnMouseMove, METH_VARARGS,
   "V.OnMouseMove()\nC++: void OnMouseMove() override;\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {"OnLeftButtonDown", PyvtkInteractorStyleFlight_OnLeftButtonDown, METH_VARARGS,
   "V.OnLeftButtonDown()\nC++: void OnLeftButtonDown() override;\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {"OnLeftButtonUp", PyvtkInteractorStyleFlight_OnLeftButtonUp, METH_VARARGS,
   "V.OnLeftButtonUp()\nC++: void OnLeftButtonUp() override;\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {"OnMiddleButtonDown", PyvtkInteractorStyleFlight_OnMiddleButtonDown, METH_VARARGS,
   "V.OnMiddleButtonDown()\nC++: void OnMiddleButtonDown() override;\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {"OnMiddleButtonUp", PyvtkInteractorStyleFlight_OnMiddleButtonUp, METH_VARARGS,
   "V.OnMiddleButtonUp()\nC++: void OnMiddleButtonUp() override;\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {"OnRightButtonDown", PyvtkInteractorStyleFlight_OnRightButtonDown, METH_VARARGS,
   "V.OnRightButtonDown()\nC++: void OnRightButtonDown() override;\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {"OnRightButtonUp", PyvtkInteractorStyleFlight_OnRightButtonUp, METH_VARARGS,
   "V.OnRightButtonUp()\nC++: void OnRightButtonUp() override;\n\nConcrete implementation of Mouse event bindings for flight\n"},
  {"OnChar", PyvtkInteractorStyleFlight_OnChar, METH_VARARGS,
   "V.OnChar()\nC++: void OnChar() override;\n\nConcrete implementation of Keyboard event bindings for flight\n"},
  {"OnKeyDown", PyvtkInteractorStyleFlight_OnKeyDown, METH_VARARGS,
   "V.OnKeyDown()\nC++: void OnKeyDown() override;\n\nConcrete implementation of Keyboard event bindings for flight\n"},
  {"OnKeyUp", PyvtkInteractorStyleFlight_OnKeyUp, METH_VARARGS,
   "V.OnKeyUp()\nC++: void OnKeyUp() override;\n\nConcrete implementation of Keyboard event bindings for flight\n"},
  {"OnTimer", PyvtkInteractorStyleFlight_OnTimer, METH_VARARGS,
   "V.OnTimer()\nC++: void OnTimer() override;\n\nConcrete implementation of Keyboard event bindings for flight\n"},
  {"ForwardFly", PyvtkInteractorStyleFlight_ForwardFly, METH_VARARGS,
   "V.ForwardFly()\nC++: virtual void ForwardFly()\n\n"},
  {"ReverseFly", PyvtkInteractorStyleFlight_ReverseFly, METH_VARARGS,
   "V.ReverseFly()\nC++: virtual void ReverseFly()\n\n"},
  {"StartForwardFly", PyvtkInteractorStyleFlight_StartForwardFly, METH_VARARGS,
   "V.StartForwardFly()\nC++: virtual void StartForwardFly()\n\n"},
  {"EndForwardFly", PyvtkInteractorStyleFlight_EndForwardFly, METH_VARARGS,
   "V.EndForwardFly()\nC++: virtual void EndForwardFly()\n\n"},
  {"StartReverseFly", PyvtkInteractorStyleFlight_StartReverseFly, METH_VARARGS,
   "V.StartReverseFly()\nC++: virtual void StartReverseFly()\n\n"},
  {"EndReverseFly", PyvtkInteractorStyleFlight_EndReverseFly, METH_VARARGS,
   "V.EndReverseFly()\nC++: virtual void EndReverseFly()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInteractorStyleFlight_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionStylePython.vtkInteractorStyleFlight", // tp_name
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
  PyvtkInteractorStyleFlight_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleFlight_StaticNew()
{
  return vtkInteractorStyleFlight::New();
}

PyObject *PyvtkInteractorStyleFlight_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInteractorStyleFlight_Type, PyvtkInteractorStyleFlight_Methods,
    "vtkInteractorStyleFlight",
 &PyvtkInteractorStyleFlight_StaticNew);

  PyTypeObject *pytype = &PyvtkInteractorStyleFlight_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyle_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyleFlight(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleFlight_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleFlight", o) != 0)
  {
    Py_DECREF(o);
  }

}

