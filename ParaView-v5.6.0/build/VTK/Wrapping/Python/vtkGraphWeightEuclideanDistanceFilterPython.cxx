// python wrapper for vtkGraphWeightEuclideanDistanceFilter
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
#include "vtkGraphWeightEuclideanDistanceFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphWeightEuclideanDistanceFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGraphWeightEuclideanDistanceFilter_ClassNew(); }

#ifndef DECLARED_PyvtkGraphWeightFilter_ClassNew
extern "C" { PyObject *PyvtkGraphWeightFilter_ClassNew(); }
#define DECLARED_PyvtkGraphWeightFilter_ClassNew
#endif

static const char *PyvtkGraphWeightEuclideanDistanceFilter_Doc =
  "vtkGraphWeightEuclideanDistanceFilter - Weights the edges of a graph\nbased on the Euclidean distance between the points.\n\n"
  "Superclass: vtkGraphWeightFilter\n\n"
  "Weights the edges of a graph based on the Euclidean distance between\n"
  "the points.\n\n";


static PyObject *
PyvtkGraphWeightEuclideanDistanceFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphWeightEuclideanDistanceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphWeightEuclideanDistanceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphWeightEuclideanDistanceFilter *op = static_cast<vtkGraphWeightEuclideanDistanceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphWeightEuclideanDistanceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphWeightEuclideanDistanceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphWeightEuclideanDistanceFilter *tempr = vtkGraphWeightEuclideanDistanceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphWeightEuclideanDistanceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphWeightEuclideanDistanceFilter *op = static_cast<vtkGraphWeightEuclideanDistanceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphWeightEuclideanDistanceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphWeightEuclideanDistanceFilter::NewInstance());

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

static PyMethodDef PyvtkGraphWeightEuclideanDistanceFilter_Methods[] = {
  {"IsTypeOf", PyvtkGraphWeightEuclideanDistanceFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphWeightEuclideanDistanceFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphWeightEuclideanDistanceFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkGraphWeightEuclideanDistanceFilter\nC++: static vtkGraphWeightEuclideanDistanceFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphWeightEuclideanDistanceFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGraphWeightEuclideanDistanceFilter\nC++: vtkGraphWeightEuclideanDistanceFilter *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGraphWeightEuclideanDistanceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkGraphWeightEuclideanDistanceFilter", // tp_name
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
  PyvtkGraphWeightEuclideanDistanceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphWeightEuclideanDistanceFilter_StaticNew()
{
  return vtkGraphWeightEuclideanDistanceFilter::New();
}

PyObject *PyvtkGraphWeightEuclideanDistanceFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGraphWeightEuclideanDistanceFilter_Type, PyvtkGraphWeightEuclideanDistanceFilter_Methods,
    "vtkGraphWeightEuclideanDistanceFilter",
 &PyvtkGraphWeightEuclideanDistanceFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkGraphWeightEuclideanDistanceFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGraphWeightFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphWeightEuclideanDistanceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphWeightEuclideanDistanceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphWeightEuclideanDistanceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

