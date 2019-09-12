// python wrapper for vtkSparseArrayToTable
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
#include "vtkSparseArrayToTable.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSparseArrayToTable(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSparseArrayToTable_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkSparseArrayToTable_Doc =
  "vtkSparseArrayToTable - Converts a sparse array to a vtkTable.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "Converts any sparse array to a vtkTable containing one row for each\n"
  "value stored in the array.  The table will contain one column of\n"
  "coordinates for each dimension in the source array, plus one column\n"
  "of array values.  A common use-case for vtkSparseArrayToTable would\n"
  "be converting a sparse array into a table suitable for use as an\n"
  "input to vtkTableToGraph.\n\n"
  "The coordinate columns in the output table will be named using the\n"
  "dimension labels from the source array,  The value column name can be\n"
  "explicitly set using SetValueColumn().\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkSparseArrayToTable_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSparseArrayToTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArrayToTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSparseArrayToTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArrayToTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSparseArrayToTable *tempr = vtkSparseArrayToTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArrayToTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSparseArrayToTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSparseArrayToTable::NewInstance());

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
PyvtkSparseArrayToTable_GetValueColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetValueColumn() :
      op->vtkSparseArrayToTable::GetValueColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSparseArrayToTable_SetValueColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSparseArrayToTable *op = static_cast<vtkSparseArrayToTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValueColumn(temp0);
    }
    else
    {
      op->vtkSparseArrayToTable::SetValueColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSparseArrayToTable_Methods[] = {
  {"IsTypeOf", PyvtkSparseArrayToTable_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSparseArrayToTable_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSparseArrayToTable_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSparseArrayToTable\nC++: static vtkSparseArrayToTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSparseArrayToTable_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSparseArrayToTable\nC++: vtkSparseArrayToTable *NewInstance()\n\n"},
  {"GetValueColumn", PyvtkSparseArrayToTable_GetValueColumn, METH_VARARGS,
   "V.GetValueColumn() -> string\nC++: virtual char *GetValueColumn()\n\nSpecify the name of the output table column that contains array\nvalues. Default: \"value\"\n"},
  {"SetValueColumn", PyvtkSparseArrayToTable_SetValueColumn, METH_VARARGS,
   "V.SetValueColumn(string)\nC++: virtual void SetValueColumn(const char *_arg)\n\nSpecify the name of the output table column that contains array\nvalues. Default: \"value\"\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSparseArrayToTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkSparseArrayToTable", // tp_name
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
  PyvtkSparseArrayToTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSparseArrayToTable_StaticNew()
{
  return vtkSparseArrayToTable::New();
}

PyObject *PyvtkSparseArrayToTable_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSparseArrayToTable_Type, PyvtkSparseArrayToTable_Methods,
    "vtkSparseArrayToTable",
 &PyvtkSparseArrayToTable_StaticNew);

  PyTypeObject *pytype = &PyvtkSparseArrayToTable_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSparseArrayToTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSparseArrayToTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSparseArrayToTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

