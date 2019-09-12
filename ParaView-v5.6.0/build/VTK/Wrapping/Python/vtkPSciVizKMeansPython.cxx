// python wrapper for vtkPSciVizKMeans
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
#include "vtkPSciVizKMeans.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPSciVizKMeans(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPSciVizKMeans_ClassNew(); }

#ifndef DECLARED_PyvtkSciVizStatistics_ClassNew
extern "C" { PyObject *PyvtkSciVizStatistics_ClassNew(); }
#define DECLARED_PyvtkSciVizStatistics_ClassNew
#endif

static const char *PyvtkPSciVizKMeans_Doc =
  "vtkPSciVizKMeans - Find k cluster centers and/or assess the closest\ncenter and distance to it for each datum.\n\n"
  "Superclass: vtkSciVizStatistics\n\n"
  "This filter either computes a statistical model of a dataset or takes\n"
  "such a model as its second input. Then, the model (however it is\n"
  "obtained) may optionally be used to assess the input dataset.\n\n"
  "This filter iteratively computes the center of k clusters in a space\n"
  "whose coordinates are specified by the arrays you select. The\n"
  "clusters are chosen as local minima of the sum of square Euclidean\n"
  "distances from each point to its nearest cluster center. The model is\n"
  "then a set of cluster centers. Data is assessed by assigning a\n"
  "cluster center and distance to the cluster to each point in the input\n"
  "data set.\n\n";


static PyObject *
PyvtkPSciVizKMeans_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPSciVizKMeans::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSciVizKMeans::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPSciVizKMeans *tempr = vtkPSciVizKMeans::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPSciVizKMeans *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSciVizKMeans::NewInstance());

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
PyvtkPSciVizKMeans_SetK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetK(temp0);
    }
    else
    {
      op->vtkPSciVizKMeans::SetK(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_GetK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetK() :
      op->vtkPSciVizKMeans::GetK());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_SetMaxNumIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNumIterations(temp0);
    }
    else
    {
      op->vtkPSciVizKMeans::SetMaxNumIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_GetMaxNumIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumIterations() :
      op->vtkPSciVizKMeans::GetMaxNumIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkPSciVizKMeans::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPSciVizKMeans_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSciVizKMeans *op = static_cast<vtkPSciVizKMeans *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkPSciVizKMeans::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPSciVizKMeans_Methods[] = {
  {"IsTypeOf", PyvtkPSciVizKMeans_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPSciVizKMeans_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPSciVizKMeans_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPSciVizKMeans\nC++: static vtkPSciVizKMeans *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPSciVizKMeans_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPSciVizKMeans\nC++: vtkPSciVizKMeans *NewInstance()\n\n"},
  {"SetK", PyvtkPSciVizKMeans_SetK, METH_VARARGS,
   "V.SetK(int)\nC++: virtual void SetK(int _arg)\n\nThe number of cluster centers. The initial centers will be chosen\nrandomly. In the future the filter will accept an input table of\ninitial cluster positions. The default value of K is 5.\n"},
  {"GetK", PyvtkPSciVizKMeans_GetK, METH_VARARGS,
   "V.GetK() -> int\nC++: virtual int GetK()\n\nThe number of cluster centers. The initial centers will be chosen\nrandomly. In the future the filter will accept an input table of\ninitial cluster positions. The default value of K is 5.\n"},
  {"SetMaxNumIterations", PyvtkPSciVizKMeans_SetMaxNumIterations, METH_VARARGS,
   "V.SetMaxNumIterations(int)\nC++: virtual void SetMaxNumIterations(int _arg)\n\nThe maximum number of iterations to perform when converging on\ncluster centers. The default value is 50 iterations.\n"},
  {"GetMaxNumIterations", PyvtkPSciVizKMeans_GetMaxNumIterations, METH_VARARGS,
   "V.GetMaxNumIterations() -> int\nC++: virtual int GetMaxNumIterations()\n\nThe maximum number of iterations to perform when converging on\ncluster centers. The default value is 50 iterations.\n"},
  {"SetTolerance", PyvtkPSciVizKMeans_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nThe relative tolerance on cluster centers that will cause early\ntermination of the algorithm. The default value is 0.01: a 1\npercent change in cluster coordinates.\n"},
  {"GetTolerance", PyvtkPSciVizKMeans_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nThe relative tolerance on cluster centers that will cause early\ntermination of the algorithm. The default value is 0.01: a 1\npercent change in cluster coordinates.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPSciVizKMeans_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPSciVizKMeans", // tp_name
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
  PyvtkPSciVizKMeans_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPSciVizKMeans_StaticNew()
{
  return vtkPSciVizKMeans::New();
}

PyObject *PyvtkPSciVizKMeans_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPSciVizKMeans_Type, PyvtkPSciVizKMeans_Methods,
    "vtkPSciVizKMeans",
 &PyvtkPSciVizKMeans_StaticNew);

  PyTypeObject *pytype = &PyvtkPSciVizKMeans_Type;

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

void PyVTKAddFile_vtkPSciVizKMeans(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPSciVizKMeans_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPSciVizKMeans", o) != 0)
  {
    Py_DECREF(o);
  }

}

