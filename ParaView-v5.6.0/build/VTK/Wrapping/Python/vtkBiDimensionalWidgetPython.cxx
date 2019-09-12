// python wrapper for vtkBiDimensionalWidget
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
#include "vtkBiDimensionalWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBiDimensionalWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBiDimensionalWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkBiDimensionalWidget_Doc =
  "vtkBiDimensionalWidget - measure the bi-dimensional lengths of an\nobject\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkBiDimensionalWidget is used to measure the bi-dimensional\n"
  "length of an object. The bi-dimensional measure is defined by two\n"
  "finite, orthogonal lines that intersect within the finite extent of\n"
  "both lines. The lengths of these two lines gives the bi-dimensional\n"
  "measure. Each line is defined by two handle widgets at the end points\n"
  "of each line.\n\n"
  "The orthogonal constraint on the two lines limits how the four end\n"
  "points can be positioned. The first two points can be placed\n"
  "arbitrarily to define the first line (similar to vtkDistanceWidget).\n"
  "The placement of the third point is limited by the finite extent of\n"
  "the first line. As the third point is placed, the fourth point is\n"
  "placed on the opposite side of the first line. Once the third point\n"
  "is placed, the second line is defined since the fourth point is\n"
  "defined at the same time, but the fourth point can be moved along the\n"
  "second line (i.e., maintaining the orthogonal relationship between\n"
  "the two lines). Once defined, any of the four points can be moved\n"
  "along their constraint lines. Also, each line can be translated along\n"
  "the other line (in an orthogonal direction), and the whole\n"
  "bi-dimensional widget can be rotated about its center point (see the\n"
  "description of the event bindings). Finally, selecting the point\n"
  "where the two orthogonal axes intersect, the entire widget can be\n"
  "translated in any direction.\n\n"
  "Placement of any point results in a special PlacePointEvent\n"
  "invocation so that special operations may be performed to reposition\n"
  "the point. Motion of any point, moving the lines, or rotating the\n"
  "widget cause InteractionEvents to be invoked. Note that the widget\n"
  "has two fundamental modes: a define mode (when initially placing the\n"
  "points) and a manipulate mode (after the points are placed). Line\n"
  "translation and rotation are only possible in manipulate mode.\n\n"
  "To use this widget, specify an instance of vtkBiDimensionalWidget and\n"
  "a representation (e.g., vtkBiDimensionalRepresentation2D). The widget\n"
  "is implemented using four instances of vtkHandleWidget which are used\n"
  "to position the end points of the two intersecting lines. The\n"
  "representations for these handle widgets are provided by the\n"
  "vtkBiDimensionalRepresentation class.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n\n"
  "  LeftButtonPressEvent - define a point or manipulate a handle, line,\n"
  "                         perform rotation or translate the widget.\n"
  "  MouseMoveEvent - position the points, move a line, rotate or\n"
  "translate the widget\n"
  "  LeftButtonReleaseEvent - release the selected handle and end\n"
  "interaction \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkBiDimensionalWidget's widget\n"
  "events:\n\n\n"
  "  vtkWidgetEvent::AddPoint -- (In Define mode:) Add one point;\n"
  "depending on the\n"
  "                              state it may the first, second, third\n"
  "or fourth\n"
  "                              point added. (In Manipulate mode:) If\n"
  "near a handle,\n"
  "                              select the handle. Or if near a line,\n"
  "select the line.\n"
  "  vtkWidgetEvent::Move -- (In Define mode:) Position the second,\n"
  "third or fourth\n"
  "                          point. (In Manipulate mode:) Move the\n"
  "handle, line or widget.\n"
  "  vtkWidgetEvent::EndSelect -- the manipulation process has\n"
  "completed. \n\n"
  "@par Event Bindings: This widget invokes the following VTK events on\n"
  "itself (which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (beginning to interact)\n"
  "  vtkCommand::EndInteractionEvent (completing interaction)\n"
  "  vtkCommand::InteractionEvent (moving a handle, line or performing\n"
  "rotation)\n"
  "  vtkCommand::PlacePointEvent (after a point is positioned;\n"
  "                               call data includes handle id\n"
  "(0,1,2,4)) \n\n"
  "@sa\n"
  "vtkHandleWidget vtkDistanceWidget\n\n";


static PyObject *
PyvtkBiDimensionalWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBiDimensionalWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBiDimensionalWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBiDimensionalWidget *tempr = vtkBiDimensionalWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBiDimensionalWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBiDimensionalWidget::NewInstance());

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
PyvtkBiDimensionalWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

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
      op->vtkBiDimensionalWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  vtkBiDimensionalRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBiDimensionalRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkBiDimensionalWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_GetBiDimensionalRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBiDimensionalRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBiDimensionalRepresentation *tempr = (ap.IsBound() ?
      op->GetBiDimensionalRepresentation() :
      op->vtkBiDimensionalWidget::GetBiDimensionalRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkBiDimensionalWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_IsMeasureValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMeasureValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsMeasureValid() :
      op->vtkBiDimensionalWidget::IsMeasureValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

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
      op->vtkBiDimensionalWidget::SetProcessEvents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_SetWidgetStateToStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetStateToStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWidgetStateToStart();
    }
    else
    {
      op->vtkBiDimensionalWidget::SetWidgetStateToStart();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_SetWidgetStateToManipulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetStateToManipulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWidgetStateToManipulate();
    }
    else
    {
      op->vtkBiDimensionalWidget::SetWidgetStateToManipulate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalWidget_GetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalWidget *op = static_cast<vtkBiDimensionalWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidgetState() :
      op->vtkBiDimensionalWidget::GetWidgetState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBiDimensionalWidget_Methods[] = {
  {"IsTypeOf", PyvtkBiDimensionalWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for a VTK class.\n"},
  {"IsA", PyvtkBiDimensionalWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for a VTK class.\n"},
  {"SafeDownCast", PyvtkBiDimensionalWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBiDimensionalWidget\nC++: static vtkBiDimensionalWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for a VTK class.\n"},
  {"NewInstance", PyvtkBiDimensionalWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBiDimensionalWidget\nC++: vtkBiDimensionalWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {"SetEnabled", PyvtkBiDimensionalWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it is a composite widget and\ndoes more than its superclasses' vtkAbstractWidget::SetEnabled()\nmethod.\n"},
  {"SetRepresentation", PyvtkBiDimensionalWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkBiDimensionalRepresentation)\nC++: void SetRepresentation(vtkBiDimensionalRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetBiDimensionalRepresentation", PyvtkBiDimensionalWidget_GetBiDimensionalRepresentation, METH_VARARGS,
   "V.GetBiDimensionalRepresentation()\n    -> vtkBiDimensionalRepresentation\nC++: vtkBiDimensionalRepresentation *GetBiDimensionalRepresentation(\n    )\n\nReturn the representation as a vtkBiDimensionalRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkBiDimensionalWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"IsMeasureValid", PyvtkBiDimensionalWidget_IsMeasureValid, METH_VARARGS,
   "V.IsMeasureValid() -> int\nC++: int IsMeasureValid()\n\nA flag indicates whether the bi-dimensional measure is valid. The\nwidget becomes valid after two of the four points are placed.\n"},
  {"SetProcessEvents", PyvtkBiDimensionalWidget_SetProcessEvents, METH_VARARGS,
   "V.SetProcessEvents(int)\nC++: void SetProcessEvents(vtkTypeBool) override;\n\nMethods to change the whether the widget responds to interaction.\nOverridden to pass the state to component widgets.\n"},
  {"SetWidgetStateToStart", PyvtkBiDimensionalWidget_SetWidgetStateToStart, METH_VARARGS,
   "V.SetWidgetStateToStart()\nC++: virtual void SetWidgetStateToStart()\n\nSet the state of the widget. If the state is set to \"Manipulate\"\nthen it is assumed that the widget and its representation will be\ninitialized programmatically and is not interactively placed.\nInitially the widget state is set to \"Start\" which means nothing\nwill appear and the user must interactively place the widget with\nrepeated mouse selections. Set the state to \"Start\" if you want\ninteractive placement. Generally state changes must be followed\nby a Render() for things to visually take effect.\n"},
  {"SetWidgetStateToManipulate", PyvtkBiDimensionalWidget_SetWidgetStateToManipulate, METH_VARARGS,
   "V.SetWidgetStateToManipulate()\nC++: virtual void SetWidgetStateToManipulate()\n\nSet the state of the widget. If the state is set to \"Manipulate\"\nthen it is assumed that the widget and its representation will be\ninitialized programmatically and is not interactively placed.\nInitially the widget state is set to \"Start\" which means nothing\nwill appear and the user must interactively place the widget with\nrepeated mouse selections. Set the state to \"Start\" if you want\ninteractive placement. Generally state changes must be followed\nby a Render() for things to visually take effect.\n"},
  {"GetWidgetState", PyvtkBiDimensionalWidget_GetWidgetState, METH_VARARGS,
   "V.GetWidgetState() -> int\nC++: virtual int GetWidgetState()\n\nReturn the current widget state.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBiDimensionalWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkBiDimensionalWidget", // tp_name
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
  PyvtkBiDimensionalWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBiDimensionalWidget_StaticNew()
{
  return vtkBiDimensionalWidget::New();
}

PyObject *PyvtkBiDimensionalWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBiDimensionalWidget_Type, PyvtkBiDimensionalWidget_Methods,
    "vtkBiDimensionalWidget",
 &PyvtkBiDimensionalWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkBiDimensionalWidget_Type;

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
        { "EndWidgetSelectEvent", vtkBiDimensionalWidget::EndWidgetSelectEvent },
        { "Start", vtkBiDimensionalWidget::Start },
        { "Define", vtkBiDimensionalWidget::Define },
        { "Manipulate", vtkBiDimensionalWidget::Manipulate },
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

void PyVTKAddFile_vtkBiDimensionalWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBiDimensionalWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBiDimensionalWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

