// python wrapper for vtkReebGraphSimplificationMetric
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
#include "vtkReebGraphSimplificationMetric.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkReebGraphSimplificationMetric(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkReebGraphSimplificationMetric_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkReebGraphSimplificationMetric_Doc =
  "vtkReebGraphSimplificationMetric - abstract class for custom Reeb\ngraph simplification metric design.\n\n"
  "Superclass: vtkObject\n\n"
  "This class makes it possible to design customized simplification\n"
  "metric evaluation algorithms, enabling the user to control the\n"
  "definition of what should be considered as noise or signal in the\n"
  "topological filtering process.\n\n"
  "References: \"Topological persistence and simplification\", H.\n"
  "Edelsbrunner, D. Letscher, and A. Zomorodian, Discrete Computational\n"
  "Geometry, 28:511-533, 2002.\n\n"
  "\"Extreme elevation on a 2-manifold\", P.K. Agarwal, H. Edelsbrunner,\n"
  "J. Harer, and Y. Wang, ACM Symposium on Computational Geometry, pp.\n"
  "357-365, 2004.\n\n"
  "\"Simplifying flexible isosurfaces using local geometric measures\", H.\n"
  "Carr, J. Snoeyink, M van de Panne, IEEE Visualization, 497-504, 2004\n\n"
  "\"Loop surgery for volumetric meshes: Reeb graphs reduced to contour\n"
  "trees\", J. Tierny, A. Gyulassy, E. Simon, V. Pascucci, IEEE Trans. on\n"
  "Vis. and Comp. Graph. (Proc of IEEE VIS), 15:1177-1184, 2009.\n\n"
  "See Graphics/Testing/Cxx/TestReebGraph.cxx for an example of concrete\n"
  "implementation.\n\n";


static PyObject *
PyvtkReebGraphSimplificationMetric_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkReebGraphSimplificationMetric::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReebGraphSimplificationMetric::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkReebGraphSimplificationMetric *tempr = vtkReebGraphSimplificationMetric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkReebGraphSimplificationMetric *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReebGraphSimplificationMetric::NewInstance());

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
PyvtkReebGraphSimplificationMetric_SetLowerBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLowerBound(temp0);
    }
    else
    {
      op->vtkReebGraphSimplificationMetric::SetLowerBound(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_GetLowerBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowerBound() :
      op->vtkReebGraphSimplificationMetric::GetLowerBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_SetUpperBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUpperBound(temp0);
    }
    else
    {
      op->vtkReebGraphSimplificationMetric::SetUpperBound(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_GetUpperBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpperBound() :
      op->vtkReebGraphSimplificationMetric::GetUpperBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationMetric_ComputeMetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationMetric *op = static_cast<vtkReebGraphSimplificationMetric *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkIdType temp2;
  vtkAbstractArray *temp3 = nullptr;
  vtkIdType temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray") &&
      ap.GetValue(temp4))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeMetric(temp0, temp1, temp2, temp3, temp4) :
      op->vtkReebGraphSimplificationMetric::ComputeMetric(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkReebGraphSimplificationMetric_Methods[] = {
  {"IsTypeOf", PyvtkReebGraphSimplificationMetric_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkReebGraphSimplificationMetric_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkReebGraphSimplificationMetric_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkReebGraphSimplificationMetric\nC++: static vtkReebGraphSimplificationMetric *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkReebGraphSimplificationMetric_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkReebGraphSimplificationMetric\nC++: vtkReebGraphSimplificationMetric *NewInstance()\n\n"},
  {"SetLowerBound", PyvtkReebGraphSimplificationMetric_SetLowerBound, METH_VARARGS,
   "V.SetLowerBound(float)\nC++: virtual void SetLowerBound(double _arg)\n\nSet the lowest possible value for the custom metric space. This\nvalue can be set prior to launching the Reeb graph simplification\nand then used inside the ComputeMetric call to make sure the\nreturned value of ComputeMetric call is indeed between 0 and 1.\n"},
  {"GetLowerBound", PyvtkReebGraphSimplificationMetric_GetLowerBound, METH_VARARGS,
   "V.GetLowerBound() -> float\nC++: virtual double GetLowerBound()\n\nSet the lowest possible value for the custom metric space. This\nvalue can be set prior to launching the Reeb graph simplification\nand then used inside the ComputeMetric call to make sure the\nreturned value of ComputeMetric call is indeed between 0 and 1.\n"},
  {"SetUpperBound", PyvtkReebGraphSimplificationMetric_SetUpperBound, METH_VARARGS,
   "V.SetUpperBound(float)\nC++: virtual void SetUpperBound(double _arg)\n\nSet the highest possible value for the custom metric space. This\nvalue can be set prior to launching the Reeb graph simplification\nand then used inside the ComputeMetric call to make sure the\nreturned value of ComputeMetric call is indeed between 0 and 1.\n"},
  {"GetUpperBound", PyvtkReebGraphSimplificationMetric_GetUpperBound, METH_VARARGS,
   "V.GetUpperBound() -> float\nC++: virtual double GetUpperBound()\n\nSet the highest possible value for the custom metric space. This\nvalue can be set prior to launching the Reeb graph simplification\nand then used inside the ComputeMetric call to make sure the\nreturned value of ComputeMetric call is indeed between 0 and 1.\n"},
  {"ComputeMetric", PyvtkReebGraphSimplificationMetric_ComputeMetric, METH_VARARGS,
   "V.ComputeMetric(vtkDataSet, vtkDataArray, int, vtkAbstractArray,\n    int) -> float\nC++: virtual double ComputeMetric(vtkDataSet *mesh,\n    vtkDataArray *field, vtkIdType startCriticalPoint,\n    vtkAbstractArray *vertexList, vtkIdType endCriticalPoint)\n\nFunction to implement in your simplification metric algorithm.\nGiven the input mesh and the Ids of the vertices living on the\nReeb graph arc to consider for removal, you should return a value\nbetween 0 and 1 (the smallest the more likely the arc will be\nremoved, depending on the user-defined simplification threshold).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkReebGraphSimplificationMetric_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkReebGraphSimplificationMetric", // tp_name
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
  PyvtkReebGraphSimplificationMetric_Doc, // tp_doc
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

static vtkObjectBase *PyvtkReebGraphSimplificationMetric_StaticNew()
{
  return vtkReebGraphSimplificationMetric::New();
}

PyObject *PyvtkReebGraphSimplificationMetric_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkReebGraphSimplificationMetric_Type, PyvtkReebGraphSimplificationMetric_Methods,
    "vtkReebGraphSimplificationMetric",
 &PyvtkReebGraphSimplificationMetric_StaticNew);

  PyTypeObject *pytype = &PyvtkReebGraphSimplificationMetric_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkReebGraphSimplificationMetric(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkReebGraphSimplificationMetric_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkReebGraphSimplificationMetric", o) != 0)
  {
    Py_DECREF(o);
  }

}

