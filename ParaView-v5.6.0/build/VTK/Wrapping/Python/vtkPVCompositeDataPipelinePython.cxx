// python wrapper for vtkPVCompositeDataPipeline
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
#include "vtkPVCompositeDataPipeline.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVCompositeDataPipeline(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVCompositeDataPipeline_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeDataPipeline_ClassNew
extern "C" { PyObject *PyvtkCompositeDataPipeline_ClassNew(); }
#define DECLARED_PyvtkCompositeDataPipeline_ClassNew
#endif

static const char *PyvtkPVCompositeDataPipeline_Doc =
  "vtkPVCompositeDataPipeline - executive to add support for\nvtkPVPostFilter in ParaView data pipelines.\n\n"
  "Superclass: vtkCompositeDataPipeline\n\n"
  "vtkPVCompositeDataPipeline extends vtkCompositeDataPipeline to add\n"
  "ParaView specific extensions to the pipeline.\n"
  "\\li Post Filter :- it adds support to ensure that array requests made\n"
  "on\n"
  "    algorithms are passed along to the input vtkPVPostFilter, if one\n"
  "exists.\n"
  "    vtkPVPostFilter is used to automatically extract components or\n"
  "generated\n"
  "    derived arrays such as magnitude array for vectors.\n\n";


static PyObject *
PyvtkPVCompositeDataPipeline_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCompositeDataPipeline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataPipeline *op = static_cast<vtkPVCompositeDataPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCompositeDataPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVCompositeDataPipeline *tempr = vtkPVCompositeDataPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeDataPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeDataPipeline *op = static_cast<vtkPVCompositeDataPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCompositeDataPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCompositeDataPipeline::NewInstance());

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

static PyMethodDef PyvtkPVCompositeDataPipeline_Methods[] = {
  {"IsTypeOf", PyvtkPVCompositeDataPipeline_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVCompositeDataPipeline_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVCompositeDataPipeline_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVCompositeDataPipeline\nC++: static vtkPVCompositeDataPipeline *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVCompositeDataPipeline_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVCompositeDataPipeline\nC++: vtkPVCompositeDataPipeline *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVCompositeDataPipeline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkPVCompositeDataPipeline", // tp_name
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
  PyvtkPVCompositeDataPipeline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVCompositeDataPipeline_StaticNew()
{
  return vtkPVCompositeDataPipeline::New();
}

PyObject *PyvtkPVCompositeDataPipeline_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVCompositeDataPipeline_Type, PyvtkPVCompositeDataPipeline_Methods,
    "vtkPVCompositeDataPipeline",
 &PyvtkPVCompositeDataPipeline_StaticNew);

  PyTypeObject *pytype = &PyvtkPVCompositeDataPipeline_Type;

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

void PyVTKAddFile_vtkPVCompositeDataPipeline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVCompositeDataPipeline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVCompositeDataPipeline", o) != 0)
  {
    Py_DECREF(o);
  }

}

