// python wrapper for vtkCommandOptions
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
#include "vtkCommandOptions.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCommandOptions(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCommandOptions_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCommandOptions_Doc =
  "vtkCommandOptions - ParaView options storage\n\n"
  "Superclass: vtkObject\n\n"
  "An object of this class represents a storage for ParaView options\n\n"
  "These options can be retrieved during run-time, set using\n"
  "configuration file or using Command Line Arguments.\n\n";


static PyObject *
PyvtkCommandOptions_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCommandOptions::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptions_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCommandOptions::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptions_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCommandOptions *tempr = vtkCommandOptions::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptions_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommandOptions *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCommandOptions::NewInstance());

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
PyvtkCommandOptions_GetHelp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHelp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetHelp() :
      op->vtkCommandOptions::GetHelp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetHelpSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHelpSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHelpSelected() :
      op->vtkCommandOptions::GetHelpSelected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptions_SetHelpSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHelpSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHelpSelected(temp0);
    }
    else
    {
      op->vtkCommandOptions::SetHelpSelected(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessType() :
      op->vtkCommandOptions::GetProcessType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptions_SetProcessType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessType(temp0);
    }
    else
    {
      op->vtkCommandOptions::SetProcessType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetUnknownArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnknownArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetUnknownArgument() :
      op->vtkCommandOptions::GetUnknownArgument());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetErrorMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetErrorMessage() :
      op->vtkCommandOptions::GetErrorMessage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetArgv0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArgv0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArgv0() :
      op->vtkCommandOptions::GetArgv0());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetApplicationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetApplicationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetApplicationPath() :
      op->vtkCommandOptions::GetApplicationPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommandOptions_GetLastArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommandOptions *op = static_cast<vtkCommandOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastArgument() :
      op->vtkCommandOptions::GetLastArgument());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommandOptions_Methods[] = {
  {"IsTypeOf", PyvtkCommandOptions_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCommandOptions_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCommandOptions_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCommandOptions\nC++: static vtkCommandOptions *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCommandOptions_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCommandOptions\nC++: vtkCommandOptions *NewInstance()\n\n"},
  {"GetHelp", PyvtkCommandOptions_GetHelp, METH_VARARGS,
   "V.GetHelp() -> string\nC++: const char *GetHelp()\n\n"},
  {"GetHelpSelected", PyvtkCommandOptions_GetHelpSelected, METH_VARARGS,
   "V.GetHelpSelected() -> int\nC++: virtual int GetHelpSelected()\n\nWas help selected?\n"},
  {"SetHelpSelected", PyvtkCommandOptions_SetHelpSelected, METH_VARARGS,
   "V.SetHelpSelected(int)\nC++: virtual void SetHelpSelected(int _arg)\n\nWas help selected?\n"},
  {"GetProcessType", PyvtkCommandOptions_GetProcessType, METH_VARARGS,
   "V.GetProcessType() -> int\nC++: int GetProcessType()\n\nSet/Get the type of the process for this set of options.\ndata-server, render-server, combined-server or client.\n"},
  {"SetProcessType", PyvtkCommandOptions_SetProcessType, METH_VARARGS,
   "V.SetProcessType(int)\nC++: void SetProcessType(int p)\n\n"},
  {"GetUnknownArgument", PyvtkCommandOptions_GetUnknownArgument, METH_VARARGS,
   "V.GetUnknownArgument() -> string\nC++: virtual char *GetUnknownArgument()\n\nIn case of unknown argument, set this variable with the unknown\nargument.\n"},
  {"GetErrorMessage", PyvtkCommandOptions_GetErrorMessage, METH_VARARGS,
   "V.GetErrorMessage() -> string\nC++: virtual char *GetErrorMessage()\n\nGet the error message if Parse returned 0.\n"},
  {"GetArgv0", PyvtkCommandOptions_GetArgv0, METH_VARARGS,
   "V.GetArgv0() -> string\nC++: const char *GetArgv0()\n\nGet argv[0]\n"},
  {"GetApplicationPath", PyvtkCommandOptions_GetApplicationPath, METH_VARARGS,
   "V.GetApplicationPath() -> string\nC++: virtual char *GetApplicationPath()\n\nGet full path of executable (based on Argv0)\n"},
  {"GetLastArgument", PyvtkCommandOptions_GetLastArgument, METH_VARARGS,
   "V.GetLastArgument() -> int\nC++: int GetLastArgument()\n\nGet the index of the last argument parsed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCommandOptions_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCommonPython.vtkCommandOptions", // tp_name
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
  PyvtkCommandOptions_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCommandOptions_StaticNew()
{
  return vtkCommandOptions::New();
}

PyObject *PyvtkCommandOptions_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCommandOptions_Type, PyvtkCommandOptions_Methods,
    "vtkCommandOptions",
 &PyvtkCommandOptions_StaticNew);

  PyTypeObject *pytype = &PyvtkCommandOptions_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "EVERYBODY", vtkCommandOptions::EVERYBODY },
        { "XMLONLY", vtkCommandOptions::XMLONLY },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCommandOptions(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCommandOptions_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCommandOptions", o) != 0)
  {
    Py_DECREF(o);
  }

}

