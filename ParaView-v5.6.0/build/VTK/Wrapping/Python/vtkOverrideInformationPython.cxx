// python wrapper for vtkOverrideInformation
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
#include "vtkOverrideInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOverrideInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOverrideInformation_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkOverrideInformation_Doc =
  "vtkOverrideInformation - Factory object override information\n\n"
  "Superclass: vtkObject\n\n"
  "vtkOverrideInformation is used to represent the information about a\n"
  "class which is overridden in a vtkObjectFactory.\n\n";


static PyObject *
PyvtkOverrideInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOverrideInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverrideInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOverrideInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverrideInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOverrideInformation *tempr = vtkOverrideInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverrideInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOverrideInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOverrideInformation::NewInstance());

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
PyvtkOverrideInformation_GetClassOverrideName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassOverrideName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetClassOverrideName() :
      op->vtkOverrideInformation::GetClassOverrideName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverrideInformation_GetClassOverrideWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassOverrideWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetClassOverrideWithName() :
      op->vtkOverrideInformation::GetClassOverrideWithName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverrideInformation_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkOverrideInformation::GetDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverrideInformation_GetObjectFactory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectFactory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObjectFactory *tempr = (ap.IsBound() ?
      op->GetObjectFactory() :
      op->vtkOverrideInformation::GetObjectFactory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverrideInformation_SetClassOverrideName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClassOverrideName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClassOverrideName(temp0);
    }
    else
    {
      op->vtkOverrideInformation::SetClassOverrideName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOverrideInformation_SetClassOverrideWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClassOverrideWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClassOverrideWithName(temp0);
    }
    else
    {
      op->vtkOverrideInformation::SetClassOverrideWithName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOverrideInformation_SetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverrideInformation *op = static_cast<vtkOverrideInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDescription(temp0);
    }
    else
    {
      op->vtkOverrideInformation::SetDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOverrideInformation_Methods[] = {
  {"IsTypeOf", PyvtkOverrideInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOverrideInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOverrideInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOverrideInformation\nC++: static vtkOverrideInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOverrideInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOverrideInformation\nC++: vtkOverrideInformation *NewInstance()\n\n"},
  {"GetClassOverrideName", PyvtkOverrideInformation_GetClassOverrideName, METH_VARARGS,
   "V.GetClassOverrideName() -> string\nC++: const char *GetClassOverrideName()\n\nReturns the name of the class being overridden.  For example, if\nyou had a factory that provided an override for vtkVertex, then\nthis function would return \"vtkVertex\"\n"},
  {"GetClassOverrideWithName", PyvtkOverrideInformation_GetClassOverrideWithName, METH_VARARGS,
   "V.GetClassOverrideWithName() -> string\nC++: const char *GetClassOverrideWithName()\n\nReturns the name of the class that will override the class. For\nexample, if you had a factory that provided an override for\nvtkVertex called vtkMyVertex, then this would return\n\"vtkMyVertex\"\n"},
  {"GetDescription", PyvtkOverrideInformation_GetDescription, METH_VARARGS,
   "V.GetDescription() -> string\nC++: const char *GetDescription()\n\nReturn a human readable or GUI displayable description of this\noverride.\n"},
  {"GetObjectFactory", PyvtkOverrideInformation_GetObjectFactory, METH_VARARGS,
   "V.GetObjectFactory() -> vtkObjectFactory\nC++: vtkObjectFactory *GetObjectFactory()\n\nReturn the specific object factory that this override occurs in.\n"},
  {"SetClassOverrideName", PyvtkOverrideInformation_SetClassOverrideName, METH_VARARGS,
   "V.SetClassOverrideName(string)\nC++: virtual void SetClassOverrideName(const char *_arg)\n\nSet the class override name\n"},
  {"SetClassOverrideWithName", PyvtkOverrideInformation_SetClassOverrideWithName, METH_VARARGS,
   "V.SetClassOverrideWithName(string)\nC++: virtual void SetClassOverrideWithName(const char *_arg)\n\nSet the class override with name\n"},
  {"SetDescription", PyvtkOverrideInformation_SetDescription, METH_VARARGS,
   "V.SetDescription(string)\nC++: virtual void SetDescription(const char *_arg)\n\nSet the description\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOverrideInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkOverrideInformation", // tp_name
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
  PyvtkOverrideInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOverrideInformation_StaticNew()
{
  return vtkOverrideInformation::New();
}

PyObject *PyvtkOverrideInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOverrideInformation_Type, PyvtkOverrideInformation_Methods,
    "vtkOverrideInformation",
 &PyvtkOverrideInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkOverrideInformation_Type;

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

void PyVTKAddFile_vtkOverrideInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOverrideInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOverrideInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

