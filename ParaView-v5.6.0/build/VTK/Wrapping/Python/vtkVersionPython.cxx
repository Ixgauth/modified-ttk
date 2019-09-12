// python wrapper for vtkVersion
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkVersion.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVersion(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVersion_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkVersion_Doc =
  "vtkVersion - Versioning class for vtk\n\n"
  "Superclass: vtkObject\n\n"
  "Holds methods for defining/determining the current vtk version\n"
  "(major, minor, build).\n\n"
  "@warning\n"
  "This file will change frequently to update the VTKSourceVersion which\n"
  "timestamps a particular source release.\n\n";


static PyObject *
PyvtkVersion_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVersion::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVersion_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVersion *op = static_cast<vtkVersion *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVersion::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVersion_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVersion *tempr = vtkVersion::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVersion_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVersion *op = static_cast<vtkVersion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVersion *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVersion::NewInstance());

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
PyvtkVersion_GetVTKVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVTKVersion");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkVersion::GetVTKVersion();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVersion_GetVTKMajorVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVTKMajorVersion");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkVersion::GetVTKMajorVersion();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVersion_GetVTKMinorVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVTKMinorVersion");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkVersion::GetVTKMinorVersion();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVersion_GetVTKBuildVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVTKBuildVersion");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkVersion::GetVTKBuildVersion();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVersion_GetVTKSourceVersion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVTKSourceVersion");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkVersion::GetVTKSourceVersion();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVersion_Methods[] = {
  {"IsTypeOf", PyvtkVersion_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVersion_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVersion_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVersion\nC++: static vtkVersion *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVersion_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVersion\nC++: vtkVersion *NewInstance()\n\n"},
  {"GetVTKVersion", PyvtkVersion_GetVTKVersion, METH_VARARGS,
   "V.GetVTKVersion() -> string\nC++: static const char *GetVTKVersion()\n\nReturn the version of vtk this object is a part of. A variety of\nmethods are included. GetVTKSourceVersion returns a string with\nan identifier which timestamps a particular source tree.\n"},
  {"GetVTKMajorVersion", PyvtkVersion_GetVTKMajorVersion, METH_VARARGS,
   "V.GetVTKMajorVersion() -> int\nC++: static int GetVTKMajorVersion()\n\n"},
  {"GetVTKMinorVersion", PyvtkVersion_GetVTKMinorVersion, METH_VARARGS,
   "V.GetVTKMinorVersion() -> int\nC++: static int GetVTKMinorVersion()\n\n"},
  {"GetVTKBuildVersion", PyvtkVersion_GetVTKBuildVersion, METH_VARARGS,
   "V.GetVTKBuildVersion() -> int\nC++: static int GetVTKBuildVersion()\n\n"},
  {"GetVTKSourceVersion", PyvtkVersion_GetVTKSourceVersion, METH_VARARGS,
   "V.GetVTKSourceVersion() -> string\nC++: static const char *GetVTKSourceVersion()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVersion_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkVersion", // tp_name
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
  PyvtkVersion_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVersion_StaticNew()
{
  return vtkVersion::New();
}

PyObject *PyvtkVersion_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVersion_Type, PyvtkVersion_Methods,
    "vtkVersion",
 &PyvtkVersion_StaticNew);

  PyTypeObject *pytype = &PyvtkVersion_Type;

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

void PyVTKAddFile_vtkVersion(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVersion_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVersion", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyString_FromString("vtk version " VTK_VERSION);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_SOURCE_VERSION", o);
    Py_DECREF(o);
  }
}

