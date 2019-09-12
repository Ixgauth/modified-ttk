// python wrapper for vtkPlaneWidget
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
#include "vtkPlaneWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlaneWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPlaneWidget_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataSourceWidget_ClassNew
extern "C" { PyObject *PyvtkPolyDataSourceWidget_ClassNew(); }
#define DECLARED_PyvtkPolyDataSourceWidget_ClassNew
#endif

static const char *PyvtkPlaneWidget_Doc =
  "vtkPlaneWidget - 3D widget for manipulating a finite plane\n\n"
  "Superclass: vtkPolyDataSourceWidget\n\n"
  "This 3D widget defines a finite (bounded) plane that can be\n"
  "interactively placed in a scene. The plane has four handles (at its\n"
  "corner vertices), a normal vector, and the plane itself. The handles\n"
  "are used to resize the plane; the normal vector to rotate it, and the\n"
  "plane can be picked and translated. Selecting the plane while\n"
  "pressing CTRL makes it spin around the normal. A nice feature of the\n"
  "object is that the vtkPlaneWidget, like any 3D widget, will work with\n"
  "the current interactor style. That is, if vtkPlaneWidget does not\n"
  "handle an event, then all other registered observers (including the\n"
  "interactor style) have an opportunity to process the event.\n"
  "Otherwise, the vtkPlaneWidget will terminate the processing of the\n"
  "event that it handles.\n\n"
  "To use this object, just invoke SetInteractor() with the argument of\n"
  "the method a vtkRenderWindowInteractor.  You may also wish to invoke\n"
  "\"PlaceWidget()\" to initially position the widget. If the \"i\" key (for\n"
  "\"interactor\") is pressed, the vtkPlaneWidget will appear. (See\n"
  "superclass documentation for information about changing this\n"
  "behavior.) By grabbing the one of the four handles (use the left\n"
  "mouse button), the plane can be resized.  By grabbing the plane\n"
  "itself, the entire plane can be arbitrarily translated. Pressing CTRL\n"
  "while grabbing the plane will spin the plane around the normal. If\n"
  "you select the normal vector, the plane can be arbitrarily rotated.\n"
  "Selecting any part of the widget with the middle mouse button enables\n"
  "translation of the plane along its normal. (Once selected using\n"
  "middle mouse, moving the mouse in the direction of the normal\n"
  "translates the plane in the direction of the normal; moving in the\n"
  "direction opposite the normal translates the plane in the direction\n"
  "opposite the normal.) Scaling (about the center of the plane) is\n"
  "achieved by using the right mouse button. By moving the mouse \"up\"\n"
  "the render window the plane will be made bigger; by moving \"down\" the\n"
  "render window the widget will be made smaller. Events that occur\n"
  "outside of the widget (i.e., no part of the widget is picked) are\n"
  "propagated to any other registered obsevers (such as the interaction\n"
  "style).  Turn off the widget by pressing the \"i\" key again (or invoke\n"
  "the Off() method).\n\n"
  "The vtkPlaneWidget has several methods that can be used in\n"
  "conjunction with other VTK objects. The Set/GetResolution() methods\n"
  "control the number of subdivisions of the plane; the GetPolyData()\n"
  "method can be used to get the polygonal representation and can be\n"
  "used for things like seeding stream lines. GetPlane() can be used to\n"
  "update a vtkPlane implicit function. Typical usage of the widget is\n"
  "to make use of the StartInteractionEvent, InteractionEvent, and\n"
  "EndInteractionEvent events. The InteractionEvent is called on mouse\n"
  "motion; the other two events are called on button down and button up\n"
  "(either left or right button).\n\n"
  "Some additional features of this class include the ability to control\n"
  "the properties of the widget. You can set the properties of the\n"
  "selected and unselected representations of the plane. For example,\n"
  "you can set the property for the handles and plane. In addition there\n"
  "are methods to constrain the plane so that it is perpendicular to the\n"
  "x-y-z axes.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkLineWidget vtkSphereWidget\n"
  "vtkImplicitPlaneWidget\n\n";


static PyObject *
PyvtkPlaneWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlaneWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlaneWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlaneWidget *tempr = vtkPlaneWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaneWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlaneWidget::NewInstance());

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
PyvtkPlaneWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::PlaceWidget(temp0);
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
PyvtkPlaneWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkPlaneWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPlaneWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkPlaneWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkPlaneWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
PyvtkPlaneWidget_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkPlaneWidget::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkPlaneWidget::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneWidget_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetOrigin(temp0);
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
PyvtkPlaneWidget_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPlaneWidget_SetOrigin_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}



static PyObject *
PyvtkPlaneWidget_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkPlaneWidget::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneWidget_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::GetOrigin(temp0);
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
PyvtkPlaneWidget_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPlaneWidget_GetOrigin_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_GetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return nullptr;
}



static PyObject *
PyvtkPlaneWidget_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneWidget_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetPoint1(temp0);
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
PyvtkPlaneWidget_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPlaneWidget_SetPoint1_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}



static PyObject *
PyvtkPlaneWidget_GetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkPlaneWidget::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneWidget_GetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::GetPoint1(temp0);
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
PyvtkPlaneWidget_GetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPlaneWidget_GetPoint1_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_GetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1");
  return nullptr;
}



static PyObject *
PyvtkPlaneWidget_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneWidget_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetPoint2(temp0);
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
PyvtkPlaneWidget_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPlaneWidget_SetPoint2_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}



static PyObject *
PyvtkPlaneWidget_GetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkPlaneWidget::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneWidget_GetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::GetPoint2(temp0);
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
PyvtkPlaneWidget_GetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPlaneWidget_GetPoint2_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_GetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2");
  return nullptr;
}



static PyObject *
PyvtkPlaneWidget_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlaneWidget::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneWidget_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkPlaneWidget::SetCenter(temp0);
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
PyvtkPlaneWidget_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPlaneWidget_SetCenter_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkPlaneWidget_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkPlaneWidget::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneWidget_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::GetCenter(temp0);
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
PyvtkPlaneWidget_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPlaneWidget_GetCenter_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_GetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}



static PyObject *
PyvtkPlaneWidget_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlaneWidget::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneWidget_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkPlaneWidget::SetNormal(temp0);
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
PyvtkPlaneWidget_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPlaneWidget_SetNormal_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}



static PyObject *
PyvtkPlaneWidget_GetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkPlaneWidget::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneWidget_GetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::GetNormal(temp0);
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
PyvtkPlaneWidget_GetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPlaneWidget_GetNormal_s1(self, args);
    case 1:
      return PyvtkPlaneWidget_GetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNormal");
  return nullptr;
}



static PyObject *
PyvtkPlaneWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkPlaneWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetRepresentationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMinValue() :
      op->vtkPlaneWidget::GetRepresentationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetRepresentationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMaxValue() :
      op->vtkPlaneWidget::GetRepresentationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkPlaneWidget::GetRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetRepresentationToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToOff();
    }
    else
    {
      op->vtkPlaneWidget::SetRepresentationToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetRepresentationToOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToOutline();
    }
    else
    {
      op->vtkPlaneWidget::SetRepresentationToOutline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetRepresentationToWireframe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToWireframe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToWireframe();
    }
    else
    {
      op->vtkPlaneWidget::SetRepresentationToWireframe();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetRepresentationToSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToSurface();
    }
    else
    {
      op->vtkPlaneWidget::SetRepresentationToSurface();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalToXAxis(temp0);
    }
    else
    {
      op->vtkPlaneWidget::SetNormalToXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalToXAxis() :
      op->vtkPlaneWidget::GetNormalToXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NormalToXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToXAxisOn();
    }
    else
    {
      op->vtkPlaneWidget::NormalToXAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NormalToXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToXAxisOff();
    }
    else
    {
      op->vtkPlaneWidget::NormalToXAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalToYAxis(temp0);
    }
    else
    {
      op->vtkPlaneWidget::SetNormalToYAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalToYAxis() :
      op->vtkPlaneWidget::GetNormalToYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NormalToYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToYAxisOn();
    }
    else
    {
      op->vtkPlaneWidget::NormalToYAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NormalToYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToYAxisOff();
    }
    else
    {
      op->vtkPlaneWidget::NormalToYAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalToZAxis(temp0);
    }
    else
    {
      op->vtkPlaneWidget::SetNormalToZAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalToZAxis() :
      op->vtkPlaneWidget::GetNormalToZAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NormalToZAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToZAxisOn();
    }
    else
    {
      op->vtkPlaneWidget::NormalToZAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_NormalToZAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToZAxisOff();
    }
    else
    {
      op->vtkPlaneWidget::NormalToZAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->GetPlane(temp0);
    }
    else
    {
      op->vtkPlaneWidget::GetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetPolyDataAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetPolyDataAlgorithm() :
      op->vtkPlaneWidget::GetPolyDataAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePlacement();
    }
    else
    {
      op->vtkPlaneWidget::UpdatePlacement();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkPlaneWidget::GetHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkPlaneWidget::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_SetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

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
      op->vtkPlaneWidget::SetPlaneProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPlaneProperty() :
      op->vtkPlaneWidget::GetPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneWidget_GetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneWidget *op = static_cast<vtkPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedPlaneProperty() :
      op->vtkPlaneWidget::GetSelectedPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlaneWidget_Methods[] = {
  {"IsTypeOf", PyvtkPlaneWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlaneWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlaneWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPlaneWidget\nC++: static vtkPlaneWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlaneWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPlaneWidget\nC++: vtkPlaneWidget *NewInstance()\n\n"},
  {"SetEnabled", PyvtkPlaneWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"PlaceWidget", PyvtkPlaneWidget_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\nV.PlaceWidget()\nC++: void PlaceWidget() override;\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"SetResolution", PyvtkPlaneWidget_SetResolution, METH_VARARGS,
   "V.SetResolution(int)\nC++: void SetResolution(int r)\n\nSet/Get the resolution (number of subdivisions) of the plane.\n"},
  {"GetResolution", PyvtkPlaneWidget_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: int GetResolution()\n\nSet/Get the resolution (number of subdivisions) of the plane.\n"},
  {"SetOrigin", PyvtkPlaneWidget_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double x, double y, double z)\nV.SetOrigin([float, float, float])\nC++: void SetOrigin(double x[3])\n\nSet/Get the origin of the plane.\n"},
  {"GetOrigin", PyvtkPlaneWidget_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\nV.GetOrigin([float, float, float])\nC++: void GetOrigin(double xyz[3])\n\nSet/Get the origin of the plane.\n"},
  {"SetPoint1", PyvtkPlaneWidget_SetPoint1, METH_VARARGS,
   "V.SetPoint1(float, float, float)\nC++: void SetPoint1(double x, double y, double z)\nV.SetPoint1([float, float, float])\nC++: void SetPoint1(double x[3])\n\nSet/Get the position of the point defining the first axis of the\nplane.\n"},
  {"GetPoint1", PyvtkPlaneWidget_GetPoint1, METH_VARARGS,
   "V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\nV.GetPoint1([float, float, float])\nC++: void GetPoint1(double xyz[3])\n\nSet/Get the position of the point defining the first axis of the\nplane.\n"},
  {"SetPoint2", PyvtkPlaneWidget_SetPoint2, METH_VARARGS,
   "V.SetPoint2(float, float, float)\nC++: void SetPoint2(double x, double y, double z)\nV.SetPoint2([float, float, float])\nC++: void SetPoint2(double x[3])\n\nSet/Get the position of the point defining the second axis of the\nplane.\n"},
  {"GetPoint2", PyvtkPlaneWidget_GetPoint2, METH_VARARGS,
   "V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\nV.GetPoint2([float, float, float])\nC++: void GetPoint2(double xyz[3])\n\nSet/Get the position of the point defining the second axis of the\nplane.\n"},
  {"SetCenter", PyvtkPlaneWidget_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double x, double y, double z)\nV.SetCenter([float, float, float])\nC++: void SetCenter(double x[3])\n\nGet the center of the plane.\n"},
  {"GetCenter", PyvtkPlaneWidget_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\nV.GetCenter([float, float, float])\nC++: void GetCenter(double xyz[3])\n\nGet the center of the plane.\n"},
  {"SetNormal", PyvtkPlaneWidget_SetNormal, METH_VARARGS,
   "V.SetNormal(float, float, float)\nC++: void SetNormal(double x, double y, double z)\nV.SetNormal([float, float, float])\nC++: void SetNormal(double x[3])\n\nGet the normal to the plane.\n"},
  {"GetNormal", PyvtkPlaneWidget_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\nV.GetNormal([float, float, float])\nC++: void GetNormal(double xyz[3])\n\nGet the normal to the plane.\n"},
  {"SetRepresentation", PyvtkPlaneWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(int)\nC++: virtual void SetRepresentation(int _arg)\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {"GetRepresentationMinValue", PyvtkPlaneWidget_GetRepresentationMinValue, METH_VARARGS,
   "V.GetRepresentationMinValue() -> int\nC++: virtual int GetRepresentationMinValue()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {"GetRepresentationMaxValue", PyvtkPlaneWidget_GetRepresentationMaxValue, METH_VARARGS,
   "V.GetRepresentationMaxValue() -> int\nC++: virtual int GetRepresentationMaxValue()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {"GetRepresentation", PyvtkPlaneWidget_GetRepresentation, METH_VARARGS,
   "V.GetRepresentation() -> int\nC++: virtual int GetRepresentation()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {"SetRepresentationToOff", PyvtkPlaneWidget_SetRepresentationToOff, METH_VARARGS,
   "V.SetRepresentationToOff()\nC++: void SetRepresentationToOff()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {"SetRepresentationToOutline", PyvtkPlaneWidget_SetRepresentationToOutline, METH_VARARGS,
   "V.SetRepresentationToOutline()\nC++: void SetRepresentationToOutline()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {"SetRepresentationToWireframe", PyvtkPlaneWidget_SetRepresentationToWireframe, METH_VARARGS,
   "V.SetRepresentationToWireframe()\nC++: void SetRepresentationToWireframe()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {"SetRepresentationToSurface", PyvtkPlaneWidget_SetRepresentationToSurface, METH_VARARGS,
   "V.SetRepresentationToSurface()\nC++: void SetRepresentationToSurface()\n\nControl how the plane appears when GetPolyData() is invoked. If\nthe mode is \"outline\", then just the outline of the plane is\nshown. If the mode is \"wireframe\" then the plane is drawn with\nthe outline plus the interior mesh (corresponding to the\nresolution specified). If the mode is \"surface\" then the plane is\ndrawn as a surface.\n"},
  {"SetNormalToXAxis", PyvtkPlaneWidget_SetNormalToXAxis, METH_VARARGS,
   "V.SetNormalToXAxis(int)\nC++: virtual void SetNormalToXAxis(vtkTypeBool _arg)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {"GetNormalToXAxis", PyvtkPlaneWidget_GetNormalToXAxis, METH_VARARGS,
   "V.GetNormalToXAxis() -> int\nC++: virtual vtkTypeBool GetNormalToXAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {"NormalToXAxisOn", PyvtkPlaneWidget_NormalToXAxisOn, METH_VARARGS,
   "V.NormalToXAxisOn()\nC++: virtual void NormalToXAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {"NormalToXAxisOff", PyvtkPlaneWidget_NormalToXAxisOff, METH_VARARGS,
   "V.NormalToXAxisOff()\nC++: virtual void NormalToXAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {"SetNormalToYAxis", PyvtkPlaneWidget_SetNormalToYAxis, METH_VARARGS,
   "V.SetNormalToYAxis(int)\nC++: virtual void SetNormalToYAxis(vtkTypeBool _arg)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {"GetNormalToYAxis", PyvtkPlaneWidget_GetNormalToYAxis, METH_VARARGS,
   "V.GetNormalToYAxis() -> int\nC++: virtual vtkTypeBool GetNormalToYAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {"NormalToYAxisOn", PyvtkPlaneWidget_NormalToYAxisOn, METH_VARARGS,
   "V.NormalToYAxisOn()\nC++: virtual void NormalToYAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {"NormalToYAxisOff", PyvtkPlaneWidget_NormalToYAxisOff, METH_VARARGS,
   "V.NormalToYAxisOff()\nC++: virtual void NormalToYAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {"SetNormalToZAxis", PyvtkPlaneWidget_SetNormalToZAxis, METH_VARARGS,
   "V.SetNormalToZAxis(int)\nC++: virtual void SetNormalToZAxis(vtkTypeBool _arg)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {"GetNormalToZAxis", PyvtkPlaneWidget_GetNormalToZAxis, METH_VARARGS,
   "V.GetNormalToZAxis() -> int\nC++: virtual vtkTypeBool GetNormalToZAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {"NormalToZAxisOn", PyvtkPlaneWidget_NormalToZAxisOn, METH_VARARGS,
   "V.NormalToZAxisOn()\nC++: virtual void NormalToZAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {"NormalToZAxisOff", PyvtkPlaneWidget_NormalToZAxisOff, METH_VARARGS,
   "V.NormalToZAxisOff()\nC++: virtual void NormalToZAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the plane to the axes if it is\noriginally not aligned.\n"},
  {"GetPolyData", PyvtkPlaneWidget_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the plane.  The\npolydata consists of (res+1)*(res+1) points, and res*res\nquadrilateral polygons, where res is the resolution of the plane.\nThese point values are guaranteed to be up-to-date when either\nthe InteractionEvent or EndInteraction events are invoked. The\nuser provides the vtkPolyData and the points and polyplane are\nadded to it.\n"},
  {"GetPlane", PyvtkPlaneWidget_GetPlane, METH_VARARGS,
   "V.GetPlane(vtkPlane)\nC++: void GetPlane(vtkPlane *plane)\n\nGet the planes describing the implicit function defined by the\nplane widget. The user must provide the instance of the class\nvtkPlane. Note that vtkPlane is a subclass of\nvtkImplicitFunction, meaning that it can be used by a variety of\nfilters to perform clipping, cutting, and selection of data.\n"},
  {"GetPolyDataAlgorithm", PyvtkPlaneWidget_GetPolyDataAlgorithm, METH_VARARGS,
   "V.GetPolyDataAlgorithm() -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *GetPolyDataAlgorithm() override;\n\nSatisfies superclass API.  This returns a pointer to the\nunderlying PolyData.  Make changes to this before calling the\ninitial PlaceWidget() to have the initial placement follow suit. \nOr, make changes after the widget has been initialised and call\nUpdatePlacement() to realise.\n"},
  {"UpdatePlacement", PyvtkPlaneWidget_UpdatePlacement, METH_VARARGS,
   "V.UpdatePlacement()\nC++: void UpdatePlacement(void) override;\n\nSatisfies superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nPolyDataSource\n"},
  {"GetHandleProperty", PyvtkPlaneWidget_GetHandleProperty, METH_VARARGS,
   "V.GetHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be\nmanipulated.\n"},
  {"GetSelectedHandleProperty", PyvtkPlaneWidget_GetSelectedHandleProperty, METH_VARARGS,
   "V.GetSelectedHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be\nmanipulated.\n"},
  {"SetPlaneProperty", PyvtkPlaneWidget_SetPlaneProperty, METH_VARARGS,
   "V.SetPlaneProperty(vtkProperty)\nC++: virtual void SetPlaneProperty(vtkProperty *)\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {"GetPlaneProperty", PyvtkPlaneWidget_GetPlaneProperty, METH_VARARGS,
   "V.GetPlaneProperty() -> vtkProperty\nC++: virtual vtkProperty *GetPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {"GetSelectedPlaneProperty", PyvtkPlaneWidget_GetSelectedPlaneProperty, METH_VARARGS,
   "V.GetSelectedPlaneProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPlaneWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkPlaneWidget", // tp_name
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
  PyvtkPlaneWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlaneWidget_StaticNew()
{
  return vtkPlaneWidget::New();
}

PyObject *PyvtkPlaneWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPlaneWidget_Type, PyvtkPlaneWidget_Methods,
    "vtkPlaneWidget",
 &PyvtkPlaneWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkPlaneWidget_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataSourceWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlaneWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlaneWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlaneWidget", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_PLANE_OFF", 0 },
        { "VTK_PLANE_OUTLINE", 1 },
        { "VTK_PLANE_WIREFRAME", 2 },
        { "VTK_PLANE_SURFACE", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

