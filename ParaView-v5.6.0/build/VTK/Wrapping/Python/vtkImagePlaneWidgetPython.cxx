// python wrapper for vtkImagePlaneWidget
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
#include "vtkImagePlaneWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImagePlaneWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImagePlaneWidget_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataSourceWidget_ClassNew
extern "C" { PyObject *PyvtkPolyDataSourceWidget_ClassNew(); }
#define DECLARED_PyvtkPolyDataSourceWidget_ClassNew
#endif

static const char *PyvtkImagePlaneWidget_Doc =
  "vtkImagePlaneWidget - 3D widget for reslicing image data\n\n"
  "Superclass: vtkPolyDataSourceWidget\n\n"
  "This 3D widget defines a plane that can be interactively placed in an\n"
  "image volume. A nice feature of the object is that the\n"
  "vtkImagePlaneWidget, like any 3D widget, will work with the current\n"
  "interactor style. That is, if vtkImagePlaneWidget does not handle an\n"
  "event, then all other registered observers (including the interactor\n"
  "style) have an opportunity to process the event. Otherwise, the\n"
  "vtkImagePlaneWidget will terminate the processing of the event that\n"
  "it handles.\n\n"
  "The core functionality of the widget is provided by a vtkImageReslice\n"
  "object which passes its output onto a texture mapping pipeline for\n"
  "fast slicing through volumetric data. See the key methods:\n"
  "GenerateTexturePlane() and UpdatePlane() for implementation details.\n\n"
  "To use this object, just invoke SetInteractor() with the argument of\n"
  "the method a vtkRenderWindowInteractor.  You may also wish to invoke\n"
  "\"PlaceWidget()\" to initially position the widget. If the \"i\" key (for\n"
  "\"interactor\") is pressed, the vtkImagePlaneWidget will appear. (See\n"
  "superclass documentation for information about changing this\n"
  "behavior.)\n\n"
  "Selecting the widget with the middle mouse button with and without\n"
  "holding the shift or control keys enables complex reslicing\n"
  "capablilites. To facilitate use, a set of 'margins' (left, right,\n"
  "top, bottom) are shown as a set of plane-axes aligned lines, the\n"
  "properties of which can be changed as a group. Without keyboard\n"
  "modifiers: selecting in the middle of the margins enables translation\n"
  "of the plane along its normal. Selecting one of the corners within\n"
  "the margins enables spinning around the plane's normal at its center.\n"
  " Selecting within a margin allows rotating about the center of the\n"
  "plane around an axis aligned with the margin (i.e., selecting left\n"
  "margin enables rotating around the plane's local y-prime axis). With\n"
  "control key modifier: margin selection enables edge translation\n"
  "(i.e., a constrained form of scaling). Selecting within the margins\n"
  "enables translation of the entire plane. With shift key modifier:\n"
  "uniform plane scaling is enabled.  Moving the mouse up enlarges the\n"
  "plane while downward movement shrinks it.\n\n"
  "Window-level is achieved by using the right mouse button. \n"
  "Window-level values can be reset by shift + 'r' or control + 'r'\n"
  "while regular reset camera is maintained with 'r' or 'R'. The left\n"
  "mouse button can be used to query the underlying image data with a\n"
  "snap-to cross-hair cursor.  Currently, the nearest point in the input\n"
  "image data to the mouse cursor generates the cross-hairs.  With\n"
  "oblique slicing, this behaviour may appear unsatisfactory. Text\n"
  "display of window-level and image coordinates/data values are\n"
  "provided by a text actor/mapper pair.\n\n"
  "Events that occur outside of the widget (i.e., no part of the widget\n"
  "is picked) are propagated to any other registered obsevers (such as\n"
  "the interaction style). Turn off the widget by pressing the \"i\" key\n"
  "again (or invoke the Off() method). To support interactive\n"
  "manipulation of objects, this class invokes the events\n"
  "StartInteractionEvent, InteractionEvent, and EndInteractionEvent as\n"
  "well as StartWindowLevelEvent, WindowLevelEvent, EndWindowLevelEvent\n"
  "and ResetWindowLevelEvent.\n\n"
  "The vtkImagePlaneWidget has several methods that can be used in\n"
  "conjunction with other VTK objects. The GetPolyData() method can be\n"
  "used to get the polygonal representation of the plane and can be used\n"
  "as input for other VTK objects. Typical usage of the widget is to\n"
  "make use of the StartInteractionEvent, InteractionEvent, and\n"
  "EndInteractionEvent events. The InteractionEvent is called on mouse\n"
  "motion; the other two events are called on button down and button up\n"
  "(either left or right button).\n\n"
  "Some additional features of this class include the ability to control\n"
  "the properties of the widget. You can set the properties of: the\n"
  "selected and unselected representations of the plane's outline; the\n"
  "text actor via its vtkTextProperty; the cross-hair cursor. In\n"
  "addition there are methods to constrain the plane so that it is\n"
  "aligned along the x-y-z axes.  Finally, one can specify the degree of\n"
  "interpolation (vtkImageReslice): nearest neighbour, linear, and\n"
  "cubic.\n\n"
  "@par Thanks: Thanks to Dean Inglis for developing and contributing\n"
  "this class. Based on the Python SlicePlaneFactory from Atamai, Inc.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkLineWidget  vtkPlaneWidget vtkPointWidget\n"
  "vtkPolyDataSourceWidget vtkSphereWidget vtkImplicitPlaneWidget\n\n";


static PyObject *
PyvtkImagePlaneWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImagePlaneWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImagePlaneWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImagePlaneWidget *tempr = vtkImagePlaneWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImagePlaneWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImagePlaneWidget::NewInstance());

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
PyvtkImagePlaneWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::PlaceWidget(temp0);
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
PyvtkImagePlaneWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkImagePlaneWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImagePlaneWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkImagePlaneWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkImagePlaneWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
PyvtkImagePlaneWidget_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImagePlaneWidget::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetOrigin(temp0);
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
PyvtkImagePlaneWidget_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImagePlaneWidget_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}



static PyObject *
PyvtkImagePlaneWidget_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkImagePlaneWidget::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetOrigin(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetOrigin(temp0);
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
PyvtkImagePlaneWidget_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImagePlaneWidget_GetOrigin_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return nullptr;
}



static PyObject *
PyvtkImagePlaneWidget_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPoint1(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPoint1(temp0);
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
PyvtkImagePlaneWidget_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImagePlaneWidget_SetPoint1_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}



static PyObject *
PyvtkImagePlaneWidget_GetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkImagePlaneWidget::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPoint1(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetPoint1(temp0);
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
PyvtkImagePlaneWidget_GetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImagePlaneWidget_GetPoint1_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1");
  return nullptr;
}



static PyObject *
PyvtkImagePlaneWidget_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPoint2(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPoint2(temp0);
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
PyvtkImagePlaneWidget_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImagePlaneWidget_SetPoint2_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}



static PyObject *
PyvtkImagePlaneWidget_GetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkImagePlaneWidget::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPoint2(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetPoint2(temp0);
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
PyvtkImagePlaneWidget_GetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImagePlaneWidget_GetPoint2_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2");
  return nullptr;
}



static PyObject *
PyvtkImagePlaneWidget_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkImagePlaneWidget::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCenter(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetCenter(temp0);
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
PyvtkImagePlaneWidget_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImagePlaneWidget_GetCenter_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}



static PyObject *
PyvtkImagePlaneWidget_GetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkImagePlaneWidget::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetNormal(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetNormal(temp0);
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
PyvtkImagePlaneWidget_GetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImagePlaneWidget_GetNormal_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNormal");
  return nullptr;
}



static PyObject *
PyvtkImagePlaneWidget_GetVector1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetVector1(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetVector1(temp0);
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
PyvtkImagePlaneWidget_GetVector2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetVector2(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetVector2(temp0);
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
PyvtkImagePlaneWidget_GetSliceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceIndex() :
      op->vtkImagePlaneWidget::GetSliceIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetSliceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceIndex(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetSliceIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetSlicePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSlicePosition() :
      op->vtkImagePlaneWidget::GetSlicePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetSlicePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlicePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlicePosition(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetSlicePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetResliceInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResliceInterpolate(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetResliceInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetResliceInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResliceInterpolate() :
      op->vtkImagePlaneWidget::GetResliceInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetResliceInterpolateToNearestNeighbour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolateToNearestNeighbour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResliceInterpolateToNearestNeighbour();
    }
    else
    {
      op->vtkImagePlaneWidget::SetResliceInterpolateToNearestNeighbour();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetResliceInterpolateToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolateToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResliceInterpolateToLinear();
    }
    else
    {
      op->vtkImagePlaneWidget::SetResliceInterpolateToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetResliceInterpolateToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolateToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResliceInterpolateToCubic();
    }
    else
    {
      op->vtkImagePlaneWidget::SetResliceInterpolateToCubic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetResliceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetResliceOutput() :
      op->vtkImagePlaneWidget::GetResliceOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetRestrictPlaneToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestrictPlaneToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRestrictPlaneToVolume(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetRestrictPlaneToVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRestrictPlaneToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestrictPlaneToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRestrictPlaneToVolume() :
      op->vtkImagePlaneWidget::GetRestrictPlaneToVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_RestrictPlaneToVolumeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPlaneToVolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestrictPlaneToVolumeOn();
    }
    else
    {
      op->vtkImagePlaneWidget::RestrictPlaneToVolumeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_RestrictPlaneToVolumeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPlaneToVolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestrictPlaneToVolumeOff();
    }
    else
    {
      op->vtkImagePlaneWidget::RestrictPlaneToVolumeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetUserControlledLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserControlledLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUserControlledLookupTable(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetUserControlledLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetUserControlledLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserControlledLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUserControlledLookupTable() :
      op->vtkImagePlaneWidget::GetUserControlledLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UserControlledLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserControlledLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserControlledLookupTableOn();
    }
    else
    {
      op->vtkImagePlaneWidget::UserControlledLookupTableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UserControlledLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserControlledLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserControlledLookupTableOff();
    }
    else
    {
      op->vtkImagePlaneWidget::UserControlledLookupTableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetTextureInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureInterpolate(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetTextureInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTextureInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureInterpolate() :
      op->vtkImagePlaneWidget::GetTextureInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_TextureInterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureInterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextureInterpolateOn();
    }
    else
    {
      op->vtkImagePlaneWidget::TextureInterpolateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_TextureInterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureInterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextureInterpolateOff();
    }
    else
    {
      op->vtkImagePlaneWidget::TextureInterpolateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetTextureVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureVisibility(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetTextureVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTextureVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureVisibility() :
      op->vtkImagePlaneWidget::GetTextureVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_TextureVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextureVisibilityOn();
    }
    else
    {
      op->vtkImagePlaneWidget::TextureVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_TextureVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextureVisibilityOff();
    }
    else
    {
      op->vtkImagePlaneWidget::TextureVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetPolyDataAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetPolyDataAlgorithm() :
      op->vtkImagePlaneWidget::GetPolyDataAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePlacement();
    }
    else
    {
      op->vtkImagePlaneWidget::UpdatePlacement();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetTexture() :
      op->vtkImagePlaneWidget::GetTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapToColors *tempr = (ap.IsBound() ?
      op->GetColorMap() :
      op->vtkImagePlaneWidget::GetColorMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkImageMapToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageMapToColors"))
  {
    if (ap.IsBound())
    {
      op->SetColorMap(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetColorMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetPlaneProperty(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPlaneProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPlaneProperty() :
      op->vtkImagePlaneWidget::GetPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSelectedPlaneProperty(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetSelectedPlaneProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedPlaneProperty() :
      op->vtkImagePlaneWidget::GetSelectedPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneOrientation(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPlaneOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetPlaneOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneOrientation() :
      op->vtkImagePlaneWidget::GetPlaneOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneOrientationToXAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneOrientationToXAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneOrientationToXAxes();
    }
    else
    {
      op->vtkImagePlaneWidget::SetPlaneOrientationToXAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneOrientationToYAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneOrientationToYAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneOrientationToYAxes();
    }
    else
    {
      op->vtkImagePlaneWidget::SetPlaneOrientationToYAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneOrientationToZAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneOrientationToZAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneOrientationToZAxes();
    }
    else
    {
      op->vtkImagePlaneWidget::SetPlaneOrientationToZAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkAbstractPropPicker *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPropPicker"))
  {
    if (ap.IsBound())
    {
      op->SetPicker(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPicker(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkLookupTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkImagePlaneWidget::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayText(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetDisplayText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayText() :
      op->vtkImagePlaneWidget::GetDisplayText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_DisplayTextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayTextOn();
    }
    else
    {
      op->vtkImagePlaneWidget::DisplayTextOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_DisplayTextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayTextOff();
    }
    else
    {
      op->vtkImagePlaneWidget::DisplayTextOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetCursorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetCursorProperty(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetCursorProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCursorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetCursorProperty() :
      op->vtkImagePlaneWidget::GetCursorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMarginProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarginProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetMarginProperty(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetMarginProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetMarginProperty() :
      op->vtkImagePlaneWidget::GetMarginProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMarginSizeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarginSizeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarginSizeX(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetMarginSizeX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeXMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeXMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMarginSizeXMinValue() :
      op->vtkImagePlaneWidget::GetMarginSizeXMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeXMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeXMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMarginSizeXMaxValue() :
      op->vtkImagePlaneWidget::GetMarginSizeXMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMarginSizeX() :
      op->vtkImagePlaneWidget::GetMarginSizeX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMarginSizeY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarginSizeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarginSizeY(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetMarginSizeY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeYMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeYMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMarginSizeYMinValue() :
      op->vtkImagePlaneWidget::GetMarginSizeYMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeYMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeYMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMarginSizeYMaxValue() :
      op->vtkImagePlaneWidget::GetMarginSizeYMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMarginSizeY() :
      op->vtkImagePlaneWidget::GetMarginSizeY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkImagePlaneWidget::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetTexturePlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturePlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTexturePlaneProperty(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetTexturePlaneProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTexturePlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetTexturePlaneProperty() :
      op->vtkImagePlaneWidget::GetTexturePlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double temp0;
  double temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetWindowLevel(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImagePlaneWidget::SetWindowLevel(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetWindowLevel(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetWindowLevel(temp0);
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
PyvtkImagePlaneWidget_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkImagePlaneWidget::GetWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkImagePlaneWidget::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCursorData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetCursorData(temp0) :
      op->vtkImagePlaneWidget::GetCursorData(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCursorDataStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorDataStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCursorDataStatus() :
      op->vtkImagePlaneWidget::GetCursorDataStatus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCurrentCursorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCurrentCursorPosition() :
      op->vtkImagePlaneWidget::GetCurrentCursorPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCurrentImageValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentImageValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCurrentImageValue() :
      op->vtkImagePlaneWidget::GetCurrentImageValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetResliceAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetResliceAxes() :
      op->vtkImagePlaneWidget::GetResliceAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetReslice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReslice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageReslice *tempr = (ap.IsBound() ?
      op->GetReslice() :
      op->vtkImagePlaneWidget::GetReslice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetUseContinuousCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseContinuousCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseContinuousCursor(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetUseContinuousCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetUseContinuousCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseContinuousCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseContinuousCursor() :
      op->vtkImagePlaneWidget::GetUseContinuousCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UseContinuousCursorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseContinuousCursorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseContinuousCursorOn();
    }
    else
    {
      op->vtkImagePlaneWidget::UseContinuousCursorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UseContinuousCursorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseContinuousCursorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseContinuousCursorOff();
    }
    else
    {
      op->vtkImagePlaneWidget::UseContinuousCursorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteraction(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetInteraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteraction() :
      op->vtkImagePlaneWidget::GetInteraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_InteractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractionOn();
    }
    else
    {
      op->vtkImagePlaneWidget::InteractionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_InteractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractionOff();
    }
    else
    {
      op->vtkImagePlaneWidget::InteractionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetLeftButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftButtonAction(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetLeftButtonAction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonActionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonActionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftButtonActionMinValue() :
      op->vtkImagePlaneWidget::GetLeftButtonActionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonActionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonActionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftButtonActionMaxValue() :
      op->vtkImagePlaneWidget::GetLeftButtonActionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftButtonAction() :
      op->vtkImagePlaneWidget::GetLeftButtonAction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMiddleButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMiddleButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMiddleButtonAction(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetMiddleButtonAction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonActionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonActionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMiddleButtonActionMinValue() :
      op->vtkImagePlaneWidget::GetMiddleButtonActionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonActionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonActionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMiddleButtonActionMaxValue() :
      op->vtkImagePlaneWidget::GetMiddleButtonActionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMiddleButtonAction() :
      op->vtkImagePlaneWidget::GetMiddleButtonAction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetRightButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightButtonAction(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetRightButtonAction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonActionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonActionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightButtonActionMinValue() :
      op->vtkImagePlaneWidget::GetRightButtonActionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonActionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonActionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightButtonActionMaxValue() :
      op->vtkImagePlaneWidget::GetRightButtonActionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightButtonAction() :
      op->vtkImagePlaneWidget::GetRightButtonAction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetLeftButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftButtonAutoModifier(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetLeftButtonAutoModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonAutoModifierMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonAutoModifierMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftButtonAutoModifierMinValue() :
      op->vtkImagePlaneWidget::GetLeftButtonAutoModifierMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonAutoModifierMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonAutoModifierMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftButtonAutoModifierMaxValue() :
      op->vtkImagePlaneWidget::GetLeftButtonAutoModifierMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftButtonAutoModifier() :
      op->vtkImagePlaneWidget::GetLeftButtonAutoModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMiddleButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMiddleButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMiddleButtonAutoModifier(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetMiddleButtonAutoModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonAutoModifierMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonAutoModifierMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMiddleButtonAutoModifierMinValue() :
      op->vtkImagePlaneWidget::GetMiddleButtonAutoModifierMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonAutoModifierMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonAutoModifierMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMiddleButtonAutoModifierMaxValue() :
      op->vtkImagePlaneWidget::GetMiddleButtonAutoModifierMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMiddleButtonAutoModifier() :
      op->vtkImagePlaneWidget::GetMiddleButtonAutoModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetRightButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightButtonAutoModifier(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetRightButtonAutoModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonAutoModifierMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonAutoModifierMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightButtonAutoModifierMinValue() :
      op->vtkImagePlaneWidget::GetRightButtonAutoModifierMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonAutoModifierMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonAutoModifierMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightButtonAutoModifierMaxValue() :
      op->vtkImagePlaneWidget::GetRightButtonAutoModifierMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightButtonAutoModifier() :
      op->vtkImagePlaneWidget::GetRightButtonAutoModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImagePlaneWidget_Methods[] = {
  {"IsTypeOf", PyvtkImagePlaneWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImagePlaneWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImagePlaneWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImagePlaneWidget\nC++: static vtkImagePlaneWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImagePlaneWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImagePlaneWidget\nC++: vtkImagePlaneWidget *NewInstance()\n\n"},
  {"SetEnabled", PyvtkImagePlaneWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"PlaceWidget", PyvtkImagePlaneWidget_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\nV.PlaceWidget()\nC++: void PlaceWidget() override;\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"SetInputConnection", PyvtkImagePlaneWidget_SetInputConnection, METH_VARARGS,
   "V.SetInputConnection(vtkAlgorithmOutput)\nC++: void SetInputConnection(vtkAlgorithmOutput *aout) override;\n\nSet the vtkImageData* input for the vtkImageReslice.\n"},
  {"SetOrigin", PyvtkImagePlaneWidget_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double x, double y, double z)\nV.SetOrigin([float, float, float])\nC++: void SetOrigin(double xyz[3])\n\nSet/Get the origin of the plane.\n"},
  {"GetOrigin", PyvtkImagePlaneWidget_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\nV.GetOrigin([float, float, float])\nC++: void GetOrigin(double xyz[3])\n\nSet/Get the origin of the plane.\n"},
  {"SetPoint1", PyvtkImagePlaneWidget_SetPoint1, METH_VARARGS,
   "V.SetPoint1(float, float, float)\nC++: void SetPoint1(double x, double y, double z)\nV.SetPoint1([float, float, float])\nC++: void SetPoint1(double xyz[3])\n\nSet/Get the position of the point defining the first axis of the\nplane.\n"},
  {"GetPoint1", PyvtkImagePlaneWidget_GetPoint1, METH_VARARGS,
   "V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\nV.GetPoint1([float, float, float])\nC++: void GetPoint1(double xyz[3])\n\nSet/Get the position of the point defining the first axis of the\nplane.\n"},
  {"SetPoint2", PyvtkImagePlaneWidget_SetPoint2, METH_VARARGS,
   "V.SetPoint2(float, float, float)\nC++: void SetPoint2(double x, double y, double z)\nV.SetPoint2([float, float, float])\nC++: void SetPoint2(double xyz[3])\n\nSet/Get the position of the point defining the second axis of the\nplane.\n"},
  {"GetPoint2", PyvtkImagePlaneWidget_GetPoint2, METH_VARARGS,
   "V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\nV.GetPoint2([float, float, float])\nC++: void GetPoint2(double xyz[3])\n\nSet/Get the position of the point defining the second axis of the\nplane.\n"},
  {"GetCenter", PyvtkImagePlaneWidget_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\nV.GetCenter([float, float, float])\nC++: void GetCenter(double xyz[3])\n\nGet the center of the plane.\n"},
  {"GetNormal", PyvtkImagePlaneWidget_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\nV.GetNormal([float, float, float])\nC++: void GetNormal(double xyz[3])\n\nGet the normal to the plane.\n"},
  {"GetVector1", PyvtkImagePlaneWidget_GetVector1, METH_VARARGS,
   "V.GetVector1([float, float, float])\nC++: void GetVector1(double v1[3])\n\nGet the vector from the plane origin to point1.\n"},
  {"GetVector2", PyvtkImagePlaneWidget_GetVector2, METH_VARARGS,
   "V.GetVector2([float, float, float])\nC++: void GetVector2(double v2[3])\n\nGet the vector from the plane origin to point2.\n"},
  {"GetSliceIndex", PyvtkImagePlaneWidget_GetSliceIndex, METH_VARARGS,
   "V.GetSliceIndex() -> int\nC++: int GetSliceIndex()\n\nGet the slice position in terms of the data extent.\n"},
  {"SetSliceIndex", PyvtkImagePlaneWidget_SetSliceIndex, METH_VARARGS,
   "V.SetSliceIndex(int)\nC++: void SetSliceIndex(int index)\n\nSet the slice position in terms of the data extent.\n"},
  {"GetSlicePosition", PyvtkImagePlaneWidget_GetSlicePosition, METH_VARARGS,
   "V.GetSlicePosition() -> float\nC++: double GetSlicePosition()\n\nGet the position of the slice along its normal.\n"},
  {"SetSlicePosition", PyvtkImagePlaneWidget_SetSlicePosition, METH_VARARGS,
   "V.SetSlicePosition(float)\nC++: void SetSlicePosition(double position)\n\nSet the position of the slice along its normal.\n"},
  {"SetResliceInterpolate", PyvtkImagePlaneWidget_SetResliceInterpolate, METH_VARARGS,
   "V.SetResliceInterpolate(int)\nC++: void SetResliceInterpolate(int)\n\nSet the interpolation to use when texturing the plane.\n"},
  {"GetResliceInterpolate", PyvtkImagePlaneWidget_GetResliceInterpolate, METH_VARARGS,
   "V.GetResliceInterpolate() -> int\nC++: virtual int GetResliceInterpolate()\n\nSet the interpolation to use when texturing the plane.\n"},
  {"SetResliceInterpolateToNearestNeighbour", PyvtkImagePlaneWidget_SetResliceInterpolateToNearestNeighbour, METH_VARARGS,
   "V.SetResliceInterpolateToNearestNeighbour()\nC++: void SetResliceInterpolateToNearestNeighbour()\n\nSet the interpolation to use when texturing the plane.\n"},
  {"SetResliceInterpolateToLinear", PyvtkImagePlaneWidget_SetResliceInterpolateToLinear, METH_VARARGS,
   "V.SetResliceInterpolateToLinear()\nC++: void SetResliceInterpolateToLinear()\n\nSet the interpolation to use when texturing the plane.\n"},
  {"SetResliceInterpolateToCubic", PyvtkImagePlaneWidget_SetResliceInterpolateToCubic, METH_VARARGS,
   "V.SetResliceInterpolateToCubic()\nC++: void SetResliceInterpolateToCubic()\n\nSet the interpolation to use when texturing the plane.\n"},
  {"GetResliceOutput", PyvtkImagePlaneWidget_GetResliceOutput, METH_VARARGS,
   "V.GetResliceOutput() -> vtkImageData\nC++: vtkImageData *GetResliceOutput()\n\nConvenience method to get the vtkImageReslice output.\n"},
  {"SetRestrictPlaneToVolume", PyvtkImagePlaneWidget_SetRestrictPlaneToVolume, METH_VARARGS,
   "V.SetRestrictPlaneToVolume(int)\nC++: virtual void SetRestrictPlaneToVolume(vtkTypeBool _arg)\n\nMake sure that the plane remains within the volume. Default is\nOn.\n"},
  {"GetRestrictPlaneToVolume", PyvtkImagePlaneWidget_GetRestrictPlaneToVolume, METH_VARARGS,
   "V.GetRestrictPlaneToVolume() -> int\nC++: virtual vtkTypeBool GetRestrictPlaneToVolume()\n\nMake sure that the plane remains within the volume. Default is\nOn.\n"},
  {"RestrictPlaneToVolumeOn", PyvtkImagePlaneWidget_RestrictPlaneToVolumeOn, METH_VARARGS,
   "V.RestrictPlaneToVolumeOn()\nC++: virtual void RestrictPlaneToVolumeOn()\n\nMake sure that the plane remains within the volume. Default is\nOn.\n"},
  {"RestrictPlaneToVolumeOff", PyvtkImagePlaneWidget_RestrictPlaneToVolumeOff, METH_VARARGS,
   "V.RestrictPlaneToVolumeOff()\nC++: virtual void RestrictPlaneToVolumeOff()\n\nMake sure that the plane remains within the volume. Default is\nOn.\n"},
  {"SetUserControlledLookupTable", PyvtkImagePlaneWidget_SetUserControlledLookupTable, METH_VARARGS,
   "V.SetUserControlledLookupTable(int)\nC++: virtual void SetUserControlledLookupTable(vtkTypeBool _arg)\n\nLet the user control the lookup table. NOTE: apply this method\nBEFORE applying the SetLookupTable method. Default is Off.\n"},
  {"GetUserControlledLookupTable", PyvtkImagePlaneWidget_GetUserControlledLookupTable, METH_VARARGS,
   "V.GetUserControlledLookupTable() -> int\nC++: virtual vtkTypeBool GetUserControlledLookupTable()\n\nLet the user control the lookup table. NOTE: apply this method\nBEFORE applying the SetLookupTable method. Default is Off.\n"},
  {"UserControlledLookupTableOn", PyvtkImagePlaneWidget_UserControlledLookupTableOn, METH_VARARGS,
   "V.UserControlledLookupTableOn()\nC++: virtual void UserControlledLookupTableOn()\n\nLet the user control the lookup table. NOTE: apply this method\nBEFORE applying the SetLookupTable method. Default is Off.\n"},
  {"UserControlledLookupTableOff", PyvtkImagePlaneWidget_UserControlledLookupTableOff, METH_VARARGS,
   "V.UserControlledLookupTableOff()\nC++: virtual void UserControlledLookupTableOff()\n\nLet the user control the lookup table. NOTE: apply this method\nBEFORE applying the SetLookupTable method. Default is Off.\n"},
  {"SetTextureInterpolate", PyvtkImagePlaneWidget_SetTextureInterpolate, METH_VARARGS,
   "V.SetTextureInterpolate(int)\nC++: virtual void SetTextureInterpolate(vtkTypeBool _arg)\n\nSpecify whether to interpolate the texture or not. When off, the\nreslice interpolation is nearest neighbour regardless of how the\ninterpolation is set through the API. Set before setting the\nvtkImageData input. Default is On.\n"},
  {"GetTextureInterpolate", PyvtkImagePlaneWidget_GetTextureInterpolate, METH_VARARGS,
   "V.GetTextureInterpolate() -> int\nC++: virtual vtkTypeBool GetTextureInterpolate()\n\nSpecify whether to interpolate the texture or not. When off, the\nreslice interpolation is nearest neighbour regardless of how the\ninterpolation is set through the API. Set before setting the\nvtkImageData input. Default is On.\n"},
  {"TextureInterpolateOn", PyvtkImagePlaneWidget_TextureInterpolateOn, METH_VARARGS,
   "V.TextureInterpolateOn()\nC++: virtual void TextureInterpolateOn()\n\nSpecify whether to interpolate the texture or not. When off, the\nreslice interpolation is nearest neighbour regardless of how the\ninterpolation is set through the API. Set before setting the\nvtkImageData input. Default is On.\n"},
  {"TextureInterpolateOff", PyvtkImagePlaneWidget_TextureInterpolateOff, METH_VARARGS,
   "V.TextureInterpolateOff()\nC++: virtual void TextureInterpolateOff()\n\nSpecify whether to interpolate the texture or not. When off, the\nreslice interpolation is nearest neighbour regardless of how the\ninterpolation is set through the API. Set before setting the\nvtkImageData input. Default is On.\n"},
  {"SetTextureVisibility", PyvtkImagePlaneWidget_SetTextureVisibility, METH_VARARGS,
   "V.SetTextureVisibility(int)\nC++: virtual void SetTextureVisibility(vtkTypeBool)\n\nControl the visibility of the actual texture mapped reformatted\nplane. in some cases you may only want the plane outline for\nexample.\n"},
  {"GetTextureVisibility", PyvtkImagePlaneWidget_GetTextureVisibility, METH_VARARGS,
   "V.GetTextureVisibility() -> int\nC++: virtual vtkTypeBool GetTextureVisibility()\n\nControl the visibility of the actual texture mapped reformatted\nplane. in some cases you may only want the plane outline for\nexample.\n"},
  {"TextureVisibilityOn", PyvtkImagePlaneWidget_TextureVisibilityOn, METH_VARARGS,
   "V.TextureVisibilityOn()\nC++: virtual void TextureVisibilityOn()\n\nControl the visibility of the actual texture mapped reformatted\nplane. in some cases you may only want the plane outline for\nexample.\n"},
  {"TextureVisibilityOff", PyvtkImagePlaneWidget_TextureVisibilityOff, METH_VARARGS,
   "V.TextureVisibilityOff()\nC++: virtual void TextureVisibilityOff()\n\nControl the visibility of the actual texture mapped reformatted\nplane. in some cases you may only want the plane outline for\nexample.\n"},
  {"GetPolyData", PyvtkImagePlaneWidget_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the plane.  The\npolydata consists of (res+1)*(res+1) points, and res*res\nquadrilateral polygons, where res is the resolution of the plane.\nThese point values are guaranteed to be up-to-date when either\nthe InteractionEvent or EndInteraction events are invoked. The\nuser provides the vtkPolyData and the points and polygons are\nadded to it.\n"},
  {"GetPolyDataAlgorithm", PyvtkImagePlaneWidget_GetPolyDataAlgorithm, METH_VARARGS,
   "V.GetPolyDataAlgorithm() -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *GetPolyDataAlgorithm() override;\n\nSatisfies superclass API.  This returns a pointer to the\nunderlying vtkPolyData.  Make changes to this before calling the\ninitial PlaceWidget() to have the initial placement follow suit. \nOr, make changes after the widget has been initialised and call\nUpdatePlacement() to realise.\n"},
  {"UpdatePlacement", PyvtkImagePlaneWidget_UpdatePlacement, METH_VARARGS,
   "V.UpdatePlacement()\nC++: void UpdatePlacement(void) override;\n\nSatisfies superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nvtkPolyDataSource\n"},
  {"GetTexture", PyvtkImagePlaneWidget_GetTexture, METH_VARARGS,
   "V.GetTexture() -> vtkTexture\nC++: vtkTexture *GetTexture()\n\nConvenience method to get the texture used by this widget.  This\ncan be used in external slice viewers.\n"},
  {"GetColorMap", PyvtkImagePlaneWidget_GetColorMap, METH_VARARGS,
   "V.GetColorMap() -> vtkImageMapToColors\nC++: virtual vtkImageMapToColors *GetColorMap()\n\nConvenience method to get the vtkImageMapToColors filter used by\nthis widget.  The user can properly render other transparent\nactors in a scene by calling the filter's SetOutputFormatToRGB\nand PassAlphaToOutputOff.\n"},
  {"SetColorMap", PyvtkImagePlaneWidget_SetColorMap, METH_VARARGS,
   "V.SetColorMap(vtkImageMapToColors)\nC++: virtual void SetColorMap(vtkImageMapToColors *)\n\nConvenience method to get the vtkImageMapToColors filter used by\nthis widget.  The user can properly render other transparent\nactors in a scene by calling the filter's SetOutputFormatToRGB\nand PassAlphaToOutputOff.\n"},
  {"SetPlaneProperty", PyvtkImagePlaneWidget_SetPlaneProperty, METH_VARARGS,
   "V.SetPlaneProperty(vtkProperty)\nC++: virtual void SetPlaneProperty(vtkProperty *)\n\nSet/Get the plane's outline properties. The properties of the\nplane's outline when selected and unselected can be manipulated.\n"},
  {"GetPlaneProperty", PyvtkImagePlaneWidget_GetPlaneProperty, METH_VARARGS,
   "V.GetPlaneProperty() -> vtkProperty\nC++: virtual vtkProperty *GetPlaneProperty()\n\nSet/Get the plane's outline properties. The properties of the\nplane's outline when selected and unselected can be manipulated.\n"},
  {"SetSelectedPlaneProperty", PyvtkImagePlaneWidget_SetSelectedPlaneProperty, METH_VARARGS,
   "V.SetSelectedPlaneProperty(vtkProperty)\nC++: virtual void SetSelectedPlaneProperty(vtkProperty *)\n\nSet/Get the plane's outline properties. The properties of the\nplane's outline when selected and unselected can be manipulated.\n"},
  {"GetSelectedPlaneProperty", PyvtkImagePlaneWidget_GetSelectedPlaneProperty, METH_VARARGS,
   "V.GetSelectedPlaneProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedPlaneProperty()\n\nSet/Get the plane's outline properties. The properties of the\nplane's outline when selected and unselected can be manipulated.\n"},
  {"SetPlaneOrientation", PyvtkImagePlaneWidget_SetPlaneOrientation, METH_VARARGS,
   "V.SetPlaneOrientation(int)\nC++: void SetPlaneOrientation(int)\n\nConvenience method sets the plane orientation normal to the x, y,\nor z axes.  Default is XAxes (0).\n"},
  {"GetPlaneOrientation", PyvtkImagePlaneWidget_GetPlaneOrientation, METH_VARARGS,
   "V.GetPlaneOrientation() -> int\nC++: virtual int GetPlaneOrientation()\n\nConvenience method sets the plane orientation normal to the x, y,\nor z axes.  Default is XAxes (0).\n"},
  {"SetPlaneOrientationToXAxes", PyvtkImagePlaneWidget_SetPlaneOrientationToXAxes, METH_VARARGS,
   "V.SetPlaneOrientationToXAxes()\nC++: void SetPlaneOrientationToXAxes()\n\nConvenience method sets the plane orientation normal to the x, y,\nor z axes.  Default is XAxes (0).\n"},
  {"SetPlaneOrientationToYAxes", PyvtkImagePlaneWidget_SetPlaneOrientationToYAxes, METH_VARARGS,
   "V.SetPlaneOrientationToYAxes()\nC++: void SetPlaneOrientationToYAxes()\n\nConvenience method sets the plane orientation normal to the x, y,\nor z axes.  Default is XAxes (0).\n"},
  {"SetPlaneOrientationToZAxes", PyvtkImagePlaneWidget_SetPlaneOrientationToZAxes, METH_VARARGS,
   "V.SetPlaneOrientationToZAxes()\nC++: void SetPlaneOrientationToZAxes()\n\nConvenience method sets the plane orientation normal to the x, y,\nor z axes.  Default is XAxes (0).\n"},
  {"SetPicker", PyvtkImagePlaneWidget_SetPicker, METH_VARARGS,
   "V.SetPicker(vtkAbstractPropPicker)\nC++: void SetPicker(vtkAbstractPropPicker *)\n\nSet the internal picker to one defined by the user.  In this way,\na set of three orthogonal planes can share the same picker so\nthat picking is performed correctly.  The default internal picker\ncan be re-set/allocated by setting to 0 (nullptr).\n"},
  {"SetLookupTable", PyvtkImagePlaneWidget_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkLookupTable)\nC++: virtual void SetLookupTable(vtkLookupTable *)\n\nSet/Get the internal lookuptable (lut) to one defined by the\nuser, or, alternatively, to the lut of another\nvtkImgePlaneWidget.  In this way, a set of three orthogonal\nplanes can share the same lut so that window-levelling is\nperformed uniformly among planes.  The default internal lut can\nbe re- set/allocated by setting to 0 (nullptr).\n"},
  {"GetLookupTable", PyvtkImagePlaneWidget_GetLookupTable, METH_VARARGS,
   "V.GetLookupTable() -> vtkLookupTable\nC++: virtual vtkLookupTable *GetLookupTable()\n\nSet/Get the internal lookuptable (lut) to one defined by the\nuser, or, alternatively, to the lut of another\nvtkImgePlaneWidget.  In this way, a set of three orthogonal\nplanes can share the same lut so that window-levelling is\nperformed uniformly among planes.  The default internal lut can\nbe re- set/allocated by setting to 0 (nullptr).\n"},
  {"SetDisplayText", PyvtkImagePlaneWidget_SetDisplayText, METH_VARARGS,
   "V.SetDisplayText(int)\nC++: virtual void SetDisplayText(vtkTypeBool _arg)\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {"GetDisplayText", PyvtkImagePlaneWidget_GetDisplayText, METH_VARARGS,
   "V.GetDisplayText() -> int\nC++: virtual vtkTypeBool GetDisplayText()\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {"DisplayTextOn", PyvtkImagePlaneWidget_DisplayTextOn, METH_VARARGS,
   "V.DisplayTextOn()\nC++: virtual void DisplayTextOn()\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {"DisplayTextOff", PyvtkImagePlaneWidget_DisplayTextOff, METH_VARARGS,
   "V.DisplayTextOff()\nC++: virtual void DisplayTextOff()\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {"SetCursorProperty", PyvtkImagePlaneWidget_SetCursorProperty, METH_VARARGS,
   "V.SetCursorProperty(vtkProperty)\nC++: virtual void SetCursorProperty(vtkProperty *)\n\nSet the properties of the cross-hair cursor.\n"},
  {"GetCursorProperty", PyvtkImagePlaneWidget_GetCursorProperty, METH_VARARGS,
   "V.GetCursorProperty() -> vtkProperty\nC++: virtual vtkProperty *GetCursorProperty()\n\nSet the properties of the cross-hair cursor.\n"},
  {"SetMarginProperty", PyvtkImagePlaneWidget_SetMarginProperty, METH_VARARGS,
   "V.SetMarginProperty(vtkProperty)\nC++: virtual void SetMarginProperty(vtkProperty *)\n\nSet the properties of the margins.\n"},
  {"GetMarginProperty", PyvtkImagePlaneWidget_GetMarginProperty, METH_VARARGS,
   "V.GetMarginProperty() -> vtkProperty\nC++: virtual vtkProperty *GetMarginProperty()\n\nSet the properties of the margins.\n"},
  {"SetMarginSizeX", PyvtkImagePlaneWidget_SetMarginSizeX, METH_VARARGS,
   "V.SetMarginSizeX(float)\nC++: virtual void SetMarginSizeX(double _arg)\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {"GetMarginSizeXMinValue", PyvtkImagePlaneWidget_GetMarginSizeXMinValue, METH_VARARGS,
   "V.GetMarginSizeXMinValue() -> float\nC++: virtual double GetMarginSizeXMinValue()\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {"GetMarginSizeXMaxValue", PyvtkImagePlaneWidget_GetMarginSizeXMaxValue, METH_VARARGS,
   "V.GetMarginSizeXMaxValue() -> float\nC++: virtual double GetMarginSizeXMaxValue()\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {"GetMarginSizeX", PyvtkImagePlaneWidget_GetMarginSizeX, METH_VARARGS,
   "V.GetMarginSizeX() -> float\nC++: virtual double GetMarginSizeX()\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {"SetMarginSizeY", PyvtkImagePlaneWidget_SetMarginSizeY, METH_VARARGS,
   "V.SetMarginSizeY(float)\nC++: virtual void SetMarginSizeY(double _arg)\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {"GetMarginSizeYMinValue", PyvtkImagePlaneWidget_GetMarginSizeYMinValue, METH_VARARGS,
   "V.GetMarginSizeYMinValue() -> float\nC++: virtual double GetMarginSizeYMinValue()\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {"GetMarginSizeYMaxValue", PyvtkImagePlaneWidget_GetMarginSizeYMaxValue, METH_VARARGS,
   "V.GetMarginSizeYMaxValue() -> float\nC++: virtual double GetMarginSizeYMaxValue()\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {"GetMarginSizeY", PyvtkImagePlaneWidget_GetMarginSizeY, METH_VARARGS,
   "V.GetMarginSizeY() -> float\nC++: virtual double GetMarginSizeY()\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {"SetTextProperty", PyvtkImagePlaneWidget_SetTextProperty, METH_VARARGS,
   "V.SetTextProperty(vtkTextProperty)\nC++: void SetTextProperty(vtkTextProperty *tprop)\n\nSet/Get the text property for the image data and window-level\nannotation.\n"},
  {"GetTextProperty", PyvtkImagePlaneWidget_GetTextProperty, METH_VARARGS,
   "V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/Get the text property for the image data and window-level\nannotation.\n"},
  {"SetTexturePlaneProperty", PyvtkImagePlaneWidget_SetTexturePlaneProperty, METH_VARARGS,
   "V.SetTexturePlaneProperty(vtkProperty)\nC++: virtual void SetTexturePlaneProperty(vtkProperty *)\n\nSet/Get the property for the resliced image.\n"},
  {"GetTexturePlaneProperty", PyvtkImagePlaneWidget_GetTexturePlaneProperty, METH_VARARGS,
   "V.GetTexturePlaneProperty() -> vtkProperty\nC++: virtual vtkProperty *GetTexturePlaneProperty()\n\nSet/Get the property for the resliced image.\n"},
  {"SetWindowLevel", PyvtkImagePlaneWidget_SetWindowLevel, METH_VARARGS,
   "V.SetWindowLevel(float, float, int)\nC++: void SetWindowLevel(double window, double level, int copy=0)\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {"GetWindowLevel", PyvtkImagePlaneWidget_GetWindowLevel, METH_VARARGS,
   "V.GetWindowLevel([float, float])\nC++: void GetWindowLevel(double wl[2])\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {"GetWindow", PyvtkImagePlaneWidget_GetWindow, METH_VARARGS,
   "V.GetWindow() -> float\nC++: double GetWindow()\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {"GetLevel", PyvtkImagePlaneWidget_GetLevel, METH_VARARGS,
   "V.GetLevel() -> float\nC++: double GetLevel()\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {"GetCursorData", PyvtkImagePlaneWidget_GetCursorData, METH_VARARGS,
   "V.GetCursorData([float, float, float, float]) -> int\nC++: int GetCursorData(double xyzv[4])\n\nGet the image coordinate position and voxel value.  Currently\nonly supports single component image data.\n"},
  {"GetCursorDataStatus", PyvtkImagePlaneWidget_GetCursorDataStatus, METH_VARARGS,
   "V.GetCursorDataStatus() -> int\nC++: int GetCursorDataStatus()\n\nGet the status of the cursor data.  If this returns 1 the\nCurrentCursorPosition and CurrentImageValue will have current\ndata.  If it returns 0, these values are invalid.\n"},
  {"GetCurrentCursorPosition", PyvtkImagePlaneWidget_GetCurrentCursorPosition, METH_VARARGS,
   "V.GetCurrentCursorPosition() -> (float, float, float)\nC++: double *GetCurrentCursorPosition()\n\nGet the current cursor position.  To be used in conjunction with\nGetCursorDataStatus.\n"},
  {"GetCurrentImageValue", PyvtkImagePlaneWidget_GetCurrentImageValue, METH_VARARGS,
   "V.GetCurrentImageValue() -> float\nC++: virtual double GetCurrentImageValue()\n\nGet the current image value at the current cursor position.  To\nbe used in conjunction with GetCursorDataStatus.  The value is\nVTK_DOUBLE_MAX when the data is invalid.\n"},
  {"GetResliceAxes", PyvtkImagePlaneWidget_GetResliceAxes, METH_VARARGS,
   "V.GetResliceAxes() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetResliceAxes()\n\nGet the current reslice class and reslice axes\n"},
  {"GetReslice", PyvtkImagePlaneWidget_GetReslice, METH_VARARGS,
   "V.GetReslice() -> vtkImageReslice\nC++: virtual vtkImageReslice *GetReslice()\n\nGet the current reslice class and reslice axes\n"},
  {"SetUseContinuousCursor", PyvtkImagePlaneWidget_SetUseContinuousCursor, METH_VARARGS,
   "V.SetUseContinuousCursor(int)\nC++: virtual void SetUseContinuousCursor(vtkTypeBool _arg)\n\nChoose between voxel centered or continuous cursor probing.  With\nvoxel centered probing, the cursor snaps to the nearest voxel and\nthe reported cursor coordinates are extent based.  With\ncontinuous probing, voxel data is interpolated using\nvtkDataSetAttributes' InterpolatePoint method and the reported\ncoordinates are 3D spatial continuous.\n"},
  {"GetUseContinuousCursor", PyvtkImagePlaneWidget_GetUseContinuousCursor, METH_VARARGS,
   "V.GetUseContinuousCursor() -> int\nC++: virtual vtkTypeBool GetUseContinuousCursor()\n\nChoose between voxel centered or continuous cursor probing.  With\nvoxel centered probing, the cursor snaps to the nearest voxel and\nthe reported cursor coordinates are extent based.  With\ncontinuous probing, voxel data is interpolated using\nvtkDataSetAttributes' InterpolatePoint method and the reported\ncoordinates are 3D spatial continuous.\n"},
  {"UseContinuousCursorOn", PyvtkImagePlaneWidget_UseContinuousCursorOn, METH_VARARGS,
   "V.UseContinuousCursorOn()\nC++: virtual void UseContinuousCursorOn()\n\nChoose between voxel centered or continuous cursor probing.  With\nvoxel centered probing, the cursor snaps to the nearest voxel and\nthe reported cursor coordinates are extent based.  With\ncontinuous probing, voxel data is interpolated using\nvtkDataSetAttributes' InterpolatePoint method and the reported\ncoordinates are 3D spatial continuous.\n"},
  {"UseContinuousCursorOff", PyvtkImagePlaneWidget_UseContinuousCursorOff, METH_VARARGS,
   "V.UseContinuousCursorOff()\nC++: virtual void UseContinuousCursorOff()\n\nChoose between voxel centered or continuous cursor probing.  With\nvoxel centered probing, the cursor snaps to the nearest voxel and\nthe reported cursor coordinates are extent based.  With\ncontinuous probing, voxel data is interpolated using\nvtkDataSetAttributes' InterpolatePoint method and the reported\ncoordinates are 3D spatial continuous.\n"},
  {"SetInteraction", PyvtkImagePlaneWidget_SetInteraction, METH_VARARGS,
   "V.SetInteraction(int)\nC++: void SetInteraction(vtkTypeBool interact)\n\nEnable/disable mouse interaction so the widget remains on\ndisplay.\n"},
  {"GetInteraction", PyvtkImagePlaneWidget_GetInteraction, METH_VARARGS,
   "V.GetInteraction() -> int\nC++: virtual vtkTypeBool GetInteraction()\n\nEnable/disable mouse interaction so the widget remains on\ndisplay.\n"},
  {"InteractionOn", PyvtkImagePlaneWidget_InteractionOn, METH_VARARGS,
   "V.InteractionOn()\nC++: virtual void InteractionOn()\n\nEnable/disable mouse interaction so the widget remains on\ndisplay.\n"},
  {"InteractionOff", PyvtkImagePlaneWidget_InteractionOff, METH_VARARGS,
   "V.InteractionOff()\nC++: virtual void InteractionOff()\n\nEnable/disable mouse interaction so the widget remains on\ndisplay.\n"},
  {"SetLeftButtonAction", PyvtkImagePlaneWidget_SetLeftButtonAction, METH_VARARGS,
   "V.SetLeftButtonAction(int)\nC++: virtual void SetLeftButtonAction(int _arg)\n\nSet action associated to buttons.\n"},
  {"GetLeftButtonActionMinValue", PyvtkImagePlaneWidget_GetLeftButtonActionMinValue, METH_VARARGS,
   "V.GetLeftButtonActionMinValue() -> int\nC++: virtual int GetLeftButtonActionMinValue()\n\nSet action associated to buttons.\n"},
  {"GetLeftButtonActionMaxValue", PyvtkImagePlaneWidget_GetLeftButtonActionMaxValue, METH_VARARGS,
   "V.GetLeftButtonActionMaxValue() -> int\nC++: virtual int GetLeftButtonActionMaxValue()\n\nSet action associated to buttons.\n"},
  {"GetLeftButtonAction", PyvtkImagePlaneWidget_GetLeftButtonAction, METH_VARARGS,
   "V.GetLeftButtonAction() -> int\nC++: virtual int GetLeftButtonAction()\n\nSet action associated to buttons.\n"},
  {"SetMiddleButtonAction", PyvtkImagePlaneWidget_SetMiddleButtonAction, METH_VARARGS,
   "V.SetMiddleButtonAction(int)\nC++: virtual void SetMiddleButtonAction(int _arg)\n\nSet action associated to buttons.\n"},
  {"GetMiddleButtonActionMinValue", PyvtkImagePlaneWidget_GetMiddleButtonActionMinValue, METH_VARARGS,
   "V.GetMiddleButtonActionMinValue() -> int\nC++: virtual int GetMiddleButtonActionMinValue()\n\nSet action associated to buttons.\n"},
  {"GetMiddleButtonActionMaxValue", PyvtkImagePlaneWidget_GetMiddleButtonActionMaxValue, METH_VARARGS,
   "V.GetMiddleButtonActionMaxValue() -> int\nC++: virtual int GetMiddleButtonActionMaxValue()\n\nSet action associated to buttons.\n"},
  {"GetMiddleButtonAction", PyvtkImagePlaneWidget_GetMiddleButtonAction, METH_VARARGS,
   "V.GetMiddleButtonAction() -> int\nC++: virtual int GetMiddleButtonAction()\n\nSet action associated to buttons.\n"},
  {"SetRightButtonAction", PyvtkImagePlaneWidget_SetRightButtonAction, METH_VARARGS,
   "V.SetRightButtonAction(int)\nC++: virtual void SetRightButtonAction(int _arg)\n\nSet action associated to buttons.\n"},
  {"GetRightButtonActionMinValue", PyvtkImagePlaneWidget_GetRightButtonActionMinValue, METH_VARARGS,
   "V.GetRightButtonActionMinValue() -> int\nC++: virtual int GetRightButtonActionMinValue()\n\nSet action associated to buttons.\n"},
  {"GetRightButtonActionMaxValue", PyvtkImagePlaneWidget_GetRightButtonActionMaxValue, METH_VARARGS,
   "V.GetRightButtonActionMaxValue() -> int\nC++: virtual int GetRightButtonActionMaxValue()\n\nSet action associated to buttons.\n"},
  {"GetRightButtonAction", PyvtkImagePlaneWidget_GetRightButtonAction, METH_VARARGS,
   "V.GetRightButtonAction() -> int\nC++: virtual int GetRightButtonAction()\n\nSet action associated to buttons.\n"},
  {"SetLeftButtonAutoModifier", PyvtkImagePlaneWidget_SetLeftButtonAutoModifier, METH_VARARGS,
   "V.SetLeftButtonAutoModifier(int)\nC++: virtual void SetLeftButtonAutoModifier(int _arg)\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controlling panning without\npressing a key.\n"},
  {"GetLeftButtonAutoModifierMinValue", PyvtkImagePlaneWidget_GetLeftButtonAutoModifierMinValue, METH_VARARGS,
   "V.GetLeftButtonAutoModifierMinValue() -> int\nC++: virtual int GetLeftButtonAutoModifierMinValue()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controlling panning without\npressing a key.\n"},
  {"GetLeftButtonAutoModifierMaxValue", PyvtkImagePlaneWidget_GetLeftButtonAutoModifierMaxValue, METH_VARARGS,
   "V.GetLeftButtonAutoModifierMaxValue() -> int\nC++: virtual int GetLeftButtonAutoModifierMaxValue()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controlling panning without\npressing a key.\n"},
  {"GetLeftButtonAutoModifier", PyvtkImagePlaneWidget_GetLeftButtonAutoModifier, METH_VARARGS,
   "V.GetLeftButtonAutoModifier() -> int\nC++: virtual int GetLeftButtonAutoModifier()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controlling panning without\npressing a key.\n"},
  {"SetMiddleButtonAutoModifier", PyvtkImagePlaneWidget_SetMiddleButtonAutoModifier, METH_VARARGS,
   "V.SetMiddleButtonAutoModifier(int)\nC++: virtual void SetMiddleButtonAutoModifier(int _arg)\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controlling panning without\npressing a key.\n"},
  {"GetMiddleButtonAutoModifierMinValue", PyvtkImagePlaneWidget_GetMiddleButtonAutoModifierMinValue, METH_VARARGS,
   "V.GetMiddleButtonAutoModifierMinValue() -> int\nC++: virtual int GetMiddleButtonAutoModifierMinValue()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controlling panning without\npressing a key.\n"},
  {"GetMiddleButtonAutoModifierMaxValue", PyvtkImagePlaneWidget_GetMiddleButtonAutoModifierMaxValue, METH_VARARGS,
   "V.GetMiddleButtonAutoModifierMaxValue() -> int\nC++: virtual int GetMiddleButtonAutoModifierMaxValue()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controlling panning without\npressing a key.\n"},
  {"GetMiddleButtonAutoModifier", PyvtkImagePlaneWidget_GetMiddleButtonAutoModifier, METH_VARARGS,
   "V.GetMiddleButtonAutoModifier() -> int\nC++: virtual int GetMiddleButtonAutoModifier()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controlling panning without\npressing a key.\n"},
  {"SetRightButtonAutoModifier", PyvtkImagePlaneWidget_SetRightButtonAutoModifier, METH_VARARGS,
   "V.SetRightButtonAutoModifier(int)\nC++: virtual void SetRightButtonAutoModifier(int _arg)\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controlling panning without\npressing a key.\n"},
  {"GetRightButtonAutoModifierMinValue", PyvtkImagePlaneWidget_GetRightButtonAutoModifierMinValue, METH_VARARGS,
   "V.GetRightButtonAutoModifierMinValue() -> int\nC++: virtual int GetRightButtonAutoModifierMinValue()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controlling panning without\npressing a key.\n"},
  {"GetRightButtonAutoModifierMaxValue", PyvtkImagePlaneWidget_GetRightButtonAutoModifierMaxValue, METH_VARARGS,
   "V.GetRightButtonAutoModifierMaxValue() -> int\nC++: virtual int GetRightButtonAutoModifierMaxValue()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controlling panning without\npressing a key.\n"},
  {"GetRightButtonAutoModifier", PyvtkImagePlaneWidget_GetRightButtonAutoModifier, METH_VARARGS,
   "V.GetRightButtonAutoModifier() -> int\nC++: virtual int GetRightButtonAutoModifier()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controlling panning without\npressing a key.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImagePlaneWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkImagePlaneWidget", // tp_name
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
  PyvtkImagePlaneWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImagePlaneWidget_StaticNew()
{
  return vtkImagePlaneWidget::New();
}

PyObject *PyvtkImagePlaneWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImagePlaneWidget_Type, PyvtkImagePlaneWidget_Methods,
    "vtkImagePlaneWidget",
 &PyvtkImagePlaneWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkImagePlaneWidget_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataSourceWidget_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_CURSOR_ACTION", vtkImagePlaneWidget::VTK_CURSOR_ACTION },
        { "VTK_SLICE_MOTION_ACTION", vtkImagePlaneWidget::VTK_SLICE_MOTION_ACTION },
        { "VTK_WINDOW_LEVEL_ACTION", vtkImagePlaneWidget::VTK_WINDOW_LEVEL_ACTION },
        { "VTK_NO_MODIFIER", vtkImagePlaneWidget::VTK_NO_MODIFIER },
        { "VTK_SHIFT_MODIFIER", vtkImagePlaneWidget::VTK_SHIFT_MODIFIER },
        { "VTK_CONTROL_MODIFIER", vtkImagePlaneWidget::VTK_CONTROL_MODIFIER },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImagePlaneWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImagePlaneWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImagePlaneWidget", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_NEAREST_RESLICE", 0 },
        { "VTK_LINEAR_RESLICE", 1 },
        { "VTK_CUBIC_RESLICE", 2 },
        { "VTK_IMAGE_PLANE_WIDGET_MAX_TEXTBUFF", 128 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

