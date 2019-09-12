// python wrapper for vtkIOParallelExodusObjectFactory
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
#include "vtkIOParallelExodusObjectFactory.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIOParallelExodusObjectFactory(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkIOParallelExodusObjectFactory_ClassNew(); }

#ifndef DECLARED_PyvtkObjectFactory_ClassNew
extern "C" { PyObject *PyvtkObjectFactory_ClassNew(); }
#define DECLARED_PyvtkObjectFactory_ClassNew
#endif

static const char *PyvtkIOParallelExodusObjectFactory_Doc =
  "vtkIOParallelExodusObjectFactory - no description provided.\n\n"
  "Superclass: vtkObjectFactory\n\n"
;


static PyObject *
PyvtkIOParallelExodusObjectFactory_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIOParallelExodusObjectFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOParallelExodusObjectFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOParallelExodusObjectFactory *op = static_cast<vtkIOParallelExodusObjectFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIOParallelExodusObjectFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOParallelExodusObjectFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIOParallelExodusObjectFactory *tempr = vtkIOParallelExodusObjectFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOParallelExodusObjectFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOParallelExodusObjectFactory *op = static_cast<vtkIOParallelExodusObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIOParallelExodusObjectFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIOParallelExodusObjectFactory::NewInstance());

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
PyvtkIOParallelExodusObjectFactory_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOParallelExodusObjectFactory *op = static_cast<vtkIOParallelExodusObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkIOParallelExodusObjectFactory::GetDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOParallelExodusObjectFactory_GetVTKSourceVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKSourceVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOParallelExodusObjectFactory *op = static_cast<vtkIOParallelExodusObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVTKSourceVersion() :
      op->vtkIOParallelExodusObjectFactory::GetVTKSourceVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIOParallelExodusObjectFactory_Methods[] = {
  {"IsTypeOf", PyvtkIOParallelExodusObjectFactory_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIOParallelExodusObjectFactory_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIOParallelExodusObjectFactory_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkIOParallelExodusObjectFactory\nC++: static vtkIOParallelExodusObjectFactory *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIOParallelExodusObjectFactory_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkIOParallelExodusObjectFactory\nC++: vtkIOParallelExodusObjectFactory *NewInstance()\n\n"},
  {"GetDescription", PyvtkIOParallelExodusObjectFactory_GetDescription, METH_VARARGS,
   "V.GetDescription() -> string\nC++: const char *GetDescription() override;\n\nReturn a descriptive string describing the factory.\n"},
  {"GetVTKSourceVersion", PyvtkIOParallelExodusObjectFactory_GetVTKSourceVersion, METH_VARARGS,
   "V.GetVTKSourceVersion() -> string\nC++: const char *GetVTKSourceVersion() override;\n\nAll sub-classes of vtkObjectFactory should must return the\nversion of VTK they were built with.  This should be implemented\nwith the macro VTK_SOURCE_VERSION and NOT a call to\nvtkVersion::GetVTKSourceVersion. As the version needs to be\ncompiled into the file as a string constant. This is critical to\ndetermine possible incompatible dynamic factory loads.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkIOParallelExodusObjectFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOParallelExodusPython.vtkIOParallelExodusObjectFactory", // tp_name
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
  PyvtkIOParallelExodusObjectFactory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIOParallelExodusObjectFactory_StaticNew()
{
  return vtkIOParallelExodusObjectFactory::New();
}

PyObject *PyvtkIOParallelExodusObjectFactory_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkIOParallelExodusObjectFactory_Type, PyvtkIOParallelExodusObjectFactory_Methods,
    "vtkIOParallelExodusObjectFactory",
 &PyvtkIOParallelExodusObjectFactory_StaticNew);

  PyTypeObject *pytype = &PyvtkIOParallelExodusObjectFactory_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObjectFactory_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIOParallelExodusObjectFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIOParallelExodusObjectFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIOParallelExodusObjectFactory", o) != 0)
  {
    Py_DECREF(o);
  }

}

