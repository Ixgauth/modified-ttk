// python wrapper for vtkPVMemoryUseInformation
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
#include "vtkPVMemoryUseInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVMemoryUseInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVMemoryUseInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVMemoryUseInformation_Doc =
  "vtkPVMemoryUseInformation - A vtkClientServerStream serializable\ncontainer for a single process's instantaneous memory usage.\n\n"
  "Superclass: vtkPVInformation\n\n"
;


static PyObject *
PyvtkPVMemoryUseInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVMemoryUseInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVMemoryUseInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVMemoryUseInformation *tempr = vtkPVMemoryUseInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVMemoryUseInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVMemoryUseInformation::NewInstance());

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
PyvtkPVMemoryUseInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

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
      op->vtkPVMemoryUseInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_AddInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

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
      op->vtkPVMemoryUseInformation::AddInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkPVMemoryUseInformation::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_GetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessType(temp0) :
      op->vtkPVMemoryUseInformation::GetProcessType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_GetRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRank(temp0) :
      op->vtkPVMemoryUseInformation::GetRank(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_GetProcMemoryUse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcMemoryUse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetProcMemoryUse(temp0) :
      op->vtkPVMemoryUseInformation::GetProcMemoryUse(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVMemoryUseInformation_GetHostMemoryUse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHostMemoryUse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVMemoryUseInformation *op = static_cast<vtkPVMemoryUseInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetHostMemoryUse(temp0) :
      op->vtkPVMemoryUseInformation::GetHostMemoryUse(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVMemoryUseInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVMemoryUseInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVMemoryUseInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVMemoryUseInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVMemoryUseInformation\nC++: static vtkPVMemoryUseInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVMemoryUseInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVMemoryUseInformation\nC++: vtkPVMemoryUseInformation *NewInstance()\n\n"},
  {"CopyFromObject", PyvtkPVMemoryUseInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *) override;\n\nTransfer information about a single object into this object.\n"},
  {"AddInformation", PyvtkPVMemoryUseInformation_AddInformation, METH_VARARGS,
   "V.AddInformation(vtkPVInformation)\nC++: void AddInformation(vtkPVInformation *) override;\n\nMerge another information object.\n"},
  {"GetSize", PyvtkPVMemoryUseInformation_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: size_t GetSize()\n\naccess the managed information.\n"},
  {"GetProcessType", PyvtkPVMemoryUseInformation_GetProcessType, METH_VARARGS,
   "V.GetProcessType(int) -> int\nC++: int GetProcessType(int i)\n\n"},
  {"GetRank", PyvtkPVMemoryUseInformation_GetRank, METH_VARARGS,
   "V.GetRank(int) -> int\nC++: int GetRank(int i)\n\n"},
  {"GetProcMemoryUse", PyvtkPVMemoryUseInformation_GetProcMemoryUse, METH_VARARGS,
   "V.GetProcMemoryUse(int) -> int\nC++: long long GetProcMemoryUse(int i)\n\n"},
  {"GetHostMemoryUse", PyvtkPVMemoryUseInformation_GetHostMemoryUse, METH_VARARGS,
   "V.GetHostMemoryUse(int) -> int\nC++: long long GetHostMemoryUse(int i)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVMemoryUseInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVMemoryUseInformation", // tp_name
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
  PyvtkPVMemoryUseInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVMemoryUseInformation_StaticNew()
{
  return vtkPVMemoryUseInformation::New();
}

PyObject *PyvtkPVMemoryUseInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVMemoryUseInformation_Type, PyvtkPVMemoryUseInformation_Methods,
    "vtkPVMemoryUseInformation",
 &PyvtkPVMemoryUseInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVMemoryUseInformation_Type;

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

void PyVTKAddFile_vtkPVMemoryUseInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVMemoryUseInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVMemoryUseInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

