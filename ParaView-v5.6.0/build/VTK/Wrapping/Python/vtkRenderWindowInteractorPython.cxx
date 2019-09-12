// python wrapper for vtkRenderWindowInteractor
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
#include "vtkRenderWindowInteractor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderWindowInteractor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRenderWindowInteractor_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkRenderWindowInteractor_Doc =
  "vtkRenderWindowInteractor - platform-independent render window\ninteraction including picking and frame rate control.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkRenderWindowInteractor provides a platform-independent interaction\n"
  "mechanism for mouse/key/time events. It serves as a base class for\n"
  "platform-dependent implementations that handle routing of\n"
  "mouse/key/timer messages to vtkInteractorObserver and its subclasses.\n"
  "vtkRenderWindowInteractor also provides controls for picking,\n"
  "rendering frame rate, and headlights.\n\n"
  "vtkRenderWindowInteractor has changed from previous implementations\n"
  "and now serves only as a shell to hold user preferences and route\n"
  "messages to vtkInteractorStyle. Callbacks are available for many\n"
  "events.  Platform specific subclasses should provide methods for\n"
  "manipulating timers, TerminateApp, and an event loop if required via\n"
  "Initialize/Start/Enable/Disable.\n\n"
  "@warning\n"
  "vtkRenderWindowInteractor routes events through VTK's\n"
  "command/observer design pattern. That is, when\n"
  "vtkRenderWindowInteractor (actually, one of its subclasses) sees a\n"
  "platform-dependent event, it translates this into a VTK event using\n"
  "the InvokeEvent() method. Then any vtkInteractorObservers registered\n"
  "for that event are expected to respond as appropriate.\n\n"
  "@sa\n"
  "vtkInteractorObserver\n\n";


static PyObject *
PyvtkRenderWindowInteractor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderWindowInteractor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderWindowInteractor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderWindowInteractor *tempr = vtkRenderWindowInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderWindowInteractor::NewInstance());

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
PyvtkRenderWindowInteractor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkRenderWindowInteractor::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ReInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReInitialize();
    }
    else
    {
      op->vtkRenderWindowInteractor::ReInitialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Start();
    }
    else
    {
      op->vtkRenderWindowInteractor::Start();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Enable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Enable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Enable();
    }
    else
    {
      op->vtkRenderWindowInteractor::Enable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Disable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Disable();
    }
    else
    {
      op->vtkRenderWindowInteractor::Disable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkRenderWindowInteractor::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EnableRenderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableRenderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableRenderOn();
    }
    else
    {
      op->vtkRenderWindowInteractor::EnableRenderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EnableRenderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableRenderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableRenderOff();
    }
    else
    {
      op->vtkRenderWindowInteractor::EnableRenderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEnableRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableRender(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEnableRender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEnableRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableRender() :
      op->vtkRenderWindowInteractor::GetEnableRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetRenderWindow(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkRenderWindowInteractor::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_UpdateSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateSize(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::UpdateSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CreateTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CreateTimer(temp0) :
      op->vtkRenderWindowInteractor::CreateTimer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_DestroyTimer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DestroyTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->DestroyTimer() :
      op->vtkRenderWindowInteractor::DestroyTimer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_DestroyTimer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DestroyTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->DestroyTimer(temp0) :
      op->vtkRenderWindowInteractor::DestroyTimer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_DestroyTimer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderWindowInteractor_DestroyTimer_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_DestroyTimer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DestroyTimer");
  return nullptr;
}



static PyObject *
PyvtkRenderWindowInteractor_CreateRepeatingTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateRepeatingTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CreateRepeatingTimer(temp0) :
      op->vtkRenderWindowInteractor::CreateRepeatingTimer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CreateOneShotTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOneShotTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CreateOneShotTimer(temp0) :
      op->vtkRenderWindowInteractor::CreateOneShotTimer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_IsOneShotTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOneShotTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsOneShotTimer(temp0) :
      op->vtkRenderWindowInteractor::IsOneShotTimer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerDuration_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDuration(temp0) :
      op->vtkRenderWindowInteractor::GetTimerDuration(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_GetTimerDuration_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDuration() :
      op->vtkRenderWindowInteractor::GetTimerDuration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_GetTimerDuration(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderWindowInteractor_GetTimerDuration_s1(self, args);
    case 0:
      return PyvtkRenderWindowInteractor_GetTimerDuration_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTimerDuration");
  return nullptr;
}



static PyObject *
PyvtkRenderWindowInteractor_ResetTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ResetTimer(temp0) :
      op->vtkRenderWindowInteractor::ResetTimer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetVTKTimerId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKTimerId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVTKTimerId(temp0) :
      op->vtkRenderWindowInteractor::GetVTKTimerId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimerDuration(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetTimerDuration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerDurationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDurationMinValue() :
      op->vtkRenderWindowInteractor::GetTimerDurationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerDurationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTimerDurationMaxValue() :
      op->vtkRenderWindowInteractor::GetTimerDurationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimerEventId(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetTimerEventId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventId() :
      op->vtkRenderWindowInteractor::GetTimerEventId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimerEventType(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetTimerEventType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventType() :
      op->vtkRenderWindowInteractor::GetTimerEventType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimerEventDuration(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetTimerEventDuration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventDuration() :
      op->vtkRenderWindowInteractor::GetTimerEventDuration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventPlatformId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventPlatformId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimerEventPlatformId(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetTimerEventPlatformId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventPlatformId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventPlatformId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerEventPlatformId() :
      op->vtkRenderWindowInteractor::GetTimerEventPlatformId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_TerminateApp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TerminateApp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TerminateApp();
    }
    else
    {
      op->vtkRenderWindowInteractor::TerminateApp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkInteractorObserver *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInteractorObserver"))
  {
    if (ap.IsBound())
    {
      op->SetInteractorStyle(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetInteractorStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorObserver *tempr = (ap.IsBound() ?
      op->GetInteractorStyle() :
      op->vtkRenderWindowInteractor::GetInteractorStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetLightFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLightFollowCamera(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetLightFollowCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLightFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLightFollowCamera() :
      op->vtkRenderWindowInteractor::GetLightFollowCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LightFollowCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightFollowCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LightFollowCameraOn();
    }
    else
    {
      op->vtkRenderWindowInteractor::LightFollowCameraOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LightFollowCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightFollowCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LightFollowCameraOff();
    }
    else
    {
      op->vtkRenderWindowInteractor::LightFollowCameraOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDesiredUpdateRate(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetDesiredUpdateRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDesiredUpdateRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDesiredUpdateRateMinValue() :
      op->vtkRenderWindowInteractor::GetDesiredUpdateRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDesiredUpdateRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDesiredUpdateRateMaxValue() :
      op->vtkRenderWindowInteractor::GetDesiredUpdateRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDesiredUpdateRate() :
      op->vtkRenderWindowInteractor::GetDesiredUpdateRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetStillUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStillUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStillUpdateRate(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetStillUpdateRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetStillUpdateRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillUpdateRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStillUpdateRateMinValue() :
      op->vtkRenderWindowInteractor::GetStillUpdateRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetStillUpdateRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillUpdateRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStillUpdateRateMaxValue() :
      op->vtkRenderWindowInteractor::GetStillUpdateRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetStillUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStillUpdateRate() :
      op->vtkRenderWindowInteractor::GetStillUpdateRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInitialized() :
      op->vtkRenderWindowInteractor::GetInitialized());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkAbstractPicker *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker"))
  {
    if (ap.IsBound())
    {
      op->SetPicker(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetPicker(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPicker *tempr = (ap.IsBound() ?
      op->GetPicker() :
      op->vtkRenderWindowInteractor::GetPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CreateDefaultPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPropPicker *tempr = (ap.IsBound() ?
      op->CreateDefaultPicker() :
      op->vtkRenderWindowInteractor::CreateDefaultPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetPickingManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickingManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkPickingManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPickingManager"))
  {
    if (ap.IsBound())
    {
      op->SetPickingManager(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetPickingManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPickingManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickingManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPickingManager *tempr = (ap.IsBound() ?
      op->GetPickingManager() :
      op->vtkRenderWindowInteractor::GetPickingManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ExitCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExitCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExitCallback();
    }
    else
    {
      op->vtkRenderWindowInteractor::ExitCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_UserCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserCallback();
    }
    else
    {
      op->vtkRenderWindowInteractor::UserCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_StartPickCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPickCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartPickCallback();
    }
    else
    {
      op->vtkRenderWindowInteractor::StartPickCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EndPickCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPickCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndPickCallback();
    }
    else
    {
      op->vtkRenderWindowInteractor::EndPickCallback();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetMousePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMousePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

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
      op->GetMousePosition(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::GetMousePosition(temp0, temp1);
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
PyvtkRenderWindowInteractor_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideCursor();
    }
    else
    {
      op->vtkRenderWindowInteractor::HideCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowCursor();
    }
    else
    {
      op->vtkRenderWindowInteractor::ShowCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkRenderWindowInteractor::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FlyTo_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->FlyTo(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkRenderWindowInteractor::FlyTo(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_FlyTo_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->FlyTo(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::FlyTo(temp0, temp1);
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
PyvtkRenderWindowInteractor_FlyTo(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkRenderWindowInteractor_FlyTo_s1(self, args);
    case 2:
      return PyvtkRenderWindowInteractor_FlyTo_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FlyTo");
  return nullptr;
}



static PyObject *
PyvtkRenderWindowInteractor_FlyToImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = nullptr;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->FlyToImage(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRenderWindowInteractor::FlyToImage(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_FlyToImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->FlyToImage(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::FlyToImage(temp0, temp1);
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
PyvtkRenderWindowInteractor_FlyToImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRenderWindowInteractor_FlyToImage_s1(self, args);
    case 2:
      return PyvtkRenderWindowInteractor_FlyToImage_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FlyToImage");
  return nullptr;
}



static PyObject *
PyvtkRenderWindowInteractor_SetNumberOfFlyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFlyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfFlyFrames(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetNumberOfFlyFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFlyFramesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFlyFramesMinValue() :
      op->vtkRenderWindowInteractor::GetNumberOfFlyFramesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFlyFramesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFlyFramesMaxValue() :
      op->vtkRenderWindowInteractor::GetNumberOfFlyFramesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetNumberOfFlyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFlyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFlyFrames() :
      op->vtkRenderWindowInteractor::GetNumberOfFlyFrames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetDolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDolly(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetDolly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDolly() :
      op->vtkRenderWindowInteractor::GetDolly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetEventPosition() :
      op->vtkRenderWindowInteractor::GetEventPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLastEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetLastEventPosition() :
      op->vtkRenderWindowInteractor::GetLastEventPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetLastEventPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLastEventPosition(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetLastEventPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetLastEventPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLastEventPosition(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetLastEventPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetLastEventPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRenderWindowInteractor_SetLastEventPosition_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetLastEventPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLastEventPosition");
  return nullptr;
}



static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEventPosition(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetEventPosition(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0);
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
PyvtkRenderWindowInteractor_SetEventPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetEventPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetEventPosition(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0, temp1);
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

static PyMethodDef PyvtkRenderWindowInteractor_SetEventPosition_Methods[] = {
  {nullptr, PyvtkRenderWindowInteractor_SetEventPosition_s1, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkRenderWindowInteractor_SetEventPosition_s4, METH_VARARGS,
   "@Pi *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindowInteractor_SetEventPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderWindowInteractor_SetEventPosition_s2(self, args);
    case 3:
      return PyvtkRenderWindowInteractor_SetEventPosition_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEventPosition");
  return nullptr;
}



static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEventPositionFlipY(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetEventPositionFlipY(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0);
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
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetEventPositionFlipY(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetEventPositionFlipY(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0, temp1);
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

static PyMethodDef PyvtkRenderWindowInteractor_SetEventPositionFlipY_Methods[] = {
  {nullptr, PyvtkRenderWindowInteractor_SetEventPositionFlipY_s1, METH_VARARGS,
   "@ii"},
  {nullptr, PyvtkRenderWindowInteractor_SetEventPositionFlipY_s4, METH_VARARGS,
   "@Pi *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindowInteractor_SetEventPositionFlipY_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderWindowInteractor_SetEventPositionFlipY_s2(self, args);
    case 3:
      return PyvtkRenderWindowInteractor_SetEventPositionFlipY_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEventPositionFlipY");
  return nullptr;
}



static PyObject *
PyvtkRenderWindowInteractor_GetEventPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetEventPositions(temp0) :
      op->vtkRenderWindowInteractor::GetEventPositions(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLastEventPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastEventPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetLastEventPositions(temp0) :
      op->vtkRenderWindowInteractor::GetLastEventPositions(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetAltKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAltKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAltKey(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetAltKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetAltKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAltKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAltKey() :
      op->vtkRenderWindowInteractor::GetAltKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetControlKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetControlKey(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetControlKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetControlKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetControlKey() :
      op->vtkRenderWindowInteractor::GetControlKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetShiftKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShiftKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShiftKey(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetShiftKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetShiftKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShiftKey() :
      op->vtkRenderWindowInteractor::GetShiftKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyCode(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetKeyCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetKeyCode() :
      op->vtkRenderWindowInteractor::GetKeyCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepeatCount(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetRepeatCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepeatCount() :
      op->vtkRenderWindowInteractor::GetRepeatCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeySym(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetKeySym(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetKeySym() :
      op->vtkRenderWindowInteractor::GetKeySym());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetPointerIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointerIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointerIndex(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetPointerIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPointerIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointerIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointerIndex() :
      op->vtkRenderWindowInteractor::GetPointerIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotation(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetRotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotation() :
      op->vtkRenderWindowInteractor::GetRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLastRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLastRotation() :
      op->vtkRenderWindowInteractor::GetLastRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkRenderWindowInteractor::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLastScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLastScale() :
      op->vtkRenderWindowInteractor::GetLastScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetTranslation(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetTranslation(temp0);
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
PyvtkRenderWindowInteractor_GetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTranslation() :
      op->vtkRenderWindowInteractor::GetTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLastTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLastTranslation() :
      op->vtkRenderWindowInteractor::GetLastTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEventInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  char temp4;
  int temp5;
  const char *temp6 = nullptr;
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    if (ap.IsBound())
    {
      op->SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int temp3 = 0;
  char temp4 = 0;
  int temp5 = 0;
  const char *temp6 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    if (ap.IsBound())
    {
      op->SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return PyvtkRenderWindowInteractor_SetEventInformation_s1(self, args);
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return PyvtkRenderWindowInteractor_SetEventInformation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEventInformation");
  return nullptr;
}



static PyObject *
PyvtkRenderWindowInteractor_SetEventInformationFlipY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformationFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  char temp4;
  int temp5;
  const char *temp6 = nullptr;
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    if (ap.IsBound())
    {
      op->SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventInformationFlipY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformationFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int temp3 = 0;
  char temp4 = 0;
  int temp5 = 0;
  const char *temp6 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    if (ap.IsBound())
    {
      op->SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventInformationFlipY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return PyvtkRenderWindowInteractor_SetEventInformationFlipY_s1(self, args);
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return PyvtkRenderWindowInteractor_SetEventInformationFlipY_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEventInformationFlipY");
  return nullptr;
}



static PyObject *
PyvtkRenderWindowInteractor_SetKeyEventInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyEventInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0 = 0;
  int temp1 = 0;
  char temp2 = 0;
  int temp3 = 0;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->SetKeyEventInformation(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetKeyEventInformation(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRenderWindowInteractor_SetSize_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}



static PyObject *
PyvtkRenderWindowInteractor_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkRenderWindowInteractor::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEventSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEventSize(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetEventSize(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetEventSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRenderWindowInteractor_SetEventSize_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetEventSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEventSize");
  return nullptr;
}



static PyObject *
PyvtkRenderWindowInteractor_GetEventSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetEventSize() :
      op->vtkRenderWindowInteractor::GetEventSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FindPokedRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPokedRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->FindPokedRenderer(temp0, temp1) :
      op->vtkRenderWindowInteractor::FindPokedRenderer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetObserverMediator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObserverMediator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObserverMediator *tempr = (ap.IsBound() ?
      op->GetObserverMediator() :
      op->vtkRenderWindowInteractor::GetObserverMediator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetUseTDx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTDx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseTDx(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetUseTDx(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetUseTDx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTDx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseTDx() :
      op->vtkRenderWindowInteractor::GetUseTDx());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MouseMoveEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::MouseMoveEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_RightButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::RightButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_RightButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::RightButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LeftButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeftButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::LeftButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LeftButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeftButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::LeftButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MiddleButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MiddleButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MiddleButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::MiddleButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MiddleButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MiddleButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MiddleButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::MiddleButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseWheelForwardEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelForwardEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MouseWheelForwardEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::MouseWheelForwardEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseWheelBackwardEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelBackwardEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MouseWheelBackwardEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::MouseWheelBackwardEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ExposeEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExposeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExposeEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::ExposeEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ConfigureEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConfigureEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConfigureEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::ConfigureEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EnterEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnterEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnterEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::EnterEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LeaveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeaveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeaveEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::LeaveEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_KeyPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeyPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::KeyPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_KeyReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeyReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::KeyReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CharEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CharEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CharEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::CharEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ExitEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExitEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExitEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::ExitEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FourthButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FourthButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FourthButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::FourthButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FourthButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FourthButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FourthButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::FourthButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FifthButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FifthButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FifthButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::FifthButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FifthButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FifthButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FifthButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::FifthButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_StartPinchEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPinchEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartPinchEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::StartPinchEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_PinchEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PinchEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PinchEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::PinchEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EndPinchEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPinchEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndPinchEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::EndPinchEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_StartRotateEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartRotateEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartRotateEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::StartRotateEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_RotateEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RotateEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::RotateEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EndRotateEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndRotateEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndRotateEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::EndRotateEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_StartPanEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPanEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartPanEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::StartPanEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_PanEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PanEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PanEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::PanEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EndPanEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPanEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndPanEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::EndPanEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_TapEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TapEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TapEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::TapEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LongTapEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LongTapEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LongTapEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::LongTapEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SwipeEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwipeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwipeEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor::SwipeEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetRecognizeGestures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecognizeGestures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRecognizeGestures(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::SetRecognizeGestures(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetRecognizeGestures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecognizeGestures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRecognizeGestures() :
      op->vtkRenderWindowInteractor::GetRecognizeGestures());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPointersDownCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointersDownCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointersDownCount() :
      op->vtkRenderWindowInteractor::GetPointersDownCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ClearContact(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearContact");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ClearContact(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::ClearContact(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPointerIndexForContact(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointerIndexForContact");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointerIndexForContact(temp0) :
      op->vtkRenderWindowInteractor::GetPointerIndexForContact(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPointerIndexForExistingContact(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointerIndexForExistingContact");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointerIndexForExistingContact(temp0) :
      op->vtkRenderWindowInteractor::GetPointerIndexForExistingContact(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_IsPointerIndexSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointerIndexSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsPointerIndexSet(temp0) :
      op->vtkRenderWindowInteractor::IsPointerIndexSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ClearPointerIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPointerIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ClearPointerIndex(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor::ClearPointerIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindowInteractor_Methods[] = {
  {"IsTypeOf", PyvtkRenderWindowInteractor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderWindowInteractor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderWindowInteractor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRenderWindowInteractor\nC++: static vtkRenderWindowInteractor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderWindowInteractor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *NewInstance()\n\n"},
  {"Initialize", PyvtkRenderWindowInteractor_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize()\n\nPrepare for handling events and set the Enabled flag to true.\nThis will be called automatically by Start() if the interactor is\nnot initialized, but it can be called manually if you need to\nperform any operations between initialization and the start of\nthe event loop.\n"},
  {"ReInitialize", PyvtkRenderWindowInteractor_ReInitialize, METH_VARARGS,
   "V.ReInitialize()\nC++: void ReInitialize()\n\nPrepare for handling events and set the Enabled flag to true.\nThis will be called automatically by Start() if the interactor is\nnot initialized, but it can be called manually if you need to\nperform any operations between initialization and the start of\nthe event loop.\n"},
  {"Start", PyvtkRenderWindowInteractor_Start, METH_VARARGS,
   "V.Start()\nC++: virtual void Start()\n\nStart the event loop. This is provided so that you do not have to\nimplement your own event loop. You still can use your own event\nloop if you want.\n"},
  {"Enable", PyvtkRenderWindowInteractor_Enable, METH_VARARGS,
   "V.Enable()\nC++: virtual void Enable()\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {"Disable", PyvtkRenderWindowInteractor_Disable, METH_VARARGS,
   "V.Disable()\nC++: virtual void Disable()\n\n"},
  {"GetEnabled", PyvtkRenderWindowInteractor_GetEnabled, METH_VARARGS,
   "V.GetEnabled() -> int\nC++: virtual int GetEnabled()\n\n"},
  {"EnableRenderOn", PyvtkRenderWindowInteractor_EnableRenderOn, METH_VARARGS,
   "V.EnableRenderOn()\nC++: virtual void EnableRenderOn()\n\nEnable/Disable whether vtkRenderWindowInteractor::Render() calls\nthis->RenderWindow->Render().\n"},
  {"EnableRenderOff", PyvtkRenderWindowInteractor_EnableRenderOff, METH_VARARGS,
   "V.EnableRenderOff()\nC++: virtual void EnableRenderOff()\n\nEnable/Disable whether vtkRenderWindowInteractor::Render() calls\nthis->RenderWindow->Render().\n"},
  {"SetEnableRender", PyvtkRenderWindowInteractor_SetEnableRender, METH_VARARGS,
   "V.SetEnableRender(bool)\nC++: virtual void SetEnableRender(bool _arg)\n\nEnable/Disable whether vtkRenderWindowInteractor::Render() calls\nthis->RenderWindow->Render().\n"},
  {"GetEnableRender", PyvtkRenderWindowInteractor_GetEnableRender, METH_VARARGS,
   "V.GetEnableRender() -> bool\nC++: virtual bool GetEnableRender()\n\nEnable/Disable whether vtkRenderWindowInteractor::Render() calls\nthis->RenderWindow->Render().\n"},
  {"SetRenderWindow", PyvtkRenderWindowInteractor_SetRenderWindow, METH_VARARGS,
   "V.SetRenderWindow(vtkRenderWindow)\nC++: void SetRenderWindow(vtkRenderWindow *aren)\n\nSet/Get the rendering window being controlled by this object.\n"},
  {"GetRenderWindow", PyvtkRenderWindowInteractor_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nSet/Get the rendering window being controlled by this object.\n"},
  {"UpdateSize", PyvtkRenderWindowInteractor_UpdateSize, METH_VARARGS,
   "V.UpdateSize(int, int)\nC++: virtual void UpdateSize(int x, int y)\n\nEvent loop notification member for window size change. Window\nsize is measured in pixels.\n"},
  {"CreateTimer", PyvtkRenderWindowInteractor_CreateTimer, METH_VARARGS,
   "V.CreateTimer(int) -> int\nC++: virtual int CreateTimer(int timerType)\n\nThis class provides two groups of methods for manipulating\ntimers.  The first group (CreateTimer(timerType) and\nDestroyTimer()) implicitly use an internal timer id (and are\npresent for backward compatibility). The second group\n(CreateRepeatingTimer(long),CreateOneShotTimer(long),\nResetTimer(int),DestroyTimer(int)) use timer ids so multiple\ntimers can be independently managed. In the first group, the\nCreateTimer() method takes an argument indicating whether the\ntimer is created the first time (timerType==VTKI_TIMER_FIRST) or\nwhether it is being reset (timerType==VTKI_TIMER_UPDATE). (In\ninitial implementations of VTK this was how one shot and\nrepeating timers were managed.) In the second group, the create\nmethods take a timer duration argument (in milliseconds) and\nreturn a timer id. Thus the ResetTimer(timerId) and\nDestroyTimer(timerId) methods take this timer id and operate on\nthe timer as appropriate. Methods are also available for\ndetermining\n"},
  {"DestroyTimer", PyvtkRenderWindowInteractor_DestroyTimer, METH_VARARGS,
   "V.DestroyTimer() -> int\nC++: virtual int DestroyTimer()\nV.DestroyTimer(int) -> int\nC++: int DestroyTimer(int timerId)\n\n"},
  {"CreateRepeatingTimer", PyvtkRenderWindowInteractor_CreateRepeatingTimer, METH_VARARGS,
   "V.CreateRepeatingTimer(int) -> int\nC++: int CreateRepeatingTimer(unsigned long duration)\n\nCreate a repeating timer, with the specified duration (in\nmilliseconds).\n\\return the timer id.\n"},
  {"CreateOneShotTimer", PyvtkRenderWindowInteractor_CreateOneShotTimer, METH_VARARGS,
   "V.CreateOneShotTimer(int) -> int\nC++: int CreateOneShotTimer(unsigned long duration)\n\nCreate a one shot timer, with the specified duretion (in\nmilliseconds).\n\\return the timer id.\n"},
  {"IsOneShotTimer", PyvtkRenderWindowInteractor_IsOneShotTimer, METH_VARARGS,
   "V.IsOneShotTimer(int) -> int\nC++: int IsOneShotTimer(int timerId)\n\nQuery whether the specified timerId is a one shot timer.\n\\return 1 if the timer is a one shot timer.\n"},
  {"GetTimerDuration", PyvtkRenderWindowInteractor_GetTimerDuration, METH_VARARGS,
   "V.GetTimerDuration(int) -> int\nC++: unsigned long GetTimerDuration(int timerId)\nV.GetTimerDuration() -> int\nC++: virtual unsigned long GetTimerDuration()\n\nGet the duration (in milliseconds) for the specified timerId.\n"},
  {"ResetTimer", PyvtkRenderWindowInteractor_ResetTimer, METH_VARARGS,
   "V.ResetTimer(int) -> int\nC++: int ResetTimer(int timerId)\n\nReset the specified timer.\n"},
  {"GetVTKTimerId", PyvtkRenderWindowInteractor_GetVTKTimerId, METH_VARARGS,
   "V.GetVTKTimerId(int) -> int\nC++: virtual int GetVTKTimerId(int platformTimerId)\n\nGet the VTK timer ID that corresponds to the supplied platform\nID.\n"},
  {"SetTimerDuration", PyvtkRenderWindowInteractor_SetTimerDuration, METH_VARARGS,
   "V.SetTimerDuration(int)\nC++: virtual void SetTimerDuration(unsigned long _arg)\n\nSpecify the default timer interval (in milliseconds). (This is\nused in conjunction with the timer methods described previously,\ne.g., CreateTimer() uses this value; and\nCreateRepeatingTimer(duration) and CreateOneShotTimer(duration)\nuse the default value if the parameter \"duration\" is less than or\nequal to zero.) Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {"GetTimerDurationMinValue", PyvtkRenderWindowInteractor_GetTimerDurationMinValue, METH_VARARGS,
   "V.GetTimerDurationMinValue() -> int\nC++: virtual unsigned long GetTimerDurationMinValue()\n\nSpecify the default timer interval (in milliseconds). (This is\nused in conjunction with the timer methods described previously,\ne.g., CreateTimer() uses this value; and\nCreateRepeatingTimer(duration) and CreateOneShotTimer(duration)\nuse the default value if the parameter \"duration\" is less than or\nequal to zero.) Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {"GetTimerDurationMaxValue", PyvtkRenderWindowInteractor_GetTimerDurationMaxValue, METH_VARARGS,
   "V.GetTimerDurationMaxValue() -> int\nC++: virtual unsigned long GetTimerDurationMaxValue()\n\nSpecify the default timer interval (in milliseconds). (This is\nused in conjunction with the timer methods described previously,\ne.g., CreateTimer() uses this value; and\nCreateRepeatingTimer(duration) and CreateOneShotTimer(duration)\nuse the default value if the parameter \"duration\" is less than or\nequal to zero.) Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {"SetTimerEventId", PyvtkRenderWindowInteractor_SetTimerEventId, METH_VARARGS,
   "V.SetTimerEventId(int)\nC++: virtual void SetTimerEventId(int _arg)\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {"GetTimerEventId", PyvtkRenderWindowInteractor_GetTimerEventId, METH_VARARGS,
   "V.GetTimerEventId() -> int\nC++: virtual int GetTimerEventId()\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {"SetTimerEventType", PyvtkRenderWindowInteractor_SetTimerEventType, METH_VARARGS,
   "V.SetTimerEventType(int)\nC++: virtual void SetTimerEventType(int _arg)\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {"GetTimerEventType", PyvtkRenderWindowInteractor_GetTimerEventType, METH_VARARGS,
   "V.GetTimerEventType() -> int\nC++: virtual int GetTimerEventType()\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {"SetTimerEventDuration", PyvtkRenderWindowInteractor_SetTimerEventDuration, METH_VARARGS,
   "V.SetTimerEventDuration(int)\nC++: virtual void SetTimerEventDuration(int _arg)\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {"GetTimerEventDuration", PyvtkRenderWindowInteractor_GetTimerEventDuration, METH_VARARGS,
   "V.GetTimerEventDuration() -> int\nC++: virtual int GetTimerEventDuration()\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {"SetTimerEventPlatformId", PyvtkRenderWindowInteractor_SetTimerEventPlatformId, METH_VARARGS,
   "V.SetTimerEventPlatformId(int)\nC++: virtual void SetTimerEventPlatformId(int _arg)\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {"GetTimerEventPlatformId", PyvtkRenderWindowInteractor_GetTimerEventPlatformId, METH_VARARGS,
   "V.GetTimerEventPlatformId() -> int\nC++: virtual int GetTimerEventPlatformId()\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {"TerminateApp", PyvtkRenderWindowInteractor_TerminateApp, METH_VARARGS,
   "V.TerminateApp()\nC++: virtual void TerminateApp(void)\n\nThis function is called on 'q','e' keypress if exitmethod is not\nspecified and should be overridden by platform dependent\nsubclasses to provide a termination procedure if one is required.\n"},
  {"SetInteractorStyle", PyvtkRenderWindowInteractor_SetInteractorStyle, METH_VARARGS,
   "V.SetInteractorStyle(vtkInteractorObserver)\nC++: virtual void SetInteractorStyle(vtkInteractorObserver *)\n\nExternal switching between joystick/trackball/new? modes. Initial\nvalue is a vtkInteractorStyleSwitch object.\n"},
  {"GetInteractorStyle", PyvtkRenderWindowInteractor_GetInteractorStyle, METH_VARARGS,
   "V.GetInteractorStyle() -> vtkInteractorObserver\nC++: virtual vtkInteractorObserver *GetInteractorStyle()\n\nExternal switching between joystick/trackball/new? modes. Initial\nvalue is a vtkInteractorStyleSwitch object.\n"},
  {"SetLightFollowCamera", PyvtkRenderWindowInteractor_SetLightFollowCamera, METH_VARARGS,
   "V.SetLightFollowCamera(int)\nC++: virtual void SetLightFollowCamera(vtkTypeBool _arg)\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. Default is On.\n"},
  {"GetLightFollowCamera", PyvtkRenderWindowInteractor_GetLightFollowCamera, METH_VARARGS,
   "V.GetLightFollowCamera() -> int\nC++: virtual vtkTypeBool GetLightFollowCamera()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. Default is On.\n"},
  {"LightFollowCameraOn", PyvtkRenderWindowInteractor_LightFollowCameraOn, METH_VARARGS,
   "V.LightFollowCameraOn()\nC++: virtual void LightFollowCameraOn()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. Default is On.\n"},
  {"LightFollowCameraOff", PyvtkRenderWindowInteractor_LightFollowCameraOff, METH_VARARGS,
   "V.LightFollowCameraOff()\nC++: virtual void LightFollowCameraOff()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. Default is On.\n"},
  {"SetDesiredUpdateRate", PyvtkRenderWindowInteractor_SetDesiredUpdateRate, METH_VARARGS,
   "V.SetDesiredUpdateRate(float)\nC++: virtual void SetDesiredUpdateRate(double _arg)\n\nSet/Get the desired update rate. This is used by vtkLODActor's to\ntell them how quickly they need to render.  This update is in\neffect only when the camera is being rotated, or zoomed.  When\nthe interactor is still, the StillUpdateRate is used instead. The\ndefault is 15.\n"},
  {"GetDesiredUpdateRateMinValue", PyvtkRenderWindowInteractor_GetDesiredUpdateRateMinValue, METH_VARARGS,
   "V.GetDesiredUpdateRateMinValue() -> float\nC++: virtual double GetDesiredUpdateRateMinValue()\n\nSet/Get the desired update rate. This is used by vtkLODActor's to\ntell them how quickly they need to render.  This update is in\neffect only when the camera is being rotated, or zoomed.  When\nthe interactor is still, the StillUpdateRate is used instead. The\ndefault is 15.\n"},
  {"GetDesiredUpdateRateMaxValue", PyvtkRenderWindowInteractor_GetDesiredUpdateRateMaxValue, METH_VARARGS,
   "V.GetDesiredUpdateRateMaxValue() -> float\nC++: virtual double GetDesiredUpdateRateMaxValue()\n\nSet/Get the desired update rate. This is used by vtkLODActor's to\ntell them how quickly they need to render.  This update is in\neffect only when the camera is being rotated, or zoomed.  When\nthe interactor is still, the StillUpdateRate is used instead. The\ndefault is 15.\n"},
  {"GetDesiredUpdateRate", PyvtkRenderWindowInteractor_GetDesiredUpdateRate, METH_VARARGS,
   "V.GetDesiredUpdateRate() -> float\nC++: virtual double GetDesiredUpdateRate()\n\nSet/Get the desired update rate. This is used by vtkLODActor's to\ntell them how quickly they need to render.  This update is in\neffect only when the camera is being rotated, or zoomed.  When\nthe interactor is still, the StillUpdateRate is used instead. The\ndefault is 15.\n"},
  {"SetStillUpdateRate", PyvtkRenderWindowInteractor_SetStillUpdateRate, METH_VARARGS,
   "V.SetStillUpdateRate(float)\nC++: virtual void SetStillUpdateRate(double _arg)\n\nSet/Get the desired update rate when movement has stopped. For\nthe non-still update rate, see the SetDesiredUpdateRate method.\nThe default is 0.0001\n"},
  {"GetStillUpdateRateMinValue", PyvtkRenderWindowInteractor_GetStillUpdateRateMinValue, METH_VARARGS,
   "V.GetStillUpdateRateMinValue() -> float\nC++: virtual double GetStillUpdateRateMinValue()\n\nSet/Get the desired update rate when movement has stopped. For\nthe non-still update rate, see the SetDesiredUpdateRate method.\nThe default is 0.0001\n"},
  {"GetStillUpdateRateMaxValue", PyvtkRenderWindowInteractor_GetStillUpdateRateMaxValue, METH_VARARGS,
   "V.GetStillUpdateRateMaxValue() -> float\nC++: virtual double GetStillUpdateRateMaxValue()\n\nSet/Get the desired update rate when movement has stopped. For\nthe non-still update rate, see the SetDesiredUpdateRate method.\nThe default is 0.0001\n"},
  {"GetStillUpdateRate", PyvtkRenderWindowInteractor_GetStillUpdateRate, METH_VARARGS,
   "V.GetStillUpdateRate() -> float\nC++: virtual double GetStillUpdateRate()\n\nSet/Get the desired update rate when movement has stopped. For\nthe non-still update rate, see the SetDesiredUpdateRate method.\nThe default is 0.0001\n"},
  {"GetInitialized", PyvtkRenderWindowInteractor_GetInitialized, METH_VARARGS,
   "V.GetInitialized() -> int\nC++: virtual int GetInitialized()\n\nSee whether interactor has been initialized yet. Default is 0.\n"},
  {"SetPicker", PyvtkRenderWindowInteractor_SetPicker, METH_VARARGS,
   "V.SetPicker(vtkAbstractPicker)\nC++: virtual void SetPicker(vtkAbstractPicker *)\n\nSet/Get the object used to perform pick operations. In order to\npick instances of vtkProp, the picker must be a subclass of\nvtkAbstractPropPicker, meaning that it can identify a particular\ninstance of vtkProp.\n"},
  {"GetPicker", PyvtkRenderWindowInteractor_GetPicker, METH_VARARGS,
   "V.GetPicker() -> vtkAbstractPicker\nC++: virtual vtkAbstractPicker *GetPicker()\n\nSet/Get the object used to perform pick operations. In order to\npick instances of vtkProp, the picker must be a subclass of\nvtkAbstractPropPicker, meaning that it can identify a particular\ninstance of vtkProp.\n"},
  {"CreateDefaultPicker", PyvtkRenderWindowInteractor_CreateDefaultPicker, METH_VARARGS,
   "V.CreateDefaultPicker() -> vtkAbstractPropPicker\nC++: virtual vtkAbstractPropPicker *CreateDefaultPicker()\n\nCreate default picker. Used to create one when none is specified.\nDefault is an instance of vtkPropPicker.\n"},
  {"SetPickingManager", PyvtkRenderWindowInteractor_SetPickingManager, METH_VARARGS,
   "V.SetPickingManager(vtkPickingManager)\nC++: virtual void SetPickingManager(vtkPickingManager *)\n\nSet the picking manager. Set/Get the object used to perform\noperations through the interactor By default, a valid but\ndisabled picking manager is instantiated.\n"},
  {"GetPickingManager", PyvtkRenderWindowInteractor_GetPickingManager, METH_VARARGS,
   "V.GetPickingManager() -> vtkPickingManager\nC++: virtual vtkPickingManager *GetPickingManager()\n\nSet the picking manager. Set/Get the object used to perform\noperations through the interactor By default, a valid but\ndisabled picking manager is instantiated.\n"},
  {"ExitCallback", PyvtkRenderWindowInteractor_ExitCallback, METH_VARARGS,
   "V.ExitCallback()\nC++: virtual void ExitCallback()\n\nThese methods correspond to the Exit, User and Pick callbacks.\nThey allow for the Style to invoke them.\n"},
  {"UserCallback", PyvtkRenderWindowInteractor_UserCallback, METH_VARARGS,
   "V.UserCallback()\nC++: virtual void UserCallback()\n\nThese methods correspond to the Exit, User and Pick callbacks.\nThey allow for the Style to invoke them.\n"},
  {"StartPickCallback", PyvtkRenderWindowInteractor_StartPickCallback, METH_VARARGS,
   "V.StartPickCallback()\nC++: virtual void StartPickCallback()\n\nThese methods correspond to the Exit, User and Pick callbacks.\nThey allow for the Style to invoke them.\n"},
  {"EndPickCallback", PyvtkRenderWindowInteractor_EndPickCallback, METH_VARARGS,
   "V.EndPickCallback()\nC++: virtual void EndPickCallback()\n\nThese methods correspond to the Exit, User and Pick callbacks.\nThey allow for the Style to invoke them.\n"},
  {"GetMousePosition", PyvtkRenderWindowInteractor_GetMousePosition, METH_VARARGS,
   "V.GetMousePosition([int, ...], [int, ...])\nC++: virtual void GetMousePosition(int *x, int *y)\n\nGet the current position of the mouse.\n"},
  {"HideCursor", PyvtkRenderWindowInteractor_HideCursor, METH_VARARGS,
   "V.HideCursor()\nC++: void HideCursor()\n\nHide or show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\n"},
  {"ShowCursor", PyvtkRenderWindowInteractor_ShowCursor, METH_VARARGS,
   "V.ShowCursor()\nC++: void ShowCursor()\n\nHide or show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\n"},
  {"Render", PyvtkRenderWindowInteractor_Render, METH_VARARGS,
   "V.Render()\nC++: virtual void Render()\n\nRender the scene. Just pass the render call on to the associated\nvtkRenderWindow.\n"},
  {"FlyTo", PyvtkRenderWindowInteractor_FlyTo, METH_VARARGS,
   "V.FlyTo(vtkRenderer, float, float, float)\nC++: void FlyTo(vtkRenderer *ren, double x, double y, double z)\nV.FlyTo(vtkRenderer, [float, ...])\nC++: void FlyTo(vtkRenderer *ren, double *x)\n\nGiven a position x, move the current camera's focal point to x.\nThe movement is animated over the number of frames specified in\nNumberOfFlyFrames. The LOD desired frame rate is used.\n"},
  {"FlyToImage", PyvtkRenderWindowInteractor_FlyToImage, METH_VARARGS,
   "V.FlyToImage(vtkRenderer, float, float)\nC++: void FlyToImage(vtkRenderer *ren, double x, double y)\nV.FlyToImage(vtkRenderer, [float, ...])\nC++: void FlyToImage(vtkRenderer *ren, double *x)\n\nGiven a position x, move the current camera's focal point to x.\nThe movement is animated over the number of frames specified in\nNumberOfFlyFrames. The LOD desired frame rate is used.\n"},
  {"SetNumberOfFlyFrames", PyvtkRenderWindowInteractor_SetNumberOfFlyFrames, METH_VARARGS,
   "V.SetNumberOfFlyFrames(int)\nC++: virtual void SetNumberOfFlyFrames(int _arg)\n\nSet the number of frames to fly to when FlyTo is invoked.\n"},
  {"GetNumberOfFlyFramesMinValue", PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMinValue, METH_VARARGS,
   "V.GetNumberOfFlyFramesMinValue() -> int\nC++: virtual int GetNumberOfFlyFramesMinValue()\n\nSet the number of frames to fly to when FlyTo is invoked.\n"},
  {"GetNumberOfFlyFramesMaxValue", PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMaxValue, METH_VARARGS,
   "V.GetNumberOfFlyFramesMaxValue() -> int\nC++: virtual int GetNumberOfFlyFramesMaxValue()\n\nSet the number of frames to fly to when FlyTo is invoked.\n"},
  {"GetNumberOfFlyFrames", PyvtkRenderWindowInteractor_GetNumberOfFlyFrames, METH_VARARGS,
   "V.GetNumberOfFlyFrames() -> int\nC++: virtual int GetNumberOfFlyFrames()\n\nSet the number of frames to fly to when FlyTo is invoked.\n"},
  {"SetDolly", PyvtkRenderWindowInteractor_SetDolly, METH_VARARGS,
   "V.SetDolly(float)\nC++: virtual void SetDolly(double _arg)\n\nSet the total Dolly value to use when flying to (FlyTo()) a\nspecified point. Negative values fly away from the point.\n"},
  {"GetDolly", PyvtkRenderWindowInteractor_GetDolly, METH_VARARGS,
   "V.GetDolly() -> float\nC++: virtual double GetDolly()\n\nSet the total Dolly value to use when flying to (FlyTo()) a\nspecified point. Negative values fly away from the point.\n"},
  {"GetEventPosition", PyvtkRenderWindowInteractor_GetEventPosition, METH_VARARGS,
   "V.GetEventPosition() -> (int, int)\nC++: int *GetEventPosition()\n\n"},
  {"GetLastEventPosition", PyvtkRenderWindowInteractor_GetLastEventPosition, METH_VARARGS,
   "V.GetLastEventPosition() -> (int, int)\nC++: int *GetLastEventPosition()\n\n"},
  {"SetLastEventPosition", PyvtkRenderWindowInteractor_SetLastEventPosition, METH_VARARGS,
   "V.SetLastEventPosition(int, int)\nC++: void SetLastEventPosition(int, int)\nV.SetLastEventPosition((int, int))\nC++: void SetLastEventPosition(int a[2])\n\n"},
  {"SetEventPosition", PyvtkRenderWindowInteractor_SetEventPosition, METH_VARARGS,
   "V.SetEventPosition(int, int)\nC++: virtual void SetEventPosition(int x, int y)\nV.SetEventPosition([int, int])\nC++: virtual void SetEventPosition(int pos[2])\nV.SetEventPosition(int, int, int)\nC++: virtual void SetEventPosition(int x, int y, int pointerIndex)\nV.SetEventPosition([int, int], int)\nC++: virtual void SetEventPosition(int pos[2], int pointerIndex)\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {"SetEventPositionFlipY", PyvtkRenderWindowInteractor_SetEventPositionFlipY, METH_VARARGS,
   "V.SetEventPositionFlipY(int, int)\nC++: virtual void SetEventPositionFlipY(int x, int y)\nV.SetEventPositionFlipY([int, int])\nC++: virtual void SetEventPositionFlipY(int pos[2])\nV.SetEventPositionFlipY(int, int, int)\nC++: virtual void SetEventPositionFlipY(int x, int y,\n    int pointerIndex)\nV.SetEventPositionFlipY([int, int], int)\nC++: virtual void SetEventPositionFlipY(int pos[2],\n    int pointerIndex)\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {"GetEventPositions", PyvtkRenderWindowInteractor_GetEventPositions, METH_VARARGS,
   "V.GetEventPositions(int) -> (int, ...)\nC++: virtual int *GetEventPositions(int pointerIndex)\n\n"},
  {"GetLastEventPositions", PyvtkRenderWindowInteractor_GetLastEventPositions, METH_VARARGS,
   "V.GetLastEventPositions(int) -> (int, ...)\nC++: virtual int *GetLastEventPositions(int pointerIndex)\n\n"},
  {"SetAltKey", PyvtkRenderWindowInteractor_SetAltKey, METH_VARARGS,
   "V.SetAltKey(int)\nC++: virtual void SetAltKey(int _arg)\n\nSet/get whether alt modifier key was pressed.\n"},
  {"GetAltKey", PyvtkRenderWindowInteractor_GetAltKey, METH_VARARGS,
   "V.GetAltKey() -> int\nC++: virtual int GetAltKey()\n\nSet/get whether alt modifier key was pressed.\n"},
  {"SetControlKey", PyvtkRenderWindowInteractor_SetControlKey, METH_VARARGS,
   "V.SetControlKey(int)\nC++: virtual void SetControlKey(int _arg)\n\nSet/get whether control modifier key was pressed.\n"},
  {"GetControlKey", PyvtkRenderWindowInteractor_GetControlKey, METH_VARARGS,
   "V.GetControlKey() -> int\nC++: virtual int GetControlKey()\n\nSet/get whether control modifier key was pressed.\n"},
  {"SetShiftKey", PyvtkRenderWindowInteractor_SetShiftKey, METH_VARARGS,
   "V.SetShiftKey(int)\nC++: virtual void SetShiftKey(int _arg)\n\nSet/get whether shift modifier key was pressed.\n"},
  {"GetShiftKey", PyvtkRenderWindowInteractor_GetShiftKey, METH_VARARGS,
   "V.GetShiftKey() -> int\nC++: virtual int GetShiftKey()\n\nSet/get whether shift modifier key was pressed.\n"},
  {"SetKeyCode", PyvtkRenderWindowInteractor_SetKeyCode, METH_VARARGS,
   "V.SetKeyCode(char)\nC++: virtual void SetKeyCode(char _arg)\n\nSet/get the key code for the key that was pressed.\n"},
  {"GetKeyCode", PyvtkRenderWindowInteractor_GetKeyCode, METH_VARARGS,
   "V.GetKeyCode() -> char\nC++: virtual char GetKeyCode()\n\nSet/get the key code for the key that was pressed.\n"},
  {"SetRepeatCount", PyvtkRenderWindowInteractor_SetRepeatCount, METH_VARARGS,
   "V.SetRepeatCount(int)\nC++: virtual void SetRepeatCount(int _arg)\n\nSet/get the repear count for the key or mouse event. This\nspecifies how many times a key has been pressed.\n"},
  {"GetRepeatCount", PyvtkRenderWindowInteractor_GetRepeatCount, METH_VARARGS,
   "V.GetRepeatCount() -> int\nC++: virtual int GetRepeatCount()\n\nSet/get the repear count for the key or mouse event. This\nspecifies how many times a key has been pressed.\n"},
  {"SetKeySym", PyvtkRenderWindowInteractor_SetKeySym, METH_VARARGS,
   "V.SetKeySym(string)\nC++: virtual void SetKeySym(const char *_arg)\n\nSet/get the key symbol for the key that was pressed. This is the\nkey symbol as defined by the relevant X headers. On X based\nplatforms this corresponds to the installed X server, whereas on\nother platforms the native key codes are translated into a string\nrepresentation.\n"},
  {"GetKeySym", PyvtkRenderWindowInteractor_GetKeySym, METH_VARARGS,
   "V.GetKeySym() -> string\nC++: virtual char *GetKeySym()\n\nSet/get the key symbol for the key that was pressed. This is the\nkey symbol as defined by the relevant X headers. On X based\nplatforms this corresponds to the installed X server, whereas on\nother platforms the native key codes are translated into a string\nrepresentation.\n"},
  {"SetPointerIndex", PyvtkRenderWindowInteractor_SetPointerIndex, METH_VARARGS,
   "V.SetPointerIndex(int)\nC++: virtual void SetPointerIndex(int _arg)\n\nSet/get the index of the most recent pointer to have an event\n"},
  {"GetPointerIndex", PyvtkRenderWindowInteractor_GetPointerIndex, METH_VARARGS,
   "V.GetPointerIndex() -> int\nC++: virtual int GetPointerIndex()\n\nSet/get the index of the most recent pointer to have an event\n"},
  {"SetRotation", PyvtkRenderWindowInteractor_SetRotation, METH_VARARGS,
   "V.SetRotation(float)\nC++: void SetRotation(double val)\n\nSet/get the rotation for the gesture in degrees, update\nLastRotation\n"},
  {"GetRotation", PyvtkRenderWindowInteractor_GetRotation, METH_VARARGS,
   "V.GetRotation() -> float\nC++: virtual double GetRotation()\n\nSet/get the rotation for the gesture in degrees, update\nLastRotation\n"},
  {"GetLastRotation", PyvtkRenderWindowInteractor_GetLastRotation, METH_VARARGS,
   "V.GetLastRotation() -> float\nC++: virtual double GetLastRotation()\n\nSet/get the rotation for the gesture in degrees, update\nLastRotation\n"},
  {"SetScale", PyvtkRenderWindowInteractor_SetScale, METH_VARARGS,
   "V.SetScale(float)\nC++: void SetScale(double val)\n\nSet/get the scale for the gesture, updates LastScale\n"},
  {"GetScale", PyvtkRenderWindowInteractor_GetScale, METH_VARARGS,
   "V.GetScale() -> float\nC++: virtual double GetScale()\n\nSet/get the scale for the gesture, updates LastScale\n"},
  {"GetLastScale", PyvtkRenderWindowInteractor_GetLastScale, METH_VARARGS,
   "V.GetLastScale() -> float\nC++: virtual double GetLastScale()\n\nSet/get the scale for the gesture, updates LastScale\n"},
  {"SetTranslation", PyvtkRenderWindowInteractor_SetTranslation, METH_VARARGS,
   "V.SetTranslation([float, float])\nC++: void SetTranslation(double val[2])\n\nSet/get the translation for pan/swipe gestures, update\nLastTranslation\n"},
  {"GetTranslation", PyvtkRenderWindowInteractor_GetTranslation, METH_VARARGS,
   "V.GetTranslation() -> (float, float)\nC++: double *GetTranslation()\n\n"},
  {"GetLastTranslation", PyvtkRenderWindowInteractor_GetLastTranslation, METH_VARARGS,
   "V.GetLastTranslation() -> (float, float)\nC++: double *GetLastTranslation()\n\n"},
  {"SetEventInformation", PyvtkRenderWindowInteractor_SetEventInformation, METH_VARARGS,
   "V.SetEventInformation(int, int, int, int, char, int, string, int)\nC++: void SetEventInformation(int x, int y, int ctrl, int shift,\n    char keycode, int repeatcount, const char *keysym,\n    int pointerIndex)\nV.SetEventInformation(int, int, int, int, char, int, string)\nC++: void SetEventInformation(int x, int y, int ctrl=0,\n    int shift=0, char keycode=0, int repeatcount=0,\n    const char *keysym=nullptr)\n\nSet all the event information in one call.\n"},
  {"SetEventInformationFlipY", PyvtkRenderWindowInteractor_SetEventInformationFlipY, METH_VARARGS,
   "V.SetEventInformationFlipY(int, int, int, int, char, int, string,\n    int)\nC++: void SetEventInformationFlipY(int x, int y, int ctrl,\n    int shift, char keycode, int repeatcount, const char *keysym,\n    int pointerIndex)\nV.SetEventInformationFlipY(int, int, int, int, char, int, string)\nC++: void SetEventInformationFlipY(int x, int y, int ctrl=0,\n    int shift=0, char keycode=0, int repeatcount=0,\n    const char *keysym=nullptr)\n\nCalls SetEventInformation, but flips the Y based on the current\nSize[1] value (i.e. y = this->Size[1] - y - 1).\n"},
  {"SetKeyEventInformation", PyvtkRenderWindowInteractor_SetKeyEventInformation, METH_VARARGS,
   "V.SetKeyEventInformation(int, int, char, int, string)\nC++: void SetKeyEventInformation(int ctrl=0, int shift=0,\n    char keycode=0, int repeatcount=0, const char *keysym=nullptr)\n\nSet all the keyboard-related event information in one call.\n"},
  {"SetSize", PyvtkRenderWindowInteractor_SetSize, METH_VARARGS,
   "V.SetSize(int, int)\nC++: void SetSize(int, int)\nV.SetSize((int, int))\nC++: void SetSize(int a[2])\n\n"},
  {"GetSize", PyvtkRenderWindowInteractor_GetSize, METH_VARARGS,
   "V.GetSize() -> (int, int)\nC++: int *GetSize()\n\n"},
  {"SetEventSize", PyvtkRenderWindowInteractor_SetEventSize, METH_VARARGS,
   "V.SetEventSize(int, int)\nC++: void SetEventSize(int, int)\nV.SetEventSize((int, int))\nC++: void SetEventSize(int a[2])\n\n"},
  {"GetEventSize", PyvtkRenderWindowInteractor_GetEventSize, METH_VARARGS,
   "V.GetEventSize() -> (int, int)\nC++: int *GetEventSize()\n\n"},
  {"FindPokedRenderer", PyvtkRenderWindowInteractor_FindPokedRenderer, METH_VARARGS,
   "V.FindPokedRenderer(int, int) -> vtkRenderer\nC++: virtual vtkRenderer *FindPokedRenderer(int, int)\n\nWhen an event occurs, we must determine which Renderer the event\noccurred within, since one RenderWindow may contain multiple\nrenderers.\n"},
  {"GetObserverMediator", PyvtkRenderWindowInteractor_GetObserverMediator, METH_VARARGS,
   "V.GetObserverMediator() -> vtkObserverMediator\nC++: vtkObserverMediator *GetObserverMediator()\n\nReturn the object used to mediate between vtkInteractorObservers\ncontending for resources. Multiple interactor observers will\noften request different resources (e.g., cursor shape); the\nmediator uses a strategy to provide the resource based on\npriority of the observer plus the particular request (default\nversus non-default cursor shape).\n"},
  {"SetUseTDx", PyvtkRenderWindowInteractor_SetUseTDx, METH_VARARGS,
   "V.SetUseTDx(bool)\nC++: virtual void SetUseTDx(bool _arg)\n\nUse a 3DConnexion device. Initial value is false. If VTK is not\nbuild with the TDx option, this is no-op. If VTK is build with\nthe TDx option, and a device is not connected, a warning is\nemitted. It is must be called before the first Render to be\neffective, otherwise it is ignored.\n"},
  {"GetUseTDx", PyvtkRenderWindowInteractor_GetUseTDx, METH_VARARGS,
   "V.GetUseTDx() -> bool\nC++: virtual bool GetUseTDx()\n\nUse a 3DConnexion device. Initial value is false. If VTK is not\nbuild with the TDx option, this is no-op. If VTK is build with\nthe TDx option, and a device is not connected, a warning is\nemitted. It is must be called before the first Render to be\neffective, otherwise it is ignored.\n"},
  {"MouseMoveEvent", PyvtkRenderWindowInteractor_MouseMoveEvent, METH_VARARGS,
   "V.MouseMoveEvent()\nC++: virtual void MouseMoveEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"RightButtonPressEvent", PyvtkRenderWindowInteractor_RightButtonPressEvent, METH_VARARGS,
   "V.RightButtonPressEvent()\nC++: virtual void RightButtonPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"RightButtonReleaseEvent", PyvtkRenderWindowInteractor_RightButtonReleaseEvent, METH_VARARGS,
   "V.RightButtonReleaseEvent()\nC++: virtual void RightButtonReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"LeftButtonPressEvent", PyvtkRenderWindowInteractor_LeftButtonPressEvent, METH_VARARGS,
   "V.LeftButtonPressEvent()\nC++: virtual void LeftButtonPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"LeftButtonReleaseEvent", PyvtkRenderWindowInteractor_LeftButtonReleaseEvent, METH_VARARGS,
   "V.LeftButtonReleaseEvent()\nC++: virtual void LeftButtonReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"MiddleButtonPressEvent", PyvtkRenderWindowInteractor_MiddleButtonPressEvent, METH_VARARGS,
   "V.MiddleButtonPressEvent()\nC++: virtual void MiddleButtonPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"MiddleButtonReleaseEvent", PyvtkRenderWindowInteractor_MiddleButtonReleaseEvent, METH_VARARGS,
   "V.MiddleButtonReleaseEvent()\nC++: virtual void MiddleButtonReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"MouseWheelForwardEvent", PyvtkRenderWindowInteractor_MouseWheelForwardEvent, METH_VARARGS,
   "V.MouseWheelForwardEvent()\nC++: virtual void MouseWheelForwardEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"MouseWheelBackwardEvent", PyvtkRenderWindowInteractor_MouseWheelBackwardEvent, METH_VARARGS,
   "V.MouseWheelBackwardEvent()\nC++: virtual void MouseWheelBackwardEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"ExposeEvent", PyvtkRenderWindowInteractor_ExposeEvent, METH_VARARGS,
   "V.ExposeEvent()\nC++: virtual void ExposeEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"ConfigureEvent", PyvtkRenderWindowInteractor_ConfigureEvent, METH_VARARGS,
   "V.ConfigureEvent()\nC++: virtual void ConfigureEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"EnterEvent", PyvtkRenderWindowInteractor_EnterEvent, METH_VARARGS,
   "V.EnterEvent()\nC++: virtual void EnterEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"LeaveEvent", PyvtkRenderWindowInteractor_LeaveEvent, METH_VARARGS,
   "V.LeaveEvent()\nC++: virtual void LeaveEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"KeyPressEvent", PyvtkRenderWindowInteractor_KeyPressEvent, METH_VARARGS,
   "V.KeyPressEvent()\nC++: virtual void KeyPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"KeyReleaseEvent", PyvtkRenderWindowInteractor_KeyReleaseEvent, METH_VARARGS,
   "V.KeyReleaseEvent()\nC++: virtual void KeyReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"CharEvent", PyvtkRenderWindowInteractor_CharEvent, METH_VARARGS,
   "V.CharEvent()\nC++: virtual void CharEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"ExitEvent", PyvtkRenderWindowInteractor_ExitEvent, METH_VARARGS,
   "V.ExitEvent()\nC++: virtual void ExitEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"FourthButtonPressEvent", PyvtkRenderWindowInteractor_FourthButtonPressEvent, METH_VARARGS,
   "V.FourthButtonPressEvent()\nC++: virtual void FourthButtonPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"FourthButtonReleaseEvent", PyvtkRenderWindowInteractor_FourthButtonReleaseEvent, METH_VARARGS,
   "V.FourthButtonReleaseEvent()\nC++: virtual void FourthButtonReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"FifthButtonPressEvent", PyvtkRenderWindowInteractor_FifthButtonPressEvent, METH_VARARGS,
   "V.FifthButtonPressEvent()\nC++: virtual void FifthButtonPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"FifthButtonReleaseEvent", PyvtkRenderWindowInteractor_FifthButtonReleaseEvent, METH_VARARGS,
   "V.FifthButtonReleaseEvent()\nC++: virtual void FifthButtonReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {"StartPinchEvent", PyvtkRenderWindowInteractor_StartPinchEvent, METH_VARARGS,
   "V.StartPinchEvent()\nC++: virtual void StartPinchEvent()\n\nFire various gesture based events.  These methods will Invoke the\ncorresponding vtk event.\n"},
  {"PinchEvent", PyvtkRenderWindowInteractor_PinchEvent, METH_VARARGS,
   "V.PinchEvent()\nC++: virtual void PinchEvent()\n\nFire various gesture based events.  These methods will Invoke the\ncorresponding vtk event.\n"},
  {"EndPinchEvent", PyvtkRenderWindowInteractor_EndPinchEvent, METH_VARARGS,
   "V.EndPinchEvent()\nC++: virtual void EndPinchEvent()\n\nFire various gesture based events.  These methods will Invoke the\ncorresponding vtk event.\n"},
  {"StartRotateEvent", PyvtkRenderWindowInteractor_StartRotateEvent, METH_VARARGS,
   "V.StartRotateEvent()\nC++: virtual void StartRotateEvent()\n\nFire various gesture based events.  These methods will Invoke the\ncorresponding vtk event.\n"},
  {"RotateEvent", PyvtkRenderWindowInteractor_RotateEvent, METH_VARARGS,
   "V.RotateEvent()\nC++: virtual void RotateEvent()\n\nFire various gesture based events.  These methods will Invoke the\ncorresponding vtk event.\n"},
  {"EndRotateEvent", PyvtkRenderWindowInteractor_EndRotateEvent, METH_VARARGS,
   "V.EndRotateEvent()\nC++: virtual void EndRotateEvent()\n\nFire various gesture based events.  These methods will Invoke the\ncorresponding vtk event.\n"},
  {"StartPanEvent", PyvtkRenderWindowInteractor_StartPanEvent, METH_VARARGS,
   "V.StartPanEvent()\nC++: virtual void StartPanEvent()\n\nFire various gesture based events.  These methods will Invoke the\ncorresponding vtk event.\n"},
  {"PanEvent", PyvtkRenderWindowInteractor_PanEvent, METH_VARARGS,
   "V.PanEvent()\nC++: virtual void PanEvent()\n\nFire various gesture based events.  These methods will Invoke the\ncorresponding vtk event.\n"},
  {"EndPanEvent", PyvtkRenderWindowInteractor_EndPanEvent, METH_VARARGS,
   "V.EndPanEvent()\nC++: virtual void EndPanEvent()\n\nFire various gesture based events.  These methods will Invoke the\ncorresponding vtk event.\n"},
  {"TapEvent", PyvtkRenderWindowInteractor_TapEvent, METH_VARARGS,
   "V.TapEvent()\nC++: virtual void TapEvent()\n\nFire various gesture based events.  These methods will Invoke the\ncorresponding vtk event.\n"},
  {"LongTapEvent", PyvtkRenderWindowInteractor_LongTapEvent, METH_VARARGS,
   "V.LongTapEvent()\nC++: virtual void LongTapEvent()\n\nFire various gesture based events.  These methods will Invoke the\ncorresponding vtk event.\n"},
  {"SwipeEvent", PyvtkRenderWindowInteractor_SwipeEvent, METH_VARARGS,
   "V.SwipeEvent()\nC++: virtual void SwipeEvent()\n\nFire various gesture based events.  These methods will Invoke the\ncorresponding vtk event.\n"},
  {"SetRecognizeGestures", PyvtkRenderWindowInteractor_SetRecognizeGestures, METH_VARARGS,
   "V.SetRecognizeGestures(bool)\nC++: virtual void SetRecognizeGestures(bool _arg)\n\nConvert multitouch events into gestures. When this is on (its\ndefault) multitouch events received by this interactor will be\nconverted into gestures by VTK. If turned off the raw multitouch\nevents will be passed down.\n"},
  {"GetRecognizeGestures", PyvtkRenderWindowInteractor_GetRecognizeGestures, METH_VARARGS,
   "V.GetRecognizeGestures() -> bool\nC++: virtual bool GetRecognizeGestures()\n\nConvert multitouch events into gestures. When this is on (its\ndefault) multitouch events received by this interactor will be\nconverted into gestures by VTK. If turned off the raw multitouch\nevents will be passed down.\n"},
  {"GetPointersDownCount", PyvtkRenderWindowInteractor_GetPointersDownCount, METH_VARARGS,
   "V.GetPointersDownCount() -> int\nC++: virtual int GetPointersDownCount()\n\nWhen handling gestures you can query this value to determine how\nmany pointers are down for the gesture this is useful for pan\ngestures for example\n"},
  {"ClearContact", PyvtkRenderWindowInteractor_ClearContact, METH_VARARGS,
   "V.ClearContact(int)\nC++: void ClearContact(size_t contactID)\n\nMost multitouch systems use persistent contact/pointer ids to\ntrack events/motion during multitouch events. We keep an array\nthat maps these system dependent contact ids to our pointer index\nThese functions return -1 if the ID is not found or if there is\nno more room for contacts\n"},
  {"GetPointerIndexForContact", PyvtkRenderWindowInteractor_GetPointerIndexForContact, METH_VARARGS,
   "V.GetPointerIndexForContact(int) -> int\nC++: int GetPointerIndexForContact(size_t contactID)\n\nMost multitouch systems use persistent contact/pointer ids to\ntrack events/motion during multitouch events. We keep an array\nthat maps these system dependent contact ids to our pointer index\nThese functions return -1 if the ID is not found or if there is\nno more room for contacts\n"},
  {"GetPointerIndexForExistingContact", PyvtkRenderWindowInteractor_GetPointerIndexForExistingContact, METH_VARARGS,
   "V.GetPointerIndexForExistingContact(int) -> int\nC++: int GetPointerIndexForExistingContact(size_t contactID)\n\nMost multitouch systems use persistent contact/pointer ids to\ntrack events/motion during multitouch events. We keep an array\nthat maps these system dependent contact ids to our pointer index\nThese functions return -1 if the ID is not found or if there is\nno more room for contacts\n"},
  {"IsPointerIndexSet", PyvtkRenderWindowInteractor_IsPointerIndexSet, METH_VARARGS,
   "V.IsPointerIndexSet(int) -> bool\nC++: bool IsPointerIndexSet(int i)\n\nMost multitouch systems use persistent contact/pointer ids to\ntrack events/motion during multitouch events. We keep an array\nthat maps these system dependent contact ids to our pointer index\nThese functions return -1 if the ID is not found or if there is\nno more room for contacts\n"},
  {"ClearPointerIndex", PyvtkRenderWindowInteractor_ClearPointerIndex, METH_VARARGS,
   "V.ClearPointerIndex(int)\nC++: void ClearPointerIndex(int i)\n\nMost multitouch systems use persistent contact/pointer ids to\ntrack events/motion during multitouch events. We keep an array\nthat maps these system dependent contact ids to our pointer index\nThese functions return -1 if the ID is not found or if there is\nno more room for contacts\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRenderWindowInteractor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkRenderWindowInteractor", // tp_name
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
  PyvtkRenderWindowInteractor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderWindowInteractor_StaticNew()
{
  return vtkRenderWindowInteractor::New();
}

PyObject *PyvtkRenderWindowInteractor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRenderWindowInteractor_Type, PyvtkRenderWindowInteractor_Methods,
    "vtkRenderWindowInteractor",
 &PyvtkRenderWindowInteractor_StaticNew);

  PyTypeObject *pytype = &PyvtkRenderWindowInteractor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "OneShotTimer", vtkRenderWindowInteractor::OneShotTimer },
        { "RepeatingTimer", vtkRenderWindowInteractor::RepeatingTimer },
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

void PyVTKAddFile_vtkRenderWindowInteractor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderWindowInteractor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderWindowInteractor", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTKI_TIMER_FIRST", 0 },
        { "VTKI_TIMER_UPDATE", 1 },
        { "VTKI_MAX_POINTERS", 5 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

