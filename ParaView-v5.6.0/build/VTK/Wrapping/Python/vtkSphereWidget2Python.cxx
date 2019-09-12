// python wrapper for vtkSphereWidget2
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
#include "vtkSphereWidget2.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSphereWidget2(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSphereWidget2_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkSphereWidget2_Doc =
  "vtkSphereWidget2 - 3D widget for manipulating a point on a sphere\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This 3D widget interacts with a vtkSphereRepresentation class (i.e.,\n"
  "it handles the events that drive its corresponding representation).\n"
  "It can be used to position a point on a sphere (for example, to place\n"
  "a light or camera), or to position a sphere in a scene, including\n"
  "translating and scaling the sphere.\n\n"
  "A nice feature of vtkSphereWidget2, like any 3D widget, is that it\n"
  "will work in combination with the current interactor style (or any\n"
  "other interactor observer). That is, if vtkSphereWidget2 does not\n"
  "handle an event, then all other registered observers (including the\n"
  "interactor style) have an opportunity to process the event.\n"
  "Otherwise, the vtkSphereWidget2 will terminate the processing of the\n"
  "event that it handles.\n\n"
  "To use this widget, you generally pair it with a\n"
  "vtkSphereRepresentation (or a subclass). Various options are\n"
  "available in the representation for controlling how the widget\n"
  "appears, and how the widget functions.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If the handle or sphere are selected:\n"
  "  LeftButtonPressEvent - select the handle or sphere\n"
  "  LeftButtonReleaseEvent - release the handle to sphere\n"
  "  MouseMoveEvent - move the handle or translate the sphere In all the\n"
  "cases, independent of what is picked, the widget responds to the\n"
  "following VTK events:\n"
  "  MiddleButtonPressEvent - translate the representation\n"
  "  MiddleButtonReleaseEvent - stop translating the representation\n"
  "  RightButtonPressEvent - scale the widget's representation\n"
  "  RightButtonReleaseEvent - stop scaling the representation\n"
  "  MouseMoveEvent - scale (if right button) or move (if middle button)\n"
  "the widget \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkSphereWidget2's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Scale -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndScale -- the selection process has completed\n"
  "  vtkWidgetEvent::Translate -- some part of the widget has been\n"
  "selected\n"
  "  vtkWidgetEvent::EndTranslate -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for motion has been invoked \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkSphereWidget2 invokes the following VTK events on itself\n"
  "(which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@par Event Bindings: This class, and the affiliated\n"
  "vtkSphereRepresentation, are second generation VTK widgets. An\n"
  "earlier version of this functionality was defined in the class\n"
  "vtkSphereWidget.\n\n"
  "@sa\n"
  "vtkSphereRepresentation vtkSphereWidget\n\n";


static PyObject *
PyvtkSphereWidget2_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSphereWidget2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphereWidget2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSphereWidget2 *tempr = vtkSphereWidget2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphereWidget2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphereWidget2::NewInstance());

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
PyvtkSphereWidget2_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  vtkSphereRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSphereRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkSphereWidget2::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_SetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationEnabled(temp0);
    }
    else
    {
      op->vtkSphereWidget2::SetTranslationEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_GetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationEnabled() :
      op->vtkSphereWidget2::GetTranslationEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_TranslationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationEnabledOn();
    }
    else
    {
      op->vtkSphereWidget2::TranslationEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_TranslationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationEnabledOff();
    }
    else
    {
      op->vtkSphereWidget2::TranslationEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_SetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalingEnabled(temp0);
    }
    else
    {
      op->vtkSphereWidget2::SetScalingEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_GetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalingEnabled() :
      op->vtkSphereWidget2::GetScalingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_ScalingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingEnabledOn();
    }
    else
    {
      op->vtkSphereWidget2::ScalingEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_ScalingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingEnabledOff();
    }
    else
    {
      op->vtkSphereWidget2::ScalingEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkSphereWidget2::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSphereWidget2_Methods[] = {
  {"IsTypeOf", PyvtkSphereWidget2_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard class methods for type information and printing.\n"},
  {"IsA", PyvtkSphereWidget2_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard class methods for type information and printing.\n"},
  {"SafeDownCast", PyvtkSphereWidget2_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSphereWidget2\nC++: static vtkSphereWidget2 *SafeDownCast(vtkObjectBase *o)\n\nStandard class methods for type information and printing.\n"},
  {"NewInstance", PyvtkSphereWidget2_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSphereWidget2\nC++: vtkSphereWidget2 *NewInstance()\n\nStandard class methods for type information and printing.\n"},
  {"SetRepresentation", PyvtkSphereWidget2_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkSphereRepresentation)\nC++: void SetRepresentation(vtkSphereRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"SetTranslationEnabled", PyvtkSphereWidget2_SetTranslationEnabled, METH_VARARGS,
   "V.SetTranslationEnabled(int)\nC++: virtual void SetTranslationEnabled(vtkTypeBool _arg)\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {"GetTranslationEnabled", PyvtkSphereWidget2_GetTranslationEnabled, METH_VARARGS,
   "V.GetTranslationEnabled() -> int\nC++: virtual vtkTypeBool GetTranslationEnabled()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {"TranslationEnabledOn", PyvtkSphereWidget2_TranslationEnabledOn, METH_VARARGS,
   "V.TranslationEnabledOn()\nC++: virtual void TranslationEnabledOn()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {"TranslationEnabledOff", PyvtkSphereWidget2_TranslationEnabledOff, METH_VARARGS,
   "V.TranslationEnabledOff()\nC++: virtual void TranslationEnabledOff()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {"SetScalingEnabled", PyvtkSphereWidget2_SetScalingEnabled, METH_VARARGS,
   "V.SetScalingEnabled(int)\nC++: virtual void SetScalingEnabled(vtkTypeBool _arg)\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {"GetScalingEnabled", PyvtkSphereWidget2_GetScalingEnabled, METH_VARARGS,
   "V.GetScalingEnabled() -> int\nC++: virtual vtkTypeBool GetScalingEnabled()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {"ScalingEnabledOn", PyvtkSphereWidget2_ScalingEnabledOn, METH_VARARGS,
   "V.ScalingEnabledOn()\nC++: virtual void ScalingEnabledOn()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {"ScalingEnabledOff", PyvtkSphereWidget2_ScalingEnabledOff, METH_VARARGS,
   "V.ScalingEnabledOff()\nC++: virtual void ScalingEnabledOff()\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {"CreateDefaultRepresentation", PyvtkSphereWidget2_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set. By\ndefault, this is an instance of the vtkSphereRepresentation\nclass.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSphereWidget2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkSphereWidget2", // tp_name
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
  PyvtkSphereWidget2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSphereWidget2_StaticNew()
{
  return vtkSphereWidget2::New();
}

PyObject *PyvtkSphereWidget2_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSphereWidget2_Type, PyvtkSphereWidget2_Methods,
    "vtkSphereWidget2",
 &PyvtkSphereWidget2_StaticNew);

  PyTypeObject *pytype = &PyvtkSphereWidget2_Type;

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

void PyVTKAddFile_vtkSphereWidget2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSphereWidget2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSphereWidget2", o) != 0)
  {
    Py_DECREF(o);
  }

}

