// python wrapper for vtkPVPythonModule
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
#include "vtkPVPythonModule.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVPythonModule(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPythonModule_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVPythonModule_Doc =
  "vtkPVPythonModule - Stores code and option for python modules\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPVPythonModule is a simple class that stores some Python source\n"
  "code that makes up a Python module as well as some state variables\n"
  "about the module (such as its name).\n\n";


static PyObject *
PyvtkPVPythonModule_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVPythonModule::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonModule_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVPythonModule::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonModule_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVPythonModule *tempr = vtkPVPythonModule::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonModule_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVPythonModule *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVPythonModule::NewInstance());

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
PyvtkPVPythonModule_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkPVPythonModule::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonModule_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSource(temp0);
    }
    else
    {
      op->vtkPVPythonModule::SetSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonModule_GetFullName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFullName() :
      op->vtkPVPythonModule::GetFullName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonModule_SetFullName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFullName(temp0);
    }
    else
    {
      op->vtkPVPythonModule::SetFullName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonModule_GetIsPackage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsPackage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIsPackage() :
      op->vtkPVPythonModule::GetIsPackage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonModule_SetIsPackage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsPackage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsPackage(temp0);
    }
    else
    {
      op->vtkPVPythonModule::SetIsPackage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonModule_IsPackageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPackageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IsPackageOn();
    }
    else
    {
      op->vtkPVPythonModule::IsPackageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonModule_IsPackageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPackageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVPythonModule *op = static_cast<vtkPVPythonModule *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IsPackageOff();
    }
    else
    {
      op->vtkPVPythonModule::IsPackageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonModule_RegisterModule(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RegisterModule");

  vtkPVPythonModule *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVPythonModule"))
  {
    vtkPVPythonModule::RegisterModule(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonModule_GetModule(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetModule");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVPythonModule *tempr = vtkPVPythonModule::GetModule(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPythonModule_HasModule(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HasModule");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVPythonModule::HasModule(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVPythonModule_Methods[] = {
  {"IsTypeOf", PyvtkPVPythonModule_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVPythonModule_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVPythonModule_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVPythonModule\nC++: static vtkPVPythonModule *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVPythonModule_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVPythonModule\nC++: vtkPVPythonModule *NewInstance()\n\n"},
  {"GetSource", PyvtkPVPythonModule_GetSource, METH_VARARGS,
   "V.GetSource() -> string\nC++: virtual char *GetSource()\n\nSet/get the full Python source for this module.\n"},
  {"SetSource", PyvtkPVPythonModule_SetSource, METH_VARARGS,
   "V.SetSource(string)\nC++: virtual void SetSource(const char *_arg)\n\nSet/get the full Python source for this module.\n"},
  {"GetFullName", PyvtkPVPythonModule_GetFullName, METH_VARARGS,
   "V.GetFullName() -> string\nC++: virtual char *GetFullName()\n\nSet/get the full name for this module (e.g.\npackage.subpackage.module).\n"},
  {"SetFullName", PyvtkPVPythonModule_SetFullName, METH_VARARGS,
   "V.SetFullName(string)\nC++: virtual void SetFullName(const char *_arg)\n\nSet/get the full name for this module (e.g.\npackage.subpackage.module).\n"},
  {"GetIsPackage", PyvtkPVPythonModule_GetIsPackage, METH_VARARGS,
   "V.GetIsPackage() -> int\nC++: virtual int GetIsPackage()\n\nSet/get a flag indicating whether this module is actually a\npackage (which can have submodules).\n"},
  {"SetIsPackage", PyvtkPVPythonModule_SetIsPackage, METH_VARARGS,
   "V.SetIsPackage(int)\nC++: virtual void SetIsPackage(int _arg)\n\nSet/get a flag indicating whether this module is actually a\npackage (which can have submodules).\n"},
  {"IsPackageOn", PyvtkPVPythonModule_IsPackageOn, METH_VARARGS,
   "V.IsPackageOn()\nC++: virtual void IsPackageOn()\n\nSet/get a flag indicating whether this module is actually a\npackage (which can have submodules).\n"},
  {"IsPackageOff", PyvtkPVPythonModule_IsPackageOff, METH_VARARGS,
   "V.IsPackageOff()\nC++: virtual void IsPackageOff()\n\nSet/get a flag indicating whether this module is actually a\npackage (which can have submodules).\n"},
  {"RegisterModule", PyvtkPVPythonModule_RegisterModule, METH_VARARGS,
   "V.RegisterModule(vtkPVPythonModule)\nC++: static void RegisterModule(vtkPVPythonModule *module)\n\nRegister the Python module.  Once registered, the module can be\nretrieved with GetModule and HaveModule.  Python interpreters can\nquery these global methods in a custom import mechanism.\n"},
  {"GetModule", PyvtkPVPythonModule_GetModule, METH_VARARGS,
   "V.GetModule(string) -> vtkPVPythonModule\nC++: static vtkPVPythonModule *GetModule(const char *fullname)\n\nReturn the registered Python module with the given full module\nname.  If no such module has been registered, this returns NULL.\n"},
  {"HasModule", PyvtkPVPythonModule_HasModule, METH_VARARGS,
   "V.HasModule(string) -> int\nC++: static int HasModule(const char *fullname)\n\nReturns 1 if a Python module with the given full name has been\nregistered, 0 otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVPythonModule_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVPythonModule", // tp_name
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
  PyvtkPVPythonModule_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVPythonModule_StaticNew()
{
  return vtkPVPythonModule::New();
}

PyObject *PyvtkPVPythonModule_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVPythonModule_Type, PyvtkPVPythonModule_Methods,
    "vtkPVPythonModule",
 &PyvtkPVPythonModule_StaticNew);

  PyTypeObject *pytype = &PyvtkPVPythonModule_Type;

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

void PyVTKAddFile_vtkPVPythonModule(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVPythonModule_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPythonModule", o) != 0)
  {
    Py_DECREF(o);
  }

}

