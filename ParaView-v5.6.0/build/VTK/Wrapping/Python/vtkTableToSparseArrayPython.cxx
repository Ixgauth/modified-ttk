// python wrapper for vtkTableToSparseArray
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
#include "vtkArrayExtents.h"
#include "vtkTableToSparseArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTableToSparseArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTableToSparseArray_ClassNew(); }

#ifndef DECLARED_PyvtkArrayDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkArrayDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkArrayDataAlgorithm_ClassNew
#endif

static const char *PyvtkTableToSparseArray_Doc =
  "vtkTableToSparseArray - converts a vtkTable into a sparse array.\n\n"
  "Superclass: vtkArrayDataAlgorithm\n\n"
  "Converts a vtkTable into a sparse array.  Use AddCoordinateColumn()\n"
  "to designate one-to-many table columns that contain coordinates for\n"
  "each array value, and SetValueColumn() to designate the table column\n"
  "that contains array values.\n\n"
  "Thus, the number of dimensions in the output array will equal the\n"
  "number of calls to AddCoordinateColumn().\n\n"
  "The coordinate columns will also be used to populate dimension labels\n"
  "in the output array.\n\n"
  "By default, the extent of the output array will be set to the range\n"
  "[0, largest coordinate + 1) along each dimension.  In some situations\n"
  "you may prefer to set the extents explicitly, using the\n"
  "SetOutputExtents() method.  This is useful when the output array\n"
  "should be larger than its largest coordinates, or when working with\n"
  "partitioned data.\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkTableToSparseArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTableToSparseArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableToSparseArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTableToSparseArray *tempr = vtkTableToSparseArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTableToSparseArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableToSparseArray::NewInstance());

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
PyvtkTableToSparseArray_ClearCoordinateColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCoordinateColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearCoordinateColumns();
    }
    else
    {
      op->vtkTableToSparseArray::ClearCoordinateColumns();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_AddCoordinateColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCoordinateColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddCoordinateColumn(temp0);
    }
    else
    {
      op->vtkTableToSparseArray::AddCoordinateColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_SetValueColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

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
      op->vtkTableToSparseArray::SetValueColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_GetValueColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetValueColumn() :
      op->vtkTableToSparseArray::GetValueColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_ClearOutputExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearOutputExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearOutputExtents();
    }
    else
    {
      op->vtkTableToSparseArray::ClearOutputExtents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToSparseArray_SetOutputExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSparseArray *op = static_cast<vtkTableToSparseArray *>(vp);

  vtkArrayExtents *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
  {
    if (ap.IsBound())
    {
      op->SetOutputExtents(*temp0);
    }
    else
    {
      op->vtkTableToSparseArray::SetOutputExtents(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTableToSparseArray_Methods[] = {
  {"IsTypeOf", PyvtkTableToSparseArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTableToSparseArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTableToSparseArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTableToSparseArray\nC++: static vtkTableToSparseArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTableToSparseArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTableToSparseArray\nC++: vtkTableToSparseArray *NewInstance()\n\n"},
  {"ClearCoordinateColumns", PyvtkTableToSparseArray_ClearCoordinateColumns, METH_VARARGS,
   "V.ClearCoordinateColumns()\nC++: void ClearCoordinateColumns()\n\nSpecify the set of input table columns that will be mapped to\ncoordinates in the output sparse array.\n"},
  {"AddCoordinateColumn", PyvtkTableToSparseArray_AddCoordinateColumn, METH_VARARGS,
   "V.AddCoordinateColumn(string)\nC++: void AddCoordinateColumn(const char *name)\n\nSpecify the set of input table columns that will be mapped to\ncoordinates in the output sparse array.\n"},
  {"SetValueColumn", PyvtkTableToSparseArray_SetValueColumn, METH_VARARGS,
   "V.SetValueColumn(string)\nC++: void SetValueColumn(const char *name)\n\nSpecify the input table column that will be mapped to values in\nthe output array.\n"},
  {"GetValueColumn", PyvtkTableToSparseArray_GetValueColumn, METH_VARARGS,
   "V.GetValueColumn() -> string\nC++: const char *GetValueColumn()\n\nSpecify the input table column that will be mapped to values in\nthe output array.\n"},
  {"ClearOutputExtents", PyvtkTableToSparseArray_ClearOutputExtents, METH_VARARGS,
   "V.ClearOutputExtents()\nC++: void ClearOutputExtents()\n\nExplicitly specify the extents of the output array.\n"},
  {"SetOutputExtents", PyvtkTableToSparseArray_SetOutputExtents, METH_VARARGS,
   "V.SetOutputExtents(vtkArrayExtents)\nC++: void SetOutputExtents(const vtkArrayExtents &extents)\n\nExplicitly specify the extents of the output array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTableToSparseArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkTableToSparseArray", // tp_name
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
  PyvtkTableToSparseArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTableToSparseArray_StaticNew()
{
  return vtkTableToSparseArray::New();
}

PyObject *PyvtkTableToSparseArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTableToSparseArray_Type, PyvtkTableToSparseArray_Methods,
    "vtkTableToSparseArray",
 &PyvtkTableToSparseArray_StaticNew);

  PyTypeObject *pytype = &PyvtkTableToSparseArray_Type;

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

void PyVTKAddFile_vtkTableToSparseArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTableToSparseArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTableToSparseArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

