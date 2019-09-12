// python wrapper for vtkPointWidget
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
#include "vtkPointWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointWidget_ClassNew(); }

#ifndef DECLARED_Pyvtk3DWidget_ClassNew
extern "C" { PyObject *Pyvtk3DWidget_ClassNew(); }
#define DECLARED_Pyvtk3DWidget_ClassNew
#endif

static const char *PyvtkPointWidget_Doc =
  "vtkPointWidget - position a point in 3D space\n\n"
  "Superclass: vtk3DWidget\n\n"
  "This 3D widget allows the user to position a point in 3D space using\n"
  "a 3D cursor. The cursor has an outline bounding box, axes-aligned\n"
  "cross-hairs, and axes shadows. (The outline and shadows can be turned\n"
  "off.) Any of these can be turned off. A nice feature of the object is\n"
  "that the vtkPointWidget, like any 3D widget, will work with the\n"
  "current interactor style. That is, if vtkPointWidget does not handle\n"
  "an event, then all other registered observers (including the\n"
  "interactor style) have an opportunity to process the event.\n"
  "Otherwise, the vtkPointWidget will terminate the processing of the\n"
  "event that it handles.\n\n"
  "To use this object, just invoke SetInteractor() with the argument of\n"
  "the method a vtkRenderWindowInteractor.  You may also wish to invoke\n"
  "\"PlaceWidget()\" to initially position the widget. The interactor will\n"
  "act normally until the \"i\" key (for \"interactor\") is pressed, at\n"
  "which point the vtkPointWidget will appear. (See superclass\n"
  "documentation for information about changing this behavior.) To move\n"
  "the point, the user can grab (left mouse) on any widget line and\n"
  "\"slide\" the point into position. Scaling is achieved by using the\n"
  "right mouse button \"up\" the render window (makes the widget bigger)\n"
  "or \"down\" the render window (makes the widget smaller). To translate\n"
  "the widget use the middle mouse button. (Note: all of the translation\n"
  "interactions can be constrained to one of the x-y-z axes by using the\n"
  "\"shift\" key.) The vtkPointWidget produces as output a polydata with a\n"
  "single point and a vertex cell.\n\n"
  "Some additional features of this class include the ability to control\n"
  "the rendered properties of the widget. You can set the properties of\n"
  "the selected and unselected representations of the parts of the\n"
  "widget. For example, you can set the property of the 3D cursor in its\n"
  "normal and selected states.\n\n"
  "The constrained translation/sliding action (i.e., when the \"shift\"\n"
  "key is depressed) along the axes is based on a combination of a \"hot\"\n"
  "spot around the cursor focus plus the initial mouse motion after\n"
  "selection. That is, if the user selects an axis outside of the hot\n"
  "spot, then the motion is constrained along that axis. If the user\n"
  "selects the point widget near the focus (within the hot spot), the\n"
  "initial motion defines a vector which is compared to the x-y-z axes.\n"
  "The motion is constrained to the axis that is most parallel to the\n"
  "initial motion vector.\n\n"
  "@sa\n"
  "vtk3DWidget vtkLineWidget vtkBoxWidget vtkPlaneWidget\n\n";


static PyObject *
PyvtkPointWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointWidget *tempr = vtkPointWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointWidget::NewInstance());

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
PyvtkPointWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->vtkPointWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->vtkPointWidget::PlaceWidget(temp0);
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
PyvtkPointWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkPointWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->vtkPointWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPointWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkPointWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkPointWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
PyvtkPointWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->vtkPointWidget::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointWidget::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointWidget_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkPointWidget::SetPosition(temp0);
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
PyvtkPointWidget_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPointWidget_SetPosition_s1(self, args);
    case 1:
      return PyvtkPointWidget_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}



static PyObject *
PyvtkPointWidget_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkPointWidget::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPointWidget_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->GetPosition(temp0);
    }
    else
    {
      op->vtkPointWidget::GetPosition(temp0);
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
PyvtkPointWidget_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPointWidget_GetPosition_s1(self, args);
    case 1:
      return PyvtkPointWidget_GetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return nullptr;
}



static PyObject *
PyvtkPointWidget_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutline(temp0);
    }
    else
    {
      op->vtkPointWidget::SetOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutline() :
      op->vtkPointWidget::GetOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOn();
    }
    else
    {
      op->vtkPointWidget::OutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOff();
    }
    else
    {
      op->vtkPointWidget::OutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXShadows(temp0);
    }
    else
    {
      op->vtkPointWidget::SetXShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXShadows() :
      op->vtkPointWidget::GetXShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_XShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XShadowsOn();
    }
    else
    {
      op->vtkPointWidget::XShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_XShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XShadowsOff();
    }
    else
    {
      op->vtkPointWidget::XShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYShadows(temp0);
    }
    else
    {
      op->vtkPointWidget::SetYShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYShadows() :
      op->vtkPointWidget::GetYShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_YShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YShadowsOn();
    }
    else
    {
      op->vtkPointWidget::YShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_YShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YShadowsOff();
    }
    else
    {
      op->vtkPointWidget::YShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZShadows(temp0);
    }
    else
    {
      op->vtkPointWidget::SetZShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZShadows() :
      op->vtkPointWidget::GetZShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_ZShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZShadowsOn();
    }
    else
    {
      op->vtkPointWidget::ZShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_ZShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZShadowsOff();
    }
    else
    {
      op->vtkPointWidget::ZShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationMode(temp0);
    }
    else
    {
      op->vtkPointWidget::SetTranslationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationMode() :
      op->vtkPointWidget::GetTranslationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_TranslationModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationModeOn();
    }
    else
    {
      op->vtkPointWidget::TranslationModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_TranslationModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationModeOff();
    }
    else
    {
      op->vtkPointWidget::TranslationModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_AllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllOn();
    }
    else
    {
      op->vtkPointWidget::AllOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_AllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllOff();
    }
    else
    {
      op->vtkPointWidget::AllOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkPointWidget::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkPointWidget::GetSelectedProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SetHotSpotSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHotSpotSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHotSpotSize(temp0);
    }
    else
    {
      op->vtkPointWidget::SetHotSpotSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetHotSpotSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSizeMinValue() :
      op->vtkPointWidget::GetHotSpotSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetHotSpotSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSizeMaxValue() :
      op->vtkPointWidget::GetHotSpotSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetHotSpotSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSize() :
      op->vtkPointWidget::GetHotSpotSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPointWidget_Methods[] = {
  {"IsTypeOf", PyvtkPointWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointWidget\nC++: static vtkPointWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointWidget\nC++: vtkPointWidget *NewInstance()\n\n"},
  {"SetEnabled", PyvtkPointWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"PlaceWidget", PyvtkPointWidget_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\nV.PlaceWidget()\nC++: void PlaceWidget() override;\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"GetPolyData", PyvtkPointWidget_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the point. A\nsingle point and a vertex compose the vtkPolyData.\n"},
  {"SetPosition", PyvtkPointWidget_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double x, double y, double z)\nV.SetPosition([float, float, float])\nC++: void SetPosition(double x[3])\n\nSet/Get the position of the point. Note that if the position is\nset outside of the bounding box, it will be clamped to the\nboundary of the bounding box.\n"},
  {"GetPosition", PyvtkPointWidget_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\nV.GetPosition([float, float, float])\nC++: void GetPosition(double xyz[3])\n\n"},
  {"SetOutline", PyvtkPointWidget_SetOutline, METH_VARARGS,
   "V.SetOutline(int)\nC++: void SetOutline(int o)\n\nTurn on/off the wireframe bounding box.\n"},
  {"GetOutline", PyvtkPointWidget_GetOutline, METH_VARARGS,
   "V.GetOutline() -> int\nC++: int GetOutline()\n\n"},
  {"OutlineOn", PyvtkPointWidget_OutlineOn, METH_VARARGS,
   "V.OutlineOn()\nC++: void OutlineOn()\n\n"},
  {"OutlineOff", PyvtkPointWidget_OutlineOff, METH_VARARGS,
   "V.OutlineOff()\nC++: void OutlineOff()\n\n"},
  {"SetXShadows", PyvtkPointWidget_SetXShadows, METH_VARARGS,
   "V.SetXShadows(int)\nC++: void SetXShadows(int o)\n\nTurn on/off the wireframe x-shadows.\n"},
  {"GetXShadows", PyvtkPointWidget_GetXShadows, METH_VARARGS,
   "V.GetXShadows() -> int\nC++: int GetXShadows()\n\n"},
  {"XShadowsOn", PyvtkPointWidget_XShadowsOn, METH_VARARGS,
   "V.XShadowsOn()\nC++: void XShadowsOn()\n\n"},
  {"XShadowsOff", PyvtkPointWidget_XShadowsOff, METH_VARARGS,
   "V.XShadowsOff()\nC++: void XShadowsOff()\n\n"},
  {"SetYShadows", PyvtkPointWidget_SetYShadows, METH_VARARGS,
   "V.SetYShadows(int)\nC++: void SetYShadows(int o)\n\nTurn on/off the wireframe y-shadows.\n"},
  {"GetYShadows", PyvtkPointWidget_GetYShadows, METH_VARARGS,
   "V.GetYShadows() -> int\nC++: int GetYShadows()\n\n"},
  {"YShadowsOn", PyvtkPointWidget_YShadowsOn, METH_VARARGS,
   "V.YShadowsOn()\nC++: void YShadowsOn()\n\n"},
  {"YShadowsOff", PyvtkPointWidget_YShadowsOff, METH_VARARGS,
   "V.YShadowsOff()\nC++: void YShadowsOff()\n\n"},
  {"SetZShadows", PyvtkPointWidget_SetZShadows, METH_VARARGS,
   "V.SetZShadows(int)\nC++: void SetZShadows(int o)\n\nTurn on/off the wireframe z-shadows.\n"},
  {"GetZShadows", PyvtkPointWidget_GetZShadows, METH_VARARGS,
   "V.GetZShadows() -> int\nC++: int GetZShadows()\n\n"},
  {"ZShadowsOn", PyvtkPointWidget_ZShadowsOn, METH_VARARGS,
   "V.ZShadowsOn()\nC++: void ZShadowsOn()\n\n"},
  {"ZShadowsOff", PyvtkPointWidget_ZShadowsOff, METH_VARARGS,
   "V.ZShadowsOff()\nC++: void ZShadowsOff()\n\n"},
  {"SetTranslationMode", PyvtkPointWidget_SetTranslationMode, METH_VARARGS,
   "V.SetTranslationMode(int)\nC++: void SetTranslationMode(int mode)\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated simultaneously as the\npoint moves.\n"},
  {"GetTranslationMode", PyvtkPointWidget_GetTranslationMode, METH_VARARGS,
   "V.GetTranslationMode() -> int\nC++: int GetTranslationMode()\n\n"},
  {"TranslationModeOn", PyvtkPointWidget_TranslationModeOn, METH_VARARGS,
   "V.TranslationModeOn()\nC++: void TranslationModeOn()\n\n"},
  {"TranslationModeOff", PyvtkPointWidget_TranslationModeOff, METH_VARARGS,
   "V.TranslationModeOff()\nC++: void TranslationModeOff()\n\n"},
  {"AllOn", PyvtkPointWidget_AllOn, METH_VARARGS,
   "V.AllOn()\nC++: void AllOn()\n\nConvenience methods to turn outline and shadows on and off.\n"},
  {"AllOff", PyvtkPointWidget_AllOff, METH_VARARGS,
   "V.AllOff()\nC++: void AllOff()\n\nConvenience methods to turn outline and shadows on and off.\n"},
  {"GetProperty", PyvtkPointWidget_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be set.\n"},
  {"GetSelectedProperty", PyvtkPointWidget_GetSelectedProperty, METH_VARARGS,
   "V.GetSelectedProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be set.\n"},
  {"SetHotSpotSize", PyvtkPointWidget_SetHotSpotSize, METH_VARARGS,
   "V.SetHotSpotSize(float)\nC++: virtual void SetHotSpotSize(double _arg)\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {"GetHotSpotSizeMinValue", PyvtkPointWidget_GetHotSpotSizeMinValue, METH_VARARGS,
   "V.GetHotSpotSizeMinValue() -> float\nC++: virtual double GetHotSpotSizeMinValue()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {"GetHotSpotSizeMaxValue", PyvtkPointWidget_GetHotSpotSizeMaxValue, METH_VARARGS,
   "V.GetHotSpotSizeMaxValue() -> float\nC++: virtual double GetHotSpotSizeMaxValue()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {"GetHotSpotSize", PyvtkPointWidget_GetHotSpotSize, METH_VARARGS,
   "V.GetHotSpotSize() -> float\nC++: virtual double GetHotSpotSize()\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkPointWidget", // tp_name
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
  PyvtkPointWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointWidget_StaticNew()
{
  return vtkPointWidget::New();
}

PyObject *PyvtkPointWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointWidget_Type, PyvtkPointWidget_Methods,
    "vtkPointWidget",
 &PyvtkPointWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkPointWidget_Type;

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

void PyVTKAddFile_vtkPointWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

