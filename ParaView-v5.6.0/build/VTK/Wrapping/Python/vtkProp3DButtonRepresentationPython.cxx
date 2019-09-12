// python wrapper for vtkProp3DButtonRepresentation
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
#include "vtkProp3DButtonRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProp3DButtonRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProp3DButtonRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkButtonRepresentation_ClassNew
extern "C" { PyObject *PyvtkButtonRepresentation_ClassNew(); }
#define DECLARED_PyvtkButtonRepresentation_ClassNew
#endif

static const char *PyvtkProp3DButtonRepresentation_Doc =
  "vtkProp3DButtonRepresentation - defines a representation for a\nvtkButtonWidget\n\n"
  "Superclass: vtkButtonRepresentation\n\n"
  "This class implements one type of vtkButtonRepresentation. Each\n"
  "button state can be represented with a separate instance of\n"
  "vtkProp3D. Thus buttons can be represented with vtkActor,\n"
  "vtkImageActor, volumes (e.g., vtkVolume) and/or any other vtkProp3D.\n"
  "Also, the class invokes events when highlighting occurs (i.e.,\n"
  "hovering, selecting) so that appropriate action can be taken to\n"
  "highlight the button (if desired).\n\n"
  "To use this representation, always begin by specifying the number of\n"
  "button states.  Then provide, for each state, an instance of\n"
  "vtkProp3D.\n\n"
  "This widget representation uses the conventional placement method.\n"
  "The button is placed inside the bounding box defined by PlaceWidget\n"
  "by translating and scaling the vtkProp3D to fit (each vtkProp3D is\n"
  "transformed). Therefore, you must define the number of button states\n"
  "and each state (i.e., vtkProp3D) prior to calling vtkPlaceWidget.\n\n"
  "@sa\n"
  "vtkButtonWidget vtkButtonRepresentation vtkButtonSource\n"
  "vtkEllipticalButtonSource vtkRectangularButtonSource\n\n";


static PyObject *
PyvtkProp3DButtonRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProp3DButtonRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProp3DButtonRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProp3DButtonRepresentation *tempr = vtkProp3DButtonRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3DButtonRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProp3DButtonRepresentation::NewInstance());

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
PyvtkProp3DButtonRepresentation_SetButtonProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  int temp0;
  vtkProp3D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkProp3D"))
  {
    if (ap.IsBound())
    {
      op->SetButtonProp(temp0, temp1);
    }
    else
    {
      op->vtkProp3DButtonRepresentation::SetButtonProp(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_GetButtonProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButtonProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetButtonProp(temp0) :
      op->vtkProp3DButtonRepresentation::GetButtonProp(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_SetFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFollowCamera(temp0);
    }
    else
    {
      op->vtkProp3DButtonRepresentation::SetFollowCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_GetFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFollowCamera() :
      op->vtkProp3DButtonRepresentation::GetFollowCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_FollowCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FollowCameraOn();
    }
    else
    {
      op->vtkProp3DButtonRepresentation::FollowCameraOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_FollowCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FollowCameraOff();
    }
    else
    {
      op->vtkProp3DButtonRepresentation::FollowCameraOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_SetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetState(temp0);
    }
    else
    {
      op->vtkProp3DButtonRepresentation::SetState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkProp3DButtonRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkProp3DButtonRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

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
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkProp3DButtonRepresentation::PlaceWidget(temp0);
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
PyvtkProp3DButtonRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkProp3DButtonRepresentation::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkProp3DButtonRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkProp3DButtonRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

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
      op->vtkProp3DButtonRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkProp3DButtonRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkProp3DButtonRepresentation::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkProp3DButtonRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkProp3DButtonRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkProp3DButtonRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProp3DButtonRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkProp3DButtonRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of the class.\n"},
  {"IsA", PyvtkProp3DButtonRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of the class.\n"},
  {"SafeDownCast", PyvtkProp3DButtonRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProp3DButtonRepresentation\nC++: static vtkProp3DButtonRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of the class.\n"},
  {"NewInstance", PyvtkProp3DButtonRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProp3DButtonRepresentation\nC++: vtkProp3DButtonRepresentation *NewInstance()\n\nStandard methods for instances of the class.\n"},
  {"SetButtonProp", PyvtkProp3DButtonRepresentation_SetButtonProp, METH_VARARGS,
   "V.SetButtonProp(int, vtkProp3D)\nC++: void SetButtonProp(int i, vtkProp3D *prop)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be (0 <= i < NumberOfStates).\n"},
  {"GetButtonProp", PyvtkProp3DButtonRepresentation_GetButtonProp, METH_VARARGS,
   "V.GetButtonProp(int) -> vtkProp3D\nC++: vtkProp3D *GetButtonProp(int i)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be (0 <= i < NumberOfStates).\n"},
  {"SetFollowCamera", PyvtkProp3DButtonRepresentation_SetFollowCamera, METH_VARARGS,
   "V.SetFollowCamera(int)\nC++: virtual void SetFollowCamera(vtkTypeBool _arg)\n\nSpecify whether the button should always face the camera. If\nenabled, the button reorients itself towards the camera as the\ncamera moves.\n"},
  {"GetFollowCamera", PyvtkProp3DButtonRepresentation_GetFollowCamera, METH_VARARGS,
   "V.GetFollowCamera() -> int\nC++: virtual vtkTypeBool GetFollowCamera()\n\nSpecify whether the button should always face the camera. If\nenabled, the button reorients itself towards the camera as the\ncamera moves.\n"},
  {"FollowCameraOn", PyvtkProp3DButtonRepresentation_FollowCameraOn, METH_VARARGS,
   "V.FollowCameraOn()\nC++: virtual void FollowCameraOn()\n\nSpecify whether the button should always face the camera. If\nenabled, the button reorients itself towards the camera as the\ncamera moves.\n"},
  {"FollowCameraOff", PyvtkProp3DButtonRepresentation_FollowCameraOff, METH_VARARGS,
   "V.FollowCameraOff()\nC++: virtual void FollowCameraOff()\n\nSpecify whether the button should always face the camera. If\nenabled, the button reorients itself towards the camera as the\ncamera moves.\n"},
  {"SetState", PyvtkProp3DButtonRepresentation_SetState, METH_VARARGS,
   "V.SetState(int)\nC++: void SetState(int state) override;\n\nExtend the vtkButtonRepresentation::SetState() method.\n"},
  {"ComputeInteractionState", PyvtkProp3DButtonRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {"BuildRepresentation", PyvtkProp3DButtonRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {"PlaceWidget", PyvtkProp3DButtonRepresentation_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\n\nThis method positions (translates and scales the props) into the\nbounding box specified. Note all the button props are scaled.\n"},
  {"ShallowCopy", PyvtkProp3DButtonRepresentation_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"GetBounds", PyvtkProp3DButtonRepresentation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"GetActors", PyvtkProp3DButtonRepresentation_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *pc) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"ReleaseGraphicsResources", PyvtkProp3DButtonRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"RenderOpaqueGeometry", PyvtkProp3DButtonRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"RenderVolumetricGeometry", PyvtkProp3DButtonRepresentation_RenderVolumetricGeometry, METH_VARARGS,
   "V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: int RenderVolumetricGeometry(vtkViewport *) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkProp3DButtonRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkProp3DButtonRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"RegisterPickers", PyvtkProp3DButtonRepresentation_RegisterPickers, METH_VARARGS,
   "V.RegisterPickers()\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProp3DButtonRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkProp3DButtonRepresentation", // tp_name
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
  PyvtkProp3DButtonRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProp3DButtonRepresentation_StaticNew()
{
  return vtkProp3DButtonRepresentation::New();
}

PyObject *PyvtkProp3DButtonRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProp3DButtonRepresentation_Type, PyvtkProp3DButtonRepresentation_Methods,
    "vtkProp3DButtonRepresentation",
 &PyvtkProp3DButtonRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkProp3DButtonRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkButtonRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProp3DButtonRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProp3DButtonRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProp3DButtonRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

