// python wrapper for vtkDynamicLoader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDynamicLoader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDynamicLoader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDynamicLoader_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkDynamicLoader_Doc =
  "vtkDynamicLoader - class interface to system dynamic libraries\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDynamicLoader provides a portable interface to loading dynamic\n"
  "libraries into a process.\n"
  "@sa\n"
  "A more portable and lightweight solution is kwsys::DynamicLoader\n\n";


static PyObject *
PyvtkDynamicLoader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDynamicLoader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamicLoader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamicLoader *op = static_cast<vtkDynamicLoader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDynamicLoader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamicLoader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDynamicLoader *tempr = vtkDynamicLoader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamicLoader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamicLoader *op = static_cast<vtkDynamicLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDynamicLoader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDynamicLoader::NewInstance());

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
PyvtkDynamicLoader_LibPrefix(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LibPrefix");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkDynamicLoader::LibPrefix();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamicLoader_LibExtension(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LibExtension");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkDynamicLoader::LibExtension();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamicLoader_LastError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LastError");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkDynamicLoader::LastError();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDynamicLoader_Methods[] = {
  {"IsTypeOf", PyvtkDynamicLoader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDynamicLoader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDynamicLoader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDynamicLoader\nC++: static vtkDynamicLoader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDynamicLoader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDynamicLoader\nC++: vtkDynamicLoader *NewInstance()\n\n"},
  {"LibPrefix", PyvtkDynamicLoader_LibPrefix, METH_VARARGS,
   "V.LibPrefix() -> string\nC++: static const char *LibPrefix()\n\nReturn the library prefix for the given architecture\n"},
  {"LibExtension", PyvtkDynamicLoader_LibExtension, METH_VARARGS,
   "V.LibExtension() -> string\nC++: static const char *LibExtension()\n\nReturn the library extension for the given architecture\n"},
  {"LastError", PyvtkDynamicLoader_LastError, METH_VARARGS,
   "V.LastError() -> string\nC++: static const char *LastError()\n\nReturn the last error produced from a calls made on this class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDynamicLoader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDynamicLoader", // tp_name
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
  PyvtkDynamicLoader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDynamicLoader_StaticNew()
{
  return vtkDynamicLoader::New();
}

PyObject *PyvtkDynamicLoader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDynamicLoader_Type, PyvtkDynamicLoader_Methods,
    "vtkDynamicLoader",
 &PyvtkDynamicLoader_StaticNew);

  PyTypeObject *pytype = &PyvtkDynamicLoader_Type;

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

void PyVTKAddFile_vtkDynamicLoader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDynamicLoader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDynamicLoader", o) != 0)
  {
    Py_DECREF(o);
  }

}

