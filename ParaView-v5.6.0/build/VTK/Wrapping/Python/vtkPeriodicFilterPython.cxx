// python wrapper for vtkPeriodicFilter
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
#include "vtkPeriodicFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPeriodicFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPeriodicFilter_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkPeriodicFilter_Doc =
  "vtkPeriodicFilter - A filter to produce mapped  periodic multiblock\ndataset from a single block\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "Generate periodic dataset by transforming points, vectors, tensors\n"
  "data arrays from an original data array. The generated dataset is of\n"
  "the same type than the input (float or double). This is an abstract\n"
  "class which do not implement the actual transformation. Point\n"
  "coordinates are transformed, as well as all vectors (3-components)\n"
  "and tensors (9 components) in points and cell data arrays. The\n"
  "generated multiblock will have the same tree architecture than the\n"
  "input, except transformed leaves are replaced by a\n"
  "vtkMultipieceDataSet. Supported input leaf dataset type are:\n"
  "vtkPolyData, vtkStructuredGrid and vtkUnstructuredGrid. Other data\n"
  "objects are transformed using the transform filter (at a high cost!).\n\n";


static PyObject *
PyvtkPeriodicFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPeriodicFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPeriodicFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPeriodicFilter *tempr = vtkPeriodicFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPeriodicFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPeriodicFilter::NewInstance());

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
PyvtkPeriodicFilter_SetIterationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIterationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIterationMode(temp0);
    }
    else
    {
      op->vtkPeriodicFilter::SetIterationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_GetIterationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIterationModeMinValue() :
      op->vtkPeriodicFilter::GetIterationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_GetIterationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIterationModeMaxValue() :
      op->vtkPeriodicFilter::GetIterationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_GetIterationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIterationMode() :
      op->vtkPeriodicFilter::GetIterationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_SetIterationModeToDirectNb(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIterationModeToDirectNb");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIterationModeToDirectNb();
    }
    else
    {
      op->vtkPeriodicFilter::SetIterationModeToDirectNb();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_SetIterationModeToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIterationModeToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIterationModeToMax();
    }
    else
    {
      op->vtkPeriodicFilter::SetIterationModeToMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_SetNumberOfPeriods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPeriods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPeriods(temp0);
    }
    else
    {
      op->vtkPeriodicFilter::SetNumberOfPeriods(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_GetNumberOfPeriods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPeriods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPeriods() :
      op->vtkPeriodicFilter::GetNumberOfPeriods());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_AddIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddIndex(temp0);
    }
    else
    {
      op->vtkPeriodicFilter::AddIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_RemoveIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveIndex(temp0);
    }
    else
    {
      op->vtkPeriodicFilter::RemoveIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_RemoveAllIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllIndices();
    }
    else
    {
      op->vtkPeriodicFilter::RemoveAllIndices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPeriodicFilter_Methods[] = {
  {"IsTypeOf", PyvtkPeriodicFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPeriodicFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPeriodicFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPeriodicFilter\nC++: static vtkPeriodicFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPeriodicFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPeriodicFilter\nC++: vtkPeriodicFilter *NewInstance()\n\n"},
  {"SetIterationMode", PyvtkPeriodicFilter_SetIterationMode, METH_VARARGS,
   "V.SetIterationMode(int)\nC++: virtual void SetIterationMode(int _arg)\n\nSet/Get Iteration mode. VTK_ITERATION_MODE_DIRECT_NB to specify\nthe number of periods, VTK_ITERATION_MODE_MAX to generate a full\nperiod (default).\n"},
  {"GetIterationModeMinValue", PyvtkPeriodicFilter_GetIterationModeMinValue, METH_VARARGS,
   "V.GetIterationModeMinValue() -> int\nC++: virtual int GetIterationModeMinValue()\n\nSet/Get Iteration mode. VTK_ITERATION_MODE_DIRECT_NB to specify\nthe number of periods, VTK_ITERATION_MODE_MAX to generate a full\nperiod (default).\n"},
  {"GetIterationModeMaxValue", PyvtkPeriodicFilter_GetIterationModeMaxValue, METH_VARARGS,
   "V.GetIterationModeMaxValue() -> int\nC++: virtual int GetIterationModeMaxValue()\n\nSet/Get Iteration mode. VTK_ITERATION_MODE_DIRECT_NB to specify\nthe number of periods, VTK_ITERATION_MODE_MAX to generate a full\nperiod (default).\n"},
  {"GetIterationMode", PyvtkPeriodicFilter_GetIterationMode, METH_VARARGS,
   "V.GetIterationMode() -> int\nC++: virtual int GetIterationMode()\n\nSet/Get Iteration mode. VTK_ITERATION_MODE_DIRECT_NB to specify\nthe number of periods, VTK_ITERATION_MODE_MAX to generate a full\nperiod (default).\n"},
  {"SetIterationModeToDirectNb", PyvtkPeriodicFilter_SetIterationModeToDirectNb, METH_VARARGS,
   "V.SetIterationModeToDirectNb()\nC++: void SetIterationModeToDirectNb()\n\nSet/Get Iteration mode. VTK_ITERATION_MODE_DIRECT_NB to specify\nthe number of periods, VTK_ITERATION_MODE_MAX to generate a full\nperiod (default).\n"},
  {"SetIterationModeToMax", PyvtkPeriodicFilter_SetIterationModeToMax, METH_VARARGS,
   "V.SetIterationModeToMax()\nC++: void SetIterationModeToMax()\n\nSet/Get Iteration mode. VTK_ITERATION_MODE_DIRECT_NB to specify\nthe number of periods, VTK_ITERATION_MODE_MAX to generate a full\nperiod (default).\n"},
  {"SetNumberOfPeriods", PyvtkPeriodicFilter_SetNumberOfPeriods, METH_VARARGS,
   "V.SetNumberOfPeriods(int)\nC++: virtual void SetNumberOfPeriods(int _arg)\n\nSet/Get Number of periods. Used only with\nITERATION_MODE_DIRECT_NB.\n"},
  {"GetNumberOfPeriods", PyvtkPeriodicFilter_GetNumberOfPeriods, METH_VARARGS,
   "V.GetNumberOfPeriods() -> int\nC++: virtual int GetNumberOfPeriods()\n\nSet/Get Number of periods. Used only with\nITERATION_MODE_DIRECT_NB.\n"},
  {"AddIndex", PyvtkPeriodicFilter_AddIndex, METH_VARARGS,
   "V.AddIndex(int)\nC++: virtual void AddIndex(unsigned int index)\n\nSelect the periodic pieces indices. Each node in the multi -\nblock tree is identified by an index. The index can be obtained\nby performing a preorder traversal of the tree (including empty\nnodes). eg. A(B (D, E), C(F, G)). Inorder traversal yields: A, B,\nD, E, C, F, G Index of A is 0, while index of C is 4.\n"},
  {"RemoveIndex", PyvtkPeriodicFilter_RemoveIndex, METH_VARARGS,
   "V.RemoveIndex(int)\nC++: virtual void RemoveIndex(unsigned int index)\n\nRemove an index from selected indices tress\n"},
  {"RemoveAllIndices", PyvtkPeriodicFilter_RemoveAllIndices, METH_VARARGS,
   "V.RemoveAllIndices()\nC++: virtual void RemoveAllIndices()\n\nClear selected indices tree\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPeriodicFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkPeriodicFilter", // tp_name
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
  PyvtkPeriodicFilter_Doc, // tp_doc
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

PyObject *PyvtkPeriodicFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPeriodicFilter_Type, PyvtkPeriodicFilter_Methods,
    "vtkPeriodicFilter",
 nullptr);

  PyTypeObject *pytype = &PyvtkPeriodicFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPeriodicFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPeriodicFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPeriodicFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_ITERATION_MODE_DIRECT_NB", 0 },
        { "VTK_ITERATION_MODE_MAX", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

