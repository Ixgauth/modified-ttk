// python wrapper for vtkDistributedTrivialProducer
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
#include "vtkDistributedTrivialProducer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDistributedTrivialProducer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDistributedTrivialProducer_ClassNew(); }

#ifndef DECLARED_PyvtkPVTrivialProducer_ClassNew
extern "C" { PyObject *PyvtkPVTrivialProducer_ClassNew(); }
#define DECLARED_PyvtkPVTrivialProducer_ClassNew
#endif

static const char *PyvtkDistributedTrivialProducer_Doc =
  "vtkDistributedTrivialProducer - Extend vtkPVTrivialProducer to allow\ndistributed code to easily populate a trivial producer with local\nDataObject while using a regular Proxy Model.\n\n"
  "Superclass: vtkPVTrivialProducer\n\n"
;


static PyObject *
PyvtkDistributedTrivialProducer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDistributedTrivialProducer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedTrivialProducer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedTrivialProducer *op = static_cast<vtkDistributedTrivialProducer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistributedTrivialProducer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedTrivialProducer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDistributedTrivialProducer *tempr = vtkDistributedTrivialProducer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedTrivialProducer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedTrivialProducer *op = static_cast<vtkDistributedTrivialProducer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDistributedTrivialProducer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistributedTrivialProducer::NewInstance());

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
PyvtkDistributedTrivialProducer_SetGlobalOutput(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalOutput");

  const char *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    vtkDistributedTrivialProducer::SetGlobalOutput(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedTrivialProducer_ReleaseGlobalOutput(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ReleaseGlobalOutput");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDistributedTrivialProducer::ReleaseGlobalOutput(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedTrivialProducer_UpdateFromGlobal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateFromGlobal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedTrivialProducer *op = static_cast<vtkDistributedTrivialProducer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateFromGlobal(temp0);
    }
    else
    {
      op->vtkDistributedTrivialProducer::UpdateFromGlobal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDistributedTrivialProducer_Methods[] = {
  {"IsTypeOf", PyvtkDistributedTrivialProducer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDistributedTrivialProducer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDistributedTrivialProducer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDistributedTrivialProducer\nC++: static vtkDistributedTrivialProducer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDistributedTrivialProducer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDistributedTrivialProducer\nC++: vtkDistributedTrivialProducer *NewInstance()\n\n"},
  {"SetGlobalOutput", PyvtkDistributedTrivialProducer_SetGlobalOutput, METH_VARARGS,
   "V.SetGlobalOutput(string, vtkDataObject)\nC++: static void SetGlobalOutput(const char *key,\n    vtkDataObject *output)\n\nProvide a global method to store a data object across processes\nand allow a given instance of TrivialProducer to use it based on\nits registered key.\n"},
  {"ReleaseGlobalOutput", PyvtkDistributedTrivialProducer_ReleaseGlobalOutput, METH_VARARGS,
   "V.ReleaseGlobalOutput(string)\nC++: static void ReleaseGlobalOutput(const char *key)\n\nRelease a given Global output if a valid key (not NULL) is\nprovided, otherwise the global output map will be cleared.\n"},
  {"UpdateFromGlobal", PyvtkDistributedTrivialProducer_UpdateFromGlobal, METH_VARARGS,
   "V.UpdateFromGlobal(string)\nC++: virtual void UpdateFromGlobal(const char *key)\n\nUpdate the current instance to use a previously registered global\ndata object as current output.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDistributedTrivialProducer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkDistributedTrivialProducer", // tp_name
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
  PyvtkDistributedTrivialProducer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDistributedTrivialProducer_StaticNew()
{
  return vtkDistributedTrivialProducer::New();
}

PyObject *PyvtkDistributedTrivialProducer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDistributedTrivialProducer_Type, PyvtkDistributedTrivialProducer_Methods,
    "vtkDistributedTrivialProducer",
 &PyvtkDistributedTrivialProducer_StaticNew);

  PyTypeObject *pytype = &PyvtkDistributedTrivialProducer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVTrivialProducer_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDistributedTrivialProducer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDistributedTrivialProducer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDistributedTrivialProducer", o) != 0)
  {
    Py_DECREF(o);
  }

}

