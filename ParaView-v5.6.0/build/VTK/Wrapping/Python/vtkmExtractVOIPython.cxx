// python wrapper for vtkmExtractVOI
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
#include "vtkmExtractVOI.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkmExtractVOI(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkmExtractVOI_ClassNew(); }

#ifndef DECLARED_PyvtkExtractVOI_ClassNew
extern "C" { PyObject *PyvtkExtractVOI_ClassNew(); }
#define DECLARED_PyvtkExtractVOI_ClassNew
#endif

static const char *PyvtkmExtractVOI_Doc =
  "vtkmExtractVOI - select piece (e.g., volume of interest) and/or\nsubsample structured points dataset\n\n"
  "Superclass: vtkExtractVOI\n\n"
  "vtkmExtractVOI is a filter that selects a portion of an input\n"
  "structured points dataset, or subsamples an input dataset. (The\n"
  "selected portion of interested is referred to as the Volume Of\n"
  "Interest, or VOI.) The output of this filter is a structured points\n"
  "dataset. The filter treats input data of any topological dimension\n"
  "(i.e., point, line, image, or volume) and can generate output data of\n"
  "any topological dimension.\n\n"
  "To use this filter set the VOI ivar which are i-j-k min/max indices\n"
  "that specify a rectangular region in the data. (Note that these are\n"
  "0-offset.) You can also specify a sampling rate to subsample the\n"
  "data.\n\n"
  "Typical applications of this filter are to extract a slice from a\n"
  "volume for image processing, subsampling large volumes to reduce data\n"
  "size, or extracting regions of a volume with interesting data.\n\n";


static PyObject *
PyvtkmExtractVOI_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkmExtractVOI::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmExtractVOI_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmExtractVOI *op = static_cast<vtkmExtractVOI *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkmExtractVOI::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmExtractVOI_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkmExtractVOI *tempr = vtkmExtractVOI::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmExtractVOI_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmExtractVOI *op = static_cast<vtkmExtractVOI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkmExtractVOI *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkmExtractVOI::NewInstance());

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

static PyMethodDef PyvtkmExtractVOI_Methods[] = {
  {"IsTypeOf", PyvtkmExtractVOI_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkmExtractVOI_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkmExtractVOI_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkmExtractVOI\nC++: static vtkmExtractVOI *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkmExtractVOI_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkmExtractVOI\nC++: vtkmExtractVOI *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkmExtractVOI_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkAcceleratorsVTKmPython.vtkmExtractVOI", // tp_name
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
  PyvtkmExtractVOI_Doc, // tp_doc
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

static vtkObjectBase *PyvtkmExtractVOI_StaticNew()
{
  return vtkmExtractVOI::New();
}

PyObject *PyvtkmExtractVOI_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkmExtractVOI_Type, PyvtkmExtractVOI_Methods,
    "vtkmExtractVOI",
 &PyvtkmExtractVOI_StaticNew);

  PyTypeObject *pytype = &PyvtkmExtractVOI_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExtractVOI_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkmExtractVOI(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkmExtractVOI_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkmExtractVOI", o) != 0)
  {
    Py_DECREF(o);
  }

}

