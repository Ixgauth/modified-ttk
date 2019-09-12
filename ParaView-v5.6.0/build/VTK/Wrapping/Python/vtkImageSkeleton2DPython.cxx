// python wrapper for vtkImageSkeleton2D
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
#include "vtkImageSkeleton2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSkeleton2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageSkeleton2D_ClassNew(); }

#ifndef DECLARED_PyvtkImageIterateFilter_ClassNew
extern "C" { PyObject *PyvtkImageIterateFilter_ClassNew(); }
#define DECLARED_PyvtkImageIterateFilter_ClassNew
#endif

static const char *PyvtkImageSkeleton2D_Doc =
  "vtkImageSkeleton2D - Skeleton of 2D images.\n\n"
  "Superclass: vtkImageIterateFilter\n\n"
  "vtkImageSkeleton2D should leave only single pixel width lines of\n"
  "non-zero-valued pixels (values of 1 are not allowed). It works by\n"
  "erosion on a 3x3 neighborhood with special rules. The number of\n"
  "iterations determines how far the filter can erode. There are three\n"
  "pruning levels:\n"
  " prune == 0 will leave traces on all angles...\n"
  " prune == 1 will not leave traces on 135 degree angles, but will on\n"
  "90.\n"
  " prune == 2 does not leave traces on any angles leaving only closed\n"
  "loops. Prune defaults to zero. The output scalar type is the same as\n"
  "the input.\n\n";


static PyObject *
PyvtkImageSkeleton2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSkeleton2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSkeleton2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSkeleton2D *tempr = vtkImageSkeleton2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSkeleton2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSkeleton2D::NewInstance());

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
PyvtkImageSkeleton2D_SetPrune(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrune");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrune(temp0);
    }
    else
    {
      op->vtkImageSkeleton2D::SetPrune(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_GetPrune(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrune");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrune() :
      op->vtkImageSkeleton2D::GetPrune());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_PruneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PruneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PruneOn();
    }
    else
    {
      op->vtkImageSkeleton2D::PruneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_PruneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PruneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PruneOff();
    }
    else
    {
      op->vtkImageSkeleton2D::PruneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIterations(temp0);
    }
    else
    {
      op->vtkImageSkeleton2D::SetNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSkeleton2D_Methods[] = {
  {"IsTypeOf", PyvtkImageSkeleton2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSkeleton2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSkeleton2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageSkeleton2D\nC++: static vtkImageSkeleton2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSkeleton2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageSkeleton2D\nC++: vtkImageSkeleton2D *NewInstance()\n\n"},
  {"SetPrune", PyvtkImageSkeleton2D_SetPrune, METH_VARARGS,
   "V.SetPrune(int)\nC++: virtual void SetPrune(vtkTypeBool _arg)\n\nWhen prune is on, only closed loops are left unchanged.\n"},
  {"GetPrune", PyvtkImageSkeleton2D_GetPrune, METH_VARARGS,
   "V.GetPrune() -> int\nC++: virtual vtkTypeBool GetPrune()\n\nWhen prune is on, only closed loops are left unchanged.\n"},
  {"PruneOn", PyvtkImageSkeleton2D_PruneOn, METH_VARARGS,
   "V.PruneOn()\nC++: virtual void PruneOn()\n\nWhen prune is on, only closed loops are left unchanged.\n"},
  {"PruneOff", PyvtkImageSkeleton2D_PruneOff, METH_VARARGS,
   "V.PruneOff()\nC++: virtual void PruneOff()\n\nWhen prune is on, only closed loops are left unchanged.\n"},
  {"SetNumberOfIterations", PyvtkImageSkeleton2D_SetNumberOfIterations, METH_VARARGS,
   "V.SetNumberOfIterations(int)\nC++: void SetNumberOfIterations(int num) override;\n\nSets the number of cycles in the erosion.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageSkeleton2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMorphologicalPython.vtkImageSkeleton2D", // tp_name
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
  PyvtkImageSkeleton2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSkeleton2D_StaticNew()
{
  return vtkImageSkeleton2D::New();
}

PyObject *PyvtkImageSkeleton2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageSkeleton2D_Type, PyvtkImageSkeleton2D_Methods,
    "vtkImageSkeleton2D",
 &PyvtkImageSkeleton2D_StaticNew);

  PyTypeObject *pytype = &PyvtkImageSkeleton2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageIterateFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageSkeleton2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSkeleton2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSkeleton2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

