// python wrapper for vtkSICollaborationManager
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
#include "vtkSICollaborationManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSICollaborationManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSICollaborationManager_ClassNew(); }

#ifndef DECLARED_PyvtkSIObject_ClassNew
extern "C" { PyObject *PyvtkSIObject_ClassNew(); }
#define DECLARED_PyvtkSIObject_ClassNew
#endif

static const char *PyvtkSICollaborationManager_Doc =
  "vtkSICollaborationManager - Object that managed multi-client\ncommunication and provide the group awareness\n\n"
  "Superclass: vtkSIObject\n\n"
;


static PyObject *
PyvtkSICollaborationManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSICollaborationManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSICollaborationManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICollaborationManager *op = static_cast<vtkSICollaborationManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSICollaborationManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSICollaborationManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSICollaborationManager *tempr = vtkSICollaborationManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSICollaborationManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICollaborationManager *op = static_cast<vtkSICollaborationManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSICollaborationManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSICollaborationManager::NewInstance());

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
PyvtkSICollaborationManager_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICollaborationManager *op = static_cast<vtkSICollaborationManager *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->Push(temp0);
    }
    else
    {
      op->vtkSICollaborationManager::Push(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSICollaborationManager_Pull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSICollaborationManager *op = static_cast<vtkSICollaborationManager *>(vp);

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
      op->vtkSICollaborationManager::Pull(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSICollaborationManager_Methods[] = {
  {"IsTypeOf", PyvtkSICollaborationManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSICollaborationManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSICollaborationManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSICollaborationManager\nC++: static vtkSICollaborationManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSICollaborationManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSICollaborationManager\nC++: vtkSICollaborationManager *NewInstance()\n\n"},
  {"Push", PyvtkSICollaborationManager_Push, METH_VARARGS,
   "V.Push(vtkSMMessage)\nC++: void Push(vtkSMMessage *msg) override;\n\nPush a new state to the underneath implementation The provided\nimplementation just store the message and return it at the Pull\none.\n"},
  {"Pull", PyvtkSICollaborationManager_Pull, METH_VARARGS,
   "V.Pull(vtkSMMessage)\nC++: void Pull(vtkSMMessage *msg) override;\n\nPull the current state of the underneath implementation The\nprovided implementation update the given message with the one\nthat has been previously pushed\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSICollaborationManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSICollaborationManager", // tp_name
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
  PyvtkSICollaborationManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSICollaborationManager_StaticNew()
{
  return vtkSICollaborationManager::New();
}

PyObject *PyvtkSICollaborationManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSICollaborationManager_Type, PyvtkSICollaborationManager_Methods,
    "vtkSICollaborationManager",
 &PyvtkSICollaborationManager_StaticNew);

  PyTypeObject *pytype = &PyvtkSICollaborationManager_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSIObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSICollaborationManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSICollaborationManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSICollaborationManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

