// python wrapper for vtkContinuousValueWidget
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
#include "vtkContinuousValueWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContinuousValueWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkContinuousValueWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkContinuousValueWidget_Doc =
  "vtkContinuousValueWidget - set a value by manipulating something\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkContinuousValueWidget is used to adjust a scalar value in an\n"
  "application. Note that the actual appearance of the widget depends on\n"
  "the specific representation for the widget.\n\n"
  "To use this widget, set the widget representation. (the details may\n"
  "vary depending on the particulars of the representation).\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If the slider bead is selected:\n"
  "  LeftButtonPressEvent - select slider\n"
  "  LeftButtonReleaseEvent - release slider\n"
  "  MouseMoveEvent - move slider \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkContinuousValueWidget's widget\n"
  "events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for slider motion has been\n"
  "invoked \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkContinuousValueWidget invokes the following VTK events on\n"
  "itself (which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n";


static PyObject *
PyvtkContinuousValueWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContinuousValueWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousValueWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidget *op = static_cast<vtkContinuousValueWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContinuousValueWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousValueWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContinuousValueWidget *tempr = vtkContinuousValueWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousValueWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidget *op = static_cast<vtkContinuousValueWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContinuousValueWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContinuousValueWidget::NewInstance());

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
PyvtkContinuousValueWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidget *op = static_cast<vtkContinuousValueWidget *>(vp);

  vtkContinuousValueWidgetRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContinuousValueWidgetRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkContinuousValueWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousValueWidget_GetContinuousValueWidgetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContinuousValueWidgetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidget *op = static_cast<vtkContinuousValueWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContinuousValueWidgetRepresentation *tempr = (ap.IsBound() ?
      op->GetContinuousValueWidgetRepresentation() :
      op->vtkContinuousValueWidget::GetContinuousValueWidgetRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousValueWidget_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidget *op = static_cast<vtkContinuousValueWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkContinuousValueWidget::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousValueWidget_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousValueWidget *op = static_cast<vtkContinuousValueWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0);
    }
    else
    {
      op->vtkContinuousValueWidget::SetValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContinuousValueWidget_Methods[] = {
  {"IsTypeOf", PyvtkContinuousValueWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard macros.\n"},
  {"IsA", PyvtkContinuousValueWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard macros.\n"},
  {"SafeDownCast", PyvtkContinuousValueWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkContinuousValueWidget\nC++: static vtkContinuousValueWidget *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard macros.\n"},
  {"NewInstance", PyvtkContinuousValueWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkContinuousValueWidget\nC++: vtkContinuousValueWidget *NewInstance()\n\nStandard macros.\n"},
  {"SetRepresentation", PyvtkContinuousValueWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkContinuousValueWidgetRepresentation)\nC++: void SetRepresentation(\n    vtkContinuousValueWidgetRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetContinuousValueWidgetRepresentation", PyvtkContinuousValueWidget_GetContinuousValueWidgetRepresentation, METH_VARARGS,
   "V.GetContinuousValueWidgetRepresentation()\n    -> vtkContinuousValueWidgetRepresentation\nC++: vtkContinuousValueWidgetRepresentation *GetContinuousValueWidgetRepresentation(\n    )\n\nReturn the representation as a\nvtkContinuousValueWidgetRepresentation.\n"},
  {"GetValue", PyvtkContinuousValueWidget_GetValue, METH_VARARGS,
   "V.GetValue() -> float\nC++: double GetValue()\n\nGet the value for this widget.\n"},
  {"SetValue", PyvtkContinuousValueWidget_SetValue, METH_VARARGS,
   "V.SetValue(float)\nC++: void SetValue(double v)\n\nGet the value for this widget.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkContinuousValueWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkContinuousValueWidget", // tp_name
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
  PyvtkContinuousValueWidget_Doc, // tp_doc
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

PyObject *PyvtkContinuousValueWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkContinuousValueWidget_Type, PyvtkContinuousValueWidget_Methods,
    "vtkContinuousValueWidget",
 nullptr);

  PyTypeObject *pytype = &PyvtkContinuousValueWidget_Type;

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

void PyVTKAddFile_vtkContinuousValueWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContinuousValueWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContinuousValueWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

