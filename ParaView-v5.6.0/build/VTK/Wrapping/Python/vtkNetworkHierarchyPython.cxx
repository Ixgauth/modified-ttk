// python wrapper for vtkNetworkHierarchy
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
#include "vtkNetworkHierarchy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNetworkHierarchy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkNetworkHierarchy_ClassNew(); }

#ifndef DECLARED_PyvtkTreeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTreeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTreeAlgorithm_ClassNew
#endif

static const char *PyvtkNetworkHierarchy_Doc =
  "vtkNetworkHierarchy - Filter that takes a graph and makes a tree out\nof the network ip addresses in that graph.\n\n"
  "Superclass: vtkTreeAlgorithm\n\n"
  "Use SetInputArrayToProcess(0, ...) to set the array to that has the\n"
  "network ip addresses. Currently this array must be a vtkStringArray.\n\n";


static PyObject *
PyvtkNetworkHierarchy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNetworkHierarchy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetworkHierarchy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkHierarchy *op = static_cast<vtkNetworkHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNetworkHierarchy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetworkHierarchy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNetworkHierarchy *tempr = vtkNetworkHierarchy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetworkHierarchy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkHierarchy *op = static_cast<vtkNetworkHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNetworkHierarchy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNetworkHierarchy::NewInstance());

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
PyvtkNetworkHierarchy_GetIPArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIPArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkHierarchy *op = static_cast<vtkNetworkHierarchy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetIPArrayName() :
      op->vtkNetworkHierarchy::GetIPArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNetworkHierarchy_SetIPArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIPArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNetworkHierarchy *op = static_cast<vtkNetworkHierarchy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIPArrayName(temp0);
    }
    else
    {
      op->vtkNetworkHierarchy::SetIPArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkNetworkHierarchy_Methods[] = {
  {"IsTypeOf", PyvtkNetworkHierarchy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNetworkHierarchy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNetworkHierarchy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkNetworkHierarchy\nC++: static vtkNetworkHierarchy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNetworkHierarchy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkNetworkHierarchy\nC++: vtkNetworkHierarchy *NewInstance()\n\n"},
  {"GetIPArrayName", PyvtkNetworkHierarchy_GetIPArrayName, METH_VARARGS,
   "V.GetIPArrayName() -> string\nC++: virtual char *GetIPArrayName()\n\nUsed to store the ip array name\n"},
  {"SetIPArrayName", PyvtkNetworkHierarchy_SetIPArrayName, METH_VARARGS,
   "V.SetIPArrayName(string)\nC++: virtual void SetIPArrayName(const char *_arg)\n\nUsed to store the ip array name\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkNetworkHierarchy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkNetworkHierarchy", // tp_name
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
  PyvtkNetworkHierarchy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNetworkHierarchy_StaticNew()
{
  return vtkNetworkHierarchy::New();
}

PyObject *PyvtkNetworkHierarchy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkNetworkHierarchy_Type, PyvtkNetworkHierarchy_Methods,
    "vtkNetworkHierarchy",
 &PyvtkNetworkHierarchy_StaticNew);

  PyTypeObject *pytype = &PyvtkNetworkHierarchy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTreeAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNetworkHierarchy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNetworkHierarchy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNetworkHierarchy", o) != 0)
  {
    Py_DECREF(o);
  }

}

