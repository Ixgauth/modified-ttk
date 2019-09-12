// python wrapper for vtkMatricizeArray
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
#include "vtkMatricizeArray.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMatricizeArray(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMatricizeArray_ClassNew(); }

#ifndef DECLARED_PyvtkArrayDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkArrayDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkArrayDataAlgorithm_ClassNew
#endif

static const char *PyvtkMatricizeArray_Doc =
  "vtkMatricizeArray - Convert an array of arbitrary dimensions to a\nmatrix.\n\n"
  "Superclass: vtkArrayDataAlgorithm\n\n"
  "Given a sparse input array of arbitrary dimension, creates a sparse\n"
  "output matrix (vtkSparseArray) where each column is a slice along an\n"
  "arbitrary dimension from the source.\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkMatricizeArray_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMatricizeArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatricizeArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatricizeArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatricizeArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMatricizeArray *tempr = vtkMatricizeArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatricizeArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatricizeArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatricizeArray::NewInstance());

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
PyvtkMatricizeArray_GetSliceDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSliceDimension() :
      op->vtkMatricizeArray::GetSliceDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatricizeArray_SetSliceDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatricizeArray *op = static_cast<vtkMatricizeArray *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceDimension(temp0);
    }
    else
    {
      op->vtkMatricizeArray::SetSliceDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMatricizeArray_Methods[] = {
  {"IsTypeOf", PyvtkMatricizeArray_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMatricizeArray_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMatricizeArray_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMatricizeArray\nC++: static vtkMatricizeArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMatricizeArray_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMatricizeArray\nC++: vtkMatricizeArray *NewInstance()\n\n"},
  {"GetSliceDimension", PyvtkMatricizeArray_GetSliceDimension, METH_VARARGS,
   "V.GetSliceDimension() -> int\nC++: virtual vtkIdType GetSliceDimension()\n\nReturns the 0-numbered dimension that will be mapped to columns\nin the output\n"},
  {"SetSliceDimension", PyvtkMatricizeArray_SetSliceDimension, METH_VARARGS,
   "V.SetSliceDimension(int)\nC++: virtual void SetSliceDimension(vtkIdType _arg)\n\nSets the 0-numbered dimension that will be mapped to columns in\nthe output\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMatricizeArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkMatricizeArray", // tp_name
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
  PyvtkMatricizeArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMatricizeArray_StaticNew()
{
  return vtkMatricizeArray::New();
}

PyObject *PyvtkMatricizeArray_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMatricizeArray_Type, PyvtkMatricizeArray_Methods,
    "vtkMatricizeArray",
 &PyvtkMatricizeArray_StaticNew);

  PyTypeObject *pytype = &PyvtkMatricizeArray_Type;

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

void PyVTKAddFile_vtkMatricizeArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMatricizeArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMatricizeArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

