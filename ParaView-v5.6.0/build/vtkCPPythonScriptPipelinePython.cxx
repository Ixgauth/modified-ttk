// python wrapper for vtkCPPythonScriptPipeline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkCPPythonScriptPipeline.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCPPythonScriptPipeline(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCPPythonScriptPipeline_ClassNew(); }

#ifndef DECLARED_PyvtkCPPipeline_ClassNew
extern "C" { PyObject *PyvtkCPPipeline_ClassNew(); }
#define DECLARED_PyvtkCPPipeline_ClassNew
#endif

static const char *PyvtkCPPythonScriptPipeline_Doc =
  "vtkCPPythonScriptPipeline - @ingroup CoProcessing\n\n"
  "Superclass: vtkCPPipeline\n\n"
  "Class that creates a coprocessing pipeline starting from a\n"
  "coprocessing script.  This class only does operations with respect to\n"
  "the script and uses the name of the script as the module to hide its\n"
  "definitions from other python modules.\n\n";


static PyObject *
PyvtkCPPythonScriptPipeline_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTypeBool tempr = vtkCPPythonScriptPipeline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTypeBool");
    }
  }

  return result;
}


static PyObject *
PyvtkCPPythonScriptPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPythonScriptPipeline *op = static_cast<vtkCPPythonScriptPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTypeBool tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPPythonScriptPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTypeBool");
    }
  }

  return result;
}


static PyObject *
PyvtkCPPythonScriptPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCPPythonScriptPipeline *tempr = vtkCPPythonScriptPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPPythonScriptPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPythonScriptPipeline *op = static_cast<vtkCPPythonScriptPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCPPythonScriptPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPPythonScriptPipeline::NewInstance());

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
PyvtkCPPythonScriptPipeline_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPythonScriptPipeline *op = static_cast<vtkCPPythonScriptPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Initialize(temp0) :
      op->vtkCPPythonScriptPipeline::Initialize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPPythonScriptPipeline_RequestDataDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestDataDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPythonScriptPipeline *op = static_cast<vtkCPPythonScriptPipeline *>(vp);

  vtkCPDataDescription *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPDataDescription"))
  {
    int tempr = (ap.IsBound() ?
      op->RequestDataDescription(temp0) :
      op->vtkCPPythonScriptPipeline::RequestDataDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPPythonScriptPipeline_CoProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPythonScriptPipeline *op = static_cast<vtkCPPythonScriptPipeline *>(vp);

  vtkCPDataDescription *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCPDataDescription"))
  {
    int tempr = (ap.IsBound() ?
      op->CoProcess(temp0) :
      op->vtkCPPythonScriptPipeline::CoProcess(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPPythonScriptPipeline_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPPythonScriptPipeline *op = static_cast<vtkCPPythonScriptPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Finalize() :
      op->vtkCPPythonScriptPipeline::Finalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCPPythonScriptPipeline_Methods[] = {
  {"IsTypeOf", PyvtkCPPythonScriptPipeline_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> vtkTypeBool\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\n"},
  {"IsA", PyvtkCPPythonScriptPipeline_IsA, METH_VARARGS,
   "V.IsA(string) -> vtkTypeBool\nC++: vtkTypeBool IsA(const char *type) override;\n\n"},
  {"SafeDownCast", PyvtkCPPythonScriptPipeline_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCPPythonScriptPipeline\nC++: static vtkCPPythonScriptPipeline *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCPPythonScriptPipeline_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCPPythonScriptPipeline\nC++: vtkCPPythonScriptPipeline *NewInstance()\n\n"},
  {"Initialize", PyvtkCPPythonScriptPipeline_Initialize, METH_VARARGS,
   "V.Initialize(string) -> int\nC++: int Initialize(const char *fileName)\n\nInitialize this pipeline from given the file name of a python\nscript. Returns 1 for success and 0 for failure.\n"},
  {"RequestDataDescription", PyvtkCPPythonScriptPipeline_RequestDataDescription, METH_VARARGS,
   "V.RequestDataDescription(vtkCPDataDescription) -> int\nC++: virtual int RequestDataDescription(\n    vtkCPDataDescription *dataDescription) override;\n\nConfiguration Step: The coprocessor first determines if any\ncoprocessing needs to be done at this TimeStep/Time combination\nreturning 1 if it does and 0 otherwise.  If coprocessing does\nneed to be performed this time step it fills in the FieldNames\narray that the coprocessor requires in order to fulfill all the\ncoprocessing requests for this TimeStep/Time combination.\n"},
  {"CoProcess", PyvtkCPPythonScriptPipeline_CoProcess, METH_VARARGS,
   "V.CoProcess(vtkCPDataDescription) -> int\nC++: virtual int CoProcess(vtkCPDataDescription *dataDescription)\n    override;\n\nExecute the pipeline. Returns 1 for success and 0 for failure.\n"},
  {"Finalize", PyvtkCPPythonScriptPipeline_Finalize, METH_VARARGS,
   "V.Finalize() -> int\nC++: virtual int Finalize() override;\n\nFinalize the pipeline before deleting it. A default no-op\nimplementation is given. Returns 1 for success and 0 for failure.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCPPythonScriptPipeline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkCPPythonScriptPipeline", // tp_name
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
  PyvtkCPPythonScriptPipeline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCPPythonScriptPipeline_StaticNew()
{
  return vtkCPPythonScriptPipeline::New();
}

PyObject *PyvtkCPPythonScriptPipeline_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCPPythonScriptPipeline_Type, PyvtkCPPythonScriptPipeline_Methods,
    "vtkCPPythonScriptPipeline",
 &PyvtkCPPythonScriptPipeline_StaticNew);

  PyTypeObject *pytype = &PyvtkCPPythonScriptPipeline_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCPPipeline_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCPPythonScriptPipeline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCPPythonScriptPipeline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCPPythonScriptPipeline", o) != 0)
  {
    Py_DECREF(o);
  }

}

