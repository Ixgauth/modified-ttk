// python wrapper for vtkInterpolatingSubdivisionFilter
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
#include "vtkInterpolatingSubdivisionFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInterpolatingSubdivisionFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInterpolatingSubdivisionFilter_ClassNew(); }

#ifndef DECLARED_PyvtkSubdivisionFilter_ClassNew
extern "C" { PyObject *PyvtkSubdivisionFilter_ClassNew(); }
#define DECLARED_PyvtkSubdivisionFilter_ClassNew
#endif

static const char *PyvtkInterpolatingSubdivisionFilter_Doc =
  "vtkInterpolatingSubdivisionFilter - generate a subdivision surface\nusing an Interpolating Scheme\n\n"
  "Superclass: vtkSubdivisionFilter\n\n"
  "vtkInterpolatingSubdivisionFilter is an abstract class that defines\n"
  "the protocol for interpolating subdivision surface filters.\n\n"
  "@par Thanks: This work was supported by PHS Research Grant No. 1 P41\n"
  "RR13218-01 from the National Center for Research Resources.\n\n"
  "@sa\n"
  "vtkLinearSubdivisionFilter vtkButterflySubdivisionFilter\n\n";


static PyObject *
PyvtkInterpolatingSubdivisionFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInterpolatingSubdivisionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolatingSubdivisionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatingSubdivisionFilter *op = static_cast<vtkInterpolatingSubdivisionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInterpolatingSubdivisionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolatingSubdivisionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInterpolatingSubdivisionFilter *tempr = vtkInterpolatingSubdivisionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolatingSubdivisionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatingSubdivisionFilter *op = static_cast<vtkInterpolatingSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInterpolatingSubdivisionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInterpolatingSubdivisionFilter::NewInstance());

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

static PyMethodDef PyvtkInterpolatingSubdivisionFilter_Methods[] = {
  {"IsTypeOf", PyvtkInterpolatingSubdivisionFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInterpolatingSubdivisionFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInterpolatingSubdivisionFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInterpolatingSubdivisionFilter\nC++: static vtkInterpolatingSubdivisionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInterpolatingSubdivisionFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInterpolatingSubdivisionFilter\nC++: vtkInterpolatingSubdivisionFilter *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInterpolatingSubdivisionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkInterpolatingSubdivisionFilter", // tp_name
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
  PyvtkInterpolatingSubdivisionFilter_Doc, // tp_doc
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

PyObject *PyvtkInterpolatingSubdivisionFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInterpolatingSubdivisionFilter_Type, PyvtkInterpolatingSubdivisionFilter_Methods,
    "vtkInterpolatingSubdivisionFilter",
 nullptr);

  PyTypeObject *pytype = &PyvtkInterpolatingSubdivisionFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSubdivisionFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInterpolatingSubdivisionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInterpolatingSubdivisionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInterpolatingSubdivisionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

