// python wrapper for vtkSIDirectoryProxy
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
#include "vtkSIDirectoryProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSIDirectoryProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSIDirectoryProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSIProxy_ClassNew
extern "C" { PyObject *PyvtkSIProxy_ClassNew(); }
#define DECLARED_PyvtkSIProxy_ClassNew
#endif

static const char *PyvtkSIDirectoryProxy_Doc =
  "vtkSIDirectoryProxy - vtkSIDirectoryProxy is the\nserver-implementation for a vtkSMDirectory which will customly handle\nserver file listing for the pull request\n\n"
  "Superclass: vtkSIProxy\n\n"
;


static PyObject *
PyvtkSIDirectoryProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSIDirectoryProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIDirectoryProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDirectoryProxy *op = static_cast<vtkSIDirectoryProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIDirectoryProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIDirectoryProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSIDirectoryProxy *tempr = vtkSIDirectoryProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIDirectoryProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDirectoryProxy *op = static_cast<vtkSIDirectoryProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIDirectoryProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIDirectoryProxy::NewInstance());

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
PyvtkSIDirectoryProxy_Pull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIDirectoryProxy *op = static_cast<vtkSIDirectoryProxy *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->Pull(temp0);
    }
    else
    {
      op->vtkSIDirectoryProxy::Pull(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSIDirectoryProxy_Methods[] = {
  {"IsTypeOf", PyvtkSIDirectoryProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSIDirectoryProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSIDirectoryProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSIDirectoryProxy\nC++: static vtkSIDirectoryProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSIDirectoryProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSIDirectoryProxy\nC++: vtkSIDirectoryProxy *NewInstance()\n\n"},
  {"Pull", PyvtkSIDirectoryProxy_Pull, METH_VARARGS,
   "V.Pull(vtkSMMessage)\nC++: void Pull(vtkSMMessage *msg) override;\n\nPull the current state of the underneath implementation\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSIDirectoryProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSIDirectoryProxy", // tp_name
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
  PyvtkSIDirectoryProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSIDirectoryProxy_StaticNew()
{
  return vtkSIDirectoryProxy::New();
}

PyObject *PyvtkSIDirectoryProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSIDirectoryProxy_Type, PyvtkSIDirectoryProxy_Methods,
    "vtkSIDirectoryProxy",
 &PyvtkSIDirectoryProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSIDirectoryProxy_Type;

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

void PyVTKAddFile_vtkSIDirectoryProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSIDirectoryProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSIDirectoryProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

