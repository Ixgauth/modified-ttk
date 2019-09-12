// python wrapper for vtkSIPythonSourceProxy
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
#include "vtkSIPythonSourceProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSIPythonSourceProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSIPythonSourceProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSISourceProxy_ClassNew
extern "C" { PyObject *PyvtkSISourceProxy_ClassNew(); }
#define DECLARED_PyvtkSISourceProxy_ClassNew
#endif

static const char *PyvtkSIPythonSourceProxy_Doc =
  "vtkSIPythonSourceProxy - vtkSISourceProxy for all\n`VTKPythonAlgorithmBase`-based algorithms.\n\n"
  "Superclass: vtkSISourceProxy\n\n"
  "vtkSIPythonSourceProxy makes is possible to work with a\n"
  "VTKPythonAlgorithmBase-based Python class in ParaView. By handling\n"
  "the push/pull APIs to forward the calls to the Python object, we can\n"
  "make such Python algorithms behave like regular C++-based algorithm\n"
  "subclasses.\n\n";


static PyObject *
PyvtkSIPythonSourceProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSIPythonSourceProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIPythonSourceProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIPythonSourceProxy *op = static_cast<vtkSIPythonSourceProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIPythonSourceProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIPythonSourceProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSIPythonSourceProxy *tempr = vtkSIPythonSourceProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIPythonSourceProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIPythonSourceProxy *op = static_cast<vtkSIPythonSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIPythonSourceProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIPythonSourceProxy::NewInstance());

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
PyvtkSIPythonSourceProxy_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIPythonSourceProxy *op = static_cast<vtkSIPythonSourceProxy *>(vp);

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
      op->vtkSIPythonSourceProxy::Push(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIPythonSourceProxy_Pull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIPythonSourceProxy *op = static_cast<vtkSIPythonSourceProxy *>(vp);

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
      op->vtkSIPythonSourceProxy::Pull(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIPythonSourceProxy_RecreateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecreateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIPythonSourceProxy *op = static_cast<vtkSIPythonSourceProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecreateVTKObjects();
    }
    else
    {
      op->vtkSIPythonSourceProxy::RecreateVTKObjects();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIPythonSourceProxy_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIPythonSourceProxy *op = static_cast<vtkSIPythonSourceProxy *>(vp);

  vtkPVSessionCore *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVSessionCore"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkSIPythonSourceProxy::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSIPythonSourceProxy_Methods[] = {
  {"IsTypeOf", PyvtkSIPythonSourceProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSIPythonSourceProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSIPythonSourceProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSIPythonSourceProxy\nC++: static vtkSIPythonSourceProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSIPythonSourceProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSIPythonSourceProxy\nC++: vtkSIPythonSourceProxy *NewInstance()\n\n"},
  {"Push", PyvtkSIPythonSourceProxy_Push, METH_VARARGS,
   "V.Push(vtkSMMessage)\nC++: void Push(vtkSMMessage *) override;\n\nPush a new state to the underneath implementation\n"},
  {"Pull", PyvtkSIPythonSourceProxy_Pull, METH_VARARGS,
   "V.Pull(vtkSMMessage)\nC++: void Pull(vtkSMMessage *) override;\n\nPull the current state of the underneath implementation\n"},
  {"RecreateVTKObjects", PyvtkSIPythonSourceProxy_RecreateVTKObjects, METH_VARARGS,
   "V.RecreateVTKObjects()\nC++: void RecreateVTKObjects() override;\n\nOverridden to update the output ports.\n"},
  {"Initialize", PyvtkSIPythonSourceProxy_Initialize, METH_VARARGS,
   "V.Initialize(vtkPVSessionCore)\nC++: void Initialize(vtkPVSessionCore *session) override;\n\nInitializes the instance. Session is the session to which this\ninstance belongs to. During initialization, the SIObject\nbasically obtains ivars for necessary components.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSIPythonSourceProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVPythonAlgorithmPython.vtkSIPythonSourceProxy", // tp_name
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
  PyvtkSIPythonSourceProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSIPythonSourceProxy_StaticNew()
{
  return vtkSIPythonSourceProxy::New();
}

PyObject *PyvtkSIPythonSourceProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSIPythonSourceProxy_Type, PyvtkSIPythonSourceProxy_Methods,
    "vtkSIPythonSourceProxy",
 &PyvtkSIPythonSourceProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSIPythonSourceProxy_Type;

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

void PyVTKAddFile_vtkSIPythonSourceProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSIPythonSourceProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSIPythonSourceProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

