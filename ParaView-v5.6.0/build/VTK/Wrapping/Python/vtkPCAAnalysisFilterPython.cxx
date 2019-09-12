// python wrapper for vtkPCAAnalysisFilter
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
#include "vtkPCAAnalysisFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPCAAnalysisFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPCAAnalysisFilter_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkPCAAnalysisFilter_Doc =
  "vtkPCAAnalysisFilter - Performs principal component analysis of a set\nof aligned pointsets\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkPCAAnalysisFilter is a filter that takes as input a set of aligned\n"
  "pointsets (any object derived from vtkPointSet) and performs a\n"
  "principal component analysis of the coordinates. This can be used to\n"
  "visualise the major or minor modes of variation seen in a set of\n"
  "similar biological objects with corresponding landmarks.\n"
  "vtkPCAAnalysisFilter is designed to work with the output from the\n"
  "vtkProcrustesAnalysisFilter vtkPCAAnalysisFilter requires a\n"
  "vtkMultiBlock input consisting of vtkPointSets as first level\n"
  "children.\n\n"
  "vtkPCAAnalysisFilter is an implementation of (for example):\n\n"
  "T. Cootes et al. : Active Shape Models - their training and\n"
  "application. Computer Vision and Image Understanding, 61(1):38-59,\n"
  "1995.\n\n"
  "The material can also be found in Tim Cootes' ever-changing online\n"
  "report published at his website: http://www.isbe.man.ac.uk/~bim/\n\n"
  "@warning\n"
  "All of the input pointsets must have the same number of points.\n\n"
  "@par Thanks: Rasmus Paulsen and Tim Hutton who developed and\n"
  "contributed this class\n\n"
  "@sa\n"
  "vtkProcrustesAlignmentFilter\n\n";


static PyObject *
PyvtkPCAAnalysisFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPCAAnalysisFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPCAAnalysisFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPCAAnalysisFilter *tempr = vtkPCAAnalysisFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPCAAnalysisFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPCAAnalysisFilter::NewInstance());

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
PyvtkPCAAnalysisFilter_GetEvals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEvals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetEvals() :
      op->vtkPCAAnalysisFilter::GetEvals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_GetParameterisedShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterisedShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  vtkFloatArray *temp0 = nullptr;
  vtkPointSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkFloatArray") &&
      ap.GetVTKObject(temp1, "vtkPointSet"))
  {
    if (ap.IsBound())
    {
      op->GetParameterisedShape(temp0, temp1);
    }
    else
    {
      op->vtkPCAAnalysisFilter::GetParameterisedShape(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_GetShapeParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  vtkPointSet *temp0 = nullptr;
  vtkFloatArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPointSet") &&
      ap.GetVTKObject(temp1, "vtkFloatArray") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetShapeParameters(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPCAAnalysisFilter::GetShapeParameters(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCAAnalysisFilter_GetModesRequiredFor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModesRequiredFor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCAAnalysisFilter *op = static_cast<vtkPCAAnalysisFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModesRequiredFor(temp0) :
      op->vtkPCAAnalysisFilter::GetModesRequiredFor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPCAAnalysisFilter_Methods[] = {
  {"IsTypeOf", PyvtkPCAAnalysisFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPCAAnalysisFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPCAAnalysisFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPCAAnalysisFilter\nC++: static vtkPCAAnalysisFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPCAAnalysisFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPCAAnalysisFilter\nC++: vtkPCAAnalysisFilter *NewInstance()\n\n"},
  {"GetEvals", PyvtkPCAAnalysisFilter_GetEvals, METH_VARARGS,
   "V.GetEvals() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetEvals()\n\nGet the vector of eigenvalues sorted in descending order\n"},
  {"GetParameterisedShape", PyvtkPCAAnalysisFilter_GetParameterisedShape, METH_VARARGS,
   "V.GetParameterisedShape(vtkFloatArray, vtkPointSet)\nC++: void GetParameterisedShape(vtkFloatArray *b,\n    vtkPointSet *shape)\n\nFills the shape with:\n\n* mean + b[0] * sqrt(eigenvalue[0]) * eigenvector[0]\n* + b[1] * sqrt(eigenvalue[1]) * eigenvector[1]\n* ...\n* + b[sizeb-1] * sqrt(eigenvalue[bsize-1]) * eigenvector[bsize-1]\n\n* here b are the parameters expressed in standard deviations\n* bsize is the number of parameters in the b vector\n* This function assumes that shape is already allocated\n* with the right size, it just moves the points.\n"},
  {"GetShapeParameters", PyvtkPCAAnalysisFilter_GetShapeParameters, METH_VARARGS,
   "V.GetShapeParameters(vtkPointSet, vtkFloatArray, int)\nC++: void GetShapeParameters(vtkPointSet *shape, vtkFloatArray *b,\n     int bsize)\n\nReturn the bsize parameters b that best model the given shape (in\nstandard deviations). That is that the given shape will be\napproximated by:\n\n* shape ~ mean + b[0] * sqrt(eigenvalue[0]) * eigenvector[0]\n* + b[1] * sqrt(eigenvalue[1]) * eigenvector[1]\n* ...\n* + b[bsize-1] * sqrt(eigenvalue[bsize-1]) * eigenvector[bsize-1]\n"},
  {"GetModesRequiredFor", PyvtkPCAAnalysisFilter_GetModesRequiredFor, METH_VARARGS,
   "V.GetModesRequiredFor(float) -> int\nC++: int GetModesRequiredFor(double proportion)\n\nRetrieve how many modes are necessary to model the given\nproportion of the variation. proportion should be between 0 and 1\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPCAAnalysisFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHybridPython.vtkPCAAnalysisFilter", // tp_name
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
  PyvtkPCAAnalysisFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPCAAnalysisFilter_StaticNew()
{
  return vtkPCAAnalysisFilter::New();
}

PyObject *PyvtkPCAAnalysisFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPCAAnalysisFilter_Type, PyvtkPCAAnalysisFilter_Methods,
    "vtkPCAAnalysisFilter",
 &PyvtkPCAAnalysisFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkPCAAnalysisFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPCAAnalysisFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPCAAnalysisFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPCAAnalysisFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

