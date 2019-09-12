// python wrapper for vtkAngleWidget
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
#include "vtkAngleWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAngleWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAngleWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkAngleWidget_Doc =
  "vtkAngleWidget - measure the angle between two rays (defined by three\npoints)\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkAngleWidget is used to measure the angle between two rays\n"
  "(defined by three points). The three points (two end points and a\n"
  "center) can be positioned independently, and when they are released,\n"
  "a special PlacePointEvent is invoked so that special operations may\n"
  "be take to reposition the point (snap to grid, etc.) The widget has\n"
  "two different modes of interaction: when initially defined (i.e.,\n"
  "placing the three points) and then a manipulate mode (adjusting the\n"
  "position of the three points).\n\n"
  "To use this widget, specify an instance of vtkAngleWidget and a\n"
  "representation (a subclass of vtkAngleRepresentation). The widget is\n"
  "implemented using three instances of vtkHandleWidget which are used\n"
  "to position the three points. The representations for these handle\n"
  "widgets are provided by the vtkAngleRepresentation.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n\n"
  "  LeftButtonPressEvent - add a point or select a handle\n"
  "  MouseMoveEvent - position the second or third point, or move a\n"
  "handle\n"
  "  LeftButtonReleaseEvent - release the selected handle \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkAngleWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::AddPoint -- add one point; depending on the state\n"
  "                              it may the first, second or third point\n"
  "                              added. Or, if near a handle, select the\n"
  "handle.\n"
  "  vtkWidgetEvent::Move -- position the second or third point, or move\n"
  "the\n"
  "                          handle depending on the state.\n"
  "  vtkWidgetEvent::EndSelect -- the handle manipulation process has\n"
  "completed. \n\n"
  "@par Event Bindings: This widget invokes the following VTK events on\n"
  "itself (which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (beginning to interact)\n"
  "  vtkCommand::EndInteractionEvent (completing interaction)\n"
  "  vtkCommand::InteractionEvent (moving a handle)\n"
  "  vtkCommand::PlacePointEvent (after a point is positioned;\n"
  "                               call data includes handle id (0,1,2)) \n\n"
  "@sa\n"
  "vtkHandleWidget vtkDistanceWidget\n\n";


static PyObject *
PyvtkAngleWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAngleWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAngleWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAngleWidget *tempr = vtkAngleWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAngleWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAngleWidget::NewInstance());

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
PyvtkAngleWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

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
      op->vtkAngleWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  vtkAngleRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAngleRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkAngleWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkAngleWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleWidget_GetAngleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAngleRepresentation *tempr = (ap.IsBound() ?
      op->GetAngleRepresentation() :
      op->vtkAngleWidget::GetAngleRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleWidget_IsAngleValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAngleValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsAngleValid() :
      op->vtkAngleWidget::IsAngleValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

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
      op->vtkAngleWidget::SetProcessEvents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleWidget_SetWidgetStateToStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetStateToStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWidgetStateToStart();
    }
    else
    {
      op->vtkAngleWidget::SetWidgetStateToStart();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleWidget_SetWidgetStateToManipulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetStateToManipulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWidgetStateToManipulate();
    }
    else
    {
      op->vtkAngleWidget::SetWidgetStateToManipulate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleWidget_GetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleWidget *op = static_cast<vtkAngleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidgetState() :
      op->vtkAngleWidget::GetWidgetState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAngleWidget_Methods[] = {
  {"IsTypeOf", PyvtkAngleWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for a VTK class.\n"},
  {"IsA", PyvtkAngleWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for a VTK class.\n"},
  {"SafeDownCast", PyvtkAngleWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAngleWidget\nC++: static vtkAngleWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for a VTK class.\n"},
  {"NewInstance", PyvtkAngleWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAngleWidget\nC++: vtkAngleWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {"SetEnabled", PyvtkAngleWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it is a composite widget and\ndoes more than its superclasses' vtkAbstractWidget::SetEnabled()\nmethod.\n"},
  {"SetRepresentation", PyvtkAngleWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkAngleRepresentation)\nC++: void SetRepresentation(vtkAngleRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"CreateDefaultRepresentation", PyvtkAngleWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"GetAngleRepresentation", PyvtkAngleWidget_GetAngleRepresentation, METH_VARARGS,
   "V.GetAngleRepresentation() -> vtkAngleRepresentation\nC++: vtkAngleRepresentation *GetAngleRepresentation()\n\nReturn the representation as a vtkAngleRepresentation.\n"},
  {"IsAngleValid", PyvtkAngleWidget_IsAngleValid, METH_VARARGS,
   "V.IsAngleValid() -> int\nC++: int IsAngleValid()\n\nA flag indicates whether the angle is valid. The angle value only\nbecomes valid after two of the three points are placed.\n"},
  {"SetProcessEvents", PyvtkAngleWidget_SetProcessEvents, METH_VARARGS,
   "V.SetProcessEvents(int)\nC++: void SetProcessEvents(vtkTypeBool) override;\n\nMethods to change the whether the widget responds to interaction.\nOverridden to pass the state to component widgets.\n"},
  {"SetWidgetStateToStart", PyvtkAngleWidget_SetWidgetStateToStart, METH_VARARGS,
   "V.SetWidgetStateToStart()\nC++: virtual void SetWidgetStateToStart()\n\nSet the state of the widget. If the state is set to \"Manipulate\"\nthen it is assumed that the widget and its representation will be\ninitialized programmatically and is not interactively placed.\nInitially the widget state is set to \"Start\" which means nothing\nwill appear and the user must interactively place the widget with\nrepeated mouse selections. Set the state to \"Start\" if you want\ninteractive placement. Generally state changes must be followed\nby a Render() for things to visually take effect.\n"},
  {"SetWidgetStateToManipulate", PyvtkAngleWidget_SetWidgetStateToManipulate, METH_VARARGS,
   "V.SetWidgetStateToManipulate()\nC++: virtual void SetWidgetStateToManipulate()\n\nSet the state of the widget. If the state is set to \"Manipulate\"\nthen it is assumed that the widget and its representation will be\ninitialized programmatically and is not interactively placed.\nInitially the widget state is set to \"Start\" which means nothing\nwill appear and the user must interactively place the widget with\nrepeated mouse selections. Set the state to \"Start\" if you want\ninteractive placement. Generally state changes must be followed\nby a Render() for things to visually take effect.\n"},
  {"GetWidgetState", PyvtkAngleWidget_GetWidgetState, METH_VARARGS,
   "V.GetWidgetState() -> int\nC++: virtual int GetWidgetState()\n\nReturn the current widget state.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAngleWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkAngleWidget", // tp_name
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
  PyvtkAngleWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAngleWidget_StaticNew()
{
  return vtkAngleWidget::New();
}

PyObject *PyvtkAngleWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAngleWidget_Type, PyvtkAngleWidget_Methods,
    "vtkAngleWidget",
 &PyvtkAngleWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkAngleWidget_Type;

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

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "Start", vtkAngleWidget::Start },
        { "Define", vtkAngleWidget::Define },
        { "Manipulate", vtkAngleWidget::Manipulate },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAngleWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAngleWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAngleWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

