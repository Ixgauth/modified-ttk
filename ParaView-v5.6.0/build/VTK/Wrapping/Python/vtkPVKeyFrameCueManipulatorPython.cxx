// python wrapper for vtkPVKeyFrameCueManipulator
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
#include "vtkPVKeyFrameCueManipulator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVKeyFrameCueManipulator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVKeyFrameCueManipulator_ClassNew(); }

#ifndef DECLARED_PyvtkPVCueManipulator_ClassNew
extern "C" { PyObject *PyvtkPVCueManipulator_ClassNew(); }
#define DECLARED_PyvtkPVCueManipulator_ClassNew
#endif

static const char *PyvtkPVKeyFrameCueManipulator_Doc =
  "vtkPVKeyFrameCueManipulator - animation manipulator that uses\nkeyframes to generate the animation.\n\n"
  "Superclass: vtkPVCueManipulator\n\n"
  "This is a Manipulator that support key framing. Key frames are stored\n"
  "in a vector ordered by their keyframe time. Ordering of keyframes\n"
  "with same key time is arbitrary. This class ensures that the\n"
  "keyframes are always maintained in the correct order. How the values\n"
  "for the animated property are interpolated between successive\n"
  "keyframes depends on the type of the preceding keyframe. Thus this\n"
  "class doesn't perform the interpolation instead delegates it to the\n"
  "keyframe object affecting the property at the current time value.\n"
  "\\li vtkPVCueManipulator::StateModifiedEvent -\n"
  "This event is fired when the manipulator modifies the animated proxy.\n"
  "\\li vtkCommand::ModifiedEvent -\n"
  "is fired when the keyframes are changed i.e. added/removed/modified.\n\n"
  "@sa\n"
  "vtkPVAnimationCue vtkPVCueManipulator\n\n";


static PyObject *
PyvtkPVKeyFrameCueManipulator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVKeyFrameCueManipulator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVKeyFrameCueManipulator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVKeyFrameCueManipulator *tempr = vtkPVKeyFrameCueManipulator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVKeyFrameCueManipulator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVKeyFrameCueManipulator::NewInstance());

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
PyvtkPVKeyFrameCueManipulator_AddKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  vtkPVKeyFrame *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVKeyFrame"))
  {
    int tempr = (ap.IsBound() ?
      op->AddKeyFrame(temp0) :
      op->vtkPVKeyFrameCueManipulator::AddKeyFrame(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetLastAddedKeyFrameIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastAddedKeyFrameIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastAddedKeyFrameIndex() :
      op->vtkPVKeyFrameCueManipulator::GetLastAddedKeyFrameIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_RemoveKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  vtkPVKeyFrame *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVKeyFrame"))
  {
    if (ap.IsBound())
    {
      op->RemoveKeyFrame(temp0);
    }
    else
    {
      op->vtkPVKeyFrameCueManipulator::RemoveKeyFrame(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_RemoveAllKeyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllKeyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllKeyFrames();
    }
    else
    {
      op->vtkPVKeyFrameCueManipulator::RemoveAllKeyFrames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVKeyFrame *tempr = (ap.IsBound() ?
      op->GetKeyFrame(temp0) :
      op->vtkPVKeyFrameCueManipulator::GetKeyFrame(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetStartKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVKeyFrame *tempr = (ap.IsBound() ?
      op->GetStartKeyFrame(temp0) :
      op->vtkPVKeyFrameCueManipulator::GetStartKeyFrame(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetEndKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVKeyFrame *tempr = (ap.IsBound() ?
      op->GetEndKeyFrame(temp0) :
      op->vtkPVKeyFrameCueManipulator::GetEndKeyFrame(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetNextKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  vtkPVKeyFrame *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVKeyFrame"))
  {
    vtkPVKeyFrame *tempr = (ap.IsBound() ?
      op->GetNextKeyFrame(temp0) :
      op->vtkPVKeyFrameCueManipulator::GetNextKeyFrame(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetPreviousKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreviousKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  vtkPVKeyFrame *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVKeyFrame"))
  {
    vtkPVKeyFrame *tempr = (ap.IsBound() ?
      op->GetPreviousKeyFrame(temp0) :
      op->vtkPVKeyFrameCueManipulator::GetPreviousKeyFrame(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetNumberOfKeyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfKeyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfKeyFrames() :
      op->vtkPVKeyFrameCueManipulator::GetNumberOfKeyFrames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameCueManipulator_GetKeyFrameAtIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyFrameAtIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameCueManipulator *op = static_cast<vtkPVKeyFrameCueManipulator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVKeyFrame *tempr = (ap.IsBound() ?
      op->GetKeyFrameAtIndex(temp0) :
      op->vtkPVKeyFrameCueManipulator::GetKeyFrameAtIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVKeyFrameCueManipulator_Methods[] = {
  {"IsTypeOf", PyvtkPVKeyFrameCueManipulator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVKeyFrameCueManipulator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVKeyFrameCueManipulator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVKeyFrameCueManipulator\nC++: static vtkPVKeyFrameCueManipulator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVKeyFrameCueManipulator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVKeyFrameCueManipulator\nC++: vtkPVKeyFrameCueManipulator *NewInstance()\n\n"},
  {"AddKeyFrame", PyvtkPVKeyFrameCueManipulator_AddKeyFrame, METH_VARARGS,
   "V.AddKeyFrame(vtkPVKeyFrame) -> int\nC++: int AddKeyFrame(vtkPVKeyFrame *keyframe)\n\nAdd a key frame. Key frames are stored in a map, keyed by the\nKeyFrameTime. If two keyframes have the same key time, only one\nof then will be considered. It returns the index of the added\nframe in the collection.\n"},
  {"GetLastAddedKeyFrameIndex", PyvtkPVKeyFrameCueManipulator_GetLastAddedKeyFrameIndex, METH_VARARGS,
   "V.GetLastAddedKeyFrameIndex() -> int\nC++: virtual int GetLastAddedKeyFrameIndex()\n\nThis method returns the index of the last added key frame. Note\nthat this index is valid only until none of the keyframes are\nmodified. This is even provided as a method so that this value\ncan be accessed via properties.\n"},
  {"RemoveKeyFrame", PyvtkPVKeyFrameCueManipulator_RemoveKeyFrame, METH_VARARGS,
   "V.RemoveKeyFrame(vtkPVKeyFrame)\nC++: void RemoveKeyFrame(vtkPVKeyFrame *keyframe)\n\nRemoves a key frame at the specified time, if any.\n"},
  {"RemoveAllKeyFrames", PyvtkPVKeyFrameCueManipulator_RemoveAllKeyFrames, METH_VARARGS,
   "V.RemoveAllKeyFrames()\nC++: void RemoveAllKeyFrames()\n\nRemoves all key frames, if any.\n"},
  {"GetKeyFrame", PyvtkPVKeyFrameCueManipulator_GetKeyFrame, METH_VARARGS,
   "V.GetKeyFrame(float) -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *GetKeyFrame(double time)\n\nReturns a pointer to the key frame at the given time. If no key\nframe exists at the given time, it returns NULL.\n"},
  {"GetStartKeyFrame", PyvtkPVKeyFrameCueManipulator_GetStartKeyFrame, METH_VARARGS,
   "V.GetStartKeyFrame(float) -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *GetStartKeyFrame(double time)\n\nGiven the current time, determine the key frames between which\nthe current time lies. Returns the key frame time. If the current\ntime coincides with a key frame, both methods\n(GetStartKeyFrameTime and GetEndKeyFrameTime) return that key\nkeyframes time which is same as time. If the current time is\nbefore the first key frame or after the last key frame, then this\nmethod return -1.\n"},
  {"GetEndKeyFrame", PyvtkPVKeyFrameCueManipulator_GetEndKeyFrame, METH_VARARGS,
   "V.GetEndKeyFrame(float) -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *GetEndKeyFrame(double time)\n\nGiven the current time, determine the key frames between which\nthe current time lies. Returns the key frame time. If the current\ntime coincides with a key frame, both methods\n(GetStartKeyFrameTime and GetEndKeyFrameTime) return that key\nkeyframes time which is same as time. If the current time is\nbefore the first key frame or after the last key frame, then this\nmethod return -1.\n"},
  {"GetNextKeyFrame", PyvtkPVKeyFrameCueManipulator_GetNextKeyFrame, METH_VARARGS,
   "V.GetNextKeyFrame(vtkPVKeyFrame) -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *GetNextKeyFrame(vtkPVKeyFrame *keyFrame)\n\nGet the next/previous key frame relative to argument key frame.\nReturns NULL when no next/previous frame exists.\n"},
  {"GetPreviousKeyFrame", PyvtkPVKeyFrameCueManipulator_GetPreviousKeyFrame, METH_VARARGS,
   "V.GetPreviousKeyFrame(vtkPVKeyFrame) -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *GetPreviousKeyFrame(vtkPVKeyFrame *keyFrame)\n\nGet the next/previous key frame relative to argument key frame.\nReturns NULL when no next/previous frame exists.\n"},
  {"GetNumberOfKeyFrames", PyvtkPVKeyFrameCueManipulator_GetNumberOfKeyFrames, METH_VARARGS,
   "V.GetNumberOfKeyFrames() -> int\nC++: unsigned int GetNumberOfKeyFrames()\n\nGet the number of keyframes.\n"},
  {"GetKeyFrameAtIndex", PyvtkPVKeyFrameCueManipulator_GetKeyFrameAtIndex, METH_VARARGS,
   "V.GetKeyFrameAtIndex(int) -> vtkPVKeyFrame\nC++: vtkPVKeyFrame *GetKeyFrameAtIndex(int index)\n\nAccess the keyframe collection using the indices. Keyframes are\nsorted according to increasing key frame time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVKeyFrameCueManipulator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPVKeyFrameCueManipulator", // tp_name
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
  PyvtkPVKeyFrameCueManipulator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVKeyFrameCueManipulator_StaticNew()
{
  return vtkPVKeyFrameCueManipulator::New();
}

PyObject *PyvtkPVKeyFrameCueManipulator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVKeyFrameCueManipulator_Type, PyvtkPVKeyFrameCueManipulator_Methods,
    "vtkPVKeyFrameCueManipulator",
 &PyvtkPVKeyFrameCueManipulator_StaticNew);

  PyTypeObject *pytype = &PyvtkPVKeyFrameCueManipulator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVCueManipulator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVKeyFrameCueManipulator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVKeyFrameCueManipulator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVKeyFrameCueManipulator", o) != 0)
  {
    Py_DECREF(o);
  }

}

