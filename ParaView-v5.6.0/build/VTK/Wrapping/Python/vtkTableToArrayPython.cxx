// python wrapper for vtkTableToArray
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
#include "vtkTableToArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTableToArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTableToArray_ClassNew(); }

#ifndef DECLARED_PyvtkArrayDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkArrayDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkArrayDataAlgorithm_ClassNew
#endif

static const char *PyvtkTableToArray_Doc =
  "vtkTableToArray - converts a vtkTable to a matrix.\n\n"
  "Superclass: vtkArrayDataAlgorithm\n\n"
  "Converts a vtkTable into a dense matrix.  Use AddColumn() to\n"
  "designate one-to-many table columns that will become columns in the\n"
  "output matrix.a\n\n"
  "Using AddColumn() it is possible to duplicate / reorder columns in\n"
  "arbitrary ways.\n\n"
  "@warning\n"
  "Only produces vtkDenseArray, regardless of the input table column\n"
  "types.\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTableToArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTableToArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToArray *op = static_cast<vtkTableToArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableToArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTableToArray *tempr = vtkTableToArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToArray *op = static_cast<vtkTableToArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTableToArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableToArray::NewInstance());

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
PyvtkTableToArray_ClearColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToArray *op = static_cast<vtkTableToArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearColumns();
    }
    else
    {
      op->vtkTableToArray::ClearColumns();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToArray_AddColumn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToArray *op = static_cast<vtkTableToArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddColumn(temp0);
    }
    else
    {
      op->vtkTableToArray::AddColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTableToArray_AddColumn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToArray *op = static_cast<vtkTableToArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddColumn(temp0);
    }
    else
    {
      op->vtkTableToArray::AddColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTableToArray_AddColumn_Methods[] = {
  {nullptr, PyvtkTableToArray_AddColumn_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkTableToArray_AddColumn_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTableToArray_AddColumn(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTableToArray_AddColumn_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddColumn");
  return nullptr;
}



static PyObject *
PyvtkTableToArray_AddAllColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAllColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToArray *op = static_cast<vtkTableToArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddAllColumns();
    }
    else
    {
      op->vtkTableToArray::AddAllColumns();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTableToArray_Methods[] = {
  {"IsTypeOf", PyvtkTableToArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTableToArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTableToArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTableToArray\nC++: static vtkTableToArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTableToArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTableToArray\nC++: vtkTableToArray *NewInstance()\n\n"},
  {"ClearColumns", PyvtkTableToArray_ClearColumns, METH_VARARGS,
   "V.ClearColumns()\nC++: void ClearColumns()\n\nReset the list of input table columns that will be mapped to\ncolumns in the output matrix.\n"},
  {"AddColumn", PyvtkTableToArray_AddColumn, METH_VARARGS,
   "V.AddColumn(string)\nC++: void AddColumn(const char *name)\nV.AddColumn(int)\nC++: void AddColumn(vtkIdType index)\n\nAdd a column by name to the list of input table columns that will\nbe mapped to columns in the output matrix.\n"},
  {"AddAllColumns", PyvtkTableToArray_AddAllColumns, METH_VARARGS,
   "V.AddAllColumns()\nC++: void AddAllColumns()\n\nAdd every input table column to the output matrix.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTableToArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkTableToArray", // tp_name
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
  PyvtkTableToArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTableToArray_StaticNew()
{
  return vtkTableToArray::New();
}

PyObject *PyvtkTableToArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTableToArray_Type, PyvtkTableToArray_Methods,
    "vtkTableToArray",
 &PyvtkTableToArray_StaticNew);

  PyTypeObject *pytype = &PyvtkTableToArray_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTableToArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTableToArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTableToArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

