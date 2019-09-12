// python wrapper for vtkSeedWidget
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
#include "vtkSeedWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSeedWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSeedWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkSeedWidget_Doc =
  "vtkSeedWidget - place multiple seed points\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkSeedWidget is used to placed multiple seed points in the\n"
  "scene. The seed points can be used for operations like connectivity,\n"
  "segmentation, and region growing.\n\n"
  "To use this widget, specify an instance of vtkSeedWidget and a\n"
  "representation (a subclass of vtkSeedRepresentation). The widget is\n"
  "implemented using multiple instances of vtkHandleWidget which can be\n"
  "used to position the seed points (after they are initially placed).\n"
  "The representations for these handle widgets are provided by the\n"
  "vtkSeedRepresentation.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n\n"
  "  LeftButtonPressEvent - add a point or select a handle (i.e., seed)\n"
  "  RightButtonPressEvent - finish adding the seeds\n"
  "  MouseMoveEvent - move a handle (i.e., seed)\n"
  "  LeftButtonReleaseEvent - release the selected handle (seed) \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkSeedWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::AddPoint -- add one point; depending on the state\n"
  "                              it may the first or second point added.\n"
  "Or,\n"
  "                              if near handle, select handle.\n"
  "  vtkWidgetEvent::Completed -- finished adding seeds.\n"
  "  vtkWidgetEvent::Move -- move the second point or handle depending\n"
  "on the state.\n"
  "  vtkWidgetEvent::EndSelect -- the handle manipulation process has\n"
  "completed. \n\n"
  "@par Event Bindings: This widget invokes the following VTK events on\n"
  "itself (which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (beginning to interact)\n"
  "  vtkCommand::EndInteractionEvent (completing interaction)\n"
  "  vtkCommand::InteractionEvent (moving after selecting something)\n"
  "  vtkCommand::PlacePointEvent (after point is positioned;\n"
  "                               call data includes handle id (0,1))\n"
  "  vtkCommand::DeletePointEvent (before point is deleted;\n"
  "                               call data includes handle id (0,1)) \n\n"
  "@sa\n"
  "vtkHandleWidget vtkSeedReoresentation\n\n";


static PyObject *
PyvtkSeedWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSeedWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSeedWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSeedWidget *tempr = vtkSeedWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSeedWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSeedWidget::NewInstance());

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
PyvtkSeedWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

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
      op->vtkSeedWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_SetCurrentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetCurrentRenderer(temp0);
    }
    else
    {
      op->vtkSeedWidget::SetCurrentRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetInteractor(temp0);
    }
    else
    {
      op->vtkSeedWidget::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  vtkSeedRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSeedRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkSeedWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_GetSeedRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSeedRepresentation *tempr = (ap.IsBound() ?
      op->GetSeedRepresentation() :
      op->vtkSeedWidget::GetSeedRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkSeedWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

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
      op->vtkSeedWidget::SetProcessEvents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_CompleteInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompleteInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompleteInteraction();
    }
    else
    {
      op->vtkSeedWidget::CompleteInteraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_RestartInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestartInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestartInteraction();
    }
    else
    {
      op->vtkSeedWidget::RestartInteraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_CreateNewHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNewHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleWidget *tempr = (ap.IsBound() ?
      op->CreateNewHandle() :
      op->vtkSeedWidget::CreateNewHandle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_DeleteSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteSeed(temp0);
    }
    else
    {
      op->vtkSeedWidget::DeleteSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkHandleWidget *tempr = (ap.IsBound() ?
      op->GetSeed(temp0) :
      op->vtkSeedWidget::GetSeed(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedWidget_GetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedWidget *op = static_cast<vtkSeedWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidgetState() :
      op->vtkSeedWidget::GetWidgetState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSeedWidget_Methods[] = {
  {"IsTypeOf", PyvtkSeedWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for a VTK class.\n"},
  {"IsA", PyvtkSeedWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for a VTK class.\n"},
  {"SafeDownCast", PyvtkSeedWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSeedWidget\nC++: static vtkSeedWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for a VTK class.\n"},
  {"NewInstance", PyvtkSeedWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSeedWidget\nC++: vtkSeedWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {"SetEnabled", PyvtkSeedWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it is a composite widget and\ndoes more than its superclasses' vtkAbstractWidget::SetEnabled()\nmethod.\n"},
  {"SetCurrentRenderer", PyvtkSeedWidget_SetCurrentRenderer, METH_VARARGS,
   "V.SetCurrentRenderer(vtkRenderer)\nC++: void SetCurrentRenderer(vtkRenderer *) override;\n\nSet the current renderer. This method also propagates to all the\nchild handle widgets, if any exist\n"},
  {"SetInteractor", PyvtkSeedWidget_SetInteractor, METH_VARARGS,
   "V.SetInteractor(vtkRenderWindowInteractor)\nC++: void SetInteractor(vtkRenderWindowInteractor *) override;\n\nSet the interactor. This method also propagates to all the child\nhandle widgets, if any exist\n"},
  {"SetRepresentation", PyvtkSeedWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkSeedRepresentation)\nC++: void SetRepresentation(vtkSeedRepresentation *rep)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetSeedRepresentation", PyvtkSeedWidget_GetSeedRepresentation, METH_VARARGS,
   "V.GetSeedRepresentation() -> vtkSeedRepresentation\nC++: vtkSeedRepresentation *GetSeedRepresentation()\n\nReturn the representation as a vtkSeedRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkSeedWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"SetProcessEvents", PyvtkSeedWidget_SetProcessEvents, METH_VARARGS,
   "V.SetProcessEvents(int)\nC++: void SetProcessEvents(vtkTypeBool) override;\n\nMethods to change the whether the widget responds to interaction.\nOverridden to pass the state to component widgets.\n"},
  {"CompleteInteraction", PyvtkSeedWidget_CompleteInteraction, METH_VARARGS,
   "V.CompleteInteraction()\nC++: virtual void CompleteInteraction()\n\nMethod to be called when the seed widget should stop responding\nto the place point interaction. The seed widget, when defined\nallows you place seeds by clicking on the render window. Use this\nmethod to indicate that you would like to stop placing seeds\ninteractively. If you'd like the widget to stop responding to\n*any* user interaction simply disable event processing by the\nwidget by calling widget->ProcessEventsOff()\n"},
  {"RestartInteraction", PyvtkSeedWidget_RestartInteraction, METH_VARARGS,
   "V.RestartInteraction()\nC++: virtual void RestartInteraction()\n\nMethod to be called when the seed widget should start responding\nto the interaction.\n"},
  {"CreateNewHandle", PyvtkSeedWidget_CreateNewHandle, METH_VARARGS,
   "V.CreateNewHandle() -> vtkHandleWidget\nC++: virtual vtkHandleWidget *CreateNewHandle()\n\nUse this method to programmatically create a new handle. In\ninteractive mode, (when the widget is in the PlacingSeeds state)\nthis method is automatically invoked. The method returns the\nhandle created. A valid seed representation must exist for the\nwidget to create a new handle.\n"},
  {"DeleteSeed", PyvtkSeedWidget_DeleteSeed, METH_VARARGS,
   "V.DeleteSeed(int)\nC++: void DeleteSeed(int n)\n\nDelete the nth seed.\n"},
  {"GetSeed", PyvtkSeedWidget_GetSeed, METH_VARARGS,
   "V.GetSeed(int) -> vtkHandleWidget\nC++: vtkHandleWidget *GetSeed(int n)\n\nGet the nth seed\n"},
  {"GetWidgetState", PyvtkSeedWidget_GetWidgetState, METH_VARARGS,
   "V.GetWidgetState() -> int\nC++: virtual int GetWidgetState()\n\nGet the widget state.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSeedWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkSeedWidget", // tp_name
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
  PyvtkSeedWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSeedWidget_StaticNew()
{
  return vtkSeedWidget::New();
}

PyObject *PyvtkSeedWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSeedWidget_Type, PyvtkSeedWidget_Methods,
    "vtkSeedWidget",
 &PyvtkSeedWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkSeedWidget_Type;

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

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "Start", vtkSeedWidget::Start },
        { "PlacingSeeds", vtkSeedWidget::PlacingSeeds },
        { "PlacedSeeds", vtkSeedWidget::PlacedSeeds },
        { "MovingSeed", vtkSeedWidget::MovingSeed },
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

void PyVTKAddFile_vtkSeedWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSeedWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSeedWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

