// python wrapper for vtkPSciVizMultiCorrelativeStats
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
#include "vtkPSciVizMultiCorrelativeStats.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPSciVizMultiCorrelativeStats(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPSciVizMultiCorrelativeStats_ClassNew(); }

#ifndef DECLARED_PyvtkSciVizStatistics_ClassNew
extern "C" { PyObject *PyvtkSciVizStatistics_ClassNew(); }
#define DECLARED_PyvtkSciVizStatistics_ClassNew
#endif

static const char *PyvtkPSciVizMultiCorrelativeStats_Doc =
  "vtkPSciVizMultiCorrelativeStats - Fit a multivariate Gaussian to data\nand/or assess Mahalanobis distance of each datum from the mean.\n\n"
  "Superclass: vtkSciVizStatistics\n\n"
  "This filter either computes a statistical model of a dataset or takes\n"
  "such a model as its second input. Then, the model (however it is\n"
  "obtained) may optionally be used to assess the input dataset.\n\n"
  "This filter computes the covariance matrix for all the arrays you\n"
  "select plus the mean of each array. The model is thus a multivariate\n"
  "Gaussian distribution with the mean vector and variances provided.\n"
  "Data is assessed using this model by computing the Mahalanobis\n"
  "distance for each input point. This distance will always be positive.\n\n"
  "The learned model output format is rather dense and can be confusing,\n"
  "so it is discussed here. The first filter output is a multiblock\n"
  "dataset consisting of 2 tables:\n\n"
  "\\li Raw covariance data.\n"
  "\\li Covariance matrix and its Cholesky decomposition.\n\n"
  "The raw covariance table has 3 meaningful columns: 2 titled \"Column1\"\n"
  "and \"Column2\" whose entries generally refer to the N arrays you\n"
  "selected when preparing the filter and 1 column titled \"Entries\" that\n"
  "contains numeric values. The first row will always contain the number\n"
  "of observations in the statistical analysis. The next N rows contain\n"
  "the mean for each of the N arrays you selected. The remaining rows\n"
  "contain covariances of pairs of arrays.\n\n"
  "The second table (covariance matrix and Cholesky decomposition)\n"
  "contains information derived from the raw covariance data of the\n"
  "first table. The first N rows of the first column contain the name of\n"
  "one array you selected for analysis. These rows are followed by a\n"
  "single entry labeled \"Cholesky\" for a total of N+1 rows. The second\n"
  "column, Mean contains the mean of each variable in the first N\n"
  "entries and the number of observations processed in the final (N+1)\n"
  "row.\n\n"
  "The remaining columns (there are N, one for each array) contain 2\n"
  "matrices in triangular format. The upper right triangle contains the\n"
  "covariance matrix (which is symmetric, so its lower triangle may be\n"
  "inferred). The lower left triangle contains the Cholesky\n"
  "decomposition of the covariance matrix (which is triangular, so its\n"
  "upper triangle is zero). Because the diagonal must be stored for both\n"
  "matrices, an additional row is required - hence the N+1 rows and the\n"
  "final entry of the column named \"Column\".\n\n";


static PyObject *
PyvtkPSciVizMultiCorrelativeStats_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPSciVizMultiCorrelativeStats::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizMultiCorrelativeStats_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizMultiCorrelativeStats *op = static_cast<vtkPSciVizMultiCorrelativeStats *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSciVizMultiCorrelativeStats::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizMultiCorrelativeStats_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPSciVizMultiCorrelativeStats *tempr = vtkPSciVizMultiCorrelativeStats::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizMultiCorrelativeStats_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizMultiCorrelativeStats *op = static_cast<vtkPSciVizMultiCorrelativeStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPSciVizMultiCorrelativeStats *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSciVizMultiCorrelativeStats::NewInstance());

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

static PyMethodDef PyvtkPSciVizMultiCorrelativeStats_Methods[] = {
  {"IsTypeOf", PyvtkPSciVizMultiCorrelativeStats_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPSciVizMultiCorrelativeStats_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPSciVizMultiCorrelativeStats_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPSciVizMultiCorrelativeStats\nC++: static vtkPSciVizMultiCorrelativeStats *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPSciVizMultiCorrelativeStats_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPSciVizMultiCorrelativeStats\nC++: vtkPSciVizMultiCorrelativeStats *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPSciVizMultiCorrelativeStats_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPSciVizMultiCorrelativeStats", // tp_name
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
  PyvtkPSciVizMultiCorrelativeStats_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPSciVizMultiCorrelativeStats_StaticNew()
{
  return vtkPSciVizMultiCorrelativeStats::New();
}

PyObject *PyvtkPSciVizMultiCorrelativeStats_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPSciVizMultiCorrelativeStats_Type, PyvtkPSciVizMultiCorrelativeStats_Methods,
    "vtkPSciVizMultiCorrelativeStats",
 &PyvtkPSciVizMultiCorrelativeStats_StaticNew);

  PyTypeObject *pytype = &PyvtkPSciVizMultiCorrelativeStats_Type;

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

void PyVTKAddFile_vtkPSciVizMultiCorrelativeStats(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPSciVizMultiCorrelativeStats_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPSciVizMultiCorrelativeStats", o) != 0)
  {
    Py_DECREF(o);
  }

}

