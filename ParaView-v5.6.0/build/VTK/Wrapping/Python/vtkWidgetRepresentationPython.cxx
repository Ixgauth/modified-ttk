// python wrapper for vtkWidgetRepresentation
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
#include "vtkWidgetRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWidgetRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWidgetRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkProp_ClassNew
extern "C" { PyObject *PyvtkProp_ClassNew(); }
#define DECLARED_PyvtkProp_ClassNew
#endif

static const char *PyvtkWidgetRepresentation_Doc =
  "vtkWidgetRepresentation - abstract class defines interface between\nthe widget and widget representation classes\n\n"
  "Superclass: vtkProp\n\n"
  "This class is used to define the API for, and partially implement, a\n"
  "representation for different types of widgets. Note that the widget\n"
  "representation (i.e., subclasses of vtkWidgetRepresentation) are a\n"
  "type of vtkProp; meaning that they can be associated with a\n"
  "vtkRenderer end embedded in a scene like any other vtkActor. However,\n"
  "vtkWidgetRepresentation also defines an API that enables it to be\n"
  "paired with a subclass vtkAbstractWidget, meaning that it can be\n"
  "driven by a widget, serving to represent the widget as the widget\n"
  "responds to registered events.\n\n"
  "The API defined here should be regarded as a guideline for\n"
  "implementing widgets and widget representations. Widget behavior is\n"
  "complex, as is the way the representation responds to the registered\n"
  "widget events, so the API may vary from widget to widget to reflect\n"
  "this complexity.\n\n"
  "@warning\n"
  "The separation of the widget event handling and representation\n"
  "enables users and developers to create new appearances for the\n"
  "widget. It also facilitates parallel processing, where the client\n"
  "application handles events, and remote representations of the widget\n"
  "are slaves to the client (and do not handle events).\n\n";


static PyObject *
PyvtkWidgetRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWidgetRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWidgetRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWidgetRepresentation *tempr = vtkWidgetRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWidgetRepresentation::NewInstance());

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
PyvtkWidgetRepresentation_PickingManagedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickingManagedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickingManagedOn();
    }
    else
    {
      op->vtkWidgetRepresentation::PickingManagedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_PickingManagedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickingManagedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickingManagedOff();
    }
    else
    {
      op->vtkWidgetRepresentation::PickingManagedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_SetPickingManaged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickingManaged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickingManaged(temp0);
    }
    else
    {
      op->vtkWidgetRepresentation::SetPickingManaged(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetPickingManaged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickingManaged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPickingManaged() :
      op->vtkWidgetRepresentation::GetPickingManaged());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkWidgetRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkWidgetRepresentation::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->BuildRepresentation();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
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
      op->vtkWidgetRepresentation::PlaceWidget(temp0);
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
PyvtkWidgetRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->StartWidgetInteraction(temp0);
    }
    else
    {
      op->vtkWidgetRepresentation::StartWidgetInteraction(temp0);
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
PyvtkWidgetRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtkWidgetRepresentation::WidgetInteraction(temp0);
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
PyvtkWidgetRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->EndWidgetInteraction(temp0);
    }
    else
    {
      op->vtkWidgetRepresentation::EndWidgetInteraction(temp0);
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
PyvtkWidgetRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->vtkWidgetRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionState() :
      op->vtkWidgetRepresentation::GetInteractionState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->vtkWidgetRepresentation::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_StartComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->StartComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWidgetRepresentation::StartComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkWidgetRepresentation_ComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->ComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWidgetRepresentation::ComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkWidgetRepresentation_EndComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->EndComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWidgetRepresentation::EndComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkWidgetRepresentation_ComputeComplexInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeComplexInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = VTK_PYBUFFER_INITIALIZER;
  int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4) :
      op->vtkWidgetRepresentation::ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf3.obj != 0)
  {
    PyBuffer_Release(&pbuf3);
  }
#endif
  return result;
}


static PyObject *
PyvtkWidgetRepresentation_SetPlaceFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaceFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->vtkWidgetRepresentation::SetPlaceFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetPlaceFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPlaceFactorMinValue() :
      op->vtkWidgetRepresentation::GetPlaceFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetPlaceFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPlaceFactorMaxValue() :
      op->vtkWidgetRepresentation::GetPlaceFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetPlaceFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPlaceFactor() :
      op->vtkWidgetRepresentation::GetPlaceFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_SetHandleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->vtkWidgetRepresentation::SetHandleSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetHandleSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHandleSizeMinValue() :
      op->vtkWidgetRepresentation::GetHandleSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetHandleSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHandleSizeMaxValue() :
      op->vtkWidgetRepresentation::GetHandleSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetHandleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHandleSize() :
      op->vtkWidgetRepresentation::GetHandleSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetNeedToRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedToRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNeedToRender() :
      op->vtkWidgetRepresentation::GetNeedToRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_SetNeedToRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeedToRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNeedToRender(temp0);
    }
    else
    {
      op->vtkWidgetRepresentation::SetNeedToRender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetNeedToRenderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedToRenderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNeedToRenderMinValue() :
      op->vtkWidgetRepresentation::GetNeedToRenderMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetNeedToRenderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedToRenderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNeedToRenderMaxValue() :
      op->vtkWidgetRepresentation::GetNeedToRenderMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_NeedToRenderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToRenderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NeedToRenderOn();
    }
    else
    {
      op->vtkWidgetRepresentation::NeedToRenderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_NeedToRenderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToRenderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NeedToRenderOff();
    }
    else
    {
      op->vtkWidgetRepresentation::NeedToRenderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkWidgetRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->vtkWidgetRepresentation::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->vtkWidgetRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkWidgetRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetVolumes(temp0);
    }
    else
    {
      op->vtkWidgetRepresentation::GetVolumes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

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
      op->vtkWidgetRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkWidgetRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkWidgetRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkWidgetRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkWidgetRepresentation::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkWidgetRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkWidgetRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetRepresentation_UnRegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetRepresentation *op = static_cast<vtkWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnRegisterPickers();
    }
    else
    {
      op->vtkWidgetRepresentation::UnRegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkWidgetRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkWidgetRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkWidgetRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWidgetRepresentation\nC++: static vtkWidgetRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkWidgetRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWidgetRepresentation\nC++: vtkWidgetRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"PickingManagedOn", PyvtkWidgetRepresentation_PickingManagedOn, METH_VARARGS,
   "V.PickingManagedOn()\nC++: virtual void PickingManagedOn()\n\nEnable/Disable the use of a manager to process the picking.\nEnabled by default.\n"},
  {"PickingManagedOff", PyvtkWidgetRepresentation_PickingManagedOff, METH_VARARGS,
   "V.PickingManagedOff()\nC++: virtual void PickingManagedOff()\n\nEnable/Disable the use of a manager to process the picking.\nEnabled by default.\n"},
  {"SetPickingManaged", PyvtkWidgetRepresentation_SetPickingManaged, METH_VARARGS,
   "V.SetPickingManaged(bool)\nC++: void SetPickingManaged(bool managed)\n\nEnable/Disable the use of a manager to process the picking.\nEnabled by default.\n"},
  {"GetPickingManaged", PyvtkWidgetRepresentation_GetPickingManaged, METH_VARARGS,
   "V.GetPickingManaged() -> bool\nC++: virtual bool GetPickingManaged()\n\nEnable/Disable the use of a manager to process the picking.\nEnabled by default.\n"},
  {"SetRenderer", PyvtkWidgetRepresentation_SetRenderer, METH_VARARGS,
   "V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nSubclasses of vtkWidgetRepresentation must implement these\nmethods. This is considered the minimum API for a widget\nrepresentation.\n\nSetRenderer() - the renderer in which the representations draws\nitself. Typically the renderer is set by the associated widget.\nUse the widget's SetCurrentRenderer() method in most cases;\notherwise there is a risk of inconsistent behavior as events and\ndrawing may be performed in different viewports.\nBuildRepresentation() - update the geometry of the widget based\non its current state.  WARNING: The renderer is NOT reference\ncounted by the representation, in order to avoid reference loops.\n Be sure that the representation lifetime does not extend beyond\nthe renderer lifetime.\n"},
  {"GetRenderer", PyvtkWidgetRepresentation_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nSubclasses of vtkWidgetRepresentation must implement these\nmethods. This is considered the minimum API for a widget\nrepresentation.\n\nSetRenderer() - the renderer in which the representations draws\nitself. Typically the renderer is set by the associated widget.\nUse the widget's SetCurrentRenderer() method in most cases;\notherwise there is a risk of inconsistent behavior as events and\ndrawing may be performed in different viewports.\nBuildRepresentation() - update the geometry of the widget based\non its current state.  WARNING: The renderer is NOT reference\ncounted by the representation, in order to avoid reference loops.\n Be sure that the representation lifetime does not extend beyond\nthe renderer lifetime.\n"},
  {"BuildRepresentation", PyvtkWidgetRepresentation_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSubclasses of vtkWidgetRepresentation must implement these\nmethods. This is considered the minimum API for a widget\nrepresentation.\n\nSetRenderer() - the renderer in which the representations draws\nitself. Typically the renderer is set by the associated widget.\nUse the widget's SetCurrentRenderer() method in most cases;\notherwise there is a risk of inconsistent behavior as events and\ndrawing may be performed in different viewports.\nBuildRepresentation() - update the geometry of the widget based\non its current state.  WARNING: The renderer is NOT reference\ncounted by the representation, in order to avoid reference loops.\n Be sure that the representation lifetime does not extend beyond\nthe renderer lifetime.\n"},
  {"PlaceWidget", PyvtkWidgetRepresentation_PlaceWidget, METH_VARARGS,
   "V.PlaceWidget([float, ...])\nC++: virtual void PlaceWidget(double *bounds)\n\nThe following is a suggested API for widget representations.\nThese methods define the communication between the widget and its\nrepresentation. These methods are only suggestions because\nwidgets take on so many different forms that a universal API is\nnot deemed practical. However, these methods should be\nimplemented when possible to insure that the VTK widget hierarchy\nremains self-consistent.\n\nPlaceWidget() - given a bounding box\n(xmin,xmax,ymin,ymax,zmin,zmax), place the widget inside of it.\nThe current orientation of the widget is preserved, only scaling\nand translation is performed. StartWidgetInteraction() -\ngenerally corresponds to a initial event (e.g., mouse down) that\nstarts the interaction process with the widget.\nWidgetInteraction() - invoked when an event causes the widget to\nchange appearance. EndWidgetInteraction() - generally corresponds\nto a final event (e.g., mouse up) and completes the interaction\nsequence. ComputeInteractionState() - given (X,Y) display\ncoordinates in a renderer, with a possible flag that modifies the\ncomputation, what is the state of the widget?\nGetInteractionState() - return the current state of the widget.\nNote that the value of \"0\" typically refers to \"outside\". The\ninteraction state is strictly a function of the representation,\nand the widget/represent must agree on what they mean.\nHighlight() - turn on or off any highlights associated with the\nwidget. Highlights are generally turned on when the widget is\nselected.  Note that subclasses may ignore some of these methods\nand implement their own depending on the specifics of the widget.\n"},
  {"StartWidgetInteraction", PyvtkWidgetRepresentation_StartWidgetInteraction, METH_VARARGS,
   "V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\n"},
  {"WidgetInteraction", PyvtkWidgetRepresentation_WidgetInteraction, METH_VARARGS,
   "V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double newEventPos[2])\n\n"},
  {"EndWidgetInteraction", PyvtkWidgetRepresentation_EndWidgetInteraction, METH_VARARGS,
   "V.EndWidgetInteraction([float, float])\nC++: virtual void EndWidgetInteraction(double newEventPos[2])\n\n"},
  {"ComputeInteractionState", PyvtkWidgetRepresentation_ComputeInteractionState, METH_VARARGS,
   "V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\n"},
  {"GetInteractionState", PyvtkWidgetRepresentation_GetInteractionState, METH_VARARGS,
   "V.GetInteractionState() -> int\nC++: virtual int GetInteractionState()\n\n"},
  {"Highlight", PyvtkWidgetRepresentation_Highlight, METH_VARARGS,
   "V.Highlight(int)\nC++: virtual void Highlight(int highlightOn)\n\n"},
  {"StartComplexInteraction", PyvtkWidgetRepresentation_StartComplexInteraction, METH_VARARGS,
   "V.StartComplexInteraction(vtkRenderWindowInteractor,\n    vtkAbstractWidget, int, void)\nC++: virtual void StartComplexInteraction(\n    vtkRenderWindowInteractor *, vtkAbstractWidget *,\n    unsigned long, void *)\n\n"},
  {"ComplexInteraction", PyvtkWidgetRepresentation_ComplexInteraction, METH_VARARGS,
   "V.ComplexInteraction(vtkRenderWindowInteractor, vtkAbstractWidget,\n     int, void)\nC++: virtual void ComplexInteraction(vtkRenderWindowInteractor *,\n    vtkAbstractWidget *, unsigned long, void *)\n\n"},
  {"EndComplexInteraction", PyvtkWidgetRepresentation_EndComplexInteraction, METH_VARARGS,
   "V.EndComplexInteraction(vtkRenderWindowInteractor,\n    vtkAbstractWidget, int, void)\nC++: virtual void EndComplexInteraction(\n    vtkRenderWindowInteractor *, vtkAbstractWidget *,\n    unsigned long, void *)\n\n"},
  {"ComputeComplexInteractionState", PyvtkWidgetRepresentation_ComputeComplexInteractionState, METH_VARARGS,
   "V.ComputeComplexInteractionState(vtkRenderWindowInteractor,\n    vtkAbstractWidget, int, void, int) -> int\nC++: virtual int ComputeComplexInteractionState(\n    vtkRenderWindowInteractor *iren, vtkAbstractWidget *widget,\n    unsigned long event, void *callData, int modify=0)\n\n"},
  {"SetPlaceFactor", PyvtkWidgetRepresentation_SetPlaceFactor, METH_VARARGS,
   "V.SetPlaceFactor(float)\nC++: virtual void SetPlaceFactor(double _arg)\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {"GetPlaceFactorMinValue", PyvtkWidgetRepresentation_GetPlaceFactorMinValue, METH_VARARGS,
   "V.GetPlaceFactorMinValue() -> float\nC++: virtual double GetPlaceFactorMinValue()\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {"GetPlaceFactorMaxValue", PyvtkWidgetRepresentation_GetPlaceFactorMaxValue, METH_VARARGS,
   "V.GetPlaceFactorMaxValue() -> float\nC++: virtual double GetPlaceFactorMaxValue()\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {"GetPlaceFactor", PyvtkWidgetRepresentation_GetPlaceFactor, METH_VARARGS,
   "V.GetPlaceFactor() -> float\nC++: virtual double GetPlaceFactor()\n\nSet/Get a factor representing the scaling of the widget upon\nplacement (via the PlaceWidget() method). Normally the widget is\nplaced so that it just fits within the bounding box defined in\nPlaceWidget(bounds). The PlaceFactor will make the widget larger\n(PlaceFactor > 1) or smaller (PlaceFactor < 1). By default,\nPlaceFactor is set to 0.5.\n"},
  {"SetHandleSize", PyvtkWidgetRepresentation_SetHandleSize, METH_VARARGS,
   "V.SetHandleSize(float)\nC++: virtual void SetHandleSize(double _arg)\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget (if any). These handles (like\nspheres, etc.)  are used to manipulate the widget. The HandleSize\ndata member allows you to change the relative size of the\nhandles. Note that while the handle size is typically expressed\nin pixels, some subclasses may use a relative size with respect\nto the viewport. (As a corollary, the value of this ivar is often\nset by subclasses of this class during instance instantiation.)\n"},
  {"GetHandleSizeMinValue", PyvtkWidgetRepresentation_GetHandleSizeMinValue, METH_VARARGS,
   "V.GetHandleSizeMinValue() -> float\nC++: virtual double GetHandleSizeMinValue()\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget (if any). These handles (like\nspheres, etc.)  are used to manipulate the widget. The HandleSize\ndata member allows you to change the relative size of the\nhandles. Note that while the handle size is typically expressed\nin pixels, some subclasses may use a relative size with respect\nto the viewport. (As a corollary, the value of this ivar is often\nset by subclasses of this class during instance instantiation.)\n"},
  {"GetHandleSizeMaxValue", PyvtkWidgetRepresentation_GetHandleSizeMaxValue, METH_VARARGS,
   "V.GetHandleSizeMaxValue() -> float\nC++: virtual double GetHandleSizeMaxValue()\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget (if any). These handles (like\nspheres, etc.)  are used to manipulate the widget. The HandleSize\ndata member allows you to change the relative size of the\nhandles. Note that while the handle size is typically expressed\nin pixels, some subclasses may use a relative size with respect\nto the viewport. (As a corollary, the value of this ivar is often\nset by subclasses of this class during instance instantiation.)\n"},
  {"GetHandleSize", PyvtkWidgetRepresentation_GetHandleSize, METH_VARARGS,
   "V.GetHandleSize() -> float\nC++: virtual double GetHandleSize()\n\nSet/Get the factor that controls the size of the handles that\nappear as part of the widget (if any). These handles (like\nspheres, etc.)  are used to manipulate the widget. The HandleSize\ndata member allows you to change the relative size of the\nhandles. Note that while the handle size is typically expressed\nin pixels, some subclasses may use a relative size with respect\nto the viewport. (As a corollary, the value of this ivar is often\nset by subclasses of this class during instance instantiation.)\n"},
  {"GetNeedToRender", PyvtkWidgetRepresentation_GetNeedToRender, METH_VARARGS,
   "V.GetNeedToRender() -> int\nC++: virtual vtkTypeBool GetNeedToRender()\n\nSome subclasses use this data member to keep track of whether to\nrender or not (i.e., to minimize the total number of renders).\n"},
  {"SetNeedToRender", PyvtkWidgetRepresentation_SetNeedToRender, METH_VARARGS,
   "V.SetNeedToRender(int)\nC++: virtual void SetNeedToRender(vtkTypeBool _arg)\n\nSome subclasses use this data member to keep track of whether to\nrender or not (i.e., to minimize the total number of renders).\n"},
  {"GetNeedToRenderMinValue", PyvtkWidgetRepresentation_GetNeedToRenderMinValue, METH_VARARGS,
   "V.GetNeedToRenderMinValue() -> int\nC++: virtual vtkTypeBool GetNeedToRenderMinValue()\n\nSome subclasses use this data member to keep track of whether to\nrender or not (i.e., to minimize the total number of renders).\n"},
  {"GetNeedToRenderMaxValue", PyvtkWidgetRepresentation_GetNeedToRenderMaxValue, METH_VARARGS,
   "V.GetNeedToRenderMaxValue() -> int\nC++: virtual vtkTypeBool GetNeedToRenderMaxValue()\n\nSome subclasses use this data member to keep track of whether to\nrender or not (i.e., to minimize the total number of renders).\n"},
  {"NeedToRenderOn", PyvtkWidgetRepresentation_NeedToRenderOn, METH_VARARGS,
   "V.NeedToRenderOn()\nC++: virtual void NeedToRenderOn()\n\nSome subclasses use this data member to keep track of whether to\nrender or not (i.e., to minimize the total number of renders).\n"},
  {"NeedToRenderOff", PyvtkWidgetRepresentation_NeedToRenderOff, METH_VARARGS,
   "V.NeedToRenderOff()\nC++: virtual void NeedToRenderOff()\n\nSome subclasses use this data member to keep track of whether to\nrender or not (i.e., to minimize the total number of renders).\n"},
  {"GetBounds", PyvtkWidgetRepresentation_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"ShallowCopy", PyvtkWidgetRepresentation_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of this vtkProp.\n"},
  {"GetActors", PyvtkWidgetRepresentation_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"GetActors2D", PyvtkWidgetRepresentation_GetActors2D, METH_VARARGS,
   "V.GetActors2D(vtkPropCollection)\nC++: void GetActors2D(vtkPropCollection *) override;\n\n"},
  {"GetVolumes", PyvtkWidgetRepresentation_GetVolumes, METH_VARARGS,
   "V.GetVolumes(vtkPropCollection)\nC++: void GetVolumes(vtkPropCollection *) override;\n\n"},
  {"ReleaseGraphicsResources", PyvtkWidgetRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOverlay", PyvtkWidgetRepresentation_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkWidgetRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkWidgetRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"RenderVolumetricGeometry", PyvtkWidgetRepresentation_RenderVolumetricGeometry, METH_VARARGS,
   "V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: int RenderVolumetricGeometry(vtkViewport *viewport) override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkWidgetRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"RegisterPickers", PyvtkWidgetRepresentation_RegisterPickers, METH_VARARGS,
   "V.RegisterPickers()\nC++: virtual void RegisterPickers()\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {"UnRegisterPickers", PyvtkWidgetRepresentation_UnRegisterPickers, METH_VARARGS,
   "V.UnRegisterPickers()\nC++: virtual void UnRegisterPickers()\n\nUnregister internal pickers from the Picking Manager.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWidgetRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkWidgetRepresentation", // tp_name
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
  PyvtkWidgetRepresentation_Doc, // tp_doc
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

PyObject *PyvtkWidgetRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWidgetRepresentation_Type, PyvtkWidgetRepresentation_Methods,
    "vtkWidgetRepresentation",
 nullptr);

  PyTypeObject *pytype = &PyvtkWidgetRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProp_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWidgetRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWidgetRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWidgetRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

