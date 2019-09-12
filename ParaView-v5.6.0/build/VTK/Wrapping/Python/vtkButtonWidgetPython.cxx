// python wrapper for vtkButtonWidget
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
#include "vtkButtonWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkButtonWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkButtonWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkButtonWidget_Doc =
  "vtkButtonWidget - activate an n-state button\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkButtonWidget is used to interface with an n-state button. That\n"
  "is each selection moves to the next button state (e.g., moves from\n"
  "\"on\" to \"off\"). The widget uses modulo list traversal to transition\n"
  "through one or more states. (A single state is simply a \"selection\"\n"
  "event; traversal through the list can be in the forward or backward\n"
  "direction.)\n\n"
  "Depending on the nature of the representation the appearance of the\n"
  "button can change dramatically, the specifics of appearance changes\n"
  "are a function of the associated vtkButtonRepresentation (or\n"
  "subclass).\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n\n"
  "  LeftButtonPressEvent - select button\n"
  "  LeftButtonReleaseEvent - end the button selection process \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkButtonWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkButtonWidget invokes the following VTK events on itself (which\n"
  "observers can listen for):\n\n\n"
  "  vtkCommand::StateChangedEvent (on vtkWidgetEvent::EndSelect) \n\n";


static PyObject *
PyvtkButtonWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkButtonWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonWidget *op = static_cast<vtkButtonWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkButtonWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkButtonWidget *tempr = vtkButtonWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonWidget *op = static_cast<vtkButtonWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkButtonWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkButtonWidget::NewInstance());

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
PyvtkButtonWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonWidget *op = static_cast<vtkButtonWidget *>(vp);

  vtkButtonRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkButtonRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkButtonWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonWidget_GetSliderRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonWidget *op = static_cast<vtkButtonWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkButtonRepresentation *tempr = (ap.IsBound() ?
      op->GetSliderRepresentation() :
      op->vtkButtonWidget::GetSliderRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonWidget *op = static_cast<vtkButtonWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkButtonWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonWidget *op = static_cast<vtkButtonWidget *>(vp);

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
      op->vtkButtonWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkButtonWidget_Methods[] = {
  {"IsTypeOf", PyvtkButtonWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard macros.\n"},
  {"IsA", PyvtkButtonWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard macros.\n"},
  {"SafeDownCast", PyvtkButtonWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkButtonWidget\nC++: static vtkButtonWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard macros.\n"},
  {"NewInstance", PyvtkButtonWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkButtonWidget\nC++: vtkButtonWidget *NewInstance()\n\nStandard macros.\n"},
  {"SetRepresentation", PyvtkButtonWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkButtonRepresentation)\nC++: void SetRepresentation(vtkButtonRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetSliderRepresentation", PyvtkButtonWidget_GetSliderRepresentation, METH_VARARGS,
   "V.GetSliderRepresentation() -> vtkButtonRepresentation\nC++: vtkButtonRepresentation *GetSliderRepresentation()\n\nReturn the representation as a vtkButtonRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkButtonWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"SetEnabled", PyvtkButtonWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it is a composite widget and\ndoes more than its superclasses' vtkAbstractWidget::SetEnabled()\nmethod. The method finds and sets the active viewport on the\ninternal balloon representation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkButtonWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkButtonWidget", // tp_name
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
  PyvtkButtonWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkButtonWidget_StaticNew()
{
  return vtkButtonWidget::New();
}

PyObject *PyvtkButtonWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkButtonWidget_Type, PyvtkButtonWidget_Methods,
    "vtkButtonWidget",
 &PyvtkButtonWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkButtonWidget_Type;

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

void PyVTKAddFile_vtkButtonWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkButtonWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkButtonWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

