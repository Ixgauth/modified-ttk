// python wrapper for vtkDomainsChemistryOpenGL2ObjectFactory
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
#include "vtkDomainsChemistryOpenGL2ObjectFactory.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDomainsChemistryOpenGL2ObjectFactory(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDomainsChemistryOpenGL2ObjectFactory_ClassNew(); }

#ifndef DECLARED_PyvtkObjectFactory_ClassNew
extern "C" { PyObject *PyvtkObjectFactory_ClassNew(); }
#define DECLARED_PyvtkObjectFactory_ClassNew
#endif

static const char *PyvtkDomainsChemistryOpenGL2ObjectFactory_Doc =
  "vtkDomainsChemistryOpenGL2ObjectFactory - no description provided.\n\n"
  "Superclass: vtkObjectFactory\n\n"
;


static PyObject *
PyvtkDomainsChemistryOpenGL2ObjectFactory_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDomainsChemistryOpenGL2ObjectFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDomainsChemistryOpenGL2ObjectFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDomainsChemistryOpenGL2ObjectFactory *op = static_cast<vtkDomainsChemistryOpenGL2ObjectFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDomainsChemistryOpenGL2ObjectFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDomainsChemistryOpenGL2ObjectFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDomainsChemistryOpenGL2ObjectFactory *tempr = vtkDomainsChemistryOpenGL2ObjectFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDomainsChemistryOpenGL2ObjectFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDomainsChemistryOpenGL2ObjectFactory *op = static_cast<vtkDomainsChemistryOpenGL2ObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDomainsChemistryOpenGL2ObjectFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDomainsChemistryOpenGL2ObjectFactory::NewInstance());

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
PyvtkDomainsChemistryOpenGL2ObjectFactory_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDomainsChemistryOpenGL2ObjectFactory *op = static_cast<vtkDomainsChemistryOpenGL2ObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkDomainsChemistryOpenGL2ObjectFactory::GetDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDomainsChemistryOpenGL2ObjectFactory_GetVTKSourceVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKSourceVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDomainsChemistryOpenGL2ObjectFactory *op = static_cast<vtkDomainsChemistryOpenGL2ObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVTKSourceVersion() :
      op->vtkDomainsChemistryOpenGL2ObjectFactory::GetVTKSourceVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDomainsChemistryOpenGL2ObjectFactory_Methods[] = {
  {"IsTypeOf", PyvtkDomainsChemistryOpenGL2ObjectFactory_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDomainsChemistryOpenGL2ObjectFactory_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDomainsChemistryOpenGL2ObjectFactory_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkDomainsChemistryOpenGL2ObjectFactory\nC++: static vtkDomainsChemistryOpenGL2ObjectFactory *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDomainsChemistryOpenGL2ObjectFactory_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDomainsChemistryOpenGL2ObjectFactory\nC++: vtkDomainsChemistryOpenGL2ObjectFactory *NewInstance()\n\n"},
  {"GetDescription", PyvtkDomainsChemistryOpenGL2ObjectFactory_GetDescription, METH_VARARGS,
   "V.GetDescription() -> string\nC++: const char *GetDescription() override;\n\nReturn a descriptive string describing the factory.\n"},
  {"GetVTKSourceVersion", PyvtkDomainsChemistryOpenGL2ObjectFactory_GetVTKSourceVersion, METH_VARARGS,
   "V.GetVTKSourceVersion() -> string\nC++: const char *GetVTKSourceVersion() override;\n\nAll sub-classes of vtkObjectFactory should must return the\nversion of VTK they were built with.  This should be implemented\nwith the macro VTK_SOURCE_VERSION and NOT a call to\nvtkVersion::GetVTKSourceVersion. As the version needs to be\ncompiled into the file as a string constant. This is critical to\ndetermine possible incompatible dynamic factory loads.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDomainsChemistryOpenGL2ObjectFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkDomainsChemistryOpenGL2Python.vtkDomainsChemistryOpenGL2ObjectFactory", // tp_name
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
  PyvtkDomainsChemistryOpenGL2ObjectFactory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDomainsChemistryOpenGL2ObjectFactory_StaticNew()
{
  return vtkDomainsChemistryOpenGL2ObjectFactory::New();
}

PyObject *PyvtkDomainsChemistryOpenGL2ObjectFactory_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDomainsChemistryOpenGL2ObjectFactory_Type, PyvtkDomainsChemistryOpenGL2ObjectFactory_Methods,
    "vtkDomainsChemistryOpenGL2ObjectFactory",
 &PyvtkDomainsChemistryOpenGL2ObjectFactory_StaticNew);

  PyTypeObject *pytype = &PyvtkDomainsChemistryOpenGL2ObjectFactory_Type;

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

void PyVTKAddFile_vtkDomainsChemistryOpenGL2ObjectFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDomainsChemistryOpenGL2ObjectFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDomainsChemistryOpenGL2ObjectFactory", o) != 0)
  {
    Py_DECREF(o);
  }

}

