// python wrapper for vtkSMUndoStack
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
#include "vtkSMUndoStack.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMUndoStack(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMUndoStack_ClassNew(); }

#ifndef DECLARED_PyvtkUndoStack_ClassNew
extern "C" { PyObject *PyvtkUndoStack_ClassNew(); }
#define DECLARED_PyvtkUndoStack_ClassNew
#endif

static const char *PyvtkSMUndoStack_Doc =
  "vtkSMUndoStack - This is the undo/redo stack for the Server Manager.\n\n"
  "Superclass: vtkUndoStack\n\n"
  "This provides a unified face for undo/redo irrespective of number of\n"
  "connections, their type etc etc.\n\n"
  "On every undo/redo, it fetches the XML state change from the server.\n"
  "vtkSMUndoRedoStateLoader is used to generate a vtkUndoSet object from\n"
  "the XML. GUI can subclass vtkSMUndoRedoStateLoader to handle GUI\n"
  "specific XML elements. The loader instance must be set before\n"
  "performing the undo, otherwise vtkSMUndoRedoStateLoader is used.\n\n"
  "This class also provides API to push any vtkUndoSet instance on to a\n"
  "server. GUI can use this to push its own changes that is undoable\n"
  "across connections.\n\n"
  "@sa\n"
  "vtkSMUndoStackBuilder\n\n";

static PyTypeObject PyvtkSMUndoStack_EventIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMUndoStack.EventIds", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSMUndoStack_EventIds_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMUndoStack_EventIds_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMUndoStack_EventIds_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMUndoStack_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMUndoStack::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStack_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStack *op = static_cast<vtkSMUndoStack *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMUndoStack::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStack_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMUndoStack *tempr = vtkSMUndoStack::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStack_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStack *op = static_cast<vtkSMUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMUndoStack *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMUndoStack::NewInstance());

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
PyvtkSMUndoStack_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStack *op = static_cast<vtkSMUndoStack *>(vp);

  const char *temp0 = nullptr;
  vtkUndoSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUndoSet"))
  {
    if (ap.IsBound())
    {
      op->Push(temp0, temp1);
    }
    else
    {
      op->vtkSMUndoStack::Push(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStack_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStack *op = static_cast<vtkSMUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Undo() :
      op->vtkSMUndoStack::Undo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMUndoStack_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMUndoStack *op = static_cast<vtkSMUndoStack *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Redo() :
      op->vtkSMUndoStack::Redo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMUndoStack_Methods[] = {
  {"IsTypeOf", PyvtkSMUndoStack_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMUndoStack_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMUndoStack_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMUndoStack\nC++: static vtkSMUndoStack *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMUndoStack_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMUndoStack\nC++: vtkSMUndoStack *NewInstance()\n\n"},
  {"Push", PyvtkSMUndoStack_Push, METH_VARARGS,
   "V.Push(string, vtkUndoSet)\nC++: void Push(const char *label, vtkUndoSet *changeSet) override;\n\nPush an undo set on the Undo stack. This will clear any sets in\nthe Redo stack.\n"},
  {"Undo", PyvtkSMUndoStack_Undo, METH_VARARGS,
   "V.Undo() -> int\nC++: int Undo() override;\n\nPerforms an Undo using the set on the top of the undo stack. The\nset is poped from the undo stack and pushed at the top of the\nredo stack. Before undo begins, it fires vtkCommand::StartEvent\nand when undo completes, it fires vtkCommand::EndEvent.\n\\returns the status of the operation.\n"},
  {"Redo", PyvtkSMUndoStack_Redo, METH_VARARGS,
   "V.Redo() -> int\nC++: int Redo() override;\n\nPerforms a Redo using the set on the top of the redo stack. The\nset is poped from the redo stack and pushed at the top of the\nundo stack. Before redo begins, it fires vtkCommand::StartEvent\nand when redo completes, it fires vtkCommand::EndEvent.\n\\returns the status of the operation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMUndoStack_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMUndoStack", // tp_name
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
  PyvtkSMUndoStack_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMUndoStack_StaticNew()
{
  return vtkSMUndoStack::New();
}

PyObject *PyvtkSMUndoStack_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMUndoStack_Type, PyvtkSMUndoStack_Methods,
    "vtkSMUndoStack",
 &PyvtkSMUndoStack_StaticNew);

  PyTypeObject *pytype = &PyvtkSMUndoStack_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUndoStack_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMUndoStack_EventIds_Type);
  PyvtkSMUndoStack_EventIds_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMUndoStack_EventIds_Type);

  o = (PyObject *)&PyvtkSMUndoStack_EventIds_Type;
  if (PyDict_SetItemString(d, "EventIds", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkSMUndoStack::EventIds cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "PushUndoSetEvent", vtkSMUndoStack::PushUndoSetEvent },
        { "ObjectCreationEvent", vtkSMUndoStack::ObjectCreationEvent },
      };

    o = PyvtkSMUndoStack_EventIds_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMUndoStack(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMUndoStack_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMUndoStack", o) != 0)
  {
    Py_DECREF(o);
  }

}

