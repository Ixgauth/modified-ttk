// python wrapper for vtkEventForwarderCommand
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkEventForwarderCommand.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEventForwarderCommand(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEventForwarderCommand_ClassNew(); }

#ifndef DECLARED_PyvtkCommand_ClassNew
extern "C" { PyObject *PyvtkCommand_ClassNew(); }
#define DECLARED_PyvtkCommand_ClassNew
#endif

static const char *PyvtkEventForwarderCommand_Doc =
  "vtkEventForwarderCommand - a simple event forwarder command\n\n"
  "Superclass: vtkCommand\n\n"
  "Use vtkEventForwarderCommand to forward an event to a new object.\n"
  "This command will intercept the event, and use InvokeEvent on a\n"
  "'target' as if that object was the one that invoked the event instead\n"
  "of the object this command was attached to using AddObserver.\n\n"
  "@sa\n"
  "vtkCommand\n\n";


static PyObject *
PyvtkEventForwarderCommand_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEventForwarderCommand::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventForwarderCommand_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventForwarderCommand *op = static_cast<vtkEventForwarderCommand *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEventForwarderCommand::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventForwarderCommand_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEventForwarderCommand *tempr = vtkEventForwarderCommand::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventForwarderCommand_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventForwarderCommand *op = static_cast<vtkEventForwarderCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEventForwarderCommand *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEventForwarderCommand::NewInstance());

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
PyvtkEventForwarderCommand_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventForwarderCommand *op = static_cast<vtkEventForwarderCommand *>(vp);

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
      op->vtkEventForwarderCommand::Execute(temp0, temp1, temp2);
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
PyvtkEventForwarderCommand_SetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventForwarderCommand *op = static_cast<vtkEventForwarderCommand *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->SetTarget(temp0);
    }
    else
    {
      op->vtkEventForwarderCommand::SetTarget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventForwarderCommand_GetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventForwarderCommand *op = static_cast<vtkEventForwarderCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetTarget() :
      op->vtkEventForwarderCommand::GetTarget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEventForwarderCommand_Methods[] = {
  {"IsTypeOf", PyvtkEventForwarderCommand_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEventForwarderCommand_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEventForwarderCommand_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEventForwarderCommand\nC++: static vtkEventForwarderCommand *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEventForwarderCommand_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEventForwarderCommand\nC++: vtkEventForwarderCommand *NewInstance()\n\n"},
  {"Execute", PyvtkEventForwarderCommand_Execute, METH_VARARGS,
   "V.Execute(vtkObject, int, void)\nC++: void Execute(vtkObject *caller, unsigned long eid,\n    void *callData) override;\n\nSatisfy the superclass API for callbacks. Recall that the caller\nis the instance invoking the event; eid is the event id (see\nvtkCommand.h); and calldata is information sent when the callback\nwas invoked (e.g., progress value in the\nvtkCommand::ProgressEvent).\n"},
  {"SetTarget", PyvtkEventForwarderCommand_SetTarget, METH_VARARGS,
   "V.SetTarget(vtkObject)\nC++: virtual void SetTarget(vtkObject *obj)\n\nMethods to set and get client and callback information, and the\ncallback function.\n"},
  {"GetTarget", PyvtkEventForwarderCommand_GetTarget, METH_VARARGS,
   "V.GetTarget() -> void\nC++: virtual void *GetTarget()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEventForwarderCommand_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkEventForwarderCommand", // tp_name
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
  PyvtkEventForwarderCommand_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEventForwarderCommand_StaticNew()
{
  return vtkEventForwarderCommand::New();
}

PyObject *PyvtkEventForwarderCommand_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEventForwarderCommand_Type, PyvtkEventForwarderCommand_Methods,
    "vtkEventForwarderCommand",
 &PyvtkEventForwarderCommand_StaticNew);

  PyTypeObject *pytype = &PyvtkEventForwarderCommand_Type;

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

void PyVTKAddFile_vtkEventForwarderCommand(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEventForwarderCommand_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEventForwarderCommand", o) != 0)
  {
    Py_DECREF(o);
  }

}

