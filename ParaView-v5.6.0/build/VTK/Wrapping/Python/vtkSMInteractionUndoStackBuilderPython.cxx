// python wrapper for vtkSMInteractionUndoStackBuilder
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
#include "vtkSMInteractionUndoStackBuilder.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMInteractionUndoStackBuilder(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMInteractionUndoStackBuilder_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMInteractionUndoStackBuilder_Doc =
  "vtkSMInteractionUndoStackBuilder - builder server manager undo sets\nfor render view interactions and pushes them on the undo stack.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMInteractionUndoStackBuilder specializes in interaction. This\n"
  "class can create undo elements for only one render view at a time.\n\n";


static PyObject *
PyvtkSMInteractionUndoStackBuilder_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMInteractionUndoStackBuilder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMInteractionUndoStackBuilder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMInteractionUndoStackBuilder *tempr = vtkSMInteractionUndoStackBuilder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMInteractionUndoStackBuilder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMInteractionUndoStackBuilder::NewInstance());

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
PyvtkSMInteractionUndoStackBuilder_SetRenderView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  vtkSMRenderViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMRenderViewProxy"))
  {
    if (ap.IsBound())
    {
      op->SetRenderView(temp0);
    }
    else
    {
      op->vtkSMInteractionUndoStackBuilder::SetRenderView(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_GetRenderView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMRenderViewProxy *tempr = (ap.IsBound() ?
      op->GetRenderView() :
      op->vtkSMInteractionUndoStackBuilder::GetRenderView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_GetUndoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUndoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMUndoStack *tempr = (ap.IsBound() ?
      op->GetUndoStack() :
      op->vtkSMInteractionUndoStackBuilder::GetUndoStack());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_SetUndoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  vtkSMUndoStack *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMUndoStack"))
  {
    if (ap.IsBound())
    {
      op->SetUndoStack(temp0);
    }
    else
    {
      op->vtkSMInteractionUndoStackBuilder::SetUndoStack(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkSMInteractionUndoStackBuilder::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_StartInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartInteraction();
    }
    else
    {
      op->vtkSMInteractionUndoStackBuilder::StartInteraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMInteractionUndoStackBuilder_EndInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMInteractionUndoStackBuilder *op = static_cast<vtkSMInteractionUndoStackBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndInteraction();
    }
    else
    {
      op->vtkSMInteractionUndoStackBuilder::EndInteraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMInteractionUndoStackBuilder_Methods[] = {
  {"IsTypeOf", PyvtkSMInteractionUndoStackBuilder_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMInteractionUndoStackBuilder_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMInteractionUndoStackBuilder_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMInteractionUndoStackBuilder\nC++: static vtkSMInteractionUndoStackBuilder *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMInteractionUndoStackBuilder_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMInteractionUndoStackBuilder\nC++: vtkSMInteractionUndoStackBuilder *NewInstance()\n\n"},
  {"SetRenderView", PyvtkSMInteractionUndoStackBuilder_SetRenderView, METH_VARARGS,
   "V.SetRenderView(vtkSMRenderViewProxy)\nC++: void SetRenderView(vtkSMRenderViewProxy *)\n\nGet/Set the render view proxy for which we are monitoring the\ninteractions.\n"},
  {"GetRenderView", PyvtkSMInteractionUndoStackBuilder_GetRenderView, METH_VARARGS,
   "V.GetRenderView() -> vtkSMRenderViewProxy\nC++: virtual vtkSMRenderViewProxy *GetRenderView()\n\nGet/Set the render view proxy for which we are monitoring the\ninteractions.\n"},
  {"GetUndoStack", PyvtkSMInteractionUndoStackBuilder_GetUndoStack, METH_VARARGS,
   "V.GetUndoStack() -> vtkSMUndoStack\nC++: virtual vtkSMUndoStack *GetUndoStack()\n\nGet/Set the undo stack that this builder will build.\n"},
  {"SetUndoStack", PyvtkSMInteractionUndoStackBuilder_SetUndoStack, METH_VARARGS,
   "V.SetUndoStack(vtkSMUndoStack)\nC++: virtual void SetUndoStack(vtkSMUndoStack *)\n\nGet/Set the undo stack that this builder will build.\n"},
  {"Clear", PyvtkSMInteractionUndoStackBuilder_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nClear the undo set currently being recorded.\n"},
  {"StartInteraction", PyvtkSMInteractionUndoStackBuilder_StartInteraction, METH_VARARGS,
   "V.StartInteraction()\nC++: void StartInteraction()\n\nCalled to record the state at the beginning of an interaction.\nUsually, this method isn't called directly, since the builder\nlistens to interaction events on the interactor and calls it\nautomatically. May be used when changing the camera\nprogrammatically.\n"},
  {"EndInteraction", PyvtkSMInteractionUndoStackBuilder_EndInteraction, METH_VARARGS,
   "V.EndInteraction()\nC++: void EndInteraction()\n\nCalled to record the state at the end of an interaction and push\nit on the stack. Usually, this method isn't called directly,\nsince the builder listens to interaction events on the interactor\nand calls it automatically. May be used when changing the camera\nprogrammatically.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMInteractionUndoStackBuilder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMInteractionUndoStackBuilder", // tp_name
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
  PyvtkSMInteractionUndoStackBuilder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMInteractionUndoStackBuilder_StaticNew()
{
  return vtkSMInteractionUndoStackBuilder::New();
}

PyObject *PyvtkSMInteractionUndoStackBuilder_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMInteractionUndoStackBuilder_Type, PyvtkSMInteractionUndoStackBuilder_Methods,
    "vtkSMInteractionUndoStackBuilder",
 &PyvtkSMInteractionUndoStackBuilder_StaticNew);

  PyTypeObject *pytype = &PyvtkSMInteractionUndoStackBuilder_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMInteractionUndoStackBuilder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMInteractionUndoStackBuilder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMInteractionUndoStackBuilder", o) != 0)
  {
    Py_DECREF(o);
  }

}

