// python wrapper for vtkSIProxyProperty
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
#include "vtkSIProxyProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSIProxyProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSIProxyProperty_ClassNew(); }

#ifndef DECLARED_PyvtkSIProperty_ClassNew
extern "C" { PyObject *PyvtkSIProperty_ClassNew(); }
#define DECLARED_PyvtkSIProperty_ClassNew
#endif

static const char *PyvtkSIProxyProperty_Doc =
  "vtkSIProxyProperty - ServerSide Property use to set Object array as\nmethod argument.\n\n"
  "Superclass: vtkSIProperty\n\n"
  "Those object could be either SMProxy instance or their SIProxy\n"
  "instance or the VTK object managed by the SIProxy instance. The type\n"
  "of object is specified inside the XML definition of the property with\n"
  "the attribute argument_type=[VTK, SMProxy, SIProxy].\n\n";


static PyObject *
PyvtkSIProxyProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSIProxyProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyProperty *op = static_cast<vtkSIProxyProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIProxyProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSIProxyProperty *tempr = vtkSIProxyProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyProperty *op = static_cast<vtkSIProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIProxyProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIProxyProperty::NewInstance());

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
PyvtkSIProxyProperty_GetCleanCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCleanCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyProperty *op = static_cast<vtkSIProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCleanCommand() :
      op->vtkSIProxyProperty::GetCleanCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyProperty_GetRemoveCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyProperty *op = static_cast<vtkSIProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetRemoveCommand() :
      op->vtkSIProxyProperty::GetRemoveCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxyProperty_GetNullOnEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullOnEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxyProperty *op = static_cast<vtkSIProxyProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNullOnEmpty() :
      op->vtkSIProxyProperty::GetNullOnEmpty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSIProxyProperty_Methods[] = {
  {"IsTypeOf", PyvtkSIProxyProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSIProxyProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSIProxyProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSIProxyProperty\nC++: static vtkSIProxyProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSIProxyProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSIProxyProperty\nC++: vtkSIProxyProperty *NewInstance()\n\n"},
  {"GetCleanCommand", PyvtkSIProxyProperty_GetCleanCommand, METH_VARARGS,
   "V.GetCleanCommand() -> string\nC++: virtual char *GetCleanCommand()\n\nCommand that can be used to remove inputs. If set, this command\nis called before the main Command is called with all the\narguments.\n"},
  {"GetRemoveCommand", PyvtkSIProxyProperty_GetRemoveCommand, METH_VARARGS,
   "V.GetRemoveCommand() -> string\nC++: virtual char *GetRemoveCommand()\n\nRemove command is the command called to remove the VTK object on\nthe server-side. If set, CleanCommand is ignored. Instead for\nevery proxy that was absent from the proxies previously pushed,\nthe RemoveCommand is invoked.\n"},
  {"GetNullOnEmpty", PyvtkSIProxyProperty_GetNullOnEmpty, METH_VARARGS,
   "V.GetNullOnEmpty() -> bool\nC++: virtual bool GetNullOnEmpty()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSIProxyProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSIProxyProperty", // tp_name
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
  PyvtkSIProxyProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSIProxyProperty_StaticNew()
{
  return vtkSIProxyProperty::New();
}

PyObject *PyvtkSIProxyProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSIProxyProperty_Type, PyvtkSIProxyProperty_Methods,
    "vtkSIProxyProperty",
 &PyvtkSIProxyProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkSIProxyProperty_Type;

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

void PyVTKAddFile_vtkSIProxyProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSIProxyProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSIProxyProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

