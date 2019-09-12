// python wrapper for vtkMPIMToNSocketConnection
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
#include "vtkMPIMToNSocketConnection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMPIMToNSocketConnection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMPIMToNSocketConnection_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkMPIMToNSocketConnection_Doc =
  "vtkMPIMToNSocketConnection - class to create socket connections\nbetween two servers\n\n"
  "Superclass: vtkObject\n\n"
  "class used to create socket connections between the render and data\n"
  "servers.  This used for example when data is on a super computer\n"
  "(SGI, IBM, etc) and Rendering on a Linux cluster with hardware\n"
  "graphics support. This problem is known as the \"M\" to \"N\" geometry\n"
  "load redistribution problem.  It addresses the common case where\n"
  "there is a significante mismatch in the size of large parallel\n"
  "computing resources and the often smaller parallel\n"
  "hardward-accelerated rendering resources. The larger number of\n"
  "processors on the compute servers are called M, and the smaller\n"
  "number of rendering processors are call N.  This class is used to\n"
  "create N vtkSocketCommunicator's that connect the first N of the M\n"
  "processes on the data server to the N processes on the render server.\n\n";


static PyObject *
PyvtkMPIMToNSocketConnection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMPIMToNSocketConnection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPIMToNSocketConnection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMPIMToNSocketConnection *tempr = vtkMPIMToNSocketConnection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMPIMToNSocketConnection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPIMToNSocketConnection::NewInstance());

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
PyvtkMPIMToNSocketConnection_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkMPIMToNSocketConnection::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_ConnectMtoN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConnectMtoN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConnectMtoN();
    }
    else
    {
      op->vtkMPIMToNSocketConnection::ConnectMtoN();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_SetNumberOfConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfConnections(temp0);
    }
    else
    {
      op->vtkMPIMToNSocketConnection::SetNumberOfConnections(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_GetNumberOfConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfConnections() :
      op->vtkMPIMToNSocketConnection::GetNumberOfConnections());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_SetPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  unsigned int temp0;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetPortInformation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMPIMToNSocketConnection::SetPortInformation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_GetSocketCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSocketCommunicator *tempr = (ap.IsBound() ?
      op->GetSocketCommunicator() :
      op->vtkMPIMToNSocketConnection::GetSocketCommunicator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_GetPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  vtkMPIMToNSocketConnectionPortInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPIMToNSocketConnectionPortInformation"))
  {
    if (ap.IsBound())
    {
      op->GetPortInformation(temp0);
    }
    else
    {
      op->vtkMPIMToNSocketConnection::GetPortInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnection_GetPortNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPortNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnection *op = static_cast<vtkMPIMToNSocketConnection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPortNumber() :
      op->vtkMPIMToNSocketConnection::GetPortNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMPIMToNSocketConnection_Methods[] = {
  {"IsTypeOf", PyvtkMPIMToNSocketConnection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMPIMToNSocketConnection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMPIMToNSocketConnection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMPIMToNSocketConnection\nC++: static vtkMPIMToNSocketConnection *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMPIMToNSocketConnection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMPIMToNSocketConnection\nC++: vtkMPIMToNSocketConnection *NewInstance()\n\n"},
  {"Initialize", PyvtkMPIMToNSocketConnection_Initialize, METH_VARARGS,
   "V.Initialize(int)\nC++: void Initialize(int waiting_process_type)\n\n"},
  {"ConnectMtoN", PyvtkMPIMToNSocketConnection_ConnectMtoN, METH_VARARGS,
   "V.ConnectMtoN()\nC++: void ConnectMtoN()\n\nSetup  the connection.\n"},
  {"SetNumberOfConnections", PyvtkMPIMToNSocketConnection_SetNumberOfConnections, METH_VARARGS,
   "V.SetNumberOfConnections(int)\nC++: void SetNumberOfConnections(int)\n\nSet the number of connections to be made.\n"},
  {"GetNumberOfConnections", PyvtkMPIMToNSocketConnection_GetNumberOfConnections, METH_VARARGS,
   "V.GetNumberOfConnections() -> int\nC++: virtual int GetNumberOfConnections()\n\nSet the number of connections to be made.\n"},
  {"SetPortInformation", PyvtkMPIMToNSocketConnection_SetPortInformation, METH_VARARGS,
   "V.SetPortInformation(int, int, string)\nC++: void SetPortInformation(unsigned int processNumber,\n    int portNumber, const char *hostName)\n\nSet up information about the remote connection.\n"},
  {"GetSocketCommunicator", PyvtkMPIMToNSocketConnection_GetSocketCommunicator, METH_VARARGS,
   "V.GetSocketCommunicator() -> vtkSocketCommunicator\nC++: virtual vtkSocketCommunicator *GetSocketCommunicator()\n\nReturn the socket communicator for this process.\n"},
  {"GetPortInformation", PyvtkMPIMToNSocketConnection_GetPortInformation, METH_VARARGS,
   "V.GetPortInformation(vtkMPIMToNSocketConnectionPortInformation)\nC++: void GetPortInformation(\n    vtkMPIMToNSocketConnectionPortInformation *)\n\nFill the port information values into the port information\nobject.\n"},
  {"GetPortNumber", PyvtkMPIMToNSocketConnection_GetPortNumber, METH_VARARGS,
   "V.GetPortNumber() -> int\nC++: virtual int GetPortNumber()\n\nSet port to use, if the value is 0, then the system will pick the\nport.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMPIMToNSocketConnection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkMPIMToNSocketConnection", // tp_name
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
  PyvtkMPIMToNSocketConnection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMPIMToNSocketConnection_StaticNew()
{
  return vtkMPIMToNSocketConnection::New();
}

PyObject *PyvtkMPIMToNSocketConnection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMPIMToNSocketConnection_Type, PyvtkMPIMToNSocketConnection_Methods,
    "vtkMPIMToNSocketConnection",
 &PyvtkMPIMToNSocketConnection_StaticNew);

  PyTypeObject *pytype = &PyvtkMPIMToNSocketConnection_Type;

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

void PyVTKAddFile_vtkMPIMToNSocketConnection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMPIMToNSocketConnection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMPIMToNSocketConnection", o) != 0)
  {
    Py_DECREF(o);
  }

}

