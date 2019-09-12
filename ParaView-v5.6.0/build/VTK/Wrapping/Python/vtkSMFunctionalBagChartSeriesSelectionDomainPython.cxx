// python wrapper for vtkSMFunctionalBagChartSeriesSelectionDomain
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
#include "vtkSMFunctionalBagChartSeriesSelectionDomain.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMFunctionalBagChartSeriesSelectionDomain(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMFunctionalBagChartSeriesSelectionDomain_ClassNew(); }

#ifndef DECLARED_PyvtkSMChartSeriesSelectionDomain_ClassNew
extern "C" { PyObject *PyvtkSMChartSeriesSelectionDomain_ClassNew(); }
#define DECLARED_PyvtkSMChartSeriesSelectionDomain_ClassNew
#endif

static const char *PyvtkSMFunctionalBagChartSeriesSelectionDomain_Doc =
  "vtkSMFunctionalBagChartSeriesSelectionDomain - extends\nvtkSMChartSeriesListDomain to add logic to better handle default\nvisibility suitable for bag and outliers.\n\n"
  "Superclass: vtkSMChartSeriesSelectionDomain\n\n"
  "vtkSMFunctionalBagChartSeriesSelectionDomain extends\n"
  "vtkSMChartSeriesSelectionDomain to handle default values visibility\n"
  "for bags and outliers.\n\n";


static PyObject *
PyvtkSMFunctionalBagChartSeriesSelectionDomain_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMFunctionalBagChartSeriesSelectionDomain::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMFunctionalBagChartSeriesSelectionDomain_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFunctionalBagChartSeriesSelectionDomain *op = static_cast<vtkSMFunctionalBagChartSeriesSelectionDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMFunctionalBagChartSeriesSelectionDomain::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMFunctionalBagChartSeriesSelectionDomain_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMFunctionalBagChartSeriesSelectionDomain *tempr = vtkSMFunctionalBagChartSeriesSelectionDomain::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMFunctionalBagChartSeriesSelectionDomain_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFunctionalBagChartSeriesSelectionDomain *op = static_cast<vtkSMFunctionalBagChartSeriesSelectionDomain *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMFunctionalBagChartSeriesSelectionDomain *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMFunctionalBagChartSeriesSelectionDomain::NewInstance());

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
PyvtkSMFunctionalBagChartSeriesSelectionDomain_GetDefaultSeriesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultSeriesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMFunctionalBagChartSeriesSelectionDomain *op = static_cast<vtkSMFunctionalBagChartSeriesSelectionDomain *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDefaultSeriesVisibility(temp0) :
      op->vtkSMFunctionalBagChartSeriesSelectionDomain::GetDefaultSeriesVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMFunctionalBagChartSeriesSelectionDomain_Methods[] = {
  {"IsTypeOf", PyvtkSMFunctionalBagChartSeriesSelectionDomain_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMFunctionalBagChartSeriesSelectionDomain_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMFunctionalBagChartSeriesSelectionDomain_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkSMFunctionalBagChartSeriesSelectionDomain\nC++: static vtkSMFunctionalBagChartSeriesSelectionDomain *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMFunctionalBagChartSeriesSelectionDomain_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMFunctionalBagChartSeriesSelectionDomain\nC++: vtkSMFunctionalBagChartSeriesSelectionDomain *NewInstance()\n\n"},
  {"GetDefaultSeriesVisibility", PyvtkSMFunctionalBagChartSeriesSelectionDomain_GetDefaultSeriesVisibility, METH_VARARGS,
   "V.GetDefaultSeriesVisibility(string) -> bool\nC++: bool GetDefaultSeriesVisibility(const char *) override;\n\nReturns the default visibility for a series given its name.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMFunctionalBagChartSeriesSelectionDomain_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMFunctionalBagChartSeriesSelectionDomain", // tp_name
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
  PyvtkSMFunctionalBagChartSeriesSelectionDomain_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMFunctionalBagChartSeriesSelectionDomain_StaticNew()
{
  return vtkSMFunctionalBagChartSeriesSelectionDomain::New();
}

PyObject *PyvtkSMFunctionalBagChartSeriesSelectionDomain_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMFunctionalBagChartSeriesSelectionDomain_Type, PyvtkSMFunctionalBagChartSeriesSelectionDomain_Methods,
    "vtkSMFunctionalBagChartSeriesSelectionDomain",
 &PyvtkSMFunctionalBagChartSeriesSelectionDomain_StaticNew);

  PyTypeObject *pytype = &PyvtkSMFunctionalBagChartSeriesSelectionDomain_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMChartSeriesSelectionDomain_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMFunctionalBagChartSeriesSelectionDomain(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMFunctionalBagChartSeriesSelectionDomain_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMFunctionalBagChartSeriesSelectionDomain", o) != 0)
  {
    Py_DECREF(o);
  }

}

