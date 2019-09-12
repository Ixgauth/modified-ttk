// python wrapper for vtkOldStyleCallbackCommand
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkOldStyleCallbackCommand.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOldStyleCallbackCommand(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOldStyleCallbackCommand_ClassNew(); }

#ifndef DECLARED_PyvtkCommand_ClassNew
extern "C" { PyObject *PyvtkCommand_ClassNew(); }
#define DECLARED_PyvtkCommand_ClassNew
#endif

static const char *PyvtkOldStyleCallbackCommand_Doc =
  "vtkOldStyleCallbackCommand - supports legacy function callbacks for\nVTK\n\n"
  "Superclass: vtkCommand\n\n"
  "vtkOldStyleCallbackCommand is a callback that supports the legacy\n"
  "callback methods found in VTK. For example, the legacy method\n"
  "vtkProcessObject::SetStartMethod() is actually invoked using the\n"
  "command/observer design pattern of VTK, and the\n"
  "vtkOldStyleCallbackCommand is used to provide the legacy\n"
  "functionality. The callback function should have the form void\n"
  "func(void *clientdata), where clientdata is special data that should\n"
  "is associated with this instance of vtkCallbackCommand.\n\n"
  "@warning\n"
  "This is legacy glue. Please do not use; it will be eventually\n"
  "eliminated.\n\n"
  "@sa\n"
  "vtkCommand vtkCallbackCommand\n\n";


static PyObject *
PyvtkOldStyleCallbackCommand_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOldStyleCallbackCommand::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOldStyleCallbackCommand_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOldStyleCallbackCommand *op = static_cast<vtkOldStyleCallbackCommand *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOldStyleCallbackCommand::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOldStyleCallbackCommand_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOldStyleCallbackCommand *tempr = vtkOldStyleCallbackCommand::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOldStyleCallbackCommand_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOldStyleCallbackCommand *op = static_cast<vtkOldStyleCallbackCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOldStyleCallbackCommand *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOldStyleCallbackCommand::NewInstance());

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
PyvtkOldStyleCallbackCommand_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOldStyleCallbackCommand *op = static_cast<vtkOldStyleCallbackCommand *>(vp);

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
      op->vtkOldStyleCallbackCommand::Execute(temp0, temp1, temp2);
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
PyvtkOldStyleCallbackCommand_SetClientData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClientData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOldStyleCallbackCommand *op = static_cast<vtkOldStyleCallbackCommand *>(vp);

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
      op->vtkOldStyleCallbackCommand::SetClientData(temp0);
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

static PyMethodDef PyvtkOldStyleCallbackCommand_Methods[] = {
  {"IsTypeOf", PyvtkOldStyleCallbackCommand_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOldStyleCallbackCommand_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOldStyleCallbackCommand_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOldStyleCallbackCommand\nC++: static vtkOldStyleCallbackCommand *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOldStyleCallbackCommand_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOldStyleCallbackCommand\nC++: vtkOldStyleCallbackCommand *NewInstance()\n\n"},
  {"Execute", PyvtkOldStyleCallbackCommand_Execute, METH_VARARGS,
   "V.Execute(vtkObject, int, void)\nC++: void Execute(vtkObject *invoker, unsigned long eid,\n    void *calldata) override;\n\nSatisfy the superclass API for callbacks.\n"},
  {"SetClientData", PyvtkOldStyleCallbackCommand_SetClientData, METH_VARARGS,
   "V.SetClientData(void)\nC++: void SetClientData(void *cd)\n\nMethods to set and get client and callback information.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOldStyleCallbackCommand_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkOldStyleCallbackCommand", // tp_name
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
  PyvtkOldStyleCallbackCommand_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOldStyleCallbackCommand_StaticNew()
{
  return vtkOldStyleCallbackCommand::New();
}

PyObject *PyvtkOldStyleCallbackCommand_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOldStyleCallbackCommand_Type, PyvtkOldStyleCallbackCommand_Methods,
    "vtkOldStyleCallbackCommand",
 &PyvtkOldStyleCallbackCommand_StaticNew);

  PyTypeObject *pytype = &PyvtkOldStyleCallbackCommand_Type;

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

void PyVTKAddFile_vtkOldStyleCallbackCommand(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOldStyleCallbackCommand_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOldStyleCallbackCommand", o) != 0)
  {
    Py_DECREF(o);
  }

}

