// python wrapper for vtkSMAnimationScene
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
#include "vtkSMAnimationScene.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMAnimationScene(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMAnimationScene_ClassNew(); }

#ifndef DECLARED_PyvtkAnimationCue_ClassNew
extern "C" { PyObject *PyvtkAnimationCue_ClassNew(); }
#define DECLARED_PyvtkAnimationCue_ClassNew
#endif

static const char *PyvtkSMAnimationScene_Doc =
  "vtkSMAnimationScene - animation scene for ParaView.\n\n"
  "Superclass: vtkAnimationCue\n\n"
  "vtkSMAnimationScene extends vtkAnimationCue to add support for a\n"
  "scene in ParaView.\n\n"
  "We don't use vtkAnimationScene since ParaView has more elaborate\n"
  "playback requirements. To support that, this class delegates playback\n"
  "responsibility to vtkAnimationPlayer and subclasses.\n\n"
  "vtkSMAnimationScene also is proxy-aware and hence can work with\n"
  "proxies and views proxies for updating property values, rendering,\n"
  "etc.\n\n"
  "vtkSMAnimationScene forwards the vtkCommand::StartEvent and\n"
  "vtkCommand::EndEvent from vtkCompositeAnimationPlayer to mark the\n"
  "start and end of animation playback.\n\n";


static PyObject *
PyvtkSMAnimationScene_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMAnimationScene::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMAnimationScene::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMAnimationScene *tempr = vtkSMAnimationScene::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMAnimationScene *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMAnimationScene::NewInstance());

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
PyvtkSMAnimationScene_AddCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  vtkAnimationCue *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnimationCue"))
  {
    if (ap.IsBound())
    {
      op->AddCue(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::AddCue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_RemoveCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  vtkAnimationCue *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnimationCue"))
  {
    if (ap.IsBound())
    {
      op->RemoveCue(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::RemoveCue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_RemoveAllCues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllCues();
    }
    else
    {
      op->vtkSMAnimationScene::RemoveAllCues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetNumberOfCues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCues() :
      op->vtkSMAnimationScene::GetNumberOfCues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_AddViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    if (ap.IsBound())
    {
      op->AddViewProxy(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::AddViewProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_RemoveViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    if (ap.IsBound())
    {
      op->RemoveViewProxy(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::RemoveViewProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_RemoveAllViewProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllViewProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllViewProxies();
    }
    else
    {
      op->vtkSMAnimationScene::RemoveAllViewProxies();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetNumberOfViewProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfViewProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfViewProxies() :
      op->vtkSMAnimationScene::GetNumberOfViewProxies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->GetViewProxy(temp0) :
      op->vtkSMAnimationScene::GetViewProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetTimeKeeper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeKeeper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->SetTimeKeeper(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::SetTimeKeeper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetTimeKeeper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeKeeper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetTimeKeeper() :
      op->vtkSMAnimationScene::GetTimeKeeper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetLockStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockStartTime(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::SetLockStartTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetLockStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLockStartTime() :
      op->vtkSMAnimationScene::GetLockStartTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_LockStartTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockStartTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockStartTimeOn();
    }
    else
    {
      op->vtkSMAnimationScene::LockStartTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_LockStartTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockStartTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockStartTimeOff();
    }
    else
    {
      op->vtkSMAnimationScene::LockStartTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetLockEndTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockEndTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockEndTime(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::SetLockEndTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetLockEndTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockEndTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLockEndTime() :
      op->vtkSMAnimationScene::GetLockEndTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_LockEndTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockEndTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockEndTimeOn();
    }
    else
    {
      op->vtkSMAnimationScene::LockEndTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_LockEndTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockEndTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockEndTimeOff();
    }
    else
    {
      op->vtkSMAnimationScene::LockEndTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetSceneTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSceneTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSceneTime(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::SetSceneTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetSceneTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSceneTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSceneTime() :
      op->vtkSMAnimationScene::GetSceneTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetPlaybackTimeWindow_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaybackTimeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlaybackTimeWindow(temp0, temp1);
    }
    else
    {
      op->vtkSMAnimationScene::SetPlaybackTimeWindow(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMAnimationScene_SetPlaybackTimeWindow_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaybackTimeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPlaybackTimeWindow(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::SetPlaybackTimeWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMAnimationScene_SetPlaybackTimeWindow(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMAnimationScene_SetPlaybackTimeWindow_s1(self, args);
    case 1:
      return PyvtkSMAnimationScene_SetPlaybackTimeWindow_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPlaybackTimeWindow");
  return nullptr;
}



static PyObject *
PyvtkSMAnimationScene_GetPlaybackTimeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaybackTimeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPlaybackTimeWindow() :
      op->vtkSMAnimationScene::GetPlaybackTimeWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoop(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::SetLoop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLoop() :
      op->vtkSMAnimationScene::GetLoop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Play();
    }
    else
    {
      op->vtkSMAnimationScene::Play();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Stop();
    }
    else
    {
      op->vtkSMAnimationScene::Stop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GoToNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToNext();
    }
    else
    {
      op->vtkSMAnimationScene::GoToNext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GoToPrevious(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToPrevious");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToPrevious();
    }
    else
    {
      op->vtkSMAnimationScene::GoToPrevious();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GoToFirst(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirst");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToFirst();
    }
    else
    {
      op->vtkSMAnimationScene::GoToFirst();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GoToLast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToLast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToLast();
    }
    else
    {
      op->vtkSMAnimationScene::GoToLast();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlayMode(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::SetPlayMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlayMode() :
      op->vtkSMAnimationScene::GetPlayMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfFrames(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::SetNumberOfFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDuration(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::SetDuration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetFramesPerTimestep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFramesPerTimestep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFramesPerTimestep(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::SetFramesPerTimestep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetForceDisableCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceDisableCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceDisableCaching(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::SetForceDisableCaching(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetForceDisableCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceDisableCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceDisableCaching() :
      op->vtkSMAnimationScene::GetForceDisableCaching());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_SetOverrideStillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverrideStillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOverrideStillRender(temp0);
    }
    else
    {
      op->vtkSMAnimationScene::SetOverrideStillRender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMAnimationScene_GetOverrideStillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverrideStillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMAnimationScene *op = static_cast<vtkSMAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOverrideStillRender() :
      op->vtkSMAnimationScene::GetOverrideStillRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMAnimationScene_Methods[] = {
  {"IsTypeOf", PyvtkSMAnimationScene_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMAnimationScene_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMAnimationScene_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMAnimationScene\nC++: static vtkSMAnimationScene *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMAnimationScene_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMAnimationScene\nC++: vtkSMAnimationScene *NewInstance()\n\n"},
  {"AddCue", PyvtkSMAnimationScene_AddCue, METH_VARARGS,
   "V.AddCue(vtkAnimationCue)\nC++: void AddCue(vtkAnimationCue *cue)\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {"RemoveCue", PyvtkSMAnimationScene_RemoveCue, METH_VARARGS,
   "V.RemoveCue(vtkAnimationCue)\nC++: void RemoveCue(vtkAnimationCue *cue)\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {"RemoveAllCues", PyvtkSMAnimationScene_RemoveAllCues, METH_VARARGS,
   "V.RemoveAllCues()\nC++: void RemoveAllCues()\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {"GetNumberOfCues", PyvtkSMAnimationScene_GetNumberOfCues, METH_VARARGS,
   "V.GetNumberOfCues() -> int\nC++: int GetNumberOfCues()\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {"AddViewProxy", PyvtkSMAnimationScene_AddViewProxy, METH_VARARGS,
   "V.AddViewProxy(vtkSMViewProxy)\nC++: void AddViewProxy(vtkSMViewProxy *proxy)\n\nAdd view proxies that are involved in the animation generated by\nthis scene. When playing the animation, the scene will call\nStillRender() on the view proxies it is aware of, also updating\nany caching parameters.\n"},
  {"RemoveViewProxy", PyvtkSMAnimationScene_RemoveViewProxy, METH_VARARGS,
   "V.RemoveViewProxy(vtkSMViewProxy)\nC++: void RemoveViewProxy(vtkSMViewProxy *proxy)\n\nAdd view proxies that are involved in the animation generated by\nthis scene. When playing the animation, the scene will call\nStillRender() on the view proxies it is aware of, also updating\nany caching parameters.\n"},
  {"RemoveAllViewProxies", PyvtkSMAnimationScene_RemoveAllViewProxies, METH_VARARGS,
   "V.RemoveAllViewProxies()\nC++: void RemoveAllViewProxies()\n\nAdd view proxies that are involved in the animation generated by\nthis scene. When playing the animation, the scene will call\nStillRender() on the view proxies it is aware of, also updating\nany caching parameters.\n"},
  {"GetNumberOfViewProxies", PyvtkSMAnimationScene_GetNumberOfViewProxies, METH_VARARGS,
   "V.GetNumberOfViewProxies() -> int\nC++: unsigned int GetNumberOfViewProxies()\n\nAccess the view proxies.\n"},
  {"GetViewProxy", PyvtkSMAnimationScene_GetViewProxy, METH_VARARGS,
   "V.GetViewProxy(int) -> vtkSMViewProxy\nC++: vtkSMViewProxy *GetViewProxy(unsigned int cc)\n\nAccess the view proxies.\n"},
  {"SetTimeKeeper", PyvtkSMAnimationScene_SetTimeKeeper, METH_VARARGS,
   "V.SetTimeKeeper(vtkSMProxy)\nC++: void SetTimeKeeper(vtkSMProxy *)\n\nSet the time keeper. Time keeper is used to obtain the\ninformation about timesteps. This is required to play animation\nin \"Snap To Timesteps\" mode.\n"},
  {"GetTimeKeeper", PyvtkSMAnimationScene_GetTimeKeeper, METH_VARARGS,
   "V.GetTimeKeeper() -> vtkSMProxy\nC++: virtual vtkSMProxy *GetTimeKeeper()\n\nSet the time keeper. Time keeper is used to obtain the\ninformation about timesteps. This is required to play animation\nin \"Snap To Timesteps\" mode.\n"},
  {"SetLockStartTime", PyvtkSMAnimationScene_SetLockStartTime, METH_VARARGS,
   "V.SetLockStartTime(bool)\nC++: virtual void SetLockStartTime(bool _arg)\n\nLock the start time. When locked, the StartTime won't be\nautomatically updated when data time changes.\n"},
  {"GetLockStartTime", PyvtkSMAnimationScene_GetLockStartTime, METH_VARARGS,
   "V.GetLockStartTime() -> bool\nC++: virtual bool GetLockStartTime()\n\nLock the start time. When locked, the StartTime won't be\nautomatically updated when data time changes.\n"},
  {"LockStartTimeOn", PyvtkSMAnimationScene_LockStartTimeOn, METH_VARARGS,
   "V.LockStartTimeOn()\nC++: virtual void LockStartTimeOn()\n\nLock the start time. When locked, the StartTime won't be\nautomatically updated when data time changes.\n"},
  {"LockStartTimeOff", PyvtkSMAnimationScene_LockStartTimeOff, METH_VARARGS,
   "V.LockStartTimeOff()\nC++: virtual void LockStartTimeOff()\n\nLock the start time. When locked, the StartTime won't be\nautomatically updated when data time changes.\n"},
  {"SetLockEndTime", PyvtkSMAnimationScene_SetLockEndTime, METH_VARARGS,
   "V.SetLockEndTime(bool)\nC++: virtual void SetLockEndTime(bool _arg)\n\nLock the end time. When locked, the EndTime won't be\nautomatically updated when the data time changes.\n"},
  {"GetLockEndTime", PyvtkSMAnimationScene_GetLockEndTime, METH_VARARGS,
   "V.GetLockEndTime() -> bool\nC++: virtual bool GetLockEndTime()\n\nLock the end time. When locked, the EndTime won't be\nautomatically updated when the data time changes.\n"},
  {"LockEndTimeOn", PyvtkSMAnimationScene_LockEndTimeOn, METH_VARARGS,
   "V.LockEndTimeOn()\nC++: virtual void LockEndTimeOn()\n\nLock the end time. When locked, the EndTime won't be\nautomatically updated when the data time changes.\n"},
  {"LockEndTimeOff", PyvtkSMAnimationScene_LockEndTimeOff, METH_VARARGS,
   "V.LockEndTimeOff()\nC++: virtual void LockEndTimeOff()\n\nLock the end time. When locked, the EndTime won't be\nautomatically updated when the data time changes.\n"},
  {"SetSceneTime", PyvtkSMAnimationScene_SetSceneTime, METH_VARARGS,
   "V.SetSceneTime(float)\nC++: void SetSceneTime(double time)\n\nSets the current animation time.\n"},
  {"GetSceneTime", PyvtkSMAnimationScene_GetSceneTime, METH_VARARGS,
   "V.GetSceneTime() -> float\nC++: virtual double GetSceneTime()\n\n"},
  {"SetPlaybackTimeWindow", PyvtkSMAnimationScene_SetPlaybackTimeWindow, METH_VARARGS,
   "V.SetPlaybackTimeWindow(float, float)\nC++: void SetPlaybackTimeWindow(double, double)\nV.SetPlaybackTimeWindow((float, float))\nC++: void SetPlaybackTimeWindow(double a[2])\n\n"},
  {"GetPlaybackTimeWindow", PyvtkSMAnimationScene_GetPlaybackTimeWindow, METH_VARARGS,
   "V.GetPlaybackTimeWindow() -> (float, float)\nC++: double *GetPlaybackTimeWindow()\n\n"},
  {"SetLoop", PyvtkSMAnimationScene_SetLoop, METH_VARARGS,
   "V.SetLoop(int)\nC++: void SetLoop(int val)\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {"GetLoop", PyvtkSMAnimationScene_GetLoop, METH_VARARGS,
   "V.GetLoop() -> int\nC++: int GetLoop()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {"Play", PyvtkSMAnimationScene_Play, METH_VARARGS,
   "V.Play()\nC++: void Play()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {"Stop", PyvtkSMAnimationScene_Stop, METH_VARARGS,
   "V.Stop()\nC++: void Stop()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {"GoToNext", PyvtkSMAnimationScene_GoToNext, METH_VARARGS,
   "V.GoToNext()\nC++: void GoToNext()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {"GoToPrevious", PyvtkSMAnimationScene_GoToPrevious, METH_VARARGS,
   "V.GoToPrevious()\nC++: void GoToPrevious()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {"GoToFirst", PyvtkSMAnimationScene_GoToFirst, METH_VARARGS,
   "V.GoToFirst()\nC++: void GoToFirst()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {"GoToLast", PyvtkSMAnimationScene_GoToLast, METH_VARARGS,
   "V.GoToLast()\nC++: void GoToLast()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {"SetPlayMode", PyvtkSMAnimationScene_SetPlayMode, METH_VARARGS,
   "V.SetPlayMode(int)\nC++: void SetPlayMode(int val)\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {"GetPlayMode", PyvtkSMAnimationScene_GetPlayMode, METH_VARARGS,
   "V.GetPlayMode() -> int\nC++: int GetPlayMode()\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {"SetNumberOfFrames", PyvtkSMAnimationScene_SetNumberOfFrames, METH_VARARGS,
   "V.SetNumberOfFrames(int)\nC++: void SetNumberOfFrames(int val)\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {"SetDuration", PyvtkSMAnimationScene_SetDuration, METH_VARARGS,
   "V.SetDuration(int)\nC++: void SetDuration(int val)\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {"SetFramesPerTimestep", PyvtkSMAnimationScene_SetFramesPerTimestep, METH_VARARGS,
   "V.SetFramesPerTimestep(int)\nC++: void SetFramesPerTimestep(int val)\n\nForwarded to vtkCompositeAnimationPlayer.\n"},
  {"SetForceDisableCaching", PyvtkSMAnimationScene_SetForceDisableCaching, METH_VARARGS,
   "V.SetForceDisableCaching(bool)\nC++: virtual void SetForceDisableCaching(bool _arg)\n\nSet to true to force caching to be disabled. When false\n(default), caching is determined based on the value from\nvtkPVGeneralSettings::GetInstance()->GetCacheGeometryForAnimation(\n).\n"},
  {"GetForceDisableCaching", PyvtkSMAnimationScene_GetForceDisableCaching, METH_VARARGS,
   "V.GetForceDisableCaching() -> bool\nC++: virtual bool GetForceDisableCaching()\n\nSet to true to force caching to be disabled. When false\n(default), caching is determined based on the value from\nvtkPVGeneralSettings::GetInstance()->GetCacheGeometryForAnimation(\n).\n"},
  {"SetOverrideStillRender", PyvtkSMAnimationScene_SetOverrideStillRender, METH_VARARGS,
   "V.SetOverrideStillRender(bool)\nC++: virtual void SetOverrideStillRender(bool _arg)\n\nWhen set, we skip calling still render to render each frame.\nUseful to avoid updating screen when saving animations to disk,\nfor example.\n"},
  {"GetOverrideStillRender", PyvtkSMAnimationScene_GetOverrideStillRender, METH_VARARGS,
   "V.GetOverrideStillRender() -> bool\nC++: virtual bool GetOverrideStillRender()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMAnimationScene_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkSMAnimationScene", // tp_name
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
  PyvtkSMAnimationScene_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMAnimationScene_StaticNew()
{
  return vtkSMAnimationScene::New();
}

PyObject *PyvtkSMAnimationScene_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMAnimationScene_Type, PyvtkSMAnimationScene_Methods,
    "vtkSMAnimationScene",
 &PyvtkSMAnimationScene_StaticNew);

  PyTypeObject *pytype = &PyvtkSMAnimationScene_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAnimationCue_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyInt_FromLong(vtkSMAnimationScene::UpdateStartEndTimesEvent);
  if (o)
  {
    PyDict_SetItemString(d, "UpdateStartEndTimesEvent", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMAnimationScene(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMAnimationScene_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMAnimationScene", o) != 0)
  {
    Py_DECREF(o);
  }

}

