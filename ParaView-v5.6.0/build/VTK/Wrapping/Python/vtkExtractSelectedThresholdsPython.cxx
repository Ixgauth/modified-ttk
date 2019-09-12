// python wrapper for vtkExtractSelectedThresholds
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
#include "vtkExtractSelectedThresholds.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractSelectedThresholds(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractSelectedThresholds_ClassNew(); }

#ifndef DECLARED_PyvtkExtractSelectionBase_ClassNew
extern "C" { PyObject *PyvtkExtractSelectionBase_ClassNew(); }
#define DECLARED_PyvtkExtractSelectionBase_ClassNew
#endif

static const char *PyvtkExtractSelectedThresholds_Doc =
  "vtkExtractSelectedThresholds - extract a cells or points from a\ndataset that have values within a set of thresholds.\n\n"
  "Superclass: vtkExtractSelectionBase\n\n"
  "vtkExtractSelectedThresholds extracts all cells and points with\n"
  "attribute values that lie within a vtkSelection's THRESHOLD contents.\n"
  "The selecion can specify to threshold a particular array within\n"
  "either the point or cell attribute data of the input. This is similar\n"
  "to vtkThreshold but allows multiple thresholds ranges. This filter\n"
  "adds a scalar array called vtkOriginalCellIds that says what input\n"
  "cell produced each output cell. This is an example of a Pedigree ID\n"
  "which helps to trace back results.\n\n"
  "@sa\n"
  "vtkSelection vtkExtractSelection vtkThreshold\n\n";


static PyObject *
PyvtkExtractSelectedThresholds_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractSelectedThresholds::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedThresholds *op = static_cast<vtkExtractSelectedThresholds *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelectedThresholds::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractSelectedThresholds *tempr = vtkExtractSelectedThresholds::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedThresholds *op = static_cast<vtkExtractSelectedThresholds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelectedThresholds *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelectedThresholds::NewInstance());

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
PyvtkExtractSelectedThresholds_EvaluateValue_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = nullptr;
  vtkIdType temp1;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    int tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = nullptr;
  int temp1;
  vtkIdType temp2;
  vtkDataArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray"))
  {
    int tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = nullptr;
  vtkIdType temp1;
  vtkDataArray *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<int> store5(2*size5);
  int *temp5 = store5.Data();
  int *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);

    int tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2, temp3, temp4, temp5);

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = nullptr;
  int temp1;
  vtkIdType temp2;
  vtkDataArray *temp3 = nullptr;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<int> store5(2*size5);
  int *temp5 = store5.Data();
  int *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<int> store6(2*size6);
  int *temp6 = store6.Data();
  int *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);
    ap.Save(temp6, save6, size6);

    int tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (ap.HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s1(self, args);
    case 4:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s2(self, args);
    case 6:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s3(self, args);
    case 7:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateValue");
  return nullptr;
}


static PyMethodDef PyvtkExtractSelectedThresholds_Methods[] = {
  {"IsTypeOf", PyvtkExtractSelectedThresholds_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractSelectedThresholds_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractSelectedThresholds_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractSelectedThresholds\nC++: static vtkExtractSelectedThresholds *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractSelectedThresholds_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractSelectedThresholds\nC++: vtkExtractSelectedThresholds *NewInstance()\n\n"},
  {"EvaluateValue", PyvtkExtractSelectedThresholds_EvaluateValue, METH_VARARGS,
   "V.EvaluateValue(vtkDataArray, int, vtkDataArray) -> int\nC++: static int EvaluateValue(vtkDataArray *scalars, vtkIdType id,\n     vtkDataArray *lims)\nV.EvaluateValue(vtkDataArray, int, int, vtkDataArray) -> int\nC++: static int EvaluateValue(vtkDataArray *array,\n    int array_component_no, vtkIdType id, vtkDataArray *lims)\nV.EvaluateValue(vtkDataArray, int, vtkDataArray, [int, ...], [int,\n     ...], [int, ...]) -> int\nC++: static int EvaluateValue(vtkDataArray *scalars, vtkIdType id,\n     vtkDataArray *lims, int *AboveCount, int *BelowCount,\n    int *InsideCount)\nV.EvaluateValue(vtkDataArray, int, int, vtkDataArray, [int, ...],\n    [int, ...], [int, ...]) -> int\nC++: static int EvaluateValue(vtkDataArray *scalars,\n    int array_component_no, vtkIdType id, vtkDataArray *lims,\n    int *AboveCount, int *BelowCount, int *InsideCount)\n\nFunction for determining whether a value in a data array passes\nthe threshold test(s) provided in lims.  Returns 1 if the value\npasses at least one of the threshold tests. If scalars is\nnullptr, then the id itself is used as the scalar value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractSelectedThresholds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractSelectedThresholds", // tp_name
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
  PyvtkExtractSelectedThresholds_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractSelectedThresholds_StaticNew()
{
  return vtkExtractSelectedThresholds::New();
}

PyObject *PyvtkExtractSelectedThresholds_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractSelectedThresholds_Type, PyvtkExtractSelectedThresholds_Methods,
    "vtkExtractSelectedThresholds",
 &PyvtkExtractSelectedThresholds_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractSelectedThresholds_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExtractSelectionBase_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractSelectedThresholds(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractSelectedThresholds_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractSelectedThresholds", o) != 0)
  {
    Py_DECREF(o);
  }

}

