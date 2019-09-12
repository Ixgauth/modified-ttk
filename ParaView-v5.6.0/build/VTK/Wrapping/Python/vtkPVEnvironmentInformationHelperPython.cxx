// python wrapper for vtkPVEnvironmentInformationHelper
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
#include "vtkPVEnvironmentInformationHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVEnvironmentInformationHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVEnvironmentInformationHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVEnvironmentInformationHelper_Doc =
  "vtkPVEnvironmentInformationHelper - Helper object that can be used to\nobtain information about an environment.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVEnvironmentInformationHelper can be used to get values of\n"
  "environment variables.\n\n";


static PyObject *
PyvtkPVEnvironmentInformationHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVEnvironmentInformationHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnvironmentInformationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnvironmentInformationHelper *op = static_cast<vtkPVEnvironmentInformationHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVEnvironmentInformationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnvironmentInformationHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVEnvironmentInformationHelper *tempr = vtkPVEnvironmentInformationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnvironmentInformationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnvironmentInformationHelper *op = static_cast<vtkPVEnvironmentInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVEnvironmentInformationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVEnvironmentInformationHelper::NewInstance());

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
PyvtkPVEnvironmentInformationHelper_SetVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnvironmentInformationHelper *op = static_cast<vtkPVEnvironmentInformationHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVariable(temp0);
    }
    else
    {
      op->vtkPVEnvironmentInformationHelper::SetVariable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVEnvironmentInformationHelper_GetVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVEnvironmentInformationHelper *op = static_cast<vtkPVEnvironmentInformationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVariable() :
      op->vtkPVEnvironmentInformationHelper::GetVariable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVEnvironmentInformationHelper_Methods[] = {
  {"IsTypeOf", PyvtkPVEnvironmentInformationHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVEnvironmentInformationHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVEnvironmentInformationHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVEnvironmentInformationHelper\nC++: static vtkPVEnvironmentInformationHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVEnvironmentInformationHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVEnvironmentInformationHelper\nC++: vtkPVEnvironmentInformationHelper *NewInstance()\n\n"},
  {"SetVariable", PyvtkPVEnvironmentInformationHelper_SetVariable, METH_VARARGS,
   "V.SetVariable(string)\nC++: virtual void SetVariable(const char *_arg)\n\nGet/Set the environment variable that we want to get the value of\n"},
  {"GetVariable", PyvtkPVEnvironmentInformationHelper_GetVariable, METH_VARARGS,
   "V.GetVariable() -> string\nC++: virtual char *GetVariable()\n\nGet/Set the environment variable that we want to get the value of\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVEnvironmentInformationHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreDefaultPython.vtkPVEnvironmentInformationHelper", // tp_name
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
  PyvtkPVEnvironmentInformationHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVEnvironmentInformationHelper_StaticNew()
{
  return vtkPVEnvironmentInformationHelper::New();
}

PyObject *PyvtkPVEnvironmentInformationHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVEnvironmentInformationHelper_Type, PyvtkPVEnvironmentInformationHelper_Methods,
    "vtkPVEnvironmentInformationHelper",
 &PyvtkPVEnvironmentInformationHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkPVEnvironmentInformationHelper_Type;

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

void PyVTKAddFile_vtkPVEnvironmentInformationHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVEnvironmentInformationHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVEnvironmentInformationHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

