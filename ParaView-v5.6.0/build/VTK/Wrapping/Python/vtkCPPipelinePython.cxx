// python wrapper for vtkCPPipeline
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
#include "vtkCPPipeline.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCPPipeline(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCPPipeline_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCPPipeline_Doc =
  "vtkCPPipeline - @ingroup CoProcessing\n\n"
  "Superclass: vtkObject\n\n"
  "Generic interface for operating on pipelines.  The user can use this\n"
  "if they only have a single pipeline that they want to operate on or\n"
  "they can use this to create a single pipeline and add it to\n"
  "vtkCPProcessor.  Each derived class should set itself up before\n"
  "adding itself to vtkCPProcessor.\n\n";


static PyObject *
PyvtkCPPipeline_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCPPipeline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPipeline *op = static_cast<vtkCPPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCPPipeline *tempr = vtkCPPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPipeline *op = static_cast<vtkCPPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCPPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPPipeline::NewInstance());

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
PyvtkCPPipeline_RequestDataDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestDataDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPipeline *op = static_cast<vtkCPPipeline *>(vp);

  vtkCPDataDescription *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPDataDescription"))
  {
    int tempr = op->RequestDataDescription(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPPipeline_CoProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPipeline *op = static_cast<vtkCPPipeline *>(vp);

  vtkCPDataDescription *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPDataDescription"))
  {
    int tempr = op->CoProcess(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPPipeline_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPipeline *op = static_cast<vtkCPPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Finalize() :
      op->vtkCPPipeline::Finalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCPPipeline_Methods[] = {
  {"IsTypeOf", PyvtkCPPipeline_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCPPipeline_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCPPipeline_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCPPipeline\nC++: static vtkCPPipeline *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCPPipeline_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCPPipeline\nC++: vtkCPPipeline *NewInstance()\n\n"},
  {"RequestDataDescription", PyvtkCPPipeline_RequestDataDescription, METH_VARARGS,
   "V.RequestDataDescription(vtkCPDataDescription) -> int\nC++: virtual int RequestDataDescription(\n    vtkCPDataDescription *dataDescription)\n\nConfiguration Step: The coprocessor first determines if any\ncoprocessing needs to be done at this TimeStep/Time combination\nreturning 1 if it does and 0 otherwise.  If coprocessing does\nneed to be performed this time step it fills in the FieldNames\narray that the coprocessor requires in order to fulfill all the\ncoprocessing requests for this TimeStep/Time combination.\n"},
  {"CoProcess", PyvtkCPPipeline_CoProcess, METH_VARARGS,
   "V.CoProcess(vtkCPDataDescription) -> int\nC++: virtual int CoProcess(vtkCPDataDescription *dataDescription)\n\nExecute the pipeline. Returns 1 for success and 0 for failure.\n"},
  {"Finalize", PyvtkCPPipeline_Finalize, METH_VARARGS,
   "V.Finalize() -> int\nC++: virtual int Finalize()\n\nFinalize the pipeline before deleting it. A default no-op\nimplementation is given. Returns 1 for success and 0 for failure.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCPPipeline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCatalystPython.vtkCPPipeline", // tp_name
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
  PyvtkCPPipeline_Doc, // tp_doc
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

PyObject *PyvtkCPPipeline_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCPPipeline_Type, PyvtkCPPipeline_Methods,
    "vtkCPPipeline",
 nullptr);

  PyTypeObject *pytype = &PyvtkCPPipeline_Type;

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

void PyVTKAddFile_vtkCPPipeline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCPPipeline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCPPipeline", o) != 0)
  {
    Py_DECREF(o);
  }

}

