// python wrapper for vtkBrokenLineWidget
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
#include "vtkBrokenLineWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBrokenLineWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBrokenLineWidget_ClassNew(); }

#ifndef DECLARED_Pyvtk3DWidget_ClassNew
extern "C" { PyObject *Pyvtk3DWidget_ClassNew(); }
#define DECLARED_Pyvtk3DWidget_ClassNew
#endif

static const char *PyvtkBrokenLineWidget_Doc =
  "vtkBrokenLineWidget - 3D widget for manipulating a broken line\n\n"
  "Superclass: vtk3DWidget\n\n"
  "This 3D widget defines a broken line that can be interactively placed\n"
  "in a scene. The broken line has handles, the number of which can be\n"
  "changed, plus it can be picked on the broken line itself to translate\n"
  "or rotate it in the scene. A nice feature of the object is that the\n"
  "vtkBrokenLineWidget, like any 3D widget, will work with the current\n"
  "interactor style. That is, if vtkBrokenLineWidget does not handle an\n"
  "event, then all other registered observers (including the interactor\n"
  "style) have an opportunity to process the event. Otherwise, the\n"
  "vtkBrokenLineWidget will terminate the processing of the event that\n"
  "it handles.\n\n"
  "To use this object, just invoke SetInteractor() with the argument of\n"
  "the method a vtkRenderWindowInteractor.  You may also wish to invoke\n"
  "\"PlaceWidget()\" to initially position the widget. The interactor will\n"
  "act normally until the \"i\" key (for \"interactor\") is pressed, at\n"
  "which point the vtkBrokenLineWidget will appear. (See superclass\n"
  "documentation for information about changing this behavior.) Events\n"
  "that occur outside of the widget (i.e., no part of the widget is\n"
  "picked) are propagated to any other registered obsevers (such as the\n"
  "interaction style).  Turn off the widget by pressing the \"i\" key\n"
  "again (or invoke the Off() method).\n\n"
  "The button actions and key modifiers are as follows for controlling\n"
  "the widget:\n"
  "1) left button down on and drag one of the spherical handles to\n"
  "   change the shape of the broken line: the handles act as \"control\n"
  "   points\".\n"
  "2) left button or middle button down on a line segment forming the\n"
  "   broken line allows uniform translation of the widget.\n"
  "3) ctrl + middle button down on the widget enables spinning of the\n"
  "   widget about its center.\n"
  "4) right button down on the widget enables scaling of the widget. By\n"
  "   moving the mouse \"up\" the render window the broken line will be\n"
  "   made bigger; by moving \"down\" the render window the widget will be\n"
  "made smaller.\n"
  "5) ctrl key + right button down on any handle will erase it providing\n"
  "there will be two or more points remaining to form a broken line.\n"
  "6) shift key + right button down on any line segment will insert a\n"
  "   handle onto the broken line at the cursor position.\n\n"
  "The vtkBrokenLineWidget has several methods that can be used in\n"
  "conjunction with other VTK objects. The GetPolyData() method can be\n"
  "used to get the polygonal representation and can be used for things\n"
  "like seeding streamlines or probing other data sets. Typical usage of\n"
  "the widget is to make use of the StartInteractionEvent,\n"
  "InteractionEvent, and EndInteractionEvent events. The\n"
  "InteractionEvent is called on mouse motion; the other two events are\n"
  "called on button down and button up (either left or right button).\n\n"
  "Some additional features of this class include the ability to control\n"
  "the properties of the widget. You can set the properties of the\n"
  "selected and unselected representations of the broken line. For\n"
  "example, you can set the property for the handles and broken line. In\n"
  "addition there are methods to constrain the broken line so that it is\n"
  "aligned with a plane.  Note that a simple ruler widget can be derived\n"
  "by setting the resolution to 1, the number of handles to 2, and\n"
  "calling the GetSummedLength method!\n\n"
  "@par Thanks: This class was written by Philippe Pebay, Kitware SAS\n"
  "2012 This work was supported by CEA/DIF - Commissariat a l'Energie\n"
  "Atomique, Centre DAM Ile-De-France, BP12, F-91297 Arpajon, France.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkLineWidget vtkPointWidget vtkSphereWidget\n"
  "vtkImagePlaneWidget vtkImplicitPlaneWidget vtkPlaneWidget\n\n";


static PyObject *
PyvtkBrokenLineWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBrokenLineWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBrokenLineWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBrokenLineWidget *tempr = vtkBrokenLineWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrokenLineWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBrokenLineWidget::NewInstance());

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
PyvtkBrokenLineWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

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
      op->vtkBrokenLineWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

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
      op->vtkBrokenLineWidget::PlaceWidget(temp0);
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
PyvtkBrokenLineWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkBrokenLineWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBrokenLineWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

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
      op->vtkBrokenLineWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBrokenLineWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBrokenLineWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkBrokenLineWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkBrokenLineWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
PyvtkBrokenLineWidget_SetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectToPlane(temp0);
    }
    else
    {
      op->vtkBrokenLineWidget::SetProjectToPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectToPlane() :
      op->vtkBrokenLineWidget::GetProjectToPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_ProjectToPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProjectToPlaneOn();
    }
    else
    {
      op->vtkBrokenLineWidget::ProjectToPlaneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_ProjectToPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProjectToPlaneOff();
    }
    else
    {
      op->vtkBrokenLineWidget::ProjectToPlaneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetPlaneSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  vtkPlaneSource *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneSource"))
  {
    if (ap.IsBound())
    {
      op->SetPlaneSource(temp0);
    }
    else
    {
      op->vtkBrokenLineWidget::SetPlaneSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormal(temp0);
    }
    else
    {
      op->vtkBrokenLineWidget::SetProjectionNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetProjectionNormalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMinValue() :
      op->vtkBrokenLineWidget::GetProjectionNormalMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetProjectionNormalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMaxValue() :
      op->vtkBrokenLineWidget::GetProjectionNormalMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormal() :
      op->vtkBrokenLineWidget::GetProjectionNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetProjectionNormalToXAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToXAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToXAxes();
    }
    else
    {
      op->vtkBrokenLineWidget::SetProjectionNormalToXAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetProjectionNormalToYAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToYAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToYAxes();
    }
    else
    {
      op->vtkBrokenLineWidget::SetProjectionNormalToYAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetProjectionNormalToZAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToZAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToZAxes();
    }
    else
    {
      op->vtkBrokenLineWidget::SetProjectionNormalToZAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetProjectionNormalToOblique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToOblique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToOblique();
    }
    else
    {
      op->vtkBrokenLineWidget::SetProjectionNormalToOblique();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionPosition(temp0);
    }
    else
    {
      op->vtkBrokenLineWidget::SetProjectionPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProjectionPosition() :
      op->vtkBrokenLineWidget::GetProjectionPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

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
      op->vtkBrokenLineWidget::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetHandleProperty(temp0);
    }
    else
    {
      op->vtkBrokenLineWidget::SetHandleProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkBrokenLineWidget::GetHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSelectedHandleProperty(temp0);
    }
    else
    {
      op->vtkBrokenLineWidget::SetSelectedHandleProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkBrokenLineWidget::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLineProperty(temp0);
    }
    else
    {
      op->vtkBrokenLineWidget::SetLineProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkBrokenLineWidget::GetLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSelectedLineProperty(temp0);
    }
    else
    {
      op->vtkBrokenLineWidget::SetSelectedLineProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkBrokenLineWidget::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfHandles(temp0);
    }
    else
    {
      op->vtkBrokenLineWidget::SetNumberOfHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfHandles() :
      op->vtkBrokenLineWidget::GetNumberOfHandles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  int temp0;
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
    if (ap.IsBound())
    {
      op->SetHandlePosition(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBrokenLineWidget::SetHandlePosition(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBrokenLineWidget_SetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetHandlePosition(temp0, temp1);
    }
    else
    {
      op->vtkBrokenLineWidget::SetHandlePosition(temp0, temp1);
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
PyvtkBrokenLineWidget_SetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkBrokenLineWidget_SetHandlePosition_s1(self, args);
    case 2:
      return PyvtkBrokenLineWidget_SetHandlePosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHandlePosition");
  return nullptr;
}



static PyObject *
PyvtkBrokenLineWidget_GetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetHandlePosition(temp0, temp1);
    }
    else
    {
      op->vtkBrokenLineWidget::GetHandlePosition(temp0, temp1);
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
PyvtkBrokenLineWidget_GetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHandlePosition(temp0) :
      op->vtkBrokenLineWidget::GetHandlePosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBrokenLineWidget_GetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBrokenLineWidget_GetHandlePosition_s1(self, args);
    case 1:
      return PyvtkBrokenLineWidget_GetHandlePosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetHandlePosition");
  return nullptr;
}



static PyObject *
PyvtkBrokenLineWidget_GetSummedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSummedLength() :
      op->vtkBrokenLineWidget::GetSummedLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_InitializeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->InitializeHandles(temp0);
    }
    else
    {
      op->vtkBrokenLineWidget::InitializeHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessEvents(temp0);
    }
    else
    {
      op->vtkBrokenLineWidget::SetProcessEvents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetProcessEventsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEventsMinValue() :
      op->vtkBrokenLineWidget::GetProcessEventsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetProcessEventsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEventsMaxValue() :
      op->vtkBrokenLineWidget::GetProcessEventsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEvents() :
      op->vtkBrokenLineWidget::GetProcessEvents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_ProcessEventsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessEventsOn();
    }
    else
    {
      op->vtkBrokenLineWidget::ProcessEventsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_ProcessEventsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessEventsOff();
    }
    else
    {
      op->vtkBrokenLineWidget::ProcessEventsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_SetHandleSizeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleSizeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleSizeFactor(temp0);
    }
    else
    {
      op->vtkBrokenLineWidget::SetHandleSizeFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetHandleSizeFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHandleSizeFactorMinValue() :
      op->vtkBrokenLineWidget::GetHandleSizeFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetHandleSizeFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHandleSizeFactorMaxValue() :
      op->vtkBrokenLineWidget::GetHandleSizeFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrokenLineWidget_GetHandleSizeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrokenLineWidget *op = static_cast<vtkBrokenLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHandleSizeFactor() :
      op->vtkBrokenLineWidget::GetHandleSizeFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBrokenLineWidget_Methods[] = {
  {"IsTypeOf", PyvtkBrokenLineWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBrokenLineWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBrokenLineWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBrokenLineWidget\nC++: static vtkBrokenLineWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBrokenLineWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBrokenLineWidget\nC++: vtkBrokenLineWidget *NewInstance()\n\n"},
  {"SetEnabled", PyvtkBrokenLineWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"PlaceWidget", PyvtkBrokenLineWidget_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\nV.PlaceWidget()\nC++: void PlaceWidget() override;\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"SetProjectToPlane", PyvtkBrokenLineWidget_SetProjectToPlane, METH_VARARGS,
   "V.SetProjectToPlane(int)\nC++: virtual void SetProjectToPlane(vtkTypeBool _arg)\n\nForce the broken line widget to be projected onto one of the\northogonal planes. Remember that when the state changes, a\nModifiedEvent is invoked. This can be used to snap the broken\nline to the plane if it is originally not aligned.  The normal in\nSetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and\n3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {"GetProjectToPlane", PyvtkBrokenLineWidget_GetProjectToPlane, METH_VARARGS,
   "V.GetProjectToPlane() -> int\nC++: virtual vtkTypeBool GetProjectToPlane()\n\nForce the broken line widget to be projected onto one of the\northogonal planes. Remember that when the state changes, a\nModifiedEvent is invoked. This can be used to snap the broken\nline to the plane if it is originally not aligned.  The normal in\nSetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and\n3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {"ProjectToPlaneOn", PyvtkBrokenLineWidget_ProjectToPlaneOn, METH_VARARGS,
   "V.ProjectToPlaneOn()\nC++: virtual void ProjectToPlaneOn()\n\nForce the broken line widget to be projected onto one of the\northogonal planes. Remember that when the state changes, a\nModifiedEvent is invoked. This can be used to snap the broken\nline to the plane if it is originally not aligned.  The normal in\nSetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and\n3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {"ProjectToPlaneOff", PyvtkBrokenLineWidget_ProjectToPlaneOff, METH_VARARGS,
   "V.ProjectToPlaneOff()\nC++: virtual void ProjectToPlaneOff()\n\nForce the broken line widget to be projected onto one of the\northogonal planes. Remember that when the state changes, a\nModifiedEvent is invoked. This can be used to snap the broken\nline to the plane if it is originally not aligned.  The normal in\nSetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and\n3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {"SetPlaneSource", PyvtkBrokenLineWidget_SetPlaneSource, METH_VARARGS,
   "V.SetPlaneSource(vtkPlaneSource)\nC++: void SetPlaneSource(vtkPlaneSource *plane)\n\nSet up a reference to a vtkPlaneSource that could be from another\nwidget object, e.g. a vtkPolyDataSourceWidget.\n"},
  {"SetProjectionNormal", PyvtkBrokenLineWidget_SetProjectionNormal, METH_VARARGS,
   "V.SetProjectionNormal(int)\nC++: virtual void SetProjectionNormal(int _arg)\n\n"},
  {"GetProjectionNormalMinValue", PyvtkBrokenLineWidget_GetProjectionNormalMinValue, METH_VARARGS,
   "V.GetProjectionNormalMinValue() -> int\nC++: virtual int GetProjectionNormalMinValue()\n\n"},
  {"GetProjectionNormalMaxValue", PyvtkBrokenLineWidget_GetProjectionNormalMaxValue, METH_VARARGS,
   "V.GetProjectionNormalMaxValue() -> int\nC++: virtual int GetProjectionNormalMaxValue()\n\n"},
  {"GetProjectionNormal", PyvtkBrokenLineWidget_GetProjectionNormal, METH_VARARGS,
   "V.GetProjectionNormal() -> int\nC++: virtual int GetProjectionNormal()\n\n"},
  {"SetProjectionNormalToXAxes", PyvtkBrokenLineWidget_SetProjectionNormalToXAxes, METH_VARARGS,
   "V.SetProjectionNormalToXAxes()\nC++: void SetProjectionNormalToXAxes()\n\n"},
  {"SetProjectionNormalToYAxes", PyvtkBrokenLineWidget_SetProjectionNormalToYAxes, METH_VARARGS,
   "V.SetProjectionNormalToYAxes()\nC++: void SetProjectionNormalToYAxes()\n\n"},
  {"SetProjectionNormalToZAxes", PyvtkBrokenLineWidget_SetProjectionNormalToZAxes, METH_VARARGS,
   "V.SetProjectionNormalToZAxes()\nC++: void SetProjectionNormalToZAxes()\n\n"},
  {"SetProjectionNormalToOblique", PyvtkBrokenLineWidget_SetProjectionNormalToOblique, METH_VARARGS,
   "V.SetProjectionNormalToOblique()\nC++: void SetProjectionNormalToOblique()\n\n"},
  {"SetProjectionPosition", PyvtkBrokenLineWidget_SetProjectionPosition, METH_VARARGS,
   "V.SetProjectionPosition(float)\nC++: void SetProjectionPosition(double position)\n\nSet the position of broken line handles and points in terms of a\nplane's position. i.e., if ProjectionNormal is 0, all of the\nx-coordinate values of the points are set to position. Any value\ncan be passed (and is ignored) to update the broken line points\nwhen Projection normal is set to 3 for arbitrary plane\norientations.\n"},
  {"GetProjectionPosition", PyvtkBrokenLineWidget_GetProjectionPosition, METH_VARARGS,
   "V.GetProjectionPosition() -> float\nC++: virtual double GetProjectionPosition()\n\nSet the position of broken line handles and points in terms of a\nplane's position. i.e., if ProjectionNormal is 0, all of the\nx-coordinate values of the points are set to position. Any value\ncan be passed (and is ignored) to update the broken line points\nwhen Projection normal is set to 3 for arbitrary plane\norientations.\n"},
  {"GetPolyData", PyvtkBrokenLineWidget_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the broken\nline.  The polydata consists of points and line segments\nnumbering nHandles and nHandles - 1, respectively. Points are\nguaranteed to be up-to-date when either the InteractionEvent or\nEndInteraction events are invoked. The user provides the\nvtkPolyData and the points and polyline are added to it.\n"},
  {"SetHandleProperty", PyvtkBrokenLineWidget_SetHandleProperty, METH_VARARGS,
   "V.SetHandleProperty(vtkProperty)\nC++: virtual void SetHandleProperty(vtkProperty *)\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {"GetHandleProperty", PyvtkBrokenLineWidget_GetHandleProperty, METH_VARARGS,
   "V.GetHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetHandleProperty()\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {"SetSelectedHandleProperty", PyvtkBrokenLineWidget_SetSelectedHandleProperty, METH_VARARGS,
   "V.SetSelectedHandleProperty(vtkProperty)\nC++: virtual void SetSelectedHandleProperty(vtkProperty *)\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {"GetSelectedHandleProperty", PyvtkBrokenLineWidget_GetSelectedHandleProperty, METH_VARARGS,
   "V.GetSelectedHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {"SetLineProperty", PyvtkBrokenLineWidget_SetLineProperty, METH_VARARGS,
   "V.SetLineProperty(vtkProperty)\nC++: virtual void SetLineProperty(vtkProperty *)\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {"GetLineProperty", PyvtkBrokenLineWidget_GetLineProperty, METH_VARARGS,
   "V.GetLineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetLineProperty()\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {"SetSelectedLineProperty", PyvtkBrokenLineWidget_SetSelectedLineProperty, METH_VARARGS,
   "V.SetSelectedLineProperty(vtkProperty)\nC++: virtual void SetSelectedLineProperty(vtkProperty *)\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {"GetSelectedLineProperty", PyvtkBrokenLineWidget_GetSelectedLineProperty, METH_VARARGS,
   "V.GetSelectedLineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedLineProperty()\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {"SetNumberOfHandles", PyvtkBrokenLineWidget_SetNumberOfHandles, METH_VARARGS,
   "V.SetNumberOfHandles(int)\nC++: virtual void SetNumberOfHandles(int npts)\n\nSet/Get the number of handles for this widget.\n"},
  {"GetNumberOfHandles", PyvtkBrokenLineWidget_GetNumberOfHandles, METH_VARARGS,
   "V.GetNumberOfHandles() -> int\nC++: virtual int GetNumberOfHandles()\n\nSet/Get the number of handles for this widget.\n"},
  {"SetHandlePosition", PyvtkBrokenLineWidget_SetHandlePosition, METH_VARARGS,
   "V.SetHandlePosition(int, float, float, float)\nC++: void SetHandlePosition(int handle, double x, double y,\n    double z)\nV.SetHandlePosition(int, [float, float, float])\nC++: void SetHandlePosition(int handle, double xyz[3])\n\nSet/Get the position of the broken line handles. Call\nGetNumberOfHandles to determine the valid range of handle\nindices.\n"},
  {"GetHandlePosition", PyvtkBrokenLineWidget_GetHandlePosition, METH_VARARGS,
   "V.GetHandlePosition(int, [float, float, float])\nC++: void GetHandlePosition(int handle, double xyz[3])\nV.GetHandlePosition(int) -> (float, ...)\nC++: double *GetHandlePosition(int handle)\n\nSet/Get the position of the broken line handles. Call\nGetNumberOfHandles to determine the valid range of handle\nindices.\n"},
  {"GetSummedLength", PyvtkBrokenLineWidget_GetSummedLength, METH_VARARGS,
   "V.GetSummedLength() -> float\nC++: double GetSummedLength()\n\nGet the summed lengths of the individual straight line segments.\n"},
  {"InitializeHandles", PyvtkBrokenLineWidget_InitializeHandles, METH_VARARGS,
   "V.InitializeHandles(vtkPoints)\nC++: void InitializeHandles(vtkPoints *points)\n\nConvenience method to allocate and set the handles from a\nvtkPoints instance.\n"},
  {"SetProcessEvents", PyvtkBrokenLineWidget_SetProcessEvents, METH_VARARGS,
   "V.SetProcessEvents(int)\nC++: virtual void SetProcessEvents(vtkTypeBool _arg)\n\nTurn on / off event processing for this widget. If off, the\nwidget will not respond to user interaction\n"},
  {"GetProcessEventsMinValue", PyvtkBrokenLineWidget_GetProcessEventsMinValue, METH_VARARGS,
   "V.GetProcessEventsMinValue() -> int\nC++: virtual vtkTypeBool GetProcessEventsMinValue()\n\nTurn on / off event processing for this widget. If off, the\nwidget will not respond to user interaction\n"},
  {"GetProcessEventsMaxValue", PyvtkBrokenLineWidget_GetProcessEventsMaxValue, METH_VARARGS,
   "V.GetProcessEventsMaxValue() -> int\nC++: virtual vtkTypeBool GetProcessEventsMaxValue()\n\nTurn on / off event processing for this widget. If off, the\nwidget will not respond to user interaction\n"},
  {"GetProcessEvents", PyvtkBrokenLineWidget_GetProcessEvents, METH_VARARGS,
   "V.GetProcessEvents() -> int\nC++: virtual vtkTypeBool GetProcessEvents()\n\nTurn on / off event processing for this widget. If off, the\nwidget will not respond to user interaction\n"},
  {"ProcessEventsOn", PyvtkBrokenLineWidget_ProcessEventsOn, METH_VARARGS,
   "V.ProcessEventsOn()\nC++: virtual void ProcessEventsOn()\n\nTurn on / off event processing for this widget. If off, the\nwidget will not respond to user interaction\n"},
  {"ProcessEventsOff", PyvtkBrokenLineWidget_ProcessEventsOff, METH_VARARGS,
   "V.ProcessEventsOff()\nC++: virtual void ProcessEventsOff()\n\nTurn on / off event processing for this widget. If off, the\nwidget will not respond to user interaction\n"},
  {"SetHandleSizeFactor", PyvtkBrokenLineWidget_SetHandleSizeFactor, METH_VARARGS,
   "V.SetHandleSizeFactor(float)\nC++: virtual void SetHandleSizeFactor(double _arg)\n\nSet/Get the size factor to be applied to the handle radii.\nDefault: 1.\n"},
  {"GetHandleSizeFactorMinValue", PyvtkBrokenLineWidget_GetHandleSizeFactorMinValue, METH_VARARGS,
   "V.GetHandleSizeFactorMinValue() -> float\nC++: virtual double GetHandleSizeFactorMinValue()\n\nSet/Get the size factor to be applied to the handle radii.\nDefault: 1.\n"},
  {"GetHandleSizeFactorMaxValue", PyvtkBrokenLineWidget_GetHandleSizeFactorMaxValue, METH_VARARGS,
   "V.GetHandleSizeFactorMaxValue() -> float\nC++: virtual double GetHandleSizeFactorMaxValue()\n\nSet/Get the size factor to be applied to the handle radii.\nDefault: 1.\n"},
  {"GetHandleSizeFactor", PyvtkBrokenLineWidget_GetHandleSizeFactor, METH_VARARGS,
   "V.GetHandleSizeFactor() -> float\nC++: virtual double GetHandleSizeFactor()\n\nSet/Get the size factor to be applied to the handle radii.\nDefault: 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBrokenLineWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkBrokenLineWidget", // tp_name
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
  PyvtkBrokenLineWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBrokenLineWidget_StaticNew()
{
  return vtkBrokenLineWidget::New();
}

PyObject *PyvtkBrokenLineWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBrokenLineWidget_Type, PyvtkBrokenLineWidget_Methods,
    "vtkBrokenLineWidget",
 &PyvtkBrokenLineWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkBrokenLineWidget_Type;

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

void PyVTKAddFile_vtkBrokenLineWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBrokenLineWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBrokenLineWidget", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_PROJECTION_YZ", 0 },
        { "VTK_PROJECTION_XZ", 1 },
        { "VTK_PROJECTION_XY", 2 },
        { "VTK_PROJECTION_OBLIQUE", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

