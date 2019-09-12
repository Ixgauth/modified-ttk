// python wrapper for vtkScalarBarWidget
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
#include "vtkScalarBarWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkScalarBarWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkScalarBarWidget_ClassNew(); }

#ifndef DECLARED_PyvtkBorderWidget_ClassNew
extern "C" { PyObject *PyvtkBorderWidget_ClassNew(); }
#define DECLARED_PyvtkBorderWidget_ClassNew
#endif

static const char *PyvtkScalarBarWidget_Doc =
  "vtkScalarBarWidget - 2D widget for manipulating a scalar bar\n\n"
  "Superclass: vtkBorderWidget\n\n"
  "This class provides support for interactively manipulating the\n"
  "position, size, and orientation of a scalar bar. It listens to Left\n"
  "mouse events and mouse movement. It also listens to Right mouse\n"
  "events and notifies any observers of Right mouse events on this\n"
  "object when they occur. It will change the cursor shape based on its\n"
  "location. If the cursor is over an edge of the scalar bar it will\n"
  "change the cursor shape to a resize edge shape. If the position of a\n"
  "scalar bar is moved to be close to the center of one of the four\n"
  "edges of the viewport, then the scalar bar will change its\n"
  "orientation to align with that edge. This orientation is sticky in\n"
  "that it will stay that orientation until the position is moved close\n"
  "to another edge.\n\n"
  "@sa\n"
  "vtkInteractorObserver\n\n";


static PyObject *
PyvtkScalarBarWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkScalarBarWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarBarWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkScalarBarWidget *tempr = vtkScalarBarWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarBarWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarBarWidget::NewInstance());

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
PyvtkScalarBarWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  vtkScalarBarRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarBarRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkScalarBarWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_GetScalarBarRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarBarRepresentation *tempr = (ap.IsBound() ?
      op->GetScalarBarRepresentation() :
      op->vtkScalarBarWidget::GetScalarBarRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_SetScalarBarActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarBarActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  vtkScalarBarActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarBarActor"))
  {
    if (ap.IsBound())
    {
      op->SetScalarBarActor(temp0);
    }
    else
    {
      op->vtkScalarBarWidget::SetScalarBarActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_GetScalarBarActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarBarActor *tempr = (ap.IsBound() ?
      op->GetScalarBarActor() :
      op->vtkScalarBarWidget::GetScalarBarActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_SetRepositionable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepositionable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepositionable(temp0);
    }
    else
    {
      op->vtkScalarBarWidget::SetRepositionable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_GetRepositionable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepositionable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepositionable() :
      op->vtkScalarBarWidget::GetRepositionable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_RepositionableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepositionableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RepositionableOn();
    }
    else
    {
      op->vtkScalarBarWidget::RepositionableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_RepositionableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepositionableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RepositionableOff();
    }
    else
    {
      op->vtkScalarBarWidget::RepositionableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkScalarBarWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkScalarBarWidget_Methods[] = {
  {"IsTypeOf", PyvtkScalarBarWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for class.\n"},
  {"IsA", PyvtkScalarBarWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for class.\n"},
  {"SafeDownCast", PyvtkScalarBarWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkScalarBarWidget\nC++: static vtkScalarBarWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for class.\n"},
  {"NewInstance", PyvtkScalarBarWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkScalarBarWidget\nC++: vtkScalarBarWidget *NewInstance()\n\nStandard methods for class.\n"},
  {"SetRepresentation", PyvtkScalarBarWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkScalarBarRepresentation)\nC++: virtual void SetRepresentation(\n    vtkScalarBarRepresentation *rep)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetScalarBarRepresentation", PyvtkScalarBarWidget_GetScalarBarRepresentation, METH_VARARGS,
   "V.GetScalarBarRepresentation() -> vtkScalarBarRepresentation\nC++: vtkScalarBarRepresentation *GetScalarBarRepresentation()\n\nReturn the representation as a vtkScalarBarRepresentation.\n"},
  {"SetScalarBarActor", PyvtkScalarBarWidget_SetScalarBarActor, METH_VARARGS,
   "V.SetScalarBarActor(vtkScalarBarActor)\nC++: virtual void SetScalarBarActor(vtkScalarBarActor *actor)\n\nGet the ScalarBar used by this Widget. One is created\nautomatically.\n"},
  {"GetScalarBarActor", PyvtkScalarBarWidget_GetScalarBarActor, METH_VARARGS,
   "V.GetScalarBarActor() -> vtkScalarBarActor\nC++: virtual vtkScalarBarActor *GetScalarBarActor()\n\nGet the ScalarBar used by this Widget. One is created\nautomatically.\n"},
  {"SetRepositionable", PyvtkScalarBarWidget_SetRepositionable, METH_VARARGS,
   "V.SetRepositionable(int)\nC++: virtual void SetRepositionable(vtkTypeBool _arg)\n\nCan the widget be moved. On by default. If off, the widget cannot\nbe moved around.\n\n* TODO: This functionality should probably be moved to the\n  superclass.\n"},
  {"GetRepositionable", PyvtkScalarBarWidget_GetRepositionable, METH_VARARGS,
   "V.GetRepositionable() -> int\nC++: virtual vtkTypeBool GetRepositionable()\n\nCan the widget be moved. On by default. If off, the widget cannot\nbe moved around.\n\n* TODO: This functionality should probably be moved to the\n  superclass.\n"},
  {"RepositionableOn", PyvtkScalarBarWidget_RepositionableOn, METH_VARARGS,
   "V.RepositionableOn()\nC++: virtual void RepositionableOn()\n\nCan the widget be moved. On by default. If off, the widget cannot\nbe moved around.\n\n* TODO: This functionality should probably be moved to the\n  superclass.\n"},
  {"RepositionableOff", PyvtkScalarBarWidget_RepositionableOff, METH_VARARGS,
   "V.RepositionableOff()\nC++: virtual void RepositionableOff()\n\nCan the widget be moved. On by default. If off, the widget cannot\nbe moved around.\n\n* TODO: This functionality should probably be moved to the\n  superclass.\n"},
  {"CreateDefaultRepresentation", PyvtkScalarBarWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkScalarBarWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkScalarBarWidget", // tp_name
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
  PyvtkScalarBarWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkScalarBarWidget_StaticNew()
{
  return vtkScalarBarWidget::New();
}

PyObject *PyvtkScalarBarWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkScalarBarWidget_Type, PyvtkScalarBarWidget_Methods,
    "vtkScalarBarWidget",
 &PyvtkScalarBarWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkScalarBarWidget_Type;

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

void PyVTKAddFile_vtkScalarBarWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkScalarBarWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkScalarBarWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

