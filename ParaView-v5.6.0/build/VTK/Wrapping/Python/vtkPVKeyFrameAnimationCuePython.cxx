// python wrapper for vtkPVKeyFrameAnimationCue
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
#include "vtkPVKeyFrameAnimationCue.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVKeyFrameAnimationCue(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVKeyFrameAnimationCue_ClassNew(); }

#ifndef DECLARED_PyvtkPVAnimationCue_ClassNew
extern "C" { PyObject *PyvtkPVAnimationCue_ClassNew(); }
#define DECLARED_PyvtkPVAnimationCue_ClassNew
#endif

static const char *PyvtkPVKeyFrameAnimationCue_Doc =
  "vtkPVKeyFrameAnimationCue - vtkPVKeyFrameAnimationCue is a\nspecialization of vtkPVAnimationCue that uses the\nvtkPVKeyFrameCueManipulator as the manipulator.\n\n"
  "Superclass: vtkPVAnimationCue\n\n"
;


static PyObject *
PyvtkPVKeyFrameAnimationCue_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVKeyFrameAnimationCue::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCue *op = static_cast<vtkPVKeyFrameAnimationCue *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVKeyFrameAnimationCue::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVKeyFrameAnimationCue *tempr = vtkPVKeyFrameAnimationCue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCue *op = static_cast<vtkPVKeyFrameAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVKeyFrameAnimationCue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVKeyFrameAnimationCue::NewInstance());

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
PyvtkPVKeyFrameAnimationCue_AddKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCue *op = static_cast<vtkPVKeyFrameAnimationCue *>(vp);

  vtkPVKeyFrame *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVKeyFrame"))
  {
    int tempr = (ap.IsBound() ?
      op->AddKeyFrame(temp0) :
      op->vtkPVKeyFrameAnimationCue::AddKeyFrame(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCue_GetLastAddedKeyFrameIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastAddedKeyFrameIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCue *op = static_cast<vtkPVKeyFrameAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastAddedKeyFrameIndex() :
      op->vtkPVKeyFrameAnimationCue::GetLastAddedKeyFrameIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCue_RemoveKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCue *op = static_cast<vtkPVKeyFrameAnimationCue *>(vp);

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
      op->vtkPVKeyFrameAnimationCue::RemoveKeyFrame(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVKeyFrameAnimationCue_RemoveAllKeyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllKeyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVKeyFrameAnimationCue *op = static_cast<vtkPVKeyFrameAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllKeyFrames();
    }
    else
    {
      op->vtkPVKeyFrameAnimationCue::RemoveAllKeyFrames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVKeyFrameAnimationCue_Methods[] = {
  {"IsTypeOf", PyvtkPVKeyFrameAnimationCue_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVKeyFrameAnimationCue_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVKeyFrameAnimationCue_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVKeyFrameAnimationCue\nC++: static vtkPVKeyFrameAnimationCue *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVKeyFrameAnimationCue_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVKeyFrameAnimationCue\nC++: vtkPVKeyFrameAnimationCue *NewInstance()\n\n"},
  {"AddKeyFrame", PyvtkPVKeyFrameAnimationCue_AddKeyFrame, METH_VARARGS,
   "V.AddKeyFrame(vtkPVKeyFrame) -> int\nC++: int AddKeyFrame(vtkPVKeyFrame *keyframe)\n\nForwarded to the internal vtkPVKeyFrameCueManipulator.\n"},
  {"GetLastAddedKeyFrameIndex", PyvtkPVKeyFrameAnimationCue_GetLastAddedKeyFrameIndex, METH_VARARGS,
   "V.GetLastAddedKeyFrameIndex() -> int\nC++: int GetLastAddedKeyFrameIndex()\n\nForwarded to the internal vtkPVKeyFrameCueManipulator.\n"},
  {"RemoveKeyFrame", PyvtkPVKeyFrameAnimationCue_RemoveKeyFrame, METH_VARARGS,
   "V.RemoveKeyFrame(vtkPVKeyFrame)\nC++: void RemoveKeyFrame(vtkPVKeyFrame *)\n\nForwarded to the internal vtkPVKeyFrameCueManipulator.\n"},
  {"RemoveAllKeyFrames", PyvtkPVKeyFrameAnimationCue_RemoveAllKeyFrames, METH_VARARGS,
   "V.RemoveAllKeyFrames()\nC++: void RemoveAllKeyFrames()\n\nForwarded to the internal vtkPVKeyFrameCueManipulator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVKeyFrameAnimationCue_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPVKeyFrameAnimationCue", // tp_name
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
  PyvtkPVKeyFrameAnimationCue_Doc, // tp_doc
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

PyObject *PyvtkPVKeyFrameAnimationCue_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVKeyFrameAnimationCue_Type, PyvtkPVKeyFrameAnimationCue_Methods,
    "vtkPVKeyFrameAnimationCue",
 nullptr);

  PyTypeObject *pytype = &PyvtkPVKeyFrameAnimationCue_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVAnimationCue_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVKeyFrameAnimationCue(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVKeyFrameAnimationCue_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVKeyFrameAnimationCue", o) != 0)
  {
    Py_DECREF(o);
  }

}

