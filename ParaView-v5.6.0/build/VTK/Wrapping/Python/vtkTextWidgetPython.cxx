// python wrapper for vtkTextWidget
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
#include "vtkTextWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTextWidget_ClassNew(); }

#ifndef DECLARED_PyvtkBorderWidget_ClassNew
extern "C" { PyObject *PyvtkBorderWidget_ClassNew(); }
#define DECLARED_PyvtkBorderWidget_ClassNew
#endif

static const char *PyvtkTextWidget_Doc =
  "vtkTextWidget - widget for placing text on overlay plane\n\n"
  "Superclass: vtkBorderWidget\n\n"
  "This class provides support for interactively placing text on the 2D\n"
  "overlay plane. The text is defined by an instance of vtkTextActor. It\n"
  "uses the event bindings of its superclass (vtkBorderWidget). In\n"
  "addition, when the text is selected, the widget emits a\n"
  "WidgetActivateEvent that observers can watch for. This is useful for\n"
  "opening GUI dialogues to adjust font characteristics, etc. (Please\n"
  "see the superclass for a description of event bindings.)\n\n"
  "@sa\n"
  "vtkBorderWidget vtkCaptionWidget\n\n";


static PyObject *
PyvtkTextWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextWidget *op = static_cast<vtkTextWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextWidget *tempr = vtkTextWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextWidget *op = static_cast<vtkTextWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextWidget::NewInstance());

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
PyvtkTextWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextWidget *op = static_cast<vtkTextWidget *>(vp);

  vtkTextRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkTextWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextWidget_SetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextWidget *op = static_cast<vtkTextWidget *>(vp);

  vtkTextActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextActor"))
  {
    if (ap.IsBound())
    {
      op->SetTextActor(temp0);
    }
    else
    {
      op->vtkTextWidget::SetTextActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextWidget_GetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextWidget *op = static_cast<vtkTextWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextActor *tempr = (ap.IsBound() ?
      op->GetTextActor() :
      op->vtkTextWidget::GetTextActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextWidget *op = static_cast<vtkTextWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkTextWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextWidget_Methods[] = {
  {"IsTypeOf", PyvtkTextWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkTextWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkTextWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTextWidget\nC++: static vtkTextWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkTextWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTextWidget\nC++: vtkTextWidget *NewInstance()\n\nStandard VTK methods.\n"},
  {"SetRepresentation", PyvtkTextWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkTextRepresentation)\nC++: void SetRepresentation(vtkTextRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"SetTextActor", PyvtkTextWidget_SetTextActor, METH_VARARGS,
   "V.SetTextActor(vtkTextActor)\nC++: void SetTextActor(vtkTextActor *textActor)\n\nSpecify a vtkTextActor to manage. This is a convenient,\nalternative method to specify the representation for the widget\n(i.e., used instead of SetRepresentation()). It internally\ncreates a vtkTextRepresentation and then invokes\nvtkTextRepresentation::SetTextActor().\n"},
  {"GetTextActor", PyvtkTextWidget_GetTextActor, METH_VARARGS,
   "V.GetTextActor() -> vtkTextActor\nC++: vtkTextActor *GetTextActor()\n\nSpecify a vtkTextActor to manage. This is a convenient,\nalternative method to specify the representation for the widget\n(i.e., used instead of SetRepresentation()). It internally\ncreates a vtkTextRepresentation and then invokes\nvtkTextRepresentation::SetTextActor().\n"},
  {"CreateDefaultRepresentation", PyvtkTextWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTextWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkTextWidget", // tp_name
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
  PyvtkTextWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextWidget_StaticNew()
{
  return vtkTextWidget::New();
}

PyObject *PyvtkTextWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTextWidget_Type, PyvtkTextWidget_Methods,
    "vtkTextWidget",
 &PyvtkTextWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkTextWidget_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkBorderWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

