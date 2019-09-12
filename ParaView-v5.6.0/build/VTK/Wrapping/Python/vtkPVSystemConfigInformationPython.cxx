// python wrapper for vtkPVSystemConfigInformation
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
#include "vtkPVSystemConfigInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVSystemConfigInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVSystemConfigInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVSystemConfigInformation_Doc =
  "vtkPVSystemConfigInformation - A vtkClientServerStream serializable\ncontainer of information describing memory configuration of the host\nof a single process.\n\n"
  "Superclass: vtkPVInformation\n\n"
;


static PyObject *
PyvtkPVSystemConfigInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVSystemConfigInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSystemConfigInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVSystemConfigInformation *tempr = vtkPVSystemConfigInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSystemConfigInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSystemConfigInformation::NewInstance());

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
PyvtkPVSystemConfigInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

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
      op->vtkPVSystemConfigInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

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
      op->vtkPVSystemConfigInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkPVSystemConfigInformation::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetOSDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOSDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOSDescriptor(temp0) :
      op->vtkPVSystemConfigInformation::GetOSDescriptor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetCPUDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCPUDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCPUDescriptor(temp0) :
      op->vtkPVSystemConfigInformation::GetCPUDescriptor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetMemoryDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMemoryDescriptor(temp0) :
      op->vtkPVSystemConfigInformation::GetMemoryDescriptor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetHostName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetHostName(temp0) :
      op->vtkPVSystemConfigInformation::GetHostName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessType(temp0) :
      op->vtkPVSystemConfigInformation::GetProcessType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetSystemType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSystemType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSystemType(temp0) :
      op->vtkPVSystemConfigInformation::GetSystemType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRank(temp0) :
      op->vtkPVSystemConfigInformation::GetRank(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetPid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPid(temp0) :
      op->vtkPVSystemConfigInformation::GetPid(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetHostMemoryTotal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostMemoryTotal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetHostMemoryTotal(temp0) :
      op->vtkPVSystemConfigInformation::GetHostMemoryTotal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetHostMemoryAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostMemoryAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetHostMemoryAvailable(temp0) :
      op->vtkPVSystemConfigInformation::GetHostMemoryAvailable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_GetProcMemoryAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcMemoryAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetProcMemoryAvailable(temp0) :
      op->vtkPVSystemConfigInformation::GetProcMemoryAvailable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSystemConfigInformation_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSystemConfigInformation *op = static_cast<vtkPVSystemConfigInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Sort();
    }
    else
    {
      op->vtkPVSystemConfigInformation::Sort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVSystemConfigInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVSystemConfigInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVSystemConfigInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVSystemConfigInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVSystemConfigInformation\nC++: static vtkPVSystemConfigInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVSystemConfigInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVSystemConfigInformation\nC++: vtkPVSystemConfigInformation *NewInstance()\n\n"},
  {"CopyFromObject", PyvtkPVSystemConfigInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *obj) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVSystemConfigInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *info) override;\n\nMerge another information object.\n"},
  {"GetSize", PyvtkPVSystemConfigInformation_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: size_t GetSize()\n\nAccess managed information\n"},
  {"GetOSDescriptor", PyvtkPVSystemConfigInformation_GetOSDescriptor, METH_VARARGS,
   "V.GetOSDescriptor(int) -> string\nC++: const char *GetOSDescriptor(size_t i)\n\n"},
  {"GetCPUDescriptor", PyvtkPVSystemConfigInformation_GetCPUDescriptor, METH_VARARGS,
   "V.GetCPUDescriptor(int) -> string\nC++: const char *GetCPUDescriptor(size_t i)\n\n"},
  {"GetMemoryDescriptor", PyvtkPVSystemConfigInformation_GetMemoryDescriptor, METH_VARARGS,
   "V.GetMemoryDescriptor(int) -> string\nC++: const char *GetMemoryDescriptor(size_t i)\n\n"},
  {"GetHostName", PyvtkPVSystemConfigInformation_GetHostName, METH_VARARGS,
   "V.GetHostName(int) -> string\nC++: const char *GetHostName(size_t i)\n\n"},
  {"GetProcessType", PyvtkPVSystemConfigInformation_GetProcessType, METH_VARARGS,
   "V.GetProcessType(int) -> int\nC++: int GetProcessType(size_t i)\n\n"},
  {"GetSystemType", PyvtkPVSystemConfigInformation_GetSystemType, METH_VARARGS,
   "V.GetSystemType(int) -> int\nC++: int GetSystemType(size_t i)\n\n"},
  {"GetRank", PyvtkPVSystemConfigInformation_GetRank, METH_VARARGS,
   "V.GetRank(int) -> int\nC++: int GetRank(size_t i)\n\n"},
  {"GetPid", PyvtkPVSystemConfigInformation_GetPid, METH_VARARGS,
   "V.GetPid(int) -> int\nC++: long long GetPid(size_t i)\n\n"},
  {"GetHostMemoryTotal", PyvtkPVSystemConfigInformation_GetHostMemoryTotal, METH_VARARGS,
   "V.GetHostMemoryTotal(int) -> int\nC++: long long GetHostMemoryTotal(size_t i)\n\n"},
  {"GetHostMemoryAvailable", PyvtkPVSystemConfigInformation_GetHostMemoryAvailable, METH_VARARGS,
   "V.GetHostMemoryAvailable(int) -> int\nC++: long long GetHostMemoryAvailable(size_t i)\n\n"},
  {"GetProcMemoryAvailable", PyvtkPVSystemConfigInformation_GetProcMemoryAvailable, METH_VARARGS,
   "V.GetProcMemoryAvailable(int) -> int\nC++: long long GetProcMemoryAvailable(size_t i)\n\n"},
  {"Sort", PyvtkPVSystemConfigInformation_Sort, METH_VARARGS,
   "V.Sort()\nC++: void Sort()\n\nSort elements by mpi rank.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVSystemConfigInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVSystemConfigInformation", // tp_name
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
  PyvtkPVSystemConfigInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVSystemConfigInformation_StaticNew()
{
  return vtkPVSystemConfigInformation::New();
}

PyObject *PyvtkPVSystemConfigInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVSystemConfigInformation_Type, PyvtkPVSystemConfigInformation_Methods,
    "vtkPVSystemConfigInformation",
 &PyvtkPVSystemConfigInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVSystemConfigInformation_Type;

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

void PyVTKAddFile_vtkPVSystemConfigInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVSystemConfigInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVSystemConfigInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

