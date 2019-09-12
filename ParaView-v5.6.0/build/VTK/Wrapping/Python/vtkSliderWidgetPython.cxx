// python wrapper for vtkSliderWidget
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
#include "vtkSliderWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSliderWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSliderWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkSliderWidget_Doc =
  "vtkSliderWidget - set a value by manipulating a slider\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkSliderWidget is used to set a scalar value in an application. \n"
  "This class assumes that a slider is moved along a 1D parameter space\n"
  "(e.g., a spherical bead that can be moved along a tube).  Moving the\n"
  "slider modifies the value of the widget, which can be used to set\n"
  "parameters on other objects. Note that the actual appearance of the\n"
  "widget depends on the specific representation for the widget.\n\n"
  "To use this widget, set the widget representation. The representation\n"
  "is assumed to consist of a tube, two end caps, and a slider (the\n"
  "details may vary depending on the particulars of the representation).\n"
  "Then in the representation you will typically set minimum and maximum\n"
  "value, as well as the current value. The position of the slider must\n"
  "also be set, as well as various properties.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If the slider bead is selected:\n"
  "  LeftButtonPressEvent - select slider (if on slider)\n"
  "  LeftButtonReleaseEvent - release slider (if selected)\n"
  "  MouseMoveEvent - move slider If the end caps or slider tube are\n"
  "selected:\n"
  "  LeftButtonPressEvent - move (or animate) to cap or point on tube; \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkSliderWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for slider motion has been\n"
  "invoked \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkSliderWidget invokes the following VTK events on itself (which\n"
  "observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n";


static PyObject *
PyvtkSliderWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSliderWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSliderWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSliderWidget *tempr = vtkSliderWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliderWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSliderWidget::NewInstance());

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
PyvtkSliderWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  vtkSliderRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkSliderWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetSliderRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliderRepresentation *tempr = (ap.IsBound() ?
      op->GetSliderRepresentation() :
      op->vtkSliderWidget::GetSliderRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_SetAnimationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimationMode(temp0);
    }
    else
    {
      op->vtkSliderWidget::SetAnimationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetAnimationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimationModeMinValue() :
      op->vtkSliderWidget::GetAnimationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetAnimationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimationModeMaxValue() :
      op->vtkSliderWidget::GetAnimationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetAnimationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimationMode() :
      op->vtkSliderWidget::GetAnimationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_SetAnimationModeToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationModeToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAnimationModeToOff();
    }
    else
    {
      op->vtkSliderWidget::SetAnimationModeToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_SetAnimationModeToJump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationModeToJump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAnimationModeToJump();
    }
    else
    {
      op->vtkSliderWidget::SetAnimationModeToJump();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_SetAnimationModeToAnimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationModeToAnimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAnimationModeToAnimate();
    }
    else
    {
      op->vtkSliderWidget::SetAnimationModeToAnimate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_SetNumberOfAnimationSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfAnimationSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfAnimationSteps(temp0);
    }
    else
    {
      op->vtkSliderWidget::SetNumberOfAnimationSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetNumberOfAnimationStepsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnimationStepsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAnimationStepsMinValue() :
      op->vtkSliderWidget::GetNumberOfAnimationStepsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetNumberOfAnimationStepsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnimationStepsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAnimationStepsMaxValue() :
      op->vtkSliderWidget::GetNumberOfAnimationStepsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_GetNumberOfAnimationSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnimationSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAnimationSteps() :
      op->vtkSliderWidget::GetNumberOfAnimationSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderWidget *op = static_cast<vtkSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkSliderWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSliderWidget_Methods[] = {
  {"IsTypeOf", PyvtkSliderWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard macros.\n"},
  {"IsA", PyvtkSliderWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard macros.\n"},
  {"SafeDownCast", PyvtkSliderWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSliderWidget\nC++: static vtkSliderWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard macros.\n"},
  {"NewInstance", PyvtkSliderWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSliderWidget\nC++: vtkSliderWidget *NewInstance()\n\nStandard macros.\n"},
  {"SetRepresentation", PyvtkSliderWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkSliderRepresentation)\nC++: void SetRepresentation(vtkSliderRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetSliderRepresentation", PyvtkSliderWidget_GetSliderRepresentation, METH_VARARGS,
   "V.GetSliderRepresentation() -> vtkSliderRepresentation\nC++: vtkSliderRepresentation *GetSliderRepresentation()\n\nReturn the representation as a vtkSliderRepresentation.\n"},
  {"SetAnimationMode", PyvtkSliderWidget_SetAnimationMode, METH_VARARGS,
   "V.SetAnimationMode(int)\nC++: virtual void SetAnimationMode(int _arg)\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {"GetAnimationModeMinValue", PyvtkSliderWidget_GetAnimationModeMinValue, METH_VARARGS,
   "V.GetAnimationModeMinValue() -> int\nC++: virtual int GetAnimationModeMinValue()\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {"GetAnimationModeMaxValue", PyvtkSliderWidget_GetAnimationModeMaxValue, METH_VARARGS,
   "V.GetAnimationModeMaxValue() -> int\nC++: virtual int GetAnimationModeMaxValue()\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {"GetAnimationMode", PyvtkSliderWidget_GetAnimationMode, METH_VARARGS,
   "V.GetAnimationMode() -> int\nC++: virtual int GetAnimationMode()\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {"SetAnimationModeToOff", PyvtkSliderWidget_SetAnimationModeToOff, METH_VARARGS,
   "V.SetAnimationModeToOff()\nC++: void SetAnimationModeToOff()\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {"SetAnimationModeToJump", PyvtkSliderWidget_SetAnimationModeToJump, METH_VARARGS,
   "V.SetAnimationModeToJump()\nC++: void SetAnimationModeToJump()\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {"SetAnimationModeToAnimate", PyvtkSliderWidget_SetAnimationModeToAnimate, METH_VARARGS,
   "V.SetAnimationModeToAnimate()\nC++: void SetAnimationModeToAnimate()\n\nControl the behavior of the slider when selecting the tube or\ncaps. If Jump, then selecting the tube, left cap, or right cap\ncauses the slider to jump to the selection point. If the mode is\nAnimate, the slider moves towards the selection point in\nNumberOfAnimationSteps number of steps. If Off, then the slider\ndoes not move.\n"},
  {"SetNumberOfAnimationSteps", PyvtkSliderWidget_SetNumberOfAnimationSteps, METH_VARARGS,
   "V.SetNumberOfAnimationSteps(int)\nC++: virtual void SetNumberOfAnimationSteps(int _arg)\n\nSpecify the number of animation steps to take if the animation\nmode is set to animate.\n"},
  {"GetNumberOfAnimationStepsMinValue", PyvtkSliderWidget_GetNumberOfAnimationStepsMinValue, METH_VARARGS,
   "V.GetNumberOfAnimationStepsMinValue() -> int\nC++: virtual int GetNumberOfAnimationStepsMinValue()\n\nSpecify the number of animation steps to take if the animation\nmode is set to animate.\n"},
  {"GetNumberOfAnimationStepsMaxValue", PyvtkSliderWidget_GetNumberOfAnimationStepsMaxValue, METH_VARARGS,
   "V.GetNumberOfAnimationStepsMaxValue() -> int\nC++: virtual int GetNumberOfAnimationStepsMaxValue()\n\nSpecify the number of animation steps to take if the animation\nmode is set to animate.\n"},
  {"GetNumberOfAnimationSteps", PyvtkSliderWidget_GetNumberOfAnimationSteps, METH_VARARGS,
   "V.GetNumberOfAnimationSteps() -> int\nC++: virtual int GetNumberOfAnimationSteps()\n\nSpecify the number of animation steps to take if the animation\nmode is set to animate.\n"},
  {"CreateDefaultRepresentation", PyvtkSliderWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSliderWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkSliderWidget", // tp_name
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
  PyvtkSliderWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSliderWidget_StaticNew()
{
  return vtkSliderWidget::New();
}

PyObject *PyvtkSliderWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSliderWidget_Type, PyvtkSliderWidget_Methods,
    "vtkSliderWidget",
 &PyvtkSliderWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkSliderWidget_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSliderWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSliderWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSliderWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

