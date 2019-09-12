// python wrapper for vtkPythonInteractiveInterpreter
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
#include "vtkPythonInteractiveInterpreter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPythonInteractiveInterpreter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPythonInteractiveInterpreter_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPythonInteractiveInterpreter_Doc =
  "vtkPythonInteractiveInterpreter - interpreter for interactive shells.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPythonInteractiveInterpreter provides an interpreter that can be\n"
  "used in interactive shells. It mimics the behaviour of the\n"
  "interactive console (much like the default Python shell) providing\n"
  "the \"read-eval-print\" loops. It also handles incomplete statements\n"
  "correctly. It uses \"code\" module provided by Python standard library\n"
  "to achieve this. It uses vtkPythonInterpreter to ensure that the\n"
  "global Python environment is setup correctly. Note that any time the\n"
  "vtkPythonInterpreter::Finalize() is called, the interactive\n"
  "interpreter will be destroyed as well. Subsequent calls to\n"
  "vtkPythonInterpreter::Push() will reinitialize Python as start a new\n"
  "interactive interpreter shell.\n\n"
  "This class also observers and forwards all events invoked by a\n"
  "vtkPythonInterpreter instance include vtkCommand::EnterEvent,\n"
  "vtkCommand::ExitEvent, vtkCommand::UpdateEvent,\n"
  "vtkCommand::ErrorEvent and vtkCommand::SetOutputEvent.\n\n";


static PyObject *
PyvtkPythonInteractiveInterpreter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPythonInteractiveInterpreter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonInteractiveInterpreter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInteractiveInterpreter *op = static_cast<vtkPythonInteractiveInterpreter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPythonInteractiveInterpreter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonInteractiveInterpreter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPythonInteractiveInterpreter *tempr = vtkPythonInteractiveInterpreter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonInteractiveInterpreter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInteractiveInterpreter *op = static_cast<vtkPythonInteractiveInterpreter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPythonInteractiveInterpreter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPythonInteractiveInterpreter::NewInstance());

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
PyvtkPythonInteractiveInterpreter_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInteractiveInterpreter *op = static_cast<vtkPythonInteractiveInterpreter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkPythonInteractiveInterpreter::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPythonInteractiveInterpreter_RunStringWithConsoleLocals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RunStringWithConsoleLocals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInteractiveInterpreter *op = static_cast<vtkPythonInteractiveInterpreter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RunStringWithConsoleLocals(temp0) :
      op->vtkPythonInteractiveInterpreter::RunStringWithConsoleLocals(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonInteractiveInterpreter_GetInteractiveConsolePyObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveConsolePyObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInteractiveInterpreter *op = static_cast<vtkPythonInteractiveInterpreter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetInteractiveConsolePyObject() :
      op->vtkPythonInteractiveInterpreter::GetInteractiveConsolePyObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPythonInteractiveInterpreter_GetInteractiveConsoleLocalsPyObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveConsoleLocalsPyObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPythonInteractiveInterpreter *op = static_cast<vtkPythonInteractiveInterpreter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetInteractiveConsoleLocalsPyObject() :
      op->vtkPythonInteractiveInterpreter::GetInteractiveConsoleLocalsPyObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPythonInteractiveInterpreter_Methods[] = {
  {"IsTypeOf", PyvtkPythonInteractiveInterpreter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPythonInteractiveInterpreter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPythonInteractiveInterpreter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPythonInteractiveInterpreter\nC++: static vtkPythonInteractiveInterpreter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPythonInteractiveInterpreter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPythonInteractiveInterpreter\nC++: vtkPythonInteractiveInterpreter *NewInstance()\n\n"},
  {"Reset", PyvtkPythonInteractiveInterpreter_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nThis destroys the internal code.InteractiveConsole instance.\nHence, next time Push() will be called, it will use a brand new\ninstance of code.InteractiveConsole().\n"},
  {"RunStringWithConsoleLocals", PyvtkPythonInteractiveInterpreter_RunStringWithConsoleLocals, METH_VARARGS,
   "V.RunStringWithConsoleLocals(string) -> int\nC++: int RunStringWithConsoleLocals(const char *script)\n\nExecutes the given python source code using the context given by\nthe locals() object used by this interactive console.  This is\nsimilar to using vtkPythonInterpreter::RunSimpleString(), except\nthat method will execute code in the context of the __main__\nmodule. Returns 0 on success or -1 if an exception was raised.\n"},
  {"GetInteractiveConsolePyObject", PyvtkPythonInteractiveInterpreter_GetInteractiveConsolePyObject, METH_VARARGS,
   "V.GetInteractiveConsolePyObject() -> void\nC++: void *GetInteractiveConsolePyObject()\n\nProvides access to the internal PyObject instances used for the\ncode.InteractiveConsole() as well as the dictionary for the\nlocals of the code.InteractiveConsole() instance. Do not use if\nyou are not sure what these are for.\n"},
  {"GetInteractiveConsoleLocalsPyObject", PyvtkPythonInteractiveInterpreter_GetInteractiveConsoleLocalsPyObject, METH_VARARGS,
   "V.GetInteractiveConsoleLocalsPyObject() -> void\nC++: void *GetInteractiveConsoleLocalsPyObject()\n\nProvides access to the internal PyObject instances used for the\ncode.InteractiveConsole() as well as the dictionary for the\nlocals of the code.InteractiveConsole() instance. Do not use if\nyou are not sure what these are for.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPythonInteractiveInterpreter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPythonInterpreterPython.vtkPythonInteractiveInterpreter", // tp_name
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
  PyvtkPythonInteractiveInterpreter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPythonInteractiveInterpreter_StaticNew()
{
  return vtkPythonInteractiveInterpreter::New();
}

PyObject *PyvtkPythonInteractiveInterpreter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPythonInteractiveInterpreter_Type, PyvtkPythonInteractiveInterpreter_Methods,
    "vtkPythonInteractiveInterpreter",
 &PyvtkPythonInteractiveInterpreter_StaticNew);

  PyTypeObject *pytype = &PyvtkPythonInteractiveInterpreter_Type;

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

void PyVTKAddFile_vtkPythonInteractiveInterpreter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPythonInteractiveInterpreter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPythonInteractiveInterpreter", o) != 0)
  {
    Py_DECREF(o);
  }

}

