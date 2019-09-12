// python wrapper for vtkPSciVizPCAStats
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
#include "vtkPSciVizPCAStats.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPSciVizPCAStats(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPSciVizPCAStats_ClassNew(); }

#ifndef DECLARED_PyvtkSciVizStatistics_ClassNew
extern "C" { PyObject *PyvtkSciVizStatistics_ClassNew(); }
#define DECLARED_PyvtkSciVizStatistics_ClassNew
#endif

static const char *PyvtkPSciVizPCAStats_Doc =
  "vtkPSciVizPCAStats - Perform PCA on data and/or project data into a\nsubspace defined by the PCA.\n\n"
  "Superclass: vtkSciVizStatistics\n\n"
  "This filter either computes a statistical model of a dataset or takes\n"
  "such a model as its second input. Then, the model (however it is\n"
  "obtained) may optionally be used to assess the input dataset.\n\n"
  "This filter performs additional analysis above and beyond the\n"
  "vtkPSciVizMultiCorrelativeStats filter. It computes the eigenvalues\n"
  "and eigenvectors of the covariance matrix from the multicorrelative\n"
  "filter. Data is then assessed by projecting the original tuples into\n"
  "a possibly lower-dimensional space.\n\n"
  "Since the PCA filter uses the multicorrelative filter's analysis, it\n"
  "shares the same raw covariance table specified in the\n"
  "multicorrelative documentation. The second table in the multiblock\n"
  "dataset comprising the model output is an expanded version of the\n"
  "multicorrelative version.\n\n"
  "As with the multicorrlative filter, the second model table contains\n"
  "the mean values, the upper-triangular portion of the symmetric\n"
  "covariance matrix, and the non-zero lower-triangular portion of the\n"
  "Cholesky decomposition of the covariance matrix. Below these entries\n"
  "are the eigenvalues of the covariance matrix (in the column labeled\n"
  "\"Mean\") and the eigenvectors (as row vectors) in an additional NxN\n"
  "matrix.\n\n";


static PyObject *
PyvtkPSciVizPCAStats_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPSciVizPCAStats::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSciVizPCAStats::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPSciVizPCAStats *tempr = vtkPSciVizPCAStats::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPSciVizPCAStats *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSciVizPCAStats::NewInstance());

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
PyvtkPSciVizPCAStats_SetNormalizationScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizationScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizationScheme(temp0);
    }
    else
    {
      op->vtkPSciVizPCAStats::SetNormalizationScheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetNormalizationScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizationScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalizationScheme() :
      op->vtkPSciVizPCAStats::GetNormalizationScheme());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_SetBasisScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasisScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBasisScheme(temp0);
    }
    else
    {
      op->vtkPSciVizPCAStats::SetBasisScheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetBasisScheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasisScheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBasisScheme() :
      op->vtkPSciVizPCAStats::GetBasisScheme());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_SetFixedBasisSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedBasisSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedBasisSize(temp0);
    }
    else
    {
      op->vtkPSciVizPCAStats::SetFixedBasisSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetFixedBasisSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFixedBasisSize() :
      op->vtkPSciVizPCAStats::GetFixedBasisSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_SetFixedBasisEnergy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedBasisEnergy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedBasisEnergy(temp0);
    }
    else
    {
      op->vtkPSciVizPCAStats::SetFixedBasisEnergy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetFixedBasisEnergyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisEnergyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFixedBasisEnergyMinValue() :
      op->vtkPSciVizPCAStats::GetFixedBasisEnergyMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetFixedBasisEnergyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisEnergyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFixedBasisEnergyMaxValue() :
      op->vtkPSciVizPCAStats::GetFixedBasisEnergyMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetFixedBasisEnergy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedBasisEnergy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFixedBasisEnergy() :
      op->vtkPSciVizPCAStats::GetFixedBasisEnergy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_SetRobustPCA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRobustPCA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRobustPCA(temp0);
    }
    else
    {
      op->vtkPSciVizPCAStats::SetRobustPCA(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_GetRobustPCA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRobustPCA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRobustPCA() :
      op->vtkPSciVizPCAStats::GetRobustPCA());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_RobustPCAOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RobustPCAOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RobustPCAOn();
    }
    else
    {
      op->vtkPSciVizPCAStats::RobustPCAOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizPCAStats_RobustPCAOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RobustPCAOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizPCAStats *op = static_cast<vtkPSciVizPCAStats *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RobustPCAOff();
    }
    else
    {
      op->vtkPSciVizPCAStats::RobustPCAOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPSciVizPCAStats_Methods[] = {
  {"IsTypeOf", PyvtkPSciVizPCAStats_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPSciVizPCAStats_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPSciVizPCAStats_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPSciVizPCAStats\nC++: static vtkPSciVizPCAStats *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPSciVizPCAStats_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPSciVizPCAStats\nC++: vtkPSciVizPCAStats *NewInstance()\n\n"},
  {"SetNormalizationScheme", PyvtkPSciVizPCAStats_SetNormalizationScheme, METH_VARARGS,
   "V.SetNormalizationScheme(int)\nC++: virtual void SetNormalizationScheme(int _arg)\n\n"},
  {"GetNormalizationScheme", PyvtkPSciVizPCAStats_GetNormalizationScheme, METH_VARARGS,
   "V.GetNormalizationScheme() -> int\nC++: virtual int GetNormalizationScheme()\n\n"},
  {"SetBasisScheme", PyvtkPSciVizPCAStats_SetBasisScheme, METH_VARARGS,
   "V.SetBasisScheme(int)\nC++: virtual void SetBasisScheme(int _arg)\n\n"},
  {"GetBasisScheme", PyvtkPSciVizPCAStats_GetBasisScheme, METH_VARARGS,
   "V.GetBasisScheme() -> int\nC++: virtual int GetBasisScheme()\n\n"},
  {"SetFixedBasisSize", PyvtkPSciVizPCAStats_SetFixedBasisSize, METH_VARARGS,
   "V.SetFixedBasisSize(int)\nC++: virtual void SetFixedBasisSize(int _arg)\n\n"},
  {"GetFixedBasisSize", PyvtkPSciVizPCAStats_GetFixedBasisSize, METH_VARARGS,
   "V.GetFixedBasisSize() -> int\nC++: virtual int GetFixedBasisSize()\n\n"},
  {"SetFixedBasisEnergy", PyvtkPSciVizPCAStats_SetFixedBasisEnergy, METH_VARARGS,
   "V.SetFixedBasisEnergy(float)\nC++: virtual void SetFixedBasisEnergy(double _arg)\n\n"},
  {"GetFixedBasisEnergyMinValue", PyvtkPSciVizPCAStats_GetFixedBasisEnergyMinValue, METH_VARARGS,
   "V.GetFixedBasisEnergyMinValue() -> float\nC++: virtual double GetFixedBasisEnergyMinValue()\n\n"},
  {"GetFixedBasisEnergyMaxValue", PyvtkPSciVizPCAStats_GetFixedBasisEnergyMaxValue, METH_VARARGS,
   "V.GetFixedBasisEnergyMaxValue() -> float\nC++: virtual double GetFixedBasisEnergyMaxValue()\n\n"},
  {"GetFixedBasisEnergy", PyvtkPSciVizPCAStats_GetFixedBasisEnergy, METH_VARARGS,
   "V.GetFixedBasisEnergy() -> float\nC++: virtual double GetFixedBasisEnergy()\n\n"},
  {"SetRobustPCA", PyvtkPSciVizPCAStats_SetRobustPCA, METH_VARARGS,
   "V.SetRobustPCA(bool)\nC++: virtual void SetRobustPCA(bool _arg)\n\n"},
  {"GetRobustPCA", PyvtkPSciVizPCAStats_GetRobustPCA, METH_VARARGS,
   "V.GetRobustPCA() -> bool\nC++: virtual bool GetRobustPCA()\n\n"},
  {"RobustPCAOn", PyvtkPSciVizPCAStats_RobustPCAOn, METH_VARARGS,
   "V.RobustPCAOn()\nC++: virtual void RobustPCAOn()\n\n"},
  {"RobustPCAOff", PyvtkPSciVizPCAStats_RobustPCAOff, METH_VARARGS,
   "V.RobustPCAOff()\nC++: virtual void RobustPCAOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPSciVizPCAStats_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPSciVizPCAStats", // tp_name
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
  PyvtkPSciVizPCAStats_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPSciVizPCAStats_StaticNew()
{
  return vtkPSciVizPCAStats::New();
}

PyObject *PyvtkPSciVizPCAStats_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPSciVizPCAStats_Type, PyvtkPSciVizPCAStats_Methods,
    "vtkPSciVizPCAStats",
 &PyvtkPSciVizPCAStats_StaticNew);

  PyTypeObject *pytype = &PyvtkPSciVizPCAStats_Type;

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

void PyVTKAddFile_vtkPSciVizPCAStats(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPSciVizPCAStats_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPSciVizPCAStats", o) != 0)
  {
    Py_DECREF(o);
  }

}

