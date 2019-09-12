// python wrapper for vtkReduceTable
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
#include "vtkReduceTable.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkReduceTable(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkReduceTable_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkReduceTable_Doc =
  "vtkReduceTable - combine some of the rows of a table\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "Collapses the rows of the input table so that one particular column\n"
  "(the IndexColumn) does not contain any duplicate values. Thus the\n"
  "output table will have the same columns as the input table, but\n"
  "potentially fewer rows.  One example use of this class would be to\n"
  "generate a summary table from a table of observations. When two or\n"
  "more rows of the input table share a value in the IndexColumn, the\n"
  "values from these rows will be combined on a column-by-column basis. \n"
  "By default, such numerical values will be reduced to their mean, and\n"
  "non-numerical values will be reduced to their mode.  This default\n"
  "behavior can be changed by calling SetNumericalReductionMethod() or\n"
  "SetNonNumericalReductionMethod(). You can also specify the reduction\n"
  "method to use for a particular column by calling\n"
  "SetReductionMethodForColumn().\n\n";


static PyObject *
PyvtkReduceTable_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkReduceTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReduceTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReduceTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReduceTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkReduceTable *tempr = vtkReduceTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReduceTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkReduceTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReduceTable::NewInstance());

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
PyvtkReduceTable_GetIndexColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetIndexColumn() :
      op->vtkReduceTable::GetIndexColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReduceTable_SetIndexColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndexColumn(temp0);
    }
    else
    {
      op->vtkReduceTable::SetIndexColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReduceTable_GetNumericalReductionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumericalReductionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumericalReductionMethod() :
      op->vtkReduceTable::GetNumericalReductionMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReduceTable_SetNumericalReductionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumericalReductionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumericalReductionMethod(temp0);
    }
    else
    {
      op->vtkReduceTable::SetNumericalReductionMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReduceTable_GetNonNumericalReductionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNumericalReductionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNonNumericalReductionMethod() :
      op->vtkReduceTable::GetNonNumericalReductionMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReduceTable_SetNonNumericalReductionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonNumericalReductionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonNumericalReductionMethod(temp0);
    }
    else
    {
      op->vtkReduceTable::SetNonNumericalReductionMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReduceTable_GetReductionMethodForColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionMethodForColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReductionMethodForColumn(temp0) :
      op->vtkReduceTable::GetReductionMethodForColumn(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReduceTable_SetReductionMethodForColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReductionMethodForColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReduceTable *op = static_cast<vtkReduceTable *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetReductionMethodForColumn(temp0, temp1);
    }
    else
    {
      op->vtkReduceTable::SetReductionMethodForColumn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkReduceTable_Methods[] = {
  {"IsTypeOf", PyvtkReduceTable_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkReduceTable_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkReduceTable_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkReduceTable\nC++: static vtkReduceTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkReduceTable_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkReduceTable\nC++: vtkReduceTable *NewInstance()\n\n"},
  {"GetIndexColumn", PyvtkReduceTable_GetIndexColumn, METH_VARARGS,
   "V.GetIndexColumn() -> int\nC++: virtual vtkIdType GetIndexColumn()\n\nGet/Set the column that will be used to reduce the input table.\nAny rows sharing a value in this column will be collapsed into a\nsingle row in the output table.\n"},
  {"SetIndexColumn", PyvtkReduceTable_SetIndexColumn, METH_VARARGS,
   "V.SetIndexColumn(int)\nC++: virtual void SetIndexColumn(vtkIdType _arg)\n\nGet/Set the column that will be used to reduce the input table.\nAny rows sharing a value in this column will be collapsed into a\nsingle row in the output table.\n"},
  {"GetNumericalReductionMethod", PyvtkReduceTable_GetNumericalReductionMethod, METH_VARARGS,
   "V.GetNumericalReductionMethod() -> int\nC++: virtual int GetNumericalReductionMethod()\n\nGet/Set the method that should be used to combine numerical\nvalues.\n"},
  {"SetNumericalReductionMethod", PyvtkReduceTable_SetNumericalReductionMethod, METH_VARARGS,
   "V.SetNumericalReductionMethod(int)\nC++: virtual void SetNumericalReductionMethod(int _arg)\n\nGet/Set the method that should be used to combine numerical\nvalues.\n"},
  {"GetNonNumericalReductionMethod", PyvtkReduceTable_GetNonNumericalReductionMethod, METH_VARARGS,
   "V.GetNonNumericalReductionMethod() -> int\nC++: virtual int GetNonNumericalReductionMethod()\n\nGet/Set the method that should be used to combine non-numerical\nvalues.\n"},
  {"SetNonNumericalReductionMethod", PyvtkReduceTable_SetNonNumericalReductionMethod, METH_VARARGS,
   "V.SetNonNumericalReductionMethod(int)\nC++: virtual void SetNonNumericalReductionMethod(int _arg)\n\nGet/Set the method that should be used to combine non-numerical\nvalues.\n"},
  {"GetReductionMethodForColumn", PyvtkReduceTable_GetReductionMethodForColumn, METH_VARARGS,
   "V.GetReductionMethodForColumn(int) -> int\nC++: int GetReductionMethodForColumn(vtkIdType col)\n\nGet the method that should be used to combine the values within\nthe specified column.  Returns -1 if no method has been set for\nthis particular column.\n"},
  {"SetReductionMethodForColumn", PyvtkReduceTable_SetReductionMethodForColumn, METH_VARARGS,
   "V.SetReductionMethodForColumn(int, int)\nC++: void SetReductionMethodForColumn(vtkIdType col, int method)\n\nSet the method that should be used to combine the values within\nthe specified column.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkReduceTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkReduceTable", // tp_name
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
  PyvtkReduceTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkReduceTable_StaticNew()
{
  return vtkReduceTable::New();
}

PyObject *PyvtkReduceTable_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkReduceTable_Type, PyvtkReduceTable_Methods,
    "vtkReduceTable",
 &PyvtkReduceTable_StaticNew);

  PyTypeObject *pytype = &PyvtkReduceTable_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "MEAN", vtkReduceTable::MEAN },
        { "MEDIAN", vtkReduceTable::MEDIAN },
        { "MODE", vtkReduceTable::MODE },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkReduceTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkReduceTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkReduceTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

