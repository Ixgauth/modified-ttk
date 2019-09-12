// python wrapper for vtkReaderExecutive
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
#include "vtkInformationVector.h"
#include "vtkReaderExecutive.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkReaderExecutive(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkReaderExecutive_ClassNew(); }

#ifndef DECLARED_PyvtkStreamingDemandDrivenPipeline_ClassNew
extern "C" { PyObject *PyvtkStreamingDemandDrivenPipeline_ClassNew(); }
#define DECLARED_PyvtkStreamingDemandDrivenPipeline_ClassNew
#endif

static const char *PyvtkReaderExecutive_Doc =
  "vtkReaderExecutive - Executive that works with vtkReaderAlgorithm and\nsubclasses.\n\n"
  "Superclass: vtkStreamingDemandDrivenPipeline\n\n"
  "vtkReaderExecutive is an executive that supports simplified API\n"
  "readers that are written by subclassing from the vtkReaderAlgorithm\n"
  "hierarchy. Currently, its main functionality is to call the basic\n"
  "reader API instead if the standard ProcessRequest() method that other\n"
  "algorithms use. In time, this is likely to add functionality such as\n"
  "caching. See vtkReaderAlgorithm for the API.\n\n"
  "Note that this executive assumes that the reader has one output port.\n\n";


static PyObject *
PyvtkReaderExecutive_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkReaderExecutive::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReaderExecutive_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReaderExecutive *op = static_cast<vtkReaderExecutive *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReaderExecutive::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReaderExecutive_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkReaderExecutive *tempr = vtkReaderExecutive::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReaderExecutive_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReaderExecutive *op = static_cast<vtkReaderExecutive *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkReaderExecutive *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReaderExecutive::NewInstance());

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

static PyMethodDef PyvtkReaderExecutive_Methods[] = {
  {"IsTypeOf", PyvtkReaderExecutive_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkReaderExecutive_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkReaderExecutive_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkReaderExecutive\nC++: static vtkReaderExecutive *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkReaderExecutive_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkReaderExecutive\nC++: vtkReaderExecutive *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkReaderExecutive_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkReaderExecutive", // tp_name
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
  PyvtkReaderExecutive_Doc, // tp_doc
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

static vtkObjectBase *PyvtkReaderExecutive_StaticNew()
{
  return vtkReaderExecutive::New();
}

PyObject *PyvtkReaderExecutive_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkReaderExecutive_Type, PyvtkReaderExecutive_Methods,
    "vtkReaderExecutive",
 &PyvtkReaderExecutive_StaticNew);

  PyTypeObject *pytype = &PyvtkReaderExecutive_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkStreamingDemandDrivenPipeline_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkReaderExecutive(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkReaderExecutive_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkReaderExecutive", o) != 0)
  {
    Py_DECREF(o);
  }

}

