// python wrapper for vtkFixedSizeHandleRepresentation3D
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
#include "vtkFixedSizeHandleRepresentation3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFixedSizeHandleRepresentation3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFixedSizeHandleRepresentation3D_ClassNew(); }

#ifndef DECLARED_PyvtkPolygonalHandleRepresentation3D_ClassNew
extern "C" { PyObject *PyvtkPolygonalHandleRepresentation3D_ClassNew(); }
#define DECLARED_PyvtkPolygonalHandleRepresentation3D_ClassNew
#endif

static const char *PyvtkFixedSizeHandleRepresentation3D_Doc =
  "vtkFixedSizeHandleRepresentation3D - no description provided.\n\n"
  "Superclass: vtkPolygonalHandleRepresentation3D\n\n"
;


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFixedSizeHandleRepresentation3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFixedSizeHandleRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFixedSizeHandleRepresentation3D *tempr = vtkFixedSizeHandleRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFixedSizeHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFixedSizeHandleRepresentation3D::NewInstance());

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
PyvtkFixedSizeHandleRepresentation3D_GetSphereSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphereSource *tempr = (ap.IsBound() ?
      op->GetSphereSource() :
      op->vtkFixedSizeHandleRepresentation3D::GetSphereSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_SetHandleSizeInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleSizeInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleSizeInPixels(temp0);
    }
    else
    {
      op->vtkFixedSizeHandleRepresentation3D::SetHandleSizeInPixels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_GetHandleSizeInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHandleSizeInPixels() :
      op->vtkFixedSizeHandleRepresentation3D::GetHandleSizeInPixels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_SetHandleSizeToleranceInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleSizeToleranceInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleSizeToleranceInPixels(temp0);
    }
    else
    {
      op->vtkFixedSizeHandleRepresentation3D::SetHandleSizeToleranceInPixels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedSizeHandleRepresentation3D_GetHandleSizeToleranceInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleSizeToleranceInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedSizeHandleRepresentation3D *op = static_cast<vtkFixedSizeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHandleSizeToleranceInPixels() :
      op->vtkFixedSizeHandleRepresentation3D::GetHandleSizeToleranceInPixels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFixedSizeHandleRepresentation3D_Methods[] = {
  {"IsTypeOf", PyvtkFixedSizeHandleRepresentation3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard vtk methods\n"},
  {"IsA", PyvtkFixedSizeHandleRepresentation3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard vtk methods\n"},
  {"SafeDownCast", PyvtkFixedSizeHandleRepresentation3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkFixedSizeHandleRepresentation3D\nC++: static vtkFixedSizeHandleRepresentation3D *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard vtk methods\n"},
  {"NewInstance", PyvtkFixedSizeHandleRepresentation3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFixedSizeHandleRepresentation3D\nC++: vtkFixedSizeHandleRepresentation3D *NewInstance()\n\nStandard vtk methods\n"},
  {"GetSphereSource", PyvtkFixedSizeHandleRepresentation3D_GetSphereSource, METH_VARARGS,
   "V.GetSphereSource() -> vtkSphereSource\nC++: virtual vtkSphereSource *GetSphereSource()\n\nGet the object used to render the spherical handle marker\n"},
  {"SetHandleSizeInPixels", PyvtkFixedSizeHandleRepresentation3D_SetHandleSizeInPixels, METH_VARARGS,
   "V.SetHandleSizeInPixels(float)\nC++: virtual void SetHandleSizeInPixels(double _arg)\n\nSet/Get the required handle size in pixels. Defaults to a width\nof 10 pixels.\n"},
  {"GetHandleSizeInPixels", PyvtkFixedSizeHandleRepresentation3D_GetHandleSizeInPixels, METH_VARARGS,
   "V.GetHandleSizeInPixels() -> float\nC++: virtual double GetHandleSizeInPixels()\n\nSet/Get the required handle size in pixels. Defaults to a width\nof 10 pixels.\n"},
  {"SetHandleSizeToleranceInPixels", PyvtkFixedSizeHandleRepresentation3D_SetHandleSizeToleranceInPixels, METH_VARARGS,
   "V.SetHandleSizeToleranceInPixels(float)\nC++: virtual void SetHandleSizeToleranceInPixels(double _arg)\n\nSpecify the acceptable handle size tolerance. During each render,\nthe handle 3D source will be updated to automatically match a\ndisplay size as specified by HandleSizeInPixels. This update will\nbe done if the handle size is larger than a tolerance. Default\nvalue of this tolerance is half a pixel.\n"},
  {"GetHandleSizeToleranceInPixels", PyvtkFixedSizeHandleRepresentation3D_GetHandleSizeToleranceInPixels, METH_VARARGS,
   "V.GetHandleSizeToleranceInPixels() -> float\nC++: virtual double GetHandleSizeToleranceInPixels()\n\nSpecify the acceptable handle size tolerance. During each render,\nthe handle 3D source will be updated to automatically match a\ndisplay size as specified by HandleSizeInPixels. This update will\nbe done if the handle size is larger than a tolerance. Default\nvalue of this tolerance is half a pixel.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFixedSizeHandleRepresentation3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkFixedSizeHandleRepresentation3D", // tp_name
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
  PyvtkFixedSizeHandleRepresentation3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFixedSizeHandleRepresentation3D_StaticNew()
{
  return vtkFixedSizeHandleRepresentation3D::New();
}

PyObject *PyvtkFixedSizeHandleRepresentation3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFixedSizeHandleRepresentation3D_Type, PyvtkFixedSizeHandleRepresentation3D_Methods,
    "vtkFixedSizeHandleRepresentation3D",
 &PyvtkFixedSizeHandleRepresentation3D_StaticNew);

  PyTypeObject *pytype = &PyvtkFixedSizeHandleRepresentation3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolygonalHandleRepresentation3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFixedSizeHandleRepresentation3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFixedSizeHandleRepresentation3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFixedSizeHandleRepresentation3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

