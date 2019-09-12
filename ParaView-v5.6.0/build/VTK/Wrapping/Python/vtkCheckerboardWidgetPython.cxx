// python wrapper for vtkCheckerboardWidget
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
#include "vtkCheckerboardWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCheckerboardWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCheckerboardWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkCheckerboardWidget_Doc =
  "vtkCheckerboardWidget - interactively set the number of divisions in\n2D image checkerboard\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkCheckerboardWidget is used to interactively control an\n"
  "instance of vtkImageCheckerboard (and an associated vtkImageActor\n"
  "used to display the checkerboard). The user can adjust the number of\n"
  "divisions in each of the i-j directions in a 2D image. A frame\n"
  "appears around the vtkImageActor with sliders along each side of the\n"
  "frame. The user can interactively adjust the sliders to the desired\n"
  "number of checkerboard subdivisions.\n\n"
  "To use this widget, specify an instance of vtkImageCheckerboard and\n"
  "an instance of vtkImageActor. By default, the widget responds to the\n"
  "following events:\n\n"
  "If the slider bead is selected:\n"
  "  LeftButtonPressEvent - select slider (if on slider)\n"
  "  LeftButtonReleaseEvent - release slider\n"
  "  MouseMoveEvent - move slider If the end caps or slider tube of a\n"
  "slider are selected:\n"
  "  LeftButtonPressEvent - jump (or animate) to cap or point on tube; \n"
  "It is possible to change these event bindings. Please refer to the\n"
  "documentation for vtkSliderWidget for more information. Advanced\n"
  "users may directly access and manipulate the sliders by obtaining the\n"
  "instances of vtkSliderWidget composing the vtkCheckerboard widget.\n\n"
  "@sa\n"
  "vtkImageCheckerboard vtkImageActor vtkSliderWidget\n"
  "vtkRectilinearWipeWidget\n\n";


static PyObject *
PyvtkCheckerboardWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCheckerboardWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCheckerboardWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCheckerboardWidget *tempr = vtkCheckerboardWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCheckerboardWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCheckerboardWidget::NewInstance());

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
PyvtkCheckerboardWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

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
      op->vtkCheckerboardWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  vtkCheckerboardRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCheckerboardRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkCheckerboardWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_GetCheckerboardRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckerboardRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCheckerboardRepresentation *tempr = (ap.IsBound() ?
      op->GetCheckerboardRepresentation() :
      op->vtkCheckerboardWidget::GetCheckerboardRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardWidget *op = static_cast<vtkCheckerboardWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkCheckerboardWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCheckerboardWidget_Methods[] = {
  {"IsTypeOf", PyvtkCheckerboardWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for a VTK class.\n"},
  {"IsA", PyvtkCheckerboardWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for a VTK class.\n"},
  {"SafeDownCast", PyvtkCheckerboardWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCheckerboardWidget\nC++: static vtkCheckerboardWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for a VTK class.\n"},
  {"NewInstance", PyvtkCheckerboardWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCheckerboardWidget\nC++: vtkCheckerboardWidget *NewInstance()\n\nStandard methods for a VTK class.\n"},
  {"SetEnabled", PyvtkCheckerboardWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it is a composite widget and\ndoes more than its superclasses' vtkAbstractWidget::SetEnabled()\nmethod.\n"},
  {"SetRepresentation", PyvtkCheckerboardWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkCheckerboardRepresentation)\nC++: void SetRepresentation(vtkCheckerboardRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetCheckerboardRepresentation", PyvtkCheckerboardWidget_GetCheckerboardRepresentation, METH_VARARGS,
   "V.GetCheckerboardRepresentation() -> vtkCheckerboardRepresentation\nC++: vtkCheckerboardRepresentation *GetCheckerboardRepresentation(\n    )\n\nReturn the representation as a vtkCheckerboardRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkCheckerboardWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCheckerboardWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkCheckerboardWidget", // tp_name
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
  PyvtkCheckerboardWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCheckerboardWidget_StaticNew()
{
  return vtkCheckerboardWidget::New();
}

PyObject *PyvtkCheckerboardWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCheckerboardWidget_Type, PyvtkCheckerboardWidget_Methods,
    "vtkCheckerboardWidget",
 &PyvtkCheckerboardWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkCheckerboardWidget_Type;

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

void PyVTKAddFile_vtkCheckerboardWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCheckerboardWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCheckerboardWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

