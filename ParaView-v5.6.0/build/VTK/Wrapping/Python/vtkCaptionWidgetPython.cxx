// python wrapper for vtkCaptionWidget
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
#include "vtkCaptionWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCaptionWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCaptionWidget_ClassNew(); }

#ifndef DECLARED_PyvtkBorderWidget_ClassNew
extern "C" { PyObject *PyvtkBorderWidget_ClassNew(); }
#define DECLARED_PyvtkBorderWidget_ClassNew
#endif

static const char *PyvtkCaptionWidget_Doc =
  "vtkCaptionWidget - widget for placing a caption (text plus leader)\n\n"
  "Superclass: vtkBorderWidget\n\n"
  "This class provides support for interactively placing a caption on\n"
  "the 2D overlay plane. A caption is defined by some text with a leader\n"
  "(e.g., arrow) that points from the text to a point in the scene. The\n"
  "caption is represented by a vtkCaptionRepresentation. It uses the\n"
  "event bindings of its superclass (vtkBorderWidget) to control the\n"
  "placement of the text, and adds the ability to move the attachment\n"
  "point around. In addition, when the caption text is selected, the\n"
  "widget emits a ActivateEvent that observers can watch for. This is\n"
  "useful for opening GUI dialogoues to adjust font characteristics,\n"
  "etc. (Please see the superclass for a description of event bindings.)\n\n"
  "Note that this widget extends the behavior of its superclass\n"
  "vtkBorderWidget. The end point of the leader can be selected and\n"
  "moved around with an internal vtkHandleWidget.\n\n"
  "@sa\n"
  "vtkBorderWidget vtkTextWidget\n\n";


static PyObject *
PyvtkCaptionWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCaptionWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCaptionWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCaptionWidget *tempr = vtkCaptionWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCaptionWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCaptionWidget::NewInstance());

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
PyvtkCaptionWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

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
      op->vtkCaptionWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

  vtkCaptionRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCaptionRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkCaptionWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionWidget_SetCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

  vtkCaptionActor2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCaptionActor2D"))
  {
    if (ap.IsBound())
    {
      op->SetCaptionActor2D(temp0);
    }
    else
    {
      op->vtkCaptionWidget::SetCaptionActor2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionWidget_GetCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCaptionActor2D *tempr = (ap.IsBound() ?
      op->GetCaptionActor2D() :
      op->vtkCaptionWidget::GetCaptionActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionWidget *op = static_cast<vtkCaptionWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkCaptionWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCaptionWidget_Methods[] = {
  {"IsTypeOf", PyvtkCaptionWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK class methods.\n"},
  {"IsA", PyvtkCaptionWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK class methods.\n"},
  {"SafeDownCast", PyvtkCaptionWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCaptionWidget\nC++: static vtkCaptionWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK class methods.\n"},
  {"NewInstance", PyvtkCaptionWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCaptionWidget\nC++: vtkCaptionWidget *NewInstance()\n\nStandard VTK class methods.\n"},
  {"SetEnabled", PyvtkCaptionWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int enabling) override;\n\nOverride superclasses' SetEnabled() method because the caption\nleader has its own dedicated widget.\n"},
  {"SetRepresentation", PyvtkCaptionWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkCaptionRepresentation)\nC++: void SetRepresentation(vtkCaptionRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"SetCaptionActor2D", PyvtkCaptionWidget_SetCaptionActor2D, METH_VARARGS,
   "V.SetCaptionActor2D(vtkCaptionActor2D)\nC++: void SetCaptionActor2D(vtkCaptionActor2D *capActor)\n\nSpecify a vtkCaptionActor2D to manage. This is convenient,\nalternative method to SetRepresentation(). It internally create a\nvtkCaptionRepresentation and then invokes\nvtkCaptionRepresentation::SetCaptionActor2D().\n"},
  {"GetCaptionActor2D", PyvtkCaptionWidget_GetCaptionActor2D, METH_VARARGS,
   "V.GetCaptionActor2D() -> vtkCaptionActor2D\nC++: vtkCaptionActor2D *GetCaptionActor2D()\n\nSpecify a vtkCaptionActor2D to manage. This is convenient,\nalternative method to SetRepresentation(). It internally create a\nvtkCaptionRepresentation and then invokes\nvtkCaptionRepresentation::SetCaptionActor2D().\n"},
  {"CreateDefaultRepresentation", PyvtkCaptionWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCaptionWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkCaptionWidget", // tp_name
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
  PyvtkCaptionWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCaptionWidget_StaticNew()
{
  return vtkCaptionWidget::New();
}

PyObject *PyvtkCaptionWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCaptionWidget_Type, PyvtkCaptionWidget_Methods,
    "vtkCaptionWidget",
 &PyvtkCaptionWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkCaptionWidget_Type;

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

void PyVTKAddFile_vtkCaptionWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCaptionWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCaptionWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

