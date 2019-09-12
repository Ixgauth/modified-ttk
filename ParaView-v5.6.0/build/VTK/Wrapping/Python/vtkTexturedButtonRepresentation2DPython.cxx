// python wrapper for vtkTexturedButtonRepresentation2D
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
#include "vtkTexturedButtonRepresentation2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTexturedButtonRepresentation2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTexturedButtonRepresentation2D_ClassNew(); }

#ifndef DECLARED_PyvtkButtonRepresentation_ClassNew
extern "C" { PyObject *PyvtkButtonRepresentation_ClassNew(); }
#define DECLARED_PyvtkButtonRepresentation_ClassNew
#endif

static const char *PyvtkTexturedButtonRepresentation2D_Doc =
  "vtkTexturedButtonRepresentation2D - defines a representation for a\nvtkButtonWidget\n\n"
  "Superclass: vtkButtonRepresentation\n\n"
  "This class implements one type of vtkButtonRepresentation. It changes\n"
  "the appearance of a user-provided polydata by assigning textures\n"
  "according to the current button state. It also provides highlighting\n"
  "(when hovering and selecting the button) by fiddling with the actor's\n"
  "property. Since this is a 2D version, the button is rendered in the\n"
  "overlay plane. Typically it is positioned in display coordinates, but\n"
  "it can be anchored to a world position so it will appear to move as\n"
  "the camera moves.\n\n"
  "To use this representation, always begin by specifying the number of\n"
  "button states.  Then provide a polydata (the polydata should have\n"
  "associated texture coordinates), and a list of textures cooresponding\n"
  "to the button states. Optionally, the HoveringProperty and\n"
  "SelectionProperty can be adjusted to obtain the appropriate\n"
  "appearance.\n\n"
  "@warning\n"
  "There are two variants of the PlaceWidget() method. The first\n"
  "PlaceWidget(bds[6]) allows the widget to be placed in the display\n"
  "coordinates fixed to the overlay plane. The second\n"
  "PlaceWidget(anchor[3],size[2]) places the widget in world space;\n"
  "hence it will appear to move as the camera moves around the scene.\n\n"
  "@sa\n"
  "vtkButtonWidget vtkButtonRepresentation\n"
  "vtkTexturedButtonRepresentation vtkProp3DButtonRepresentation\n\n";


static PyObject *
PyvtkTexturedButtonRepresentation2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTexturedButtonRepresentation2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTexturedButtonRepresentation2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTexturedButtonRepresentation2D *tempr = vtkTexturedButtonRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexturedButtonRepresentation2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTexturedButtonRepresentation2D::NewInstance());

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
PyvtkTexturedButtonRepresentation2D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation2D::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkTexturedButtonRepresentation2D::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_SetHoveringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoveringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetHoveringProperty(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation2D::SetHoveringProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetHoveringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoveringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetHoveringProperty() :
      op->vtkTexturedButtonRepresentation2D::GetHoveringProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_SetSelectingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetSelectingProperty(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation2D::SetSelectingProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetSelectingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetSelectingProperty() :
      op->vtkTexturedButtonRepresentation2D::GetSelectingProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_SetButtonTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::SetButtonTexture(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetButtonTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButtonTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetButtonTexture(temp0) :
      op->vtkTexturedButtonRepresentation2D::GetButtonTexture(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetBalloon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBalloonRepresentation *tempr = (ap.IsBound() ?
      op->GetBalloon() :
      op->vtkTexturedButtonRepresentation2D::GetBalloon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkTexturedButtonRepresentation2D::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::PlaceWidget(temp0);
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
PyvtkTexturedButtonRepresentation2D_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->PlaceWidget(temp0, temp1);
    }
    else
    {
      op->vtkTexturedButtonRepresentation2D::PlaceWidget(temp0, temp1);
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
PyvtkTexturedButtonRepresentation2D_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkTexturedButtonRepresentation2D_PlaceWidget_s1(self, args);
    case 2:
      return PyvtkTexturedButtonRepresentation2D_PlaceWidget_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
PyvtkTexturedButtonRepresentation2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkTexturedButtonRepresentation2D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkTexturedButtonRepresentation2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkTexturedButtonRepresentation2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTexturedButtonRepresentation2D_Methods[] = {
  {"IsTypeOf", PyvtkTexturedButtonRepresentation2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for the class.\n"},
  {"IsA", PyvtkTexturedButtonRepresentation2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for the class.\n"},
  {"SafeDownCast", PyvtkTexturedButtonRepresentation2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTexturedButtonRepresentation2D\nC++: static vtkTexturedButtonRepresentation2D *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for the class.\n"},
  {"NewInstance", PyvtkTexturedButtonRepresentation2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTexturedButtonRepresentation2D\nC++: vtkTexturedButtonRepresentation2D *NewInstance()\n\nStandard methods for the class.\n"},
  {"SetProperty", PyvtkTexturedButtonRepresentation2D_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkProperty2D)\nC++: virtual void SetProperty(vtkProperty2D *p)\n\nSpecify the property to use when the button is to appear \"normal\"\ni.e., the mouse pointer is not hovering or selecting the button.\n"},
  {"GetProperty", PyvtkTexturedButtonRepresentation2D_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetProperty()\n\nSpecify the property to use when the button is to appear \"normal\"\ni.e., the mouse pointer is not hovering or selecting the button.\n"},
  {"SetHoveringProperty", PyvtkTexturedButtonRepresentation2D_SetHoveringProperty, METH_VARARGS,
   "V.SetHoveringProperty(vtkProperty2D)\nC++: virtual void SetHoveringProperty(vtkProperty2D *p)\n\nSpecify the property to use when the hovering over the button.\n"},
  {"GetHoveringProperty", PyvtkTexturedButtonRepresentation2D_GetHoveringProperty, METH_VARARGS,
   "V.GetHoveringProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetHoveringProperty()\n\nSpecify the property to use when the hovering over the button.\n"},
  {"SetSelectingProperty", PyvtkTexturedButtonRepresentation2D_SetSelectingProperty, METH_VARARGS,
   "V.SetSelectingProperty(vtkProperty2D)\nC++: virtual void SetSelectingProperty(vtkProperty2D *p)\n\nSpecify the property to use when selecting the button.\n"},
  {"GetSelectingProperty", PyvtkTexturedButtonRepresentation2D_GetSelectingProperty, METH_VARARGS,
   "V.GetSelectingProperty() -> vtkProperty2D\nC++: virtual vtkProperty2D *GetSelectingProperty()\n\nSpecify the property to use when selecting the button.\n"},
  {"SetButtonTexture", PyvtkTexturedButtonRepresentation2D_SetButtonTexture, METH_VARARGS,
   "V.SetButtonTexture(int, vtkImageData)\nC++: void SetButtonTexture(int i, vtkImageData *image)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be 0<=i<NumberOfStates.\n"},
  {"GetButtonTexture", PyvtkTexturedButtonRepresentation2D_GetButtonTexture, METH_VARARGS,
   "V.GetButtonTexture(int) -> vtkImageData\nC++: vtkImageData *GetButtonTexture(int i)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be 0<=i<NumberOfStates.\n"},
  {"GetBalloon", PyvtkTexturedButtonRepresentation2D_GetBalloon, METH_VARARGS,
   "V.GetBalloon() -> vtkBalloonRepresentation\nC++: vtkBalloonRepresentation *GetBalloon()\n\nGrab the underlying vtkBalloonRepresentation used to position and\ndisplay the button texture.\n"},
  {"ComputeInteractionState", PyvtkTexturedButtonRepresentation2D_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {"BuildRepresentation", PyvtkTexturedButtonRepresentation2D_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {"Highlight", PyvtkTexturedButtonRepresentation2D_Highlight, METH_VARARGS,
   "V.Highlight(int)\nC++: void Highlight(int state) override;\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {"PlaceWidget", PyvtkTexturedButtonRepresentation2D_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\nV.PlaceWidget([float, float, float], [int, int])\nC++: virtual void PlaceWidget(double anchor[3], int size[2])\n\nConventional PlaceWidget() method to satisfy the\nvtkWidgetRepresentation API. In this version, bounds[6] specifies\na rectangle in *display* coordinates in which to place the\nbutton. The values for bounds[4] and bounds[5] can be set to\nzero. Note that PlaceWidget() is typically called at the end of\nconfiguring the button representation.\n"},
  {"ShallowCopy", PyvtkTexturedButtonRepresentation2D_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"GetBounds", PyvtkTexturedButtonRepresentation2D_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"GetActors", PyvtkTexturedButtonRepresentation2D_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *pc) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"ReleaseGraphicsResources", PyvtkTexturedButtonRepresentation2D_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"RenderOverlay", PyvtkTexturedButtonRepresentation2D_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkTexturedButtonRepresentation2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTexturedButtonRepresentation2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkTexturedButtonRepresentation2D", // tp_name
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
  PyvtkTexturedButtonRepresentation2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTexturedButtonRepresentation2D_StaticNew()
{
  return vtkTexturedButtonRepresentation2D::New();
}

PyObject *PyvtkTexturedButtonRepresentation2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTexturedButtonRepresentation2D_Type, PyvtkTexturedButtonRepresentation2D_Methods,
    "vtkTexturedButtonRepresentation2D",
 &PyvtkTexturedButtonRepresentation2D_StaticNew);

  PyTypeObject *pytype = &PyvtkTexturedButtonRepresentation2D_Type;

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

void PyVTKAddFile_vtkTexturedButtonRepresentation2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTexturedButtonRepresentation2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTexturedButtonRepresentation2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

