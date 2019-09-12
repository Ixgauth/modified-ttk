// python wrapper for vtkRealtimeAnimationPlayer
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
#include "vtkRealtimeAnimationPlayer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRealtimeAnimationPlayer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRealtimeAnimationPlayer_ClassNew(); }

#ifndef DECLARED_PyvtkAnimationPlayer_ClassNew
extern "C" { PyObject *PyvtkAnimationPlayer_ClassNew(); }
#define DECLARED_PyvtkAnimationPlayer_ClassNew
#endif

static const char *PyvtkRealtimeAnimationPlayer_Doc =
  "vtkRealtimeAnimationPlayer - Animation player that plays in real time.\n\n"
  "Superclass: vtkAnimationPlayer\n\n"
;


static PyObject *
PyvtkRealtimeAnimationPlayer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRealtimeAnimationPlayer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRealtimeAnimationPlayer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRealtimeAnimationPlayer *op = static_cast<vtkRealtimeAnimationPlayer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRealtimeAnimationPlayer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRealtimeAnimationPlayer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRealtimeAnimationPlayer *tempr = vtkRealtimeAnimationPlayer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRealtimeAnimationPlayer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRealtimeAnimationPlayer *op = static_cast<vtkRealtimeAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRealtimeAnimationPlayer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRealtimeAnimationPlayer::NewInstance());

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
PyvtkRealtimeAnimationPlayer_GetDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRealtimeAnimationPlayer *op = static_cast<vtkRealtimeAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetDuration() :
      op->vtkRealtimeAnimationPlayer::GetDuration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRealtimeAnimationPlayer_SetDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRealtimeAnimationPlayer *op = static_cast<vtkRealtimeAnimationPlayer *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDuration(temp0);
    }
    else
    {
      op->vtkRealtimeAnimationPlayer::SetDuration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRealtimeAnimationPlayer_Methods[] = {
  {"IsTypeOf", PyvtkRealtimeAnimationPlayer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRealtimeAnimationPlayer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRealtimeAnimationPlayer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRealtimeAnimationPlayer\nC++: static vtkRealtimeAnimationPlayer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRealtimeAnimationPlayer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRealtimeAnimationPlayer\nC++: vtkRealtimeAnimationPlayer *NewInstance()\n\n"},
  {"GetDuration", PyvtkRealtimeAnimationPlayer_GetDuration, METH_VARARGS,
   "V.GetDuration() -> int\nC++: virtual unsigned long GetDuration()\n\nGet/Set the duration for playing the animation in seconds.\n"},
  {"SetDuration", PyvtkRealtimeAnimationPlayer_SetDuration, METH_VARARGS,
   "V.SetDuration(int)\nC++: virtual void SetDuration(unsigned long _arg)\n\nGet/Set the duration for playing the animation in seconds.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRealtimeAnimationPlayer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkRealtimeAnimationPlayer", // tp_name
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
  PyvtkRealtimeAnimationPlayer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRealtimeAnimationPlayer_StaticNew()
{
  return vtkRealtimeAnimationPlayer::New();
}

PyObject *PyvtkRealtimeAnimationPlayer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRealtimeAnimationPlayer_Type, PyvtkRealtimeAnimationPlayer_Methods,
    "vtkRealtimeAnimationPlayer",
 &PyvtkRealtimeAnimationPlayer_StaticNew);

  PyTypeObject *pytype = &PyvtkRealtimeAnimationPlayer_Type;

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

void PyVTKAddFile_vtkRealtimeAnimationPlayer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRealtimeAnimationPlayer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRealtimeAnimationPlayer", o) != 0)
  {
    Py_DECREF(o);
  }

}

