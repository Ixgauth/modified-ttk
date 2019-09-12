// python wrapper for vtkClientSocket
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
#include "vtkClientSocket.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClientSocket(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkClientSocket_ClassNew(); }

#ifndef DECLARED_PyvtkSocket_ClassNew
extern "C" { PyObject *PyvtkSocket_ClassNew(); }
#define DECLARED_PyvtkSocket_ClassNew
#endif

static const char *PyvtkClientSocket_Doc =
  "vtkClientSocket - Encapsulates a client socket.\n\n"
  "Superclass: vtkSocket\n\n"
;


static PyObject *
PyvtkClientSocket_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClientSocket::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientSocket_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientSocket *op = static_cast<vtkClientSocket *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClientSocket::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientSocket_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClientSocket *tempr = vtkClientSocket::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientSocket_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientSocket *op = static_cast<vtkClientSocket *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClientSocket *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClientSocket::NewInstance());

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
PyvtkClientSocket_ConnectToServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConnectToServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientSocket *op = static_cast<vtkClientSocket *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ConnectToServer(temp0, temp1) :
      op->vtkClientSocket::ConnectToServer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientSocket_GetConnectingSide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectingSide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientSocket *op = static_cast<vtkClientSocket *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConnectingSide() :
      op->vtkClientSocket::GetConnectingSide());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkClientSocket_Methods[] = {
  {"IsTypeOf", PyvtkClientSocket_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkClientSocket_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkClientSocket_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkClientSocket\nC++: static vtkClientSocket *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkClientSocket_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkClientSocket\nC++: vtkClientSocket *NewInstance()\n\n"},
  {"ConnectToServer", PyvtkClientSocket_ConnectToServer, METH_VARARGS,
   "V.ConnectToServer(string, int) -> int\nC++: int ConnectToServer(const char *hostname, int port)\n\nConnects to host. Returns 0 on success, -1 on error.\n"},
  {"GetConnectingSide", PyvtkClientSocket_GetConnectingSide, METH_VARARGS,
   "V.GetConnectingSide() -> bool\nC++: virtual bool GetConnectingSide()\n\nReturns if the socket is on the connecting side (the side that\nrequests a ConnectToServer() or on the connected side (the side\nthat was waiting for the client to connect). This is used to\ndisambiguate the two ends of a socket connection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkClientSocket_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonSystemPython.vtkClientSocket", // tp_name
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
  PyvtkClientSocket_Doc, // tp_doc
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

static vtkObjectBase *PyvtkClientSocket_StaticNew()
{
  return vtkClientSocket::New();
}

PyObject *PyvtkClientSocket_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkClientSocket_Type, PyvtkClientSocket_Methods,
    "vtkClientSocket",
 &PyvtkClientSocket_StaticNew);

  PyTypeObject *pytype = &PyvtkClientSocket_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSocket_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkClientSocket(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClientSocket_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClientSocket", o) != 0)
  {
    Py_DECREF(o);
  }

}

