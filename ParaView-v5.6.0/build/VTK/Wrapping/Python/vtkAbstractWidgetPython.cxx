// python wrapper for vtkAbstractWidget
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
#include "vtkAbstractWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractWidget_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorObserver_ClassNew
extern "C" { PyObject *PyvtkInteractorObserver_ClassNew(); }
#define DECLARED_PyvtkInteractorObserver_ClassNew
#endif

static const char *PyvtkAbstractWidget_Doc =
  "vtkAbstractWidget - define the API for widget / widget representation\n\n"
  "Superclass: vtkInteractorObserver\n\n"
  "The vtkAbstractWidget defines an API and implements methods common to\n"
  "all widgets using the interaction/representation design. In this\n"
  "design, the term interaction means that part of the widget that\n"
  "performs event handling, while the representation corresponds to a\n"
  "vtkProp (or the subclass vtkWidgetRepresentation) used to represent\n"
  "the widget. vtkAbstractWidget also implements some methods common to\n"
  "all subclasses.\n\n"
  "Note that vtkAbstractWidget provides access to the\n"
  "vtkWidgetEventTranslator.  This class is responsible for translating\n"
  "VTK events (defined in vtkCommand.h) into widget events (defined in\n"
  "vtkWidgetEvent.h). This class can be manipulated so that different\n"
  "VTK events can be mapped into widget events, thereby allowing the\n"
  "modification of event bindings. Each subclass of vtkAbstractWidget\n"
  "defines the events to which it responds.\n\n"
  "@warning\n"
  "Note that the pair ( vtkAbstractWidget / vtkWidgetRepresentation ) is\n"
  "an implementation of the second generation VTK Widgets design. In the\n"
  "first generation design, widgets were implemented in a single\n"
  "monolithic class. This design was problematic because in\n"
  "client-server application it was difficult to manage widgets\n"
  "properly. Also, new \"representations\" or look-and-feel, for a widget\n"
  "required a whole new class, with a lot of redundant code. The\n"
  "separation of the widget event handling and representation enables\n"
  "users and developers to create new appearances for the widget. It\n"
  "also facilitates parallel processing, where the client application\n"
  "handles events, and remote representations of the widget are slaves\n"
  "to the client (and do not handle events).\n\n"
  "@sa\n"
  "vtkWidgetRepresentation vtkWidgetEventTranslator\n"
  "vtkWidgetCallbackMapper\n\n";


static PyObject *
PyvtkAbstractWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractWidget *tempr = vtkAbstractWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractWidget::NewInstance());

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
PyvtkAbstractWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

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
      op->vtkAbstractWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

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
      op->vtkAbstractWidget::SetProcessEvents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetProcessEventsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEventsMinValue() :
      op->vtkAbstractWidget::GetProcessEventsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetProcessEventsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEventsMaxValue() :
      op->vtkAbstractWidget::GetProcessEventsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEvents() :
      op->vtkAbstractWidget::GetProcessEvents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_ProcessEventsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessEventsOn();
    }
    else
    {
      op->vtkAbstractWidget::ProcessEventsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_ProcessEventsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessEventsOff();
    }
    else
    {
      op->vtkAbstractWidget::ProcessEventsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetEventTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetEventTranslator *tempr = (ap.IsBound() ?
      op->GetEventTranslator() :
      op->vtkAbstractWidget::GetEventTranslator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->CreateDefaultRepresentation();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkAbstractWidget::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  vtkAbstractWidget *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
  {
    if (ap.IsBound())
    {
      op->SetParent(temp0);
    }
    else
    {
      op->vtkAbstractWidget::SetParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractWidget *tempr = (ap.IsBound() ?
      op->GetParent() :
      op->vtkAbstractWidget::GetParent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetRepresentation *tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkAbstractWidget::GetRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_SetManagesCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManagesCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetManagesCursor(temp0);
    }
    else
    {
      op->vtkAbstractWidget::SetManagesCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_GetManagesCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManagesCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetManagesCursor() :
      op->vtkAbstractWidget::GetManagesCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_ManagesCursorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManagesCursorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ManagesCursorOn();
    }
    else
    {
      op->vtkAbstractWidget::ManagesCursorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_ManagesCursorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManagesCursorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ManagesCursorOff();
    }
    else
    {
      op->vtkAbstractWidget::ManagesCursorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractWidget_SetPriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractWidget *op = static_cast<vtkAbstractWidget *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPriority(temp0);
    }
    else
    {
      op->vtkAbstractWidget::SetPriority(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractWidget_Methods[] = {
  {"IsTypeOf", PyvtkAbstractWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard macros implementing standard VTK methods.\n"},
  {"IsA", PyvtkAbstractWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard macros implementing standard VTK methods.\n"},
  {"SafeDownCast", PyvtkAbstractWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractWidget\nC++: static vtkAbstractWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard macros implementing standard VTK methods.\n"},
  {"NewInstance", PyvtkAbstractWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractWidget\nC++: vtkAbstractWidget *NewInstance()\n\nStandard macros implementing standard VTK methods.\n"},
  {"SetEnabled", PyvtkAbstractWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nMethods for activating this widget. Note that the widget\nrepresentation must be specified or the widget will not appear.\nProcessEvents (On by default) must be On for Enabled widget to\nrespond to interaction. If ProcessEvents is Off,\nenabling/disabling a widget merely affects the visibility of the\nrepresentation.\n"},
  {"SetProcessEvents", PyvtkAbstractWidget_SetProcessEvents, METH_VARARGS,
   "V.SetProcessEvents(int)\nC++: virtual void SetProcessEvents(vtkTypeBool _arg)\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust override SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {"GetProcessEventsMinValue", PyvtkAbstractWidget_GetProcessEventsMinValue, METH_VARARGS,
   "V.GetProcessEventsMinValue() -> int\nC++: virtual vtkTypeBool GetProcessEventsMinValue()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust override SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {"GetProcessEventsMaxValue", PyvtkAbstractWidget_GetProcessEventsMaxValue, METH_VARARGS,
   "V.GetProcessEventsMaxValue() -> int\nC++: virtual vtkTypeBool GetProcessEventsMaxValue()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust override SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {"GetProcessEvents", PyvtkAbstractWidget_GetProcessEvents, METH_VARARGS,
   "V.GetProcessEvents() -> int\nC++: virtual vtkTypeBool GetProcessEvents()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust override SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {"ProcessEventsOn", PyvtkAbstractWidget_ProcessEventsOn, METH_VARARGS,
   "V.ProcessEventsOn()\nC++: virtual void ProcessEventsOn()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust override SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {"ProcessEventsOff", PyvtkAbstractWidget_ProcessEventsOff, METH_VARARGS,
   "V.ProcessEventsOff()\nC++: virtual void ProcessEventsOff()\n\nMethods to change whether the widget responds to interaction. Set\nthis to Off to disable interaction. On by default. Subclasses\nmust override SetProcessEvents() to make sure that they pass on\nthe flag to all component widgets.\n"},
  {"GetEventTranslator", PyvtkAbstractWidget_GetEventTranslator, METH_VARARGS,
   "V.GetEventTranslator() -> vtkWidgetEventTranslator\nC++: vtkWidgetEventTranslator *GetEventTranslator()\n\nGet the event translator. Careful manipulation of this class\nenables the user to override the default event bindings.\n"},
  {"CreateDefaultRepresentation", PyvtkAbstractWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: virtual void CreateDefaultRepresentation()\n\nCreate the default widget representation if one is not set. The\nrepresentation defines the geometry of the widget (i.e., how it\nappears) as well as providing special methods for manipulting the\nstate and appearance of the widget.\n"},
  {"Render", PyvtkAbstractWidget_Render, METH_VARARGS,
   "V.Render()\nC++: void Render()\n\nThis method is called by subclasses when a render method is to be\ninvoked on the vtkRenderWindowInteractor. This method should be\ncalled (instead of vtkRenderWindow::Render() because it has built\ninto it optimizations for minimizing renders and/or speeding\nrenders.\n"},
  {"SetParent", PyvtkAbstractWidget_SetParent, METH_VARARGS,
   "V.SetParent(vtkAbstractWidget)\nC++: void SetParent(vtkAbstractWidget *parent)\n\nSpecifying a parent to this widget is used when creating\ncomposite widgets. It is an internal method not meant to be used\nby the public. When a widget has a parent, it defers the\nrendering to the parent. It may also defer managing the cursor\n(see ManagesCursor ivar).\n"},
  {"GetParent", PyvtkAbstractWidget_GetParent, METH_VARARGS,
   "V.GetParent() -> vtkAbstractWidget\nC++: virtual vtkAbstractWidget *GetParent()\n\n"},
  {"GetRepresentation", PyvtkAbstractWidget_GetRepresentation, METH_VARARGS,
   "V.GetRepresentation() -> vtkWidgetRepresentation\nC++: vtkWidgetRepresentation *GetRepresentation()\n\nReturn an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp (typically a subclass of\nvtkWidgetRepresentation) so it can be added to the renderer\nindependent of the widget.\n"},
  {"SetManagesCursor", PyvtkAbstractWidget_SetManagesCursor, METH_VARARGS,
   "V.SetManagesCursor(int)\nC++: virtual void SetManagesCursor(vtkTypeBool _arg)\n\nTurn on or off the management of the cursor. Cursor management is\ntypically disabled for subclasses when composite widgets are\ncreated. For example, vtkHandleWidgets are often used to create\ncomposite widgets, and the parent widget takes over the cursor\nmanagement.\n"},
  {"GetManagesCursor", PyvtkAbstractWidget_GetManagesCursor, METH_VARARGS,
   "V.GetManagesCursor() -> int\nC++: virtual vtkTypeBool GetManagesCursor()\n\nTurn on or off the management of the cursor. Cursor management is\ntypically disabled for subclasses when composite widgets are\ncreated. For example, vtkHandleWidgets are often used to create\ncomposite widgets, and the parent widget takes over the cursor\nmanagement.\n"},
  {"ManagesCursorOn", PyvtkAbstractWidget_ManagesCursorOn, METH_VARARGS,
   "V.ManagesCursorOn()\nC++: virtual void ManagesCursorOn()\n\nTurn on or off the management of the cursor. Cursor management is\ntypically disabled for subclasses when composite widgets are\ncreated. For example, vtkHandleWidgets are often used to create\ncomposite widgets, and the parent widget takes over the cursor\nmanagement.\n"},
  {"ManagesCursorOff", PyvtkAbstractWidget_ManagesCursorOff, METH_VARARGS,
   "V.ManagesCursorOff()\nC++: virtual void ManagesCursorOff()\n\nTurn on or off the management of the cursor. Cursor management is\ntypically disabled for subclasses when composite widgets are\ncreated. For example, vtkHandleWidgets are often used to create\ncomposite widgets, and the parent widget takes over the cursor\nmanagement.\n"},
  {"SetPriority", PyvtkAbstractWidget_SetPriority, METH_VARARGS,
   "V.SetPriority(float)\nC++: void SetPriority(float) override;\n\nOverride the superclass method. This will automatically change\nthe priority of the widget. Unlike the superclass documentation,\nno methods such as SetInteractor to null and reset it etc. are\nnecessary\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkAbstractWidget", // tp_name
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
  PyvtkAbstractWidget_Doc, // tp_doc
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

PyObject *PyvtkAbstractWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractWidget_Type, PyvtkAbstractWidget_Methods,
    "vtkAbstractWidget",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractWidget_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorObserver_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

