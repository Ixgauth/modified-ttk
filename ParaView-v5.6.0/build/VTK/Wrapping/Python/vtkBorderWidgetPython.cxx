// python wrapper for vtkBorderWidget
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
#include "vtkBorderWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBorderWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBorderWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkBorderWidget_Doc =
  "vtkBorderWidget - place a border around a 2D rectangular region\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This class is a superclass for 2D widgets that may require a\n"
  "rectangular border. Besides drawing a border, the widget provides\n"
  "methods for resizing and moving the rectangular region (and\n"
  "associated border). The widget provides methods and internal data\n"
  "members so that subclasses can take advantage of this widgets\n"
  "capabilities, requiring only that the subclass defines a\n"
  "\"representation\", i.e., some combination of props or actors that can\n"
  "be managed in the 2D rectangular region.\n\n"
  "The class defines basic positioning functionality, including the\n"
  "ability to size the widget with locked x/y proportions. The area\n"
  "within the border may be made \"selectable\" as well, meaning that a\n"
  "selection event interior to the widget invokes a virtual\n"
  "SelectRegion() method, which can be used to pick objects or otherwise\n"
  "manipulate data interior to the widget.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "On the boundary of the widget:\n"
  "  LeftButtonPressEvent - select boundary\n"
  "  LeftButtonReleaseEvent - deselect boundary\n"
  "  MouseMoveEvent - move/resize widget depending on which portion of\n"
  "the\n"
  "                   boundary was selected. On the interior of the\n"
  "widget:\n"
  "  LeftButtonPressEvent - invoke SelectButton() callback (if the ivar\n"
  "                         Selectable is on) Anywhere on the widget:\n"
  "  MiddleButtonPressEvent - move the widget \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkBorderWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Translate -- the widget is to be translated\n"
  "  vtkWidgetEvent::Move -- a request for slider motion has been\n"
  "invoked \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "this widget invokes the following VTK events on itself (which\n"
  "observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@sa\n"
  "vtkInteractorObserver vtkCameraInterpolator\n\n";


static PyObject *
PyvtkBorderWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBorderWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBorderWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBorderWidget *tempr = vtkBorderWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBorderWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBorderWidget::NewInstance());

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
PyvtkBorderWidget_SetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectable(temp0);
    }
    else
    {
      op->vtkBorderWidget::SetSelectable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_GetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectable() :
      op->vtkBorderWidget::GetSelectable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_SelectableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectableOn();
    }
    else
    {
      op->vtkBorderWidget::SelectableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_SelectableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectableOff();
    }
    else
    {
      op->vtkBorderWidget::SelectableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_SetResizable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResizable(temp0);
    }
    else
    {
      op->vtkBorderWidget::SetResizable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_GetResizable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResizable() :
      op->vtkBorderWidget::GetResizable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_ResizableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResizableOn();
    }
    else
    {
      op->vtkBorderWidget::ResizableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_ResizableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResizableOff();
    }
    else
    {
      op->vtkBorderWidget::ResizableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  vtkBorderRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBorderRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkBorderWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_GetBorderRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBorderRepresentation *tempr = (ap.IsBound() ?
      op->GetBorderRepresentation() :
      op->vtkBorderWidget::GetBorderRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkBorderWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBorderWidget_Methods[] = {
  {"IsTypeOf", PyvtkBorderWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for class.\n"},
  {"IsA", PyvtkBorderWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for class.\n"},
  {"SafeDownCast", PyvtkBorderWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBorderWidget\nC++: static vtkBorderWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for class.\n"},
  {"NewInstance", PyvtkBorderWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBorderWidget\nC++: vtkBorderWidget *NewInstance()\n\nStandard methods for class.\n"},
  {"SetSelectable", PyvtkBorderWidget_SetSelectable, METH_VARARGS,
   "V.SetSelectable(int)\nC++: virtual void SetSelectable(vtkTypeBool _arg)\n\nIndicate whether the interior region of the widget can be\nselected or not. If not, then events (such as left mouse down)\nallow the user to \"move\" the widget, and no selection is\npossible. Otherwise the SelectRegion() method is invoked.\n"},
  {"GetSelectable", PyvtkBorderWidget_GetSelectable, METH_VARARGS,
   "V.GetSelectable() -> int\nC++: virtual vtkTypeBool GetSelectable()\n\nIndicate whether the interior region of the widget can be\nselected or not. If not, then events (such as left mouse down)\nallow the user to \"move\" the widget, and no selection is\npossible. Otherwise the SelectRegion() method is invoked.\n"},
  {"SelectableOn", PyvtkBorderWidget_SelectableOn, METH_VARARGS,
   "V.SelectableOn()\nC++: virtual void SelectableOn()\n\nIndicate whether the interior region of the widget can be\nselected or not. If not, then events (such as left mouse down)\nallow the user to \"move\" the widget, and no selection is\npossible. Otherwise the SelectRegion() method is invoked.\n"},
  {"SelectableOff", PyvtkBorderWidget_SelectableOff, METH_VARARGS,
   "V.SelectableOff()\nC++: virtual void SelectableOff()\n\nIndicate whether the interior region of the widget can be\nselected or not. If not, then events (such as left mouse down)\nallow the user to \"move\" the widget, and no selection is\npossible. Otherwise the SelectRegion() method is invoked.\n"},
  {"SetResizable", PyvtkBorderWidget_SetResizable, METH_VARARGS,
   "V.SetResizable(int)\nC++: virtual void SetResizable(vtkTypeBool _arg)\n\nIndicate whether the boundary of the widget can be resized. If\nnot, the cursor will not change to \"resize\" type when mouse over\nthe boundary.\n"},
  {"GetResizable", PyvtkBorderWidget_GetResizable, METH_VARARGS,
   "V.GetResizable() -> int\nC++: virtual vtkTypeBool GetResizable()\n\nIndicate whether the boundary of the widget can be resized. If\nnot, the cursor will not change to \"resize\" type when mouse over\nthe boundary.\n"},
  {"ResizableOn", PyvtkBorderWidget_ResizableOn, METH_VARARGS,
   "V.ResizableOn()\nC++: virtual void ResizableOn()\n\nIndicate whether the boundary of the widget can be resized. If\nnot, the cursor will not change to \"resize\" type when mouse over\nthe boundary.\n"},
  {"ResizableOff", PyvtkBorderWidget_ResizableOff, METH_VARARGS,
   "V.ResizableOff()\nC++: virtual void ResizableOff()\n\nIndicate whether the boundary of the widget can be resized. If\nnot, the cursor will not change to \"resize\" type when mouse over\nthe boundary.\n"},
  {"SetRepresentation", PyvtkBorderWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkBorderRepresentation)\nC++: void SetRepresentation(vtkBorderRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetBorderRepresentation", PyvtkBorderWidget_GetBorderRepresentation, METH_VARARGS,
   "V.GetBorderRepresentation() -> vtkBorderRepresentation\nC++: vtkBorderRepresentation *GetBorderRepresentation()\n\nReturn the representation as a vtkBorderRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkBorderWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBorderWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkBorderWidget", // tp_name
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
  PyvtkBorderWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBorderWidget_StaticNew()
{
  return vtkBorderWidget::New();
}

PyObject *PyvtkBorderWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBorderWidget_Type, PyvtkBorderWidget_Methods,
    "vtkBorderWidget",
 &PyvtkBorderWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkBorderWidget_Type;

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

void PyVTKAddFile_vtkBorderWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBorderWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBorderWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

