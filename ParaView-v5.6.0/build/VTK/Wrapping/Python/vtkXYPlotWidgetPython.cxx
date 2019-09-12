// python wrapper for vtkXYPlotWidget
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
#include "vtkXYPlotWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXYPlotWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXYPlotWidget_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorObserver_ClassNew
extern "C" { PyObject *PyvtkInteractorObserver_ClassNew(); }
#define DECLARED_PyvtkInteractorObserver_ClassNew
#endif

static const char *PyvtkXYPlotWidget_Doc =
  "vtkXYPlotWidget - 2D widget for manipulating a XY plot\n\n"
  "Superclass: vtkInteractorObserver\n\n"
  "This class provides support for interactively manipulating the\n"
  "position, size, and orientation of a XY Plot. It listens to Left\n"
  "mouse events and mouse movement. It will change the cursor shape\n"
  "based on its location. If the cursor is over an edge of thea XY plot\n"
  "it will change the cursor shape to a resize edge shape. If the\n"
  "position of a XY plot is moved to be close to the center of one of\n"
  "the four edges of the viewport, then the XY plot will change its\n"
  "orientation to align with that edge. This orientation is sticky in\n"
  "that it will stay that orientation until the position is moved close\n"
  "to another edge.\n\n"
  "@sa\n"
  "vtkInteractorObserver\n\n";


static PyObject *
PyvtkXYPlotWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXYPlotWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotWidget *op = static_cast<vtkXYPlotWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXYPlotWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXYPlotWidget *tempr = vtkXYPlotWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotWidget *op = static_cast<vtkXYPlotWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXYPlotWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXYPlotWidget::NewInstance());

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
PyvtkXYPlotWidget_SetXYPlotActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYPlotActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotWidget *op = static_cast<vtkXYPlotWidget *>(vp);

  vtkXYPlotActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXYPlotActor"))
  {
    if (ap.IsBound())
    {
      op->SetXYPlotActor(temp0);
    }
    else
    {
      op->vtkXYPlotWidget::SetXYPlotActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotWidget_GetXYPlotActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYPlotActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotWidget *op = static_cast<vtkXYPlotWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXYPlotActor *tempr = (ap.IsBound() ?
      op->GetXYPlotActor() :
      op->vtkXYPlotWidget::GetXYPlotActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotWidget *op = static_cast<vtkXYPlotWidget *>(vp);

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
      op->vtkXYPlotWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXYPlotWidget_Methods[] = {
  {"IsTypeOf", PyvtkXYPlotWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXYPlotWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXYPlotWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXYPlotWidget\nC++: static vtkXYPlotWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXYPlotWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXYPlotWidget\nC++: vtkXYPlotWidget *NewInstance()\n\n"},
  {"SetXYPlotActor", PyvtkXYPlotWidget_SetXYPlotActor, METH_VARARGS,
   "V.SetXYPlotActor(vtkXYPlotActor)\nC++: virtual void SetXYPlotActor(vtkXYPlotActor *)\n\nGet the XY plot used by this Widget. One is created\nautomatically.\n"},
  {"GetXYPlotActor", PyvtkXYPlotWidget_GetXYPlotActor, METH_VARARGS,
   "V.GetXYPlotActor() -> vtkXYPlotActor\nC++: virtual vtkXYPlotActor *GetXYPlotActor()\n\nGet the XY plot used by this Widget. One is created\nautomatically.\n"},
  {"SetEnabled", PyvtkXYPlotWidget_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: void SetEnabled(int) override;\n\nMethods for turning the interactor observer on and off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXYPlotWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkXYPlotWidget", // tp_name
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
  PyvtkXYPlotWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXYPlotWidget_StaticNew()
{
  return vtkXYPlotWidget::New();
}

PyObject *PyvtkXYPlotWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXYPlotWidget_Type, PyvtkXYPlotWidget_Methods,
    "vtkXYPlotWidget",
 &PyvtkXYPlotWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkXYPlotWidget_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorObserver_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXYPlotWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXYPlotWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXYPlotWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

