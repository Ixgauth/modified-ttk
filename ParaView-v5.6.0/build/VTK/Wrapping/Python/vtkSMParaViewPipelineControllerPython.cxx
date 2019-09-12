// python wrapper for vtkSMParaViewPipelineController
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
#include "vtkStdString.h"
#include "vtkSMParaViewPipelineController.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMParaViewPipelineController(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMParaViewPipelineController_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMParaViewPipelineController_Doc =
  "vtkSMParaViewPipelineController - Controller that encapsulates\ncontrol logic for typical ParaView applications.\n\n"
  "Superclass: vtkSMObject\n\n"
  "ParaView's ServerManager, together with it's proxies and properties\n"
  "provides a mechanism to create visualization and data processing\n"
  "pipelines. However, for a complex application like ParaView, there is\n"
  "considerable control logic to manage these proxies, set them up, etc.\n"
  "for common operations supported by the application.\n"
  "vtkSMParaViewPipelineController provides us a mechanism to\n"
  "encapsulate just control logic with ability to customize and extend\n"
  "for custom applications, similar to ParaView.\n\n"
  "vtkSMParaViewPipelineController has no state of itself. When needed,\n"
  "one should simply create an instance of\n"
  "vtkSMParaViewPipelineController and release it once done.\n\n"
  "vtkSMParaViewPipelineController uses the vtkObjectFactory mechanism.\n"
  "Custom application developers can provide subclasses and override the\n"
  "behaviour (see vtkSMParaViewPipelineControllerWithRender).\n\n"
  "For an example of using vtkSMParaViewPipelineController in your\n"
  "application, see\n"
  "`ParaView/ParaViewCore/ServerManager/Core/Testing/Cxx/TestParaViewPipe\n"
  "lineController.cxx`.\n\n";


static PyObject *
PyvtkSMParaViewPipelineController_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMParaViewPipelineController::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMParaViewPipelineController::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMParaViewPipelineController *tempr = vtkSMParaViewPipelineController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMParaViewPipelineController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMParaViewPipelineController::NewInstance());

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
PyvtkSMParaViewPipelineController_InitializeSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    bool tempr = (ap.IsBound() ?
      op->InitializeSession(temp0) :
      op->vtkSMParaViewPipelineController::InitializeSession(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_FindTimeKeeper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindTimeKeeper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindTimeKeeper(temp0) :
      op->vtkSMParaViewPipelineController::FindTimeKeeper(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_FindMaterialLibrary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindMaterialLibrary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindMaterialLibrary(temp0) :
      op->vtkSMParaViewPipelineController::FindMaterialLibrary(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_PreInitializeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreInitializeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->PreInitializeProxy(temp0) :
      op->vtkSMParaViewPipelineController::PreInitializeProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_PostInitializeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostInitializeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->PostInitializeProxy(temp0) :
      op->vtkSMParaViewPipelineController::PostInitializeProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_InitializeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->InitializeProxy(temp0) :
      op->vtkSMParaViewPipelineController::InitializeProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_FinalizeProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FinalizeProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->FinalizeProxy(temp0) :
      op->vtkSMParaViewPipelineController::FinalizeProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_RegisterPipelineProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPipelineProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterPipelineProxy(temp0, temp1) :
      op->vtkSMParaViewPipelineController::RegisterPipelineProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterPipelineProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPipelineProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterPipelineProxy(temp0) :
      op->vtkSMParaViewPipelineController::RegisterPipelineProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterPipelineProxy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMParaViewPipelineController_RegisterPipelineProxy_s1(self, args);
    case 1:
      return PyvtkSMParaViewPipelineController_RegisterPipelineProxy_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RegisterPipelineProxy");
  return nullptr;
}



static PyObject *
PyvtkSMParaViewPipelineController_UnRegisterPipelineProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterPipelineProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterPipelineProxy(temp0) :
      op->vtkSMParaViewPipelineController::UnRegisterPipelineProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_RegisterViewProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterViewProxy(temp0) :
      op->vtkSMParaViewPipelineController::RegisterViewProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterViewProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterViewProxy(temp0, temp1) :
      op->vtkSMParaViewPipelineController::RegisterViewProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterViewProxy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMParaViewPipelineController_RegisterViewProxy_s1(self, args);
    case 2:
      return PyvtkSMParaViewPipelineController_RegisterViewProxy_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RegisterViewProxy");
  return nullptr;
}



static PyObject *
PyvtkSMParaViewPipelineController_UnRegisterViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterViewProxy(temp0, temp1) :
      op->vtkSMParaViewPipelineController::UnRegisterViewProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_RegisterRepresentationProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterRepresentationProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterRepresentationProxy(temp0) :
      op->vtkSMParaViewPipelineController::RegisterRepresentationProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_UnRegisterRepresentationProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterRepresentationProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterRepresentationProxy(temp0) :
      op->vtkSMParaViewPipelineController::UnRegisterRepresentationProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_RegisterColorTransferFunctionProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterColorTransferFunctionProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterColorTransferFunctionProxy(temp0, temp1) :
      op->vtkSMParaViewPipelineController::RegisterColorTransferFunctionProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterColorTransferFunctionProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterColorTransferFunctionProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterColorTransferFunctionProxy(temp0) :
      op->vtkSMParaViewPipelineController::RegisterColorTransferFunctionProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterColorTransferFunctionProxy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMParaViewPipelineController_RegisterColorTransferFunctionProxy_s1(self, args);
    case 1:
      return PyvtkSMParaViewPipelineController_RegisterColorTransferFunctionProxy_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RegisterColorTransferFunctionProxy");
  return nullptr;
}



static PyObject *
PyvtkSMParaViewPipelineController_RegisterOpacityTransferFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterOpacityTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterOpacityTransferFunction(temp0, temp1) :
      op->vtkSMParaViewPipelineController::RegisterOpacityTransferFunction(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterOpacityTransferFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterOpacityTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterOpacityTransferFunction(temp0) :
      op->vtkSMParaViewPipelineController::RegisterOpacityTransferFunction(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterOpacityTransferFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMParaViewPipelineController_RegisterOpacityTransferFunction_s1(self, args);
    case 1:
      return PyvtkSMParaViewPipelineController_RegisterOpacityTransferFunction_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RegisterOpacityTransferFunction");
  return nullptr;
}



static PyObject *
PyvtkSMParaViewPipelineController_RegisterLightProxy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterLightProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterLightProxy(temp0, temp1, temp2) :
      op->vtkSMParaViewPipelineController::RegisterLightProxy(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterLightProxy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterLightProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  vtkSMProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterLightProxy(temp0, temp1) :
      op->vtkSMParaViewPipelineController::RegisterLightProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMParaViewPipelineController_RegisterLightProxy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSMParaViewPipelineController_RegisterLightProxy_s1(self, args);
    case 2:
      return PyvtkSMParaViewPipelineController_RegisterLightProxy_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RegisterLightProxy");
  return nullptr;
}



static PyObject *
PyvtkSMParaViewPipelineController_FindAnimationScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindAnimationScene(temp0) :
      op->vtkSMParaViewPipelineController::FindAnimationScene(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_GetAnimationScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetAnimationScene(temp0) :
      op->vtkSMParaViewPipelineController::GetAnimationScene(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_FindTimeAnimationTrack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindTimeAnimationTrack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->FindTimeAnimationTrack(temp0) :
      op->vtkSMParaViewPipelineController::FindTimeAnimationTrack(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_GetTimeAnimationTrack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeAnimationTrack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetTimeAnimationTrack(temp0) :
      op->vtkSMParaViewPipelineController::GetTimeAnimationTrack(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_RegisterAnimationProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAnimationProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->RegisterAnimationProxy(temp0) :
      op->vtkSMParaViewPipelineController::RegisterAnimationProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_UnRegisterAnimationProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterAnimationProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterAnimationProxy(temp0) :
      op->vtkSMParaViewPipelineController::UnRegisterAnimationProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_UpdateSettingsProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSettingsProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    if (ap.IsBound())
    {
      op->UpdateSettingsProxies(temp0);
    }
    else
    {
      op->vtkSMParaViewPipelineController::UpdateSettingsProxies(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_UnRegisterProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMParaViewPipelineController *op = static_cast<vtkSMParaViewPipelineController *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->UnRegisterProxy(temp0) :
      op->vtkSMParaViewPipelineController::UnRegisterProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMParaViewPipelineController_GetHelperProxyGroupName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetHelperProxyGroupName");

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    vtkStdString tempr = vtkSMParaViewPipelineController::GetHelperProxyGroupName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMParaViewPipelineController_Methods[] = {
  {"IsTypeOf", PyvtkSMParaViewPipelineController_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMParaViewPipelineController_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMParaViewPipelineController_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMParaViewPipelineController\nC++: static vtkSMParaViewPipelineController *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMParaViewPipelineController_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMParaViewPipelineController\nC++: vtkSMParaViewPipelineController *NewInstance()\n\n"},
  {"InitializeSession", PyvtkSMParaViewPipelineController_InitializeSession, METH_VARARGS,
   "V.InitializeSession(vtkSMSession) -> bool\nC++: virtual bool InitializeSession(vtkSMSession *session)\n\nCall this method to setup a branch new session with state\nconsidered essential for ParaView session. Returns true on\nsuccess.\n"},
  {"FindTimeKeeper", PyvtkSMParaViewPipelineController_FindTimeKeeper, METH_VARARGS,
   "V.FindTimeKeeper(vtkSMSession) -> vtkSMProxy\nC++: virtual vtkSMProxy *FindTimeKeeper(vtkSMSession *session)\n\nReturns the TimeKeeper proxy associated with the session.\n"},
  {"FindMaterialLibrary", PyvtkSMParaViewPipelineController_FindMaterialLibrary, METH_VARARGS,
   "V.FindMaterialLibrary(vtkSMSession) -> vtkSMProxy\nC++: virtual vtkSMProxy *FindMaterialLibrary(\n    vtkSMSession *session)\n\nReturns the MaterialLibrary proxy associated with the session.\n"},
  {"PreInitializeProxy", PyvtkSMParaViewPipelineController_PreInitializeProxy, METH_VARARGS,
   "V.PreInitializeProxy(vtkSMProxy) -> bool\nC++: virtual bool PreInitializeProxy(vtkSMProxy *proxy)\n\nPre-initializes a proxy i.e. prepares the proxy for\ninitialization. One should call this before changing any\nproperties on the proxy. We load the property values from XML\ndefaults as well as user-preferences here.\n"},
  {"PostInitializeProxy", PyvtkSMParaViewPipelineController_PostInitializeProxy, METH_VARARGS,
   "V.PostInitializeProxy(vtkSMProxy) -> bool\nC++: virtual bool PostInitializeProxy(vtkSMProxy *proxy)\n\nFinal step in proxy initialization. When this method is called,\nall essential properties on the proxy (such as inputs for\nfilters, or filename on readers) are assumed to be set up so that\ndomains can be updated. This method setups up property values for\nthose properties that weren't modified since the\nPreInitializeProxy() using the domains, if possible. This enables\nthe application to select data-specific default values. NOTE:\nThis method does not register the proxy with the proxy manager.\nIt may, however register any helper proxies created for this\nproxy.\n"},
  {"InitializeProxy", PyvtkSMParaViewPipelineController_InitializeProxy, METH_VARARGS,
   "V.InitializeProxy(vtkSMProxy) -> bool\nC++: bool InitializeProxy(vtkSMProxy *proxy)\n\nConvenience method to call PreInitializeProxy and\nPostInitializeProxy.\n"},
  {"FinalizeProxy", PyvtkSMParaViewPipelineController_FinalizeProxy, METH_VARARGS,
   "V.FinalizeProxy(vtkSMProxy) -> bool\nC++: virtual bool FinalizeProxy(vtkSMProxy *proxy)\n\nCleans up any helper proxies registered for the proxy in\nPreInitializeProxy/PostInitializeProxy. Similar to\nPreInitializeProxy/PostInitializeProxy methods, this doesn't\naffect the proxy manager registration state for the proxy itself.\n"},
  {"RegisterPipelineProxy", PyvtkSMParaViewPipelineController_RegisterPipelineProxy, METH_VARARGS,
   "V.RegisterPipelineProxy(vtkSMProxy, string) -> bool\nC++: virtual bool RegisterPipelineProxy(vtkSMProxy *proxy,\n    const char *proxyname)\nV.RegisterPipelineProxy(vtkSMProxy) -> bool\nC++: virtual bool RegisterPipelineProxy(vtkSMProxy *proxy)\n\nUse this method after PreInitializeProxy() and\nPostInitializeProxy() to register a pipeline proxy with the proxy\nmanager. This method does additional updates required for\npipeline proxies such as registering the proxy with the\nTimeKeeper, creating additional helper proxies for enabling\nrepresentation animations, and updating the active-source. This\nmethod will register the proxy in an appropriate group so that\nthe application becomes aware of it. One can optionally pass in\nthe registration name to use. Otherwise, this code will come up\nwith a unique name. Caveat: while pipeline proxies are generally\nregistered under the \"sources\" group, there's one exception:\nsources that produce vtkSelection. ParaView treats them specially\nand registers them under \"selection_sources\".\n"},
  {"UnRegisterPipelineProxy", PyvtkSMParaViewPipelineController_UnRegisterPipelineProxy, METH_VARARGS,
   "V.UnRegisterPipelineProxy(vtkSMProxy) -> bool\nC++: virtual bool UnRegisterPipelineProxy(vtkSMProxy *proxy)\n\nUnregisters a pipeline proxy. This is the inverse of\nRegisterPipelineProxy() and hence unsets the active source if the\nactive source if this proxy, unregisters the proxy with the\nTimeKeeper etc. Users can use either this method or the catch-all\nvtkSMParaViewPipelineController::UnRegisterProxy() method which\ndetermines the type of the proxy and then calls the appropriate\nmethod.\n"},
  {"RegisterViewProxy", PyvtkSMParaViewPipelineController_RegisterViewProxy, METH_VARARGS,
   "V.RegisterViewProxy(vtkSMProxy) -> bool\nC++: virtual bool RegisterViewProxy(vtkSMProxy *proxy)\nV.RegisterViewProxy(vtkSMProxy, string) -> bool\nC++: virtual bool RegisterViewProxy(vtkSMProxy *proxy,\n    const char *proxyname)\n\nUse this method after PreInitializeProxy() and\nPostInitializeProxy() to register a view proxy with the proxy\nmanager. This will also perform any additional setups as needed\ne.g. registering the view with the animation scene and the timer\nkeeper.\n"},
  {"UnRegisterViewProxy", PyvtkSMParaViewPipelineController_UnRegisterViewProxy, METH_VARARGS,
   "V.UnRegisterViewProxy(vtkSMProxy, bool) -> bool\nC++: virtual bool UnRegisterViewProxy(vtkSMProxy *proxy,\n    bool unregister_representations=true)\n\nInverse of RegisterViewProxy. Users can use either this method or\nthe catch-all vtkSMParaViewPipelineController::UnRegisterProxy()\nmethod which determines the type of the proxy and then calls the\nappropriate method. If the optional argument,\nunregister_representations, is false (default is true), then this\nmethod will skip the unregistering of representations. Default\nbehaviour is to unregister all representations too.\n"},
  {"RegisterRepresentationProxy", PyvtkSMParaViewPipelineController_RegisterRepresentationProxy, METH_VARARGS,
   "V.RegisterRepresentationProxy(vtkSMProxy) -> bool\nC++: virtual bool RegisterRepresentationProxy(vtkSMProxy *proxy)\n\nRegistration method for representations to be used after\nPreInitializeProxy() and PostInitializeProxy(). Register the\nproxy under the appropriate group.\n"},
  {"UnRegisterRepresentationProxy", PyvtkSMParaViewPipelineController_UnRegisterRepresentationProxy, METH_VARARGS,
   "V.UnRegisterRepresentationProxy(vtkSMProxy) -> bool\nC++: virtual bool UnRegisterRepresentationProxy(vtkSMProxy *proxy)\n\nUnregisters a representation proxy. Users can use either this\nmethod or the catch-all\nvtkSMParaViewPipelineController::UnRegisterProxy() method which\ndetermines the type of the proxy and then calls the appropriate\nmethod.\n"},
  {"RegisterColorTransferFunctionProxy", PyvtkSMParaViewPipelineController_RegisterColorTransferFunctionProxy, METH_VARARGS,
   "V.RegisterColorTransferFunctionProxy(vtkSMProxy, string) -> bool\nC++: virtual bool RegisterColorTransferFunctionProxy(\n    vtkSMProxy *proxy, const char *proxyname)\nV.RegisterColorTransferFunctionProxy(vtkSMProxy) -> bool\nC++: virtual bool RegisterColorTransferFunctionProxy(\n    vtkSMProxy *proxy)\n\nRegistration method for color transfer function proxies to be\nused after PreInitializeProxy() and PostInitializeProxy() calls.\n"},
  {"RegisterOpacityTransferFunction", PyvtkSMParaViewPipelineController_RegisterOpacityTransferFunction, METH_VARARGS,
   "V.RegisterOpacityTransferFunction(vtkSMProxy, string) -> bool\nC++: virtual bool RegisterOpacityTransferFunction(\n    vtkSMProxy *proxy, const char *proxyname)\nV.RegisterOpacityTransferFunction(vtkSMProxy) -> bool\nC++: virtual bool RegisterOpacityTransferFunction(\n    vtkSMProxy *proxy)\n\nRegistration method for opacity transfer function proxies.\n"},
  {"RegisterLightProxy", PyvtkSMParaViewPipelineController_RegisterLightProxy, METH_VARARGS,
   "V.RegisterLightProxy(vtkSMProxy, vtkSMProxy, string) -> bool\nC++: virtual bool RegisterLightProxy(vtkSMProxy *proxy,\n    vtkSMProxy *view, const char *proxyname)\nV.RegisterLightProxy(vtkSMProxy, vtkSMProxy) -> bool\nC++: virtual bool RegisterLightProxy(vtkSMProxy *proxy,\n    vtkSMProxy *view)\n\nUse this method after PreInitializeProxy() and\nPostInitializeProxy() to register a light proxy with the proxy\nmanager. This will also perform needed python tracing.\n"},
  {"FindAnimationScene", PyvtkSMParaViewPipelineController_FindAnimationScene, METH_VARARGS,
   "V.FindAnimationScene(vtkSMSession) -> vtkSMProxy\nC++: virtual vtkSMProxy *FindAnimationScene(vtkSMSession *session)\n\nReturns the animation scene, if any. Returns NULL if none exists.\n"},
  {"GetAnimationScene", PyvtkSMParaViewPipelineController_GetAnimationScene, METH_VARARGS,
   "V.GetAnimationScene(vtkSMSession) -> vtkSMProxy\nC++: virtual vtkSMProxy *GetAnimationScene(vtkSMSession *session)\n\nReturns the animation scene for the session. If none exists, a\nnew one will be created. This may returns NULL if animation scene\nproxy is not available in the session.\n"},
  {"FindTimeAnimationTrack", PyvtkSMParaViewPipelineController_FindTimeAnimationTrack, METH_VARARGS,
   "V.FindTimeAnimationTrack(vtkSMProxy) -> vtkSMProxy\nC++: virtual vtkSMProxy *FindTimeAnimationTrack(vtkSMProxy *scene)\n\nReturn the animation track for time, if any. Returns NULL if none\nexists.\n"},
  {"GetTimeAnimationTrack", PyvtkSMParaViewPipelineController_GetTimeAnimationTrack, METH_VARARGS,
   "V.GetTimeAnimationTrack(vtkSMProxy) -> vtkSMProxy\nC++: virtual vtkSMProxy *GetTimeAnimationTrack(vtkSMProxy *scene)\n\nReturn the animation track for time. If none exists, a new one\nwill be created. Returns NULL if the proxy is not available in\nthe session.\n"},
  {"RegisterAnimationProxy", PyvtkSMParaViewPipelineController_RegisterAnimationProxy, METH_VARARGS,
   "V.RegisterAnimationProxy(vtkSMProxy) -> bool\nC++: virtual bool RegisterAnimationProxy(vtkSMProxy *proxy)\n\nUse this method after PreInitializeProxy() and\nPostInitializeProxy() to register an animation proxy with the\nproxy manager.\n"},
  {"UnRegisterAnimationProxy", PyvtkSMParaViewPipelineController_UnRegisterAnimationProxy, METH_VARARGS,
   "V.UnRegisterAnimationProxy(vtkSMProxy) -> bool\nC++: virtual bool UnRegisterAnimationProxy(vtkSMProxy *proxy)\n\nInverse of RegisterAnimationProxy. Also unregisters cues if proxy\nis scene, keyframes if proxy is a cue, etc. Users can use either\nthis method or the catch-all\nvtkSMParaViewPipelineController::UnRegisterProxy() method which\ndetermines the type of the proxy and then calls the appropriate\nmethod.\n"},
  {"UpdateSettingsProxies", PyvtkSMParaViewPipelineController_UpdateSettingsProxies, METH_VARARGS,
   "V.UpdateSettingsProxies(vtkSMSession)\nC++: virtual void UpdateSettingsProxies(vtkSMSession *session)\n\nInitializes and registers proxies in the \"settings\" group that\nhaven't been already. This may be called whenever a new settings\nproxy definition becomes available, say, after loading a plugin.\n"},
  {"UnRegisterProxy", PyvtkSMParaViewPipelineController_UnRegisterProxy, METH_VARARGS,
   "V.UnRegisterProxy(vtkSMProxy) -> bool\nC++: virtual bool UnRegisterProxy(vtkSMProxy *proxy)\n\nA catch-all method do cleanup and unregister any proxies that\nwere registered using Register..Proxy() APIs on this class. It\ndetermines what known types the \"proxy\" is, i.e. is it a view, or\npipeline, or representation etc., and then calls the appropriate\nUnRegister...Proxy() method.\n"},
  {"GetHelperProxyGroupName", PyvtkSMParaViewPipelineController_GetHelperProxyGroupName, METH_VARARGS,
   "V.GetHelperProxyGroupName(vtkSMProxy) -> string\nC++: static vtkStdString GetHelperProxyGroupName(vtkSMProxy *)\n\nFor a given proxy returns the name of the group used for helper\nproxies.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMParaViewPipelineController_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMParaViewPipelineController", // tp_name
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
  PyvtkSMParaViewPipelineController_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMParaViewPipelineController_StaticNew()
{
  return vtkSMParaViewPipelineController::New();
}

PyObject *PyvtkSMParaViewPipelineController_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMParaViewPipelineController_Type, PyvtkSMParaViewPipelineController_Methods,
    "vtkSMParaViewPipelineController",
 &PyvtkSMParaViewPipelineController_StaticNew);

  PyTypeObject *pytype = &PyvtkSMParaViewPipelineController_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMParaViewPipelineController(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMParaViewPipelineController_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMParaViewPipelineController", o) != 0)
  {
    Py_DECREF(o);
  }

}

