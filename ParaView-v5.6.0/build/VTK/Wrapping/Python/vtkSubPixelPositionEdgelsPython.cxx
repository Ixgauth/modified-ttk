// python wrapper for vtkSubPixelPositionEdgels
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
#include "vtkSubPixelPositionEdgels.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSubPixelPositionEdgels(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSubPixelPositionEdgels_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkSubPixelPositionEdgels_Doc =
  "vtkSubPixelPositionEdgels - adjust edgel locations based on gradients.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSubPixelPositionEdgels is a filter that takes a series of linked\n"
  "edgels (digital curves) and gradient maps as input. It then adjusts\n"
  "the edgel locations based on the gradient data. Specifically, the\n"
  "algorithm first determines the neighboring gradient magnitudes of an\n"
  "edgel using simple interpolation of its neighbors. It then fits the\n"
  "following three data points: negative gradient direction gradient\n"
  "magnitude, edgel gradient magnitude and positive gradient direction\n"
  "gradient magnitude to a quadratic function. It then solves this\n"
  "quadratic to find the maximum gradient location along the gradient\n"
  "orientation.  It then modifies the edgels location along the gradient\n"
  "orientation to the calculated maximum location. This algorithm does\n"
  "not adjust an edgel in the direction orthogonal to its gradient\n"
  "vector.\n\n"
  "@sa\n"
  "vtkImageData vtkImageGradient vtkLinkEdgels\n\n";


static PyObject *
PyvtkSubPixelPositionEdgels_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSubPixelPositionEdgels::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSubPixelPositionEdgels::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSubPixelPositionEdgels *tempr = vtkSubPixelPositionEdgels::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSubPixelPositionEdgels *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSubPixelPositionEdgels::NewInstance());

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
PyvtkSubPixelPositionEdgels_SetGradMapsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradMapsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  vtkStructuredPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStructuredPoints"))
  {
    if (ap.IsBound())
    {
      op->SetGradMapsData(temp0);
    }
    else
    {
      op->vtkSubPixelPositionEdgels::SetGradMapsData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_GetGradMaps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradMaps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetGradMaps() :
      op->vtkSubPixelPositionEdgels::GetGradMaps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_SetTargetFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetFlag(temp0);
    }
    else
    {
      op->vtkSubPixelPositionEdgels::SetTargetFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_GetTargetFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTargetFlag() :
      op->vtkSubPixelPositionEdgels::GetTargetFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_TargetFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TargetFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TargetFlagOn();
    }
    else
    {
      op->vtkSubPixelPositionEdgels::TargetFlagOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_TargetFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TargetFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TargetFlagOff();
    }
    else
    {
      op->vtkSubPixelPositionEdgels::TargetFlagOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_SetTargetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetValue(temp0);
    }
    else
    {
      op->vtkSubPixelPositionEdgels::SetTargetValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_GetTargetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetValue() :
      op->vtkSubPixelPositionEdgels::GetTargetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSubPixelPositionEdgels_Methods[] = {
  {"IsTypeOf", PyvtkSubPixelPositionEdgels_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSubPixelPositionEdgels_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSubPixelPositionEdgels_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSubPixelPositionEdgels\nC++: static vtkSubPixelPositionEdgels *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSubPixelPositionEdgels_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSubPixelPositionEdgels\nC++: vtkSubPixelPositionEdgels *NewInstance()\n\n"},
  {"SetGradMapsData", PyvtkSubPixelPositionEdgels_SetGradMapsData, METH_VARARGS,
   "V.SetGradMapsData(vtkStructuredPoints)\nC++: void SetGradMapsData(vtkStructuredPoints *gm)\n\nSet/Get the gradient data for doing the position adjustments.\n"},
  {"GetGradMaps", PyvtkSubPixelPositionEdgels_GetGradMaps, METH_VARARGS,
   "V.GetGradMaps() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetGradMaps()\n\nSet/Get the gradient data for doing the position adjustments.\n"},
  {"SetTargetFlag", PyvtkSubPixelPositionEdgels_SetTargetFlag, METH_VARARGS,
   "V.SetTargetFlag(int)\nC++: virtual void SetTargetFlag(vtkTypeBool _arg)\n\nThese methods can make the positioning look for a target scalar\nvalue instead of looking for a maximum.\n"},
  {"GetTargetFlag", PyvtkSubPixelPositionEdgels_GetTargetFlag, METH_VARARGS,
   "V.GetTargetFlag() -> int\nC++: virtual vtkTypeBool GetTargetFlag()\n\nThese methods can make the positioning look for a target scalar\nvalue instead of looking for a maximum.\n"},
  {"TargetFlagOn", PyvtkSubPixelPositionEdgels_TargetFlagOn, METH_VARARGS,
   "V.TargetFlagOn()\nC++: virtual void TargetFlagOn()\n\nThese methods can make the positioning look for a target scalar\nvalue instead of looking for a maximum.\n"},
  {"TargetFlagOff", PyvtkSubPixelPositionEdgels_TargetFlagOff, METH_VARARGS,
   "V.TargetFlagOff()\nC++: virtual void TargetFlagOff()\n\nThese methods can make the positioning look for a target scalar\nvalue instead of looking for a maximum.\n"},
  {"SetTargetValue", PyvtkSubPixelPositionEdgels_SetTargetValue, METH_VARARGS,
   "V.SetTargetValue(float)\nC++: virtual void SetTargetValue(double _arg)\n\nThese methods can make the positioning look for a target scalar\nvalue instead of looking for a maximum.\n"},
  {"GetTargetValue", PyvtkSubPixelPositionEdgels_GetTargetValue, METH_VARARGS,
   "V.GetTargetValue() -> float\nC++: virtual double GetTargetValue()\n\nThese methods can make the positioning look for a target scalar\nvalue instead of looking for a maximum.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSubPixelPositionEdgels_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkSubPixelPositionEdgels", // tp_name
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
  PyvtkSubPixelPositionEdgels_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSubPixelPositionEdgels_StaticNew()
{
  return vtkSubPixelPositionEdgels::New();
}

PyObject *PyvtkSubPixelPositionEdgels_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSubPixelPositionEdgels_Type, PyvtkSubPixelPositionEdgels_Methods,
    "vtkSubPixelPositionEdgels",
 &PyvtkSubPixelPositionEdgels_StaticNew);

  PyTypeObject *pytype = &PyvtkSubPixelPositionEdgels_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSubPixelPositionEdgels(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSubPixelPositionEdgels_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSubPixelPositionEdgels", o) != 0)
  {
    Py_DECREF(o);
  }

}

