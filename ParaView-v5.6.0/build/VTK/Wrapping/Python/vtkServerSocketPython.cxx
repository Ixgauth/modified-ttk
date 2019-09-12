// python wrapper for vtkServerSocket
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
#include "vtkServerSocket.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkServerSocket(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkServerSocket_ClassNew(); }

#ifndef DECLARED_PyvtkSocket_ClassNew
extern "C" { PyObject *PyvtkSocket_ClassNew(); }
#define DECLARED_PyvtkSocket_ClassNew
#endif

static const char *PyvtkServerSocket_Doc =
  "vtkServerSocket - Encapsulate a socket that accepts connections.\n\n"
  "Superclass: vtkSocket\n\n"
;


static PyObject *
PyvtkServerSocket_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkServerSocket::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkServerSocket_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkServerSocket::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkServerSocket_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkServerSocket *tempr = vtkServerSocket::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkServerSocket_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkServerSocket *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkServerSocket::NewInstance());

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
PyvtkServerSocket_CreateServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CreateServer(temp0) :
      op->vtkServerSocket::CreateServer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkServerSocket_WaitForConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  unsigned long temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkClientSocket *tempr = (ap.IsBound() ?
      op->WaitForConnection(temp0) :
      op->vtkServerSocket::WaitForConnection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkServerSocket_GetServerPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetServerPort() :
      op->vtkServerSocket::GetServerPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkServerSocket_Methods[] = {
  {"IsTypeOf", PyvtkServerSocket_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkServerSocket_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkServerSocket_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkServerSocket\nC++: static vtkServerSocket *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkServerSocket_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkServerSocket\nC++: vtkServerSocket *NewInstance()\n\n"},
  {"CreateServer", PyvtkServerSocket_CreateServer, METH_VARARGS,
   "V.CreateServer(int) -> int\nC++: int CreateServer(int port)\n\nCreates a server socket at a given port and binds to it. Returns\n-1 on error. 0 on success.\n"},
  {"WaitForConnection", PyvtkServerSocket_WaitForConnection, METH_VARARGS,
   "V.WaitForConnection(int) -> vtkClientSocket\nC++: vtkClientSocket *WaitForConnection(unsigned long msec=0)\n\nWaits for a connection. When a connection is received a new\nvtkClientSocket object is created and returned. Returns nullptr\non timeout.\n"},
  {"GetServerPort", PyvtkServerSocket_GetServerPort, METH_VARARGS,
   "V.GetServerPort() -> int\nC++: int GetServerPort()\n\nReturns the port on which the server is running.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkServerSocket_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonSystemPython.vtkServerSocket", // tp_name
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
  PyvtkServerSocket_Doc, // tp_doc
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

static vtkObjectBase *PyvtkServerSocket_StaticNew()
{
  return vtkServerSocket::New();
}

PyObject *PyvtkServerSocket_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkServerSocket_Type, PyvtkServerSocket_Methods,
    "vtkServerSocket",
 &PyvtkServerSocket_StaticNew);

  PyTypeObject *pytype = &PyvtkServerSocket_Type;

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

void PyVTKAddFile_vtkServerSocket(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkServerSocket_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkServerSocket", o) != 0)
  {
    Py_DECREF(o);
  }

}

