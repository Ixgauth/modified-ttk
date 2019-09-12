// python wrapper for vtkPVSinusoidKeyFrame
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
#include "vtkPVSinusoidKeyFrame.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVSinusoidKeyFrame(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVSinusoidKeyFrame_ClassNew(); }

#ifndef DECLARED_PyvtkPVKeyFrame_ClassNew
extern "C" { PyObject *PyvtkPVKeyFrame_ClassNew(); }
#define DECLARED_PyvtkPVKeyFrame_ClassNew
#endif

static const char *PyvtkPVSinusoidKeyFrame_Doc =
  "vtkPVSinusoidKeyFrame - Interplates a sinusoid.\n\n"
  "Superclass: vtkPVKeyFrame\n\n"
  "At any given time t, the resultant value obtained from this keyframe\n"
  "is given by : value = this->Offset + (Key Value) * Sin (2*pi*theta);\n"
  "where theta = this->Frequency*t + (this->Phase/360). As is clear from\n"
  " the equation, the amplitude of the wave is obtained from the value\n"
  "of the keyframe.\n\n";


static PyObject *
PyvtkPVSinusoidKeyFrame_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVSinusoidKeyFrame::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSinusoidKeyFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVSinusoidKeyFrame *tempr = vtkPVSinusoidKeyFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSinusoidKeyFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSinusoidKeyFrame::NewInstance());

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
PyvtkPVSinusoidKeyFrame_UpdateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

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
      op->vtkPVSinusoidKeyFrame::UpdateValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_SetPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPhase(temp0);
    }
    else
    {
      op->vtkPVSinusoidKeyFrame::SetPhase(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_GetPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPhase() :
      op->vtkPVSinusoidKeyFrame::GetPhase());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_SetFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrequency(temp0);
    }
    else
    {
      op->vtkPVSinusoidKeyFrame::SetFrequency(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_GetFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFrequency() :
      op->vtkPVSinusoidKeyFrame::GetFrequency());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkPVSinusoidKeyFrame::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSinusoidKeyFrame_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSinusoidKeyFrame *op = static_cast<vtkPVSinusoidKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkPVSinusoidKeyFrame::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVSinusoidKeyFrame_Methods[] = {
  {"IsTypeOf", PyvtkPVSinusoidKeyFrame_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVSinusoidKeyFrame_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVSinusoidKeyFrame_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVSinusoidKeyFrame\nC++: static vtkPVSinusoidKeyFrame *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVSinusoidKeyFrame_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVSinusoidKeyFrame\nC++: vtkPVSinusoidKeyFrame *NewInstance()\n\n"},
  {"UpdateValue", PyvtkPVSinusoidKeyFrame_UpdateValue, METH_VARARGS,
   "V.UpdateValue(float, vtkPVAnimationCue, vtkPVKeyFrame)\nC++: void UpdateValue(double currenttime, vtkPVAnimationCue *cue,\n    vtkPVKeyFrame *next) override;\n\nThis method will do the actual interpolation. currenttime is\nnormalized to the time range between this key frame and the next\nkey frame.\n"},
  {"SetPhase", PyvtkPVSinusoidKeyFrame_SetPhase, METH_VARARGS,
   "V.SetPhase(float)\nC++: virtual void SetPhase(double _arg)\n\nGet/Set the phase for the sine wave.\n"},
  {"GetPhase", PyvtkPVSinusoidKeyFrame_GetPhase, METH_VARARGS,
   "V.GetPhase() -> float\nC++: virtual double GetPhase()\n\nGet/Set the phase for the sine wave.\n"},
  {"SetFrequency", PyvtkPVSinusoidKeyFrame_SetFrequency, METH_VARARGS,
   "V.SetFrequency(float)\nC++: virtual void SetFrequency(double _arg)\n\nGet/Set the frequency for the sine wave in number of cycles for\nthe entire length of this keyframe i.e. until the next key frame.\n"},
  {"GetFrequency", PyvtkPVSinusoidKeyFrame_GetFrequency, METH_VARARGS,
   "V.GetFrequency() -> float\nC++: virtual double GetFrequency()\n\nGet/Set the frequency for the sine wave in number of cycles for\nthe entire length of this keyframe i.e. until the next key frame.\n"},
  {"SetOffset", PyvtkPVSinusoidKeyFrame_SetOffset, METH_VARARGS,
   "V.SetOffset(float)\nC++: virtual void SetOffset(double _arg)\n\nGet/Set the Wave offset.\n"},
  {"GetOffset", PyvtkPVSinusoidKeyFrame_GetOffset, METH_VARARGS,
   "V.GetOffset() -> float\nC++: virtual double GetOffset()\n\nGet/Set the Wave offset.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVSinusoidKeyFrame_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPVSinusoidKeyFrame", // tp_name
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
  PyvtkPVSinusoidKeyFrame_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVSinusoidKeyFrame_StaticNew()
{
  return vtkPVSinusoidKeyFrame::New();
}

PyObject *PyvtkPVSinusoidKeyFrame_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVSinusoidKeyFrame_Type, PyvtkPVSinusoidKeyFrame_Methods,
    "vtkPVSinusoidKeyFrame",
 &PyvtkPVSinusoidKeyFrame_StaticNew);

  PyTypeObject *pytype = &PyvtkPVSinusoidKeyFrame_Type;

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

void PyVTKAddFile_vtkPVSinusoidKeyFrame(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVSinusoidKeyFrame_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVSinusoidKeyFrame", o) != 0)
  {
    Py_DECREF(o);
  }

}

