// python wrapper for vtkSocket
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
#include "vtkSocket.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSocket(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSocket_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSocket_Doc =
  "vtkSocket - BSD socket encapsulation.\n\n"
  "Superclass: vtkObject\n\n"
  "This abstract class encapsulates a BSD socket. It provides an API for\n"
  "basic socket operations.\n\n";


static PyObject *
PyvtkSocket_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSocket::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocket_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSocket::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocket_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSocket *tempr = vtkSocket::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocket_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSocket *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSocket::NewInstance());

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
PyvtkSocket_GetConnected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConnected() :
      op->vtkSocket::GetConnected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocket_CloseSocket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseSocket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseSocket();
    }
    else
    {
      op->vtkSocket::CloseSocket();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocket_Send(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1) :
      op->vtkSocket::Send(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkSocket_Receive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  int temp1;
  int temp2 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2) :
      op->vtkSocket::Receive(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkSocket_GetSocketDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSocketDescriptor() :
      op->vtkSocket::GetSocketDescriptor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocket_SelectSockets(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SelectSockets");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  int temp1;
  unsigned long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    int tempr = vtkSocket::SelectSockets(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSocket_Methods[] = {
  {"IsTypeOf", PyvtkSocket_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSocket_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSocket_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSocket\nC++: static vtkSocket *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSocket_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSocket\nC++: vtkSocket *NewInstance()\n\n"},
  {"GetConnected", PyvtkSocket_GetConnected, METH_VARARGS,
   "V.GetConnected() -> int\nC++: int GetConnected()\n\nCheck is the socket is alive.\n"},
  {"CloseSocket", PyvtkSocket_CloseSocket, METH_VARARGS,
   "V.CloseSocket()\nC++: void CloseSocket()\n\nClose the socket.\n"},
  {"Send", PyvtkSocket_Send, METH_VARARGS,
   "V.Send(void, int) -> int\nC++: int Send(const void *data, int length)\n\nThese methods send data over the socket. Returns 1 on success, 0\non error and raises vtkCommand::ErrorEvent.\n"},
  {"Receive", PyvtkSocket_Receive, METH_VARARGS,
   "V.Receive(void, int, int) -> int\nC++: int Receive(void *data, int length, int readFully=1)\n\nReceive data from the socket. This call blocks until some data is\nread from the socket. When readFully is set, this call will block\nuntil all the requested data is read from the socket. 0 on error,\nelse number of bytes read is returned. On error,\nvtkCommand::ErrorEvent is raised.\n"},
  {"GetSocketDescriptor", PyvtkSocket_GetSocketDescriptor, METH_VARARGS,
   "V.GetSocketDescriptor() -> int\nC++: virtual int GetSocketDescriptor()\n\nProvides access to the internal socket descriptor. This is valid\nonly when GetConnected() returns true.\n"},
  {"SelectSockets", PyvtkSocket_SelectSockets, METH_VARARGS,
   "V.SelectSockets((int, ...), int, int, [int, ...]) -> int\nC++: static int SelectSockets(const int *sockets_to_select,\n    int size, unsigned long msec, int *selected_index)\n\nSelects set of sockets. Returns 0 on timeout, -1 on error. 1 on\nsuccess. Selected socket's index is returned through\nselected_index\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSocket_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonSystemPython.vtkSocket", // tp_name
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
  PyvtkSocket_Doc, // tp_doc
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

PyObject *PyvtkSocket_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSocket_Type, PyvtkSocket_Methods,
    "vtkSocket",
 nullptr);

  PyTypeObject *pytype = &PyvtkSocket_Type;

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

void PyVTKAddFile_vtkSocket(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSocket_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSocket", o) != 0)
  {
    Py_DECREF(o);
  }

}

