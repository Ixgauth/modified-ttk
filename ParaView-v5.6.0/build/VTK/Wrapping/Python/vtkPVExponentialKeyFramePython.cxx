// python wrapper for vtkPVExponentialKeyFrame
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
#include "vtkPVExponentialKeyFrame.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVExponentialKeyFrame(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVExponentialKeyFrame_ClassNew(); }

#ifndef DECLARED_PyvtkPVKeyFrame_ClassNew
extern "C" { PyObject *PyvtkPVKeyFrame_ClassNew(); }
#define DECLARED_PyvtkPVKeyFrame_ClassNew
#endif

static const char *PyvtkPVExponentialKeyFrame_Doc =
  "vtkPVExponentialKeyFrame - Interplates lineraly between consecutive\nkey frames.\n\n"
  "Superclass: vtkPVKeyFrame\n\n"
;


static PyObject *
PyvtkPVExponentialKeyFrame_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVExponentialKeyFrame::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVExponentialKeyFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVExponentialKeyFrame *tempr = vtkPVExponentialKeyFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVExponentialKeyFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVExponentialKeyFrame::NewInstance());

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
PyvtkPVExponentialKeyFrame_UpdateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

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
      op->vtkPVExponentialKeyFrame::UpdateValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_SetBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBase(temp0);
    }
    else
    {
      op->vtkPVExponentialKeyFrame::SetBase(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_GetBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBase() :
      op->vtkPVExponentialKeyFrame::GetBase());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_SetStartPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartPower(temp0);
    }
    else
    {
      op->vtkPVExponentialKeyFrame::SetStartPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_GetStartPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartPower() :
      op->vtkPVExponentialKeyFrame::GetStartPower());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_SetEndPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndPower(temp0);
    }
    else
    {
      op->vtkPVExponentialKeyFrame::SetEndPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVExponentialKeyFrame_GetEndPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVExponentialKeyFrame *op = static_cast<vtkPVExponentialKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndPower() :
      op->vtkPVExponentialKeyFrame::GetEndPower());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVExponentialKeyFrame_Methods[] = {
  {"IsTypeOf", PyvtkPVExponentialKeyFrame_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVExponentialKeyFrame_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVExponentialKeyFrame_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVExponentialKeyFrame\nC++: static vtkPVExponentialKeyFrame *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVExponentialKeyFrame_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVExponentialKeyFrame\nC++: vtkPVExponentialKeyFrame *NewInstance()\n\n"},
  {"UpdateValue", PyvtkPVExponentialKeyFrame_UpdateValue, METH_VARARGS,
   "V.UpdateValue(float, vtkPVAnimationCue, vtkPVKeyFrame)\nC++: void UpdateValue(double currenttime, vtkPVAnimationCue *cue,\n    vtkPVKeyFrame *next) override;\n\nThis method will do the actual interpolation. currenttime is\nnormalized to the time range between this key frame and the next\nkey frame.\n"},
  {"SetBase", PyvtkPVExponentialKeyFrame_SetBase, METH_VARARGS,
   "V.SetBase(float)\nC++: virtual void SetBase(double _arg)\n\nBase to be used for exponential function.\n"},
  {"GetBase", PyvtkPVExponentialKeyFrame_GetBase, METH_VARARGS,
   "V.GetBase() -> float\nC++: virtual double GetBase()\n\nBase to be used for exponential function.\n"},
  {"SetStartPower", PyvtkPVExponentialKeyFrame_SetStartPower, METH_VARARGS,
   "V.SetStartPower(float)\nC++: virtual void SetStartPower(double _arg)\n\n"},
  {"GetStartPower", PyvtkPVExponentialKeyFrame_GetStartPower, METH_VARARGS,
   "V.GetStartPower() -> float\nC++: virtual double GetStartPower()\n\n"},
  {"SetEndPower", PyvtkPVExponentialKeyFrame_SetEndPower, METH_VARARGS,
   "V.SetEndPower(float)\nC++: virtual void SetEndPower(double _arg)\n\n"},
  {"GetEndPower", PyvtkPVExponentialKeyFrame_GetEndPower, METH_VARARGS,
   "V.GetEndPower() -> float\nC++: virtual double GetEndPower()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVExponentialKeyFrame_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPVExponentialKeyFrame", // tp_name
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
  PyvtkPVExponentialKeyFrame_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVExponentialKeyFrame_StaticNew()
{
  return vtkPVExponentialKeyFrame::New();
}

PyObject *PyvtkPVExponentialKeyFrame_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVExponentialKeyFrame_Type, PyvtkPVExponentialKeyFrame_Methods,
    "vtkPVExponentialKeyFrame",
 &PyvtkPVExponentialKeyFrame_StaticNew);

  PyTypeObject *pytype = &PyvtkPVExponentialKeyFrame_Type;

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

void PyVTKAddFile_vtkPVExponentialKeyFrame(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVExponentialKeyFrame_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVExponentialKeyFrame", o) != 0)
  {
    Py_DECREF(o);
  }

}

