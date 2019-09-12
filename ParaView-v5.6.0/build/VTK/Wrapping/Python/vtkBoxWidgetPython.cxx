// python wrapper for vtkBoxWidget
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
#include "vtkBoxWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoxWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBoxWidget_ClassNew(); }

#ifndef DECLARED_Pyvtk3DWidget_ClassNew
extern "C" { PyObject *Pyvtk3DWidget_ClassNew(); }
#define DECLARED_Pyvtk3DWidget_ClassNew
#endif

static const char *PyvtkBoxWidget_Doc =
  "vtkBoxWidget - orthogonal hexahedron 3D widget\n\n"
  "Superclass: vtk3DWidget\n\n"
  "This 3D widget defines a region of interest that is represented by an\n"
  "arbitrarily oriented hexahedron with interior face angles of 90\n"
  "degrees (orthogonal faces). The object creates 7 handles that can be\n"
  "moused on and manipulated. The first six correspond to the six faces,\n"
  "the seventh is in the center of the hexahedron. In addition, a\n"
  "bounding box outline is shown, the \"faces\" of which can be selected\n"
  "for object rotation or scaling. A nice feature of the object is that\n"
  "the vtkBoxWidget, like any 3D widget, will work with the current\n"
  "interactor style. That is, if vtkBoxWidget does not handle an event,\n"
  "then all other registered observers (including the interactor style)\n"
  "have an opportunity to process the event. Otherwise, the vtkBoxWidget\n"
  "will terminate the processing of the event that it handles.\n\n"
  "To use this object, just invoke SetInteractor() with the argument of\n"
  "the method a vtkRenderWindowInteractor.  You may also wish to invoke\n"
  "\"PlaceWidget()\" to initially position the widget. The interactor will\n"
  "act normally until the \"i\" key (for \"interactor\") is pressed, at\n"
  "which point the vtkBoxWidget will appear. (See superclass\n"
  "documentation for information about changing this behavior.) By\n"
  "grabbing the six face handles (use the left mouse button), faces can\n"
  "be moved. By grabbing the center handle (with the left mouse button),\n"
  "the entire hexahedron can be translated. (Translation can also be\n"
  "employed by using the \"shift-left-mouse-button\" combination inside of\n"
  "the widget.) Scaling is achieved by using the right mouse button \"up\"\n"
  "the render window (makes the widget bigger) or \"down\" the render\n"
  "window (makes the widget smaller). To rotate vtkBoxWidget, pick a\n"
  "face (but not a face handle) and move the left mouse. (Note: the\n"
  "mouse button must be held down during manipulation.) Events that\n"
  "occur outside of the widget (i.e., no part of the widget is picked)\n"
  "are propagated to any other registered obsevers (such as the\n"
  "interaction style).  Turn off the widget by pressing the \"i\" key\n"
  "again. (See the superclass documentation on key press activiation.)\n\n"
  "The vtkBoxWidget is very flexible. It can be used to select, cut,\n"
  "clip, or perform any other operation that depends on an implicit\n"
  "function (use the GetPlanes() method); or it can be used to transform\n"
  "objects using a linear transformation (use the GetTransform()\n"
  "method). Typical usage of the widget is to make use of the\n"
  "StartInteractionEvent, InteractionEvent, and EndInteractionEvent\n"
  "events. The InteractionEvent is called on mouse motion; the other two\n"
  "events are called on button down and button up (either left or right\n"
  "button).\n\n"
  "Some additional features of this class include the ability to control\n"
  "the rendered properties of the widget. You can set the properties of\n"
  "the selected and unselected representations of the parts of the\n"
  "widget. For example, you can set the property for the handles, faces,\n"
  "and outline in their normal and selected states.\n\n"
  "The box widget can be oriented by specifying a transformation matrix.\n"
  "This transformation is applied to the initial bounding box as defined\n"
  "by the PlaceWidget() method. DO NOT ASSUME that the transformation is\n"
  "applied to a unit box centered at the origin; this is wrong!\n\n"
  "@sa\n"
  "vtk3DWidget vtkPointWidget vtkLineWidget vtkPlaneWidget\n"
  "vtkImplicitPlaneWidget vtkImagePlaneWidget\n\n";


static PyObject *
PyvtkBoxWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoxWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoxWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoxWidget *tempr = vtkBoxWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoxWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoxWidget::NewInstance());

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
PyvtkBoxWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkBoxWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

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
      op->vtkBoxWidget::PlaceWidget(temp0);
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
PyvtkBoxWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkBoxWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoxWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

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
      op->PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkBoxWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoxWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoxWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkBoxWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkBoxWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
PyvtkBoxWidget_GetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->GetPlanes(temp0);
    }
    else
    {
      op->vtkBoxWidget::GetPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkBoxWidget::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkBoxWidget::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkBoxWidget::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkBoxWidget::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->GetTransform(temp0);
    }
    else
    {
      op->vtkBoxWidget::GetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkBoxWidget::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetPolyData(temp0);
    }
    else
    {
      op->vtkBoxWidget::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkBoxWidget::GetHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkBoxWidget::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_HandlesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOn();
    }
    else
    {
      op->vtkBoxWidget::HandlesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_HandlesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOff();
    }
    else
    {
      op->vtkBoxWidget::HandlesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetFaceProperty() :
      op->vtkBoxWidget::GetFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetSelectedFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedFaceProperty() :
      op->vtkBoxWidget::GetSelectedFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkBoxWidget::GetOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkBoxWidget::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetOutlineFaceWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineFaceWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineFaceWires(temp0);
    }
    else
    {
      op->vtkBoxWidget::SetOutlineFaceWires(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetOutlineFaceWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineFaceWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutlineFaceWires() :
      op->vtkBoxWidget::GetOutlineFaceWires());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_OutlineFaceWiresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineFaceWiresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineFaceWiresOn();
    }
    else
    {
      op->vtkBoxWidget::OutlineFaceWiresOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_OutlineFaceWiresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineFaceWiresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineFaceWiresOff();
    }
    else
    {
      op->vtkBoxWidget::OutlineFaceWiresOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetOutlineCursorWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineCursorWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineCursorWires(temp0);
    }
    else
    {
      op->vtkBoxWidget::SetOutlineCursorWires(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetOutlineCursorWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineCursorWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutlineCursorWires() :
      op->vtkBoxWidget::GetOutlineCursorWires());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_OutlineCursorWiresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineCursorWiresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineCursorWiresOn();
    }
    else
    {
      op->vtkBoxWidget::OutlineCursorWiresOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_OutlineCursorWiresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineCursorWiresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineCursorWiresOff();
    }
    else
    {
      op->vtkBoxWidget::OutlineCursorWiresOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationEnabled(temp0);
    }
    else
    {
      op->vtkBoxWidget::SetTranslationEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationEnabled() :
      op->vtkBoxWidget::GetTranslationEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_TranslationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationEnabledOn();
    }
    else
    {
      op->vtkBoxWidget::TranslationEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_TranslationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationEnabledOff();
    }
    else
    {
      op->vtkBoxWidget::TranslationEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalingEnabled(temp0);
    }
    else
    {
      op->vtkBoxWidget::SetScalingEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalingEnabled() :
      op->vtkBoxWidget::GetScalingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_ScalingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingEnabledOn();
    }
    else
    {
      op->vtkBoxWidget::ScalingEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_ScalingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingEnabledOff();
    }
    else
    {
      op->vtkBoxWidget::ScalingEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_SetRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationEnabled(temp0);
    }
    else
    {
      op->vtkBoxWidget::SetRotationEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_GetRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationEnabled() :
      op->vtkBoxWidget::GetRotationEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_RotationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RotationEnabledOn();
    }
    else
    {
      op->vtkBoxWidget::RotationEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget_RotationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget *op = static_cast<vtkBoxWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RotationEnabledOff();
    }
    else
    {
      op->vtkBoxWidget::RotationEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoxWidget_Methods[] = {
  {"IsTypeOf", PyvtkBoxWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBoxWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBoxWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBoxWidget\nC++: static vtkBoxWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBoxWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBoxWidget\nC++: vtkBoxWidget *NewInstance()\n\n"},
  {"SetEnabled", PyvtkBoxWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"PlaceWidget", PyvtkBoxWidget_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\nV.PlaceWidget()\nC++: void PlaceWidget() override;\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"GetPlanes", PyvtkBoxWidget_GetPlanes, METH_VARARGS,
   "V.GetPlanes(vtkPlanes)\nC++: void GetPlanes(vtkPlanes *planes)\n\nGet the planes describing the implicit function defined by the\nbox widget. The user must provide the instance of the class\nvtkPlanes. Note that vtkPlanes is a subclass of\nvtkImplicitFunction, meaning that it can be used by a variety of\nfilters to perform clipping, cutting, and selection of data. \n(The direction of the normals of the planes can be reversed\nenabling the InsideOut flag.)\n"},
  {"SetInsideOut", PyvtkBoxWidget_SetInsideOut, METH_VARARGS,
   "V.SetInsideOut(int)\nC++: virtual void SetInsideOut(vtkTypeBool _arg)\n\nSet/Get the InsideOut flag. When off, the normals point out of\nthe box. When on, the normals point into the hexahedron. \nInsideOut is off by default.\n"},
  {"GetInsideOut", PyvtkBoxWidget_GetInsideOut, METH_VARARGS,
   "V.GetInsideOut() -> int\nC++: virtual vtkTypeBool GetInsideOut()\n\nSet/Get the InsideOut flag. When off, the normals point out of\nthe box. When on, the normals point into the hexahedron. \nInsideOut is off by default.\n"},
  {"InsideOutOn", PyvtkBoxWidget_InsideOutOn, METH_VARARGS,
   "V.InsideOutOn()\nC++: virtual void InsideOutOn()\n\nSet/Get the InsideOut flag. When off, the normals point out of\nthe box. When on, the normals point into the hexahedron. \nInsideOut is off by default.\n"},
  {"InsideOutOff", PyvtkBoxWidget_InsideOutOff, METH_VARARGS,
   "V.InsideOutOff()\nC++: virtual void InsideOutOff()\n\nSet/Get the InsideOut flag. When off, the normals point out of\nthe box. When on, the normals point into the hexahedron. \nInsideOut is off by default.\n"},
  {"GetTransform", PyvtkBoxWidget_GetTransform, METH_VARARGS,
   "V.GetTransform(vtkTransform)\nC++: virtual void GetTransform(vtkTransform *t)\n\nRetrieve a linear transform characterizing the transformation of\nthe box. Note that the transformation is relative to where\nPlaceWidget was initially called. This method modifies the\ntransform provided. The transform can be used to control the\nposition of vtkProp3D's, as well as other transformation\noperations (e.g., vtkTransformPolyData).\n"},
  {"SetTransform", PyvtkBoxWidget_SetTransform, METH_VARARGS,
   "V.SetTransform(vtkTransform)\nC++: virtual void SetTransform(vtkTransform *t)\n\nSet the position, scale and orientation of the box widget using\nthe transform specified. Note that the transformation is relative\nto where PlaceWidget was initially called (i.e., the original\nbounding box).\n"},
  {"GetPolyData", PyvtkBoxWidget_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that define the box widget.\nThe polydata consists of 6 quadrilateral faces and 15 points. The\nfirst eight points define the eight corner vertices; the next six\ndefine the\n-x,+x, -y,+y, -z,+z face points; and the final point (the 15th\n    out of 15 points) defines the center of the hexahedron. These\npoint values are guaranteed to be up-to-date when either the\n    InteractionEvent or EndInteractionEvent events are invoked.\n    The user provides the vtkPolyData and the points and cells\n    are added to it.\n"},
  {"GetHandleProperty", PyvtkBoxWidget_GetHandleProperty, METH_VARARGS,
   "V.GetHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be set.\n"},
  {"GetSelectedHandleProperty", PyvtkBoxWidget_GetSelectedHandleProperty, METH_VARARGS,
   "V.GetSelectedHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be set.\n"},
  {"HandlesOn", PyvtkBoxWidget_HandlesOn, METH_VARARGS,
   "V.HandlesOn()\nC++: void HandlesOn()\n\nSwitches handles (the spheres) on or off by manipulating the\nactor visibility.\n"},
  {"HandlesOff", PyvtkBoxWidget_HandlesOff, METH_VARARGS,
   "V.HandlesOff()\nC++: void HandlesOff()\n\nSwitches handles (the spheres) on or off by manipulating the\nactor visibility.\n"},
  {"GetFaceProperty", PyvtkBoxWidget_GetFaceProperty, METH_VARARGS,
   "V.GetFaceProperty() -> vtkProperty\nC++: virtual vtkProperty *GetFaceProperty()\n\nGet the face properties (the faces of the box). The properties of\nthe face when selected and normal can be set.\n"},
  {"GetSelectedFaceProperty", PyvtkBoxWidget_GetSelectedFaceProperty, METH_VARARGS,
   "V.GetSelectedFaceProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedFaceProperty()\n\nGet the face properties (the faces of the box). The properties of\nthe face when selected and normal can be set.\n"},
  {"GetOutlineProperty", PyvtkBoxWidget_GetOutlineProperty, METH_VARARGS,
   "V.GetOutlineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetOutlineProperty()\n\nGet the outline properties (the outline of the box). The\nproperties of the outline when selected and normal can be set.\n"},
  {"GetSelectedOutlineProperty", PyvtkBoxWidget_GetSelectedOutlineProperty, METH_VARARGS,
   "V.GetSelectedOutlineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedOutlineProperty()\n\nGet the outline properties (the outline of the box). The\nproperties of the outline when selected and normal can be set.\n"},
  {"SetOutlineFaceWires", PyvtkBoxWidget_SetOutlineFaceWires, METH_VARARGS,
   "V.SetOutlineFaceWires(int)\nC++: void SetOutlineFaceWires(int)\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {"GetOutlineFaceWires", PyvtkBoxWidget_GetOutlineFaceWires, METH_VARARGS,
   "V.GetOutlineFaceWires() -> int\nC++: virtual int GetOutlineFaceWires()\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {"OutlineFaceWiresOn", PyvtkBoxWidget_OutlineFaceWiresOn, METH_VARARGS,
   "V.OutlineFaceWiresOn()\nC++: void OutlineFaceWiresOn()\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {"OutlineFaceWiresOff", PyvtkBoxWidget_OutlineFaceWiresOff, METH_VARARGS,
   "V.OutlineFaceWiresOff()\nC++: void OutlineFaceWiresOff()\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {"SetOutlineCursorWires", PyvtkBoxWidget_SetOutlineCursorWires, METH_VARARGS,
   "V.SetOutlineCursorWires(int)\nC++: void SetOutlineCursorWires(int)\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {"GetOutlineCursorWires", PyvtkBoxWidget_GetOutlineCursorWires, METH_VARARGS,
   "V.GetOutlineCursorWires() -> int\nC++: virtual int GetOutlineCursorWires()\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {"OutlineCursorWiresOn", PyvtkBoxWidget_OutlineCursorWiresOn, METH_VARARGS,
   "V.OutlineCursorWiresOn()\nC++: void OutlineCursorWiresOn()\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {"OutlineCursorWiresOff", PyvtkBoxWidget_OutlineCursorWiresOff, METH_VARARGS,
   "V.OutlineCursorWiresOff()\nC++: void OutlineCursorWiresOff()\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {"SetTranslationEnabled", PyvtkBoxWidget_SetTranslationEnabled, METH_VARARGS,
   "V.SetTranslationEnabled(int)\nC++: virtual void SetTranslationEnabled(vtkTypeBool _arg)\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {"GetTranslationEnabled", PyvtkBoxWidget_GetTranslationEnabled, METH_VARARGS,
   "V.GetTranslationEnabled() -> int\nC++: virtual vtkTypeBool GetTranslationEnabled()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {"TranslationEnabledOn", PyvtkBoxWidget_TranslationEnabledOn, METH_VARARGS,
   "V.TranslationEnabledOn()\nC++: virtual void TranslationEnabledOn()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {"TranslationEnabledOff", PyvtkBoxWidget_TranslationEnabledOff, METH_VARARGS,
   "V.TranslationEnabledOff()\nC++: virtual void TranslationEnabledOff()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {"SetScalingEnabled", PyvtkBoxWidget_SetScalingEnabled, METH_VARARGS,
   "V.SetScalingEnabled(int)\nC++: virtual void SetScalingEnabled(vtkTypeBool _arg)\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {"GetScalingEnabled", PyvtkBoxWidget_GetScalingEnabled, METH_VARARGS,
   "V.GetScalingEnabled() -> int\nC++: virtual vtkTypeBool GetScalingEnabled()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {"ScalingEnabledOn", PyvtkBoxWidget_ScalingEnabledOn, METH_VARARGS,
   "V.ScalingEnabledOn()\nC++: virtual void ScalingEnabledOn()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {"ScalingEnabledOff", PyvtkBoxWidget_ScalingEnabledOff, METH_VARARGS,
   "V.ScalingEnabledOff()\nC++: virtual void ScalingEnabledOff()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {"SetRotationEnabled", PyvtkBoxWidget_SetRotationEnabled, METH_VARARGS,
   "V.SetRotationEnabled(int)\nC++: virtual void SetRotationEnabled(vtkTypeBool _arg)\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {"GetRotationEnabled", PyvtkBoxWidget_GetRotationEnabled, METH_VARARGS,
   "V.GetRotationEnabled() -> int\nC++: virtual vtkTypeBool GetRotationEnabled()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {"RotationEnabledOn", PyvtkBoxWidget_RotationEnabledOn, METH_VARARGS,
   "V.RotationEnabledOn()\nC++: virtual void RotationEnabledOn()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {"RotationEnabledOff", PyvtkBoxWidget_RotationEnabledOff, METH_VARARGS,
   "V.RotationEnabledOff()\nC++: virtual void RotationEnabledOff()\n\nControl the behavior of the widget. Translation, rotation, and\nscaling can all be enabled and disabled.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBoxWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkBoxWidget", // tp_name
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
  PyvtkBoxWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoxWidget_StaticNew()
{
  return vtkBoxWidget::New();
}

PyObject *PyvtkBoxWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBoxWidget_Type, PyvtkBoxWidget_Methods,
    "vtkBoxWidget",
 &PyvtkBoxWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkBoxWidget_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)Pyvtk3DWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBoxWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoxWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoxWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

