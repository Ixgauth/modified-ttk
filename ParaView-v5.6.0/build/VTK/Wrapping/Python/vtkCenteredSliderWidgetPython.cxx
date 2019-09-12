// python wrapper for vtkCenteredSliderWidget
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
#include "vtkCenteredSliderWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCenteredSliderWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCenteredSliderWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkCenteredSliderWidget_Doc =
  "vtkCenteredSliderWidget - set a value by manipulating a slider\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkCenteredSliderWidget is used to adjust a scalar value in an\n"
  "application. This class measures deviations form the center point on\n"
  "the slider. Moving the slider modifies the value of the widget, which\n"
  "can be used to set parameters on other objects. Note that the actual\n"
  "appearance of the widget depends on the specific representation for\n"
  "the widget.\n\n"
  "To use this widget, set the widget representation. The representation\n"
  "is assumed to consist of a tube, two end caps, and a slider (the\n"
  "details may vary depending on the particulars of the representation).\n"
  "Then in the representation you will typically set minimum and maximum\n"
  "value, as well as the current value. The position of the slider must\n"
  "also be set, as well as various properties.\n\n"
  "Note that the value should be obtain from the widget, not from the\n"
  "representation. Also note that Minimum and Maximum values are in\n"
  "terms of value per second. The value you get from this widget's\n"
  "GetValue method is multiplied by time.\n\n"
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
  "translates VTK events into the vtkCenteredSliderWidget's widget\n"
  "events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for slider motion has been\n"
  "invoked \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkCenteredSliderWidget invokes the following VTK events on\n"
  "itself (which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n";


static PyObject *
PyvtkCenteredSliderWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCenteredSliderWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCenteredSliderWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenteredSliderWidget *op = static_cast<vtkCenteredSliderWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCenteredSliderWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCenteredSliderWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCenteredSliderWidget *tempr = vtkCenteredSliderWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCenteredSliderWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenteredSliderWidget *op = static_cast<vtkCenteredSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCenteredSliderWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCenteredSliderWidget::NewInstance());

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
PyvtkCenteredSliderWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenteredSliderWidget *op = static_cast<vtkCenteredSliderWidget *>(vp);

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
      op->vtkCenteredSliderWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCenteredSliderWidget_GetSliderRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenteredSliderWidget *op = static_cast<vtkCenteredSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliderRepresentation *tempr = (ap.IsBound() ?
      op->GetSliderRepresentation() :
      op->vtkCenteredSliderWidget::GetSliderRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCenteredSliderWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenteredSliderWidget *op = static_cast<vtkCenteredSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkCenteredSliderWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCenteredSliderWidget_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCenteredSliderWidget *op = static_cast<vtkCenteredSliderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkCenteredSliderWidget::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCenteredSliderWidget_Methods[] = {
  {"IsTypeOf", PyvtkCenteredSliderWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard macros.\n"},
  {"IsA", PyvtkCenteredSliderWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard macros.\n"},
  {"SafeDownCast", PyvtkCenteredSliderWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCenteredSliderWidget\nC++: static vtkCenteredSliderWidget *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard macros.\n"},
  {"NewInstance", PyvtkCenteredSliderWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCenteredSliderWidget\nC++: vtkCenteredSliderWidget *NewInstance()\n\nStandard macros.\n"},
  {"SetRepresentation", PyvtkCenteredSliderWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkSliderRepresentation)\nC++: void SetRepresentation(vtkSliderRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetSliderRepresentation", PyvtkCenteredSliderWidget_GetSliderRepresentation, METH_VARARGS,
   "V.GetSliderRepresentation() -> vtkSliderRepresentation\nC++: vtkSliderRepresentation *GetSliderRepresentation()\n\nReturn the representation as a vtkSliderRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkCenteredSliderWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"GetValue", PyvtkCenteredSliderWidget_GetValue, METH_VARARGS,
   "V.GetValue() -> float\nC++: double GetValue()\n\nGet the value fo this widget.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCenteredSliderWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkCenteredSliderWidget", // tp_name
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
  PyvtkCenteredSliderWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCenteredSliderWidget_StaticNew()
{
  return vtkCenteredSliderWidget::New();
}

PyObject *PyvtkCenteredSliderWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCenteredSliderWidget_Type, PyvtkCenteredSliderWidget_Methods,
    "vtkCenteredSliderWidget",
 &PyvtkCenteredSliderWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkCenteredSliderWidget_Type;

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

void PyVTKAddFile_vtkCenteredSliderWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCenteredSliderWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCenteredSliderWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

