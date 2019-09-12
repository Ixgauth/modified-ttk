// python wrapper for vtkRenderingFreeTypeObjectFactory
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
#include "vtkRenderingFreeTypeObjectFactory.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderingFreeTypeObjectFactory(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRenderingFreeTypeObjectFactory_ClassNew(); }

#ifndef DECLARED_PyvtkObjectFactory_ClassNew
extern "C" { PyObject *PyvtkObjectFactory_ClassNew(); }
#define DECLARED_PyvtkObjectFactory_ClassNew
#endif

static const char *PyvtkRenderingFreeTypeObjectFactory_Doc =
  "vtkRenderingFreeTypeObjectFactory - no description provided.\n\n"
  "Superclass: vtkObjectFactory\n\n"
;


static PyObject *
PyvtkRenderingFreeTypeObjectFactory_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderingFreeTypeObjectFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderingFreeTypeObjectFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderingFreeTypeObjectFactory *op = static_cast<vtkRenderingFreeTypeObjectFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderingFreeTypeObjectFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderingFreeTypeObjectFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderingFreeTypeObjectFactory *tempr = vtkRenderingFreeTypeObjectFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderingFreeTypeObjectFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderingFreeTypeObjectFactory *op = static_cast<vtkRenderingFreeTypeObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderingFreeTypeObjectFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderingFreeTypeObjectFactory::NewInstance());

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
PyvtkRenderingFreeTypeObjectFactory_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderingFreeTypeObjectFactory *op = static_cast<vtkRenderingFreeTypeObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkRenderingFreeTypeObjectFactory::GetDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderingFreeTypeObjectFactory_GetVTKSourceVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKSourceVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderingFreeTypeObjectFactory *op = static_cast<vtkRenderingFreeTypeObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVTKSourceVersion() :
      op->vtkRenderingFreeTypeObjectFactory::GetVTKSourceVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderingFreeTypeObjectFactory_Methods[] = {
  {"IsTypeOf", PyvtkRenderingFreeTypeObjectFactory_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderingFreeTypeObjectFactory_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderingFreeTypeObjectFactory_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRenderingFreeTypeObjectFactory\nC++: static vtkRenderingFreeTypeObjectFactory *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderingFreeTypeObjectFactory_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRenderingFreeTypeObjectFactory\nC++: vtkRenderingFreeTypeObjectFactory *NewInstance()\n\n"},
  {"GetDescription", PyvtkRenderingFreeTypeObjectFactory_GetDescription, METH_VARARGS,
   "V.GetDescription() -> string\nC++: const char *GetDescription() override;\n\nReturn a descriptive string describing the factory.\n"},
  {"GetVTKSourceVersion", PyvtkRenderingFreeTypeObjectFactory_GetVTKSourceVersion, METH_VARARGS,
   "V.GetVTKSourceVersion() -> string\nC++: const char *GetVTKSourceVersion() override;\n\nAll sub-classes of vtkObjectFactory should must return the\nversion of VTK they were built with.  This should be implemented\nwith the macro VTK_SOURCE_VERSION and NOT a call to\nvtkVersion::GetVTKSourceVersion. As the version needs to be\ncompiled into the file as a string constant. This is critical to\ndetermine possible incompatible dynamic factory loads.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRenderingFreeTypeObjectFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingFreeTypePython.vtkRenderingFreeTypeObjectFactory", // tp_name
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
  PyvtkRenderingFreeTypeObjectFactory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderingFreeTypeObjectFactory_StaticNew()
{
  return vtkRenderingFreeTypeObjectFactory::New();
}

PyObject *PyvtkRenderingFreeTypeObjectFactory_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRenderingFreeTypeObjectFactory_Type, PyvtkRenderingFreeTypeObjectFactory_Methods,
    "vtkRenderingFreeTypeObjectFactory",
 &PyvtkRenderingFreeTypeObjectFactory_StaticNew);

  PyTypeObject *pytype = &PyvtkRenderingFreeTypeObjectFactory_Type;

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

void PyVTKAddFile_vtkRenderingFreeTypeObjectFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderingFreeTypeObjectFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderingFreeTypeObjectFactory", o) != 0)
  {
    Py_DECREF(o);
  }

}

