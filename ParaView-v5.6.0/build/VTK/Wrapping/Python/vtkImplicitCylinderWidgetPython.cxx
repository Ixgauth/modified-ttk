// python wrapper for vtkImplicitCylinderWidget
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
#include "vtkImplicitCylinderWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitCylinderWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImplicitCylinderWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkImplicitCylinderWidget_Doc =
  "vtkImplicitCylinderWidget - 3D widget for manipulating an infinite\ncylinder\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This 3D widget defines an infinite cylinder that can be interactively\n"
  "placed in a scene. The widget is assumed to consist of four parts: 1)\n"
  "a cylinder contained in a 2) bounding box, with a\n"
  "3) cylinder axis, which is rooted at a 4) center point in the\n"
  "   bounding box. (The representation paired with this widget\n"
  "   determines the actual geometry of the widget.)\n\n"
  "To use this widget, you generally pair it with a\n"
  "vtkImplicitCylinderRepresentation (or a subclass). Various options\n"
  "are available for controlling how the representation appears, and how\n"
  "the widget functions.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If the cylinder axis is selected:\n"
  "  LeftButtonPressEvent - select normal\n"
  "  LeftButtonReleaseEvent - release (end select) normal\n"
  "  MouseMoveEvent - orient the normal vector If the center point\n"
  "(handle) is selected:\n"
  "  LeftButtonPressEvent - select handle (if on slider)\n"
  "  LeftButtonReleaseEvent - release handle (if selected)\n"
  "  MouseMoveEvent - move the center point (constrained to plane or on\n"
  "the\n"
  "                   axis if CTRL key is pressed) If the cylinder is\n"
  "selected:\n"
  "  LeftButtonPressEvent - select cylinder\n"
  "  LeftButtonReleaseEvent - release cylinder\n"
  "  MouseMoveEvent - increase/decrease cylinder radius If the outline\n"
  "is selected:\n"
  "  LeftButtonPressEvent - select outline\n"
  "  LeftButtonReleaseEvent - release outline\n"
  "  MouseMoveEvent - move the outline If the keypress characters are\n"
  "used\n"
  "  'Down/Left' Move cylinder away from viewer\n"
  "  'Up/Right' Move cylinder towards viewer In all the cases,\n"
  "independent of what is picked, the widget responds to the following\n"
  "VTK events:\n"
  "  MiddleButtonPressEvent - move the cylinder\n"
  "  MiddleButtonReleaseEvent - release the cylinder\n"
  "  RightButtonPressEvent - scale the widget's representation\n"
  "  RightButtonReleaseEvent - stop scaling the widget\n"
  "  MouseMoveEvent - scale (if right button) or move (if middle button)\n"
  "the widget \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkImplicitCylinderWidget's widget\n"
  "events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for widget motion has been\n"
  "invoked\n"
  "  vtkWidgetEvent::Up and vtkWidgetEvent::Down -- MoveCylinderAction \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkImplicitCylinderWidget invokes the following VTK events on\n"
  "itself (which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@sa\n"
  "vtk3DWidget vtkImplicitPlaneWidget\n\n";


static PyObject *
PyvtkImplicitCylinderWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitCylinderWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderWidget *op = static_cast<vtkImplicitCylinderWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitCylinderWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitCylinderWidget *tempr = vtkImplicitCylinderWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderWidget *op = static_cast<vtkImplicitCylinderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitCylinderWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitCylinderWidget::NewInstance());

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
PyvtkImplicitCylinderWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderWidget *op = static_cast<vtkImplicitCylinderWidget *>(vp);

  vtkImplicitCylinderRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitCylinderRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkImplicitCylinderWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderWidget *op = static_cast<vtkImplicitCylinderWidget *>(vp);

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
      op->vtkImplicitCylinderWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderWidget_GetCylinderRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderWidget *op = static_cast<vtkImplicitCylinderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitCylinderRepresentation *tempr = (ap.IsBound() ?
      op->GetCylinderRepresentation() :
      op->vtkImplicitCylinderWidget::GetCylinderRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderWidget *op = static_cast<vtkImplicitCylinderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkImplicitCylinderWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitCylinderWidget_Methods[] = {
  {"IsTypeOf", PyvtkImplicitCylinderWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard vtkObject methods\n"},
  {"IsA", PyvtkImplicitCylinderWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard vtkObject methods\n"},
  {"SafeDownCast", PyvtkImplicitCylinderWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImplicitCylinderWidget\nC++: static vtkImplicitCylinderWidget *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard vtkObject methods\n"},
  {"NewInstance", PyvtkImplicitCylinderWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImplicitCylinderWidget\nC++: vtkImplicitCylinderWidget *NewInstance()\n\nStandard vtkObject methods\n"},
  {"SetRepresentation", PyvtkImplicitCylinderWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkImplicitCylinderRepresentation)\nC++: void SetRepresentation(\n    vtkImplicitCylinderRepresentation *rep)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"SetEnabled", PyvtkImplicitCylinderWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int enabling) override;\n\nDisable/Enable the widget if needed. Unobserved the camera if the\nwidget is disabled.\n"},
  {"GetCylinderRepresentation", PyvtkImplicitCylinderWidget_GetCylinderRepresentation, METH_VARARGS,
   "V.GetCylinderRepresentation() -> vtkImplicitCylinderRepresentation\nC++: vtkImplicitCylinderRepresentation *GetCylinderRepresentation(\n    )\n\nReturn the representation as a vtkImplicitCylinderRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkImplicitCylinderWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImplicitCylinderWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkImplicitCylinderWidget", // tp_name
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
  PyvtkImplicitCylinderWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitCylinderWidget_StaticNew()
{
  return vtkImplicitCylinderWidget::New();
}

PyObject *PyvtkImplicitCylinderWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImplicitCylinderWidget_Type, PyvtkImplicitCylinderWidget_Methods,
    "vtkImplicitCylinderWidget",
 &PyvtkImplicitCylinderWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkImplicitCylinderWidget_Type;

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

void PyVTKAddFile_vtkImplicitCylinderWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitCylinderWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitCylinderWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

