// python wrapper for vtkUncertaintyTubeFilter
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
#include "vtkUncertaintyTubeFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUncertaintyTubeFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUncertaintyTubeFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkUncertaintyTubeFilter_Doc =
  "vtkUncertaintyTubeFilter - generate uncertainty tubes along a polyline\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkUncertaintyTubeFilter is a filter that generates ellipsoidal (in\n"
  "cross section) tubes that follows a polyline. The input is a\n"
  "vtkPolyData with polylines that have associated vector point data.\n"
  "The vector data represents the uncertainty of the polyline in the\n"
  "x-y-z directions.\n\n"
  "@warning\n"
  "The vector uncertainty values define an axis-aligned ellipsoid at\n"
  "each polyline point. The uncertainty tubes can be envisioned as the\n"
  "interpolation of these ellipsoids between the points defining the\n"
  "polyline (or rather, the interpolation of the cross section of the\n"
  "ellipsoids along the polyline).\n\n"
  "@sa\n"
  "vtkTensorGlyph vtkStreamTracer\n\n";


static PyObject *
PyvtkUncertaintyTubeFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUncertaintyTubeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUncertaintyTubeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUncertaintyTubeFilter *op = static_cast<vtkUncertaintyTubeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUncertaintyTubeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUncertaintyTubeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUncertaintyTubeFilter *tempr = vtkUncertaintyTubeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUncertaintyTubeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUncertaintyTubeFilter *op = static_cast<vtkUncertaintyTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUncertaintyTubeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUncertaintyTubeFilter::NewInstance());

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
PyvtkUncertaintyTubeFilter_SetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUncertaintyTubeFilter *op = static_cast<vtkUncertaintyTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSides(temp0);
    }
    else
    {
      op->vtkUncertaintyTubeFilter::SetNumberOfSides(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUncertaintyTubeFilter_GetNumberOfSidesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUncertaintyTubeFilter *op = static_cast<vtkUncertaintyTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesMinValue() :
      op->vtkUncertaintyTubeFilter::GetNumberOfSidesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUncertaintyTubeFilter_GetNumberOfSidesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUncertaintyTubeFilter *op = static_cast<vtkUncertaintyTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesMaxValue() :
      op->vtkUncertaintyTubeFilter::GetNumberOfSidesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUncertaintyTubeFilter_GetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUncertaintyTubeFilter *op = static_cast<vtkUncertaintyTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSides() :
      op->vtkUncertaintyTubeFilter::GetNumberOfSides());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUncertaintyTubeFilter_Methods[] = {
  {"IsTypeOf", PyvtkUncertaintyTubeFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for printing and obtaining type information for\ninstances of this class.\n"},
  {"IsA", PyvtkUncertaintyTubeFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for printing and obtaining type information for\ninstances of this class.\n"},
  {"SafeDownCast", PyvtkUncertaintyTubeFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkUncertaintyTubeFilter\nC++: static vtkUncertaintyTubeFilter *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for printing and obtaining type information for\ninstances of this class.\n"},
  {"NewInstance", PyvtkUncertaintyTubeFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUncertaintyTubeFilter\nC++: vtkUncertaintyTubeFilter *NewInstance()\n\nStandard methods for printing and obtaining type information for\ninstances of this class.\n"},
  {"SetNumberOfSides", PyvtkUncertaintyTubeFilter_SetNumberOfSides, METH_VARARGS,
   "V.SetNumberOfSides(int)\nC++: virtual void SetNumberOfSides(int _arg)\n\nSet / get the number of sides for the tube. At a minimum, the\nnumber of sides is 3.\n"},
  {"GetNumberOfSidesMinValue", PyvtkUncertaintyTubeFilter_GetNumberOfSidesMinValue, METH_VARARGS,
   "V.GetNumberOfSidesMinValue() -> int\nC++: virtual int GetNumberOfSidesMinValue()\n\nSet / get the number of sides for the tube. At a minimum, the\nnumber of sides is 3.\n"},
  {"GetNumberOfSidesMaxValue", PyvtkUncertaintyTubeFilter_GetNumberOfSidesMaxValue, METH_VARARGS,
   "V.GetNumberOfSidesMaxValue() -> int\nC++: virtual int GetNumberOfSidesMaxValue()\n\nSet / get the number of sides for the tube. At a minimum, the\nnumber of sides is 3.\n"},
  {"GetNumberOfSides", PyvtkUncertaintyTubeFilter_GetNumberOfSides, METH_VARARGS,
   "V.GetNumberOfSides() -> int\nC++: virtual int GetNumberOfSides()\n\nSet / get the number of sides for the tube. At a minimum, the\nnumber of sides is 3.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUncertaintyTubeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkUncertaintyTubeFilter", // tp_name
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
  PyvtkUncertaintyTubeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUncertaintyTubeFilter_StaticNew()
{
  return vtkUncertaintyTubeFilter::New();
}

PyObject *PyvtkUncertaintyTubeFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUncertaintyTubeFilter_Type, PyvtkUncertaintyTubeFilter_Methods,
    "vtkUncertaintyTubeFilter",
 &PyvtkUncertaintyTubeFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkUncertaintyTubeFilter_Type;

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

void PyVTKAddFile_vtkUncertaintyTubeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUncertaintyTubeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUncertaintyTubeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

