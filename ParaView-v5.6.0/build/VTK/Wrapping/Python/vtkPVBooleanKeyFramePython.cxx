// python wrapper for vtkPVBooleanKeyFrame
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
#include "vtkPVBooleanKeyFrame.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVBooleanKeyFrame(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVBooleanKeyFrame_ClassNew(); }

#ifndef DECLARED_PyvtkPVKeyFrame_ClassNew
extern "C" { PyObject *PyvtkPVKeyFrame_ClassNew(); }
#define DECLARED_PyvtkPVKeyFrame_ClassNew
#endif

static const char *PyvtkPVBooleanKeyFrame_Doc =
  "vtkPVBooleanKeyFrame - Empty key frame.\n\n"
  "Superclass: vtkPVKeyFrame\n\n"
  "Can be used to toggle boolean properties.\n\n";


static PyObject *
PyvtkPVBooleanKeyFrame_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVBooleanKeyFrame::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBooleanKeyFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBooleanKeyFrame *op = static_cast<vtkPVBooleanKeyFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVBooleanKeyFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBooleanKeyFrame_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVBooleanKeyFrame *tempr = vtkPVBooleanKeyFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVBooleanKeyFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBooleanKeyFrame *op = static_cast<vtkPVBooleanKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVBooleanKeyFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVBooleanKeyFrame::NewInstance());

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
PyvtkPVBooleanKeyFrame_UpdateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVBooleanKeyFrame *op = static_cast<vtkPVBooleanKeyFrame *>(vp);

  double temp0;
  vtkPVAnimationCue *temp1 = nullptr;
  vtkPVKeyFrame *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVAnimationCue") &&
      ap.GetVTKObject(temp2, "vtkPVKeyFrame"))
  {
    if (ap.IsBound())
    {
      op->UpdateValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVBooleanKeyFrame::UpdateValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVBooleanKeyFrame_Methods[] = {
  {"IsTypeOf", PyvtkPVBooleanKeyFrame_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVBooleanKeyFrame_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVBooleanKeyFrame_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVBooleanKeyFrame\nC++: static vtkPVBooleanKeyFrame *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVBooleanKeyFrame_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVBooleanKeyFrame\nC++: vtkPVBooleanKeyFrame *NewInstance()\n\n"},
  {"UpdateValue", PyvtkPVBooleanKeyFrame_UpdateValue, METH_VARARGS,
   "V.UpdateValue(float, vtkPVAnimationCue, vtkPVKeyFrame)\nC++: void UpdateValue(double currenttime,\n    vtkPVAnimationCue *cueProxy, vtkPVKeyFrame *next) override;\n\nThis method will do the actual interpolation. currenttime is\nnormalized to the time range between this key frame and the next\nkey frame.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVBooleanKeyFrame_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPVBooleanKeyFrame", // tp_name
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
  PyvtkPVBooleanKeyFrame_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVBooleanKeyFrame_StaticNew()
{
  return vtkPVBooleanKeyFrame::New();
}

PyObject *PyvtkPVBooleanKeyFrame_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVBooleanKeyFrame_Type, PyvtkPVBooleanKeyFrame_Methods,
    "vtkPVBooleanKeyFrame",
 &PyvtkPVBooleanKeyFrame_StaticNew);

  PyTypeObject *pytype = &PyvtkPVBooleanKeyFrame_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVKeyFrame_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVBooleanKeyFrame(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVBooleanKeyFrame_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVBooleanKeyFrame", o) != 0)
  {
    Py_DECREF(o);
  }

}

