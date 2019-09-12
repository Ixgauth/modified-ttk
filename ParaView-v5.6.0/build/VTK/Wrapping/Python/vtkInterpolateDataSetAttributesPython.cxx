// python wrapper for vtkInterpolateDataSetAttributes
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
#include "vtkInterpolateDataSetAttributes.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInterpolateDataSetAttributes(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInterpolateDataSetAttributes_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkInterpolateDataSetAttributes_Doc =
  "vtkInterpolateDataSetAttributes - interpolate scalars, vectors, etc.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "and other dataset attributes\n\n"
  "vtkInterpolateDataSetAttributes is a filter that interpolates data\n"
  "set attribute values between input data sets. The input to the filter\n"
  "must be datasets of the same type, same number of cells, and same\n"
  "number of points. The output of the filter is a data set of the same\n"
  "type as the input dataset and whose attribute values have been\n"
  "interpolated at the parametric value specified.\n\n"
  "The filter is used by specifying two or more input data sets (total\n"
  "of N), and a parametric value t (0 <= t <= N-1). The output will\n"
  "contain interpolated data set attributes common to all input data\n"
  "sets. (For example, if one input has scalars and vectors, and another\n"
  "has just scalars, then only scalars will be interpolated and output.)\n\n";


static PyObject *
PyvtkInterpolateDataSetAttributes_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInterpolateDataSetAttributes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInterpolateDataSetAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInterpolateDataSetAttributes *tempr = vtkInterpolateDataSetAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInterpolateDataSetAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInterpolateDataSetAttributes::NewInstance());

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
PyvtkInterpolateDataSetAttributes_GetInputList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetCollection *tempr = (ap.IsBound() ?
      op->GetInputList() :
      op->vtkInterpolateDataSetAttributes::GetInputList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_SetT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetT(temp0);
    }
    else
    {
      op->vtkInterpolateDataSetAttributes::SetT(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_GetTMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTMinValue() :
      op->vtkInterpolateDataSetAttributes::GetTMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_GetTMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTMaxValue() :
      op->vtkInterpolateDataSetAttributes::GetTMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_GetT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetT() :
      op->vtkInterpolateDataSetAttributes::GetT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInterpolateDataSetAttributes_Methods[] = {
  {"IsTypeOf", PyvtkInterpolateDataSetAttributes_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInterpolateDataSetAttributes_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInterpolateDataSetAttributes_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInterpolateDataSetAttributes\nC++: static vtkInterpolateDataSetAttributes *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInterpolateDataSetAttributes_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInterpolateDataSetAttributes\nC++: vtkInterpolateDataSetAttributes *NewInstance()\n\n"},
  {"GetInputList", PyvtkInterpolateDataSetAttributes_GetInputList, METH_VARARGS,
   "V.GetInputList() -> vtkDataSetCollection\nC++: vtkDataSetCollection *GetInputList()\n\nReturn the list of inputs to this filter.\n"},
  {"SetT", PyvtkInterpolateDataSetAttributes_SetT, METH_VARARGS,
   "V.SetT(float)\nC++: virtual void SetT(double _arg)\n\nSpecify interpolation parameter t.\n"},
  {"GetTMinValue", PyvtkInterpolateDataSetAttributes_GetTMinValue, METH_VARARGS,
   "V.GetTMinValue() -> float\nC++: virtual double GetTMinValue()\n\nSpecify interpolation parameter t.\n"},
  {"GetTMaxValue", PyvtkInterpolateDataSetAttributes_GetTMaxValue, METH_VARARGS,
   "V.GetTMaxValue() -> float\nC++: virtual double GetTMaxValue()\n\nSpecify interpolation parameter t.\n"},
  {"GetT", PyvtkInterpolateDataSetAttributes_GetT, METH_VARARGS,
   "V.GetT() -> float\nC++: virtual double GetT()\n\nSpecify interpolation parameter t.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInterpolateDataSetAttributes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkInterpolateDataSetAttributes", // tp_name
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
  PyvtkInterpolateDataSetAttributes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInterpolateDataSetAttributes_StaticNew()
{
  return vtkInterpolateDataSetAttributes::New();
}

PyObject *PyvtkInterpolateDataSetAttributes_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInterpolateDataSetAttributes_Type, PyvtkInterpolateDataSetAttributes_Methods,
    "vtkInterpolateDataSetAttributes",
 &PyvtkInterpolateDataSetAttributes_StaticNew);

  PyTypeObject *pytype = &PyvtkInterpolateDataSetAttributes_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInterpolateDataSetAttributes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInterpolateDataSetAttributes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInterpolateDataSetAttributes", o) != 0)
  {
    Py_DECREF(o);
  }

}

