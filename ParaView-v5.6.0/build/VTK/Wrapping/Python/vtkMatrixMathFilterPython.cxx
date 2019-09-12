// python wrapper for vtkMatrixMathFilter
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
#include "vtkMatrixMathFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMatrixMathFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMatrixMathFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkMatrixMathFilter_Doc =
  "vtkMatrixMathFilter - Calculate functions of quality of the elements\n of a mesh\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkMatrixMathFilter computes one or more functions of mathematical\n"
  "quality for the cells or points in a mesh. The per-cell or per-point\n"
  "quality is added to the mesh's cell data or point data, in an array\n"
  "with names varied with different quality being queried. Note this\n"
  "filter always assume the data associate with the cells or points are\n"
  "3 by 3 matrix.\n\n";


static PyObject *
PyvtkMatrixMathFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMatrixMathFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatrixMathFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMatrixMathFilter *tempr = vtkMatrixMathFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrixMathFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatrixMathFilter::NewInstance());

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
PyvtkMatrixMathFilter_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperation(temp0);
    }
    else
    {
      op->vtkMatrixMathFilter::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkMatrixMathFilter::GetOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperationToDeterminant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToDeterminant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToDeterminant();
    }
    else
    {
      op->vtkMatrixMathFilter::SetOperationToDeterminant();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperationToEigenvalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToEigenvalue();
    }
    else
    {
      op->vtkMatrixMathFilter::SetOperationToEigenvalue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperationToEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToEigenvector();
    }
    else
    {
      op->vtkMatrixMathFilter::SetOperationToEigenvector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperationToInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToInverse();
    }
    else
    {
      op->vtkMatrixMathFilter::SetOperationToInverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMatrixMathFilter_Methods[] = {
  {"IsTypeOf", PyvtkMatrixMathFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMatrixMathFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMatrixMathFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMatrixMathFilter\nC++: static vtkMatrixMathFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMatrixMathFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMatrixMathFilter\nC++: vtkMatrixMathFilter *NewInstance()\n\n"},
  {"SetOperation", PyvtkMatrixMathFilter_SetOperation, METH_VARARGS,
   "V.SetOperation(int)\nC++: virtual void SetOperation(int _arg)\n\nSet/Get the particular estimator used to function the quality of\nquery.\n"},
  {"GetOperation", PyvtkMatrixMathFilter_GetOperation, METH_VARARGS,
   "V.GetOperation() -> int\nC++: virtual int GetOperation()\n\nSet/Get the particular estimator used to function the quality of\nquery.\n"},
  {"SetOperationToDeterminant", PyvtkMatrixMathFilter_SetOperationToDeterminant, METH_VARARGS,
   "V.SetOperationToDeterminant()\nC++: void SetOperationToDeterminant()\n\nSet/Get the particular estimator used to function the quality of\nquery.\n"},
  {"SetOperationToEigenvalue", PyvtkMatrixMathFilter_SetOperationToEigenvalue, METH_VARARGS,
   "V.SetOperationToEigenvalue()\nC++: void SetOperationToEigenvalue()\n\nSet/Get the particular estimator used to function the quality of\nquery.\n"},
  {"SetOperationToEigenvector", PyvtkMatrixMathFilter_SetOperationToEigenvector, METH_VARARGS,
   "V.SetOperationToEigenvector()\nC++: void SetOperationToEigenvector()\n\nSet/Get the particular estimator used to function the quality of\nquery.\n"},
  {"SetOperationToInverse", PyvtkMatrixMathFilter_SetOperationToInverse, METH_VARARGS,
   "V.SetOperationToInverse()\nC++: void SetOperationToInverse()\n\nSet/Get the particular estimator used to function the quality of\nquery.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMatrixMathFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersVerdictPython.vtkMatrixMathFilter", // tp_name
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
  PyvtkMatrixMathFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMatrixMathFilter_StaticNew()
{
  return vtkMatrixMathFilter::New();
}

PyObject *PyvtkMatrixMathFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMatrixMathFilter_Type, PyvtkMatrixMathFilter_Methods,
    "vtkMatrixMathFilter",
 &PyvtkMatrixMathFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkMatrixMathFilter_Type;

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

void PyVTKAddFile_vtkMatrixMathFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMatrixMathFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMatrixMathFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

