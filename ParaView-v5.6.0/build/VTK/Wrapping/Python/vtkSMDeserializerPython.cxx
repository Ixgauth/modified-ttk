// python wrapper for vtkSMDeserializer
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
#include "vtkSMDeserializer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMDeserializer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMDeserializer_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSMDeserializer_Doc =
  "vtkSMDeserializer - deserializes proxies from their states.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSMDeserializer is used to deserialize proxies from their\n"
  "XML/Protobuf/? states. This is the base class of deserialization\n"
  "classes that load XMLs/Protobuf/? to restore servermanager state (or\n"
  "part thereof).\n\n";


static PyObject *
PyvtkSMDeserializer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMDeserializer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDeserializer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializer *op = static_cast<vtkSMDeserializer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDeserializer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDeserializer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMDeserializer *tempr = vtkSMDeserializer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDeserializer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializer *op = static_cast<vtkSMDeserializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDeserializer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDeserializer::NewInstance());

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
PyvtkSMDeserializer_SetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializer *op = static_cast<vtkSMDeserializer *>(vp);

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
      op->vtkSMDeserializer::SetSession(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDeserializer_GetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializer *op = static_cast<vtkSMDeserializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSessionProxyManager *tempr = (ap.IsBound() ?
      op->GetSessionProxyManager() :
      op->vtkSMDeserializer::GetSessionProxyManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDeserializer_SetSessionProxyManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSessionProxyManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializer *op = static_cast<vtkSMDeserializer *>(vp);

  vtkSMSessionProxyManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager"))
  {
    if (ap.IsBound())
    {
      op->SetSessionProxyManager(temp0);
    }
    else
    {
      op->vtkSMDeserializer::SetSessionProxyManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDeserializer_GetSession(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSession");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDeserializer *op = static_cast<vtkSMDeserializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSession *tempr = (ap.IsBound() ?
      op->GetSession() :
      op->vtkSMDeserializer::GetSession());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDeserializer_Methods[] = {
  {"IsTypeOf", PyvtkSMDeserializer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMDeserializer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMDeserializer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMDeserializer\nC++: static vtkSMDeserializer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMDeserializer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMDeserializer\nC++: vtkSMDeserializer *NewInstance()\n\n"},
  {"SetSession", PyvtkSMDeserializer_SetSession, METH_VARARGS,
   "V.SetSession(vtkSMSession)\nC++: void SetSession(vtkSMSession *session)\n\nConvenience method for setting the SessionProxyManager. This is\nequivalent to calling\nvtkSMDeserializer::SetSessionProxyManager(session->GetSessionProxy\nManager()).\n"},
  {"GetSessionProxyManager", PyvtkSMDeserializer_GetSessionProxyManager, METH_VARARGS,
   "V.GetSessionProxyManager() -> vtkSMSessionProxyManager\nC++: vtkSMSessionProxyManager *GetSessionProxyManager()\n\nGet/Set the proxy manager on which this deserializer is expected\nto operate.\n"},
  {"SetSessionProxyManager", PyvtkSMDeserializer_SetSessionProxyManager, METH_VARARGS,
   "V.SetSessionProxyManager(vtkSMSessionProxyManager)\nC++: void SetSessionProxyManager(vtkSMSessionProxyManager *)\n\nGet/Set the proxy manager on which this deserializer is expected\nto operate.\n"},
  {"GetSession", PyvtkSMDeserializer_GetSession, METH_VARARGS,
   "V.GetSession() -> vtkSMSession\nC++: vtkSMSession *GetSession()\n\nProvides access to the session. This is same as calling\nthis->GetSessionProxyManager()->GetSession() (with NULL checks).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMDeserializer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMDeserializer", // tp_name
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
  PyvtkSMDeserializer_Doc, // tp_doc
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

PyObject *PyvtkSMDeserializer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMDeserializer_Type, PyvtkSMDeserializer_Methods,
    "vtkSMDeserializer",
 nullptr);

  PyTypeObject *pytype = &PyvtkSMDeserializer_Type;

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

void PyVTKAddFile_vtkSMDeserializer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMDeserializer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMDeserializer", o) != 0)
  {
    Py_DECREF(o);
  }

}

