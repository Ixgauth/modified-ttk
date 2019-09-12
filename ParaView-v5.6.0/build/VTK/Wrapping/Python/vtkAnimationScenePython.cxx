// python wrapper for vtkAnimationScene
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
#include "vtkAnimationScene.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAnimationScene(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAnimationScene_ClassNew(); }

#ifndef DECLARED_PyvtkAnimationCue_ClassNew
extern "C" { PyObject *PyvtkAnimationCue_ClassNew(); }
#define DECLARED_PyvtkAnimationCue_ClassNew
#endif

static const char *PyvtkAnimationScene_Doc =
  "vtkAnimationScene - the animation scene manager.\n\n"
  "Superclass: vtkAnimationCue\n\n"
  "vtkAnimationCue and vtkAnimationScene provide the framework to\n"
  "support animations in VTK. vtkAnimationCue represents an entity that\n"
  "changes/ animates with time, while vtkAnimationScene represents scene\n"
  "or setup for the animation, which consists of individual cues or\n"
  "other scenes.\n\n"
  "A scene can be played in real time mode, or as a sequence of frames\n"
  "1/frame rate apart in time.\n"
  "@sa\n"
  "vtkAnimationCue\n\n";

static PyTypeObject PyvtkAnimationScene_PlayModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkAnimationScene.PlayModes", // tp_name
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

PyObject *PyvtkAnimationScene_PlayModes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkAnimationScene_PlayModes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkAnimationScene_PlayModes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkAnimationScene_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAnimationScene::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnimationScene::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAnimationScene *tempr = vtkAnimationScene::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnimationScene *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnimationScene::NewInstance());

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
PyvtkAnimationScene_SetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlayMode(temp0);
    }
    else
    {
      op->vtkAnimationScene::SetPlayMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetModeToSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToSequence();
    }
    else
    {
      op->vtkAnimationScene::SetModeToSequence();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetModeToRealTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToRealTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToRealTime();
    }
    else
    {
      op->vtkAnimationScene::SetModeToRealTime();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlayMode() :
      op->vtkAnimationScene::GetPlayMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrameRate(temp0);
    }
    else
    {
      op->vtkAnimationScene::SetFrameRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFrameRate() :
      op->vtkAnimationScene::GetFrameRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_AddCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  vtkAnimationCue *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnimationCue"))
  {
    if (ap.IsBound())
    {
      op->AddCue(temp0);
    }
    else
    {
      op->vtkAnimationScene::AddCue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_RemoveCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  vtkAnimationCue *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnimationCue"))
  {
    if (ap.IsBound())
    {
      op->RemoveCue(temp0);
    }
    else
    {
      op->vtkAnimationScene::RemoveCue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_RemoveAllCues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllCues();
    }
    else
    {
      op->vtkAnimationScene::RemoveAllCues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetNumberOfCues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCues() :
      op->vtkAnimationScene::GetNumberOfCues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Play();
    }
    else
    {
      op->vtkAnimationScene::Play();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Stop();
    }
    else
    {
      op->vtkAnimationScene::Stop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int temp0;
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
      op->vtkAnimationScene::SetLoop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLoop() :
      op->vtkAnimationScene::GetLoop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetAnimationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimationTime(temp0);
    }
    else
    {
      op->vtkAnimationScene::SetAnimationTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetTimeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeMode(temp0);
    }
    else
    {
      op->vtkAnimationScene::SetTimeMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimationScene_IsInPlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInPlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsInPlay() :
      op->vtkAnimationScene::IsInPlay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAnimationScene_Methods[] = {
  {"IsTypeOf", PyvtkAnimationScene_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAnimationScene_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAnimationScene_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAnimationScene\nC++: static vtkAnimationScene *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAnimationScene_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAnimationScene\nC++: vtkAnimationScene *NewInstance()\n\n"},
  {"SetPlayMode", PyvtkAnimationScene_SetPlayMode, METH_VARARGS,
   "V.SetPlayMode(int)\nC++: virtual void SetPlayMode(int _arg)\n\nGet/Set the PlayMode for running/playing the animation scene. In\nthe Sequence mode, all the frames are generated one after the\nother. The time reported to each Tick of the constituent cues\n(during Play) is incremented by 1/frame rate, irrespective of the\ncurrent time. In the RealTime mode, time indicates the instance\nin time.\n"},
  {"SetModeToSequence", PyvtkAnimationScene_SetModeToSequence, METH_VARARGS,
   "V.SetModeToSequence()\nC++: void SetModeToSequence()\n\nGet/Set the PlayMode for running/playing the animation scene. In\nthe Sequence mode, all the frames are generated one after the\nother. The time reported to each Tick of the constituent cues\n(during Play) is incremented by 1/frame rate, irrespective of the\ncurrent time. In the RealTime mode, time indicates the instance\nin time.\n"},
  {"SetModeToRealTime", PyvtkAnimationScene_SetModeToRealTime, METH_VARARGS,
   "V.SetModeToRealTime()\nC++: void SetModeToRealTime()\n\nGet/Set the PlayMode for running/playing the animation scene. In\nthe Sequence mode, all the frames are generated one after the\nother. The time reported to each Tick of the constituent cues\n(during Play) is incremented by 1/frame rate, irrespective of the\ncurrent time. In the RealTime mode, time indicates the instance\nin time.\n"},
  {"GetPlayMode", PyvtkAnimationScene_GetPlayMode, METH_VARARGS,
   "V.GetPlayMode() -> int\nC++: virtual int GetPlayMode()\n\nGet/Set the PlayMode for running/playing the animation scene. In\nthe Sequence mode, all the frames are generated one after the\nother. The time reported to each Tick of the constituent cues\n(during Play) is incremented by 1/frame rate, irrespective of the\ncurrent time. In the RealTime mode, time indicates the instance\nin time.\n"},
  {"SetFrameRate", PyvtkAnimationScene_SetFrameRate, METH_VARARGS,
   "V.SetFrameRate(float)\nC++: virtual void SetFrameRate(double _arg)\n\nGet/Set the frame rate (in frames per second). This parameter\naffects only in the Sequence mode. The time interval indicated to\neach cue on every tick is progressed by 1/frame-rate seconds.\n"},
  {"GetFrameRate", PyvtkAnimationScene_GetFrameRate, METH_VARARGS,
   "V.GetFrameRate() -> float\nC++: virtual double GetFrameRate()\n\nGet/Set the frame rate (in frames per second). This parameter\naffects only in the Sequence mode. The time interval indicated to\neach cue on every tick is progressed by 1/frame-rate seconds.\n"},
  {"AddCue", PyvtkAnimationScene_AddCue, METH_VARARGS,
   "V.AddCue(vtkAnimationCue)\nC++: void AddCue(vtkAnimationCue *cue)\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {"RemoveCue", PyvtkAnimationScene_RemoveCue, METH_VARARGS,
   "V.RemoveCue(vtkAnimationCue)\nC++: void RemoveCue(vtkAnimationCue *cue)\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {"RemoveAllCues", PyvtkAnimationScene_RemoveAllCues, METH_VARARGS,
   "V.RemoveAllCues()\nC++: void RemoveAllCues()\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {"GetNumberOfCues", PyvtkAnimationScene_GetNumberOfCues, METH_VARARGS,
   "V.GetNumberOfCues() -> int\nC++: int GetNumberOfCues()\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {"Play", PyvtkAnimationScene_Play, METH_VARARGS,
   "V.Play()\nC++: virtual void Play()\n\nStarts playing the animation scene. Fires a\nvtkCommand::StartEvent before play beings and\nvtkCommand::EndEvent after play ends.\n"},
  {"Stop", PyvtkAnimationScene_Stop, METH_VARARGS,
   "V.Stop()\nC++: void Stop()\n\nStops the animation scene that is running.\n"},
  {"SetLoop", PyvtkAnimationScene_SetLoop, METH_VARARGS,
   "V.SetLoop(int)\nC++: virtual void SetLoop(int _arg)\n\nEnable/Disable animation loop.\n"},
  {"GetLoop", PyvtkAnimationScene_GetLoop, METH_VARARGS,
   "V.GetLoop() -> int\nC++: virtual int GetLoop()\n\nEnable/Disable animation loop.\n"},
  {"SetAnimationTime", PyvtkAnimationScene_SetAnimationTime, METH_VARARGS,
   "V.SetAnimationTime(float)\nC++: void SetAnimationTime(double time)\n\nMakes the state of the scene same as the given time.\n"},
  {"SetTimeMode", PyvtkAnimationScene_SetTimeMode, METH_VARARGS,
   "V.SetTimeMode(int)\nC++: void SetTimeMode(int mode) override;\n\nOverridden to allow change to Normalized mode only if none of the\nconstituent cues is in Relative time mode.\n"},
  {"IsInPlay", PyvtkAnimationScene_IsInPlay, METH_VARARGS,
   "V.IsInPlay() -> int\nC++: int IsInPlay()\n\nReturns if the animation is being played.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAnimationScene_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkAnimationScene", // tp_name
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
  PyvtkAnimationScene_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAnimationScene_StaticNew()
{
  return vtkAnimationScene::New();
}

PyObject *PyvtkAnimationScene_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAnimationScene_Type, PyvtkAnimationScene_Methods,
    "vtkAnimationScene",
 &PyvtkAnimationScene_StaticNew);

  PyTypeObject *pytype = &PyvtkAnimationScene_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAnimationCue_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAnimationScene_PlayModes_Type);
  PyvtkAnimationScene_PlayModes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkAnimationScene_PlayModes_Type);

  o = (PyObject *)&PyvtkAnimationScene_PlayModes_Type;
  if (PyDict_SetItemString(d, "PlayModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkAnimationScene::PlayModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "PLAYMODE_SEQUENCE", vtkAnimationScene::PLAYMODE_SEQUENCE },
        { "PLAYMODE_REALTIME", vtkAnimationScene::PLAYMODE_REALTIME },
      };

    o = PyvtkAnimationScene_PlayModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAnimationScene(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAnimationScene_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAnimationScene", o) != 0)
  {
    Py_DECREF(o);
  }

}

