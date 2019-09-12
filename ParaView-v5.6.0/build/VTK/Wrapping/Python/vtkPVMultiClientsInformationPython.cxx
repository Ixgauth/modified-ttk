// python wrapper for vtkPVMultiClientsInformation
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
#include "vtkPVMultiClientsInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVMultiClientsInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVMultiClientsInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVMultiClientsInformation_Doc =
  "vtkPVMultiClientsInformation - Gets Multi-clients information from\nthe server.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "This objects is used by the client to get the number of multi-clients\n"
  "server as well as their ids.\n\n";


static PyObject *
PyvtkPVMultiClientsInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVMultiClientsInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMultiClientsInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVMultiClientsInformation *tempr = vtkPVMultiClientsInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVMultiClientsInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMultiClientsInformation::NewInstance());

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
PyvtkPVMultiClientsInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  vtkPVMultiClientsInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVMultiClientsInformation"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkPVMultiClientsInformation::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

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
      op->vtkPVMultiClientsInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

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
      op->vtkPVMultiClientsInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_GetClientId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClientId() :
      op->vtkPVMultiClientsInformation::GetClientId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVMultiClientsInformation_GetClientId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClientId(temp0) :
      op->vtkPVMultiClientsInformation::GetClientId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVMultiClientsInformation_GetClientId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPVMultiClientsInformation_GetClientId_s1(self, args);
    case 1:
      return PyvtkPVMultiClientsInformation_GetClientId_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetClientId");
  return nullptr;
}



static PyObject *
PyvtkPVMultiClientsInformation_GetNumberOfClients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfClients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfClients() :
      op->vtkPVMultiClientsInformation::GetNumberOfClients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_GetMultiClientEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiClientEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMultiClientEnable() :
      op->vtkPVMultiClientsInformation::GetMultiClientEnable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMultiClientsInformation_GetMasterId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasterId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMultiClientsInformation *op = static_cast<vtkPVMultiClientsInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMasterId() :
      op->vtkPVMultiClientsInformation::GetMasterId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVMultiClientsInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVMultiClientsInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVMultiClientsInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVMultiClientsInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVMultiClientsInformation\nC++: static vtkPVMultiClientsInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVMultiClientsInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVMultiClientsInformation\nC++: vtkPVMultiClientsInformation *NewInstance()\n\n"},
  {"DeepCopy", PyvtkPVMultiClientsInformation_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkPVMultiClientsInformation)\nC++: void DeepCopy(vtkPVMultiClientsInformation *info)\n\n"},
  {"CopyFromObject", PyvtkPVMultiClientsInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVMultiClientsInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *) override;\n\nMerge another information object.\n"},
  {"GetClientId", PyvtkPVMultiClientsInformation_GetClientId, METH_VARARGS,
   "V.GetClientId() -> int\nC++: virtual int GetClientId()\nV.GetClientId(int) -> int\nC++: int GetClientId(int idx)\n\nGet the id that correspond to the current client\n"},
  {"GetNumberOfClients", PyvtkPVMultiClientsInformation_GetNumberOfClients, METH_VARARGS,
   "V.GetNumberOfClients() -> int\nC++: virtual int GetNumberOfClients()\n\nReturn the number of connected clients\n"},
  {"GetMultiClientEnable", PyvtkPVMultiClientsInformation_GetMultiClientEnable, METH_VARARGS,
   "V.GetMultiClientEnable() -> int\nC++: virtual int GetMultiClientEnable()\n\nReturn 1 if the server allow server client to connect to itself\n"},
  {"GetMasterId", PyvtkPVMultiClientsInformation_GetMasterId, METH_VARARGS,
   "V.GetMasterId() -> int\nC++: virtual int GetMasterId()\n\nReturn the Id of the client that has been elected as master\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVMultiClientsInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVMultiClientsInformation", // tp_name
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
  PyvtkPVMultiClientsInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVMultiClientsInformation_StaticNew()
{
  return vtkPVMultiClientsInformation::New();
}

PyObject *PyvtkPVMultiClientsInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVMultiClientsInformation_Type, PyvtkPVMultiClientsInformation_Methods,
    "vtkPVMultiClientsInformation",
 &PyvtkPVMultiClientsInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVMultiClientsInformation_Type;

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

void PyVTKAddFile_vtkPVMultiClientsInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVMultiClientsInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVMultiClientsInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

