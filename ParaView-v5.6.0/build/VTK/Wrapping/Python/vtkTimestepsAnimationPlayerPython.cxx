// python wrapper for vtkTimestepsAnimationPlayer
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
#include "vtkTimestepsAnimationPlayer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTimestepsAnimationPlayer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTimestepsAnimationPlayer_ClassNew(); }

#ifndef DECLARED_PyvtkAnimationPlayer_ClassNew
extern "C" { PyObject *PyvtkAnimationPlayer_ClassNew(); }
#define DECLARED_PyvtkAnimationPlayer_ClassNew
#endif

static const char *PyvtkTimestepsAnimationPlayer_Doc =
  "vtkTimestepsAnimationPlayer - vtkAnimationPlayer subclass that plays\nthrough a discrete set of time values.\n\n"
  "Superclass: vtkAnimationPlayer\n\n"
  "Player to play an animation scene through a discrete set of time\n"
  "values. FramesPerTimestep controls how many frames are generated for\n"
  "each time value.\n\n";


static PyObject *
PyvtkTimestepsAnimationPlayer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTimestepsAnimationPlayer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTimestepsAnimationPlayer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTimestepsAnimationPlayer *tempr = vtkTimestepsAnimationPlayer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimestepsAnimationPlayer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTimestepsAnimationPlayer::NewInstance());

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
PyvtkTimestepsAnimationPlayer_AddTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

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
      op->vtkTimestepsAnimationPlayer::AddTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_RemoveTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveTimeStep(temp0);
    }
    else
    {
      op->vtkTimestepsAnimationPlayer::RemoveTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_RemoveAllTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllTimeSteps();
    }
    else
    {
      op->vtkTimestepsAnimationPlayer::RemoveAllTimeSteps();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkTimestepsAnimationPlayer::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_SetFramesPerTimestep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFramesPerTimestep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  unsigned long temp0;
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
      op->vtkTimestepsAnimationPlayer::SetFramesPerTimestep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_GetFramesPerTimestepMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFramesPerTimestepMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetFramesPerTimestepMinValue() :
      op->vtkTimestepsAnimationPlayer::GetFramesPerTimestepMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_GetFramesPerTimestepMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFramesPerTimestepMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetFramesPerTimestepMaxValue() :
      op->vtkTimestepsAnimationPlayer::GetFramesPerTimestepMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_GetFramesPerTimestep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFramesPerTimestep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetFramesPerTimestep() :
      op->vtkTimestepsAnimationPlayer::GetFramesPerTimestep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_GetNextTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNextTimeStep(temp0) :
      op->vtkTimestepsAnimationPlayer::GetNextTimeStep(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimestepsAnimationPlayer_GetPreviousTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreviousTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimestepsAnimationPlayer *op = static_cast<vtkTimestepsAnimationPlayer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPreviousTimeStep(temp0) :
      op->vtkTimestepsAnimationPlayer::GetPreviousTimeStep(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTimestepsAnimationPlayer_Methods[] = {
  {"IsTypeOf", PyvtkTimestepsAnimationPlayer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTimestepsAnimationPlayer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTimestepsAnimationPlayer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTimestepsAnimationPlayer\nC++: static vtkTimestepsAnimationPlayer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTimestepsAnimationPlayer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTimestepsAnimationPlayer\nC++: vtkTimestepsAnimationPlayer *NewInstance()\n\n"},
  {"AddTimeStep", PyvtkTimestepsAnimationPlayer_AddTimeStep, METH_VARARGS,
   "V.AddTimeStep(float)\nC++: void AddTimeStep(double time)\n\nAdd/Remove timesteps.\n"},
  {"RemoveTimeStep", PyvtkTimestepsAnimationPlayer_RemoveTimeStep, METH_VARARGS,
   "V.RemoveTimeStep(float)\nC++: void RemoveTimeStep(double time)\n\nAdd/Remove timesteps.\n"},
  {"RemoveAllTimeSteps", PyvtkTimestepsAnimationPlayer_RemoveAllTimeSteps, METH_VARARGS,
   "V.RemoveAllTimeSteps()\nC++: void RemoveAllTimeSteps()\n\nRemove all timesteps.\n"},
  {"GetNumberOfTimeSteps", PyvtkTimestepsAnimationPlayer_GetNumberOfTimeSteps, METH_VARARGS,
   "V.GetNumberOfTimeSteps() -> int\nC++: unsigned int GetNumberOfTimeSteps()\n\nGet number of timesteps.\n"},
  {"SetFramesPerTimestep", PyvtkTimestepsAnimationPlayer_SetFramesPerTimestep, METH_VARARGS,
   "V.SetFramesPerTimestep(int)\nC++: virtual void SetFramesPerTimestep(unsigned long _arg)\n\nGet/Set the number of frames per timstep.\n"},
  {"GetFramesPerTimestepMinValue", PyvtkTimestepsAnimationPlayer_GetFramesPerTimestepMinValue, METH_VARARGS,
   "V.GetFramesPerTimestepMinValue() -> int\nC++: virtual unsigned long GetFramesPerTimestepMinValue()\n\nGet/Set the number of frames per timstep.\n"},
  {"GetFramesPerTimestepMaxValue", PyvtkTimestepsAnimationPlayer_GetFramesPerTimestepMaxValue, METH_VARARGS,
   "V.GetFramesPerTimestepMaxValue() -> int\nC++: virtual unsigned long GetFramesPerTimestepMaxValue()\n\nGet/Set the number of frames per timstep.\n"},
  {"GetFramesPerTimestep", PyvtkTimestepsAnimationPlayer_GetFramesPerTimestep, METH_VARARGS,
   "V.GetFramesPerTimestep() -> int\nC++: virtual unsigned long GetFramesPerTimestep()\n\nGet/Set the number of frames per timstep.\n"},
  {"GetNextTimeStep", PyvtkTimestepsAnimationPlayer_GetNextTimeStep, METH_VARARGS,
   "V.GetNextTimeStep(float) -> float\nC++: double GetNextTimeStep(double time)\n\nReturns the timestep value after the given timestep. If no value\nexists, returns the argument time itself.\n"},
  {"GetPreviousTimeStep", PyvtkTimestepsAnimationPlayer_GetPreviousTimeStep, METH_VARARGS,
   "V.GetPreviousTimeStep(float) -> float\nC++: double GetPreviousTimeStep(double time)\n\nReturns the timestep value before the given timestep. If no value\nexists, returns the argument time itself.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTimestepsAnimationPlayer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkTimestepsAnimationPlayer", // tp_name
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
  PyvtkTimestepsAnimationPlayer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTimestepsAnimationPlayer_StaticNew()
{
  return vtkTimestepsAnimationPlayer::New();
}

PyObject *PyvtkTimestepsAnimationPlayer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTimestepsAnimationPlayer_Type, PyvtkTimestepsAnimationPlayer_Methods,
    "vtkTimestepsAnimationPlayer",
 &PyvtkTimestepsAnimationPlayer_StaticNew);

  PyTypeObject *pytype = &PyvtkTimestepsAnimationPlayer_Type;

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

void PyVTKAddFile_vtkTimestepsAnimationPlayer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTimestepsAnimationPlayer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTimestepsAnimationPlayer", o) != 0)
  {
    Py_DECREF(o);
  }

}

