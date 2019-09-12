// python wrapper for vtkAnimationPlayer
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
#include "vtkAnimationPlayer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAnimationPlayer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAnimationPlayer_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAnimationPlayer_Doc =
  "vtkAnimationPlayer - Abstract superclass for an animation player.\n\n"
  "Superclass: vtkObject\n\n"
;


static PyObject *
PyvtkAnimationPlayer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAnimationPlayer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnimationPlayer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAnimationPlayer *tempr = vtkAnimationPlayer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnimationPlayer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnimationPlayer::NewInstance());

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
PyvtkAnimationPlayer_SetAnimationScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  vtkSMAnimationScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMAnimationScene"))
  {
    if (ap.IsBound())
    {
      op->SetAnimationScene(temp0);
    }
    else
    {
      op->vtkAnimationPlayer::SetAnimationScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GetAnimationScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMAnimationScene *tempr = (ap.IsBound() ?
      op->GetAnimationScene() :
      op->vtkAnimationPlayer::GetAnimationScene());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Play();
    }
    else
    {
      op->vtkAnimationPlayer::Play();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Stop();
    }
    else
    {
      op->vtkAnimationPlayer::Stop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_IsInPlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInPlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsInPlay() :
      op->vtkAnimationPlayer::IsInPlay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GetInPlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInPlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInPlay() :
      op->vtkAnimationPlayer::GetInPlay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoop(temp0);
    }
    else
    {
      op->vtkAnimationPlayer::SetLoop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLoop() :
      op->vtkAnimationPlayer::GetLoop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GoToNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToNext();
    }
    else
    {
      op->vtkAnimationPlayer::GoToNext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GoToPrevious(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToPrevious");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToPrevious();
    }
    else
    {
      op->vtkAnimationPlayer::GoToPrevious();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GoToFirst(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirst");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToFirst();
    }
    else
    {
      op->vtkAnimationPlayer::GoToFirst();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationPlayer_GoToLast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToLast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationPlayer *op = static_cast<vtkAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToLast();
    }
    else
    {
      op->vtkAnimationPlayer::GoToLast();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAnimationPlayer_Methods[] = {
  {"IsTypeOf", PyvtkAnimationPlayer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAnimationPlayer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAnimationPlayer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAnimationPlayer\nC++: static vtkAnimationPlayer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAnimationPlayer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAnimationPlayer\nC++: vtkAnimationPlayer *NewInstance()\n\n"},
  {"SetAnimationScene", PyvtkAnimationPlayer_SetAnimationScene, METH_VARARGS,
   "V.SetAnimationScene(vtkSMAnimationScene)\nC++: virtual void SetAnimationScene(vtkSMAnimationScene *)\n\nSet the animation scene that is to be played by this player. Note\nthat the animation scene is not reference counted to avoid loops.\n"},
  {"GetAnimationScene", PyvtkAnimationPlayer_GetAnimationScene, METH_VARARGS,
   "V.GetAnimationScene() -> vtkSMAnimationScene\nC++: vtkSMAnimationScene *GetAnimationScene()\n\nSet the animation scene that is to be played by this player. Note\nthat the animation scene is not reference counted to avoid loops.\n"},
  {"Play", PyvtkAnimationPlayer_Play, METH_VARARGS,
   "V.Play()\nC++: void Play()\n\nStart playing the animation. Fires StartEvent when play begins\nand EndEvent when play stops.\n"},
  {"Stop", PyvtkAnimationPlayer_Stop, METH_VARARGS,
   "V.Stop()\nC++: void Stop()\n\nStop playing the animation.\n"},
  {"IsInPlay", PyvtkAnimationPlayer_IsInPlay, METH_VARARGS,
   "V.IsInPlay() -> int\nC++: int IsInPlay()\n\nReturns if the animation is currently playing.\n"},
  {"GetInPlay", PyvtkAnimationPlayer_GetInPlay, METH_VARARGS,
   "V.GetInPlay() -> bool\nC++: virtual bool GetInPlay()\n\n"},
  {"SetLoop", PyvtkAnimationPlayer_SetLoop, METH_VARARGS,
   "V.SetLoop(bool)\nC++: virtual void SetLoop(bool _arg)\n\nSet to true to play the animation in a loop.\n"},
  {"GetLoop", PyvtkAnimationPlayer_GetLoop, METH_VARARGS,
   "V.GetLoop() -> bool\nC++: virtual bool GetLoop()\n\nSet to true to play the animation in a loop.\n"},
  {"GoToNext", PyvtkAnimationPlayer_GoToNext, METH_VARARGS,
   "V.GoToNext()\nC++: void GoToNext()\n\nTake the animation scene to next frame.\n"},
  {"GoToPrevious", PyvtkAnimationPlayer_GoToPrevious, METH_VARARGS,
   "V.GoToPrevious()\nC++: void GoToPrevious()\n\nTake animation scene to previous frame.\n"},
  {"GoToFirst", PyvtkAnimationPlayer_GoToFirst, METH_VARARGS,
   "V.GoToFirst()\nC++: void GoToFirst()\n\nTake animation scene to first frame.\n"},
  {"GoToLast", PyvtkAnimationPlayer_GoToLast, METH_VARARGS,
   "V.GoToLast()\nC++: void GoToLast()\n\nTake animation scene to last frame.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAnimationPlayer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkAnimationPlayer", // tp_name
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
  PyvtkAnimationPlayer_Doc, // tp_doc
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

PyObject *PyvtkAnimationPlayer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAnimationPlayer_Type, PyvtkAnimationPlayer_Methods,
    "vtkAnimationPlayer",
 nullptr);

  PyTypeObject *pytype = &PyvtkAnimationPlayer_Type;

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

void PyVTKAddFile_vtkAnimationPlayer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAnimationPlayer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAnimationPlayer", o) != 0)
  {
    Py_DECREF(o);
  }

}

