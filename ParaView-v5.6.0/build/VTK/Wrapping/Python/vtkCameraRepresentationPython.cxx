// python wrapper for vtkCameraRepresentation
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
#include "vtkCameraRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCameraRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCameraRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkBorderRepresentation_ClassNew
extern "C" { PyObject *PyvtkBorderRepresentation_ClassNew(); }
#define DECLARED_PyvtkBorderRepresentation_ClassNew
#endif

static const char *PyvtkCameraRepresentation_Doc =
  "vtkCameraRepresentation - represent the vtkCameraWidget\n\n"
  "Superclass: vtkBorderRepresentation\n\n"
  "This class provides support for interactively saving a series of\n"
  "camera views into an interpolated path (using vtkCameraInterpolator).\n"
  "The class typically works in conjunction with vtkCameraWidget. To use\n"
  "this class simply specify the camera to interpolate and use the\n"
  "methods AddCameraToPath(), AnimatePath(), and InitializePath() to add\n"
  "a new camera view, animate the current views, and initialize the\n"
  "interpolation.\n\n"
  "@sa\n"
  "vtkCameraWidget vtkCameraInterpolator\n\n";


static PyObject *
PyvtkCameraRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCameraRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCameraRepresentation *tempr = vtkCameraRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraRepresentation::NewInstance());

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
PyvtkCameraRepresentation_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetCamera(temp0);
    }
    else
    {
      op->vtkCameraRepresentation::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkCameraRepresentation::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_SetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkCameraInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCameraInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetInterpolator(temp0);
    }
    else
    {
      op->vtkCameraRepresentation::SetInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraInterpolator *tempr = (ap.IsBound() ?
      op->GetInterpolator() :
      op->vtkCameraRepresentation::GetInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_SetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

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
      op->vtkCameraRepresentation::SetNumberOfFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetNumberOfFramesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFramesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFramesMinValue() :
      op->vtkCameraRepresentation::GetNumberOfFramesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetNumberOfFramesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFramesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFramesMaxValue() :
      op->vtkCameraRepresentation::GetNumberOfFramesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFrames() :
      op->vtkCameraRepresentation::GetNumberOfFrames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkCameraRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_AddCameraToPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCameraToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddCameraToPath();
    }
    else
    {
      op->vtkCameraRepresentation::AddCameraToPath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_AnimatePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnimatePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->AnimatePath(temp0);
    }
    else
    {
      op->vtkCameraRepresentation::AnimatePath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_InitializePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializePath();
    }
    else
    {
      op->vtkCameraRepresentation::InitializePath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkCameraRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

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
      op->GetSize(temp0);
    }
    else
    {
      op->vtkCameraRepresentation::GetSize(temp0);
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
PyvtkCameraRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkCameraRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

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
      op->vtkCameraRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCameraRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCameraRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCameraRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCameraRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCameraRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkCameraRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK class methods.\n"},
  {"IsA", PyvtkCameraRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK class methods.\n"},
  {"SafeDownCast", PyvtkCameraRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCameraRepresentation\nC++: static vtkCameraRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK class methods.\n"},
  {"NewInstance", PyvtkCameraRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCameraRepresentation\nC++: vtkCameraRepresentation *NewInstance()\n\nStandard VTK class methods.\n"},
  {"SetCamera", PyvtkCameraRepresentation_SetCamera, METH_VARARGS,
   "V.SetCamera(vtkCamera)\nC++: void SetCamera(vtkCamera *camera)\n\nSpecify the camera to interpolate. This must be specified by the\nuser.\n"},
  {"GetCamera", PyvtkCameraRepresentation_GetCamera, METH_VARARGS,
   "V.GetCamera() -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\nSpecify the camera to interpolate. This must be specified by the\nuser.\n"},
  {"SetInterpolator", PyvtkCameraRepresentation_SetInterpolator, METH_VARARGS,
   "V.SetInterpolator(vtkCameraInterpolator)\nC++: void SetInterpolator(vtkCameraInterpolator *camInt)\n\nGet the vtkCameraInterpolator used to interpolate and save the\nsequence of camera views. If not defined, one is created\nautomatically. Note that you can access this object to set the\ninterpolation type (linear, spline) and other instance variables.\n"},
  {"GetInterpolator", PyvtkCameraRepresentation_GetInterpolator, METH_VARARGS,
   "V.GetInterpolator() -> vtkCameraInterpolator\nC++: virtual vtkCameraInterpolator *GetInterpolator()\n\nGet the vtkCameraInterpolator used to interpolate and save the\nsequence of camera views. If not defined, one is created\nautomatically. Note that you can access this object to set the\ninterpolation type (linear, spline) and other instance variables.\n"},
  {"SetNumberOfFrames", PyvtkCameraRepresentation_SetNumberOfFrames, METH_VARARGS,
   "V.SetNumberOfFrames(int)\nC++: virtual void SetNumberOfFrames(int _arg)\n\nSet the number of frames to generate when playback is initiated.\n"},
  {"GetNumberOfFramesMinValue", PyvtkCameraRepresentation_GetNumberOfFramesMinValue, METH_VARARGS,
   "V.GetNumberOfFramesMinValue() -> int\nC++: virtual int GetNumberOfFramesMinValue()\n\nSet the number of frames to generate when playback is initiated.\n"},
  {"GetNumberOfFramesMaxValue", PyvtkCameraRepresentation_GetNumberOfFramesMaxValue, METH_VARARGS,
   "V.GetNumberOfFramesMaxValue() -> int\nC++: virtual int GetNumberOfFramesMaxValue()\n\nSet the number of frames to generate when playback is initiated.\n"},
  {"GetNumberOfFrames", PyvtkCameraRepresentation_GetNumberOfFrames, METH_VARARGS,
   "V.GetNumberOfFrames() -> int\nC++: virtual int GetNumberOfFrames()\n\nSet the number of frames to generate when playback is initiated.\n"},
  {"GetProperty", PyvtkCameraRepresentation_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetProperty()\n\nBy obtaining this property you can specify the properties of the\nrepresentation.\n"},
  {"AddCameraToPath", PyvtkCameraRepresentation_AddCameraToPath, METH_VARARGS,
   "V.AddCameraToPath()\nC++: void AddCameraToPath()\n\nThese methods are used to create interpolated camera paths.  The\nAddCameraToPath() method adds the view defined by the current\ncamera (via SetCamera()) to the interpolated camera path.\nAnimatePath() interpolates NumberOfFrames along the current path.\nInitializePath() resets the interpolated path to its initial,\nempty configuration.\n"},
  {"AnimatePath", PyvtkCameraRepresentation_AnimatePath, METH_VARARGS,
   "V.AnimatePath(vtkRenderWindowInteractor)\nC++: void AnimatePath(vtkRenderWindowInteractor *rwi)\n\nThese methods are used to create interpolated camera paths.  The\nAddCameraToPath() method adds the view defined by the current\ncamera (via SetCamera()) to the interpolated camera path.\nAnimatePath() interpolates NumberOfFrames along the current path.\nInitializePath() resets the interpolated path to its initial,\nempty configuration.\n"},
  {"InitializePath", PyvtkCameraRepresentation_InitializePath, METH_VARARGS,
   "V.InitializePath()\nC++: void InitializePath()\n\nThese methods are used to create interpolated camera paths.  The\nAddCameraToPath() method adds the view defined by the current\ncamera (via SetCamera()) to the interpolated camera path.\nAnimatePath() interpolates NumberOfFrames along the current path.\nInitializePath() resets the interpolated path to its initial,\nempty configuration.\n"},
  {"BuildRepresentation", PyvtkCameraRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nSatisfy the superclasses' API.\n"},
  {"GetSize", PyvtkCameraRepresentation_GetSize, METH_VARARGS,
   "V.GetSize([float, float])\nC++: void GetSize(double size[2]) override;\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {"GetActors2D", PyvtkCameraRepresentation_GetActors2D, METH_VARARGS,
   "V.GetActors2D(vtkPropCollection)\nC++: void GetActors2D(vtkPropCollection *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkCameraRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderOverlay", PyvtkCameraRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderOpaqueGeometry", PyvtkCameraRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCameraRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCameraRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCameraRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkCameraRepresentation", // tp_name
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
  PyvtkCameraRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCameraRepresentation_StaticNew()
{
  return vtkCameraRepresentation::New();
}

PyObject *PyvtkCameraRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCameraRepresentation_Type, PyvtkCameraRepresentation_Methods,
    "vtkCameraRepresentation",
 &PyvtkCameraRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkCameraRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkBorderRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCameraRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCameraRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCameraRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

