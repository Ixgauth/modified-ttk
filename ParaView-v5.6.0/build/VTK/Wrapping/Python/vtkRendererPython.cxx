// python wrapper for vtkRenderer
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
#include "vtkRenderer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRenderer_ClassNew(); }

#ifndef DECLARED_PyvtkViewport_ClassNew
extern "C" { PyObject *PyvtkViewport_ClassNew(); }
#define DECLARED_PyvtkViewport_ClassNew
#endif

static const char *PyvtkRenderer_Doc =
  "vtkRenderer - abstract specification for renderers\n\n"
  "Superclass: vtkViewport\n\n"
  "vtkRenderer provides an abstract specification for renderers. A\n"
  "renderer is an object that controls the rendering process for\n"
  "objects. Rendering is the process of converting geometry, a\n"
  "specification for lights, and a camera view into an image.\n"
  "vtkRenderer also performs coordinate transformation between world\n"
  "coordinates, view coordinates (the computer graphics rendering\n"
  "coordinate system), and display coordinates (the actual screen\n"
  "coordinates on the display device). Certain advanced rendering\n"
  "features such as two-sided lighting can also be controlled.\n\n"
  "@sa\n"
  "vtkRenderWindow vtkActor vtkCamera vtkLight vtkVolume\n\n";


static PyObject *
PyvtkRenderer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderer *tempr = vtkRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderer::NewInstance());

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
PyvtkRenderer_AddActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->AddActor(temp0);
    }
    else
    {
      op->vtkRenderer::AddActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_AddVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->AddVolume(temp0);
    }
    else
    {
      op->vtkRenderer::AddVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_RemoveActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->RemoveActor(temp0);
    }
    else
    {
      op->vtkRenderer::RemoveActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_RemoveVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->RemoveVolume(temp0);
    }
    else
    {
      op->vtkRenderer::RemoveVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_AddLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkLight *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
  {
    if (ap.IsBound())
    {
      op->AddLight(temp0);
    }
    else
    {
      op->vtkRenderer::AddLight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_RemoveLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkLight *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
  {
    if (ap.IsBound())
    {
      op->RemoveLight(temp0);
    }
    else
    {
      op->vtkRenderer::RemoveLight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_RemoveAllLights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllLights();
    }
    else
    {
      op->vtkRenderer::RemoveAllLights();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetLights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLightCollection *tempr = (ap.IsBound() ?
      op->GetLights() :
      op->vtkRenderer::GetLights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetLightCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkLightCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLightCollection"))
  {
    if (ap.IsBound())
    {
      op->SetLightCollection(temp0);
    }
    else
    {
      op->vtkRenderer::SetLightCollection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_CreateLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateLight();
    }
    else
    {
      op->vtkRenderer::CreateLight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_MakeLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLight *tempr = (ap.IsBound() ?
      op->MakeLight() :
      op->vtkRenderer::MakeLight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetTwoSidedLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoSidedLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwoSidedLighting() :
      op->vtkRenderer::GetTwoSidedLighting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetTwoSidedLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoSidedLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwoSidedLighting(temp0);
    }
    else
    {
      op->vtkRenderer::SetTwoSidedLighting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_TwoSidedLightingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoSidedLightingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwoSidedLightingOn();
    }
    else
    {
      op->vtkRenderer::TwoSidedLightingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_TwoSidedLightingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoSidedLightingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwoSidedLightingOff();
    }
    else
    {
      op->vtkRenderer::TwoSidedLightingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetLightFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->vtkRenderer::SetLightFollowCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetLightFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLightFollowCamera() :
      op->vtkRenderer::GetLightFollowCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_LightFollowCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightFollowCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LightFollowCameraOn();
    }
    else
    {
      op->vtkRenderer::LightFollowCameraOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_LightFollowCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightFollowCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LightFollowCameraOff();
    }
    else
    {
      op->vtkRenderer::LightFollowCameraOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetAutomaticLightCreation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticLightCreation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticLightCreation() :
      op->vtkRenderer::GetAutomaticLightCreation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetAutomaticLightCreation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticLightCreation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticLightCreation(temp0);
    }
    else
    {
      op->vtkRenderer::SetAutomaticLightCreation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_AutomaticLightCreationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLightCreationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticLightCreationOn();
    }
    else
    {
      op->vtkRenderer::AutomaticLightCreationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_AutomaticLightCreationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticLightCreationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticLightCreationOff();
    }
    else
    {
      op->vtkRenderer::AutomaticLightCreationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_UpdateLightsGeometryToFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLightsGeometryToFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateLightsGeometryToFollowCamera() :
      op->vtkRenderer::UpdateLightsGeometryToFollowCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeCollection *tempr = (ap.IsBound() ?
      op->GetVolumes() :
      op->vtkRenderer::GetVolumes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActorCollection *tempr = (ap.IsBound() ?
      op->GetActors() :
      op->vtkRenderer::GetActors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetActiveCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetActiveCamera(temp0);
    }
    else
    {
      op->vtkRenderer::SetActiveCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetActiveCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetActiveCamera() :
      op->vtkRenderer::GetActiveCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_MakeCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->MakeCamera() :
      op->vtkRenderer::MakeCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetErase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetErase(temp0);
    }
    else
    {
      op->vtkRenderer::SetErase(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetErase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetErase() :
      op->vtkRenderer::GetErase());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_EraseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EraseOn();
    }
    else
    {
      op->vtkRenderer::EraseOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_EraseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EraseOff();
    }
    else
    {
      op->vtkRenderer::EraseOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDraw(temp0);
    }
    else
    {
      op->vtkRenderer::SetDraw(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDraw() :
      op->vtkRenderer::GetDraw());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_DrawOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawOn();
    }
    else
    {
      op->vtkRenderer::DrawOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_DrawOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawOff();
    }
    else
    {
      op->vtkRenderer::DrawOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_CaptureGL2PSSpecialProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureGL2PSSpecialProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    int tempr = (ap.IsBound() ?
      op->CaptureGL2PSSpecialProp(temp0) :
      op->vtkRenderer::CaptureGL2PSSpecialProp(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetGL2PSSpecialPropCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGL2PSSpecialPropCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->SetGL2PSSpecialPropCollection(temp0);
    }
    else
    {
      op->vtkRenderer::SetGL2PSSpecialPropCollection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_AddCuller(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCuller");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkCuller *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCuller"))
  {
    if (ap.IsBound())
    {
      op->AddCuller(temp0);
    }
    else
    {
      op->vtkRenderer::AddCuller(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_RemoveCuller(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCuller");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkCuller *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCuller"))
  {
    if (ap.IsBound())
    {
      op->RemoveCuller(temp0);
    }
    else
    {
      op->vtkRenderer::RemoveCuller(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetCullers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCullers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCullerCollection *tempr = (ap.IsBound() ?
      op->GetCullers() :
      op->vtkRenderer::GetCullers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetAmbient_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->SetAmbient(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRenderer::SetAmbient(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderer_SetAmbient_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAmbient(temp0);
    }
    else
    {
      op->vtkRenderer::SetAmbient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderer_SetAmbient(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRenderer_SetAmbient_s1(self, args);
    case 1:
      return PyvtkRenderer_SetAmbient_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAmbient");
  return nullptr;
}



static PyObject *
PyvtkRenderer_GetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAmbient() :
      op->vtkRenderer::GetAmbient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetAllocatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllocatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllocatedRenderTime(temp0);
    }
    else
    {
      op->vtkRenderer::SetAllocatedRenderTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetAllocatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllocatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAllocatedRenderTime() :
      op->vtkRenderer::GetAllocatedRenderTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetTimeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeFactor() :
      op->vtkRenderer::GetTimeFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkRenderer::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_DeviceRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->DeviceRender();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_DeviceRenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceRenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeviceRenderOpaqueGeometry();
    }
    else
    {
      op->vtkRenderer::DeviceRenderOpaqueGeometry();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_DeviceRenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceRenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeviceRenderTranslucentPolygonalGeometry();
    }
    else
    {
      op->vtkRenderer::DeviceRenderTranslucentPolygonalGeometry();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_ClearLights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLights();
    }
    else
    {
      op->vtkRenderer::ClearLights();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkRenderer::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_VisibleActorCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibleActorCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->VisibleActorCount() :
      op->vtkRenderer::VisibleActorCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_VisibleVolumeCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibleVolumeCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->VisibleVolumeCount() :
      op->vtkRenderer::VisibleVolumeCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_ComputeVisiblePropBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVisiblePropBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->ComputeVisiblePropBounds(temp0);
    }
    else
    {
      op->vtkRenderer::ComputeVisiblePropBounds(temp0);
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
PyvtkRenderer_ComputeVisiblePropBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVisiblePropBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->ComputeVisiblePropBounds() :
      op->vtkRenderer::ComputeVisiblePropBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderer_ComputeVisiblePropBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderer_ComputeVisiblePropBounds_s1(self, args);
    case 0:
      return PyvtkRenderer_ComputeVisiblePropBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeVisiblePropBounds");
  return nullptr;
}



static PyObject *
PyvtkRenderer_ResetCameraClippingRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetCameraClippingRange();
    }
    else
    {
      op->vtkRenderer::ResetCameraClippingRange();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderer_ResetCameraClippingRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->ResetCameraClippingRange(temp0);
    }
    else
    {
      op->vtkRenderer::ResetCameraClippingRange(temp0);
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
PyvtkRenderer_ResetCameraClippingRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->ResetCameraClippingRange(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkRenderer::ResetCameraClippingRange(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderer_ResetCameraClippingRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderer_ResetCameraClippingRange_s1(self, args);
    case 1:
      return PyvtkRenderer_ResetCameraClippingRange_s2(self, args);
    case 6:
      return PyvtkRenderer_ResetCameraClippingRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ResetCameraClippingRange");
  return nullptr;
}



static PyObject *
PyvtkRenderer_SetNearClippingPlaneTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNearClippingPlaneTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNearClippingPlaneTolerance(temp0);
    }
    else
    {
      op->vtkRenderer::SetNearClippingPlaneTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetNearClippingPlaneToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNearClippingPlaneToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNearClippingPlaneToleranceMinValue() :
      op->vtkRenderer::GetNearClippingPlaneToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetNearClippingPlaneToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNearClippingPlaneToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNearClippingPlaneToleranceMaxValue() :
      op->vtkRenderer::GetNearClippingPlaneToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetNearClippingPlaneTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNearClippingPlaneTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNearClippingPlaneTolerance() :
      op->vtkRenderer::GetNearClippingPlaneTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetClippingRangeExpansion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingRangeExpansion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClippingRangeExpansion(temp0);
    }
    else
    {
      op->vtkRenderer::SetClippingRangeExpansion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetClippingRangeExpansionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingRangeExpansionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetClippingRangeExpansionMinValue() :
      op->vtkRenderer::GetClippingRangeExpansionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetClippingRangeExpansionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingRangeExpansionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetClippingRangeExpansionMaxValue() :
      op->vtkRenderer::GetClippingRangeExpansionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetClippingRangeExpansion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingRangeExpansion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetClippingRangeExpansion() :
      op->vtkRenderer::GetClippingRangeExpansion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_ResetCamera_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetCamera();
    }
    else
    {
      op->vtkRenderer::ResetCamera();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderer_ResetCamera_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->ResetCamera(temp0);
    }
    else
    {
      op->vtkRenderer::ResetCamera(temp0);
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
PyvtkRenderer_ResetCamera_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->ResetCamera(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkRenderer::ResetCamera(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderer_ResetCamera(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderer_ResetCamera_s1(self, args);
    case 1:
      return PyvtkRenderer_ResetCamera_s2(self, args);
    case 6:
      return PyvtkRenderer_ResetCamera_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ResetCamera");
  return nullptr;
}



static PyObject *
PyvtkRenderer_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->vtkRenderer::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkRenderer::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetVTKWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWindow *tempr = (ap.IsBound() ?
      op->GetVTKWindow() :
      op->vtkRenderer::GetVTKWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetBackingStore(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackingStore");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackingStore(temp0);
    }
    else
    {
      op->vtkRenderer::SetBackingStore(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetBackingStore(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackingStore");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBackingStore() :
      op->vtkRenderer::GetBackingStore());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_BackingStoreOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackingStoreOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackingStoreOn();
    }
    else
    {
      op->vtkRenderer::BackingStoreOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_BackingStoreOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackingStoreOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackingStoreOff();
    }
    else
    {
      op->vtkRenderer::BackingStoreOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractive(temp0);
    }
    else
    {
      op->vtkRenderer::SetInteractive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractive() :
      op->vtkRenderer::GetInteractive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_InteractiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveOn();
    }
    else
    {
      op->vtkRenderer::InteractiveOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_InteractiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveOff();
    }
    else
    {
      op->vtkRenderer::InteractiveOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayer(temp0);
    }
    else
    {
      op->vtkRenderer::SetLayer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLayer() :
      op->vtkRenderer::GetLayer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetPreserveColorBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveColorBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreserveColorBuffer() :
      op->vtkRenderer::GetPreserveColorBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetPreserveColorBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveColorBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveColorBuffer(temp0);
    }
    else
    {
      op->vtkRenderer::SetPreserveColorBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_PreserveColorBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveColorBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveColorBufferOn();
    }
    else
    {
      op->vtkRenderer::PreserveColorBufferOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_PreserveColorBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveColorBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveColorBufferOff();
    }
    else
    {
      op->vtkRenderer::PreserveColorBufferOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetPreserveDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveDepthBuffer(temp0);
    }
    else
    {
      op->vtkRenderer::SetPreserveDepthBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetPreserveDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreserveDepthBuffer() :
      op->vtkRenderer::GetPreserveDepthBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_PreserveDepthBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveDepthBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveDepthBufferOn();
    }
    else
    {
      op->vtkRenderer::PreserveDepthBufferOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_PreserveDepthBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveDepthBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveDepthBufferOff();
    }
    else
    {
      op->vtkRenderer::PreserveDepthBufferOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_Transparent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Transparent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Transparent() :
      op->vtkRenderer::Transparent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_WorldToView_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WorldToView();
    }
    else
    {
      op->vtkRenderer::WorldToView();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderer_WorldToView_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->vtkRenderer::WorldToView(temp0, temp1, temp2);
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
PyvtkRenderer_WorldToView(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderer_WorldToView_s1(self, args);
    case 3:
      return PyvtkRenderer_WorldToView_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "WorldToView");
  return nullptr;
}



static PyObject *
PyvtkRenderer_ViewToWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ViewToWorld();
    }
    else
    {
      op->vtkRenderer::ViewToWorld();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderer_ViewToWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->vtkRenderer::ViewToWorld(temp0, temp1, temp2);
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
PyvtkRenderer_ViewToWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderer_ViewToWorld_s1(self, args);
    case 3:
      return PyvtkRenderer_ViewToWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ViewToWorld");
  return nullptr;
}



static PyObject *
PyvtkRenderer_WorldToPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->vtkRenderer::WorldToPose(temp0, temp1, temp2);
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
PyvtkRenderer_PoseToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PoseToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->vtkRenderer::PoseToWorld(temp0, temp1, temp2);
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
PyvtkRenderer_ViewToPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->vtkRenderer::ViewToPose(temp0, temp1, temp2);
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
PyvtkRenderer_PoseToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PoseToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
      op->vtkRenderer::PoseToView(temp0, temp1, temp2);
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
PyvtkRenderer_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetZ(temp0, temp1) :
      op->vtkRenderer::GetZ(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkRenderer::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetLastRenderTimeInSeconds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRenderTimeInSeconds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLastRenderTimeInSeconds() :
      op->vtkRenderer::GetLastRenderTimeInSeconds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetNumberOfPropsRendered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPropsRendered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPropsRendered() :
      op->vtkRenderer::GetNumberOfPropsRendered());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_PickProp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->PickProp(temp0, temp1) :
      op->vtkRenderer::PickProp(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderer_PickProp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

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
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->PickProp(temp0, temp1, temp2, temp3) :
      op->vtkRenderer::PickProp(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderer_PickProp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRenderer_PickProp_s1(self, args);
    case 4:
      return PyvtkRenderer_PickProp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PickProp");
  return nullptr;
}



static PyObject *
PyvtkRenderer_StereoMidpoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoMidpoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoMidpoint();
    }
    else
    {
      op->vtkRenderer::StereoMidpoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetTiledAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTiledAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTiledAspectRatio() :
      op->vtkRenderer::GetTiledAspectRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_IsActiveCameraCreated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsActiveCameraCreated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsActiveCameraCreated() :
      op->vtkRenderer::IsActiveCameraCreated());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetUseDepthPeeling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthPeeling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDepthPeeling(temp0);
    }
    else
    {
      op->vtkRenderer::SetUseDepthPeeling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetUseDepthPeeling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthPeeling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseDepthPeeling() :
      op->vtkRenderer::GetUseDepthPeeling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_UseDepthPeelingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthPeelingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDepthPeelingOn();
    }
    else
    {
      op->vtkRenderer::UseDepthPeelingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_UseDepthPeelingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthPeelingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDepthPeelingOff();
    }
    else
    {
      op->vtkRenderer::UseDepthPeelingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetUseDepthPeelingForVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthPeelingForVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDepthPeelingForVolumes(temp0);
    }
    else
    {
      op->vtkRenderer::SetUseDepthPeelingForVolumes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetUseDepthPeelingForVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthPeelingForVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDepthPeelingForVolumes() :
      op->vtkRenderer::GetUseDepthPeelingForVolumes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_UseDepthPeelingForVolumesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthPeelingForVolumesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDepthPeelingForVolumesOn();
    }
    else
    {
      op->vtkRenderer::UseDepthPeelingForVolumesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_UseDepthPeelingForVolumesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthPeelingForVolumesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDepthPeelingForVolumesOff();
    }
    else
    {
      op->vtkRenderer::UseDepthPeelingForVolumesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetOcclusionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOcclusionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOcclusionRatio(temp0);
    }
    else
    {
      op->vtkRenderer::SetOcclusionRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetOcclusionRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionRatioMinValue() :
      op->vtkRenderer::GetOcclusionRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetOcclusionRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionRatioMaxValue() :
      op->vtkRenderer::GetOcclusionRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetOcclusionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionRatio() :
      op->vtkRenderer::GetOcclusionRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetMaximumNumberOfPeels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPeels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfPeels(temp0);
    }
    else
    {
      op->vtkRenderer::SetMaximumNumberOfPeels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetMaximumNumberOfPeels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPeels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPeels() :
      op->vtkRenderer::GetMaximumNumberOfPeels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetLastRenderingUsedDepthPeeling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRenderingUsedDepthPeeling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastRenderingUsedDepthPeeling() :
      op->vtkRenderer::GetLastRenderingUsedDepthPeeling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetDelegate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelegate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkRendererDelegate *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRendererDelegate"))
  {
    if (ap.IsBound())
    {
      op->SetDelegate(temp0);
    }
    else
    {
      op->vtkRenderer::SetDelegate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetDelegate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRendererDelegate *tempr = (ap.IsBound() ?
      op->GetDelegate() :
      op->vtkRenderer::GetDelegate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHardwareSelector *tempr = (ap.IsBound() ?
      op->GetSelector() :
      op->vtkRenderer::GetSelector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetBackgroundTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundTexture(temp0);
    }
    else
    {
      op->vtkRenderer::SetBackgroundTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetBackgroundTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetBackgroundTexture() :
      op->vtkRenderer::GetBackgroundTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetTexturedBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturedBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTexturedBackground(temp0);
    }
    else
    {
      op->vtkRenderer::SetTexturedBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetTexturedBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturedBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTexturedBackground() :
      op->vtkRenderer::GetTexturedBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_TexturedBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TexturedBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TexturedBackgroundOn();
    }
    else
    {
      op->vtkRenderer::TexturedBackgroundOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_TexturedBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TexturedBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TexturedBackgroundOff();
    }
    else
    {
      op->vtkRenderer::TexturedBackgroundOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkRenderer::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetUseFXAA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFXAA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseFXAA(temp0);
    }
    else
    {
      op->vtkRenderer::SetUseFXAA(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetUseFXAA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFXAA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseFXAA() :
      op->vtkRenderer::GetUseFXAA());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_UseFXAAOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFXAAOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFXAAOn();
    }
    else
    {
      op->vtkRenderer::UseFXAAOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_UseFXAAOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFXAAOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFXAAOff();
    }
    else
    {
      op->vtkRenderer::UseFXAAOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetFXAAOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFXAAOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFXAAOptions *tempr = (ap.IsBound() ?
      op->GetFXAAOptions() :
      op->vtkRenderer::GetFXAAOptions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetFXAAOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFXAAOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkFXAAOptions *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFXAAOptions"))
  {
    if (ap.IsBound())
    {
      op->SetFXAAOptions(temp0);
    }
    else
    {
      op->vtkRenderer::SetFXAAOptions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetUseShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseShadows(temp0);
    }
    else
    {
      op->vtkRenderer::SetUseShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetUseShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseShadows() :
      op->vtkRenderer::GetUseShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_UseShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseShadowsOn();
    }
    else
    {
      op->vtkRenderer::UseShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_UseShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseShadowsOff();
    }
    else
    {
      op->vtkRenderer::UseShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetUseHiddenLineRemoval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseHiddenLineRemoval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseHiddenLineRemoval(temp0);
    }
    else
    {
      op->vtkRenderer::SetUseHiddenLineRemoval(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetUseHiddenLineRemoval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseHiddenLineRemoval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseHiddenLineRemoval() :
      op->vtkRenderer::GetUseHiddenLineRemoval());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_UseHiddenLineRemovalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHiddenLineRemovalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHiddenLineRemovalOn();
    }
    else
    {
      op->vtkRenderer::UseHiddenLineRemovalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_UseHiddenLineRemovalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHiddenLineRemovalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHiddenLineRemovalOff();
    }
    else
    {
      op->vtkRenderer::UseHiddenLineRemovalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetPass(temp0);
    }
    else
    {
      op->vtkRenderer::SetPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetPass() :
      op->vtkRenderer::GetPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkRenderer::GetInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderer_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderer *op = static_cast<vtkRenderer *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInformation(temp0);
    }
    else
    {
      op->vtkRenderer::SetInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderer_Methods[] = {
  {"IsTypeOf", PyvtkRenderer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRenderer\nC++: static vtkRenderer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRenderer\nC++: vtkRenderer *NewInstance()\n\n"},
  {"AddActor", PyvtkRenderer_AddActor, METH_VARARGS,
   "V.AddActor(vtkProp)\nC++: void AddActor(vtkProp *p)\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {"AddVolume", PyvtkRenderer_AddVolume, METH_VARARGS,
   "V.AddVolume(vtkProp)\nC++: void AddVolume(vtkProp *p)\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {"RemoveActor", PyvtkRenderer_RemoveActor, METH_VARARGS,
   "V.RemoveActor(vtkProp)\nC++: void RemoveActor(vtkProp *p)\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {"RemoveVolume", PyvtkRenderer_RemoveVolume, METH_VARARGS,
   "V.RemoveVolume(vtkProp)\nC++: void RemoveVolume(vtkProp *p)\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {"AddLight", PyvtkRenderer_AddLight, METH_VARARGS,
   "V.AddLight(vtkLight)\nC++: void AddLight(vtkLight *)\n\nAdd a light to the list of lights.\n"},
  {"RemoveLight", PyvtkRenderer_RemoveLight, METH_VARARGS,
   "V.RemoveLight(vtkLight)\nC++: void RemoveLight(vtkLight *)\n\nRemove a light from the list of lights.\n"},
  {"RemoveAllLights", PyvtkRenderer_RemoveAllLights, METH_VARARGS,
   "V.RemoveAllLights()\nC++: void RemoveAllLights()\n\nRemove all lights from the list of lights.\n"},
  {"GetLights", PyvtkRenderer_GetLights, METH_VARARGS,
   "V.GetLights() -> vtkLightCollection\nC++: vtkLightCollection *GetLights()\n\nReturn the collection of lights.\n"},
  {"SetLightCollection", PyvtkRenderer_SetLightCollection, METH_VARARGS,
   "V.SetLightCollection(vtkLightCollection)\nC++: void SetLightCollection(vtkLightCollection *lights)\n\nSet the collection of lights. We cannot name it SetLights because\nof TestSetGet\n\\pre lights_exist: lights!=0\n\\post lights_set: lights==this->GetLights()\n"},
  {"CreateLight", PyvtkRenderer_CreateLight, METH_VARARGS,
   "V.CreateLight()\nC++: void CreateLight(void)\n\nCreate and add a light to renderer.\n"},
  {"MakeLight", PyvtkRenderer_MakeLight, METH_VARARGS,
   "V.MakeLight() -> vtkLight\nC++: virtual vtkLight *MakeLight()\n\nCreate a new Light sutible for use with this type of Renderer.\nFor example, a vtkMesaRenderer should create a vtkMesaLight in\nthis function.   The default is to just call vtkLight::New.\n"},
  {"GetTwoSidedLighting", PyvtkRenderer_GetTwoSidedLighting, METH_VARARGS,
   "V.GetTwoSidedLighting() -> int\nC++: virtual vtkTypeBool GetTwoSidedLighting()\n\nTurn on/off two-sided lighting of surfaces. If two-sided lighting\nis off, then only the side of the surface facing the light(s)\nwill be lit, and the other side dark. If two-sided lighting on,\nboth sides of the surface will be lit.\n"},
  {"SetTwoSidedLighting", PyvtkRenderer_SetTwoSidedLighting, METH_VARARGS,
   "V.SetTwoSidedLighting(int)\nC++: virtual void SetTwoSidedLighting(vtkTypeBool _arg)\n\nTurn on/off two-sided lighting of surfaces. If two-sided lighting\nis off, then only the side of the surface facing the light(s)\nwill be lit, and the other side dark. If two-sided lighting on,\nboth sides of the surface will be lit.\n"},
  {"TwoSidedLightingOn", PyvtkRenderer_TwoSidedLightingOn, METH_VARARGS,
   "V.TwoSidedLightingOn()\nC++: virtual void TwoSidedLightingOn()\n\nTurn on/off two-sided lighting of surfaces. If two-sided lighting\nis off, then only the side of the surface facing the light(s)\nwill be lit, and the other side dark. If two-sided lighting on,\nboth sides of the surface will be lit.\n"},
  {"TwoSidedLightingOff", PyvtkRenderer_TwoSidedLightingOff, METH_VARARGS,
   "V.TwoSidedLightingOff()\nC++: virtual void TwoSidedLightingOff()\n\nTurn on/off two-sided lighting of surfaces. If two-sided lighting\nis off, then only the side of the surface facing the light(s)\nwill be lit, and the other side dark. If two-sided lighting on,\nboth sides of the surface will be lit.\n"},
  {"SetLightFollowCamera", PyvtkRenderer_SetLightFollowCamera, METH_VARARGS,
   "V.SetLightFollowCamera(int)\nC++: virtual void SetLightFollowCamera(vtkTypeBool _arg)\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. If LightFollowCamera is on, lights that are designated as\nHeadlights or CameraLights will be adjusted to move with this\nrenderer's camera. If LightFollowCamera is off, the lights will\nnot be adjusted.\n\n* (Note: In previous versions of vtk, this light-tracking\n* functionality was part of the interactors, not the renderer.\n  For\n* backwards compatibility, the older, more limited interactor\n* behavior is enabled by default. To disable this mode, turn the\n* interactor's LightFollowCamera flag OFF, and leave the\n  renderer's\n* LightFollowCamera flag ON.)\n"},
  {"GetLightFollowCamera", PyvtkRenderer_GetLightFollowCamera, METH_VARARGS,
   "V.GetLightFollowCamera() -> int\nC++: virtual vtkTypeBool GetLightFollowCamera()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. If LightFollowCamera is on, lights that are designated as\nHeadlights or CameraLights will be adjusted to move with this\nrenderer's camera. If LightFollowCamera is off, the lights will\nnot be adjusted.\n\n* (Note: In previous versions of vtk, this light-tracking\n* functionality was part of the interactors, not the renderer.\n  For\n* backwards compatibility, the older, more limited interactor\n* behavior is enabled by default. To disable this mode, turn the\n* interactor's LightFollowCamera flag OFF, and leave the\n  renderer's\n* LightFollowCamera flag ON.)\n"},
  {"LightFollowCameraOn", PyvtkRenderer_LightFollowCameraOn, METH_VARARGS,
   "V.LightFollowCameraOn()\nC++: virtual void LightFollowCameraOn()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. If LightFollowCamera is on, lights that are designated as\nHeadlights or CameraLights will be adjusted to move with this\nrenderer's camera. If LightFollowCamera is off, the lights will\nnot be adjusted.\n\n* (Note: In previous versions of vtk, this light-tracking\n* functionality was part of the interactors, not the renderer.\n  For\n* backwards compatibility, the older, more limited interactor\n* behavior is enabled by default. To disable this mode, turn the\n* interactor's LightFollowCamera flag OFF, and leave the\n  renderer's\n* LightFollowCamera flag ON.)\n"},
  {"LightFollowCameraOff", PyvtkRenderer_LightFollowCameraOff, METH_VARARGS,
   "V.LightFollowCameraOff()\nC++: virtual void LightFollowCameraOff()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. If LightFollowCamera is on, lights that are designated as\nHeadlights or CameraLights will be adjusted to move with this\nrenderer's camera. If LightFollowCamera is off, the lights will\nnot be adjusted.\n\n* (Note: In previous versions of vtk, this light-tracking\n* functionality was part of the interactors, not the renderer.\n  For\n* backwards compatibility, the older, more limited interactor\n* behavior is enabled by default. To disable this mode, turn the\n* interactor's LightFollowCamera flag OFF, and leave the\n  renderer's\n* LightFollowCamera flag ON.)\n"},
  {"GetAutomaticLightCreation", PyvtkRenderer_GetAutomaticLightCreation, METH_VARARGS,
   "V.GetAutomaticLightCreation() -> int\nC++: virtual vtkTypeBool GetAutomaticLightCreation()\n\nTurn on/off a flag which disables the automatic light creation\ncapability. Normally in VTK if no lights are associated with the\nrenderer, then a light is automatically created. However, in\nspecial circumstances this feature is undesirable, so the\nfollowing boolean is provided to disable automatic light\ncreation. (Turn AutomaticLightCreation off if you do not want\nlights to be created.)\n"},
  {"SetAutomaticLightCreation", PyvtkRenderer_SetAutomaticLightCreation, METH_VARARGS,
   "V.SetAutomaticLightCreation(int)\nC++: virtual void SetAutomaticLightCreation(vtkTypeBool _arg)\n\nTurn on/off a flag which disables the automatic light creation\ncapability. Normally in VTK if no lights are associated with the\nrenderer, then a light is automatically created. However, in\nspecial circumstances this feature is undesirable, so the\nfollowing boolean is provided to disable automatic light\ncreation. (Turn AutomaticLightCreation off if you do not want\nlights to be created.)\n"},
  {"AutomaticLightCreationOn", PyvtkRenderer_AutomaticLightCreationOn, METH_VARARGS,
   "V.AutomaticLightCreationOn()\nC++: virtual void AutomaticLightCreationOn()\n\nTurn on/off a flag which disables the automatic light creation\ncapability. Normally in VTK if no lights are associated with the\nrenderer, then a light is automatically created. However, in\nspecial circumstances this feature is undesirable, so the\nfollowing boolean is provided to disable automatic light\ncreation. (Turn AutomaticLightCreation off if you do not want\nlights to be created.)\n"},
  {"AutomaticLightCreationOff", PyvtkRenderer_AutomaticLightCreationOff, METH_VARARGS,
   "V.AutomaticLightCreationOff()\nC++: virtual void AutomaticLightCreationOff()\n\nTurn on/off a flag which disables the automatic light creation\ncapability. Normally in VTK if no lights are associated with the\nrenderer, then a light is automatically created. However, in\nspecial circumstances this feature is undesirable, so the\nfollowing boolean is provided to disable automatic light\ncreation. (Turn AutomaticLightCreation off if you do not want\nlights to be created.)\n"},
  {"UpdateLightsGeometryToFollowCamera", PyvtkRenderer_UpdateLightsGeometryToFollowCamera, METH_VARARGS,
   "V.UpdateLightsGeometryToFollowCamera() -> int\nC++: virtual int UpdateLightsGeometryToFollowCamera(void)\n\nAsk the lights in the scene that are not in world space (for\ninstance, Headlights or CameraLights that are attached to the\ncamera) to update their geometry to match the active camera.\n"},
  {"GetVolumes", PyvtkRenderer_GetVolumes, METH_VARARGS,
   "V.GetVolumes() -> vtkVolumeCollection\nC++: vtkVolumeCollection *GetVolumes()\n\nReturn the collection of volumes.\n"},
  {"GetActors", PyvtkRenderer_GetActors, METH_VARARGS,
   "V.GetActors() -> vtkActorCollection\nC++: vtkActorCollection *GetActors()\n\nReturn any actors in this renderer.\n"},
  {"SetActiveCamera", PyvtkRenderer_SetActiveCamera, METH_VARARGS,
   "V.SetActiveCamera(vtkCamera)\nC++: void SetActiveCamera(vtkCamera *)\n\nSpecify the camera to use for this renderer.\n"},
  {"GetActiveCamera", PyvtkRenderer_GetActiveCamera, METH_VARARGS,
   "V.GetActiveCamera() -> vtkCamera\nC++: vtkCamera *GetActiveCamera()\n\nGet the current camera. If there is not camera assigned to the\nrenderer already, a new one is created automatically. This does\n*not* reset the camera.\n"},
  {"MakeCamera", PyvtkRenderer_MakeCamera, METH_VARARGS,
   "V.MakeCamera() -> vtkCamera\nC++: virtual vtkCamera *MakeCamera()\n\nCreate a new Camera sutible for use with this type of Renderer.\nFor example, a vtkMesaRenderer should create a vtkMesaCamera in\nthis function.   The default is to just call vtkCamera::New.\n"},
  {"SetErase", PyvtkRenderer_SetErase, METH_VARARGS,
   "V.SetErase(int)\nC++: virtual void SetErase(vtkTypeBool _arg)\n\nWhen this flag is off, the renderer will not erase the background\nor the Zbuffer.  It is used to have overlapping renderers. Both\nthe RenderWindow Erase and Render Erase must be on for the camera\nto clear the renderer.  By default, Erase is on.\n"},
  {"GetErase", PyvtkRenderer_GetErase, METH_VARARGS,
   "V.GetErase() -> int\nC++: virtual vtkTypeBool GetErase()\n\nWhen this flag is off, the renderer will not erase the background\nor the Zbuffer.  It is used to have overlapping renderers. Both\nthe RenderWindow Erase and Render Erase must be on for the camera\nto clear the renderer.  By default, Erase is on.\n"},
  {"EraseOn", PyvtkRenderer_EraseOn, METH_VARARGS,
   "V.EraseOn()\nC++: virtual void EraseOn()\n\nWhen this flag is off, the renderer will not erase the background\nor the Zbuffer.  It is used to have overlapping renderers. Both\nthe RenderWindow Erase and Render Erase must be on for the camera\nto clear the renderer.  By default, Erase is on.\n"},
  {"EraseOff", PyvtkRenderer_EraseOff, METH_VARARGS,
   "V.EraseOff()\nC++: virtual void EraseOff()\n\nWhen this flag is off, the renderer will not erase the background\nor the Zbuffer.  It is used to have overlapping renderers. Both\nthe RenderWindow Erase and Render Erase must be on for the camera\nto clear the renderer.  By default, Erase is on.\n"},
  {"SetDraw", PyvtkRenderer_SetDraw, METH_VARARGS,
   "V.SetDraw(int)\nC++: virtual void SetDraw(vtkTypeBool _arg)\n\nWhen this flag is off, render commands are ignored.  It is used\nto either multiplex a vtkRenderWindow or render only part of a\nvtkRenderWindow. By default, Draw is on.\n"},
  {"GetDraw", PyvtkRenderer_GetDraw, METH_VARARGS,
   "V.GetDraw() -> int\nC++: virtual vtkTypeBool GetDraw()\n\nWhen this flag is off, render commands are ignored.  It is used\nto either multiplex a vtkRenderWindow or render only part of a\nvtkRenderWindow. By default, Draw is on.\n"},
  {"DrawOn", PyvtkRenderer_DrawOn, METH_VARARGS,
   "V.DrawOn()\nC++: virtual void DrawOn()\n\nWhen this flag is off, render commands are ignored.  It is used\nto either multiplex a vtkRenderWindow or render only part of a\nvtkRenderWindow. By default, Draw is on.\n"},
  {"DrawOff", PyvtkRenderer_DrawOff, METH_VARARGS,
   "V.DrawOff()\nC++: virtual void DrawOff()\n\nWhen this flag is off, render commands are ignored.  It is used\nto either multiplex a vtkRenderWindow or render only part of a\nvtkRenderWindow. By default, Draw is on.\n"},
  {"CaptureGL2PSSpecialProp", PyvtkRenderer_CaptureGL2PSSpecialProp, METH_VARARGS,
   "V.CaptureGL2PSSpecialProp(vtkProp) -> int\nC++: int CaptureGL2PSSpecialProp(vtkProp *)\n\nThis function is called to capture an instance of vtkProp that\nrequires special handling during\nvtkRenderWindow::CaptureGL2PSSpecialProps().\n"},
  {"SetGL2PSSpecialPropCollection", PyvtkRenderer_SetGL2PSSpecialPropCollection, METH_VARARGS,
   "V.SetGL2PSSpecialPropCollection(vtkPropCollection)\nC++: void SetGL2PSSpecialPropCollection(vtkPropCollection *)\n\nSet the prop collection object used during\nvtkRenderWindow::CaptureGL2PSSpecialProps(). Do not call\nmanually, this is handled automatically by the render window.\n"},
  {"AddCuller", PyvtkRenderer_AddCuller, METH_VARARGS,
   "V.AddCuller(vtkCuller)\nC++: void AddCuller(vtkCuller *)\n\nAdd an culler to the list of cullers.\n"},
  {"RemoveCuller", PyvtkRenderer_RemoveCuller, METH_VARARGS,
   "V.RemoveCuller(vtkCuller)\nC++: void RemoveCuller(vtkCuller *)\n\nRemove an actor from the list of cullers.\n"},
  {"GetCullers", PyvtkRenderer_GetCullers, METH_VARARGS,
   "V.GetCullers() -> vtkCullerCollection\nC++: vtkCullerCollection *GetCullers()\n\nReturn the collection of cullers.\n"},
  {"SetAmbient", PyvtkRenderer_SetAmbient, METH_VARARGS,
   "V.SetAmbient(float, float, float)\nC++: void SetAmbient(double, double, double)\nV.SetAmbient((float, float, float))\nC++: void SetAmbient(double a[3])\n\n"},
  {"GetAmbient", PyvtkRenderer_GetAmbient, METH_VARARGS,
   "V.GetAmbient() -> (float, float, float)\nC++: double *GetAmbient()\n\nSet the intensity of ambient lighting.\n"},
  {"SetAllocatedRenderTime", PyvtkRenderer_SetAllocatedRenderTime, METH_VARARGS,
   "V.SetAllocatedRenderTime(float)\nC++: virtual void SetAllocatedRenderTime(double _arg)\n\nSet/Get the amount of time this renderer is allowed to spend\nrendering its scene. This is used by vtkLODActor's.\n"},
  {"GetAllocatedRenderTime", PyvtkRenderer_GetAllocatedRenderTime, METH_VARARGS,
   "V.GetAllocatedRenderTime() -> float\nC++: virtual double GetAllocatedRenderTime()\n\nSet/Get the amount of time this renderer is allowed to spend\nrendering its scene. This is used by vtkLODActor's.\n"},
  {"GetTimeFactor", PyvtkRenderer_GetTimeFactor, METH_VARARGS,
   "V.GetTimeFactor() -> float\nC++: virtual double GetTimeFactor()\n\nGet the ratio between allocated time and actual render time.\nTimeFactor has been taken out of the render process. It is still\ncomputed in case someone finds it useful. It may be taken away in\nthe future.\n"},
  {"Render", PyvtkRenderer_Render, METH_VARARGS,
   "V.Render()\nC++: virtual void Render()\n\nCALLED BY vtkRenderWindow ONLY. End-user pass your way and call\nvtkRenderWindow::Render(). Create an image. This is a superclass\nmethod which will in turn call the DeviceRender method of\nSubclasses of vtkRenderer.\n"},
  {"DeviceRender", PyvtkRenderer_DeviceRender, METH_VARARGS,
   "V.DeviceRender()\nC++: virtual void DeviceRender()\n\nCreate an image. Subclasses of vtkRenderer must implement this\nmethod.\n"},
  {"DeviceRenderOpaqueGeometry", PyvtkRenderer_DeviceRenderOpaqueGeometry, METH_VARARGS,
   "V.DeviceRenderOpaqueGeometry()\nC++: virtual void DeviceRenderOpaqueGeometry()\n\nRender opaque polygonal geometry. Default implementation just\ncalls UpdateOpaquePolygonalGeometry(). Subclasses of vtkRenderer\nthat can deal with, e.g. hidden line removal must override this\nmethod.\n"},
  {"DeviceRenderTranslucentPolygonalGeometry", PyvtkRenderer_DeviceRenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.DeviceRenderTranslucentPolygonalGeometry()\nC++: virtual void DeviceRenderTranslucentPolygonalGeometry()\n\nRender translucent polygonal geometry. Default implementation\njust call UpdateTranslucentPolygonalGeometry(). Subclasses of\nvtkRenderer that can deal with depth peeling must override this\nmethod. If UseDepthPeeling and UseDepthPeelingForVolumes are\ntrue, volumetric data will be rendered here as well. It updates\nboolean ivar LastRenderingUsedDepthPeeling.\n"},
  {"ClearLights", PyvtkRenderer_ClearLights, METH_VARARGS,
   "V.ClearLights()\nC++: virtual void ClearLights(void)\n\nInternal method temporarily removes lights before reloading them\ninto graphics pipeline.\n"},
  {"Clear", PyvtkRenderer_Clear, METH_VARARGS,
   "V.Clear()\nC++: virtual void Clear()\n\nClear the image to the background color.\n"},
  {"VisibleActorCount", PyvtkRenderer_VisibleActorCount, METH_VARARGS,
   "V.VisibleActorCount() -> int\nC++: int VisibleActorCount()\n\nReturns the number of visible actors.\n"},
  {"VisibleVolumeCount", PyvtkRenderer_VisibleVolumeCount, METH_VARARGS,
   "V.VisibleVolumeCount() -> int\nC++: int VisibleVolumeCount()\n\nReturns the number of visible volumes.\n"},
  {"ComputeVisiblePropBounds", PyvtkRenderer_ComputeVisiblePropBounds, METH_VARARGS,
   "V.ComputeVisiblePropBounds([float, float, float, float, float,\n    float])\nC++: void ComputeVisiblePropBounds(double bounds[6])\nV.ComputeVisiblePropBounds() -> (float, float, float, float,\n    float, float)\nC++: double *ComputeVisiblePropBounds()\n\nCompute the bounding box of all the visible props Used in\nResetCamera() and ResetCameraClippingRange()\n"},
  {"ResetCameraClippingRange", PyvtkRenderer_ResetCameraClippingRange, METH_VARARGS,
   "V.ResetCameraClippingRange()\nC++: virtual void ResetCameraClippingRange()\nV.ResetCameraClippingRange([float, float, float, float, float,\n    float])\nC++: virtual void ResetCameraClippingRange(double bounds[6])\nV.ResetCameraClippingRange(float, float, float, float, float,\n    float)\nC++: virtual void ResetCameraClippingRange(double xmin,\n    double xmax, double ymin, double ymax, double zmin,\n    double zmax)\n\nReset the camera clipping range based on the bounds of the\nvisible actors. This ensures that no props are cut off\n"},
  {"SetNearClippingPlaneTolerance", PyvtkRenderer_SetNearClippingPlaneTolerance, METH_VARARGS,
   "V.SetNearClippingPlaneTolerance(float)\nC++: virtual void SetNearClippingPlaneTolerance(double _arg)\n\nSpecify tolerance for near clipping plane distance to the camera\nas a percentage of the far clipping plane distance. By default\nthis will be set to 0.01 for 16 bit zbuffers and 0.001 for higher\ndepth z buffers\n"},
  {"GetNearClippingPlaneToleranceMinValue", PyvtkRenderer_GetNearClippingPlaneToleranceMinValue, METH_VARARGS,
   "V.GetNearClippingPlaneToleranceMinValue() -> float\nC++: virtual double GetNearClippingPlaneToleranceMinValue()\n\nSpecify tolerance for near clipping plane distance to the camera\nas a percentage of the far clipping plane distance. By default\nthis will be set to 0.01 for 16 bit zbuffers and 0.001 for higher\ndepth z buffers\n"},
  {"GetNearClippingPlaneToleranceMaxValue", PyvtkRenderer_GetNearClippingPlaneToleranceMaxValue, METH_VARARGS,
   "V.GetNearClippingPlaneToleranceMaxValue() -> float\nC++: virtual double GetNearClippingPlaneToleranceMaxValue()\n\nSpecify tolerance for near clipping plane distance to the camera\nas a percentage of the far clipping plane distance. By default\nthis will be set to 0.01 for 16 bit zbuffers and 0.001 for higher\ndepth z buffers\n"},
  {"GetNearClippingPlaneTolerance", PyvtkRenderer_GetNearClippingPlaneTolerance, METH_VARARGS,
   "V.GetNearClippingPlaneTolerance() -> float\nC++: virtual double GetNearClippingPlaneTolerance()\n\nSpecify tolerance for near clipping plane distance to the camera\nas a percentage of the far clipping plane distance. By default\nthis will be set to 0.01 for 16 bit zbuffers and 0.001 for higher\ndepth z buffers\n"},
  {"SetClippingRangeExpansion", PyvtkRenderer_SetClippingRangeExpansion, METH_VARARGS,
   "V.SetClippingRangeExpansion(float)\nC++: virtual void SetClippingRangeExpansion(double _arg)\n\nSpecify enlargement of bounds when resetting the camera clipping\nrange.  By default the range is not expanded by any percent of\nthe (far - near) on the near and far sides\n"},
  {"GetClippingRangeExpansionMinValue", PyvtkRenderer_GetClippingRangeExpansionMinValue, METH_VARARGS,
   "V.GetClippingRangeExpansionMinValue() -> float\nC++: virtual double GetClippingRangeExpansionMinValue()\n\nSpecify enlargement of bounds when resetting the camera clipping\nrange.  By default the range is not expanded by any percent of\nthe (far - near) on the near and far sides\n"},
  {"GetClippingRangeExpansionMaxValue", PyvtkRenderer_GetClippingRangeExpansionMaxValue, METH_VARARGS,
   "V.GetClippingRangeExpansionMaxValue() -> float\nC++: virtual double GetClippingRangeExpansionMaxValue()\n\nSpecify enlargement of bounds when resetting the camera clipping\nrange.  By default the range is not expanded by any percent of\nthe (far - near) on the near and far sides\n"},
  {"GetClippingRangeExpansion", PyvtkRenderer_GetClippingRangeExpansion, METH_VARARGS,
   "V.GetClippingRangeExpansion() -> float\nC++: virtual double GetClippingRangeExpansion()\n\nSpecify enlargement of bounds when resetting the camera clipping\nrange.  By default the range is not expanded by any percent of\nthe (far - near) on the near and far sides\n"},
  {"ResetCamera", PyvtkRenderer_ResetCamera, METH_VARARGS,
   "V.ResetCamera()\nC++: virtual void ResetCamera()\nV.ResetCamera([float, float, float, float, float, float])\nC++: virtual void ResetCamera(double bounds[6])\nV.ResetCamera(float, float, float, float, float, float)\nC++: virtual void ResetCamera(double xmin, double xmax,\n    double ymin, double ymax, double zmin, double zmax)\n\nAutomatically set up the camera based on the visible actors. The\ncamera will reposition itself to view the center point of the\nactors, and move along its initial view plane normal (i.e.,\nvector defined from camera position to focal point) so that all\nof the actors can be seen.\n"},
  {"SetRenderWindow", PyvtkRenderer_SetRenderWindow, METH_VARARGS,
   "V.SetRenderWindow(vtkRenderWindow)\nC++: void SetRenderWindow(vtkRenderWindow *)\n\nSpecify the rendering window in which to draw. This is\nautomatically set when the renderer is created by MakeRenderer. \nThe user probably shouldn't ever need to call this method.\n"},
  {"GetRenderWindow", PyvtkRenderer_GetRenderWindow, METH_VARARGS,
   "V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nSpecify the rendering window in which to draw. This is\nautomatically set when the renderer is created by MakeRenderer. \nThe user probably shouldn't ever need to call this method.\n"},
  {"GetVTKWindow", PyvtkRenderer_GetVTKWindow, METH_VARARGS,
   "V.GetVTKWindow() -> vtkWindow\nC++: vtkWindow *GetVTKWindow() override;\n\nSpecify the rendering window in which to draw. This is\nautomatically set when the renderer is created by MakeRenderer. \nThe user probably shouldn't ever need to call this method.\n"},
  {"SetBackingStore", PyvtkRenderer_SetBackingStore, METH_VARARGS,
   "V.SetBackingStore(int)\nC++: virtual void SetBackingStore(vtkTypeBool _arg)\n\nTurn on/off using backing store. This may cause the re-rendering\ntime to be slightly slower when the view changes. But it is much\nfaster when the image has not changed, such as during an expose\nevent.\n"},
  {"GetBackingStore", PyvtkRenderer_GetBackingStore, METH_VARARGS,
   "V.GetBackingStore() -> int\nC++: virtual vtkTypeBool GetBackingStore()\n\nTurn on/off using backing store. This may cause the re-rendering\ntime to be slightly slower when the view changes. But it is much\nfaster when the image has not changed, such as during an expose\nevent.\n"},
  {"BackingStoreOn", PyvtkRenderer_BackingStoreOn, METH_VARARGS,
   "V.BackingStoreOn()\nC++: virtual void BackingStoreOn()\n\nTurn on/off using backing store. This may cause the re-rendering\ntime to be slightly slower when the view changes. But it is much\nfaster when the image has not changed, such as during an expose\nevent.\n"},
  {"BackingStoreOff", PyvtkRenderer_BackingStoreOff, METH_VARARGS,
   "V.BackingStoreOff()\nC++: virtual void BackingStoreOff()\n\nTurn on/off using backing store. This may cause the re-rendering\ntime to be slightly slower when the view changes. But it is much\nfaster when the image has not changed, such as during an expose\nevent.\n"},
  {"SetInteractive", PyvtkRenderer_SetInteractive, METH_VARARGS,
   "V.SetInteractive(int)\nC++: virtual void SetInteractive(vtkTypeBool _arg)\n\nTurn on/off interactive status.  An interactive renderer is one\nthat can receive events from an interactor.  Should only be set\nif there are multiple renderers in the same section of the\nviewport.\n"},
  {"GetInteractive", PyvtkRenderer_GetInteractive, METH_VARARGS,
   "V.GetInteractive() -> int\nC++: virtual vtkTypeBool GetInteractive()\n\nTurn on/off interactive status.  An interactive renderer is one\nthat can receive events from an interactor.  Should only be set\nif there are multiple renderers in the same section of the\nviewport.\n"},
  {"InteractiveOn", PyvtkRenderer_InteractiveOn, METH_VARARGS,
   "V.InteractiveOn()\nC++: virtual void InteractiveOn()\n\nTurn on/off interactive status.  An interactive renderer is one\nthat can receive events from an interactor.  Should only be set\nif there are multiple renderers in the same section of the\nviewport.\n"},
  {"InteractiveOff", PyvtkRenderer_InteractiveOff, METH_VARARGS,
   "V.InteractiveOff()\nC++: virtual void InteractiveOff()\n\nTurn on/off interactive status.  An interactive renderer is one\nthat can receive events from an interactor.  Should only be set\nif there are multiple renderers in the same section of the\nviewport.\n"},
  {"SetLayer", PyvtkRenderer_SetLayer, METH_VARARGS,
   "V.SetLayer(int)\nC++: virtual void SetLayer(int layer)\n\nSet/Get the layer that this renderer belongs to.  This is only\nused if there are layered renderers.\n\n* Note: Changing the layer will update the PreserveColorBuffer\n  setting. If\n* the layer is 0, PreserveColorBuffer will be set to false,\n  making the\n* bottom renderer opaque. If the layer is non-zero,\n  PreserveColorBuffer will\n* be set to true, giving the renderer a transparent background.\n  If other\n* PreserveColorBuffer configurations are desired, they must be\n  adjusted after\n* the layer is set.\n"},
  {"GetLayer", PyvtkRenderer_GetLayer, METH_VARARGS,
   "V.GetLayer() -> int\nC++: virtual int GetLayer()\n\nSet/Get the layer that this renderer belongs to.  This is only\nused if there are layered renderers.\n\n* Note: Changing the layer will update the PreserveColorBuffer\n  setting. If\n* the layer is 0, PreserveColorBuffer will be set to false,\n  making the\n* bottom renderer opaque. If the layer is non-zero,\n  PreserveColorBuffer will\n* be set to true, giving the renderer a transparent background.\n  If other\n* PreserveColorBuffer configurations are desired, they must be\n  adjusted after\n* the layer is set.\n"},
  {"GetPreserveColorBuffer", PyvtkRenderer_GetPreserveColorBuffer, METH_VARARGS,
   "V.GetPreserveColorBuffer() -> int\nC++: virtual vtkTypeBool GetPreserveColorBuffer()\n\nBy default, the renderer at layer 0 is opaque, and all non-zero\nlayer renderers are transparent. This flag allows this behavior\nto be overridden. If true, this setting will force the renderer\nto preserve the existing color buffer regardless of layer. If\nfalse, it will always be cleared at the start of rendering.\n\n* This flag influences the Transparent() method, and is updated\n  by calls to\n* SetLayer(). For this reason it should only be set after\n  changing the layer.\n"},
  {"SetPreserveColorBuffer", PyvtkRenderer_SetPreserveColorBuffer, METH_VARARGS,
   "V.SetPreserveColorBuffer(int)\nC++: virtual void SetPreserveColorBuffer(vtkTypeBool _arg)\n\nBy default, the renderer at layer 0 is opaque, and all non-zero\nlayer renderers are transparent. This flag allows this behavior\nto be overridden. If true, this setting will force the renderer\nto preserve the existing color buffer regardless of layer. If\nfalse, it will always be cleared at the start of rendering.\n\n* This flag influences the Transparent() method, and is updated\n  by calls to\n* SetLayer(). For this reason it should only be set after\n  changing the layer.\n"},
  {"PreserveColorBufferOn", PyvtkRenderer_PreserveColorBufferOn, METH_VARARGS,
   "V.PreserveColorBufferOn()\nC++: virtual void PreserveColorBufferOn()\n\nBy default, the renderer at layer 0 is opaque, and all non-zero\nlayer renderers are transparent. This flag allows this behavior\nto be overridden. If true, this setting will force the renderer\nto preserve the existing color buffer regardless of layer. If\nfalse, it will always be cleared at the start of rendering.\n\n* This flag influences the Transparent() method, and is updated\n  by calls to\n* SetLayer(). For this reason it should only be set after\n  changing the layer.\n"},
  {"PreserveColorBufferOff", PyvtkRenderer_PreserveColorBufferOff, METH_VARARGS,
   "V.PreserveColorBufferOff()\nC++: virtual void PreserveColorBufferOff()\n\nBy default, the renderer at layer 0 is opaque, and all non-zero\nlayer renderers are transparent. This flag allows this behavior\nto be overridden. If true, this setting will force the renderer\nto preserve the existing color buffer regardless of layer. If\nfalse, it will always be cleared at the start of rendering.\n\n* This flag influences the Transparent() method, and is updated\n  by calls to\n* SetLayer(). For this reason it should only be set after\n  changing the layer.\n"},
  {"SetPreserveDepthBuffer", PyvtkRenderer_SetPreserveDepthBuffer, METH_VARARGS,
   "V.SetPreserveDepthBuffer(int)\nC++: virtual void SetPreserveDepthBuffer(vtkTypeBool _arg)\n\nBy default, the depth buffer is reset for each renderer. If this\nflag is true, this renderer will use the existing depth buffer\nfor its rendering.\n"},
  {"GetPreserveDepthBuffer", PyvtkRenderer_GetPreserveDepthBuffer, METH_VARARGS,
   "V.GetPreserveDepthBuffer() -> int\nC++: virtual vtkTypeBool GetPreserveDepthBuffer()\n\nBy default, the depth buffer is reset for each renderer. If this\nflag is true, this renderer will use the existing depth buffer\nfor its rendering.\n"},
  {"PreserveDepthBufferOn", PyvtkRenderer_PreserveDepthBufferOn, METH_VARARGS,
   "V.PreserveDepthBufferOn()\nC++: virtual void PreserveDepthBufferOn()\n\nBy default, the depth buffer is reset for each renderer. If this\nflag is true, this renderer will use the existing depth buffer\nfor its rendering.\n"},
  {"PreserveDepthBufferOff", PyvtkRenderer_PreserveDepthBufferOff, METH_VARARGS,
   "V.PreserveDepthBufferOff()\nC++: virtual void PreserveDepthBufferOff()\n\nBy default, the depth buffer is reset for each renderer. If this\nflag is true, this renderer will use the existing depth buffer\nfor its rendering.\n"},
  {"Transparent", PyvtkRenderer_Transparent, METH_VARARGS,
   "V.Transparent() -> int\nC++: int Transparent()\n\nReturns a boolean indicating if this renderer is transparent.  It\nis transparent if it is not in the deepest layer of its render\nwindow.\n"},
  {"WorldToView", PyvtkRenderer_WorldToView, METH_VARARGS,
   "V.WorldToView()\nC++: void WorldToView() override;\nV.WorldToView(float, float, float)\nC++: void WorldToView(double &wx, double &wy, double &wz)\n    override;\n\nConvert world point coordinates to view coordinates.\n"},
  {"ViewToWorld", PyvtkRenderer_ViewToWorld, METH_VARARGS,
   "V.ViewToWorld()\nC++: void ViewToWorld() override;\nV.ViewToWorld(float, float, float)\nC++: void ViewToWorld(double &wx, double &wy, double &wz)\n    override;\n\nConvert view point coordinates to world coordinates.\n"},
  {"WorldToPose", PyvtkRenderer_WorldToPose, METH_VARARGS,
   "V.WorldToPose(float, float, float)\nC++: void WorldToPose(double &wx, double &wy, double &wz)\n    override;\n\nConvert to from pose coordinates\n"},
  {"PoseToWorld", PyvtkRenderer_PoseToWorld, METH_VARARGS,
   "V.PoseToWorld(float, float, float)\nC++: void PoseToWorld(double &wx, double &wy, double &wz)\n    override;\n\nConvert to from pose coordinates\n"},
  {"ViewToPose", PyvtkRenderer_ViewToPose, METH_VARARGS,
   "V.ViewToPose(float, float, float)\nC++: void ViewToPose(double &wx, double &wy, double &wz) override;\n\nConvert to from pose coordinates\n"},
  {"PoseToView", PyvtkRenderer_PoseToView, METH_VARARGS,
   "V.PoseToView(float, float, float)\nC++: void PoseToView(double &wx, double &wy, double &wz) override;\n\nConvert to from pose coordinates\n"},
  {"GetZ", PyvtkRenderer_GetZ, METH_VARARGS,
   "V.GetZ(int, int) -> float\nC++: double GetZ(int x, int y)\n\nGiven a pixel location, return the Z value. The z value is\nnormalized (0,1) between the front and back clipping planes.\n"},
  {"GetMTime", PyvtkRenderer_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime of the renderer also considering its ivars.\n"},
  {"GetLastRenderTimeInSeconds", PyvtkRenderer_GetLastRenderTimeInSeconds, METH_VARARGS,
   "V.GetLastRenderTimeInSeconds() -> float\nC++: virtual double GetLastRenderTimeInSeconds()\n\nGet the time required, in seconds, for the last Render call.\n"},
  {"GetNumberOfPropsRendered", PyvtkRenderer_GetNumberOfPropsRendered, METH_VARARGS,
   "V.GetNumberOfPropsRendered() -> int\nC++: virtual int GetNumberOfPropsRendered()\n\nShould be used internally only during a render Get the number of\nprops that were rendered using a RenderOpaqueGeometry or\nRenderTranslucentPolygonalGeometry call. This is used to know if\nsomething is in the frame buffer.\n"},
  {"PickProp", PyvtkRenderer_PickProp, METH_VARARGS,
   "V.PickProp(float, float) -> vtkAssemblyPath\nC++: vtkAssemblyPath *PickProp(double selectionX,\n    double selectionY) override;\nV.PickProp(float, float, float, float) -> vtkAssemblyPath\nC++: vtkAssemblyPath *PickProp(double selectionX1,\n    double selectionY1, double selectionX2, double selectionY2)\n    override;\n\nReturn the prop (via a vtkAssemblyPath) that has the highest z\nvalue at the given x, y position in the viewport.  Basically, the\ntop most prop that renders the pixel at selectionX, selectionY\nwill be returned. If nothing was picked then NULL is returned. \nThis method selects from the renderers Prop list.\n"},
  {"StereoMidpoint", PyvtkRenderer_StereoMidpoint, METH_VARARGS,
   "V.StereoMidpoint()\nC++: virtual void StereoMidpoint()\n\nDo anything necessary between rendering the left and right\nviewpoints in a stereo render. Doesn't do anything except in the\nderived vtkIceTRenderer in ParaView.\n"},
  {"GetTiledAspectRatio", PyvtkRenderer_GetTiledAspectRatio, METH_VARARGS,
   "V.GetTiledAspectRatio() -> float\nC++: double GetTiledAspectRatio()\n\nCompute the aspect ratio of this renderer for the current tile.\nWhen tiled displays are used the aspect ratio of the renderer for\na given tile may be different that the aspect ratio of the\nrenderer when rendered in it entirity\n"},
  {"IsActiveCameraCreated", PyvtkRenderer_IsActiveCameraCreated, METH_VARARGS,
   "V.IsActiveCameraCreated() -> int\nC++: int IsActiveCameraCreated()\n\nThis method returns 1 if the ActiveCamera has already been set or\nautomatically created by the renderer. It returns 0 if the\nActiveCamera does not yet exist.\n"},
  {"SetUseDepthPeeling", PyvtkRenderer_SetUseDepthPeeling, METH_VARARGS,
   "V.SetUseDepthPeeling(int)\nC++: virtual void SetUseDepthPeeling(vtkTypeBool _arg)\n\nTurn on/off rendering of translucent material with depth peeling\ntechnique. The render window must have alpha bits (ie call\nSetAlphaBitPlanes(1)) and no multisample buffer (ie call\nSetMultiSamples(0) ) to support depth peeling. If UseDepthPeeling\nis on and the GPU supports it, depth peeling is used for\nrendering translucent materials. If UseDepthPeeling is off, alpha\nblending is used. Initial value is off.\n"},
  {"GetUseDepthPeeling", PyvtkRenderer_GetUseDepthPeeling, METH_VARARGS,
   "V.GetUseDepthPeeling() -> int\nC++: virtual vtkTypeBool GetUseDepthPeeling()\n\nTurn on/off rendering of translucent material with depth peeling\ntechnique. The render window must have alpha bits (ie call\nSetAlphaBitPlanes(1)) and no multisample buffer (ie call\nSetMultiSamples(0) ) to support depth peeling. If UseDepthPeeling\nis on and the GPU supports it, depth peeling is used for\nrendering translucent materials. If UseDepthPeeling is off, alpha\nblending is used. Initial value is off.\n"},
  {"UseDepthPeelingOn", PyvtkRenderer_UseDepthPeelingOn, METH_VARARGS,
   "V.UseDepthPeelingOn()\nC++: virtual void UseDepthPeelingOn()\n\nTurn on/off rendering of translucent material with depth peeling\ntechnique. The render window must have alpha bits (ie call\nSetAlphaBitPlanes(1)) and no multisample buffer (ie call\nSetMultiSamples(0) ) to support depth peeling. If UseDepthPeeling\nis on and the GPU supports it, depth peeling is used for\nrendering translucent materials. If UseDepthPeeling is off, alpha\nblending is used. Initial value is off.\n"},
  {"UseDepthPeelingOff", PyvtkRenderer_UseDepthPeelingOff, METH_VARARGS,
   "V.UseDepthPeelingOff()\nC++: virtual void UseDepthPeelingOff()\n\nTurn on/off rendering of translucent material with depth peeling\ntechnique. The render window must have alpha bits (ie call\nSetAlphaBitPlanes(1)) and no multisample buffer (ie call\nSetMultiSamples(0) ) to support depth peeling. If UseDepthPeeling\nis on and the GPU supports it, depth peeling is used for\nrendering translucent materials. If UseDepthPeeling is off, alpha\nblending is used. Initial value is off.\n"},
  {"SetUseDepthPeelingForVolumes", PyvtkRenderer_SetUseDepthPeelingForVolumes, METH_VARARGS,
   "V.SetUseDepthPeelingForVolumes(bool)\nC++: virtual void SetUseDepthPeelingForVolumes(bool _arg)\n\nThis flag is on and the GPU supports it, depth-peel volumes along\nwith the translucent geometry. Only supported on OpenGL2 with\ndual-depth peeling. Default is false.\n"},
  {"GetUseDepthPeelingForVolumes", PyvtkRenderer_GetUseDepthPeelingForVolumes, METH_VARARGS,
   "V.GetUseDepthPeelingForVolumes() -> bool\nC++: virtual bool GetUseDepthPeelingForVolumes()\n\n"},
  {"UseDepthPeelingForVolumesOn", PyvtkRenderer_UseDepthPeelingForVolumesOn, METH_VARARGS,
   "V.UseDepthPeelingForVolumesOn()\nC++: virtual void UseDepthPeelingForVolumesOn()\n\n"},
  {"UseDepthPeelingForVolumesOff", PyvtkRenderer_UseDepthPeelingForVolumesOff, METH_VARARGS,
   "V.UseDepthPeelingForVolumesOff()\nC++: virtual void UseDepthPeelingForVolumesOff()\n\n"},
  {"SetOcclusionRatio", PyvtkRenderer_SetOcclusionRatio, METH_VARARGS,
   "V.SetOcclusionRatio(float)\nC++: virtual void SetOcclusionRatio(double _arg)\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {"GetOcclusionRatioMinValue", PyvtkRenderer_GetOcclusionRatioMinValue, METH_VARARGS,
   "V.GetOcclusionRatioMinValue() -> float\nC++: virtual double GetOcclusionRatioMinValue()\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {"GetOcclusionRatioMaxValue", PyvtkRenderer_GetOcclusionRatioMaxValue, METH_VARARGS,
   "V.GetOcclusionRatioMaxValue() -> float\nC++: virtual double GetOcclusionRatioMaxValue()\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {"GetOcclusionRatio", PyvtkRenderer_GetOcclusionRatio, METH_VARARGS,
   "V.GetOcclusionRatio() -> float\nC++: virtual double GetOcclusionRatio()\n\nIn case of use of depth peeling technique for rendering\ntranslucent material, define the threshold under which the\nalgorithm stops to iterate over peel layers. This is the ratio of\nthe number of pixels that have been touched by the last layer\nover the total number of pixels of the viewport area. Initial\nvalue is 0.0, meaning rendering have to be exact. Greater values\nmay speed-up the rendering with small impact on the quality.\n"},
  {"SetMaximumNumberOfPeels", PyvtkRenderer_SetMaximumNumberOfPeels, METH_VARARGS,
   "V.SetMaximumNumberOfPeels(int)\nC++: virtual void SetMaximumNumberOfPeels(int _arg)\n\nIn case of depth peeling, define the maximum number of peeling\nlayers. Initial value is 4. A special value of 0 means no maximum\nlimit. It has to be a positive value.\n"},
  {"GetMaximumNumberOfPeels", PyvtkRenderer_GetMaximumNumberOfPeels, METH_VARARGS,
   "V.GetMaximumNumberOfPeels() -> int\nC++: virtual int GetMaximumNumberOfPeels()\n\nIn case of depth peeling, define the maximum number of peeling\nlayers. Initial value is 4. A special value of 0 means no maximum\nlimit. It has to be a positive value.\n"},
  {"GetLastRenderingUsedDepthPeeling", PyvtkRenderer_GetLastRenderingUsedDepthPeeling, METH_VARARGS,
   "V.GetLastRenderingUsedDepthPeeling() -> int\nC++: virtual int GetLastRenderingUsedDepthPeeling()\n\nTells if the last call to\nDeviceRenderTranslucentPolygonalGeometry() actually used depth\npeeling. Initial value is false.\n"},
  {"SetDelegate", PyvtkRenderer_SetDelegate, METH_VARARGS,
   "V.SetDelegate(vtkRendererDelegate)\nC++: void SetDelegate(vtkRendererDelegate *d)\n\nSet/Get a custom Render call. Allows to hook a Render call from\nan external project.It will be used in place of\nvtkRenderer::Render() if it is not NULL and its Used ivar is set\nto true. Initial value is NULL.\n"},
  {"GetDelegate", PyvtkRenderer_GetDelegate, METH_VARARGS,
   "V.GetDelegate() -> vtkRendererDelegate\nC++: virtual vtkRendererDelegate *GetDelegate()\n\nSet/Get a custom Render call. Allows to hook a Render call from\nan external project.It will be used in place of\nvtkRenderer::Render() if it is not NULL and its Used ivar is set\nto true. Initial value is NULL.\n"},
  {"GetSelector", PyvtkRenderer_GetSelector, METH_VARARGS,
   "V.GetSelector() -> vtkHardwareSelector\nC++: virtual vtkHardwareSelector *GetSelector()\n\nGet the current hardware selector. If the Selector is set, it\nimplies the current render pass is for selection.\nMappers/Properties may choose to behave differently when\nrendering for hardware selection.\n"},
  {"SetBackgroundTexture", PyvtkRenderer_SetBackgroundTexture, METH_VARARGS,
   "V.SetBackgroundTexture(vtkTexture)\nC++: virtual void SetBackgroundTexture(vtkTexture *)\n\nSet/Get the texture to be used for the background. If set and\nenabled this gets the priority over the gradient background.\n"},
  {"GetBackgroundTexture", PyvtkRenderer_GetBackgroundTexture, METH_VARARGS,
   "V.GetBackgroundTexture() -> vtkTexture\nC++: virtual vtkTexture *GetBackgroundTexture()\n\nSet/Get the texture to be used for the background. If set and\nenabled this gets the priority over the gradient background.\n"},
  {"SetTexturedBackground", PyvtkRenderer_SetTexturedBackground, METH_VARARGS,
   "V.SetTexturedBackground(bool)\nC++: virtual void SetTexturedBackground(bool _arg)\n\nSet/Get whether this viewport should have a textured background.\nDefault is off.\n"},
  {"GetTexturedBackground", PyvtkRenderer_GetTexturedBackground, METH_VARARGS,
   "V.GetTexturedBackground() -> bool\nC++: virtual bool GetTexturedBackground()\n\nSet/Get whether this viewport should have a textured background.\nDefault is off.\n"},
  {"TexturedBackgroundOn", PyvtkRenderer_TexturedBackgroundOn, METH_VARARGS,
   "V.TexturedBackgroundOn()\nC++: virtual void TexturedBackgroundOn()\n\nSet/Get whether this viewport should have a textured background.\nDefault is off.\n"},
  {"TexturedBackgroundOff", PyvtkRenderer_TexturedBackgroundOff, METH_VARARGS,
   "V.TexturedBackgroundOff()\nC++: virtual void TexturedBackgroundOff()\n\nSet/Get whether this viewport should have a textured background.\nDefault is off.\n"},
  {"ReleaseGraphicsResources", PyvtkRenderer_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\n"},
  {"SetUseFXAA", PyvtkRenderer_SetUseFXAA, METH_VARARGS,
   "V.SetUseFXAA(bool)\nC++: virtual void SetUseFXAA(bool _arg)\n\nTurn on/off FXAA anti-aliasing, if supported. Initial value is\noff.\n"},
  {"GetUseFXAA", PyvtkRenderer_GetUseFXAA, METH_VARARGS,
   "V.GetUseFXAA() -> bool\nC++: virtual bool GetUseFXAA()\n\nTurn on/off FXAA anti-aliasing, if supported. Initial value is\noff.\n"},
  {"UseFXAAOn", PyvtkRenderer_UseFXAAOn, METH_VARARGS,
   "V.UseFXAAOn()\nC++: virtual void UseFXAAOn()\n\nTurn on/off FXAA anti-aliasing, if supported. Initial value is\noff.\n"},
  {"UseFXAAOff", PyvtkRenderer_UseFXAAOff, METH_VARARGS,
   "V.UseFXAAOff()\nC++: virtual void UseFXAAOff()\n\nTurn on/off FXAA anti-aliasing, if supported. Initial value is\noff.\n"},
  {"GetFXAAOptions", PyvtkRenderer_GetFXAAOptions, METH_VARARGS,
   "V.GetFXAAOptions() -> vtkFXAAOptions\nC++: virtual vtkFXAAOptions *GetFXAAOptions()\n\nThe configuration object for FXAA antialiasing.\n"},
  {"SetFXAAOptions", PyvtkRenderer_SetFXAAOptions, METH_VARARGS,
   "V.SetFXAAOptions(vtkFXAAOptions)\nC++: virtual void SetFXAAOptions(vtkFXAAOptions *)\n\nThe configuration object for FXAA antialiasing.\n"},
  {"SetUseShadows", PyvtkRenderer_SetUseShadows, METH_VARARGS,
   "V.SetUseShadows(int)\nC++: virtual void SetUseShadows(vtkTypeBool _arg)\n\nTurn on/off rendering of shadows if supported Initial value is\noff.\n"},
  {"GetUseShadows", PyvtkRenderer_GetUseShadows, METH_VARARGS,
   "V.GetUseShadows() -> int\nC++: virtual vtkTypeBool GetUseShadows()\n\nTurn on/off rendering of shadows if supported Initial value is\noff.\n"},
  {"UseShadowsOn", PyvtkRenderer_UseShadowsOn, METH_VARARGS,
   "V.UseShadowsOn()\nC++: virtual void UseShadowsOn()\n\nTurn on/off rendering of shadows if supported Initial value is\noff.\n"},
  {"UseShadowsOff", PyvtkRenderer_UseShadowsOff, METH_VARARGS,
   "V.UseShadowsOff()\nC++: virtual void UseShadowsOff()\n\nTurn on/off rendering of shadows if supported Initial value is\noff.\n"},
  {"SetUseHiddenLineRemoval", PyvtkRenderer_SetUseHiddenLineRemoval, METH_VARARGS,
   "V.SetUseHiddenLineRemoval(int)\nC++: virtual void SetUseHiddenLineRemoval(vtkTypeBool _arg)\n\nIf this flag is true and the rendering engine supports it,\nwireframe geometry will be drawn using hidden line removal.\n"},
  {"GetUseHiddenLineRemoval", PyvtkRenderer_GetUseHiddenLineRemoval, METH_VARARGS,
   "V.GetUseHiddenLineRemoval() -> int\nC++: virtual vtkTypeBool GetUseHiddenLineRemoval()\n\nIf this flag is true and the rendering engine supports it,\nwireframe geometry will be drawn using hidden line removal.\n"},
  {"UseHiddenLineRemovalOn", PyvtkRenderer_UseHiddenLineRemovalOn, METH_VARARGS,
   "V.UseHiddenLineRemovalOn()\nC++: virtual void UseHiddenLineRemovalOn()\n\nIf this flag is true and the rendering engine supports it,\nwireframe geometry will be drawn using hidden line removal.\n"},
  {"UseHiddenLineRemovalOff", PyvtkRenderer_UseHiddenLineRemovalOff, METH_VARARGS,
   "V.UseHiddenLineRemovalOff()\nC++: virtual void UseHiddenLineRemovalOff()\n\nIf this flag is true and the rendering engine supports it,\nwireframe geometry will be drawn using hidden line removal.\n"},
  {"SetPass", PyvtkRenderer_SetPass, METH_VARARGS,
   "V.SetPass(vtkRenderPass)\nC++: void SetPass(vtkRenderPass *p)\n\n"},
  {"GetPass", PyvtkRenderer_GetPass, METH_VARARGS,
   "V.GetPass() -> vtkRenderPass\nC++: virtual vtkRenderPass *GetPass()\n\n"},
  {"GetInformation", PyvtkRenderer_GetInformation, METH_VARARGS,
   "V.GetInformation() -> vtkInformation\nC++: virtual vtkInformation *GetInformation()\n\nSet/Get the information object associated with this algorithm.\n"},
  {"SetInformation", PyvtkRenderer_SetInformation, METH_VARARGS,
   "V.SetInformation(vtkInformation)\nC++: virtual void SetInformation(vtkInformation *)\n\nSet/Get the information object associated with this algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRenderer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkRenderer", // tp_name
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
  PyvtkRenderer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderer_StaticNew()
{
  return vtkRenderer::New();
}

PyObject *PyvtkRenderer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRenderer_Type, PyvtkRenderer_Methods,
    "vtkRenderer",
 &PyvtkRenderer_StaticNew);

  PyTypeObject *pytype = &PyvtkRenderer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkViewport_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderer", o) != 0)
  {
    Py_DECREF(o);
  }

}

