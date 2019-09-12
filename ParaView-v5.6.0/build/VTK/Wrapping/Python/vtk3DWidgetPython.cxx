// python wrapper for vtk3DWidget
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
#include "vtk3DWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtk3DWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *Pyvtk3DWidget_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorObserver_ClassNew
extern "C" { PyObject *PyvtkInteractorObserver_ClassNew(); }
#define DECLARED_PyvtkInteractorObserver_ClassNew
#endif

static const char *Pyvtk3DWidget_Doc =
  "vtk3DWidget - an abstract superclass for 3D widgets\n\n"
  "Superclass: vtkInteractorObserver\n\n"
  "vtk3DWidget is an abstract superclass for 3D interactor observers.\n"
  "These 3D widgets represent themselves in the scene, and have special\n"
  "callbacks associated with them that allows interactive manipulation\n"
  "of the widget. Inparticular, the difference between a vtk3DWidget and\n"
  "its abstract superclass vtkInteractorObserver is that vtk3DWidgets\n"
  "are \"placed\" in 3D space.  vtkInteractorObservers have no notion of\n"
  "where they are placed, and may not exist in 3D space at all.  3D\n"
  "widgets also provide auxiliary functions like producing a\n"
  "transformation, creating polydata (for seeding streamlines, probes,\n"
  "etc.) or creating implicit functions. See the concrete subclasses for\n"
  "particulars.\n\n"
  "Typically the widget is used by specifying a vtkProp3D or VTK dataset\n"
  "as input, and then invoking the \"On\" method to activate it. (You can\n"
  "also specify a bounding box to help position the widget.) Prior to\n"
  "invoking the On() method, the user may also wish to use the\n"
  "PlaceWidget() to initially position it. The 'i' (for \"interactor\")\n"
  "keypresses also can be used to turn the widgets on and off (methods\n"
  "exist to change the key value and enable keypress activiation).\n\n"
  "To support interactive manipulation of objects, this class (and\n"
  "subclasses) invoke the events StartInteractionEvent,\n"
  "InteractionEvent, and EndInteractionEvent.  These events are invoked\n"
  "when the vtk3DWidget enters a state where rapid response is desired:\n"
  "mouse motion, etc. The events can be used, for example, to set the\n"
  "desired update frame rate (StartInteractionEvent), operate on the\n"
  "vtkProp3D or other object (InteractionEvent), and set the desired\n"
  "frame rate back to normal values (EndInteractionEvent).\n\n"
  "Note that the Priority attribute inherited from vtkInteractorObserver\n"
  "has a new default value which is now 0.5 so that all 3D widgets have\n"
  "a higher priority than the usual interactor styles.\n\n"
  "@sa\n"
  "vtkBoxWidget vtkPlaneWidget vtkLineWidget vtkPointWidget\n"
  "vtkSphereWidget vtkImplicitPlaneWidget\n\n";


static PyObject *
Pyvtk3DWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtk3DWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtk3DWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtk3DWidget *tempr = vtk3DWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtk3DWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtk3DWidget::NewInstance());

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
Pyvtk3DWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->PlaceWidget(temp0);

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
Pyvtk3DWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtk3DWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
Pyvtk3DWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

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
      op->vtk3DWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
Pyvtk3DWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return Pyvtk3DWidget_PlaceWidget_s1(self, args);
    case 0:
      return Pyvtk3DWidget_PlaceWidget_s2(self, args);
    case 6:
      return Pyvtk3DWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}



static PyObject *
Pyvtk3DWidget_SetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  vtkProp3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
  {
    if (ap.IsBound())
    {
      op->SetProp3D(temp0);
    }
    else
    {
      op->vtk3DWidget::SetProp3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetProp3D() :
      op->vtk3DWidget::GetProp3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtk3DWidget::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

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
      op->vtk3DWidget::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtk3DWidget::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_SetPlaceFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaceFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlaceFactor(temp0);
    }
    else
    {
      op->vtk3DWidget::SetPlaceFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetPlaceFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPlaceFactorMinValue() :
      op->vtk3DWidget::GetPlaceFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetPlaceFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPlaceFactorMaxValue() :
      op->vtk3DWidget::GetPlaceFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetPlaceFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPlaceFactor() :
      op->vtk3DWidget::GetPlaceFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_SetHandleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleSize(temp0);
    }
    else
    {
      op->vtk3DWidget::SetHandleSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetHandleSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHandleSizeMinValue() :
      op->vtk3DWidget::GetHandleSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetHandleSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHandleSizeMaxValue() :
      op->vtk3DWidget::GetHandleSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DWidget_GetHandleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DWidget *op = static_cast<vtk3DWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHandleSize() :
      op->vtk3DWidget::GetHandleSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef Pyvtk3DWidget_Methods[] = {
  {"IsTypeOf", Pyvtk3DWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", Pyvtk3DWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", Pyvtk3DWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtk3DWidget\nC++: static vtk3DWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", Pyvtk3DWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtk3DWidget\nC++: vtk3DWidget *NewInstance()\n\n"},
  {"PlaceWidget", Pyvtk3DWidget_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget()\nC++: virtual void PlaceWidget()\nV.PlaceWidget(float, float, float, float, float, float)\nC++: virtual void PlaceWidget(double xmin, double xmax,\n    double ymin, double ymax, double zmin, double zmax)\n\nThis method is used to initially place the widget.  The placement\nof the widget depends on whether a Prop3D or input dataset is\nprovided. If one of these two is provided, they will be used to\nobtain a bounding box, around which the widget is placed.\nOtherwise, you can manually specify a bounds with the\nPlaceWidget(bounds) method. Note: PlaceWidget(bounds) is required\nby all subclasses; the other methods are provided as convenience\nmethods.\n"},
  {"SetProp3D", Pyvtk3DWidget_SetProp3D, METH_VARARGS,
   "V.SetProp3D(vtkProp3D)\nC++: virtual void SetProp3D(vtkProp3D *)\n\nSpecify a vtkProp3D around which to place the widget. This is not\nrequired, but if supplied, it is used to initially position the\nwidget.\n"},
  {"GetProp3D", Pyvtk3DWidget_GetProp3D, METH_VARARGS,
   "V.GetProp3D() -> vtkProp3D\nC++: virtual vtkProp3D *GetProp3D()\n\nSpecify a vtkProp3D around which to place the widget. This is not\nrequired, but if supplied, it is used to initially position the\nwidget.\n"},
  {"SetInputData", Pyvtk3DWidget_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkDataSet)\nC++: virtual void SetInputData(vtkDataSet *)\n\nSpecify the input dataset. This is not required, but if supplied,\nand no vtkProp3D is specified, it is used to initially position\nthe widget.\n"},
  {"SetInputConnection", Pyvtk3DWidget_SetInputConnection, METH_VARARGS,
   "V.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *)\n\nSpecify the input dataset. This is not required, but if supplied,\nand no vtkProp3D is specified, it is used to initially position\nthe widget.\n"},
  {"GetInput", Pyvtk3DWidget_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkDataSet\nC++: virtual vtkDataSet *GetInput()\n\nSpecify the input dataset. This is not required, but if supplied,\nand no vtkProp3D is specified, it is used to initially position\nthe widget.\n"},
  {"SetPlaceFactor", Pyvtk3DWidget_SetPlaceFactor, METH_VARARGS,
   "V.SetPlaceFactor(float)\nC++: virtual void SetPlaceFactor(double _arg)\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {"GetPlaceFactorMinValue", Pyvtk3DWidget_GetPlaceFactorMinValue, METH_VARARGS,
   "V.GetPlaceFactorMinValue() -> float\nC++: virtual double GetPlaceFactorMinValue()\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {"GetPlaceFactorMaxValue", Pyvtk3DWidget_GetPlaceFactorMaxValue, METH_VARARGS,
   "V.GetPlaceFactorMaxValue() -> float\nC++: virtual double GetPlaceFactorMaxValue()\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {"GetPlaceFactor", Pyvtk3DWidget_GetPlaceFactor, METH_VARARGS,
   "V.GetPlaceFactor() -> float\nC++: virtual double GetPlaceFactor()\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {"SetHandleSize", Pyvtk3DWidget_SetHandleSize, METH_VARARGS,
   "V.SetHandleSize(float)\nC++: virtual void SetHandleSize(double _arg)\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget. These handles (like spheres, etc.)\nare used to manipulate the widget, and are sized as a fraction of\nthe screen diagonal.\n"},
  {"GetHandleSizeMinValue", Pyvtk3DWidget_GetHandleSizeMinValue, METH_VARARGS,
   "V.GetHandleSizeMinValue() -> float\nC++: virtual double GetHandleSizeMinValue()\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget. These handles (like spheres, etc.)\nare used to manipulate the widget, and are sized as a fraction of\nthe screen diagonal.\n"},
  {"GetHandleSizeMaxValue", Pyvtk3DWidget_GetHandleSizeMaxValue, METH_VARARGS,
   "V.GetHandleSizeMaxValue() -> float\nC++: virtual double GetHandleSizeMaxValue()\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget. These handles (like spheres, etc.)\nare used to manipulate the widget, and are sized as a fraction of\nthe screen diagonal.\n"},
  {"GetHandleSize", Pyvtk3DWidget_GetHandleSize, METH_VARARGS,
   "V.GetHandleSize() -> float\nC++: virtual double GetHandleSize()\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget. These handles (like spheres, etc.)\nare used to manipulate the widget, and are sized as a fraction of\nthe screen diagonal.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject Pyvtk3DWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtk3DWidget", // tp_name
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
  Pyvtk3DWidget_Doc, // tp_doc
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

PyObject *Pyvtk3DWidget_ClassNew()
{
  PyVTKClass_Add(
    &Pyvtk3DWidget_Type, Pyvtk3DWidget_Methods,
    "vtk3DWidget",
 nullptr);

  PyTypeObject *pytype = &Pyvtk3DWidget_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorObserver_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtk3DWidget(
  PyObject *dict)
{
  PyObject *o;
  o = Pyvtk3DWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtk3DWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

