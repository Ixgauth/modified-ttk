// python wrapper for vtkResliceCursorActor
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
#include "vtkResliceCursorActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResliceCursorActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkResliceCursorActor_ClassNew(); }

#ifndef DECLARED_PyvtkProp3D_ClassNew
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }
#define DECLARED_PyvtkProp3D_ClassNew
#endif

static const char *PyvtkResliceCursorActor_Doc =
  "vtkResliceCursorActor - Represent a reslice cursor\n\n"
  "Superclass: vtkProp3D\n\n"
  "A reslice cursor consists of a pair of lines (cross hairs), thin or\n"
  "thick, that may be interactively manipulated for thin/thick reformats\n"
  "through the data.\n"
  "@sa\n"
  "vtkResliceCursor vtkResliceCursorPolyDataAlgorithm\n"
  "vtkResliceCursorWidget vtkResliceCursorRepresentation\n"
  "vtkResliceCursorLineRepresentation\n\n";


static PyObject *
PyvtkResliceCursorActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResliceCursorActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResliceCursorActor *tempr = vtkResliceCursorActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursorActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorActor::NewInstance());

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
PyvtkResliceCursorActor_GetCursorAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursorPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetCursorAlgorithm() :
      op->vtkResliceCursorActor::GetCursorAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkResliceCursorActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkResliceCursorActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkResliceCursorActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkResliceCursorActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkResliceCursorActor::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_GetCenterlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetCenterlineProperty(temp0) :
      op->vtkResliceCursorActor::GetCenterlineProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_GetThickSlabProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickSlabProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetThickSlabProperty(temp0) :
      op->vtkResliceCursorActor::GetThickSlabProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_GetCenterlineActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterlineActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetCenterlineActor(temp0) :
      op->vtkResliceCursorActor::GetCenterlineActor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorActor_SetUserMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorActor *op = static_cast<vtkResliceCursorActor *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetUserMatrix(temp0);
    }
    else
    {
      op->vtkResliceCursorActor::SetUserMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkResliceCursorActor_Methods[] = {
  {"IsTypeOf", PyvtkResliceCursorActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods\n"},
  {"IsA", PyvtkResliceCursorActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods\n"},
  {"SafeDownCast", PyvtkResliceCursorActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkResliceCursorActor\nC++: static vtkResliceCursorActor *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK methods\n"},
  {"NewInstance", PyvtkResliceCursorActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkResliceCursorActor\nC++: vtkResliceCursorActor *NewInstance()\n\nStandard VTK methods\n"},
  {"GetCursorAlgorithm", PyvtkResliceCursorActor_GetCursorAlgorithm, METH_VARARGS,
   "V.GetCursorAlgorithm() -> vtkResliceCursorPolyDataAlgorithm\nC++: virtual vtkResliceCursorPolyDataAlgorithm *GetCursorAlgorithm(\n    )\n\nGet the cursor algorithm. The cursor must be set on the algorithm\n"},
  {"RenderOpaqueGeometry", PyvtkResliceCursorActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkResliceCursorActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry? No.\n"},
  {"ReleaseGraphicsResources", PyvtkResliceCursorActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetBounds", PyvtkResliceCursorActor_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nGet the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {"GetMTime", PyvtkResliceCursorActor_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the actors mtime plus consider its algorithm.\n"},
  {"GetCenterlineProperty", PyvtkResliceCursorActor_GetCenterlineProperty, METH_VARARGS,
   "V.GetCenterlineProperty(int) -> vtkProperty\nC++: vtkProperty *GetCenterlineProperty(int i)\n\nGet property of the internal actor.\n"},
  {"GetThickSlabProperty", PyvtkResliceCursorActor_GetThickSlabProperty, METH_VARARGS,
   "V.GetThickSlabProperty(int) -> vtkProperty\nC++: vtkProperty *GetThickSlabProperty(int i)\n\nGet property of the internal actor.\n"},
  {"GetCenterlineActor", PyvtkResliceCursorActor_GetCenterlineActor, METH_VARARGS,
   "V.GetCenterlineActor(int) -> vtkActor\nC++: vtkActor *GetCenterlineActor(int axis)\n\nGet the centerline actor along a particular axis\n"},
  {"SetUserMatrix", PyvtkResliceCursorActor_SetUserMatrix, METH_VARARGS,
   "V.SetUserMatrix(vtkMatrix4x4)\nC++: virtual void SetUserMatrix(vtkMatrix4x4 *matrix)\n\nSet the user matrix on all the internal actors.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkResliceCursorActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkResliceCursorActor", // tp_name
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
  PyvtkResliceCursorActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResliceCursorActor_StaticNew()
{
  return vtkResliceCursorActor::New();
}

PyObject *PyvtkResliceCursorActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkResliceCursorActor_Type, PyvtkResliceCursorActor_Methods,
    "vtkResliceCursorActor",
 &PyvtkResliceCursorActor_StaticNew);

  PyTypeObject *pytype = &PyvtkResliceCursorActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProp3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResliceCursorActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResliceCursorActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResliceCursorActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

