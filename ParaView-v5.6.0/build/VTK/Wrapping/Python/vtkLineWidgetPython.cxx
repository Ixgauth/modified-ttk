// python wrapper for vtkLineWidget
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
#include "vtkLineWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLineWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLineWidget_ClassNew(); }

#ifndef DECLARED_Pyvtk3DWidget_ClassNew
extern "C" { PyObject *Pyvtk3DWidget_ClassNew(); }
#define DECLARED_Pyvtk3DWidget_ClassNew
#endif

static const char *PyvtkLineWidget_Doc =
  "vtkLineWidget - 3D widget for manipulating a line\n\n"
  "Superclass: vtk3DWidget\n\n"
  "This 3D widget defines a line that can be interactively placed in a\n"
  "scene. The line has two handles (at its endpoints), plus the line can\n"
  "be picked to translate it in the scene.  A nice feature of the object\n"
  "is that the vtkLineWidget, like any 3D widget, will work with the\n"
  "current interactor style and any other widgets present in the scene.\n"
  "That is, if vtkLineWidget does not handle an event, then all other\n"
  "registered observers (including the interactor style) have an\n"
  "opportunity to process the event. Otherwise, the vtkLineWidget will\n"
  "terminate the processing of the event that it handles.\n\n"
  "To use this object, just invoke SetInteractor() with the argument of\n"
  "the method a vtkRenderWindowInteractor.  You may also wish to invoke\n"
  "\"PlaceWidget()\" to initially position the widget. The interactor will\n"
  "act normally until the \"i\" key (for \"interactor\") is pressed, at\n"
  "which point the vtkLineWidget will appear. (See superclass\n"
  "documentation for information about changing this behavior.) By\n"
  "grabbing one of the two end point handles (use the left mouse\n"
  "button), the line can be oriented and stretched (the other end point\n"
  "remains fixed). By grabbing the line itself, or using the middle\n"
  "mouse button, the entire line can be translated.  Scaling (about the\n"
  "center of the line) is achieved by using the right mouse button. By\n"
  "moving the mouse \"up\" the render window the line will be made bigger;\n"
  "by moving \"down\" the render window the widget will be made smaller.\n"
  "Turn off the widget by pressing the \"i\" key again (or invoke the\n"
  "Off() method). (Note: picking the line or either one of the two end\n"
  "point handles causes a vtkPointWidget to appear.  This widget has the\n"
  "ability to constrain motion to an axis by pressing the \"shift\" key\n"
  "while moving the mouse.)\n\n"
  "The vtkLineWidget has several methods that can be used in conjunction\n"
  "with other VTK objects. The Set/GetResolution() methods control the\n"
  "number of subdivisions of the line; the GetPolyData() method can be\n"
  "used to get the polygonal representation and can be used for things\n"
  "like seeding streamlines. Typical usage of the widget is to make use\n"
  "of the StartInteractionEvent, InteractionEvent, and\n"
  "EndInteractionEvent events. The InteractionEvent is called on mouse\n"
  "motion; the other two events are called on button down and button up\n"
  "(either left or right button).\n\n"
  "Some additional features of this class include the ability to control\n"
  "the properties of the widget. You can set the properties of the\n"
  "selected and unselected representations of the line. For example, you\n"
  "can set the property for the handles and line. In addition there are\n"
  "methods to constrain the line so that it is aligned along the x-y-z\n"
  "axes.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkPlaneWidget\n\n";


static PyObject *
PyvtkLineWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLineWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLineWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLineWidget *tempr = vtkLineWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLineWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLineWidget::NewInstance());

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
PyvtkLineWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::PlaceWidget(temp0);
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
PyvtkLineWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkLineWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkLineWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkLineWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkLineWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
PyvtkLineWidget_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkLineWidget::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineWidget_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::SetPoint1(temp0);
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
PyvtkLineWidget_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLineWidget_SetPoint1_s1(self, args);
    case 1:
      return PyvtkLineWidget_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}



static PyObject *
PyvtkLineWidget_GetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkLineWidget::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLineWidget_GetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::GetPoint1(temp0);
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
PyvtkLineWidget_GetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkLineWidget_GetPoint1_s1(self, args);
    case 1:
      return PyvtkLineWidget_GetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1");
  return nullptr;
}



static PyObject *
PyvtkLineWidget_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineWidget_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::SetPoint2(temp0);
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
PyvtkLineWidget_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLineWidget_SetPoint2_s1(self, args);
    case 1:
      return PyvtkLineWidget_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}



static PyObject *
PyvtkLineWidget_GetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkLineWidget::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLineWidget_GetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::GetPoint2(temp0);
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
PyvtkLineWidget_GetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkLineWidget_GetPoint2_s1(self, args);
    case 1:
      return PyvtkLineWidget_GetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2");
  return nullptr;
}



static PyObject *
PyvtkLineWidget_SetAlign(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlign(temp0);
    }
    else
    {
      op->vtkLineWidget::SetAlign(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetAlignMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlignMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlignMinValue() :
      op->vtkLineWidget::GetAlignMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetAlignMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlignMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlignMaxValue() :
      op->vtkLineWidget::GetAlignMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetAlign(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlign() :
      op->vtkLineWidget::GetAlign());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SetAlignToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAlignToXAxis();
    }
    else
    {
      op->vtkLineWidget::SetAlignToXAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SetAlignToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAlignToYAxis();
    }
    else
    {
      op->vtkLineWidget::SetAlignToYAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SetAlignToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAlignToZAxis();
    }
    else
    {
      op->vtkLineWidget::SetAlignToZAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SetAlignToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAlignToNone();
    }
    else
    {
      op->vtkLineWidget::SetAlignToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_SetClampToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClampToBounds(temp0);
    }
    else
    {
      op->vtkLineWidget::SetClampToBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetClampToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClampToBounds() :
      op->vtkLineWidget::GetClampToBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_ClampToBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampToBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampToBoundsOn();
    }
    else
    {
      op->vtkLineWidget::ClampToBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_ClampToBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampToBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampToBoundsOff();
    }
    else
    {
      op->vtkLineWidget::ClampToBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

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
      op->vtkLineWidget::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkLineWidget::GetHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkLineWidget::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkLineWidget::GetLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineWidget_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineWidget *op = static_cast<vtkLineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkLineWidget::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLineWidget_Methods[] = {
  {"IsTypeOf", PyvtkLineWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLineWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLineWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLineWidget\nC++: static vtkLineWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLineWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLineWidget\nC++: vtkLineWidget *NewInstance()\n\n"},
  {"SetEnabled", PyvtkLineWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"PlaceWidget", PyvtkLineWidget_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: void PlaceWidget(double bounds[6]) override;\nV.PlaceWidget()\nC++: void PlaceWidget() override;\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"SetResolution", PyvtkLineWidget_SetResolution, METH_VARARGS,
   "V.SetResolution(int)\nC++: void SetResolution(int r)\n\nSet/Get the resolution (number of subdivisions) of the line.\n"},
  {"GetResolution", PyvtkLineWidget_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: int GetResolution()\n\n"},
  {"SetPoint1", PyvtkLineWidget_SetPoint1, METH_VARARGS,
   "V.SetPoint1(float, float, float)\nC++: void SetPoint1(double x, double y, double z)\nV.SetPoint1([float, float, float])\nC++: void SetPoint1(double x[3])\n\nSet/Get the position of first end point.\n"},
  {"GetPoint1", PyvtkLineWidget_GetPoint1, METH_VARARGS,
   "V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\nV.GetPoint1([float, float, float])\nC++: void GetPoint1(double xyz[3])\n\n"},
  {"SetPoint2", PyvtkLineWidget_SetPoint2, METH_VARARGS,
   "V.SetPoint2(float, float, float)\nC++: void SetPoint2(double x, double y, double z)\nV.SetPoint2([float, float, float])\nC++: void SetPoint2(double x[3])\n\nSet position of other end point.\n"},
  {"GetPoint2", PyvtkLineWidget_GetPoint2, METH_VARARGS,
   "V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\nV.GetPoint2([float, float, float])\nC++: void GetPoint2(double xyz[3])\n\n"},
  {"SetAlign", PyvtkLineWidget_SetAlign, METH_VARARGS,
   "V.SetAlign(int)\nC++: virtual void SetAlign(int _arg)\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {"GetAlignMinValue", PyvtkLineWidget_GetAlignMinValue, METH_VARARGS,
   "V.GetAlignMinValue() -> int\nC++: virtual int GetAlignMinValue()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {"GetAlignMaxValue", PyvtkLineWidget_GetAlignMaxValue, METH_VARARGS,
   "V.GetAlignMaxValue() -> int\nC++: virtual int GetAlignMaxValue()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {"GetAlign", PyvtkLineWidget_GetAlign, METH_VARARGS,
   "V.GetAlign() -> int\nC++: virtual int GetAlign()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {"SetAlignToXAxis", PyvtkLineWidget_SetAlignToXAxis, METH_VARARGS,
   "V.SetAlignToXAxis()\nC++: void SetAlignToXAxis()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {"SetAlignToYAxis", PyvtkLineWidget_SetAlignToYAxis, METH_VARARGS,
   "V.SetAlignToYAxis()\nC++: void SetAlignToYAxis()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {"SetAlignToZAxis", PyvtkLineWidget_SetAlignToZAxis, METH_VARARGS,
   "V.SetAlignToZAxis()\nC++: void SetAlignToZAxis()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {"SetAlignToNone", PyvtkLineWidget_SetAlignToNone, METH_VARARGS,
   "V.SetAlignToNone()\nC++: void SetAlignToNone()\n\nForce the line widget to be aligned with one of the x-y-z axes.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the line to the axes if it is originally\nnot aligned.\n"},
  {"SetClampToBounds", PyvtkLineWidget_SetClampToBounds, METH_VARARGS,
   "V.SetClampToBounds(int)\nC++: virtual void SetClampToBounds(vtkTypeBool _arg)\n\nEnable/disable clamping of the point end points to the bounding\nbox of the data. The bounding box is defined from the last\nPlaceWidget() invocation, and includes the effect of the\nPlaceFactor which is used to gram/shrink the bounding box.\n"},
  {"GetClampToBounds", PyvtkLineWidget_GetClampToBounds, METH_VARARGS,
   "V.GetClampToBounds() -> int\nC++: virtual vtkTypeBool GetClampToBounds()\n\nEnable/disable clamping of the point end points to the bounding\nbox of the data. The bounding box is defined from the last\nPlaceWidget() invocation, and includes the effect of the\nPlaceFactor which is used to gram/shrink the bounding box.\n"},
  {"ClampToBoundsOn", PyvtkLineWidget_ClampToBoundsOn, METH_VARARGS,
   "V.ClampToBoundsOn()\nC++: virtual void ClampToBoundsOn()\n\nEnable/disable clamping of the point end points to the bounding\nbox of the data. The bounding box is defined from the last\nPlaceWidget() invocation, and includes the effect of the\nPlaceFactor which is used to gram/shrink the bounding box.\n"},
  {"ClampToBoundsOff", PyvtkLineWidget_ClampToBoundsOff, METH_VARARGS,
   "V.ClampToBoundsOff()\nC++: virtual void ClampToBoundsOff()\n\nEnable/disable clamping of the point end points to the bounding\nbox of the data. The bounding box is defined from the last\nPlaceWidget() invocation, and includes the effect of the\nPlaceFactor which is used to gram/shrink the bounding box.\n"},
  {"GetPolyData", PyvtkLineWidget_GetPolyData, METH_VARARGS,
   "V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the line.  The\npolydata consists of n+1 points, where n is the resolution of the\nline. These point values are guaranteed to be up-to-date when\neither the InteractionEvent or EndInteraction events are invoked.\nThe user provides the vtkPolyData and the points and polyline are\nadded to it.\n"},
  {"GetHandleProperty", PyvtkLineWidget_GetHandleProperty, METH_VARARGS,
   "V.GetHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be\nmanipulated.\n"},
  {"GetSelectedHandleProperty", PyvtkLineWidget_GetSelectedHandleProperty, METH_VARARGS,
   "V.GetSelectedHandleProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be\nmanipulated.\n"},
  {"GetLineProperty", PyvtkLineWidget_GetLineProperty, METH_VARARGS,
   "V.GetLineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetLineProperty()\n\nGet the line properties. The properties of the line when selected\nand unselected can be manipulated.\n"},
  {"GetSelectedLineProperty", PyvtkLineWidget_GetSelectedLineProperty, METH_VARARGS,
   "V.GetSelectedLineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetSelectedLineProperty()\n\nGet the line properties. The properties of the line when selected\nand unselected can be manipulated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLineWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkLineWidget", // tp_name
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
  PyvtkLineWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLineWidget_StaticNew()
{
  return vtkLineWidget::New();
}

PyObject *PyvtkLineWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLineWidget_Type, PyvtkLineWidget_Methods,
    "vtkLineWidget",
 &PyvtkLineWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkLineWidget_Type;

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

void PyVTKAddFile_vtkLineWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLineWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLineWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

