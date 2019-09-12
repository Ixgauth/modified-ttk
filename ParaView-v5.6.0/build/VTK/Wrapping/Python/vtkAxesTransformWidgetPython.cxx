// python wrapper for vtkAxesTransformWidget
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
#include "vtkAxesTransformWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAxesTransformWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAxesTransformWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkAxesTransformWidget_Doc =
  "vtkAxesTransformWidget - 3D widget for performing 3D transformations\naround an axes\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This 3D widget defines an axes which is used to guide transformation.\n"
  "The widget can translate, scale, and rotate around one of the three\n"
  "coordinate axes. The widget consists of a handle at the origin (used\n"
  "for translation), three axes (around which rotations occur), and\n"
  "three end arrows (or cones depending on the representation) that can\n"
  "be stretched to scale an object.  Optionally a text label can be used\n"
  "to indicate the amount of the transformation.\n\n"
  "To use this widget, you generally pair it with a\n"
  "vtkAxesTransformRepresentation (or a subclass). Various options are\n"
  "available in the representation for controlling how the widget\n"
  "appears, and how the widget functions.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If the origin handle is selected:\n"
  "  LeftButtonPressEvent - activate the associated handle widget\n"
  "  LeftButtonReleaseEvent - release the handle widget associated with\n"
  "the point\n"
  "  MouseMoveEvent - move the handle and hence the origin and the\n"
  "widget If one of the lines is selected:\n"
  "  LeftButtonPressEvent - activate rotation by selecting one of the\n"
  "three axes.\n"
  "  LeftButtonReleaseEvent - end rotation\n"
  "  MouseMoveEvent - moving along the selected axis causes rotation to\n"
  "occur. If one of the arrows/cones is selected:\n"
  "  LeftButtonPressEvent - activate scaling by selecting the ends of\n"
  "one of the three axes.\n"
  "  LeftButtonReleaseEvent - end scaling\n"
  "  MouseMoveEvent - moving along the selected axis causes scaling to\n"
  "occur. \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkAxesTransformWidget's widget\n"
  "events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for slider motion has been\n"
  "invoked \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkAxesTransformWidget invokes the following VTK events on itself\n"
  "(which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@warning\n"
  "Note that the widget can be picked even when it is \"behind\" other\n"
  "actors.  This is an intended feature and not a bug.\n\n"
  "@warning\n"
  "This class, and vtkAxesTransformRepresentation, are next generation\n"
  "VTK widgets.\n\n"
  "@sa\n"
  "vtkAxesTransformRepresentation vtkAffineWidget vtkBoxWidget2\n\n";


static PyObject *
PyvtkAxesTransformWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAxesTransformWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxesTransformWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAxesTransformWidget *tempr = vtkAxesTransformWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxesTransformWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxesTransformWidget::NewInstance());

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
PyvtkAxesTransformWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

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
      op->vtkAxesTransformWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

  vtkAxesTransformRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAxesTransformRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkAxesTransformWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_GetLineRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxesTransformRepresentation *tempr = (ap.IsBound() ?
      op->GetLineRepresentation() :
      op->vtkAxesTransformWidget::GetLineRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkAxesTransformWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesTransformWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesTransformWidget *op = static_cast<vtkAxesTransformWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessEvents(temp0);
    }
    else
    {
      op->vtkAxesTransformWidget::SetProcessEvents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAxesTransformWidget_Methods[] = {
  {"IsTypeOf", PyvtkAxesTransformWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard vtkObject methods\n"},
  {"IsA", PyvtkAxesTransformWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard vtkObject methods\n"},
  {"SafeDownCast", PyvtkAxesTransformWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAxesTransformWidget\nC++: static vtkAxesTransformWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard vtkObject methods\n"},
  {"NewInstance", PyvtkAxesTransformWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAxesTransformWidget\nC++: vtkAxesTransformWidget *NewInstance()\n\nStandard vtkObject methods\n"},
  {"SetEnabled", PyvtkAxesTransformWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int enabling) override;\n\nOverride superclasses' SetEnabled() method because the line\nwidget must enable its internal handle widgets.\n"},
  {"SetRepresentation", PyvtkAxesTransformWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkAxesTransformRepresentation)\nC++: void SetRepresentation(vtkAxesTransformRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetLineRepresentation", PyvtkAxesTransformWidget_GetLineRepresentation, METH_VARARGS,
   "V.GetLineRepresentation() -> vtkAxesTransformRepresentation\nC++: vtkAxesTransformRepresentation *GetLineRepresentation()\n\nReturn the representation as a vtkAxesTransformRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkAxesTransformWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"SetProcessEvents", PyvtkAxesTransformWidget_SetProcessEvents, METH_VARARGS,
   "V.SetProcessEvents(int)\nC++: void SetProcessEvents(vtkTypeBool) override;\n\nMethods to change the whether the widget responds to interaction.\nOverridden to pass the state to component widgets.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAxesTransformWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkAxesTransformWidget", // tp_name
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
  PyvtkAxesTransformWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAxesTransformWidget_StaticNew()
{
  return vtkAxesTransformWidget::New();
}

PyObject *PyvtkAxesTransformWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAxesTransformWidget_Type, PyvtkAxesTransformWidget_Methods,
    "vtkAxesTransformWidget",
 &PyvtkAxesTransformWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkAxesTransformWidget_Type;

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

void PyVTKAddFile_vtkAxesTransformWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAxesTransformWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAxesTransformWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

