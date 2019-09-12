// python wrapper for vtkSMWriterProxy
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
#include "vtkSMWriterProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMWriterProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMWriterProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMSourceProxy_ClassNew
extern "C" { PyObject *PyvtkSMSourceProxy_ClassNew(); }
#define DECLARED_PyvtkSMSourceProxy_ClassNew
#endif

static const char *PyvtkSMWriterProxy_Doc =
  "vtkSMWriterProxy - proxy for a VTK writer on a server\n\n"
  "Superclass: vtkSMSourceProxy\n\n"
  "vtkSMWriterProxy manages VTK writers that are created on a server\n"
  "using the proxy pattern. vtkSMWriterProxy also provides support for\n"
  "meta-writers. i.e. if the proxy has a subproxy name \"Writer\" that\n"
  "this proxy represents a meta-writer which uses the given writer as\n"
  "the writer to write each component.\n\n";


static PyObject *
PyvtkSMWriterProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMWriterProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMWriterProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMWriterProxy *tempr = vtkSMWriterProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMWriterProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMWriterProxy::NewInstance());

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
PyvtkSMWriterProxy_UpdatePipeline_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePipeline();
    }
    else
    {
      op->vtkSMWriterProxy::UpdatePipeline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMWriterProxy_UpdatePipeline_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdatePipeline(temp0);
    }
    else
    {
      op->vtkSMWriterProxy::UpdatePipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMWriterProxy_UpdatePipeline(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMWriterProxy_UpdatePipeline_s1(self, args);
    case 1:
      return PyvtkSMWriterProxy_UpdatePipeline_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdatePipeline");
  return nullptr;
}



static PyObject *
PyvtkSMWriterProxy_SetSupportsParallel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSupportsParallel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSupportsParallel(temp0);
    }
    else
    {
      op->vtkSMWriterProxy::SetSupportsParallel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterProxy_GetSupportsParallel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsParallel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSupportsParallel() :
      op->vtkSMWriterProxy::GetSupportsParallel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterProxy_GetParallelOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParallelOnly() :
      op->vtkSMWriterProxy::GetParallelOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterProxy_SetParallelOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterProxy *op = static_cast<vtkSMWriterProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParallelOnly(temp0);
    }
    else
    {
      op->vtkSMWriterProxy::SetParallelOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMWriterProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMWriterProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMWriterProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMWriterProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMWriterProxy\nC++: static vtkSMWriterProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMWriterProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMWriterProxy\nC++: vtkSMWriterProxy *NewInstance()\n\n"},
  {"UpdatePipeline", PyvtkSMWriterProxy_UpdatePipeline, METH_VARARGS,
   "V.UpdatePipeline()\nC++: void UpdatePipeline() override;\nV.UpdatePipeline(float)\nC++: void UpdatePipeline(double time) override;\n\nUpdates the pipeline and writes the file(s). Must call\nUpdateVTKObjects() before calling UpdatePipeline() to ensure that\nthe filename etc. are set correctly.\n"},
  {"SetSupportsParallel", PyvtkSMWriterProxy_SetSupportsParallel, METH_VARARGS,
   "V.SetSupportsParallel(int)\nC++: virtual void SetSupportsParallel(int _arg)\n\nFlag indicating if the writer supports writing in parallel. Not\nset by default.\n"},
  {"GetSupportsParallel", PyvtkSMWriterProxy_GetSupportsParallel, METH_VARARGS,
   "V.GetSupportsParallel() -> int\nC++: int GetSupportsParallel()\n\nFlag indicating if the writer supports writing in parallel. Not\nset by default.\n"},
  {"GetParallelOnly", PyvtkSMWriterProxy_GetParallelOnly, METH_VARARGS,
   "V.GetParallelOnly() -> int\nC++: virtual int GetParallelOnly()\n\nFlag indicating if the writer works only in parallel. If this is\nset, SupportsParallel is always true.\n"},
  {"SetParallelOnly", PyvtkSMWriterProxy_SetParallelOnly, METH_VARARGS,
   "V.SetParallelOnly(int)\nC++: virtual void SetParallelOnly(int _arg)\n\nFlag indicating if the writer works only in parallel. If this is\nset, SupportsParallel is always true.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMWriterProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMWriterProxy", // tp_name
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
  PyvtkSMWriterProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMWriterProxy_StaticNew()
{
  return vtkSMWriterProxy::New();
}

PyObject *PyvtkSMWriterProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMWriterProxy_Type, PyvtkSMWriterProxy_Methods,
    "vtkSMWriterProxy",
 &PyvtkSMWriterProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMWriterProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMSourceProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMWriterProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMWriterProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMWriterProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

