// python wrapper for vtkClientServerInterpreterInitializer
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
#include "vtkClientServerInterpreterInitializer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClientServerInterpreterInitializer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkClientServerInterpreterInitializer_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkClientServerInterpreterInitializer_Doc =
  "vtkClientServerInterpreterInitializer -\nvtkClientServerInterpreterInitializer initializes and maintains the\nglobal vtkClientServerInterpreter instance for the processes.\n\n"
  "Superclass: vtkObject\n\n"
  "Use RegisterCallback() to register initialization routines for the\n"
  "interpreter. Use GetInterpreter() to access the interpreter.\n\n"
  "This class was originally designed to support and maintain multiple\n"
  "interpreter instances. However ParaView no longer has need for that\n"
  "and hence that functionality is no longer made public.\n\n";


static PyObject *
PyvtkClientServerInterpreterInitializer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClientServerInterpreterInitializer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreterInitializer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreterInitializer *op = static_cast<vtkClientServerInterpreterInitializer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClientServerInterpreterInitializer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreterInitializer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClientServerInterpreterInitializer *tempr = vtkClientServerInterpreterInitializer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreterInitializer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreterInitializer *op = static_cast<vtkClientServerInterpreterInitializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClientServerInterpreterInitializer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClientServerInterpreterInitializer::NewInstance());

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
PyvtkClientServerInterpreterInitializer_NewInterpreter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInterpreter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerInterpreterInitializer *op = static_cast<vtkClientServerInterpreterInitializer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClientServerInterpreter *tempr = (ap.IsBound() ?
      op->NewInterpreter() :
      op->vtkClientServerInterpreterInitializer::NewInterpreter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreterInitializer_GetGlobalInterpreter(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalInterpreter");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkClientServerInterpreter *tempr = vtkClientServerInterpreterInitializer::GetGlobalInterpreter();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClientServerInterpreterInitializer_GetInitializer(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInitializer");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkClientServerInterpreterInitializer *tempr = vtkClientServerInterpreterInitializer::GetInitializer();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkClientServerInterpreterInitializer_Methods[] = {
  {"IsTypeOf", PyvtkClientServerInterpreterInitializer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkClientServerInterpreterInitializer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkClientServerInterpreterInitializer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkClientServerInterpreterInitializer\nC++: static vtkClientServerInterpreterInitializer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkClientServerInterpreterInitializer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkClientServerInterpreterInitializer\nC++: vtkClientServerInterpreterInitializer *NewInstance()\n\n"},
  {"NewInterpreter", PyvtkClientServerInterpreterInitializer_NewInterpreter, METH_VARARGS,
   "V.NewInterpreter() -> vtkClientServerInterpreter\nC++: vtkClientServerInterpreter *NewInterpreter()\n\nCreates (and registers) a new interpreter.\n"},
  {"GetGlobalInterpreter", PyvtkClientServerInterpreterInitializer_GetGlobalInterpreter, METH_VARARGS,
   "V.GetGlobalInterpreter() -> vtkClientServerInterpreter\nC++: static vtkClientServerInterpreter *GetGlobalInterpreter()\n\nGet the interpreter for this process. Initializing a new\ninterpreter is expensive. So filters that need to use interpreter\ntemporarily to call methods on a vtkObject can simply use the\nglobal interpreter. As a rule, if you need to assign ID's to objects, then\nyou're probably better off creating a new interpreter using\nNewInterpreter() and using it rather than the global interpreter.\n"},
  {"GetInitializer", PyvtkClientServerInterpreterInitializer_GetInitializer, METH_VARARGS,
   "V.GetInitializer() -> vtkClientServerInterpreterInitializer\nC++: static vtkClientServerInterpreterInitializer *GetInitializer(\n    )\n\nProvides access to the singleton. This will instantiate\nvtkClientServerInterpreterInitializer the first time it is\ncalled.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkClientServerInterpreterInitializer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCommonPython.vtkClientServerInterpreterInitializer", // tp_name
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
  PyvtkClientServerInterpreterInitializer_Doc, // tp_doc
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

PyObject *PyvtkClientServerInterpreterInitializer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkClientServerInterpreterInitializer_Type, PyvtkClientServerInterpreterInitializer_Methods,
    "vtkClientServerInterpreterInitializer",
 nullptr);

  PyTypeObject *pytype = &PyvtkClientServerInterpreterInitializer_Type;

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

void PyVTKAddFile_vtkClientServerInterpreterInitializer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClientServerInterpreterInitializer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClientServerInterpreterInitializer", o) != 0)
  {
    Py_DECREF(o);
  }

}

