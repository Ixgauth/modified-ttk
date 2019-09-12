// python wrapper for vtkSequenceAnimationPlayer
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
#include "vtkSequenceAnimationPlayer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSequenceAnimationPlayer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSequenceAnimationPlayer_ClassNew(); }

#ifndef DECLARED_PyvtkAnimationPlayer_ClassNew
extern "C" { PyObject *PyvtkAnimationPlayer_ClassNew(); }
#define DECLARED_PyvtkAnimationPlayer_ClassNew
#endif

static const char *PyvtkSequenceAnimationPlayer_Doc =
  "vtkSequenceAnimationPlayer - \n\n"
  "Superclass: vtkAnimationPlayer\n\n"
;


static PyObject *
PyvtkSequenceAnimationPlayer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSequenceAnimationPlayer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSequenceAnimationPlayer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequenceAnimationPlayer *op = static_cast<vtkSequenceAnimationPlayer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSequenceAnimationPlayer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSequenceAnimationPlayer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSequenceAnimationPlayer *tempr = vtkSequenceAnimationPlayer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSequenceAnimationPlayer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequenceAnimationPlayer *op = static_cast<vtkSequenceAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSequenceAnimationPlayer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSequenceAnimationPlayer::NewInstance());

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
PyvtkSequenceAnimationPlayer_SetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequenceAnimationPlayer *op = static_cast<vtkSequenceAnimationPlayer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfFrames(temp0);
    }
    else
    {
      op->vtkSequenceAnimationPlayer::SetNumberOfFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSequenceAnimationPlayer_GetNumberOfFramesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFramesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequenceAnimationPlayer *op = static_cast<vtkSequenceAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFramesMinValue() :
      op->vtkSequenceAnimationPlayer::GetNumberOfFramesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSequenceAnimationPlayer_GetNumberOfFramesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFramesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequenceAnimationPlayer *op = static_cast<vtkSequenceAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFramesMaxValue() :
      op->vtkSequenceAnimationPlayer::GetNumberOfFramesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSequenceAnimationPlayer_GetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSequenceAnimationPlayer *op = static_cast<vtkSequenceAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFrames() :
      op->vtkSequenceAnimationPlayer::GetNumberOfFrames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSequenceAnimationPlayer_Methods[] = {
  {"IsTypeOf", PyvtkSequenceAnimationPlayer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSequenceAnimationPlayer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSequenceAnimationPlayer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSequenceAnimationPlayer\nC++: static vtkSequenceAnimationPlayer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSequenceAnimationPlayer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSequenceAnimationPlayer\nC++: vtkSequenceAnimationPlayer *NewInstance()\n\n"},
  {"SetNumberOfFrames", PyvtkSequenceAnimationPlayer_SetNumberOfFrames, METH_VARARGS,
   "V.SetNumberOfFrames(int)\nC++: virtual void SetNumberOfFrames(int _arg)\n\n"},
  {"GetNumberOfFramesMinValue", PyvtkSequenceAnimationPlayer_GetNumberOfFramesMinValue, METH_VARARGS,
   "V.GetNumberOfFramesMinValue() -> int\nC++: virtual int GetNumberOfFramesMinValue()\n\n"},
  {"GetNumberOfFramesMaxValue", PyvtkSequenceAnimationPlayer_GetNumberOfFramesMaxValue, METH_VARARGS,
   "V.GetNumberOfFramesMaxValue() -> int\nC++: virtual int GetNumberOfFramesMaxValue()\n\n"},
  {"GetNumberOfFrames", PyvtkSequenceAnimationPlayer_GetNumberOfFrames, METH_VARARGS,
   "V.GetNumberOfFrames() -> int\nC++: virtual int GetNumberOfFrames()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSequenceAnimationPlayer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkSequenceAnimationPlayer", // tp_name
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
  PyvtkSequenceAnimationPlayer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSequenceAnimationPlayer_StaticNew()
{
  return vtkSequenceAnimationPlayer::New();
}

PyObject *PyvtkSequenceAnimationPlayer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSequenceAnimationPlayer_Type, PyvtkSequenceAnimationPlayer_Methods,
    "vtkSequenceAnimationPlayer",
 &PyvtkSequenceAnimationPlayer_StaticNew);

  PyTypeObject *pytype = &PyvtkSequenceAnimationPlayer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAnimationPlayer_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSequenceAnimationPlayer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSequenceAnimationPlayer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSequenceAnimationPlayer", o) != 0)
  {
    Py_DECREF(o);
  }

}

