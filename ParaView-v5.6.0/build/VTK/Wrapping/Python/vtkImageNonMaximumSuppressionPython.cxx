// python wrapper for vtkImageNonMaximumSuppression
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
#include "vtkImageNonMaximumSuppression.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageNonMaximumSuppression(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageNonMaximumSuppression_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageNonMaximumSuppression_Doc =
  "vtkImageNonMaximumSuppression - Performs non-maximum suppression\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageNonMaximumSuppression Sets to zero any pixel that is not a\n"
  "peak. If a pixel has a neighbor along the vector that has larger\n"
  "magnitude, the smaller pixel is set to zero.  The filter takes two\n"
  "inputs: a magnitude and a vector.  Output is magnitude information\n"
  "and is always in doubles. Typically this filter is used with\n"
  "vtkImageGradient and vtkImageGradientMagnitude as inputs.\n\n";


static PyObject *
PyvtkImageNonMaximumSuppression_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageNonMaximumSuppression::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageNonMaximumSuppression::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageNonMaximumSuppression *tempr = vtkImageNonMaximumSuppression::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageNonMaximumSuppression *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageNonMaximumSuppression::NewInstance());

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
PyvtkImageNonMaximumSuppression_SetMagnitudeInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnitudeInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetMagnitudeInputData(temp0);
    }
    else
    {
      op->vtkImageNonMaximumSuppression::SetMagnitudeInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_SetVectorInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetVectorInputData(temp0);
    }
    else
    {
      op->vtkImageNonMaximumSuppression::SetVectorInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_SetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleBoundaries(temp0);
    }
    else
    {
      op->vtkImageNonMaximumSuppression::SetHandleBoundaries(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_GetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleBoundaries() :
      op->vtkImageNonMaximumSuppression::GetHandleBoundaries());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_HandleBoundariesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleBoundariesOn();
    }
    else
    {
      op->vtkImageNonMaximumSuppression::HandleBoundariesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_HandleBoundariesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleBoundariesOff();
    }
    else
    {
      op->vtkImageNonMaximumSuppression::HandleBoundariesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimensionality(temp0);
    }
    else
    {
      op->vtkImageNonMaximumSuppression::SetDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_GetDimensionalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMinValue() :
      op->vtkImageNonMaximumSuppression::GetDimensionalityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_GetDimensionalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMaxValue() :
      op->vtkImageNonMaximumSuppression::GetDimensionalityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageNonMaximumSuppression::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageNonMaximumSuppression_Methods[] = {
  {"IsTypeOf", PyvtkImageNonMaximumSuppression_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageNonMaximumSuppression_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageNonMaximumSuppression_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageNonMaximumSuppression\nC++: static vtkImageNonMaximumSuppression *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageNonMaximumSuppression_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageNonMaximumSuppression\nC++: vtkImageNonMaximumSuppression *NewInstance()\n\n"},
  {"SetMagnitudeInputData", PyvtkImageNonMaximumSuppression_SetMagnitudeInputData, METH_VARARGS,
   "V.SetMagnitudeInputData(vtkImageData)\nC++: void SetMagnitudeInputData(vtkImageData *input)\n\nSet the magnitude and vector inputs.\n"},
  {"SetVectorInputData", PyvtkImageNonMaximumSuppression_SetVectorInputData, METH_VARARGS,
   "V.SetVectorInputData(vtkImageData)\nC++: void SetVectorInputData(vtkImageData *input)\n\nSet the magnitude and vector inputs.\n"},
  {"SetHandleBoundaries", PyvtkImageNonMaximumSuppression_SetHandleBoundaries, METH_VARARGS,
   "V.SetHandleBoundaries(int)\nC++: virtual void SetHandleBoundaries(vtkTypeBool _arg)\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {"GetHandleBoundaries", PyvtkImageNonMaximumSuppression_GetHandleBoundaries, METH_VARARGS,
   "V.GetHandleBoundaries() -> int\nC++: virtual vtkTypeBool GetHandleBoundaries()\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {"HandleBoundariesOn", PyvtkImageNonMaximumSuppression_HandleBoundariesOn, METH_VARARGS,
   "V.HandleBoundariesOn()\nC++: virtual void HandleBoundariesOn()\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {"HandleBoundariesOff", PyvtkImageNonMaximumSuppression_HandleBoundariesOff, METH_VARARGS,
   "V.HandleBoundariesOff()\nC++: virtual void HandleBoundariesOff()\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {"SetDimensionality", PyvtkImageNonMaximumSuppression_SetDimensionality, METH_VARARGS,
   "V.SetDimensionality(int)\nC++: virtual void SetDimensionality(int _arg)\n\nDetermines how the input is interpreted (set of 2d slices or a 3D\nvolume)\n"},
  {"GetDimensionalityMinValue", PyvtkImageNonMaximumSuppression_GetDimensionalityMinValue, METH_VARARGS,
   "V.GetDimensionalityMinValue() -> int\nC++: virtual int GetDimensionalityMinValue()\n\nDetermines how the input is interpreted (set of 2d slices or a 3D\nvolume)\n"},
  {"GetDimensionalityMaxValue", PyvtkImageNonMaximumSuppression_GetDimensionalityMaxValue, METH_VARARGS,
   "V.GetDimensionalityMaxValue() -> int\nC++: virtual int GetDimensionalityMaxValue()\n\nDetermines how the input is interpreted (set of 2d slices or a 3D\nvolume)\n"},
  {"GetDimensionality", PyvtkImageNonMaximumSuppression_GetDimensionality, METH_VARARGS,
   "V.GetDimensionality() -> int\nC++: virtual int GetDimensionality()\n\nDetermines how the input is interpreted (set of 2d slices or a 3D\nvolume)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageNonMaximumSuppression_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingMorphologicalPython.vtkImageNonMaximumSuppression", // tp_name
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
  PyvtkImageNonMaximumSuppression_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageNonMaximumSuppression_StaticNew()
{
  return vtkImageNonMaximumSuppression::New();
}

PyObject *PyvtkImageNonMaximumSuppression_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageNonMaximumSuppression_Type, PyvtkImageNonMaximumSuppression_Methods,
    "vtkImageNonMaximumSuppression",
 &PyvtkImageNonMaximumSuppression_StaticNew);

  PyTypeObject *pytype = &PyvtkImageNonMaximumSuppression_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkThreadedImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageNonMaximumSuppression(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageNonMaximumSuppression_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageNonMaximumSuppression", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_IMAGE_NON_MAXIMUM_SUPPRESSION_MAGNITUDE_INPUT", 0 },
        { "VTK_IMAGE_NON_MAXIMUM_SUPPRESSION_VECTOR_INPUT", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

