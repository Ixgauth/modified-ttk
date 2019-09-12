// python wrapper for vtkWidgetSet
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
#include "vtkWidgetSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWidgetSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWidgetSet_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkWidgetSet_Doc =
  "vtkWidgetSet - Synchronize a collection on vtkWidgets drawn on\ndifferent renderwindows using the Callback - Dispatch Action\nmechanism.\n\n"
  "Superclass: vtkObject\n\n"
  "The class synchronizes a set of vtkAbstractWidget(s). Widgets\n"
  "typically invoke \"Actions\" that drive the geometry/behaviour of their\n"
  "representations in response to interactor events. Interactor\n"
  "interactions on a render window are mapped into \"Callbacks\" by the\n"
  "widget, from which \"Actions\" are dispatched to the entire set. This\n"
  "architecture allows us to tie widgets existing in different render\n"
  "windows together. For instance a HandleWidget might exist on the\n"
  "sagittal view. Moving it around should update the representations of\n"
  "the corresponding handle widget that lies on the axial and coronal\n"
  "and volume views as well.\n\n"
  "@par User API: A user would use this class as follows.vtkWidgetSet\n"
  "*set = vtkWidgetSet::New();\n"
  "vtkParallelopipedWidget *w1 = vtkParallelopipedWidget::New();\n"
  "set->AddWidget(w1);\n"
  "w1->SetInteractor(axialRenderWindow->GetInteractor());\n"
  "vtkParallelopipedWidget *w2 = vtkParallelopipedWidget::New();\n"
  "set->AddWidget(w2);\n"
  "w2->SetInteractor(coronalRenderWindow->GetInteractor());\n"
  "vtkParallelopipedWidget *w3 = vtkParallelopipedWidget::New();\n"
  "set->AddWidget(w3);\n"
  "w3->SetInteractor(sagittalRenderWindow->GetInteractor());\n"
  "set->SetEnabled(1);\n\n"
  "@par Motivation: The motivation for this class is really to provide a\n"
  "usable API to tie together multiple widgets of the same kind. To\n"
  "enable this, subclasses of vtkAbstractWidget, must be written as\n"
  "follows:\n"
  "  They will generally have callback methods mapped to some user\n"
  "interaction such\n"
  "as:this->CallbackMapper->SetCallbackMethod(vtkCommand::LeftButtonPress\n"
  "Event,\n"
  "                        vtkEvent::NoModifier, 0, 0, nullptr,\n"
  "                        vtkPaintbrushWidget::BeginDrawStrokeEvent,\n"
  "                        this,\n"
  "vtkPaintbrushWidget::BeginDrawCallback);\n\n"
  "  The callback invoked when the left button is pressed looks\n"
  "like:void vtkPaintbrushWidget::BeginDrawCallback(vtkAbstractWidget\n"
  "*w)\n"
  "{\n"
  "  vtkPaintbrushWidget *self = vtkPaintbrushWidget::SafeDownCast(w);\n"
  "  self->WidgetSet->DispatchAction(self,\n"
  "&vtkPaintbrushWidget::BeginDrawAction);\n"
  "}\n\n"
  "  The actual code for handling the drawing is written in the\n"
  "BeginDrawAction method.void vtkPaintbrushWidget::BeginDrawAction(\n"
  "vtkPaintbrushWidget *dispatcher)\n"
  "{\n"
  "// Do stuff to draw...\n"
  "// Here dispatcher is the widget that was interacted with, the one\n"
  "that\n"
  "// dispatched an action to all the other widgets in its group. You\n"
  "may, if\n"
  "// necessary find it helpful to get parameters from it.\n"
  "//   For instance for a ResizeAction:\n"
  "//     if (this != dispatcher)\n"
  "//       {\n"
  "//       double *newsize =\n"
  "dispatcher->GetRepresentation()->GetSize();\n"
  "//       this->WidgetRep->SetSize(newsize);\n"
  "//       }\n"
  "//     else\n"
  "//       {\n"
  "//       this->WidgetRep->IncrementSizeByDelta();\n"
  "//       }\n"
  "}\n\n"
  "@warning\n"
  "Actions are always dispatched first to the activeWidget, the one\n"
  "calling the set, and then to the other widgets in the set.\n\n";


static PyObject *
PyvtkWidgetSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWidgetSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWidgetSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWidgetSet *tempr = vtkWidgetSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWidgetSet::NewInstance());

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
PyvtkWidgetSet_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

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
      op->vtkWidgetSet::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOn();
    }
    else
    {
      op->vtkWidgetSet::EnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOff();
    }
    else
    {
      op->vtkWidgetSet::EnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_AddWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  vtkAbstractWidget *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
  {
    if (ap.IsBound())
    {
      op->AddWidget(temp0);
    }
    else
    {
      op->vtkWidgetSet::AddWidget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_RemoveWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  vtkAbstractWidget *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
  {
    if (ap.IsBound())
    {
      op->RemoveWidget(temp0);
    }
    else
    {
      op->vtkWidgetSet::RemoveWidget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_GetNumberOfWidgets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfWidgets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfWidgets() :
      op->vtkWidgetSet::GetNumberOfWidgets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_GetNthWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractWidget *tempr = (ap.IsBound() ?
      op->GetNthWidget(temp0) :
      op->vtkWidgetSet::GetNthWidget(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetSet_Methods[] = {
  {"IsTypeOf", PyvtkWidgetSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for a VTK class.\n"},
  {"IsA", PyvtkWidgetSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for a VTK class.\n"},
  {"SafeDownCast", PyvtkWidgetSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWidgetSet\nC++: static vtkWidgetSet *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for a VTK class.\n"},
  {"NewInstance", PyvtkWidgetSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWidgetSet\nC++: vtkWidgetSet *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {"SetEnabled", PyvtkWidgetSet_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: virtual void SetEnabled(vtkTypeBool)\n\nMethod for activating and deactivating all widgets in the group.\n"},
  {"EnabledOn", PyvtkWidgetSet_EnabledOn, METH_VARARGS,
   "V.EnabledOn()\nC++: virtual void EnabledOn()\n\nMethod for activating and deactivating all widgets in the group.\n"},
  {"EnabledOff", PyvtkWidgetSet_EnabledOff, METH_VARARGS,
   "V.EnabledOff()\nC++: virtual void EnabledOff()\n\nMethod for activating and deactivating all widgets in the group.\n"},
  {"AddWidget", PyvtkWidgetSet_AddWidget, METH_VARARGS,
   "V.AddWidget(vtkAbstractWidget)\nC++: void AddWidget(vtkAbstractWidget *)\n\nAdd a widget to the set.\n"},
  {"RemoveWidget", PyvtkWidgetSet_RemoveWidget, METH_VARARGS,
   "V.RemoveWidget(vtkAbstractWidget)\nC++: void RemoveWidget(vtkAbstractWidget *)\n\nRemove a widget from the set\n"},
  {"GetNumberOfWidgets", PyvtkWidgetSet_GetNumberOfWidgets, METH_VARARGS,
   "V.GetNumberOfWidgets() -> int\nC++: unsigned int GetNumberOfWidgets()\n\nGet number of widgets in the set.\n"},
  {"GetNthWidget", PyvtkWidgetSet_GetNthWidget, METH_VARARGS,
   "V.GetNthWidget(int) -> vtkAbstractWidget\nC++: vtkAbstractWidget *GetNthWidget(unsigned int)\n\nGet the Nth widget in the set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWidgetSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkWidgetSet", // tp_name
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
  PyvtkWidgetSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWidgetSet_StaticNew()
{
  return vtkWidgetSet::New();
}

PyObject *PyvtkWidgetSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWidgetSet_Type, PyvtkWidgetSet_Methods,
    "vtkWidgetSet",
 &PyvtkWidgetSet_StaticNew);

  PyTypeObject *pytype = &PyvtkWidgetSet_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWidgetSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWidgetSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWidgetSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

