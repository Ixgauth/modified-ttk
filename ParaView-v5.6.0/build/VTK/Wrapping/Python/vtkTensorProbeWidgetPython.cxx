// python wrapper for vtkTensorProbeWidget
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
#include "vtkTensorProbeWidget.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTensorProbeWidget(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTensorProbeWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static const char *PyvtkTensorProbeWidget_Doc =
  "vtkTensorProbeWidget - a widget to probe tensors on a polyline\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The class is used to probe tensors on a trajectory. The\n"
  "representation (vtkTensorProbeRepresentation) is free to choose its\n"
  "own method of rendering the tensors. For instance\n"
  "vtkEllipsoidTensorProbeRepresentation renders the tensors as\n"
  "ellipsoids. The interactions of the widget are controlled by the left\n"
  "mouse button. A left click on the tensor selects it. It can dragged\n"
  "around the trajectory to probe the tensors on it.\n\n"
  "For instance dragging the ellipsoid around with\n"
  "vtkEllipsoidTensorProbeRepresentation will manifest itself with the\n"
  "ellipsoid shape changing as needed along the trajectory.\n\n";


static PyObject *
PyvtkTensorProbeWidget_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTensorProbeWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTensorProbeWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTensorProbeWidget *tempr = vtkTensorProbeWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTensorProbeWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTensorProbeWidget::NewInstance());

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
PyvtkTensorProbeWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  vtkTensorProbeRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTensorProbeRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkTensorProbeWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_GetTensorProbeRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorProbeRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTensorProbeRepresentation *tempr = (ap.IsBound() ?
      op->GetTensorProbeRepresentation() :
      op->vtkTensorProbeWidget::GetTensorProbeRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeWidget *op = static_cast<vtkTensorProbeWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkTensorProbeWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTensorProbeWidget_Methods[] = {
  {"IsTypeOf", PyvtkTensorProbeWidget_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK class macros.\n"},
  {"IsA", PyvtkTensorProbeWidget_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK class macros.\n"},
  {"SafeDownCast", PyvtkTensorProbeWidget_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTensorProbeWidget\nC++: static vtkTensorProbeWidget *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK class macros.\n"},
  {"NewInstance", PyvtkTensorProbeWidget_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTensorProbeWidget\nC++: vtkTensorProbeWidget *NewInstance()\n\nStandard VTK class macros.\n"},
  {"SetRepresentation", PyvtkTensorProbeWidget_SetRepresentation, METH_VARARGS,
   "V.SetRepresentation(vtkTensorProbeRepresentation)\nC++: void SetRepresentation(vtkTensorProbeRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetTensorProbeRepresentation", PyvtkTensorProbeWidget_GetTensorProbeRepresentation, METH_VARARGS,
   "V.GetTensorProbeRepresentation() -> vtkTensorProbeRepresentation\nC++: vtkTensorProbeRepresentation *GetTensorProbeRepresentation()\n\nReturn the representation as a vtkTensorProbeRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkTensorProbeWidget_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation()\nC++: void CreateDefaultRepresentation() override;\n\nSee vtkWidgetRepresentation for details.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTensorProbeWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkTensorProbeWidget", // tp_name
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
  PyvtkTensorProbeWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTensorProbeWidget_StaticNew()
{
  return vtkTensorProbeWidget::New();
}

PyObject *PyvtkTensorProbeWidget_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTensorProbeWidget_Type, PyvtkTensorProbeWidget_Methods,
    "vtkTensorProbeWidget",
 &PyvtkTensorProbeWidget_StaticNew);

  PyTypeObject *pytype = &PyvtkTensorProbeWidget_Type;

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

void PyVTKAddFile_vtkTensorProbeWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTensorProbeWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTensorProbeWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

