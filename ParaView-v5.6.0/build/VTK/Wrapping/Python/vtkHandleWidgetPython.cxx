// python wrapper for vtkHandleWidget
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
#include "vtkHandleWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHandleWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHandleWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkHandleWidget_Doc =
  "vtkHandleWidget - a general widget for moving handles\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkHandleWidget is used to position a handle.  A handle is a\n"
  "widget with a position (in display and world space). Various\n"
  "appearances are available depending on its associated representation.\n"
  "The widget provides methods for translation, including constrained\n"
  "translation along coordinate axes. To use this widget, create and\n"
  "associate a representation with the widget.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n\n"
  "  LeftButtonPressEvent - select focal point of widget\n"
  "  LeftButtonReleaseEvent - end selection\n"
  "  MiddleButtonPressEvent - translate widget\n"
  "  MiddleButtonReleaseEvent - end translation\n"
  "  RightButtonPressEvent - scale widget\n"
  "  RightButtonReleaseEvent - end scaling\n"
  "  MouseMoveEvent - interactive movement across widget \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkHandleWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- focal point is being selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Translate -- translate the widget\n"
  "  vtkWidgetEvent::EndTranslate -- end widget translation\n"
  "  vtkWidgetEvent::Scale -- scale the widget\n"
  "  vtkWidgetEvent::EndScale -- end scaling the widget\n"
  "  vtkWidgetEvent::Move -- a request for widget motion \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkHandleWidget invokes the following VTK events on itself (which\n"
  "observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n";

static PyTypeObject PyvtkHandleWidget__WidgetState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkHandleWidget._WidgetState", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkHandleWidget__WidgetState_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkHandleWidget__WidgetState_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkHandleWidget__WidgetState_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkHandleWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHandleWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHandleWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHandleWidget *tempr = vtkHandleWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHandleWidget::NewInstance());

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
PyvtkHandleWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  vtkHandleRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHandleRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkHandleWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetHandleRepresentation() :
      op->vtkHandleWidget::GetHandleRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkHandleWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_SetEnableAxisConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableAxisConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableAxisConstraint(temp0);
    }
    else
    {
      op->vtkHandleWidget::SetEnableAxisConstraint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetEnableAxisConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableAxisConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableAxisConstraint() :
      op->vtkHandleWidget::GetEnableAxisConstraint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_EnableAxisConstraintOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAxisConstraintOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAxisConstraintOn();
    }
    else
    {
      op->vtkHandleWidget::EnableAxisConstraintOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_EnableAxisConstraintOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAxisConstraintOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAxisConstraintOff();
    }
    else
    {
      op->vtkHandleWidget::EnableAxisConstraintOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_SetEnableTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableTranslation(temp0);
    }
    else
    {
      op->vtkHandleWidget::SetEnableTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetEnableTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableTranslation() :
      op->vtkHandleWidget::GetEnableTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_EnableTranslationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableTranslationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableTranslationOn();
    }
    else
    {
      op->vtkHandleWidget::EnableTranslationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_EnableTranslationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableTranslationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableTranslationOff();
    }
    else
    {
      op->vtkHandleWidget::EnableTranslationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_SetAllowHandleResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowHandleResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowHandleResize(temp0);
    }
    else
    {
      op->vtkHandleWidget::SetAllowHandleResize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetAllowHandleResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowHandleResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowHandleResize() :
      op->vtkHandleWidget::GetAllowHandleResize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_AllowHandleResizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowHandleResizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowHandleResizeOn();
    }
    else
    {
      op->vtkHandleWidget::AllowHandleResizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_AllowHandleResizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowHandleResizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowHandleResizeOff();
    }
    else
    {
      op->vtkHandleWidget::AllowHandleResizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleWidget_GetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleWidget *op = static_cast<vtkHandleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidgetState() :
      op->vtkHandleWidget::GetWidgetState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHandleWidget_Methods[] = {
  {"IsTypeOf", PyvtkHandleWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK class macros.\n"},
  {"IsA", PyvtkHandleWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK class macros.\n"},
  {"SafeDownCast", PyvtkHandleWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHandleWidget\nC++: static vtkHandleWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK class macros.\n"},
  {"NewInstance", PyvtkHandleWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHandleWidget\nC++: vtkHandleWidget *NewInstance()\n\nStandard VTK class macros.\n"},
  {"SetRepresentation", PyvtkHandleWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkHandleRepresentation)\nC++: void SetRepresentation(vtkHandleRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetHandleRepresentation", PyvtkHandleWidget_GetHandleRepresentation, METH_VARARGS,
   "V.GetHandleRepresentation() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetHandleRepresentation()\n\nReturn the representation as a vtkHandleRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkHandleWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set. By\ndefault an instance of vtkPointHandleRepresentation3D is created.\n"},
  {"SetEnableAxisConstraint", PyvtkHandleWidget_SetEnableAxisConstraint, METH_VARARGS,
   "V.SetEnableAxisConstraint(int)\nC++: virtual void SetEnableAxisConstraint(vtkTypeBool _arg)\n\nEnable / disable axis constrained motion of the handles. By\ndefault the widget responds to the shift modifier to constrain\nthe handle along the axis closest aligned with the motion vector.\n"},
  {"GetEnableAxisConstraint", PyvtkHandleWidget_GetEnableAxisConstraint, METH_VARARGS,
   "V.GetEnableAxisConstraint() -> int\nC++: virtual vtkTypeBool GetEnableAxisConstraint()\n\nEnable / disable axis constrained motion of the handles. By\ndefault the widget responds to the shift modifier to constrain\nthe handle along the axis closest aligned with the motion vector.\n"},
  {"EnableAxisConstraintOn", PyvtkHandleWidget_EnableAxisConstraintOn, METH_VARARGS,
   "V.EnableAxisConstraintOn()\nC++: virtual void EnableAxisConstraintOn()\n\nEnable / disable axis constrained motion of the handles. By\ndefault the widget responds to the shift modifier to constrain\nthe handle along the axis closest aligned with the motion vector.\n"},
  {"EnableAxisConstraintOff", PyvtkHandleWidget_EnableAxisConstraintOff, METH_VARARGS,
   "V.EnableAxisConstraintOff()\nC++: virtual void EnableAxisConstraintOff()\n\nEnable / disable axis constrained motion of the handles. By\ndefault the widget responds to the shift modifier to constrain\nthe handle along the axis closest aligned with the motion vector.\n"},
  {"SetEnableTranslation", PyvtkHandleWidget_SetEnableTranslation, METH_VARARGS,
   "V.SetEnableTranslation(int)\nC++: virtual void SetEnableTranslation(vtkTypeBool _arg)\n\nEnable moving of handles. By default, the handle can be moved.\n"},
  {"GetEnableTranslation", PyvtkHandleWidget_GetEnableTranslation, METH_VARARGS,
   "V.GetEnableTranslation() -> int\nC++: virtual vtkTypeBool GetEnableTranslation()\n\nEnable moving of handles. By default, the handle can be moved.\n"},
  {"EnableTranslationOn", PyvtkHandleWidget_EnableTranslationOn, METH_VARARGS,
   "V.EnableTranslationOn()\nC++: virtual void EnableTranslationOn()\n\nEnable moving of handles. By default, the handle can be moved.\n"},
  {"EnableTranslationOff", PyvtkHandleWidget_EnableTranslationOff, METH_VARARGS,
   "V.EnableTranslationOff()\nC++: virtual void EnableTranslationOff()\n\nEnable moving of handles. By default, the handle can be moved.\n"},
  {"SetAllowHandleResize", PyvtkHandleWidget_SetAllowHandleResize, METH_VARARGS,
   "V.SetAllowHandleResize(int)\nC++: virtual void SetAllowHandleResize(vtkTypeBool _arg)\n\nAllow resizing of handles ? By default the right mouse button\nscales the handle size.\n"},
  {"GetAllowHandleResize", PyvtkHandleWidget_GetAllowHandleResize, METH_VARARGS,
   "V.GetAllowHandleResize() -> int\nC++: virtual vtkTypeBool GetAllowHandleResize()\n\nAllow resizing of handles ? By default the right mouse button\nscales the handle size.\n"},
  {"AllowHandleResizeOn", PyvtkHandleWidget_AllowHandleResizeOn, METH_VARARGS,
   "V.AllowHandleResizeOn()\nC++: virtual void AllowHandleResizeOn()\n\nAllow resizing of handles ? By default the right mouse button\nscales the handle size.\n"},
  {"AllowHandleResizeOff", PyvtkHandleWidget_AllowHandleResizeOff, METH_VARARGS,
   "V.AllowHandleResizeOff()\nC++: virtual void AllowHandleResizeOff()\n\nAllow resizing of handles ? By default the right mouse button\nscales the handle size.\n"},
  {"GetWidgetState", PyvtkHandleWidget_GetWidgetState, METH_VARARGS,
   "V.GetWidgetState() -> int\nC++: virtual int GetWidgetState()\n\nGet the widget state.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHandleWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkHandleWidget", // tp_name
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
  PyvtkHandleWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHandleWidget_StaticNew()
{
  return vtkHandleWidget::New();
}

PyObject *PyvtkHandleWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHandleWidget_Type, PyvtkHandleWidget_Methods,
    "vtkHandleWidget",
 &PyvtkHandleWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkHandleWidget_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkHandleWidget__WidgetState_Type);
  PyvtkHandleWidget__WidgetState_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkHandleWidget__WidgetState_Type);

  o = (PyObject *)&PyvtkHandleWidget__WidgetState_Type;
  if (PyDict_SetItemString(d, "_WidgetState", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkHandleWidget::_WidgetState cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "Start", vtkHandleWidget::Start },
        { "Active", vtkHandleWidget::Active },
      };

    o = PyvtkHandleWidget__WidgetState_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHandleWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHandleWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHandleWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

