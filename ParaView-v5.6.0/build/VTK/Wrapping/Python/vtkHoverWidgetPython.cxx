// python wrapper for vtkHoverWidget
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
#include "vtkHoverWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHoverWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHoverWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkHoverWidget_Doc =
  "vtkHoverWidget - invoke a vtkTimerEvent when hovering\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkHoverWidget is used to invoke an event when hovering in a\n"
  "render window. Hovering occurs when mouse motion (in the render\n"
  "window) does not occur for a specified amount of time (i.e.,\n"
  "TimerDuration). This class can be used as is (by observing\n"
  "TimerEvents) or for class derivation for those classes wishing to do\n"
  "more with the hover event.\n\n"
  "To use this widget, specify an instance of vtkHoverWidget and specify\n"
  "the time (in milliseconds) defining the hover period. Unlike most\n"
  "widgets, this widget does not require a representation (although\n"
  "subclasses like vtkBalloonWidget do require a representation).\n\n"
  "@par Event Bindings: By default, the widget observes the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n\n"
  "  MouseMoveEvent - manages a timer used to determine whether the\n"
  "mouse\n"
  "                   is hovering.\n"
  "  TimerEvent - when the time between events (e.g., mouse move), then\n"
  "a\n"
  "               timer event is invoked.\n"
  "  KeyPressEvent - when the \"Enter\" key is pressed after the balloon\n"
  "appears,\n"
  "                  a callback is activated (e.g.,\n"
  "WidgetActivateEvent). \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkHoverWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Move -- start (or reset) the timer\n"
  "  vtkWidgetEvent::TimedOut -- when enough time is elapsed between\n"
  "defined\n"
  "                              VTK events the hover event is invoked.\n"
  "  vtkWidgetEvent::SelectAction -- activate any callbacks associated\n"
  "                                  with the balloon. \n\n"
  "@par Event Bindings: This widget invokes the following VTK events on\n"
  "itself when the widget determines that it is hovering. Note that\n"
  "observers of this widget can listen for these events and take\n"
  "appropriate action.\n\n\n"
  "  vtkCommand::TimerEvent (when hovering is determined to occur)\n"
  "  vtkCommand::EndInteractionEvent (after a hover has occurred and the\n"
  "                                   mouse begins moving again).\n"
  "  vtkCommand::WidgetActivateEvent (when the balloon is selected with\n"
  "a\n"
  "                                   keypress). \n\n"
  "@sa\n"
  "vtkAbstractWidget\n\n";


static PyObject *
PyvtkHoverWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHoverWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHoverWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHoverWidget *tempr = vtkHoverWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHoverWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHoverWidget::NewInstance());

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
PyvtkHoverWidget_SetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimerDuration(temp0);
    }
    else
    {
      op->vtkHoverWidget::SetTimerDuration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_GetTimerDurationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerDurationMinValue() :
      op->vtkHoverWidget::GetTimerDurationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_GetTimerDurationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerDurationMaxValue() :
      op->vtkHoverWidget::GetTimerDurationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_GetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerDuration() :
      op->vtkHoverWidget::GetTimerDuration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

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
      op->vtkHoverWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkHoverWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHoverWidget_Methods[] = {
  {"IsTypeOf", PyvtkHoverWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for a VTK class.\n"},
  {"IsA", PyvtkHoverWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for a VTK class.\n"},
  {"SafeDownCast", PyvtkHoverWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHoverWidget\nC++: static vtkHoverWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for a VTK class.\n"},
  {"NewInstance", PyvtkHoverWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHoverWidget\nC++: vtkHoverWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {"SetTimerDuration", PyvtkHoverWidget_SetTimerDuration, METH_VARARGS,
   "V.SetTimerDuration(int)\nC++: virtual void SetTimerDuration(int _arg)\n\nSpecify the hovering interval (in milliseconds). If after moving\nthe mouse the pointer stays over a vtkProp for this duration,\nthen a vtkTimerEvent::TimerEvent is invoked.\n"},
  {"GetTimerDurationMinValue", PyvtkHoverWidget_GetTimerDurationMinValue, METH_VARARGS,
   "V.GetTimerDurationMinValue() -> int\nC++: virtual int GetTimerDurationMinValue()\n\nSpecify the hovering interval (in milliseconds). If after moving\nthe mouse the pointer stays over a vtkProp for this duration,\nthen a vtkTimerEvent::TimerEvent is invoked.\n"},
  {"GetTimerDurationMaxValue", PyvtkHoverWidget_GetTimerDurationMaxValue, METH_VARARGS,
   "V.GetTimerDurationMaxValue() -> int\nC++: virtual int GetTimerDurationMaxValue()\n\nSpecify the hovering interval (in milliseconds). If after moving\nthe mouse the pointer stays over a vtkProp for this duration,\nthen a vtkTimerEvent::TimerEvent is invoked.\n"},
  {"GetTimerDuration", PyvtkHoverWidget_GetTimerDuration, METH_VARARGS,
   "V.GetTimerDuration() -> int\nC++: virtual int GetTimerDuration()\n\nSpecify the hovering interval (in milliseconds). If after moving\nthe mouse the pointer stays over a vtkProp for this duration,\nthen a vtkTimerEvent::TimerEvent is invoked.\n"},
  {"SetEnabled", PyvtkHoverWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it performs special\ntimer-related operations.\n"},
  {"CreateDefaultRepresentation", PyvtkHoverWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nA default representation, of which there is none, is created.\nNote that the superclasses vtkAbstractWidget::GetRepresentation()\nmethod returns nullptr.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHoverWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkHoverWidget", // tp_name
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
  PyvtkHoverWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHoverWidget_StaticNew()
{
  return vtkHoverWidget::New();
}

PyObject *PyvtkHoverWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHoverWidget_Type, PyvtkHoverWidget_Methods,
    "vtkHoverWidget",
 &PyvtkHoverWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkHoverWidget_Type;

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

void PyVTKAddFile_vtkHoverWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHoverWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHoverWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

