// python wrapper for vtkGaussianRandomSequence
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
#include "vtkGaussianRandomSequence.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGaussianRandomSequence(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGaussianRandomSequence_ClassNew(); }

#ifndef DECLARED_PyvtkRandomSequence_ClassNew
extern "C" { PyObject *PyvtkRandomSequence_ClassNew(); }
#define DECLARED_PyvtkRandomSequence_ClassNew
#endif

static const char *PyvtkGaussianRandomSequence_Doc =
  "vtkGaussianRandomSequence - Gaussian sequence of pseudo random numbers\n\n"
  "Superclass: vtkRandomSequence\n\n"
  "vtkGaussianRandomSequence is a sequence of pseudo random numbers\n"
  "distributed according to the Gaussian/normal distribution (mean=0 and\n"
  "standard deviation=1)\n\n"
  "This is just an interface.\n\n";


static PyObject *
PyvtkGaussianRandomSequence_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGaussianRandomSequence::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGaussianRandomSequence::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGaussianRandomSequence *tempr = vtkGaussianRandomSequence::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGaussianRandomSequence *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGaussianRandomSequence::NewInstance());

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
PyvtkGaussianRandomSequence_GetScaledValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaledValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaledValue(temp0, temp1) :
      op->vtkGaussianRandomSequence::GetScaledValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGaussianRandomSequence_Methods[] = {
  {"IsTypeOf", PyvtkGaussianRandomSequence_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for type information and printing.\n"},
  {"IsA", PyvtkGaussianRandomSequence_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for type information and printing.\n"},
  {"SafeDownCast", PyvtkGaussianRandomSequence_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGaussianRandomSequence\nC++: static vtkGaussianRandomSequence *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for type information and printing.\n"},
  {"NewInstance", PyvtkGaussianRandomSequence_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGaussianRandomSequence\nC++: vtkGaussianRandomSequence *NewInstance()\n\nStandard methods for type information and printing.\n"},
  {"GetScaledValue", PyvtkGaussianRandomSequence_GetScaledValue, METH_VARARGS,
   "V.GetScaledValue(float, float) -> float\nC++: virtual double GetScaledValue(double mean,\n    double standardDeviation)\n\nConvenient method to return a value given the mean and standard\ndeviation of the Gaussian distribution from the Gaussian\ndistribution of mean=0 and standard deviation=1.0. There is an\ninitial implementation that can be overridden by a subclass.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGaussianRandomSequence_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkGaussianRandomSequence", // tp_name
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
  PyvtkGaussianRandomSequence_Doc, // tp_doc
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

PyObject *PyvtkGaussianRandomSequence_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGaussianRandomSequence_Type, PyvtkGaussianRandomSequence_Methods,
    "vtkGaussianRandomSequence",
 nullptr);

  PyTypeObject *pytype = &PyvtkGaussianRandomSequence_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkRandomSequence_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGaussianRandomSequence(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGaussianRandomSequence_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGaussianRandomSequence", o) != 0)
  {
    Py_DECREF(o);
  }

}

