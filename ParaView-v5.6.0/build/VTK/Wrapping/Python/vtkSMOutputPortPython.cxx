// python wrapper for vtkSMOutputPort
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
#include "vtkSMOutputPort.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMOutputPort(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMOutputPort_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMOutputPort_Doc =
  "vtkSMOutputPort - reference for an output port of a vtkAlgorithm.\n\n"
  "Superclass: vtkSMProxy\n\n"
  "This object manages one output port of an algorithm. It is used\n"
  "internally by vtkSMSourceProxy to manage all of it's\n"
  "outputs.@attention Previously, vtkSMOutputPort used to be a\n"
  "vtkSMProxy subclass since it was indeed a Proxy for the output port.\n"
  "However that has now changed. This merely sits as a datastructure to\n"
  "manage ports specific things like data-information. However for\n"
  "backwards compatibility, to keep the impact minimal, we leave this as\n"
  "a sub-class of a Proxy with GlobalID=0 and Session=NULL.\n\n";


static PyObject *
PyvtkSMOutputPort_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMOutputPort::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOutputPort_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMOutputPort::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOutputPort_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMOutputPort *tempr = vtkSMOutputPort::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOutputPort_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMOutputPort *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMOutputPort::NewInstance());

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
PyvtkSMOutputPort_GetDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetDataInformation() :
      op->vtkSMOutputPort::GetDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOutputPort_GetTemporalDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTemporalDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVTemporalDataInformation *tempr = (ap.IsBound() ?
      op->GetTemporalDataInformation() :
      op->vtkSMOutputPort::GetTemporalDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOutputPort_GetDataClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataClassName() :
      op->vtkSMOutputPort::GetDataClassName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOutputPort_GetClassNameInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassNameInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVClassNameInformation *tempr = (ap.IsBound() ?
      op->GetClassNameInformation() :
      op->vtkSMOutputPort::GetClassNameInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOutputPort_InvalidateDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvalidateDataInformation();
    }
    else
    {
      op->vtkSMOutputPort::InvalidateDataInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMOutputPort_GetPortIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPortIndex() :
      op->vtkSMOutputPort::GetPortIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOutputPort_GetSourceProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOutputPort *op = static_cast<vtkSMOutputPort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->GetSourceProxy() :
      op->vtkSMOutputPort::GetSourceProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMOutputPort_Methods[] = {
  {"IsTypeOf", PyvtkSMOutputPort_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMOutputPort_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMOutputPort_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMOutputPort\nC++: static vtkSMOutputPort *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMOutputPort_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMOutputPort\nC++: vtkSMOutputPort *NewInstance()\n\n"},
  {"GetDataInformation", PyvtkSMOutputPort_GetDataInformation, METH_VARARGS,
   "V.GetDataInformation() -> vtkPVDataInformation\nC++: virtual vtkPVDataInformation *GetDataInformation()\n\nReturns data information. If data information is marked invalid,\ncalls GatherDataInformation. If data information is gathered then\nthis fires the vtkCommand::UpdateInformationEvent event.\n"},
  {"GetTemporalDataInformation", PyvtkSMOutputPort_GetTemporalDataInformation, METH_VARARGS,
   "V.GetTemporalDataInformation() -> vtkPVTemporalDataInformation\nC++: virtual vtkPVTemporalDataInformation *GetTemporalDataInformation(\n    )\n\nReturns data information collected over all timesteps provided by\nthe pipeline. If the data information is not valid, this results\niterating over the pipeline and hence can be slow. Use with\ncaution.\n"},
  {"GetDataClassName", PyvtkSMOutputPort_GetDataClassName, METH_VARARGS,
   "V.GetDataClassName() -> string\nC++: virtual const char *GetDataClassName()\n\nReturns the classname of the data object on this output port.\n"},
  {"GetClassNameInformation", PyvtkSMOutputPort_GetClassNameInformation, METH_VARARGS,
   "V.GetClassNameInformation() -> vtkPVClassNameInformation\nC++: virtual vtkPVClassNameInformation *GetClassNameInformation()\n\nReturns classname information.\n"},
  {"InvalidateDataInformation", PyvtkSMOutputPort_InvalidateDataInformation, METH_VARARGS,
   "V.InvalidateDataInformation()\nC++: virtual void InvalidateDataInformation()\n\nMark data information as invalid.\n"},
  {"GetPortIndex", PyvtkSMOutputPort_GetPortIndex, METH_VARARGS,
   "V.GetPortIndex() -> int\nC++: virtual int GetPortIndex()\n\nReturns the index of the port the output is obtained from.\n"},
  {"GetSourceProxy", PyvtkSMOutputPort_GetSourceProxy, METH_VARARGS,
   "V.GetSourceProxy() -> vtkSMSourceProxy\nC++: vtkSMSourceProxy *GetSourceProxy()\n\nProvides access to the source proxy to which the output port\nbelongs.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMOutputPort_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMOutputPort", // tp_name
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
  PyvtkSMOutputPort_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMOutputPort_StaticNew()
{
  return vtkSMOutputPort::New();
}

PyObject *PyvtkSMOutputPort_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMOutputPort_Type, PyvtkSMOutputPort_Methods,
    "vtkSMOutputPort",
 &PyvtkSMOutputPort_StaticNew);

  PyTypeObject *pytype = &PyvtkSMOutputPort_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMOutputPort(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMOutputPort_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMOutputPort", o) != 0)
  {
    Py_DECREF(o);
  }

}

