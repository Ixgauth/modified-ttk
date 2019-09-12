// python wrapper for vtkExtractFunctionalBagPlot
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
#include "vtkExtractFunctionalBagPlot.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractFunctionalBagPlot(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractFunctionalBagPlot_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkExtractFunctionalBagPlot_Doc =
  "vtkExtractFunctionalBagPlot - From an input table containing series\non port 0 and another table describing densities on port 1 (for\ninstance obtained by applying filter \nvtkHighestDensityRegionsStatistics, this filter generates a table\ncontaining all t\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "he columns of the input port 0 plus two 2 components columns\n"
  "containing the bag series to be used by vtkFunctionalBagPlot.\n\n"
  "@sa\n"
  "vtkFunctionalBagPlot vtkHighestDensityRegionsStatistics\n\n";


static PyObject *
PyvtkExtractFunctionalBagPlot_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractFunctionalBagPlot::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractFunctionalBagPlot_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractFunctionalBagPlot *op = static_cast<vtkExtractFunctionalBagPlot *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractFunctionalBagPlot::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractFunctionalBagPlot_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractFunctionalBagPlot *tempr = vtkExtractFunctionalBagPlot::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractFunctionalBagPlot_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractFunctionalBagPlot *op = static_cast<vtkExtractFunctionalBagPlot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractFunctionalBagPlot *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractFunctionalBagPlot::NewInstance());

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
PyvtkExtractFunctionalBagPlot_SetDensityForP50(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityForP50");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractFunctionalBagPlot *op = static_cast<vtkExtractFunctionalBagPlot *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDensityForP50(temp0);
    }
    else
    {
      op->vtkExtractFunctionalBagPlot::SetDensityForP50(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractFunctionalBagPlot_SetDensityForPUser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityForPUser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractFunctionalBagPlot *op = static_cast<vtkExtractFunctionalBagPlot *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDensityForPUser(temp0);
    }
    else
    {
      op->vtkExtractFunctionalBagPlot::SetDensityForPUser(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractFunctionalBagPlot_SetPUser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPUser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractFunctionalBagPlot *op = static_cast<vtkExtractFunctionalBagPlot *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPUser(temp0);
    }
    else
    {
      op->vtkExtractFunctionalBagPlot::SetPUser(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractFunctionalBagPlot_Methods[] = {
  {"IsTypeOf", PyvtkExtractFunctionalBagPlot_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractFunctionalBagPlot_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractFunctionalBagPlot_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractFunctionalBagPlot\nC++: static vtkExtractFunctionalBagPlot *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractFunctionalBagPlot_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractFunctionalBagPlot\nC++: vtkExtractFunctionalBagPlot *NewInstance()\n\n"},
  {"SetDensityForP50", PyvtkExtractFunctionalBagPlot_SetDensityForP50, METH_VARARGS,
   "V.SetDensityForP50(float)\nC++: virtual void SetDensityForP50(double _arg)\n\n"},
  {"SetDensityForPUser", PyvtkExtractFunctionalBagPlot_SetDensityForPUser, METH_VARARGS,
   "V.SetDensityForPUser(float)\nC++: virtual void SetDensityForPUser(double _arg)\n\nDensity value for the user defined quartile.\n"},
  {"SetPUser", PyvtkExtractFunctionalBagPlot_SetPUser, METH_VARARGS,
   "V.SetPUser(int)\nC++: virtual void SetPUser(int _arg)\n\nDensity value for the user defined quartile.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractFunctionalBagPlot_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersStatisticsPython.vtkExtractFunctionalBagPlot", // tp_name
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
  PyvtkExtractFunctionalBagPlot_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractFunctionalBagPlot_StaticNew()
{
  return vtkExtractFunctionalBagPlot::New();
}

PyObject *PyvtkExtractFunctionalBagPlot_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractFunctionalBagPlot_Type, PyvtkExtractFunctionalBagPlot_Methods,
    "vtkExtractFunctionalBagPlot",
 &PyvtkExtractFunctionalBagPlot_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractFunctionalBagPlot_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractFunctionalBagPlot(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractFunctionalBagPlot_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractFunctionalBagPlot", o) != 0)
  {
    Py_DECREF(o);
  }

}

