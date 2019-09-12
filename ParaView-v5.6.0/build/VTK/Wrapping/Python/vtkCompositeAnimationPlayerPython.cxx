// python wrapper for vtkCompositeAnimationPlayer
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
#include "vtkCompositeAnimationPlayer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeAnimationPlayer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeAnimationPlayer_ClassNew(); }

#ifndef DECLARED_PyvtkAnimationPlayer_ClassNew
extern "C" { PyObject *PyvtkAnimationPlayer_ClassNew(); }
#define DECLARED_PyvtkAnimationPlayer_ClassNew
#endif

static const char *PyvtkCompositeAnimationPlayer_Doc =
  "vtkCompositeAnimationPlayer - This is composite animation player that\ncan me made to play an animation using the active player.\n\n"
  "Superclass: vtkAnimationPlayer\n\n"
  "It provides API to add animation players and then set one of them as\n"
  "the active one.\n\n";

static PyTypeObject PyvtkCompositeAnimationPlayer_Modes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkCompositeAnimationPlayer.Modes", // tp_name
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

PyObject *PyvtkCompositeAnimationPlayer_Modes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkCompositeAnimationPlayer_Modes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkCompositeAnimationPlayer_Modes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkCompositeAnimationPlayer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeAnimationPlayer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeAnimationPlayer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeAnimationPlayer *tempr = vtkCompositeAnimationPlayer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeAnimationPlayer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeAnimationPlayer::NewInstance());

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
PyvtkCompositeAnimationPlayer_SetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

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
      op->vtkCompositeAnimationPlayer::SetPlayMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_GetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlayMode() :
      op->vtkCompositeAnimationPlayer::GetPlayMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_SetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

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
      op->vtkCompositeAnimationPlayer::SetNumberOfFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_SetDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  int temp0;
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
      op->vtkCompositeAnimationPlayer::SetDuration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_AddTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddTimeStep(temp0);
    }
    else
    {
      op->vtkCompositeAnimationPlayer::AddTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_RemoveAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllTimeSteps();
    }
    else
    {
      op->vtkCompositeAnimationPlayer::RemoveAllTimeSteps();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeAnimationPlayer_SetFramesPerTimestep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFramesPerTimestep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeAnimationPlayer *op = static_cast<vtkCompositeAnimationPlayer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFramesPerTimestep(temp0);
    }
    else
    {
      op->vtkCompositeAnimationPlayer::SetFramesPerTimestep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeAnimationPlayer_Methods[] = {
  {"IsTypeOf", PyvtkCompositeAnimationPlayer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeAnimationPlayer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeAnimationPlayer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositeAnimationPlayer\nC++: static vtkCompositeAnimationPlayer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeAnimationPlayer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeAnimationPlayer\nC++: vtkCompositeAnimationPlayer *NewInstance()\n\n"},
  {"SetPlayMode", PyvtkCompositeAnimationPlayer_SetPlayMode, METH_VARARGS,
   "V.SetPlayMode(int)\nC++: virtual void SetPlayMode(int _arg)\n\nGet/Set the play mode\n"},
  {"GetPlayMode", PyvtkCompositeAnimationPlayer_GetPlayMode, METH_VARARGS,
   "V.GetPlayMode() -> int\nC++: virtual int GetPlayMode()\n\nGet/Set the play mode\n"},
  {"SetNumberOfFrames", PyvtkCompositeAnimationPlayer_SetNumberOfFrames, METH_VARARGS,
   "V.SetNumberOfFrames(int)\nC++: void SetNumberOfFrames(int val)\n\nForwarded to vtkSequenceAnimationPlayer\n"},
  {"SetDuration", PyvtkCompositeAnimationPlayer_SetDuration, METH_VARARGS,
   "V.SetDuration(int)\nC++: void SetDuration(int val)\n\nForwarded to vtkRealtimeAnimationPlayer.\n"},
  {"AddTimeStep", PyvtkCompositeAnimationPlayer_AddTimeStep, METH_VARARGS,
   "V.AddTimeStep(float)\nC++: void AddTimeStep(double val)\n\nForwarded to vtkTimestepsAnimationPlayer.\n"},
  {"RemoveAllTimeSteps", PyvtkCompositeAnimationPlayer_RemoveAllTimeSteps, METH_VARARGS,
   "V.RemoveAllTimeSteps()\nC++: void RemoveAllTimeSteps()\n\nForwarded to vtkTimestepsAnimationPlayer.\n"},
  {"SetFramesPerTimestep", PyvtkCompositeAnimationPlayer_SetFramesPerTimestep, METH_VARARGS,
   "V.SetFramesPerTimestep(int)\nC++: void SetFramesPerTimestep(int val)\n\nForwarded to vtkTimestepsAnimationPlayer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeAnimationPlayer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkCompositeAnimationPlayer", // tp_name
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
  PyvtkCompositeAnimationPlayer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeAnimationPlayer_StaticNew()
{
  return vtkCompositeAnimationPlayer::New();
}

PyObject *PyvtkCompositeAnimationPlayer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeAnimationPlayer_Type, PyvtkCompositeAnimationPlayer_Methods,
    "vtkCompositeAnimationPlayer",
 &PyvtkCompositeAnimationPlayer_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeAnimationPlayer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAnimationPlayer_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCompositeAnimationPlayer_Modes_Type);
  PyvtkCompositeAnimationPlayer_Modes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkCompositeAnimationPlayer_Modes_Type);

  o = (PyObject *)&PyvtkCompositeAnimationPlayer_Modes_Type;
  if (PyDict_SetItemString(d, "Modes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkCompositeAnimationPlayer::Modes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "SEQUENCE", vtkCompositeAnimationPlayer::SEQUENCE },
        { "REAL_TIME", vtkCompositeAnimationPlayer::REAL_TIME },
        { "SNAP_TO_TIMESTEPS", vtkCompositeAnimationPlayer::SNAP_TO_TIMESTEPS },
      };

    o = PyvtkCompositeAnimationPlayer_Modes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeAnimationPlayer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeAnimationPlayer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeAnimationPlayer", o) != 0)
  {
    Py_DECREF(o);
  }

}

