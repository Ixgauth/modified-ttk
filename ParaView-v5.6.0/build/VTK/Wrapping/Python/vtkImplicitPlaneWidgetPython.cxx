// python wrapper for vtkImplicitPlaneWidget
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
#include "vtkImplicitPlaneWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitPlaneWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImplicitPlaneWidget_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataSourceWidget_ClassNew
extern "C" { PyObject *PyvtkPolyDataSourceWidget_ClassNew(); }
#define DECLARED_PyvtkPolyDataSourceWidget_ClassNew
#endif

static const char *PyvtkImplicitPlaneWidget_Doc =
  "vtkImplicitPlaneWidget - 3D widget for manipulating an infinite plane\n\n"
  "Superclass: vtkPolyDataSourceWidget\n\n"
  "This 3D widget defines an infinite plane that can be interactively\n"
  "placed in a scene. The widget is represented by a plane with a normal\n"
  "vector; the plane is contained by a bounding box, and where the plane\n"
  "intersects the bounding box the edges are shown (possibly tubed). The\n"
  "normal can be selected and moved to rotate the plane; the plane\n"
  "itself can be selected and translated in various directions. As the\n"
  "plane is moved, the implicit plane function and polygon (representing\n"
  "the plane cut against the bounding box) is updated.\n\n"
  "To use this object, just invoke SetInteractor() with the argument of\n"
  "the method a vtkRenderWindowInteractor.  You may also wish to invoke\n"
  "\"PlaceWidget()\" to initially position the widget. If the \"i\" key (for\n"
  "\"interactor\") is pressed, the vtkImplicitPlaneWidget will appear.\n"
  "(See superclass documentation for information about changing this\n"
  "behavior.) If you select the normal vector, the plane can be\n"
  "arbitrarily rotated. The plane can be translated along the normal by\n"
  "selecting the plane and moving it. The plane (the plane origin) can\n"
  "also be arbitrary moved by selecting the plane with the middle mouse\n"
  "button. The right mouse button can be used to uniformly scale the\n"
  "bounding box (moving \"up\" the box scales larger; moving \"down\" the\n"
  "box scales smaller). Events that occur outside of the widget (i.e.,\n"
  "no part of the widget is picked) are propagated to any other\n"
  "registered obsevers (such as the interaction style).  Turn off the\n"
  "widget by pressing the \"i\" key again (or invoke the Off() method).\n\n"
  "The vtkImplicitPlaneWidget has several methods that can be used in\n"
  "conjunction with other VTK objects.  The GetPolyData() method can be\n"
  "used to get a polygonal representation (the single polygon clipped by\n"
  "the bounding box).  Typical usage of the widget is to make use of the\n"
  "StartInteractionEvent, InteractionEvent, and EndInteractionEvent\n"
  "events. The InteractionEvent is called on mouse motion; the other two\n"
  "events are called on button down and button up (either left or right\n"
  "button). (Note: there is also a PlaceWidgetEvent that is invoked when\n"
  "the widget is placed with PlaceWidget().)\n\n"
  "Some additional features of this class include the ability to control\n"
  "the properties of the widget. You do this by setting property values\n"
  "on the normal vector (selected and unselected properties); the plane\n"
  "(selected and unselected properties); the outline (selected and\n"
  "unselected properties); and the edges. The edges may also be tubed or\n"
  "not.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkPlaneWidget vtkLineWidget vtkPointWidget\n"
  "vtkSphereWidget vtkImagePlaneWidget\n\n";


static PyObject *
PyvtkImplicitPlaneWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitPlaneWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitPlaneWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitPlaneWidget *tempr = vtkImplicitPlaneWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitPlaneWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitPlaneWidget::NewInstance());

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
PyvtkImplicitPlaneWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::PlaceWidget(temp0);
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
PyvtkImplicitPlaneWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkImplicitPlaneWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImplicitPlaneWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkImplicitPlaneWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkImplicitPlaneWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
PyvtkImplicitPlaneWidget_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneWidget_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::SetOrigin(temp0);
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
PyvtkImplicitPlaneWidget_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitPlaneWidget_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneWidget_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}



static PyObject *
PyvtkImplicitPlaneWidget_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkImplicitPlaneWidget::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneWidget_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::GetOrigin(temp0);
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
PyvtkImplicitPlaneWidget_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImplicitPlaneWidget_GetOrigin_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneWidget_GetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return nullptr;
}



static PyObject *
PyvtkImplicitPlaneWidget_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneWidget_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::SetNormal(temp0);
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
PyvtkImplicitPlaneWidget_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitPlaneWidget_SetNormal_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneWidget_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}



static PyObject *
PyvtkImplicitPlaneWidget_GetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkImplicitPlaneWidget::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitPlaneWidget_GetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::GetNormal(temp0);
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
PyvtkImplicitPlaneWidget_GetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImplicitPlaneWidget_GetNormal_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneWidget_GetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNormal");
  return nullptr;
}



static PyObject *
PyvtkImplicitPlaneWidget_SetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::SetNormalToXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalToXAxis() :
      op->vtkImplicitPlaneWidget::GetNormalToXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NormalToXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToXAxisOn();
    }
    else
    {
      op->vtkImplicitPlaneWidget::NormalToXAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NormalToXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToXAxisOff();
    }
    else
    {
      op->vtkImplicitPlaneWidget::NormalToXAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::SetNormalToYAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalToYAxis() :
      op->vtkImplicitPlaneWidget::GetNormalToYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NormalToYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToYAxisOn();
    }
    else
    {
      op->vtkImplicitPlaneWidget::NormalToYAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NormalToYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToYAxisOff();
    }
    else
    {
      op->vtkImplicitPlaneWidget::NormalToYAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::SetNormalToZAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalToZAxis() :
      op->vtkImplicitPlaneWidget::GetNormalToZAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NormalToZAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToZAxisOn();
    }
    else
    {
      op->vtkImplicitPlaneWidget::NormalToZAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_NormalToZAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToZAxisOff();
    }
    else
    {
      op->vtkImplicitPlaneWidget::NormalToZAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTubing(temp0);
    }
    else
    {
      op->vtkImplicitPlaneWidget::SetTubing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTubing() :
      op->vtkImplicitPlaneWidget::GetTubing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_TubingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOn();
    }
    else
    {
      op->vtkImplicitPlaneWidget::TubingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_TubingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOff();
    }
    else
    {
      op->vtkImplicitPlaneWidget::TubingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawPlane(temp0);
    }
    else
    {
      op->vtkImplicitPlaneWidget::SetDrawPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawPlane() :
      op->vtkImplicitPlaneWidget::GetDrawPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_DrawPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPlaneOn();
    }
    else
    {
      op->vtkImplicitPlaneWidget::DrawPlaneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_DrawPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPlaneOff();
    }
    else
    {
      op->vtkImplicitPlaneWidget::DrawPlaneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineTranslation(temp0);
    }
    else
    {
      op->vtkImplicitPlaneWidget::SetOutlineTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutlineTranslation() :
      op->vtkImplicitPlaneWidget::GetOutlineTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_OutlineTranslationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineTranslationOn();
    }
    else
    {
      op->vtkImplicitPlaneWidget::OutlineTranslationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_OutlineTranslationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineTranslationOff();
    }
    else
    {
      op->vtkImplicitPlaneWidget::OutlineTranslationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutsideBounds(temp0);
    }
    else
    {
      op->vtkImplicitPlaneWidget::SetOutsideBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutsideBounds() :
      op->vtkImplicitPlaneWidget::GetOutsideBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_OutsideBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutsideBoundsOn();
    }
    else
    {
      op->vtkImplicitPlaneWidget::OutsideBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_OutsideBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutsideBoundsOff();
    }
    else
    {
      op->vtkImplicitPlaneWidget::OutsideBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleEnabled(temp0);
    }
    else
    {
      op->vtkImplicitPlaneWidget::SetScaleEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaleEnabled() :
      op->vtkImplicitPlaneWidget::GetScaleEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_ScaleEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleEnabledOn();
    }
    else
    {
      op->vtkImplicitPlaneWidget::ScaleEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_ScaleEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleEnabledOff();
    }
    else
    {
      op->vtkImplicitPlaneWidget::ScaleEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetOriginTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOriginTranslation(temp0);
    }
    else
    {
      op->vtkImplicitPlaneWidget::SetOriginTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetOriginTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOriginTranslation() :
      op->vtkImplicitPlaneWidget::GetOriginTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_OriginTranslationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OriginTranslationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OriginTranslationOn();
    }
    else
    {
      op->vtkImplicitPlaneWidget::OriginTranslationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_OriginTranslationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OriginTranslationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OriginTranslationOff();
    }
    else
    {
      op->vtkImplicitPlaneWidget::OriginTranslationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SetDiagonalRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiagonalRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiagonalRatio(temp0);
    }
    else
    {
      op->vtkImplicitPlaneWidget::SetDiagonalRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetDiagonalRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonalRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiagonalRatioMinValue() :
      op->vtkImplicitPlaneWidget::GetDiagonalRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetDiagonalRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonalRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiagonalRatioMaxValue() :
      op->vtkImplicitPlaneWidget::GetDiagonalRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetDiagonalRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonalRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiagonalRatio() :
      op->vtkImplicitPlaneWidget::GetDiagonalRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetPolyDataAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetPolyDataAlgorithm() :
      op->vtkImplicitPlaneWidget::GetPolyDataAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

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
      op->vtkImplicitPlaneWidget::GetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePlacement();
    }
    else
    {
      op->vtkImplicitPlaneWidget::UpdatePlacement();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_SizeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SizeHandles();
    }
    else
    {
      op->vtkImplicitPlaneWidget::SizeHandles();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetNormalProperty() :
      op->vtkImplicitPlaneWidget::GetNormalProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetSelectedNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedNormalProperty() :
      op->vtkImplicitPlaneWidget::GetSelectedNormalProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPlaneProperty() :
      op->vtkImplicitPlaneWidget::GetPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedPlaneProperty() :
      op->vtkImplicitPlaneWidget::GetSelectedPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkImplicitPlaneWidget::GetOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkImplicitPlaneWidget::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitPlaneWidget_GetEdgesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneWidget *op = static_cast<vtkImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetEdgesProperty() :
      op->vtkImplicitPlaneWidget::GetEdgesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitPlaneWidget_Methods[] = {
  {"IsTypeOf", PyvtkImplicitPlaneWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitPlaneWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitPlaneWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImplicitPlaneWidget\nC++: static vtkImplicitPlaneWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitPlaneWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImplicitPlaneWidget\nC++: vtkImplicitPlaneWidget *NewInstance()\n\n"},
  {"SetEnabled", PyvtkImplicitPlaneWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"PlaceWidget", PyvtkImplicitPlaneWidget_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\nV.PlaceWidget()\nC++: void PlaceWidget() override;\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"SetOrigin", PyvtkImplicitPlaneWidget_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: virtual void SetOrigin(double x, double y, double z)\nV.SetOrigin([float, float, float])\nC++: virtual void SetOrigin(double x[3])\n\nGet the origin of the plane.\n"},
  {"GetOrigin", PyvtkImplicitPlaneWidget_GetOrigin, METH_VARARGS,
   "V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\nV.GetOrigin([float, float, float])\nC++: void GetOrigin(double xyz[3])\n\nGet the origin of the plane.\n"},
  {"SetNormal", PyvtkImplicitPlaneWidget_SetNormal, METH_VARARGS,
   "V.SetNormal(float, float, float)\nC++: void SetNormal(double x, double y, double z)\nV.SetNormal([float, float, float])\nC++: void SetNormal(double x[3])\n\nGet the normal to the plane.\n"},
  {"GetNormal", PyvtkImplicitPlaneWidget_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\nV.GetNormal([float, float, float])\nC++: void GetNormal(double xyz[3])\n\nGet the normal to the plane.\n"},
  {"SetNormalToXAxis", PyvtkImplicitPlaneWidget_SetNormalToXAxis, METH_VARARGS,
   "V.SetNormalToXAxis(int)\nC++: void SetNormalToXAxis(vtkTypeBool)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"GetNormalToXAxis", PyvtkImplicitPlaneWidget_GetNormalToXAxis, METH_VARARGS,
   "V.GetNormalToXAxis() -> int\nC++: virtual vtkTypeBool GetNormalToXAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"NormalToXAxisOn", PyvtkImplicitPlaneWidget_NormalToXAxisOn, METH_VARARGS,
   "V.NormalToXAxisOn()\nC++: virtual void NormalToXAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"NormalToXAxisOff", PyvtkImplicitPlaneWidget_NormalToXAxisOff, METH_VARARGS,
   "V.NormalToXAxisOff()\nC++: virtual void NormalToXAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"SetNormalToYAxis", PyvtkImplicitPlaneWidget_SetNormalToYAxis, METH_VARARGS,
   "V.SetNormalToYAxis(int)\nC++: void SetNormalToYAxis(vtkTypeBool)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"GetNormalToYAxis", PyvtkImplicitPlaneWidget_GetNormalToYAxis, METH_VARARGS,
   "V.GetNormalToYAxis() -> int\nC++: virtual vtkTypeBool GetNormalToYAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"NormalToYAxisOn", PyvtkImplicitPlaneWidget_NormalToYAxisOn, METH_VARARGS,
   "V.NormalToYAxisOn()\nC++: virtual void NormalToYAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"NormalToYAxisOff", PyvtkImplicitPlaneWidget_NormalToYAxisOff, METH_VARARGS,
   "V.NormalToYAxisOff()\nC++: virtual void NormalToYAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"SetNormalToZAxis", PyvtkImplicitPlaneWidget_SetNormalToZAxis, METH_VARARGS,
   "V.SetNormalToZAxis(int)\nC++: void SetNormalToZAxis(vtkTypeBool)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"GetNormalToZAxis", PyvtkImplicitPlaneWidget_GetNormalToZAxis, METH_VARARGS,
   "V.GetNormalToZAxis() -> int\nC++: virtual vtkTypeBool GetNormalToZAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"NormalToZAxisOn", PyvtkImplicitPlaneWidget_NormalToZAxisOn, METH_VARARGS,
   "V.NormalToZAxisOn()\nC++: virtual void NormalToZAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"NormalToZAxisOff", PyvtkImplicitPlaneWidget_NormalToZAxisOff, METH_VARARGS,
   "V.NormalToZAxisOff()\nC++: virtual void NormalToZAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"SetTubing", PyvtkImplicitPlaneWidget_SetTubing, METH_VARARGS,
   "V.SetTubing(int)\nC++: virtual void SetTubing(vtkTypeBool _arg)\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {"GetTubing", PyvtkImplicitPlaneWidget_GetTubing, METH_VARARGS,
   "V.GetTubing() -> int\nC++: virtual vtkTypeBool GetTubing()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {"TubingOn", PyvtkImplicitPlaneWidget_TubingOn, METH_VARARGS,
   "V.TubingOn()\nC++: virtual void TubingOn()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {"TubingOff", PyvtkImplicitPlaneWidget_TubingOff, METH_VARARGS,
   "V.TubingOff()\nC++: virtual void TubingOff()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {"SetDrawPlane", PyvtkImplicitPlaneWidget_SetDrawPlane, METH_VARARGS,
   "V.SetDrawPlane(int)\nC++: void SetDrawPlane(vtkTypeBool plane)\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"GetDrawPlane", PyvtkImplicitPlaneWidget_GetDrawPlane, METH_VARARGS,
   "V.GetDrawPlane() -> int\nC++: virtual vtkTypeBool GetDrawPlane()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"DrawPlaneOn", PyvtkImplicitPlaneWidget_DrawPlaneOn, METH_VARARGS,
   "V.DrawPlaneOn()\nC++: virtual void DrawPlaneOn()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"DrawPlaneOff", PyvtkImplicitPlaneWidget_DrawPlaneOff, METH_VARARGS,
   "V.DrawPlaneOff()\nC++: virtual void DrawPlaneOff()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"SetOutlineTranslation", PyvtkImplicitPlaneWidget_SetOutlineTranslation, METH_VARARGS,
   "V.SetOutlineTranslation(int)\nC++: virtual void SetOutlineTranslation(vtkTypeBool _arg)\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {"GetOutlineTranslation", PyvtkImplicitPlaneWidget_GetOutlineTranslation, METH_VARARGS,
   "V.GetOutlineTranslation() -> int\nC++: virtual vtkTypeBool GetOutlineTranslation()\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {"OutlineTranslationOn", PyvtkImplicitPlaneWidget_OutlineTranslationOn, METH_VARARGS,
   "V.OutlineTranslationOn()\nC++: virtual void OutlineTranslationOn()\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {"OutlineTranslationOff", PyvtkImplicitPlaneWidget_OutlineTranslationOff, METH_VARARGS,
   "V.OutlineTranslationOff()\nC++: virtual void OutlineTranslationOff()\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {"SetOutsideBounds", PyvtkImplicitPlaneWidget_SetOutsideBounds, METH_VARARGS,
   "V.SetOutsideBounds(int)\nC++: virtual void SetOutsideBounds(vtkTypeBool _arg)\n\nTurn on/off the ability to move the widget outside of the input's\nbound\n"},
  {"GetOutsideBounds", PyvtkImplicitPlaneWidget_GetOutsideBounds, METH_VARARGS,
   "V.GetOutsideBounds() -> int\nC++: virtual vtkTypeBool GetOutsideBounds()\n\nTurn on/off the ability to move the widget outside of the input's\nbound\n"},
  {"OutsideBoundsOn", PyvtkImplicitPlaneWidget_OutsideBoundsOn, METH_VARARGS,
   "V.OutsideBoundsOn()\nC++: virtual void OutsideBoundsOn()\n\nTurn on/off the ability to move the widget outside of the input's\nbound\n"},
  {"OutsideBoundsOff", PyvtkImplicitPlaneWidget_OutsideBoundsOff, METH_VARARGS,
   "V.OutsideBoundsOff()\nC++: virtual void OutsideBoundsOff()\n\nTurn on/off the ability to move the widget outside of the input's\nbound\n"},
  {"SetScaleEnabled", PyvtkImplicitPlaneWidget_SetScaleEnabled, METH_VARARGS,
   "V.SetScaleEnabled(int)\nC++: virtual void SetScaleEnabled(vtkTypeBool _arg)\n\nTurn on/off the ability to scale with the mouse\n"},
  {"GetScaleEnabled", PyvtkImplicitPlaneWidget_GetScaleEnabled, METH_VARARGS,
   "V.GetScaleEnabled() -> int\nC++: virtual vtkTypeBool GetScaleEnabled()\n\nTurn on/off the ability to scale with the mouse\n"},
  {"ScaleEnabledOn", PyvtkImplicitPlaneWidget_ScaleEnabledOn, METH_VARARGS,
   "V.ScaleEnabledOn()\nC++: virtual void ScaleEnabledOn()\n\nTurn on/off the ability to scale with the mouse\n"},
  {"ScaleEnabledOff", PyvtkImplicitPlaneWidget_ScaleEnabledOff, METH_VARARGS,
   "V.ScaleEnabledOff()\nC++: virtual void ScaleEnabledOff()\n\nTurn on/off the ability to scale with the mouse\n"},
  {"SetOriginTranslation", PyvtkImplicitPlaneWidget_SetOriginTranslation, METH_VARARGS,
   "V.SetOriginTranslation(int)\nC++: virtual void SetOriginTranslation(vtkTypeBool _arg)\n\nTurn on/off the ability to translate the origin (sphere) with the\nleft mouse button.\n"},
  {"GetOriginTranslation", PyvtkImplicitPlaneWidget_GetOriginTranslation, METH_VARARGS,
   "V.GetOriginTranslation() -> int\nC++: virtual vtkTypeBool GetOriginTranslation()\n\nTurn on/off the ability to translate the origin (sphere) with the\nleft mouse button.\n"},
  {"OriginTranslationOn", PyvtkImplicitPlaneWidget_OriginTranslationOn, METH_VARARGS,
   "V.OriginTranslationOn()\nC++: virtual void OriginTranslationOn()\n\nTurn on/off the ability to translate the origin (sphere) with the\nleft mouse button.\n"},
  {"OriginTranslationOff", PyvtkImplicitPlaneWidget_OriginTranslationOff, METH_VARARGS,
   "V.OriginTranslationOff()\nC++: virtual void OriginTranslationOff()\n\nTurn on/off the ability to translate the origin (sphere) with the\nleft mouse button.\n"},
  {"SetDiagonalRatio", PyvtkImplicitPlaneWidget_SetDiagonalRatio, METH_VARARGS,
   "V.SetDiagonalRatio(float)\nC++: virtual void SetDiagonalRatio(double _arg)\n\nBy default the arrow is 30% of the diagonal length. DiagonalRatio\ncontrol this ratio in the interval [0-2]\n"},
  {"GetDiagonalRatioMinValue", PyvtkImplicitPlaneWidget_GetDiagonalRatioMinValue, METH_VARARGS,
   "V.GetDiagonalRatioMinValue() -> float\nC++: virtual double GetDiagonalRatioMinValue()\n\nBy default the arrow is 30% of the diagonal length. DiagonalRatio\ncontrol this ratio in the interval [0-2]\n"},
  {"GetDiagonalRatioMaxValue", PyvtkImplicitPlaneWidget_GetDiagonalRatioMaxValue, METH_VARARGS,
   "V.GetDiagonalRatioMaxValue() -> float\nC++: virtual double GetDiagonalRatioMaxValue()\n\nBy default the arrow is 30% of the diagonal length. DiagonalRatio\ncontrol this ratio in the interval [0-2]\n"},
  {"GetDiagonalRatio", PyvtkImplicitPlaneWidget_GetDiagonalRatio, METH_VARARGS,
   "V.GetDiagonalRatio() -> float\nC++: virtual double GetDiagonalRatio()\n\nBy default the arrow is 30% of the diagonal length. DiagonalRatio\ncontrol this ratio in the interval [0-2]\n"},
  {"GetPolyData", PyvtkImplicitPlaneWidget_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata that defines the plane. The polydata contains a\nsingle polygon that is clipped by the bounding box.\n"},
  {"GetPolyDataAlgorithm", PyvtkImplicitPlaneWidget_GetPolyDataAlgorithm, METH_VARARGS,
   "V.GetPolyDataAlgorithm() -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *GetPolyDataAlgorithm() override;\n\nSatisfies superclass API.  This returns a pointer to the\nunderlying PolyData (which represents the plane).\n"},
  {"GetPlane", PyvtkImplicitPlaneWidget_GetPlane, METH_VARARGS,
   "V.GetPlane(vtkPlane)\nC++: void GetPlane(vtkPlane *plane)\n\nGet the implicit function for the plane. The user must provide\nthe instance of the class vtkPlane. Note that vtkPlane is a\nsubclass of vtkImplicitFunction, meaning that it can be used by a\nvariety of filters to perform clipping, cutting, and selection of\ndata.\n"},
  {"UpdatePlacement", PyvtkImplicitPlaneWidget_UpdatePlacement, METH_VARARGS,
   "V.UpdatePlacement()\nC++: void UpdatePlacement() override;\n\nSatisfies the superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nPolyDataSource\n"},
  {"SizeHandles", PyvtkImplicitPlaneWidget_SizeHandles, METH_VARARGS,
   "V.SizeHandles()\nC++: void SizeHandles() override;\n\nControl widget appearance\n"},
  {"GetNormalProperty", PyvtkImplicitPlaneWidget_GetNormalProperty, METH_VARARGS,
   "V.GetNormalProperty() -> vtkProperty\nC++: virtual vtkProperty *GetNormalProperty()\n\nGet the properties on the normal (line and cone).\n"},
  {"GetSelectedNormalProperty", PyvtkImplicitPlaneWidget_GetSelectedNormalProperty, METH_VARARGS,
   "V.GetSelectedNormalProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedNormalProperty()\n\nGet the properties on the normal (line and cone).\n"},
  {"GetPlaneProperty", PyvtkImplicitPlaneWidget_GetPlaneProperty, METH_VARARGS,
   "V.GetPlaneProperty() -> vtkProperty\nC++: virtual vtkProperty *GetPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {"GetSelectedPlaneProperty", PyvtkImplicitPlaneWidget_GetSelectedPlaneProperty, METH_VARARGS,
   "V.GetSelectedPlaneProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {"GetOutlineProperty", PyvtkImplicitPlaneWidget_GetOutlineProperty, METH_VARARGS,
   "V.GetOutlineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetOutlineProperty()\n\nGet the property of the outline.\n"},
  {"GetSelectedOutlineProperty", PyvtkImplicitPlaneWidget_GetSelectedOutlineProperty, METH_VARARGS,
   "V.GetSelectedOutlineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedOutlineProperty()\n\nGet the property of the outline.\n"},
  {"GetEdgesProperty", PyvtkImplicitPlaneWidget_GetEdgesProperty, METH_VARARGS,
   "V.GetEdgesProperty() -> vtkProperty\nC++: virtual vtkProperty *GetEdgesProperty()\n\nGet the property of the intersection edges. (This property also\napplies to the edges when tubed.)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImplicitPlaneWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkImplicitPlaneWidget", // tp_name
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
  PyvtkImplicitPlaneWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitPlaneWidget_StaticNew()
{
  return vtkImplicitPlaneWidget::New();
}

PyObject *PyvtkImplicitPlaneWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImplicitPlaneWidget_Type, PyvtkImplicitPlaneWidget_Methods,
    "vtkImplicitPlaneWidget",
 &PyvtkImplicitPlaneWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkImplicitPlaneWidget_Type;

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

void PyVTKAddFile_vtkImplicitPlaneWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitPlaneWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitPlaneWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

