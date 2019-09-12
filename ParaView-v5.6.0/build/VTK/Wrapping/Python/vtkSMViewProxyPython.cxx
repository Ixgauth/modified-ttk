// python wrapper for vtkSMViewProxy
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
#include "vtkSMViewProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMViewProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMViewProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMViewProxy_Doc =
  "vtkSMViewProxy - Superclass for all view proxies.\n\n"
  "Superclass: vtkSMProxy\n\n"
  "vtkSMViewProxy is a superclass for all view proxies. A view proxy\n"
  "abstracts the logic to take one or more representation proxies and\n"
  "show then in some viewport such as vtkRenderWindow. This class may\n"
  "directly be used as the view proxy for views that do all the\n"
  "rendering work at the GUI level. The VTKObject corresponding to this\n"
  "class has to be a vtkView subclass.@par Events:\n"
  "\\li vtkCommand::StartEvent(callData: int:0) -- start of\n"
  "    StillRender().\n"
  "\\li vtkCommand::EndEvent(callData: int:0) -- end of StillRender().\n"
  "\\li vtkCommand::StartEvent(callData: int:1) -- start of\n"
  "    InteractiveRender().\n"
  "\\li vtkCommand::EndEvent(callData: int:1) -- end of\n"
  "    InteractiveRender().\n\n";


static PyObject *
PyvtkSMViewProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMViewProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMViewProxy *tempr = vtkSMViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMViewProxy::NewInstance());

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
PyvtkSMViewProxy_SetEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnable(temp0);
    }
    else
    {
      op->vtkSMViewProxy::SetEnable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_GetEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnable() :
      op->vtkSMViewProxy::GetEnable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_EnableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableOn();
    }
    else
    {
      op->vtkSMViewProxy::EnableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_EnableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableOff();
    }
    else
    {
      op->vtkSMViewProxy::EnableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_StillRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StillRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StillRender();
    }
    else
    {
      op->vtkSMViewProxy::StillRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_InteractiveRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveRender();
    }
    else
    {
      op->vtkSMViewProxy::InteractiveRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkSMViewProxy::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_CanDisplayData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanDisplayData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanDisplayData(temp0, temp1) :
      op->vtkSMViewProxy::CanDisplayData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->CreateDefaultRepresentation(temp0, temp1) :
      op->vtkSMViewProxy::CreateDefaultRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_GetRepresentationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRepresentationType(temp0, temp1) :
      op->vtkSMViewProxy::GetRepresentationType(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_FindRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
  {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->FindRepresentation(temp0, temp1) :
      op->vtkSMViewProxy::FindRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_CaptureWindow_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->CaptureWindow(temp0) :
      op->vtkSMViewProxy::CaptureWindow(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewProxy_CaptureWindow_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->CaptureWindow(temp0, temp1) :
      op->vtkSMViewProxy::CaptureWindow(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewProxy_CaptureWindow(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMViewProxy_CaptureWindow_s1(self, args);
    case 2:
      return PyvtkSMViewProxy_CaptureWindow_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CaptureWindow");
  return nullptr;
}



static PyObject *
PyvtkSMViewProxy_GetClientSideView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientSideView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkView *tempr = (ap.IsBound() ?
      op->GetClientSideView() :
      op->vtkSMViewProxy::GetClientSideView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_WriteImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->WriteImage(temp0, temp1, temp2) :
      op->vtkSMViewProxy::WriteImage(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewProxy_WriteImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->WriteImage(temp0, temp1, temp2, temp3) :
      op->vtkSMViewProxy::WriteImage(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewProxy_WriteImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return PyvtkSMViewProxy_WriteImage_s1(self, args);
    case 4:
      return PyvtkSMViewProxy_WriteImage_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "WriteImage");
  return nullptr;
}



static PyObject *
PyvtkSMViewProxy_HasDirtyRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasDirtyRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasDirtyRepresentation() :
      op->vtkSMViewProxy::HasDirtyRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_GetNeedsUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedsUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNeedsUpdate() :
      op->vtkSMViewProxy::GetNeedsUpdate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkSMViewProxy::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkSMViewProxy::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_SetupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetupInteractor(temp0);
    }
    else
    {
      op->vtkSMViewProxy::SetupInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_MakeRenderWindowInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeRenderWindowInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->MakeRenderWindowInteractor(temp0) :
      op->vtkSMViewProxy::MakeRenderWindowInteractor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_SetTransparentBackground(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetTransparentBackground");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMViewProxy::SetTransparentBackground(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_GetTransparentBackground(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTransparentBackground");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkSMViewProxy::GetTransparentBackground();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMViewProxy_HideOtherRepresentationsIfNeeded_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideOtherRepresentationsIfNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->HideOtherRepresentationsIfNeeded(temp0) :
      op->vtkSMViewProxy::HideOtherRepresentationsIfNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewProxy_HideOtherRepresentationsIfNeeded_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HideOtherRepresentationsIfNeeded");

  vtkSMViewProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    bool tempr = vtkSMViewProxy::HideOtherRepresentationsIfNeeded(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewProxy_HideOtherRepresentationsIfNeeded(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMViewProxy_HideOtherRepresentationsIfNeeded_s1(self, args);
    case 2:
      return PyvtkSMViewProxy_HideOtherRepresentationsIfNeeded_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "HideOtherRepresentationsIfNeeded");
  return nullptr;
}



static PyObject *
PyvtkSMViewProxy_RepresentationVisibilityChanged_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepresentationVisibilityChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMViewProxy *op = static_cast<vtkSMViewProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RepresentationVisibilityChanged(temp0, temp1);
    }
    else
    {
      op->vtkSMViewProxy::RepresentationVisibilityChanged(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewProxy_RepresentationVisibilityChanged_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RepresentationVisibilityChanged");

  vtkSMViewProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
  {
    vtkSMViewProxy::RepresentationVisibilityChanged(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMViewProxy_RepresentationVisibilityChanged(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMViewProxy_RepresentationVisibilityChanged_s1(self, args);
    case 3:
      return PyvtkSMViewProxy_RepresentationVisibilityChanged_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RepresentationVisibilityChanged");
  return nullptr;
}


static PyMethodDef PyvtkSMViewProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMViewProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMViewProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMViewProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMViewProxy\nC++: static vtkSMViewProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMViewProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMViewProxy\nC++: vtkSMViewProxy *NewInstance()\n\n"},
  {"SetEnable", PyvtkSMViewProxy_SetEnable, METH_VARARGS,
   "V.SetEnable(bool)\nC++: virtual void SetEnable(bool _arg)\n\nEnable/Disable a view.\n"},
  {"GetEnable", PyvtkSMViewProxy_GetEnable, METH_VARARGS,
   "V.GetEnable() -> bool\nC++: virtual bool GetEnable()\n\nEnable/Disable a view.\n"},
  {"EnableOn", PyvtkSMViewProxy_EnableOn, METH_VARARGS,
   "V.EnableOn()\nC++: virtual void EnableOn()\n\nEnable/Disable a view.\n"},
  {"EnableOff", PyvtkSMViewProxy_EnableOff, METH_VARARGS,
   "V.EnableOff()\nC++: virtual void EnableOff()\n\nEnable/Disable a view.\n"},
  {"StillRender", PyvtkSMViewProxy_StillRender, METH_VARARGS,
   "V.StillRender()\nC++: virtual void StillRender()\n\nRenders the view using full resolution.\n"},
  {"InteractiveRender", PyvtkSMViewProxy_InteractiveRender, METH_VARARGS,
   "V.InteractiveRender()\nC++: virtual void InteractiveRender()\n\nRenders the view using lower resolution is possible.\n"},
  {"Update", PyvtkSMViewProxy_Update, METH_VARARGS,
   "V.Update()\nC++: virtual void Update()\n\nCalled vtkPVView::Update on the server-side.\n"},
  {"CanDisplayData", PyvtkSMViewProxy_CanDisplayData, METH_VARARGS,
   "V.CanDisplayData(vtkSMSourceProxy, int) -> bool\nC++: virtual bool CanDisplayData(vtkSMSourceProxy *producer,\n    int outputPort)\n\nReturns true if the view can display the data produced by the\nproducer's port. Internally calls GetRepresentationType() and\nreturns true only if the type is valid a representation proxy of\nthat type can be created.\n"},
  {"CreateDefaultRepresentation", PyvtkSMViewProxy_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation(vtkSMProxy, int)\n    -> vtkSMRepresentationProxy\nC++: virtual vtkSMRepresentationProxy *CreateDefaultRepresentation(\n    vtkSMProxy *, int)\n\nCreate a default representation for the given source proxy.\nReturns a new proxy. In version 4.1 and earlier, subclasses\noverrode this method. Since 4.2, the preferred way is to simply\noverride GetRepresentationType(). That ensures that\nCreateDefaultRepresentation() and CanDisplayData() both work as\nexpected.\n"},
  {"GetRepresentationType", PyvtkSMViewProxy_GetRepresentationType, METH_VARARGS,
   "V.GetRepresentationType(vtkSMSourceProxy, int) -> string\nC++: virtual const char *GetRepresentationType(\n    vtkSMSourceProxy *producer, int outputPort)\n\nReturns the xml name of the representation proxy to create to\nshow the data produced in this view, if any. Default\nimplementation checks if the producer has any \"Hints\" that define\nthe representation to create in this view and if so, returns\nthat. Or if this->DefaultRepresentationName is set and its Input\nproperty can accept the data produced, returns\nthis->DefaultRepresentationName. Subclasses should override this\nmethod.\n"},
  {"FindRepresentation", PyvtkSMViewProxy_FindRepresentation, METH_VARARGS,
   "V.FindRepresentation(vtkSMSourceProxy, int)\n    -> vtkSMRepresentationProxy\nC++: virtual vtkSMRepresentationProxy *FindRepresentation(\n    vtkSMSourceProxy *producer, int outputPort)\n\nFinds the representation proxy showing the data produced by the\nprovided producer, if any. Note the representation may not\nnecessarily be visible.\n"},
  {"CaptureWindow", PyvtkSMViewProxy_CaptureWindow, METH_VARARGS,
   "V.CaptureWindow(int) -> vtkImageData\nC++: vtkImageData *CaptureWindow(int magnification)\nV.CaptureWindow(int, int) -> vtkImageData\nC++: vtkImageData *CaptureWindow(int magnificationX,\n    int magnificationY)\n\nCaptures a image from this view. Default implementation returns\nNULL. Subclasses should override CaptureWindowInternal() to do\nthe actual image capture.\n"},
  {"GetClientSideView", PyvtkSMViewProxy_GetClientSideView, METH_VARARGS,
   "V.GetClientSideView() -> vtkView\nC++: vtkView *GetClientSideView()\n\nReturns the client-side vtkView, if any.\n"},
  {"WriteImage", PyvtkSMViewProxy_WriteImage, METH_VARARGS,
   "V.WriteImage(string, string, int) -> int\nC++: int WriteImage(const char *filename, const char *writerName,\n    int magnification=1)\nV.WriteImage(string, string, int, int) -> int\nC++: int WriteImage(const char *filename, const char *writerName,\n    int magnificationX, int magnificationY)\n\nSaves a screenshot of the view to disk. The writerName argument\nspecifies the vtkImageWriter subclass to use.\n"},
  {"HasDirtyRepresentation", PyvtkSMViewProxy_HasDirtyRepresentation, METH_VARARGS,
   "V.HasDirtyRepresentation() -> bool\nC++: virtual bool HasDirtyRepresentation()\n\nReturn true any internal representation is dirty. This can be\nuseful to know if the internal geometry has changed. DEPRECATED:\nUse GetNeedsUpdate() instead.\n"},
  {"GetNeedsUpdate", PyvtkSMViewProxy_GetNeedsUpdate, METH_VARARGS,
   "V.GetNeedsUpdate() -> bool\nC++: virtual bool GetNeedsUpdate()\n\nReturns true if the subsequent call to Update() will result in an\nactual update. If returned true, it means that the view thinks\nits rendering is obsolete and needs to be re-generated.\n"},
  {"GetRenderWindow", PyvtkSMViewProxy_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nReturn the vtkRenderWindow used by this view, if any. Note, views\nlike vtkSMComparativeViewProxy can have more than 1 render window\nin play, in which case, using this method alone may yield\nincorrect results. Also, certain views don't use a\nvtkRenderWindow at all (e.g. Spreadsheet View), in which case,\nthis method will return NULL. Default implementation returns\nNULL.\n"},
  {"GetInteractor", PyvtkSMViewProxy_GetInteractor, METH_VARARGS,
   "V.GetInteractor() -> vtkRenderWindowInteractor\nC++: virtual vtkRenderWindowInteractor *GetInteractor()\n\nReturns the interactor. Note, that views may not use\nvtkRenderWindow at all in which case they will not have any\ninteractor and will return NULL. Default implementation returns\nNULL.\n"},
  {"SetupInteractor", PyvtkSMViewProxy_SetupInteractor, METH_VARARGS,
   "V.SetupInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetupInteractor(vtkRenderWindowInteractor *iren)\n\nA client process need to set the interactor to enable\ninteractivity. Use this method to set the interactor and\ninitialize it as needed by the RenderView. This include changing\nthe interactor style as well as overriding VTK rendering to use\nthe Proxy/ViewProxy API instead. Default implementation does\nnothing. Views that support interaction using\nvtkRenderWindowInteractor should override this method to set the\ninteractor up.\n"},
  {"MakeRenderWindowInteractor", PyvtkSMViewProxy_MakeRenderWindowInteractor, METH_VARARGS,
   "V.MakeRenderWindowInteractor(bool) -> bool\nC++: virtual bool MakeRenderWindowInteractor(bool quiet=false)\n\nCreates a default render window interactor for the\nvtkRenderWindow and sets it up on the local process if the local\nprocess supports interaction. This should not be used when\nputting the render window in a QVTKWidget as that may cause\nissues. One should let the QVTKWidget create the interactor and\nthen call SetupInteractor().\n"},
  {"SetTransparentBackground", PyvtkSMViewProxy_SetTransparentBackground, METH_VARARGS,
   "V.SetTransparentBackground(bool)\nC++: static void SetTransparentBackground(bool val)\n\nSets whether screenshots have a transparent background.\n"},
  {"GetTransparentBackground", PyvtkSMViewProxy_GetTransparentBackground, METH_VARARGS,
   "V.GetTransparentBackground() -> bool\nC++: static bool GetTransparentBackground()\n\nSets whether screenshots have a transparent background.\n"},
  {"HideOtherRepresentationsIfNeeded", PyvtkSMViewProxy_HideOtherRepresentationsIfNeeded, METH_VARARGS,
   "V.HideOtherRepresentationsIfNeeded(vtkSMProxy) -> bool\nC++: virtual bool HideOtherRepresentationsIfNeeded(\n    vtkSMProxy *repr)\nV.HideOtherRepresentationsIfNeeded(vtkSMViewProxy, vtkSMProxy)\n    -> bool\nC++: static bool HideOtherRepresentationsIfNeeded(\n    vtkSMViewProxy *self, vtkSMProxy *repr)\n\nMethod used to hide other representations if the view has a\n`<ShowOneRepresentationAtATime/>` hint. This only affects other\nrepresentations that have data inputs, not non-data\nrepresentations.\n\n@returns true if any representations were hidden by this call,\n    otherwise\n        returns false.\n"},
  {"RepresentationVisibilityChanged", PyvtkSMViewProxy_RepresentationVisibilityChanged, METH_VARARGS,
   "V.RepresentationVisibilityChanged(vtkSMProxy, bool)\nC++: virtual void RepresentationVisibilityChanged(\n    vtkSMProxy *repr, bool new_visibility)\nV.RepresentationVisibilityChanged(vtkSMViewProxy, vtkSMProxy,\n    bool)\nC++: static void RepresentationVisibilityChanged(\n    vtkSMViewProxy *self, vtkSMProxy *repr, bool new_visibility)\n\nCertain views maintain properties (or other state) that should be\nupdated when visibility of representations is changed e.g.\nSpreadSheetView needs to update the value of the\n\"FieldAssociation\" when a new data representation is being shown\nin the view. Subclasses can override this method to perform such\nupdates to View properties. This is called explicitly by the\n`vtkSMParaViewPipelineControllerWithRendering` after changing\nrepresentation visibility. Changes to representation visibility\noutside of `vtkSMParaViewPipelineControllerWithRendering` will\nrequire calling this method explicitly.\n\nDefault implementation does not do anything.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMViewProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMViewProxy", // tp_name
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
  PyvtkSMViewProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMViewProxy_StaticNew()
{
  return vtkSMViewProxy::New();
}

PyObject *PyvtkSMViewProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMViewProxy_Type, PyvtkSMViewProxy_Methods,
    "vtkSMViewProxy",
 &PyvtkSMViewProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMViewProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMViewProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMViewProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMViewProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

