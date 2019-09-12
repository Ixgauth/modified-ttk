// python wrapper for vtkPVAnimationCue
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
#include "vtkPVAnimationCue.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVAnimationCue(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVAnimationCue_ClassNew(); }

#ifndef DECLARED_PyvtkAnimationCue_ClassNew
extern "C" { PyObject *PyvtkAnimationCue_ClassNew(); }
#define DECLARED_PyvtkAnimationCue_ClassNew
#endif

static const char *PyvtkPVAnimationCue_Doc =
  "vtkPVAnimationCue - proxy for vtkAnimationCue.\n\n"
  "Superclass: vtkAnimationCue\n\n"
  "This is a proxy for vtkAnimationCue. All animation proxies are client\n"
  "side proxies. This class needs a vtkPVCueManipulator. The Manipulator\n"
  "performs the actual interpolation.\n"
  "@sa\n"
  "vtkAnimationCue vtkSMAnimationSceneProxy\n\n";


static PyObject *
PyvtkPVAnimationCue_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVAnimationCue::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVAnimationCue::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVAnimationCue *tempr = vtkPVAnimationCue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVAnimationCue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVAnimationCue::NewInstance());

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
PyvtkPVAnimationCue_SetAnimatedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimatedElement(temp0);
    }
    else
    {
      op->vtkPVAnimationCue::SetAnimatedElement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_GetAnimatedElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatedElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimatedElement() :
      op->vtkPVAnimationCue::GetAnimatedElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_SetManipulator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManipulator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  vtkPVCueManipulator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVCueManipulator"))
  {
    if (ap.IsBound())
    {
      op->SetManipulator(temp0);
    }
    else
    {
      op->vtkPVAnimationCue::SetManipulator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_GetManipulator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManipulator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCueManipulator *tempr = (ap.IsBound() ?
      op->GetManipulator() :
      op->vtkPVAnimationCue::GetManipulator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkPVAnimationCue::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPVAnimationCue::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOn();
    }
    else
    {
      op->vtkPVAnimationCue::EnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOff();
    }
    else
    {
      op->vtkPVAnimationCue::EnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_BeginUpdateAnimationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginUpdateAnimationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->BeginUpdateAnimationValues();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_SetAnimationValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetAnimationValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_EndUpdateAnimationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndUpdateAnimationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->EndUpdateAnimationValues();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_SetUseAnimationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAnimationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseAnimationTime(temp0);
    }
    else
    {
      op->vtkPVAnimationCue::SetUseAnimationTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_GetUseAnimationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAnimationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseAnimationTime() :
      op->vtkPVAnimationCue::GetUseAnimationTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPVAnimationCue::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_Tick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Tick(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVAnimationCue::Tick(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVAnimationCue_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVAnimationCue *op = static_cast<vtkPVAnimationCue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkPVAnimationCue::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVAnimationCue_Methods[] = {
  {"IsTypeOf", PyvtkPVAnimationCue_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVAnimationCue_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVAnimationCue_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVAnimationCue\nC++: static vtkPVAnimationCue *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVAnimationCue_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVAnimationCue\nC++: vtkPVAnimationCue *NewInstance()\n\n"},
  {"SetAnimatedElement", PyvtkPVAnimationCue_SetAnimatedElement, METH_VARARGS,
   "V.SetAnimatedElement(int)\nC++: virtual void SetAnimatedElement(int _arg)\n\nThe index of the element of the property this cue animates. If\nthe index is -1, the cue will animate all the elements of the\nanimated property.\n"},
  {"GetAnimatedElement", PyvtkPVAnimationCue_GetAnimatedElement, METH_VARARGS,
   "V.GetAnimatedElement() -> int\nC++: virtual int GetAnimatedElement()\n\nThe index of the element of the property this cue animates. If\nthe index is -1, the cue will animate all the elements of the\nanimated property.\n"},
  {"SetManipulator", PyvtkPVAnimationCue_SetManipulator, METH_VARARGS,
   "V.SetManipulator(vtkPVCueManipulator)\nC++: void SetManipulator(vtkPVCueManipulator *)\n\nGet/Set the manipulator used to compute values for each instance\nin the animation. Note that the time passed to the Manipulator is\nnormalized [0,1] to the extents of this cue.\n"},
  {"GetManipulator", PyvtkPVAnimationCue_GetManipulator, METH_VARARGS,
   "V.GetManipulator() -> vtkPVCueManipulator\nC++: virtual vtkPVCueManipulator *GetManipulator()\n\nGet/Set the manipulator used to compute values for each instance\nin the animation. Note that the time passed to the Manipulator is\nnormalized [0,1] to the extents of this cue.\n"},
  {"SetEnabled", PyvtkPVAnimationCue_SetEnabled, METH_VARARGS,
   "V.SetEnabled(int)\nC++: virtual void SetEnabled(int _arg)\n\nEnable/Disable this cue.\n"},
  {"GetEnabled", PyvtkPVAnimationCue_GetEnabled, METH_VARARGS,
   "V.GetEnabled() -> int\nC++: virtual int GetEnabled()\n\nEnable/Disable this cue.\n"},
  {"EnabledOn", PyvtkPVAnimationCue_EnabledOn, METH_VARARGS,
   "V.EnabledOn()\nC++: virtual void EnabledOn()\n\nEnable/Disable this cue.\n"},
  {"EnabledOff", PyvtkPVAnimationCue_EnabledOff, METH_VARARGS,
   "V.EnabledOff()\nC++: virtual void EnabledOff()\n\nEnable/Disable this cue.\n"},
  {"BeginUpdateAnimationValues", PyvtkPVAnimationCue_BeginUpdateAnimationValues, METH_VARARGS,
   "V.BeginUpdateAnimationValues()\nC++: virtual void BeginUpdateAnimationValues()\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {"SetAnimationValue", PyvtkPVAnimationCue_SetAnimationValue, METH_VARARGS,
   "V.SetAnimationValue(int, float)\nC++: virtual void SetAnimationValue(int index, double value)\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {"EndUpdateAnimationValues", PyvtkPVAnimationCue_EndUpdateAnimationValues, METH_VARARGS,
   "V.EndUpdateAnimationValues()\nC++: virtual void EndUpdateAnimationValues()\n\nUsed to update the animated item. This API makes it possible for\nvtk-level classes to update properties without actually linking\nwith the ServerManager library. This only works since they object\nare created only on the client.\n"},
  {"SetUseAnimationTime", PyvtkPVAnimationCue_SetUseAnimationTime, METH_VARARGS,
   "V.SetUseAnimationTime(bool)\nC++: virtual void SetUseAnimationTime(bool _arg)\n\nWhen set to true, the manipulator is skipped and the key frame\nvalue is set by using the ClockTime directly. false by default.\n"},
  {"GetUseAnimationTime", PyvtkPVAnimationCue_GetUseAnimationTime, METH_VARARGS,
   "V.GetUseAnimationTime() -> bool\nC++: virtual bool GetUseAnimationTime()\n\nWhen set to true, the manipulator is skipped and the key frame\nvalue is set by using the ClockTime directly. false by default.\n"},
  {"Initialize", PyvtkPVAnimationCue_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nOverridden to ignore the calls when this->Enabled == false.\n"},
  {"Tick", PyvtkPVAnimationCue_Tick, METH_VARARGS,
   "V.Tick(float, float, float)\nC++: void Tick(double currenttime, double deltatime,\n    double clocktime) override;\n\nOverridden to ignore the calls when this->Enabled == false.\n"},
  {"Finalize", PyvtkPVAnimationCue_Finalize, METH_VARARGS,
   "V.Finalize()\nC++: void Finalize() override;\n\nOverridden to ignore the calls when this->Enabled == false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVAnimationCue_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPVAnimationCue", // tp_name
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
  PyvtkPVAnimationCue_Doc, // tp_doc
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

PyObject *PyvtkPVAnimationCue_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVAnimationCue_Type, PyvtkPVAnimationCue_Methods,
    "vtkPVAnimationCue",
 nullptr);

  PyTypeObject *pytype = &PyvtkPVAnimationCue_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAnimationCue_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVAnimationCue(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVAnimationCue_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVAnimationCue", o) != 0)
  {
    Py_DECREF(o);
  }

}

