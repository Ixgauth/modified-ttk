// python wrapper for vtkSISourceProxy
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
#include "vtkSISourceProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSISourceProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSISourceProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSIProxy_ClassNew
extern "C" { PyObject *PyvtkSIProxy_ClassNew(); }
#define DECLARED_PyvtkSIProxy_ClassNew
#endif

static const char *PyvtkSISourceProxy_Doc =
  "vtkSISourceProxy - vtkSISourceProxy is the server-side helper for a\nvtkSMSourceProxy.\n\n"
  "Superclass: vtkSIProxy\n\n"
  "It adds support to handle various vtkAlgorithm specific Invoke\n"
  "requests coming from the client. vtkSISourceProxy also inserts\n"
  "post-processing filters for each output port from the vtkAlgorithm.\n"
  "These post-processing filters deal with things like parallelizing the\n"
  "data etc.\n\n";


static PyObject *
PyvtkSISourceProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSISourceProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSISourceProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSISourceProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSISourceProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSISourceProxy *tempr = vtkSISourceProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSISourceProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSISourceProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSISourceProxy::NewInstance());

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
PyvtkSISourceProxy_GetOutputPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetOutputPort(temp0) :
      op->vtkSISourceProxy::GetOutputPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSISourceProxy_UpdatePipelineInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipelineInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePipelineInformation();
    }
    else
    {
      op->vtkSISourceProxy::UpdatePipelineInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSISourceProxy_UpdatePipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  int temp0;
  double temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->UpdatePipeline(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSISourceProxy::UpdatePipeline(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSISourceProxy_SetupSelectionProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupSelectionProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  int temp0;
  vtkSIProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSIProxy"))
  {
    if (ap.IsBound())
    {
      op->SetupSelectionProxy(temp0, temp1);
    }
    else
    {
      op->vtkSISourceProxy::SetupSelectionProxy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSISourceProxy_SetDisablePipelineExecution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisablePipelineExecution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisablePipelineExecution(temp0);
    }
    else
    {
      op->vtkSISourceProxy::SetDisablePipelineExecution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSISourceProxy_RecreateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecreateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSISourceProxy *op = static_cast<vtkSISourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecreateVTKObjects();
    }
    else
    {
      op->vtkSISourceProxy::RecreateVTKObjects();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSISourceProxy_Methods[] = {
  {"IsTypeOf", PyvtkSISourceProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSISourceProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSISourceProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSISourceProxy\nC++: static vtkSISourceProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSISourceProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSISourceProxy\nC++: vtkSISourceProxy *NewInstance()\n\n"},
  {"GetOutputPort", PyvtkSISourceProxy_GetOutputPort, METH_VARARGS,
   "V.GetOutputPort(int) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetOutputPort(int port)\n\nReturns the vtkAlgorithmOutput for an output port, if valid.\n"},
  {"UpdatePipelineInformation", PyvtkSISourceProxy_UpdatePipelineInformation, METH_VARARGS,
   "V.UpdatePipelineInformation()\nC++: void UpdatePipelineInformation() override;\n\nTriggers UpdateInformation() on vtkObject if possible.\n"},
  {"UpdatePipeline", PyvtkSISourceProxy_UpdatePipeline, METH_VARARGS,
   "V.UpdatePipeline(int, float, bool)\nC++: virtual void UpdatePipeline(int port, double time,\n    bool doTime)\n\nTriggers UpdatePipeline(). Called from client.\n"},
  {"SetupSelectionProxy", PyvtkSISourceProxy_SetupSelectionProxy, METH_VARARGS,
   "V.SetupSelectionProxy(int, vtkSIProxy)\nC++: virtual void SetupSelectionProxy(int port,\n    vtkSIProxy *extractSelection)\n\nsetups extract selection proxies.\n"},
  {"SetDisablePipelineExecution", PyvtkSISourceProxy_SetDisablePipelineExecution, METH_VARARGS,
   "V.SetDisablePipelineExecution(bool)\nC++: virtual void SetDisablePipelineExecution(bool value)\n\nAllow to shut down pipeline execution. This is particularly\nuseful for a Catalyst session that does not contains any real\ndata.\n"},
  {"RecreateVTKObjects", PyvtkSISourceProxy_RecreateVTKObjects, METH_VARARGS,
   "V.RecreateVTKObjects()\nC++: void RecreateVTKObjects() override;\n\nOverridden to update the output ports.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSISourceProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSISourceProxy", // tp_name
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
  PyvtkSISourceProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSISourceProxy_StaticNew()
{
  return vtkSISourceProxy::New();
}

PyObject *PyvtkSISourceProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSISourceProxy_Type, PyvtkSISourceProxy_Methods,
    "vtkSISourceProxy",
 &PyvtkSISourceProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSISourceProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSIProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSISourceProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSISourceProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSISourceProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

