// python wrapper for vtkDebugLeaks
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDebugLeaks.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDebugLeaks(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDebugLeaks_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkDebugLeaks_Doc =
  "vtkDebugLeaks - identify memory leaks at program termination\nvtkDebugLeaks is used to report memory leaks at the exit of the\nprogram.\n\n"
  "Superclass: vtkObject\n\n"
  "It uses vtkObjectBase::InitializeObjectBase() (called via\n"
  "vtkObjectFactory macros) to intercept the construction of all VTK\n"
  "objects. It uses the UnRegisterInternal method of vtkObjectBase to\n"
  "intercept the destruction of all objects.\n\n"
  "If not using the vtkObjectFactory macros to implement New(), be sure\n"
  "to call vtkObjectBase::InitializeObjectBase() explicitly on the\n"
  "constructed instance. The rule of thumb is that wherever \"new [some\n"
  "vtkObjectBase subclass]\" is called,\n"
  "vtkObjectBase::InitializeObjectBase() must be called as well.\n\n"
  "There are exceptions to this:\n\n"
  "- vtkCommand subclasses traditionally do not fully participate in\n"
  "  vtkDebugLeaks registration, likely because they typically do not\n"
  "  use vtkTypeMacro to configure GetClassName. InitializeObjectBase\n"
  "  should not be called on vtkCommand subclasses, and all such classes\n"
  "will be automatically registered with vtkDebugLeaks as \"vtkCommand or\n"
  "  subclass\".\n\n"
  "- vtkInformationKey subclasses are not reference counted. They are\n"
  "  allocated statically and registered automatically with a singleton\n"
  "  \"manager\" instance. The manager ensures that all keys are cleaned\n"
  "  up before exiting, and registration/deregistration with\n"
  "  vtkDebugLeaks is bypassed.\n\n"
  "A table of object name to number of instances is kept. At the exit of\n"
  "the program if there are still VTK objects around it will print them\n"
  "out. To enable this class add the flag -DVTK_DEBUG_LEAKS to the\n"
  "compile line, and rebuild vtkObject and vtkObjectFactory.\n\n";


static PyObject *
PyvtkDebugLeaks_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDebugLeaks::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDebugLeaks *op = static_cast<vtkDebugLeaks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDebugLeaks::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDebugLeaks *tempr = vtkDebugLeaks::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDebugLeaks *op = static_cast<vtkDebugLeaks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDebugLeaks *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDebugLeaks::NewInstance());

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
PyvtkDebugLeaks_ConstructClass(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ConstructClass");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDebugLeaks::ConstructClass(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_DestructClass(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DestructClass");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDebugLeaks::DestructClass(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_PrintCurrentLeaks(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PrintCurrentLeaks");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkDebugLeaks::PrintCurrentLeaks();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_GetExitError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetExitError");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkDebugLeaks::GetExitError();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_SetExitError(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetExitError");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDebugLeaks::SetExitError(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDebugLeaks_Methods[] = {
  {"IsTypeOf", PyvtkDebugLeaks_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDebugLeaks_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDebugLeaks_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDebugLeaks\nC++: static vtkDebugLeaks *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDebugLeaks_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDebugLeaks\nC++: vtkDebugLeaks *NewInstance()\n\n"},
  {"ConstructClass", PyvtkDebugLeaks_ConstructClass, METH_VARARGS,
   "V.ConstructClass(string)\nC++: static void ConstructClass(const char *classname)\n\nCall this when creating a class of a given name.\n"},
  {"DestructClass", PyvtkDebugLeaks_DestructClass, METH_VARARGS,
   "V.DestructClass(string)\nC++: static void DestructClass(const char *classname)\n\nCall this when deleting a class of a given name.\n"},
  {"PrintCurrentLeaks", PyvtkDebugLeaks_PrintCurrentLeaks, METH_VARARGS,
   "V.PrintCurrentLeaks() -> int\nC++: static int PrintCurrentLeaks()\n\nPrint all the values in the table.  Returns non-zero if there\nwere leaks.\n"},
  {"GetExitError", PyvtkDebugLeaks_GetExitError, METH_VARARGS,
   "V.GetExitError() -> int\nC++: static int GetExitError()\n\nGet/Set flag for exiting with an error when leaks are present.\nDefault is on when VTK_DEBUG_LEAKS is on and off otherwise.\n"},
  {"SetExitError", PyvtkDebugLeaks_SetExitError, METH_VARARGS,
   "V.SetExitError(int)\nC++: static void SetExitError(int)\n\nGet/Set flag for exiting with an error when leaks are present.\nDefault is on when VTK_DEBUG_LEAKS is on and off otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDebugLeaks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDebugLeaks", // tp_name
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
  PyvtkDebugLeaks_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDebugLeaks_StaticNew()
{
  return vtkDebugLeaks::New();
}

PyObject *PyvtkDebugLeaks_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDebugLeaks_Type, PyvtkDebugLeaks_Methods,
    "vtkDebugLeaks",
 &PyvtkDebugLeaks_StaticNew);

  PyTypeObject *pytype = &PyvtkDebugLeaks_Type;

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


static const char *PyvtkDebugLeaksObserver_Doc =
  "vtkDebugLeaksObserver - no description provided.\n\n"
;


static PyObject *
PyvtkDebugLeaksObserver_ConstructingObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructingObject");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDebugLeaksObserver *op = static_cast<vtkDebugLeaksObserver *>(vp);

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    op->ConstructingObject(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaksObserver_DestructingObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DestructingObject");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDebugLeaksObserver *op = static_cast<vtkDebugLeaksObserver *>(vp);

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    op->DestructingObject(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDebugLeaksObserver_Methods[] = {
  {"ConstructingObject", PyvtkDebugLeaksObserver_ConstructingObject, METH_VARARGS,
   "V.ConstructingObject(vtkObjectBase)\nC++: virtual void ConstructingObject(vtkObjectBase *)\n\n"},
  {"DestructingObject", PyvtkDebugLeaksObserver_DestructingObject, METH_VARARGS,
   "V.DestructingObject(vtkObjectBase)\nC++: virtual void DestructingObject(vtkObjectBase *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDebugLeaksObserver_New(PyTypeObject *, PyObject *, PyObject *)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkDebugLeaksObserver_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDebugLeaksObserver *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDebugLeaksObserver_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkDebugLeaksObserver_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDebugLeaksObserver", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDebugLeaksObserver_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkDebugLeaksObserver_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDebugLeaksObserver_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkDebugLeaksObserver_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDebugLeaksObserver_TypeNew(); }

PyObject *PyvtkDebugLeaksObserver_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkDebugLeaksObserver_Type,
    PyvtkDebugLeaksObserver_Methods,
    nullptr,
    nullptr);

  PyTypeObject *pytype = &PyvtkDebugLeaksObserver_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDebugLeaks(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDebugLeaks_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDebugLeaks", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDebugLeaksObserver_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDebugLeaksObserver", o) != 0)
  {
    Py_DECREF(o);
  }

}

