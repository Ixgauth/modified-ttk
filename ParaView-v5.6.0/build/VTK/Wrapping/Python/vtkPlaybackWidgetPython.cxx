// python wrapper for vtkPlaybackWidget
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
#include "vtkPlaybackWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlaybackWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPlaybackWidget_ClassNew(); }

#ifndef DECLARED_PyvtkBorderWidget_ClassNew
extern "C" { PyObject *PyvtkBorderWidget_ClassNew(); }
#define DECLARED_PyvtkBorderWidget_ClassNew
#endif

static const char *PyvtkPlaybackWidget_Doc =
  "vtkPlaybackWidget - 2D widget for controlling a playback stream\n\n"
  "Superclass: vtkBorderWidget\n\n"
  "This class provides support for interactively controlling the\n"
  "playback of a serial stream of information (e.g., animation sequence,\n"
  "video, etc.). Controls for play, stop, advance one step forward,\n"
  "advance one step backward, jump to beginning, and jump to end are\n"
  "available.\n\n"
  "@sa\n"
  "vtkBorderWidget\n\n";


static PyObject *
PyvtkPlaybackWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlaybackWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackWidget *op = static_cast<vtkPlaybackWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlaybackWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlaybackWidget *tempr = vtkPlaybackWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackWidget *op = static_cast<vtkPlaybackWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaybackWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlaybackWidget::NewInstance());

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
PyvtkPlaybackWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackWidget *op = static_cast<vtkPlaybackWidget *>(vp);

  vtkPlaybackRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaybackRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkPlaybackWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaybackWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaybackWidget *op = static_cast<vtkPlaybackWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkPlaybackWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlaybackWidget_Methods[] = {
  {"IsTypeOf", PyvtkPlaybackWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK class methods.\n"},
  {"IsA", PyvtkPlaybackWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK class methods.\n"},
  {"SafeDownCast", PyvtkPlaybackWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPlaybackWidget\nC++: static vtkPlaybackWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK class methods.\n"},
  {"NewInstance", PyvtkPlaybackWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPlaybackWidget\nC++: vtkPlaybackWidget *NewInstance()\n\nStandard VTK class methods.\n"},
  {"SetRepresentation", PyvtkPlaybackWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkPlaybackRepresentation)\nC++: void SetRepresentation(vtkPlaybackRepresentation *r)\n\nSpecify an instance of vtkPlaybackRepresentation used to\nrepresent this widget in the scene. Note that the representation\nis a subclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"CreateDefaultRepresentation", PyvtkPlaybackWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPlaybackWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkPlaybackWidget", // tp_name
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
  PyvtkPlaybackWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlaybackWidget_StaticNew()
{
  return vtkPlaybackWidget::New();
}

PyObject *PyvtkPlaybackWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPlaybackWidget_Type, PyvtkPlaybackWidget_Methods,
    "vtkPlaybackWidget",
 &PyvtkPlaybackWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkPlaybackWidget_Type;

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

void PyVTKAddFile_vtkPlaybackWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlaybackWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlaybackWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

