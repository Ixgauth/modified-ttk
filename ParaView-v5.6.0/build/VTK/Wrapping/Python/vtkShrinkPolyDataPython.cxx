// python wrapper for vtkShrinkPolyData
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
#include "vtkShrinkPolyData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkShrinkPolyData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkShrinkPolyData_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkShrinkPolyData_Doc =
  "vtkShrinkPolyData - shrink cells composing PolyData\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkShrinkPolyData shrinks cells composing a polygonal dataset (e.g.,\n"
  "vertices, lines, polygons, and triangle strips) towards their\n"
  "centroid. The centroid of a cell is computed as the average position\n"
  "of the cell points. Shrinking results in disconnecting the cells from\n"
  "one another. The output dataset type of this filter is polygonal\n"
  "data.\n\n"
  "During execution the filter passes its input cell data to its output.\n"
  "Point data attributes are copied to the points created during the\n"
  "shrinking process.\n\n"
  "@warning\n"
  "It is possible to turn cells inside out or cause self intersection in\n"
  "special cases. Users should use the vtkTriangleFilter to triangulate\n"
  "meshes that contain triangle strips.\n\n"
  "@sa\n"
  "vtkShrinkFilter\n\n";


static PyObject *
PyvtkShrinkPolyData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkShrinkPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShrinkPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkPolyData *op = static_cast<vtkShrinkPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShrinkPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShrinkPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkShrinkPolyData *tempr = vtkShrinkPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShrinkPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkPolyData *op = static_cast<vtkShrinkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShrinkPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShrinkPolyData::NewInstance());

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
PyvtkShrinkPolyData_SetShrinkFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkPolyData *op = static_cast<vtkShrinkPolyData *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShrinkFactor(temp0);
    }
    else
    {
      op->vtkShrinkPolyData::SetShrinkFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShrinkPolyData_GetShrinkFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkPolyData *op = static_cast<vtkShrinkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShrinkFactorMinValue() :
      op->vtkShrinkPolyData::GetShrinkFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShrinkPolyData_GetShrinkFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkPolyData *op = static_cast<vtkShrinkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShrinkFactorMaxValue() :
      op->vtkShrinkPolyData::GetShrinkFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShrinkPolyData_GetShrinkFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkPolyData *op = static_cast<vtkShrinkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShrinkFactor() :
      op->vtkShrinkPolyData::GetShrinkFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkShrinkPolyData_Methods[] = {
  {"IsTypeOf", PyvtkShrinkPolyData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkShrinkPolyData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkShrinkPolyData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkShrinkPolyData\nC++: static vtkShrinkPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkShrinkPolyData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkShrinkPolyData\nC++: vtkShrinkPolyData *NewInstance()\n\n"},
  {"SetShrinkFactor", PyvtkShrinkPolyData_SetShrinkFactor, METH_VARARGS,
   "V.SetShrinkFactor(float)\nC++: virtual void SetShrinkFactor(double _arg)\n\nSet the fraction of shrink for each cell.\n"},
  {"GetShrinkFactorMinValue", PyvtkShrinkPolyData_GetShrinkFactorMinValue, METH_VARARGS,
   "V.GetShrinkFactorMinValue() -> float\nC++: virtual double GetShrinkFactorMinValue()\n\nSet the fraction of shrink for each cell.\n"},
  {"GetShrinkFactorMaxValue", PyvtkShrinkPolyData_GetShrinkFactorMaxValue, METH_VARARGS,
   "V.GetShrinkFactorMaxValue() -> float\nC++: virtual double GetShrinkFactorMaxValue()\n\nSet the fraction of shrink for each cell.\n"},
  {"GetShrinkFactor", PyvtkShrinkPolyData_GetShrinkFactor, METH_VARARGS,
   "V.GetShrinkFactor() -> float\nC++: virtual double GetShrinkFactor()\n\nGet the fraction of shrink for each cell.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkShrinkPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkShrinkPolyData", // tp_name
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
  PyvtkShrinkPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkShrinkPolyData_StaticNew()
{
  return vtkShrinkPolyData::New();
}

PyObject *PyvtkShrinkPolyData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkShrinkPolyData_Type, PyvtkShrinkPolyData_Methods,
    "vtkShrinkPolyData",
 &PyvtkShrinkPolyData_StaticNew);

  PyTypeObject *pytype = &PyvtkShrinkPolyData_Type;

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

void PyVTKAddFile_vtkShrinkPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkShrinkPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkShrinkPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

