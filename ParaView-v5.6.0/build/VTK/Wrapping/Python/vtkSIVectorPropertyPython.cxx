// python wrapper for vtkSIVectorProperty
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
#include "vtkSIVectorProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSIVectorProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSIVectorProperty_ClassNew(); }

#ifndef DECLARED_PyvtkSIProperty_ClassNew
extern "C" { PyObject *PyvtkSIProperty_ClassNew(); }
#define DECLARED_PyvtkSIProperty_ClassNew
#endif

static const char *PyvtkSIVectorProperty_Doc =
  "vtkSIVectorProperty - Abstract class for SIProperty that hold an\narray of values.\n\n"
  "Superclass: vtkSIProperty\n\n"
  "Define the array management API\n\n";


static PyObject *
PyvtkSIVectorProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSIVectorProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIVectorProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSIVectorProperty *tempr = vtkSIVectorProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIVectorProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIVectorProperty::NewInstance());

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
PyvtkSIVectorProperty_GetNumberOfElementsPerCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementsPerCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementsPerCommand() :
      op->vtkSIVectorProperty::GetNumberOfElementsPerCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_GetUseIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseIndex() :
      op->vtkSIVectorProperty::GetUseIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_GetCleanCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCleanCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCleanCommand() :
      op->vtkSIVectorProperty::GetCleanCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_GetSetNumberCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSetNumberCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSetNumberCommand() :
      op->vtkSIVectorProperty::GetSetNumberCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIVectorProperty_GetInitialString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIVectorProperty *op = static_cast<vtkSIVectorProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInitialString() :
      op->vtkSIVectorProperty::GetInitialString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSIVectorProperty_Methods[] = {
  {"IsTypeOf", PyvtkSIVectorProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSIVectorProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSIVectorProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSIVectorProperty\nC++: static vtkSIVectorProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSIVectorProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSIVectorProperty\nC++: vtkSIVectorProperty *NewInstance()\n\n"},
  {"GetNumberOfElementsPerCommand", PyvtkSIVectorProperty_GetNumberOfElementsPerCommand, METH_VARARGS,
   "V.GetNumberOfElementsPerCommand() -> int\nC++: virtual int GetNumberOfElementsPerCommand()\n\nIf RepeatCommand is true, the command is invoked multiple times,\neach time with NumberOfElementsPerCommand values. For example, if\nRepeatCommand is true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 1 2 3 4 5 6, the resulting\nstream will have:\n * Invoke obj SetFoo 1 2\n * Invoke obj SetFoo 3 4\n * Invoke obj SetFoo 5 6\n \n"},
  {"GetUseIndex", PyvtkSIVectorProperty_GetUseIndex, METH_VARARGS,
   "V.GetUseIndex() -> bool\nC++: virtual bool GetUseIndex()\n\nIf UseIndex and RepeatCommand are true, the property will add an\nindex integer before each command. For example, if UseIndex and\nRepeatCommand are true, NumberOfElementsPerCommand is 2, the\ncommand is SetFoo and the values are 5 6 7 8 9 10, the resulting\nstream will have:\n * Invoke obj SetFoo 0 5 6\n * Invoke obj SetFoo 1 7 8\n * Invoke obj SetFoo 2 9 10\n \n"},
  {"GetCleanCommand", PyvtkSIVectorProperty_GetCleanCommand, METH_VARARGS,
   "V.GetCleanCommand() -> string\nC++: virtual char *GetCleanCommand()\n\nCommand that can be used to remove all values. Typically used\nwhen RepeatCommand = 1. If set, the clean command is called\nbefore the main Command.\n"},
  {"GetSetNumberCommand", PyvtkSIVectorProperty_GetSetNumberCommand, METH_VARARGS,
   "V.GetSetNumberCommand() -> string\nC++: virtual char *GetSetNumberCommand()\n\nIf SetNumberCommand is set, it is called before Command with the\nnumber of arguments as the parameter.\n"},
  {"GetInitialString", PyvtkSIVectorProperty_GetInitialString, METH_VARARGS,
   "V.GetInitialString() -> string\nC++: virtual char *GetInitialString()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSIVectorProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSIVectorProperty", // tp_name
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
  PyvtkSIVectorProperty_Doc, // tp_doc
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

PyObject *PyvtkSIVectorProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSIVectorProperty_Type, PyvtkSIVectorProperty_Methods,
    "vtkSIVectorProperty",
 nullptr);

  PyTypeObject *pytype = &PyvtkSIVectorProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSIProperty_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSIVectorProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSIVectorProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSIVectorProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

