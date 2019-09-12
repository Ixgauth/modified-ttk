// python wrapper for vtkPSciVizContingencyStats
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
#include "vtkPSciVizContingencyStats.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPSciVizContingencyStats(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPSciVizContingencyStats_ClassNew(); }

#ifndef DECLARED_PyvtkSciVizStatistics_ClassNew
extern "C" { PyObject *PyvtkSciVizStatistics_ClassNew(); }
#define DECLARED_PyvtkSciVizStatistics_ClassNew
#endif

static const char *PyvtkPSciVizContingencyStats_Doc =
  "vtkPSciVizContingencyStats - Derive contingency tables and use them\nto assess the likelihood of associations.\n\n"
  "Superclass: vtkSciVizStatistics\n\n"
  "This filter either computes a statistical model of a dataset or takes\n"
  "such a model as its second input. Then, the model (however it is\n"
  "obtained) may optionally be used to assess the input dataset.\n\n"
  "This filter computes contingency tables between pairs of attributes.\n"
  "This result is a tabular bivariate probability distribution which\n"
  "serves as a Bayesian-style prior model. Data is assessed by computing\n"
  "the probability of observing both variables simultaneously; the\n"
  "probability of each variable conditioned on the other\n"
  "     (the two values need not be identical); and the pointwise mutual\n"
  "information (PMI).  Finally, the summary statistics include the\n"
  "information entropy of the observations.\n\n";


static PyObject *
PyvtkPSciVizContingencyStats_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPSciVizContingencyStats::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizContingencyStats_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizContingencyStats *op = static_cast<vtkPSciVizContingencyStats *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSciVizContingencyStats::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizContingencyStats_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPSciVizContingencyStats *tempr = vtkPSciVizContingencyStats::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizContingencyStats_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizContingencyStats *op = static_cast<vtkPSciVizContingencyStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPSciVizContingencyStats *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSciVizContingencyStats::NewInstance());

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

static PyMethodDef PyvtkPSciVizContingencyStats_Methods[] = {
  {"IsTypeOf", PyvtkPSciVizContingencyStats_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPSciVizContingencyStats_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPSciVizContingencyStats_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPSciVizContingencyStats\nC++: static vtkPSciVizContingencyStats *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPSciVizContingencyStats_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPSciVizContingencyStats\nC++: vtkPSciVizContingencyStats *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPSciVizContingencyStats_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPSciVizContingencyStats", // tp_name
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
  PyvtkPSciVizContingencyStats_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPSciVizContingencyStats_StaticNew()
{
  return vtkPSciVizContingencyStats::New();
}

PyObject *PyvtkPSciVizContingencyStats_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPSciVizContingencyStats_Type, PyvtkPSciVizContingencyStats_Methods,
    "vtkPSciVizContingencyStats",
 &PyvtkPSciVizContingencyStats_StaticNew);

  PyTypeObject *pytype = &PyvtkPSciVizContingencyStats_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSciVizStatistics_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPSciVizContingencyStats(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPSciVizContingencyStats_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPSciVizContingencyStats", o) != 0)
  {
    Py_DECREF(o);
  }

}

