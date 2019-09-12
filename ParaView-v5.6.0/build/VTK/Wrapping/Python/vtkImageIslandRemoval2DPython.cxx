// python wrapper for vtkImageIslandRemoval2D
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
#include "vtkImageIslandRemoval2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageIslandRemoval2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageIslandRemoval2D_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageIslandRemoval2D_Doc =
  "vtkImageIslandRemoval2D - Removes small clusters in masks.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageIslandRemoval2D computes the area of separate islands in a\n"
  "mask image.  It removes any island that has less than AreaThreshold\n"
  "pixels.  Output has the same ScalarType as input.  It generates the\n"
  "whole 2D output image for any output request.\n\n";


static PyObject *
PyvtkImageIslandRemoval2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageIslandRemoval2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageIslandRemoval2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageIslandRemoval2D *tempr = vtkImageIslandRemoval2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageIslandRemoval2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageIslandRemoval2D::NewInstance());

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
PyvtkImageIslandRemoval2D_SetAreaThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaThreshold(temp0);
    }
    else
    {
      op->vtkImageIslandRemoval2D::SetAreaThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_GetAreaThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAreaThreshold() :
      op->vtkImageIslandRemoval2D::GetAreaThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SetSquareNeighborhood(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSquareNeighborhood");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSquareNeighborhood(temp0);
    }
    else
    {
      op->vtkImageIslandRemoval2D::SetSquareNeighborhood(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_GetSquareNeighborhood(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSquareNeighborhood");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSquareNeighborhood() :
      op->vtkImageIslandRemoval2D::GetSquareNeighborhood());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SquareNeighborhoodOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquareNeighborhoodOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SquareNeighborhoodOn();
    }
    else
    {
      op->vtkImageIslandRemoval2D::SquareNeighborhoodOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SquareNeighborhoodOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquareNeighborhoodOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SquareNeighborhoodOff();
    }
    else
    {
      op->vtkImageIslandRemoval2D::SquareNeighborhoodOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SetIslandValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIslandValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIslandValue(temp0);
    }
    else
    {
      op->vtkImageIslandRemoval2D::SetIslandValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_GetIslandValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIslandValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIslandValue() :
      op->vtkImageIslandRemoval2D::GetIslandValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SetReplaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplaceValue(temp0);
    }
    else
    {
      op->vtkImageIslandRemoval2D::SetReplaceValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_GetReplaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetReplaceValue() :
      op->vtkImageIslandRemoval2D::GetReplaceValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageIslandRemoval2D_Methods[] = {
  {"IsTypeOf", PyvtkImageIslandRemoval2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstructor: Sets default filter to be identity.\n"},
  {"IsA", PyvtkImageIslandRemoval2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstructor: Sets default filter to be identity.\n"},
  {"SafeDownCast", PyvtkImageIslandRemoval2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageIslandRemoval2D\nC++: static vtkImageIslandRemoval2D *SafeDownCast(\n    vtkObjectBase *o)\n\nConstructor: Sets default filter to be identity.\n"},
  {"NewInstance", PyvtkImageIslandRemoval2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageIslandRemoval2D\nC++: vtkImageIslandRemoval2D *NewInstance()\n\nConstructor: Sets default filter to be identity.\n"},
  {"SetAreaThreshold", PyvtkImageIslandRemoval2D_SetAreaThreshold, METH_VARARGS,
   "V.SetAreaThreshold(int)\nC++: virtual void SetAreaThreshold(int _arg)\n\nSet/Get the cutoff area for removal\n"},
  {"GetAreaThreshold", PyvtkImageIslandRemoval2D_GetAreaThreshold, METH_VARARGS,
   "V.GetAreaThreshold() -> int\nC++: virtual int GetAreaThreshold()\n\nSet/Get the cutoff area for removal\n"},
  {"SetSquareNeighborhood", PyvtkImageIslandRemoval2D_SetSquareNeighborhood, METH_VARARGS,
   "V.SetSquareNeighborhood(int)\nC++: virtual void SetSquareNeighborhood(vtkTypeBool _arg)\n\nSet/Get whether to use 4 or 8 neighbors\n"},
  {"GetSquareNeighborhood", PyvtkImageIslandRemoval2D_GetSquareNeighborhood, METH_VARARGS,
   "V.GetSquareNeighborhood() -> int\nC++: virtual vtkTypeBool GetSquareNeighborhood()\n\nSet/Get whether to use 4 or 8 neighbors\n"},
  {"SquareNeighborhoodOn", PyvtkImageIslandRemoval2D_SquareNeighborhoodOn, METH_VARARGS,
   "V.SquareNeighborhoodOn()\nC++: virtual void SquareNeighborhoodOn()\n\nSet/Get whether to use 4 or 8 neighbors\n"},
  {"SquareNeighborhoodOff", PyvtkImageIslandRemoval2D_SquareNeighborhoodOff, METH_VARARGS,
   "V.SquareNeighborhoodOff()\nC++: virtual void SquareNeighborhoodOff()\n\nSet/Get whether to use 4 or 8 neighbors\n"},
  {"SetIslandValue", PyvtkImageIslandRemoval2D_SetIslandValue, METH_VARARGS,
   "V.SetIslandValue(float)\nC++: virtual void SetIslandValue(double _arg)\n\nSet/Get the value to remove.\n"},
  {"GetIslandValue", PyvtkImageIslandRemoval2D_GetIslandValue, METH_VARARGS,
   "V.GetIslandValue() -> float\nC++: virtual double GetIslandValue()\n\nSet/Get the value to remove.\n"},
  {"SetReplaceValue", PyvtkImageIslandRemoval2D_SetReplaceValue, METH_VARARGS,
   "V.SetReplaceValue(float)\nC++: virtual void SetReplaceValue(double _arg)\n\nSet/Get the value to put in the place of removed pixels.\n"},
  {"GetReplaceValue", PyvtkImageIslandRemoval2D_GetReplaceValue, METH_VARARGS,
   "V.GetReplaceValue() -> float\nC++: virtual double GetReplaceValue()\n\nSet/Get the value to put in the place of removed pixels.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageIslandRemoval2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMorphologicalPython.vtkImageIslandRemoval2D", // tp_name
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
  PyvtkImageIslandRemoval2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageIslandRemoval2D_StaticNew()
{
  return vtkImageIslandRemoval2D::New();
}

PyObject *PyvtkImageIslandRemoval2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageIslandRemoval2D_Type, PyvtkImageIslandRemoval2D_Methods,
    "vtkImageIslandRemoval2D",
 &PyvtkImageIslandRemoval2D_StaticNew);

  PyTypeObject *pytype = &PyvtkImageIslandRemoval2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageIslandRemoval2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageIslandRemoval2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageIslandRemoval2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

