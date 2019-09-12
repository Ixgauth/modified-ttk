// python wrapper for vtkCallbackCommand
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkCallbackCommand.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCallbackCommand(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCallbackCommand_ClassNew(); }

#ifndef DECLARED_PyvtkCommand_ClassNew
extern "C" { PyObject *PyvtkCommand_ClassNew(); }
#define DECLARED_PyvtkCommand_ClassNew
#endif

static const char *PyvtkCallbackCommand_Doc =
  "vtkCallbackCommand - supports function callbacks\n\n"
  "Superclass: vtkCommand\n\n"
  "Use vtkCallbackCommand for generic function callbacks. That is, this\n"
  "class can be used when you wish to execute a function (of the\n"
  "signature described below) using the Command/Observer design pattern\n"
  "in VTK. The callback function should have the form\n\n"
  "void func(vtkObject*, unsigned long eid, void* clientdata, void\n"
  "*calldata)  where the parameter vtkObject* is the object invoking the\n"
  "event; eid is the event id (see vtkCommand.h); clientdata is special\n"
  "data that should is associated with this instance of\n"
  "vtkCallbackCommand; and calldata is data that the\n"
  "vtkObject::InvokeEvent() may send with the callback. For example, the\n"
  "invocation of the ProgressEvent sends along the progress value as\n"
  "calldata.\n\n"
  "@sa\n"
  "vtkCommand vtkOldStyleCallbackCommand\n\n";


static PyObject *
PyvtkCallbackCommand_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCallbackCommand::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCallbackCommand::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCallbackCommand *tempr = vtkCallbackCommand::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCallbackCommand *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCallbackCommand::NewInstance());

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
PyvtkCallbackCommand_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->Execute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCallbackCommand::Execute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf2.obj != 0)
  {
    PyBuffer_Release(&pbuf2);
  }
#endif
  return result;
}


static PyObject *
PyvtkCallbackCommand_SetClientData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClientData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetClientData(temp0);
    }
    else
    {
      op->vtkCallbackCommand::SetClientData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkCallbackCommand_GetClientData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetClientData() :
      op->vtkCallbackCommand::GetClientData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_SetAbortFlagOnExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortFlagOnExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbortFlagOnExecute(temp0);
    }
    else
    {
      op->vtkCallbackCommand::SetAbortFlagOnExecute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_GetAbortFlagOnExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbortFlagOnExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAbortFlagOnExecute() :
      op->vtkCallbackCommand::GetAbortFlagOnExecute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_AbortFlagOnExecuteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortFlagOnExecuteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AbortFlagOnExecuteOn();
    }
    else
    {
      op->vtkCallbackCommand::AbortFlagOnExecuteOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_AbortFlagOnExecuteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortFlagOnExecuteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AbortFlagOnExecuteOff();
    }
    else
    {
      op->vtkCallbackCommand::AbortFlagOnExecuteOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCallbackCommand_Methods[] = {
  {"IsTypeOf", PyvtkCallbackCommand_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCallbackCommand_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCallbackCommand_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCallbackCommand\nC++: static vtkCallbackCommand *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCallbackCommand_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCallbackCommand\nC++: vtkCallbackCommand *NewInstance()\n\n"},
  {"Execute", PyvtkCallbackCommand_Execute, METH_VARARGS,
   "V.Execute(vtkObject, int, void)\nC++: void Execute(vtkObject *caller, unsigned long eid,\n    void *callData) override;\n\nSatisfy the superclass API for callbacks. Recall that the caller\nis the instance invoking the event; eid is the event id (see\nvtkCommand.h); and calldata is information sent when the callback\nwas invoked (e.g., progress value in the\nvtkCommand::ProgressEvent).\n"},
  {"SetClientData", PyvtkCallbackCommand_SetClientData, METH_VARARGS,
   "V.SetClientData(void)\nC++: virtual void SetClientData(void *cd)\n\nMethods to set and get client and callback information, and the\ncallback function.\n"},
  {"GetClientData", PyvtkCallbackCommand_GetClientData, METH_VARARGS,
   "V.GetClientData() -> void\nC++: virtual void *GetClientData()\n\n"},
  {"SetAbortFlagOnExecute", PyvtkCallbackCommand_SetAbortFlagOnExecute, METH_VARARGS,
   "V.SetAbortFlagOnExecute(int)\nC++: void SetAbortFlagOnExecute(int f)\n\nSet/Get the abort flag on execute. If this is set to true the\nAbortFlag will be set to On automatically when the Execute method\nis triggered *and* a callback is set.\n"},
  {"GetAbortFlagOnExecute", PyvtkCallbackCommand_GetAbortFlagOnExecute, METH_VARARGS,
   "V.GetAbortFlagOnExecute() -> int\nC++: int GetAbortFlagOnExecute()\n\n"},
  {"AbortFlagOnExecuteOn", PyvtkCallbackCommand_AbortFlagOnExecuteOn, METH_VARARGS,
   "V.AbortFlagOnExecuteOn()\nC++: void AbortFlagOnExecuteOn()\n\n"},
  {"AbortFlagOnExecuteOff", PyvtkCallbackCommand_AbortFlagOnExecuteOff, METH_VARARGS,
   "V.AbortFlagOnExecuteOff()\nC++: void AbortFlagOnExecuteOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCallbackCommand_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkCallbackCommand", // tp_name
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
  PyvtkCallbackCommand_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCallbackCommand_StaticNew()
{
  return vtkCallbackCommand::New();
}

PyObject *PyvtkCallbackCommand_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCallbackCommand_Type, PyvtkCallbackCommand_Methods,
    "vtkCallbackCommand",
 &PyvtkCallbackCommand_StaticNew);

  PyTypeObject *pytype = &PyvtkCallbackCommand_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCommand_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCallbackCommand(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCallbackCommand_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCallbackCommand", o) != 0)
  {
    Py_DECREF(o);
  }

}

