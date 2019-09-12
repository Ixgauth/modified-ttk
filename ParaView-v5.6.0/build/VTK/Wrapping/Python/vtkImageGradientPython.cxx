// python wrapper for vtkImageGradient
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
#include "vtkImageGradient.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageGradient(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageGradient_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageGradient_Doc =
  "vtkImageGradient - Computes the gradient vector.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageGradient computes the gradient vector of an image.  The\n"
  "vector results are stored as scalar components. The Dimensionality\n"
  "determines whether to perform a 2d or 3d gradient. The default is two\n"
  "dimensional XY gradient.  OutputScalarType is always double. Gradient\n"
  "is computed using central differences.\n\n";


static PyObject *
PyvtkImageGradient_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageGradient::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradient_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageGradient::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradient_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageGradient *tempr = vtkImageGradient::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradient_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageGradient *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageGradient::NewInstance());

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
PyvtkImageGradient_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

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
      op->vtkImageGradient::SetDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradient_GetDimensionalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMinValue() :
      op->vtkImageGradient::GetDimensionalityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradient_GetDimensionalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMaxValue() :
      op->vtkImageGradient::GetDimensionalityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradient_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageGradient::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradient_SetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

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
      op->vtkImageGradient::SetHandleBoundaries(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradient_GetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleBoundaries() :
      op->vtkImageGradient::GetHandleBoundaries());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradient_HandleBoundariesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleBoundariesOn();
    }
    else
    {
      op->vtkImageGradient::HandleBoundariesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradient_HandleBoundariesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradient *op = static_cast<vtkImageGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleBoundariesOff();
    }
    else
    {
      op->vtkImageGradient::HandleBoundariesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageGradient_Methods[] = {
  {"IsTypeOf", PyvtkImageGradient_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageGradient_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageGradient_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageGradient\nC++: static vtkImageGradient *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageGradient_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageGradient\nC++: vtkImageGradient *NewInstance()\n\n"},
  {"SetDimensionality", PyvtkImageGradient_SetDimensionality, METH_VARARGS,
   "V.SetDimensionality(int)\nC++: virtual void SetDimensionality(int _arg)\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {"GetDimensionalityMinValue", PyvtkImageGradient_GetDimensionalityMinValue, METH_VARARGS,
   "V.GetDimensionalityMinValue() -> int\nC++: virtual int GetDimensionalityMinValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {"GetDimensionalityMaxValue", PyvtkImageGradient_GetDimensionalityMaxValue, METH_VARARGS,
   "V.GetDimensionalityMaxValue() -> int\nC++: virtual int GetDimensionalityMaxValue()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {"GetDimensionality", PyvtkImageGradient_GetDimensionality, METH_VARARGS,
   "V.GetDimensionality() -> int\nC++: virtual int GetDimensionality()\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {"SetHandleBoundaries", PyvtkImageGradient_SetHandleBoundaries, METH_VARARGS,
   "V.SetHandleBoundaries(int)\nC++: virtual void SetHandleBoundaries(vtkTypeBool _arg)\n\nGet/Set whether to handle boundaries.  If enabled, boundary\npixels are treated as duplicated so that central differencing\nworks for the boundary pixels.  If disabled, the output whole\nextent of the image is reduced by one pixel.\n"},
  {"GetHandleBoundaries", PyvtkImageGradient_GetHandleBoundaries, METH_VARARGS,
   "V.GetHandleBoundaries() -> int\nC++: virtual vtkTypeBool GetHandleBoundaries()\n\nGet/Set whether to handle boundaries.  If enabled, boundary\npixels are treated as duplicated so that central differencing\nworks for the boundary pixels.  If disabled, the output whole\nextent of the image is reduced by one pixel.\n"},
  {"HandleBoundariesOn", PyvtkImageGradient_HandleBoundariesOn, METH_VARARGS,
   "V.HandleBoundariesOn()\nC++: virtual void HandleBoundariesOn()\n\nGet/Set whether to handle boundaries.  If enabled, boundary\npixels are treated as duplicated so that central differencing\nworks for the boundary pixels.  If disabled, the output whole\nextent of the image is reduced by one pixel.\n"},
  {"HandleBoundariesOff", PyvtkImageGradient_HandleBoundariesOff, METH_VARARGS,
   "V.HandleBoundariesOff()\nC++: virtual void HandleBoundariesOff()\n\nGet/Set whether to handle boundaries.  If enabled, boundary\npixels are treated as duplicated so that central differencing\nworks for the boundary pixels.  If disabled, the output whole\nextent of the image is reduced by one pixel.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageGradient_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingGeneralPython.vtkImageGradient", // tp_name
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
  PyvtkImageGradient_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageGradient_StaticNew()
{
  return vtkImageGradient::New();
}

PyObject *PyvtkImageGradient_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageGradient_Type, PyvtkImageGradient_Methods,
    "vtkImageGradient",
 &PyvtkImageGradient_StaticNew);

  PyTypeObject *pytype = &PyvtkImageGradient_Type;

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

void PyVTKAddFile_vtkImageGradient(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageGradient_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageGradient", o) != 0)
  {
    Py_DECREF(o);
  }

}

