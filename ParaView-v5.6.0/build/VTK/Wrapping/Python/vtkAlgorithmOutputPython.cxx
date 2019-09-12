// python wrapper for vtkAlgorithmOutput
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
#include "vtkAlgorithmOutput.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAlgorithmOutput(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAlgorithmOutput_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAlgorithmOutput_Doc =
  "vtkAlgorithmOutput - Proxy object to connect input/output ports.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAlgorithmOutput is a proxy object returned by the GetOutputPort\n"
  "method of vtkAlgorithm.  It may be passed to the SetInputConnection,\n"
  "AddInputConnection, or RemoveInputConnection methods of another\n"
  "vtkAlgorithm to establish a connection between an output and input\n"
  "port.  The connection is not stored in the proxy object: it is simply\n"
  "a convenience for creating or removing connections.\n\n";


static PyObject *
PyvtkAlgorithmOutput_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAlgorithmOutput::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithmOutput_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithmOutput *op = static_cast<vtkAlgorithmOutput *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAlgorithmOutput::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithmOutput_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAlgorithmOutput *tempr = vtkAlgorithmOutput::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithmOutput_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithmOutput *op = static_cast<vtkAlgorithmOutput *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAlgorithmOutput::NewInstance());

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
PyvtkAlgorithmOutput_SetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithmOutput *op = static_cast<vtkAlgorithmOutput *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndex(temp0);
    }
    else
    {
      op->vtkAlgorithmOutput::SetIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithmOutput_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithmOutput *op = static_cast<vtkAlgorithmOutput *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndex() :
      op->vtkAlgorithmOutput::GetIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithmOutput_GetProducer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithmOutput *op = static_cast<vtkAlgorithmOutput *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetProducer() :
      op->vtkAlgorithmOutput::GetProducer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithmOutput_SetProducer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProducer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithmOutput *op = static_cast<vtkAlgorithmOutput *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetProducer(temp0);
    }
    else
    {
      op->vtkAlgorithmOutput::SetProducer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAlgorithmOutput_Methods[] = {
  {"IsTypeOf", PyvtkAlgorithmOutput_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAlgorithmOutput_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAlgorithmOutput_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAlgorithmOutput\nC++: static vtkAlgorithmOutput *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAlgorithmOutput_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *NewInstance()\n\n"},
  {"SetIndex", PyvtkAlgorithmOutput_SetIndex, METH_VARARGS,
   "V.SetIndex(int)\nC++: void SetIndex(int index)\n\n"},
  {"GetIndex", PyvtkAlgorithmOutput_GetIndex, METH_VARARGS,
   "V.GetIndex() -> int\nC++: int GetIndex()\n\n"},
  {"GetProducer", PyvtkAlgorithmOutput_GetProducer, METH_VARARGS,
   "V.GetProducer() -> vtkAlgorithm\nC++: vtkAlgorithm *GetProducer()\n\n"},
  {"SetProducer", PyvtkAlgorithmOutput_SetProducer, METH_VARARGS,
   "V.SetProducer(vtkAlgorithm)\nC++: void SetProducer(vtkAlgorithm *producer)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAlgorithmOutput_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkAlgorithmOutput", // tp_name
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
  PyvtkAlgorithmOutput_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAlgorithmOutput_StaticNew()
{
  return vtkAlgorithmOutput::New();
}

PyObject *PyvtkAlgorithmOutput_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAlgorithmOutput_Type, PyvtkAlgorithmOutput_Methods,
    "vtkAlgorithmOutput",
 &PyvtkAlgorithmOutput_StaticNew);

  PyTypeObject *pytype = &PyvtkAlgorithmOutput_Type;

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

void PyVTKAddFile_vtkAlgorithmOutput(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAlgorithmOutput_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAlgorithmOutput", o) != 0)
  {
    Py_DECREF(o);
  }

}

