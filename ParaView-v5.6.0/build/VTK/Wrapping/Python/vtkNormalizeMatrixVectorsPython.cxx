// python wrapper for vtkNormalizeMatrixVectors
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
#include "vtkNormalizeMatrixVectors.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNormalizeMatrixVectors(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkNormalizeMatrixVectors_ClassNew(); }

#ifndef DECLARED_PyvtkArrayDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkArrayDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkArrayDataAlgorithm_ClassNew
#endif

static const char *PyvtkNormalizeMatrixVectors_Doc =
  "vtkNormalizeMatrixVectors - given a sparse input matrix, produces a\nsparse output matrix with each vector normalized to unit length with\nrespect to a p-norm (default p=2).\n\n"
  "Superclass: vtkArrayDataAlgorithm\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkNormalizeMatrixVectors_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNormalizeMatrixVectors::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNormalizeMatrixVectors::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNormalizeMatrixVectors *tempr = vtkNormalizeMatrixVectors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNormalizeMatrixVectors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNormalizeMatrixVectors::NewInstance());

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
PyvtkNormalizeMatrixVectors_GetVectorDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorDimension() :
      op->vtkNormalizeMatrixVectors::GetVectorDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_SetVectorDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorDimension(temp0);
    }
    else
    {
      op->vtkNormalizeMatrixVectors::SetVectorDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_GetPValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPValue() :
      op->vtkNormalizeMatrixVectors::GetPValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_SetPValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPValue(temp0);
    }
    else
    {
      op->vtkNormalizeMatrixVectors::SetPValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkNormalizeMatrixVectors_Methods[] = {
  {"IsTypeOf", PyvtkNormalizeMatrixVectors_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNormalizeMatrixVectors_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNormalizeMatrixVectors_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkNormalizeMatrixVectors\nC++: static vtkNormalizeMatrixVectors *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNormalizeMatrixVectors_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkNormalizeMatrixVectors\nC++: vtkNormalizeMatrixVectors *NewInstance()\n\n"},
  {"GetVectorDimension", PyvtkNormalizeMatrixVectors_GetVectorDimension, METH_VARARGS,
   "V.GetVectorDimension() -> int\nC++: virtual int GetVectorDimension()\n\nControls whether to normalize row-vectors or column-vectors.  0 =\nrows, 1 = columns.\n"},
  {"SetVectorDimension", PyvtkNormalizeMatrixVectors_SetVectorDimension, METH_VARARGS,
   "V.SetVectorDimension(int)\nC++: virtual void SetVectorDimension(int _arg)\n\nControls whether to normalize row-vectors or column-vectors.  0 =\nrows, 1 = columns.\n"},
  {"GetPValue", PyvtkNormalizeMatrixVectors_GetPValue, METH_VARARGS,
   "V.GetPValue() -> float\nC++: virtual double GetPValue()\n\nValue of p in p-norm normalization, subject to p >= 1.  Default\nis p=2 (Euclidean norm).\n"},
  {"SetPValue", PyvtkNormalizeMatrixVectors_SetPValue, METH_VARARGS,
   "V.SetPValue(float)\nC++: virtual void SetPValue(double _arg)\n\nValue of p in p-norm normalization, subject to p >= 1.  Default\nis p=2 (Euclidean norm).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkNormalizeMatrixVectors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkNormalizeMatrixVectors", // tp_name
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
  PyvtkNormalizeMatrixVectors_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNormalizeMatrixVectors_StaticNew()
{
  return vtkNormalizeMatrixVectors::New();
}

PyObject *PyvtkNormalizeMatrixVectors_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkNormalizeMatrixVectors_Type, PyvtkNormalizeMatrixVectors_Methods,
    "vtkNormalizeMatrixVectors",
 &PyvtkNormalizeMatrixVectors_StaticNew);

  PyTypeObject *pytype = &PyvtkNormalizeMatrixVectors_Type;

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

void PyVTKAddFile_vtkNormalizeMatrixVectors(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNormalizeMatrixVectors_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNormalizeMatrixVectors", o) != 0)
  {
    Py_DECREF(o);
  }

}

