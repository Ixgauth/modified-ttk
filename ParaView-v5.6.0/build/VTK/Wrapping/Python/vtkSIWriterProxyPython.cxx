// python wrapper for vtkSIWriterProxy
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
#include "vtkSIWriterProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSIWriterProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSIWriterProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSISourceProxy_ClassNew
extern "C" { PyObject *PyvtkSISourceProxy_ClassNew(); }
#define DECLARED_PyvtkSISourceProxy_ClassNew
#endif

static const char *PyvtkSIWriterProxy_Doc =
  "vtkSIWriterProxy - ServerImplementation for WriterProxy\n\n"
  "Superclass: vtkSISourceProxy\n\n"
;


static PyObject *
PyvtkSIWriterProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSIWriterProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIWriterProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIWriterProxy *op = static_cast<vtkSIWriterProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIWriterProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIWriterProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSIWriterProxy *tempr = vtkSIWriterProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIWriterProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIWriterProxy *op = static_cast<vtkSIWriterProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIWriterProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIWriterProxy::NewInstance());

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
PyvtkSIWriterProxy_AddInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIWriterProxy *op = static_cast<vtkSIWriterProxy *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddInput(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSIWriterProxy::AddInput(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIWriterProxy_CleanInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIWriterProxy *op = static_cast<vtkSIWriterProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->CleanInputs(temp0);
    }
    else
    {
      op->vtkSIWriterProxy::CleanInputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIWriterProxy_UpdatePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIWriterProxy *op = static_cast<vtkSIWriterProxy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdatePipelineTime(temp0);
    }
    else
    {
      op->vtkSIWriterProxy::UpdatePipelineTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSIWriterProxy_Methods[] = {
  {"IsTypeOf", PyvtkSIWriterProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSIWriterProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSIWriterProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSIWriterProxy\nC++: static vtkSIWriterProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSIWriterProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSIWriterProxy\nC++: vtkSIWriterProxy *NewInstance()\n\n"},
  {"AddInput", PyvtkSIWriterProxy_AddInput, METH_VARARGS,
   "V.AddInput(int, vtkAlgorithmOutput, string)\nC++: void AddInput(int input_port, vtkAlgorithmOutput *connection,\n     const char *method) override;\n\nThese methods are called to add/remove input connections by\nvtkSIInputProperty. This indirection makes it possible for\nsubclasses to insert VTK-algorithms in the input pipeline.\nOverridden to insert \"CompleteArrays\" filter in the pipeline.\n"},
  {"CleanInputs", PyvtkSIWriterProxy_CleanInputs, METH_VARARGS,
   "V.CleanInputs(string)\nC++: void CleanInputs(const char *method) override;\n\nThese methods are called to add/remove input connections by\nvtkSIInputProperty. This indirection makes it possible for\nsubclasses to insert VTK-algorithms in the input pipeline.\nOverridden to insert \"CompleteArrays\" filter in the pipeline.\n"},
  {"UpdatePipelineTime", PyvtkSIWriterProxy_UpdatePipelineTime, METH_VARARGS,
   "V.UpdatePipelineTime(float)\nC++: virtual void UpdatePipelineTime(double time)\n\nUpdate the requested time for the pipeline. This needs to be\nseparate than vtkSISourceProxy because there are no output ports\nto do this on.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSIWriterProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSIWriterProxy", // tp_name
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
  PyvtkSIWriterProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSIWriterProxy_StaticNew()
{
  return vtkSIWriterProxy::New();
}

PyObject *PyvtkSIWriterProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSIWriterProxy_Type, PyvtkSIWriterProxy_Methods,
    "vtkSIWriterProxy",
 &PyvtkSIWriterProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSIWriterProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSISourceProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSIWriterProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSIWriterProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSIWriterProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

