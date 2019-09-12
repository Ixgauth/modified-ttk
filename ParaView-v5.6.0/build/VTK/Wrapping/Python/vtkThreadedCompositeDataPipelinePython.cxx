// python wrapper for vtkThreadedCompositeDataPipeline
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
#include "vtkThreadedCompositeDataPipeline.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkThreadedCompositeDataPipeline(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkThreadedCompositeDataPipeline_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeDataPipeline_ClassNew
extern "C" { PyObject *PyvtkCompositeDataPipeline_ClassNew(); }
#define DECLARED_PyvtkCompositeDataPipeline_ClassNew
#endif

static const char *PyvtkThreadedCompositeDataPipeline_Doc =
  "vtkThreadedCompositeDataPipeline - Executive that works in parallel\n\n"
  "Superclass: vtkCompositeDataPipeline\n\n"
  "vtkThreadedCompositeDataPipeline processes a composite data object in\n"
  "parallel using the SMP framework. It does this by creating a vector\n"
  "of data objects (the pieces of the composite data) and processing\n"
  "them using vtkSMPTools::For. Note that this requires that the\n"
  "algorithm implement all pipeline passes in a re-entrant way. It\n"
  "should store/retrieve all state changes using input and output\n"
  "information objects, which are unique to each thread.\n\n";


static PyObject *
PyvtkThreadedCompositeDataPipeline_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkThreadedCompositeDataPipeline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedCompositeDataPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedCompositeDataPipeline *op = static_cast<vtkThreadedCompositeDataPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThreadedCompositeDataPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedCompositeDataPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkThreadedCompositeDataPipeline *tempr = vtkThreadedCompositeDataPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedCompositeDataPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedCompositeDataPipeline *op = static_cast<vtkThreadedCompositeDataPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkThreadedCompositeDataPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThreadedCompositeDataPipeline::NewInstance());

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

static PyMethodDef PyvtkThreadedCompositeDataPipeline_Methods[] = {
  {"IsTypeOf", PyvtkThreadedCompositeDataPipeline_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkThreadedCompositeDataPipeline_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkThreadedCompositeDataPipeline_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkThreadedCompositeDataPipeline\nC++: static vtkThreadedCompositeDataPipeline *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkThreadedCompositeDataPipeline_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkThreadedCompositeDataPipeline\nC++: vtkThreadedCompositeDataPipeline *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkThreadedCompositeDataPipeline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkThreadedCompositeDataPipeline", // tp_name
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
  PyvtkThreadedCompositeDataPipeline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkThreadedCompositeDataPipeline_StaticNew()
{
  return vtkThreadedCompositeDataPipeline::New();
}

PyObject *PyvtkThreadedCompositeDataPipeline_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkThreadedCompositeDataPipeline_Type, PyvtkThreadedCompositeDataPipeline_Methods,
    "vtkThreadedCompositeDataPipeline",
 &PyvtkThreadedCompositeDataPipeline_StaticNew);

  PyTypeObject *pytype = &PyvtkThreadedCompositeDataPipeline_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCompositeDataPipeline_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkThreadedCompositeDataPipeline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkThreadedCompositeDataPipeline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkThreadedCompositeDataPipeline", o) != 0)
  {
    Py_DECREF(o);
  }

}

