// python wrapper for vtkCorrelativeStatistics
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
#include "vtkCorrelativeStatistics.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCorrelativeStatistics(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCorrelativeStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkStatisticsAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStatisticsAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStatisticsAlgorithm_ClassNew
#endif

static const char *PyvtkCorrelativeStatistics_Doc =
  "vtkCorrelativeStatistics - A class for bivariate linear correlation\n\n"
  "Superclass: vtkStatisticsAlgorithm\n\n"
  "Given a selection of pairs of columns of interest, this class\n"
  "provides the following functionalities, depending on the chosen\n"
  "execution options:\n"
  "* Learn: calculate sample mean and M2 aggregates for each pair of\n"
  "  variables (cf. P. Pebay, Formulas for robust, one-pass parallel\n"
  "  computation of covariances and Arbitrary-Order Statistical Moments,\n"
  "Sandia Report SAND2008-6212, Sep 2008,\n"
  "  http://infoserve.sandia.gov/sand_doc/2008/086212.pdf for details)\n"
  "* Derive: calculate unbiased covariance matrix estimators and its\n"
  "  determinant, linear regressions, and Pearson correlation\n"
  "  coefficient.\n"
  "* Assess: given an input data set, two means and a 2x2 covariance\n"
  "  matrix, mark each datum with corresponding relative deviation\n"
  "  (2-dimensional Mahlanobis distance).\n"
  "* Test: Perform Jarque-Bera-Srivastava test of 2-d normality\n\n"
  "@par Thanks: Thanks to Philippe Pebay and David Thompson from Sandia\n"
  "National Laboratories for implementing this class. Updated by\n"
  "Philippe Pebay, Kitware SAS 2012\n\n";


static PyObject *
PyvtkCorrelativeStatistics_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCorrelativeStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCorrelativeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCorrelativeStatistics *op = static_cast<vtkCorrelativeStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCorrelativeStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCorrelativeStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCorrelativeStatistics *tempr = vtkCorrelativeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCorrelativeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCorrelativeStatistics *op = static_cast<vtkCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCorrelativeStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCorrelativeStatistics::NewInstance());

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
PyvtkCorrelativeStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCorrelativeStatistics *op = static_cast<vtkCorrelativeStatistics *>(vp);

  vtkDataObjectCollection *temp0 = nullptr;
  vtkMultiBlockDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
  {
    if (ap.IsBound())
    {
      op->Aggregate(temp0, temp1);
    }
    else
    {
      op->vtkCorrelativeStatistics::Aggregate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCorrelativeStatistics_Methods[] = {
  {"IsTypeOf", PyvtkCorrelativeStatistics_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCorrelativeStatistics_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCorrelativeStatistics_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCorrelativeStatistics\nC++: static vtkCorrelativeStatistics *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCorrelativeStatistics_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCorrelativeStatistics\nC++: vtkCorrelativeStatistics *NewInstance()\n\n"},
  {"Aggregate", PyvtkCorrelativeStatistics_Aggregate, METH_VARARGS,
   "V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *) override;\n\nGiven a collection of models, calculate aggregate model\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCorrelativeStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkCorrelativeStatistics", // tp_name
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
  PyvtkCorrelativeStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCorrelativeStatistics_StaticNew()
{
  return vtkCorrelativeStatistics::New();
}

PyObject *PyvtkCorrelativeStatistics_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCorrelativeStatistics_Type, PyvtkCorrelativeStatistics_Methods,
    "vtkCorrelativeStatistics",
 &PyvtkCorrelativeStatistics_StaticNew);

  PyTypeObject *pytype = &PyvtkCorrelativeStatistics_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkStatisticsAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCorrelativeStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCorrelativeStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCorrelativeStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

