// python wrapper for vtkFinitePlaneWidget
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
#include "vtkFinitePlaneWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFinitePlaneWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFinitePlaneWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkFinitePlaneWidget_Doc =
  "vtkFinitePlaneWidget - 3D widget for manipulating a finite plane\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This 3D widget interacts with a vtkFinitePlaneRepresentation class\n"
  "(i.e., it handles the events that drive its corresponding\n"
  "representation). This 3D widget defines a finite plane that can be\n"
  "interactively placed in a scene. The widget is assumed to consist of\n"
  "four parts: 1) a plane with 2) a normal and 3) three handles that can\n"
  "be moused on and manipulated. The green and red handles represent the\n"
  "semi finite plane definition, the third is in the center of the\n"
  "plane. Operation like rotation of the plane (using normal), origin\n"
  "translation and geometry plane modification using green and red\n"
  "handles are availables.\n\n"
  "To use this widget, you generally pair it with a\n"
  "vtkFinitePlaneRepresentation (or a subclass). Various options are\n"
  "available in the representation for controlling how the widget\n"
  "appears, and how the widget reacts.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If one of the 3 handles are selected:\n"
  "  LeftButtonPressEvent - select the appropriate handle\n"
  "  LeftButtonReleaseEvent - release the currently selected handle\n"
  "  MouseMoveEvent - move the handle In all the cases, independent of\n"
  "what is picked, the widget responds to the following VTK events:\n"
  "  LeftButtonPressEvent - start select action\n"
  "  LeftButtonReleaseEvent - stop select action \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkFinitePlaneWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for motion has been invoked \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkFinitePlaneWidget invokes the following VTK events on itself\n"
  "(which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n"
  "@sa\n"
  "vtkFinitePlaneRepresentation\n\n";


static PyObject *
PyvtkFinitePlaneWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFinitePlaneWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneWidget *op = static_cast<vtkFinitePlaneWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFinitePlaneWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFinitePlaneWidget *tempr = vtkFinitePlaneWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneWidget *op = static_cast<vtkFinitePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFinitePlaneWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFinitePlaneWidget::NewInstance());

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
PyvtkFinitePlaneWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneWidget *op = static_cast<vtkFinitePlaneWidget *>(vp);

  vtkFinitePlaneRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFinitePlaneRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkFinitePlaneWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneWidget *op = static_cast<vtkFinitePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkFinitePlaneWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFinitePlaneWidget_Methods[] = {
  {"IsTypeOf", PyvtkFinitePlaneWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard vtkObject methods\n"},
  {"IsA", PyvtkFinitePlaneWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard vtkObject methods\n"},
  {"SafeDownCast", PyvtkFinitePlaneWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFinitePlaneWidget\nC++: static vtkFinitePlaneWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard vtkObject methods\n"},
  {"NewInstance", PyvtkFinitePlaneWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFinitePlaneWidget\nC++: vtkFinitePlaneWidget *NewInstance()\n\nStandard vtkObject methods\n"},
  {"SetRepresentation", PyvtkFinitePlaneWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkFinitePlaneRepresentation)\nC++: void SetRepresentation(vtkFinitePlaneRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"CreateDefaultRepresentation", PyvtkFinitePlaneWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set. By\ndefault, this is an instance of the vtkFinitePlaneRepresentation\nclass.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFinitePlaneWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkFinitePlaneWidget", // tp_name
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
  PyvtkFinitePlaneWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFinitePlaneWidget_StaticNew()
{
  return vtkFinitePlaneWidget::New();
}

PyObject *PyvtkFinitePlaneWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFinitePlaneWidget_Type, PyvtkFinitePlaneWidget_Methods,
    "vtkFinitePlaneWidget",
 &PyvtkFinitePlaneWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkFinitePlaneWidget_Type;

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

void PyVTKAddFile_vtkFinitePlaneWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFinitePlaneWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFinitePlaneWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

