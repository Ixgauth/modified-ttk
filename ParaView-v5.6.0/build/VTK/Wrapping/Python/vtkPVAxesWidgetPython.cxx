// python wrapper for vtkPVAxesWidget
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
#include "vtkPVAxesWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVAxesWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVAxesWidget_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorObserver_ClassNew
extern "C" { PyObject *PyvtkInteractorObserver_ClassNew(); }
#define DECLARED_PyvtkInteractorObserver_ClassNew
#endif

static const char *PyvtkPVAxesWidget_Doc =
  "vtkPVAxesWidget - A widget to manipulate vtkPVAxesWidget.\n\n"
  "Superclass: vtkInteractorObserver\n\n"
  "This widget creates and manages its own vtkPVAxesActor. To use this\n"
  "widget, make sure you call SetParentRenderer and SetInteractor (if\n"
  "interactivity is needed). Use `SetEnabled` to enable/disable\n"
  "interactivity and `SetVisibility` to show/hide the axes.\n\n"
  "ote This is an old class that uses old style for create widgets.\n"
  "Please don't use it as a reference for creating similar elements.\n\n";


static PyObject *
PyvtkPVAxesWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVAxesWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVAxesWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVAxesWidget *tempr = vtkPVAxesWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVAxesWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVAxesWidget::NewInstance());

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
PyvtkPVAxesWidget_SetAxesActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxesActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  vtkPVAxesActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVAxesActor"))
  {
    if (ap.IsBound())
    {
      op->SetAxesActor(temp0);
    }
    else
    {
      op->vtkPVAxesWidget::SetAxesActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetAxesActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVAxesActor *tempr = (ap.IsBound() ?
      op->GetAxesActor() :
      op->vtkPVAxesWidget::GetAxesActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetParentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetParentRenderer(temp0);
    }
    else
    {
      op->vtkPVAxesWidget::SetParentRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetParentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetParentRenderer() :
      op->vtkPVAxesWidget::GetParentRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

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
      op->vtkPVAxesWidget::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkPVAxesWidget::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

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
      op->vtkPVAxesWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkPVAxesWidget::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVisibility() :
      op->vtkPVAxesWidget::GetVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetOutlineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOutlineColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVAxesWidget::SetOutlineColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetOutlineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutlineColor() :
      op->vtkPVAxesWidget::GetOutlineColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVAxesWidget::SetAxisLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisLabelColor() :
      op->vtkPVAxesWidget::GetAxisLabelColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetViewport(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPVAxesWidget::SetViewport(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAxesWidget_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAxesWidget *op = static_cast<vtkPVAxesWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkPVAxesWidget::GetViewport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVAxesWidget_Methods[] = {
  {"IsTypeOf", PyvtkPVAxesWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVAxesWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVAxesWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVAxesWidget\nC++: static vtkPVAxesWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVAxesWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVAxesWidget\nC++: vtkPVAxesWidget *NewInstance()\n\n"},
  {"SetAxesActor", PyvtkPVAxesWidget_SetAxesActor, METH_VARARGS,
   "V.SetAxesActor(vtkPVAxesActor)\nC++: void SetAxesActor(vtkPVAxesActor *actor)\n\nSet/get the axes actor to be displayed in this 3D widget.\n"},
  {"GetAxesActor", PyvtkPVAxesWidget_GetAxesActor, METH_VARARGS,
   "V.GetAxesActor() -> vtkPVAxesActor\nC++: virtual vtkPVAxesActor *GetAxesActor()\n\nSet/get the axes actor to be displayed in this 3D widget.\n"},
  {"SetParentRenderer", PyvtkPVAxesWidget_SetParentRenderer, METH_VARARGS,
   "V.SetParentRenderer(vtkRenderer)\nC++: void SetParentRenderer(vtkRenderer *ren)\n\nSet the renderer this 3D widget will be contained in.\n"},
  {"GetParentRenderer", PyvtkPVAxesWidget_GetParentRenderer, METH_VARARGS,
   "V.GetParentRenderer() -> vtkRenderer\nC++: vtkRenderer *GetParentRenderer()\n\nSet the renderer this 3D widget will be contained in.\n"},
  {"SetInteractor", PyvtkPVAxesWidget_SetInteractor, METH_VARARGS,
   "V.SetInteractor(vtkRenderWindowInteractor)\nC++: void SetInteractor(vtkRenderWindowInteractor *iren) override;\n\nOverridden to add interaction observers.\n"},
  {"GetRenderer", PyvtkPVAxesWidget_GetRenderer, METH_VARARGS,
   "V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nGet the renderer.\n"},
  {"SetEnabled", PyvtkPVAxesWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nOverridden to update this->Enabled and hide outline when\ndisabled. Use this method to enable/disable interactivity.\n"},
  {"SetVisibility", PyvtkPVAxesWidget_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool val)\n\nGet/Set the visibility. Note if visibility is off, Enabled state\nis ignored and assumed off.\n"},
  {"GetVisibility", PyvtkPVAxesWidget_GetVisibility, METH_VARARGS,
   "V.GetVisibility() -> bool\nC++: bool GetVisibility()\n\nGet/Set the visibility. Note if visibility is off, Enabled state\nis ignored and assumed off.\n"},
  {"SetOutlineColor", PyvtkPVAxesWidget_SetOutlineColor, METH_VARARGS,
   "V.SetOutlineColor(float, float, float)\nC++: void SetOutlineColor(double r, double g, double b)\n\nSet/get the color of the outline of this widget.  The outline is\nvisible when (in interactive mode) the cursor is over this 3D\nwidget.\n"},
  {"GetOutlineColor", PyvtkPVAxesWidget_GetOutlineColor, METH_VARARGS,
   "V.GetOutlineColor() -> (float, ...)\nC++: double *GetOutlineColor()\n\nSet/get the color of the outline of this widget.  The outline is\nvisible when (in interactive mode) the cursor is over this 3D\nwidget.\n"},
  {"SetAxisLabelColor", PyvtkPVAxesWidget_SetAxisLabelColor, METH_VARARGS,
   "V.SetAxisLabelColor(float, float, float)\nC++: void SetAxisLabelColor(double r, double g, double b)\n\nSet/get the color of the axis labels of this widget.\n"},
  {"GetAxisLabelColor", PyvtkPVAxesWidget_GetAxisLabelColor, METH_VARARGS,
   "V.GetAxisLabelColor() -> (float, ...)\nC++: double *GetAxisLabelColor()\n\nSet/get the color of the axis labels of this widget.\n"},
  {"SetViewport", PyvtkPVAxesWidget_SetViewport, METH_VARARGS,
   "V.SetViewport(float, float, float, float)\nC++: void SetViewport(double minX, double minY, double maxX,\n    double maxY)\n\nSet/get the viewport to position/size this 3D widget.\n"},
  {"GetViewport", PyvtkPVAxesWidget_GetViewport, METH_VARARGS,
   "V.GetViewport() -> (float, ...)\nC++: double *GetViewport()\n\nSet/get the viewport to position/size this 3D widget.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVAxesWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVAxesWidget", // tp_name
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
  PyvtkPVAxesWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVAxesWidget_StaticNew()
{
  return vtkPVAxesWidget::New();
}

PyObject *PyvtkPVAxesWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVAxesWidget_Type, PyvtkPVAxesWidget_Methods,
    "vtkPVAxesWidget",
 &PyvtkPVAxesWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkPVAxesWidget_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorObserver_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyInt_FromLong(1);
  if (o)
  {
    PyDict_SetItemString(d, "RendererLayer", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVAxesWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVAxesWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVAxesWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

