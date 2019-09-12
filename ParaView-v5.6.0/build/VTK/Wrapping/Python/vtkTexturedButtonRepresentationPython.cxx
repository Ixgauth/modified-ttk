// python wrapper for vtkTexturedButtonRepresentation
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
#include "vtkTexturedButtonRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTexturedButtonRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTexturedButtonRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkButtonRepresentation_ClassNew
extern "C" { PyObject *PyvtkButtonRepresentation_ClassNew(); }
#define DECLARED_PyvtkButtonRepresentation_ClassNew
#endif

static const char *PyvtkTexturedButtonRepresentation_Doc =
  "vtkTexturedButtonRepresentation - defines a representation for a\nvtkButtonWidget\n\n"
  "Superclass: vtkButtonRepresentation\n\n"
  "This class implements one type of vtkButtonRepresentation. It changes\n"
  "the appearance of a user-provided polydata by assigning textures\n"
  "according to the current button state. It also provides highlighting\n"
  "(when hovering and selecting the button) by fiddling with the actor's\n"
  "property.\n\n"
  "To use this representation, always begin by specifying the number of\n"
  "button states.  Then provide a polydata (the polydata should have\n"
  "associated texture coordinates), and a list of textures cooresponding\n"
  "to the button states. Optionally, the HoveringProperty and\n"
  "SelectionProperty can be adjusted to obtain the appropriate\n"
  "appearance.\n\n"
  "This widget representation has two placement methods. The\n"
  "conventional PlaceWidget() method is used to locate the textured\n"
  "button inside of a user-specified bounding box (note that the button\n"
  "geometry is uniformly scaled to fit, thus two of the three dimensions\n"
  "can be \"large\" and the third used to perform the scaling). However\n"
  "this PlaceWidget() method will align the geometry within x-y-z\n"
  "oriented bounds. To further control the placement, use the additional\n"
  "PlaceWidget(scale,point,normal) method. This scales the geometry,\n"
  "places its center at the specified point position, and orients the\n"
  "geometry's z-direction parallel to the specified normal. This can be\n"
  "used to attach \"sticky notes\" or \"sticky buttons\" to the surface of\n"
  "objects.\n\n"
  "@sa\n"
  "vtkButtonWidget vtkButtonRepresentation vtkButtonSource\n"
  "vtkEllipticalButtonSource vtkRectangularButtonSource\n\n";


static PyObject *
PyvtkTexturedButtonRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTexturedButtonRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTexturedButtonRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTexturedButtonRepresentation *tempr = vtkTexturedButtonRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexturedButtonRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTexturedButtonRepresentation::NewInstance());

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
PyvtkTexturedButtonRepresentation_SetButtonGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetButtonGeometry(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::SetButtonGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetButtonGeometryConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonGeometryConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetButtonGeometryConnection(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::SetButtonGeometryConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetButtonGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButtonGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetButtonGeometry() :
      op->vtkTexturedButtonRepresentation::GetButtonGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::SetFollowCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFollowCamera() :
      op->vtkTexturedButtonRepresentation::GetFollowCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_FollowCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FollowCameraOn();
    }
    else
    {
      op->vtkTexturedButtonRepresentation::FollowCameraOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_FollowCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FollowCameraOff();
    }
    else
    {
      op->vtkTexturedButtonRepresentation::FollowCameraOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkTexturedButtonRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetHoveringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoveringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetHoveringProperty(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::SetHoveringProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetHoveringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoveringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHoveringProperty() :
      op->vtkTexturedButtonRepresentation::GetHoveringProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetSelectingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSelectingProperty(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::SetSelectingProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetSelectingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectingProperty() :
      op->vtkTexturedButtonRepresentation::GetSelectingProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetButtonTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  int temp0;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetButtonTexture(temp0, temp1);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::SetButtonTexture(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetButtonTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButtonTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetButtonTexture(temp0) :
      op->vtkTexturedButtonRepresentation::GetButtonTexture(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->PlaceWidget(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::PlaceWidget(temp0, temp1, temp2);
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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTexturedButtonRepresentation_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::PlaceWidget(temp0);
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
PyvtkTexturedButtonRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTexturedButtonRepresentation_PlaceWidget_s1(self, args);
    case 1:
      return PyvtkTexturedButtonRepresentation_PlaceWidget_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
PyvtkTexturedButtonRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkTexturedButtonRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Highlight(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkTexturedButtonRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkTexturedButtonRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkTexturedButtonRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkTexturedButtonRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkTexturedButtonRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTexturedButtonRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkTexturedButtonRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of the class.\n"},
  {"IsA", PyvtkTexturedButtonRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of the class.\n"},
  {"SafeDownCast", PyvtkTexturedButtonRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTexturedButtonRepresentation\nC++: static vtkTexturedButtonRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of the class.\n"},
  {"NewInstance", PyvtkTexturedButtonRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTexturedButtonRepresentation\nC++: vtkTexturedButtonRepresentation *NewInstance()\n\nStandard methods for instances of the class.\n"},
  {"SetButtonGeometry", PyvtkTexturedButtonRepresentation_SetButtonGeometry, METH_VARARGS,
   "V.SetButtonGeometry(vtkPolyData)\nC++: void SetButtonGeometry(vtkPolyData *pd)\n\nSet/Get the polydata which defines the button geometry.\n"},
  {"SetButtonGeometryConnection", PyvtkTexturedButtonRepresentation_SetButtonGeometryConnection, METH_VARARGS,
   "V.SetButtonGeometryConnection(vtkAlgorithmOutput)\nC++: void SetButtonGeometryConnection(\n    vtkAlgorithmOutput *algOutput)\n\nSet/Get the polydata which defines the button geometry.\n"},
  {"GetButtonGeometry", PyvtkTexturedButtonRepresentation_GetButtonGeometry, METH_VARARGS,
   "V.GetButtonGeometry() -> vtkPolyData\nC++: vtkPolyData *GetButtonGeometry()\n\nSet/Get the polydata which defines the button geometry.\n"},
  {"SetFollowCamera", PyvtkTexturedButtonRepresentation_SetFollowCamera, METH_VARARGS,
   "V.SetFollowCamera(int)\nC++: virtual void SetFollowCamera(vtkTypeBool _arg)\n\nSpecify whether the button should always face the camera. If\nenabled, the button rotates as the camera moves.\n"},
  {"GetFollowCamera", PyvtkTexturedButtonRepresentation_GetFollowCamera, METH_VARARGS,
   "V.GetFollowCamera() -> int\nC++: virtual vtkTypeBool GetFollowCamera()\n\nSpecify whether the button should always face the camera. If\nenabled, the button rotates as the camera moves.\n"},
  {"FollowCameraOn", PyvtkTexturedButtonRepresentation_FollowCameraOn, METH_VARARGS,
   "V.FollowCameraOn()\nC++: virtual void FollowCameraOn()\n\nSpecify whether the button should always face the camera. If\nenabled, the button rotates as the camera moves.\n"},
  {"FollowCameraOff", PyvtkTexturedButtonRepresentation_FollowCameraOff, METH_VARARGS,
   "V.FollowCameraOff()\nC++: virtual void FollowCameraOff()\n\nSpecify whether the button should always face the camera. If\nenabled, the button rotates as the camera moves.\n"},
  {"SetProperty", PyvtkTexturedButtonRepresentation_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkProperty)\nC++: virtual void SetProperty(vtkProperty *p)\n\nSpecify the property to use when the button is to appear \"normal\"\ni.e., the mouse pointer is not hovering or selecting the button.\n"},
  {"GetProperty", PyvtkTexturedButtonRepresentation_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\nSpecify the property to use when the button is to appear \"normal\"\ni.e., the mouse pointer is not hovering or selecting the button.\n"},
  {"SetHoveringProperty", PyvtkTexturedButtonRepresentation_SetHoveringProperty, METH_VARARGS,
   "V.SetHoveringProperty(vtkProperty)\nC++: virtual void SetHoveringProperty(vtkProperty *p)\n\nSpecify the property to use when the hovering over the button.\n"},
  {"GetHoveringProperty", PyvtkTexturedButtonRepresentation_GetHoveringProperty, METH_VARARGS,
   "V.GetHoveringProperty() -> vtkProperty\nC++: virtual vtkProperty *GetHoveringProperty()\n\nSpecify the property to use when the hovering over the button.\n"},
  {"SetSelectingProperty", PyvtkTexturedButtonRepresentation_SetSelectingProperty, METH_VARARGS,
   "V.SetSelectingProperty(vtkProperty)\nC++: virtual void SetSelectingProperty(vtkProperty *p)\n\nSpecify the property to use when selecting the button.\n"},
  {"GetSelectingProperty", PyvtkTexturedButtonRepresentation_GetSelectingProperty, METH_VARARGS,
   "V.GetSelectingProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectingProperty()\n\nSpecify the property to use when selecting the button.\n"},
  {"SetButtonTexture", PyvtkTexturedButtonRepresentation_SetButtonTexture, METH_VARARGS,
   "V.SetButtonTexture(int, vtkImageData)\nC++: void SetButtonTexture(int i, vtkImageData *image)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be (0 <= i < NumberOfStates).\n"},
  {"GetButtonTexture", PyvtkTexturedButtonRepresentation_GetButtonTexture, METH_VARARGS,
   "V.GetButtonTexture(int) -> vtkImageData\nC++: vtkImageData *GetButtonTexture(int i)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be (0 <= i < NumberOfStates).\n"},
  {"PlaceWidget", PyvtkTexturedButtonRepresentation_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget(float, [float, float, float], [float, float, float])\nC++: virtual void PlaceWidget(double scale, double point[3],\n    double normal[3])\nV.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\n\nAlternative method for placing a button at a given position\n(defined by point[3]); at a given orientation (normal[3], where\nthe z-axis of the button geometry is parallel to the normal); and\nscaled by the scale parameter. This method can bs used to attach \"sticky\nnotes\" or \"sticky buttons\" to objects. A great way to attach\ninteractive meta-data to 3D actors.\n"},
  {"ComputeInteractionState", PyvtkTexturedButtonRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {"BuildRepresentation", PyvtkTexturedButtonRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {"Highlight", PyvtkTexturedButtonRepresentation_Highlight, METH_VARARGS,
   "V.Highlight(int)\nC++: void Highlight(int state) override;\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {"ShallowCopy", PyvtkTexturedButtonRepresentation_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"GetBounds", PyvtkTexturedButtonRepresentation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"GetActors", PyvtkTexturedButtonRepresentation_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *pc) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"ReleaseGraphicsResources", PyvtkTexturedButtonRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"RenderOpaqueGeometry", PyvtkTexturedButtonRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkTexturedButtonRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkTexturedButtonRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"RegisterPickers", PyvtkTexturedButtonRepresentation_RegisterPickers, METH_VARARGS,
   "V.RegisterPickers()\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTexturedButtonRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkTexturedButtonRepresentation", // tp_name
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
  PyvtkTexturedButtonRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTexturedButtonRepresentation_StaticNew()
{
  return vtkTexturedButtonRepresentation::New();
}

PyObject *PyvtkTexturedButtonRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTexturedButtonRepresentation_Type, PyvtkTexturedButtonRepresentation_Methods,
    "vtkTexturedButtonRepresentation",
 &PyvtkTexturedButtonRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkTexturedButtonRepresentation_Type;

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

void PyVTKAddFile_vtkTexturedButtonRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTexturedButtonRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTexturedButtonRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

