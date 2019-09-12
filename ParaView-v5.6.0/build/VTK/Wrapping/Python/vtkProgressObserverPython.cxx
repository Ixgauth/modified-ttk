// python wrapper for vtkProgressObserver
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
#include "vtkProgressObserver.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProgressObserver(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProgressObserver_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkProgressObserver_Doc =
  "vtkProgressObserver - Basic class to optionally replace vtkAlgorithm\nprogress functionality.\n\n"
  "Superclass: vtkObject\n\n"
  "When the basic functionality in vtkAlgorithm that reports progress is\n"
  "not enough, a subclass of vtkProgressObserver can be used to provide\n"
  "custom functionality. The main use case for this is when an\n"
  "algorithm's RequestData() is called from multiple threads in parallel\n"
  "- the basic functionality in vtkAlgorithm is not thread safe.\n"
  "vtkSMPProgressObserver can handle this situation by routing progress\n"
  "from each thread to a thread local vtkProgressObserver, which will\n"
  "invoke events separately for each thread.\n\n";


static PyObject *
PyvtkProgressObserver_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProgressObserver::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressObserver_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressObserver *op = static_cast<vtkProgressObserver *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgressObserver::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressObserver_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProgressObserver *tempr = vtkProgressObserver::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressObserver_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressObserver *op = static_cast<vtkProgressObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProgressObserver *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgressObserver::NewInstance());

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
PyvtkProgressObserver_UpdateProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressObserver *op = static_cast<vtkProgressObserver *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateProgress(temp0);
    }
    else
    {
      op->vtkProgressObserver::UpdateProgress(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressObserver_GetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressObserver *op = static_cast<vtkProgressObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProgress() :
      op->vtkProgressObserver::GetProgress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProgressObserver_Methods[] = {
  {"IsTypeOf", PyvtkProgressObserver_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProgressObserver_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProgressObserver_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProgressObserver\nC++: static vtkProgressObserver *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProgressObserver_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProgressObserver\nC++: vtkProgressObserver *NewInstance()\n\n"},
  {"UpdateProgress", PyvtkProgressObserver_UpdateProgress, METH_VARARGS,
   "V.UpdateProgress(float)\nC++: virtual void UpdateProgress(double amount)\n\nThe default behavior is to update the Progress data member and\ninvoke a ProgressEvent. This is designed to be overwritten.\n"},
  {"GetProgress", PyvtkProgressObserver_GetProgress, METH_VARARGS,
   "V.GetProgress() -> float\nC++: virtual double GetProgress()\n\nReturns the progress reported by the algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProgressObserver_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkProgressObserver", // tp_name
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
  PyvtkProgressObserver_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProgressObserver_StaticNew()
{
  return vtkProgressObserver::New();
}

PyObject *PyvtkProgressObserver_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProgressObserver_Type, PyvtkProgressObserver_Methods,
    "vtkProgressObserver",
 &PyvtkProgressObserver_StaticNew);

  PyTypeObject *pytype = &PyvtkProgressObserver_Type;

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

void PyVTKAddFile_vtkProgressObserver(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProgressObserver_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProgressObserver", o) != 0)
  {
    Py_DECREF(o);
  }

}

