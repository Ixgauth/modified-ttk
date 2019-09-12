// python wrapper for vtkLinearSubdivisionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkLinearSubdivisionFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLinearSubdivisionFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLinearSubdivisionFilter_ClassNew(); }

#ifndef DECLARED_PyvtkInterpolatingSubdivisionFilter_ClassNew
extern "C" { PyObject *PyvtkInterpolatingSubdivisionFilter_ClassNew(); }
#define DECLARED_PyvtkInterpolatingSubdivisionFilter_ClassNew
#endif

static const char *PyvtkLinearSubdivisionFilter_Doc =
  "vtkLinearSubdivisionFilter - generate a subdivision surface using the\nLinear Scheme\n\n"
  "Superclass: vtkInterpolatingSubdivisionFilter\n\n"
  "vtkLinearSubdivisionFilter is a filter that generates output by\n"
  "subdividing its input polydata. Each subdivision iteration create 4\n"
  "new triangles for each triangle in the polydata.\n\n"
  "@par Thanks: This work was supported by PHS Research Grant No. 1 P41\n"
  "RR13218-01 from the National Center for Research Resources.\n\n"
  "@sa\n"
  "vtkInterpolatingSubdivisionFilter vtkButterflySubdivisionFilter\n\n";


static PyObject *
PyvtkLinearSubdivisionFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLinearSubdivisionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSubdivisionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSubdivisionFilter *op = static_cast<vtkLinearSubdivisionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLinearSubdivisionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSubdivisionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLinearSubdivisionFilter *tempr = vtkLinearSubdivisionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSubdivisionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSubdivisionFilter *op = static_cast<vtkLinearSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLinearSubdivisionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLinearSubdivisionFilter::NewInstance());

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

static PyMethodDef PyvtkLinearSubdivisionFilter_Methods[] = {
  {"IsTypeOf", PyvtkLinearSubdivisionFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {"IsA", PyvtkLinearSubdivisionFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {"SafeDownCast", PyvtkLinearSubdivisionFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLinearSubdivisionFilter\nC++: static vtkLinearSubdivisionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {"NewInstance", PyvtkLinearSubdivisionFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLinearSubdivisionFilter\nC++: vtkLinearSubdivisionFilter *NewInstance()\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLinearSubdivisionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkLinearSubdivisionFilter", // tp_name
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
  PyvtkLinearSubdivisionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLinearSubdivisionFilter_StaticNew()
{
  return vtkLinearSubdivisionFilter::New();
}

PyObject *PyvtkLinearSubdivisionFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLinearSubdivisionFilter_Type, PyvtkLinearSubdivisionFilter_Methods,
    "vtkLinearSubdivisionFilter",
 &PyvtkLinearSubdivisionFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkLinearSubdivisionFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInterpolatingSubdivisionFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLinearSubdivisionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLinearSubdivisionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLinearSubdivisionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

