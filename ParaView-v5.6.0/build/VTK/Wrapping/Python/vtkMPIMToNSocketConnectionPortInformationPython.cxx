// python wrapper for vtkMPIMToNSocketConnectionPortInformation
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
#include "vtkMPIMToNSocketConnectionPortInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMPIMToNSocketConnectionPortInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMPIMToNSocketConnectionPortInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkMPIMToNSocketConnectionPortInformation_Doc =
  "vtkMPIMToNSocketConnectionPortInformation - holds port and host name\ninformation.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "and host information from a render server.  This information is used\n"
  "by the data server to make the connections to the render server\n"
  "processes.\n\n";


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMPIMToNSocketConnectionPortInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPIMToNSocketConnectionPortInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMPIMToNSocketConnectionPortInformation *tempr = vtkMPIMToNSocketConnectionPortInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMPIMToNSocketConnectionPortInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPIMToNSocketConnectionPortInformation::NewInstance());

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
PyvtkMPIMToNSocketConnectionPortInformation_SetConnectionInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConnectionInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

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
      op->SetConnectionInformation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMPIMToNSocketConnectionPortInformation::SetConnectionInformation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_GetNumberOfConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfConnections() :
      op->vtkMPIMToNSocketConnectionPortInformation::GetNumberOfConnections());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_GetProcessPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessPort(temp0) :
      op->vtkMPIMToNSocketConnectionPortInformation::GetProcessPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_GetProcessHostName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessHostName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetProcessHostName(temp0) :
      op->vtkMPIMToNSocketConnectionPortInformation::GetProcessHostName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->CopyFromObject(temp0);
    }
    else
    {
      op->vtkMPIMToNSocketConnectionPortInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPIMToNSocketConnectionPortInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPIMToNSocketConnectionPortInformation *op = static_cast<vtkMPIMToNSocketConnectionPortInformation *>(vp);

  vtkPVInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
  {
    if (ap.IsBound())
    {
      op->AddInformation(temp0);
    }
    else
    {
      op->vtkMPIMToNSocketConnectionPortInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMPIMToNSocketConnectionPortInformation_Methods[] = {
  {"IsTypeOf", PyvtkMPIMToNSocketConnectionPortInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMPIMToNSocketConnectionPortInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMPIMToNSocketConnectionPortInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkMPIMToNSocketConnectionPortInformation\nC++: static vtkMPIMToNSocketConnectionPortInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMPIMToNSocketConnectionPortInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMPIMToNSocketConnectionPortInformation\nC++: vtkMPIMToNSocketConnectionPortInformation *NewInstance()\n\n"},
  {"SetConnectionInformation", PyvtkMPIMToNSocketConnectionPortInformation_SetConnectionInformation, METH_VARARGS,
   "V.SetConnectionInformation(int, int, string)\nC++: void SetConnectionInformation(unsigned int processNumber,\n    int portNumber, const char *hostname)\n\nSet the port and host information for a specific process number.\n"},
  {"GetNumberOfConnections", PyvtkMPIMToNSocketConnectionPortInformation_GetNumberOfConnections, METH_VARARGS,
   "V.GetNumberOfConnections() -> int\nC++: int GetNumberOfConnections()\n\nSet/Get the number of connections.\n"},
  {"GetProcessPort", PyvtkMPIMToNSocketConnectionPortInformation_GetProcessPort, METH_VARARGS,
   "V.GetProcessPort(int) -> int\nC++: int GetProcessPort(unsigned int processNumber)\n\nAccess information about a particular process.\n"},
  {"GetProcessHostName", PyvtkMPIMToNSocketConnectionPortInformation_GetProcessHostName, METH_VARARGS,
   "V.GetProcessHostName(int) -> string\nC++: const char *GetProcessHostName(unsigned int processNumber)\n\nAccess information about a particular process.\n"},
  {"CopyFromObject", PyvtkMPIMToNSocketConnectionPortInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkMPIMToNSocketConnectionPortInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *) override;\n\nMerge another information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMPIMToNSocketConnectionPortInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkMPIMToNSocketConnectionPortInformation", // tp_name
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
  PyvtkMPIMToNSocketConnectionPortInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMPIMToNSocketConnectionPortInformation_StaticNew()
{
  return vtkMPIMToNSocketConnectionPortInformation::New();
}

PyObject *PyvtkMPIMToNSocketConnectionPortInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMPIMToNSocketConnectionPortInformation_Type, PyvtkMPIMToNSocketConnectionPortInformation_Methods,
    "vtkMPIMToNSocketConnectionPortInformation",
 &PyvtkMPIMToNSocketConnectionPortInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkMPIMToNSocketConnectionPortInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVInformation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMPIMToNSocketConnectionPortInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMPIMToNSocketConnectionPortInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMPIMToNSocketConnectionPortInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

