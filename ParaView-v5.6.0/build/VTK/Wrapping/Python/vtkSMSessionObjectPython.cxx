// python wrapper for vtkSMSessionObject
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
#include "vtkSMSessionObject.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSessionObject(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSessionObject_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMSessionObject_Doc =
  "vtkSMSessionObject - superclass for any server manager classes\n                           that are related to a session\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMSessionObject provides methods to set and get the relative\n"
  "session\n\n";


static PyObject *
PyvtkSMSessionObject_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSessionObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionObject *op = static_cast<vtkSMSessionObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSessionObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSessionObject *tempr = vtkSMSessionObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionObject *op = static_cast<vtkSMSessionObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSessionObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSessionObject::NewInstance());

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
PyvtkSMSessionObject_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionObject *op = static_cast<vtkSMSessionObject *>(vp);

  vtkSMSession *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSession"))
  {
    if (ap.IsBound())
    {
      op->SetSession(temp0);
    }
    else
    {
      op->vtkSMSessionObject::SetSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionObject_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionObject *op = static_cast<vtkSMSessionObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkSMSessionObject::GetSession());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSessionObject_GetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSessionObject *op = static_cast<vtkSMSessionObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetSessionProxyManager() :
      op->vtkSMSessionObject::GetSessionProxyManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSessionObject_Methods[] = {
  {"IsTypeOf", PyvtkSMSessionObject_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSessionObject_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSessionObject_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSessionObject\nC++: static vtkSMSessionObject *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSessionObject_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSessionObject\nC++: vtkSMSessionObject *NewInstance()\n\n"},
  {"SetSession", PyvtkSMSessionObject_SetSession, METH_VARARGS,
   "V.SetSession(vtkSMSession)\nC++: virtual void SetSession(vtkSMSession *)\n\nGet/Set the session on wihch this object exists. Note that\nsession is not reference counted.\n"},
  {"GetSession", PyvtkSMSessionObject_GetSession, METH_VARARGS,
   "V.GetSession() -> vtkSMSession\nC++: virtual vtkSMSession *GetSession()\n\nGet/Set the session on wihch this object exists. Note that\nsession is not reference counted.\n"},
  {"GetSessionProxyManager", PyvtkSMSessionObject_GetSessionProxyManager, METH_VARARGS,
   "V.GetSessionProxyManager() -> vtkSMSessionProxyManager\nC++: virtual vtkSMSessionProxyManager *GetSessionProxyManager()\n\nReturn the corresponding ProxyManager if any.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSessionObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMSessionObject", // tp_name
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
  PyvtkSMSessionObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSessionObject_StaticNew()
{
  return vtkSMSessionObject::New();
}

PyObject *PyvtkSMSessionObject_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSessionObject_Type, PyvtkSMSessionObject_Methods,
    "vtkSMSessionObject",
 &PyvtkSMSessionObject_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSessionObject_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMSessionObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSessionObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSessionObject", o) != 0)
  {
    Py_DECREF(o);
  }

}

