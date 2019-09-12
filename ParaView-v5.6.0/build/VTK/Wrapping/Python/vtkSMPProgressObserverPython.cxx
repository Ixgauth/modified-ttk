// python wrapper for vtkSMPProgressObserver
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
#include "vtkSMPProgressObserver.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPProgressObserver(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMPProgressObserver_ClassNew(); }

#ifndef DECLARED_PyvtkProgressObserver_ClassNew
extern "C" { PyObject *PyvtkProgressObserver_ClassNew(); }
#define DECLARED_PyvtkProgressObserver_ClassNew
#endif

static const char *PyvtkSMPProgressObserver_Doc =
  "vtkSMPProgressObserver - Progress observer that is thread safe\n\n"
  "Superclass: vtkProgressObserver\n\n"
  "vtkSMPProgressObserver is designed to handle progress events coming\n"
  "from an algorithm in a thread safe way. It does this by using thread\n"
  "local objects that it updates. To receive the progress information,\n"
  "one has to listen to the local observer in the same thread. Since the\n"
  "execution will be somewhat load balanced, it may be enough to do this\n"
  "only on the main thread.\n\n";


static PyObject *
PyvtkSMPProgressObserver_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMPProgressObserver::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPProgressObserver_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPProgressObserver *op = static_cast<vtkSMPProgressObserver *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPProgressObserver::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPProgressObserver_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMPProgressObserver *tempr = vtkSMPProgressObserver::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPProgressObserver_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPProgressObserver *op = static_cast<vtkSMPProgressObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPProgressObserver *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPProgressObserver::NewInstance());

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
PyvtkSMPProgressObserver_UpdateProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPProgressObserver *op = static_cast<vtkSMPProgressObserver *>(vp);

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
      op->vtkSMPProgressObserver::UpdateProgress(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPProgressObserver_GetLocalObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPProgressObserver *op = static_cast<vtkSMPProgressObserver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProgressObserver *tempr = (ap.IsBound() ?
      op->GetLocalObserver() :
      op->vtkSMPProgressObserver::GetLocalObserver());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPProgressObserver_Methods[] = {
  {"IsTypeOf", PyvtkSMPProgressObserver_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMPProgressObserver_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMPProgressObserver_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMPProgressObserver\nC++: static vtkSMPProgressObserver *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMPProgressObserver_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMPProgressObserver\nC++: vtkSMPProgressObserver *NewInstance()\n\n"},
  {"UpdateProgress", PyvtkSMPProgressObserver_UpdateProgress, METH_VARARGS,
   "V.UpdateProgress(float)\nC++: void UpdateProgress(double amount) override;\n\nPasses the progress event to a thread local ProgressObserver\ninstance.\n"},
  {"GetLocalObserver", PyvtkSMPProgressObserver_GetLocalObserver, METH_VARARGS,
   "V.GetLocalObserver() -> vtkProgressObserver\nC++: vtkProgressObserver *GetLocalObserver()\n\nReturns the progress observer local to the thread it was called\nfrom.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMPProgressObserver_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkSMPProgressObserver", // tp_name
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
  PyvtkSMPProgressObserver_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMPProgressObserver_StaticNew()
{
  return vtkSMPProgressObserver::New();
}

PyObject *PyvtkSMPProgressObserver_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMPProgressObserver_Type, PyvtkSMPProgressObserver_Methods,
    "vtkSMPProgressObserver",
 &PyvtkSMPProgressObserver_StaticNew);

  PyTypeObject *pytype = &PyvtkSMPProgressObserver_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProgressObserver_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMPProgressObserver(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPProgressObserver_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPProgressObserver", o) != 0)
  {
    Py_DECREF(o);
  }

}

