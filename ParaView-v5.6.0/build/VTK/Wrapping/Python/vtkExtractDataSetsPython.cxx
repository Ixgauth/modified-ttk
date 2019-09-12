// python wrapper for vtkExtractDataSets
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
#include "vtkExtractDataSets.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractDataSets(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractDataSets_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkExtractDataSets_Doc =
  "vtkExtractDataSets - extracts a number of datasets.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkExtractDataSets accepts a vtkHierarchicalBoxDataSet as input and\n"
  "extracts different datasets from different levels. The output is\n"
  "vtkMultiBlockDataSet of vtkMultiPiece datasets. Each block\n"
  "corresponds to a level in the vktHierarchicalBoxDataSet. Individual\n"
  "datasets, within a level, are stored in a vtkMultiPiece dataset.\n\n"
  "@sa\n"
  "vtkHierarchicalBoxDataSet, vtkMultiBlockDataSet vtkMultiPieceDataSet\n\n";


static PyObject *
PyvtkExtractDataSets_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractDataSets::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataSets_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataSets *op = static_cast<vtkExtractDataSets *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractDataSets::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataSets_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractDataSets *tempr = vtkExtractDataSets::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataSets_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataSets *op = static_cast<vtkExtractDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractDataSets *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractDataSets::NewInstance());

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
PyvtkExtractDataSets_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataSets *op = static_cast<vtkExtractDataSets *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddDataSet(temp0, temp1);
    }
    else
    {
      op->vtkExtractDataSets::AddDataSet(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractDataSets_ClearDataSetList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearDataSetList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataSets *op = static_cast<vtkExtractDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearDataSetList();
    }
    else
    {
      op->vtkExtractDataSets::ClearDataSetList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractDataSets_Methods[] = {
  {"IsTypeOf", PyvtkExtractDataSets_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractDataSets_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractDataSets_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractDataSets\nC++: static vtkExtractDataSets *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractDataSets_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractDataSets\nC++: vtkExtractDataSets *NewInstance()\n\n"},
  {"AddDataSet", PyvtkExtractDataSets_AddDataSet, METH_VARARGS,
   "V.AddDataSet(int, int)\nC++: void AddDataSet(unsigned int level, unsigned int idx)\n\nAdd a dataset to be extracted.\n"},
  {"ClearDataSetList", PyvtkExtractDataSets_ClearDataSetList, METH_VARARGS,
   "V.ClearDataSetList()\nC++: void ClearDataSetList()\n\nRemove all entries from the list of datasets to be extracted.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractDataSets_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractDataSets", // tp_name
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
  PyvtkExtractDataSets_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractDataSets_StaticNew()
{
  return vtkExtractDataSets::New();
}

PyObject *PyvtkExtractDataSets_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractDataSets_Type, PyvtkExtractDataSets_Methods,
    "vtkExtractDataSets",
 &PyvtkExtractDataSets_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractDataSets_Type;

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

void PyVTKAddFile_vtkExtractDataSets(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractDataSets_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractDataSets", o) != 0)
  {
    Py_DECREF(o);
  }

}

