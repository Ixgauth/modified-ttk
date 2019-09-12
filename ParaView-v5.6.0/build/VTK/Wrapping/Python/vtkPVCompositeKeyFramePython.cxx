// python wrapper for vtkPVCompositeKeyFrame
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
#include "vtkPVCompositeKeyFrame.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVCompositeKeyFrame(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVCompositeKeyFrame_ClassNew(); }

#ifndef DECLARED_PyvtkPVKeyFrame_ClassNew
extern "C" { PyObject *PyvtkPVKeyFrame_ClassNew(); }
#define DECLARED_PyvtkPVKeyFrame_ClassNew
#endif

static const char *PyvtkPVCompositeKeyFrame_Doc =
  "vtkPVCompositeKeyFrame - composite keyframe.\n\n"
  "Superclass: vtkPVKeyFrame\n\n"
  "There are many different types of keyframes such as\n"
  "vtkPVSinusoidKeyFrame, vtkPVRampKeyFrame etc. This is keyframe that\n"
  "has all different types of keyframes as internal objects and provides\n"
  "API to choose one of them as the active type. This is helpful in GUIs\n"
  "that allow for switching the type of keyframe on the fly without much\n"
  "effort from the GUI.\n\n";


static PyObject *
PyvtkPVCompositeKeyFrame_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCompositeKeyFrame::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCompositeKeyFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVCompositeKeyFrame *tempr = vtkPVCompositeKeyFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCompositeKeyFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCompositeKeyFrame::NewInstance());

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
PyvtkPVCompositeKeyFrame_RemoveAllKeyValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllKeyValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllKeyValues();
    }
    else
    {
      op->vtkPVCompositeKeyFrame::RemoveAllKeyValues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetKeyTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyTime(temp0);
    }
    else
    {
      op->vtkPVCompositeKeyFrame::SetKeyTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetKeyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyValue(temp0);
    }
    else
    {
      op->vtkPVCompositeKeyFrame::SetKeyValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeKeyFrame_SetKeyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetKeyValue(temp0, temp1);
    }
    else
    {
      op->vtkPVCompositeKeyFrame::SetKeyValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeKeyFrame_SetKeyValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPVCompositeKeyFrame_SetKeyValue_s1(self, args);
    case 2:
      return PyvtkPVCompositeKeyFrame_SetKeyValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetKeyValue");
  return nullptr;
}



static PyObject *
PyvtkPVCompositeKeyFrame_SetNumberOfKeyValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfKeyValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfKeyValues(temp0);
    }
    else
    {
      op->vtkPVCompositeKeyFrame::SetNumberOfKeyValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

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
      op->vtkPVCompositeKeyFrame::SetBase(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetStartPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

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
      op->vtkPVCompositeKeyFrame::SetStartPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetEndPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

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
      op->vtkPVCompositeKeyFrame::SetEndPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

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
      op->vtkPVCompositeKeyFrame::SetPhase(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

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
      op->vtkPVCompositeKeyFrame::SetFrequency(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

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
      op->vtkPVCompositeKeyFrame::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetType(temp0);
    }
    else
    {
      op->vtkPVCompositeKeyFrame::SetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_GetTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTypeMinValue() :
      op->vtkPVCompositeKeyFrame::GetTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_GetTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTypeMaxValue() :
      op->vtkPVCompositeKeyFrame::GetTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkPVCompositeKeyFrame::GetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_GetTypeAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeAsString() :
      op->vtkPVCompositeKeyFrame::GetTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeKeyFrame_GetTypeAsString_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkPVCompositeKeyFrame::GetTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPVCompositeKeyFrame_GetTypeAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPVCompositeKeyFrame_GetTypeAsString_s1(self, args);
    case 1:
      return PyvtkPVCompositeKeyFrame_GetTypeAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTypeAsString");
  return nullptr;
}



static PyObject *
PyvtkPVCompositeKeyFrame_GetTypeFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCompositeKeyFrame::GetTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCompositeKeyFrame_UpdateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCompositeKeyFrame *op = static_cast<vtkPVCompositeKeyFrame *>(vp);

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
      op->vtkPVCompositeKeyFrame::UpdateValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVCompositeKeyFrame_Methods[] = {
  {"IsTypeOf", PyvtkPVCompositeKeyFrame_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVCompositeKeyFrame_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVCompositeKeyFrame_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVCompositeKeyFrame\nC++: static vtkPVCompositeKeyFrame *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVCompositeKeyFrame_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVCompositeKeyFrame\nC++: vtkPVCompositeKeyFrame *NewInstance()\n\n"},
  {"RemoveAllKeyValues", PyvtkPVCompositeKeyFrame_RemoveAllKeyValues, METH_VARARGS,
   "V.RemoveAllKeyValues()\nC++: void RemoveAllKeyValues() override;\n\nOverridden to pass on to the internal keyframe proxies.\n"},
  {"SetKeyTime", PyvtkPVCompositeKeyFrame_SetKeyTime, METH_VARARGS,
   "V.SetKeyTime(float)\nC++: void SetKeyTime(double time) override;\n\nOverridden to pass on to the internal keyframe proxies.\n"},
  {"SetKeyValue", PyvtkPVCompositeKeyFrame_SetKeyValue, METH_VARARGS,
   "V.SetKeyValue(float)\nC++: void SetKeyValue(double val) override;\nV.SetKeyValue(int, float)\nC++: void SetKeyValue(unsigned int index, double val) override;\n\nOverridden to pass on to the internal keyframe proxies.\n"},
  {"SetNumberOfKeyValues", PyvtkPVCompositeKeyFrame_SetNumberOfKeyValues, METH_VARARGS,
   "V.SetNumberOfKeyValues(int)\nC++: void SetNumberOfKeyValues(unsigned int num) override;\n\nOverridden to pass on to the internal keyframe proxies.\n"},
  {"SetBase", PyvtkPVCompositeKeyFrame_SetBase, METH_VARARGS,
   "V.SetBase(float)\nC++: void SetBase(double val)\n\nPassed on to the ExponentialKeyFrame.\n"},
  {"SetStartPower", PyvtkPVCompositeKeyFrame_SetStartPower, METH_VARARGS,
   "V.SetStartPower(float)\nC++: void SetStartPower(double val)\n\nPassed on to the ExponentialKeyFrame.\n"},
  {"SetEndPower", PyvtkPVCompositeKeyFrame_SetEndPower, METH_VARARGS,
   "V.SetEndPower(float)\nC++: void SetEndPower(double val)\n\nPassed on to the ExponentialKeyFrame.\n"},
  {"SetPhase", PyvtkPVCompositeKeyFrame_SetPhase, METH_VARARGS,
   "V.SetPhase(float)\nC++: void SetPhase(double val)\n\nPassed on to the SinusoidKeyFrame.\n"},
  {"SetFrequency", PyvtkPVCompositeKeyFrame_SetFrequency, METH_VARARGS,
   "V.SetFrequency(float)\nC++: void SetFrequency(double val)\n\nPassed on to the SinusoidKeyFrame.\n"},
  {"SetOffset", PyvtkPVCompositeKeyFrame_SetOffset, METH_VARARGS,
   "V.SetOffset(float)\nC++: void SetOffset(double val)\n\nPassed on to the SinusoidKeyFrame.\n"},
  {"SetType", PyvtkPVCompositeKeyFrame_SetType, METH_VARARGS,
   "V.SetType(int)\nC++: virtual void SetType(int _arg)\n\nGet/Set the type of keyframe to be used as the active type.\nDefault is RAMP.\n"},
  {"GetTypeMinValue", PyvtkPVCompositeKeyFrame_GetTypeMinValue, METH_VARARGS,
   "V.GetTypeMinValue() -> int\nC++: virtual int GetTypeMinValue()\n\nGet/Set the type of keyframe to be used as the active type.\nDefault is RAMP.\n"},
  {"GetTypeMaxValue", PyvtkPVCompositeKeyFrame_GetTypeMaxValue, METH_VARARGS,
   "V.GetTypeMaxValue() -> int\nC++: virtual int GetTypeMaxValue()\n\nGet/Set the type of keyframe to be used as the active type.\nDefault is RAMP.\n"},
  {"GetType", PyvtkPVCompositeKeyFrame_GetType, METH_VARARGS,
   "V.GetType() -> int\nC++: virtual int GetType()\n\nGet/Set the type of keyframe to be used as the active type.\nDefault is RAMP.\n"},
  {"GetTypeAsString", PyvtkPVCompositeKeyFrame_GetTypeAsString, METH_VARARGS,
   "V.GetTypeAsString() -> string\nC++: const char *GetTypeAsString()\nV.GetTypeAsString(int) -> string\nC++: static const char *GetTypeAsString(int)\n\nGet/Set the type of keyframe to be used as the active type.\nDefault is RAMP.\n"},
  {"GetTypeFromString", PyvtkPVCompositeKeyFrame_GetTypeFromString, METH_VARARGS,
   "V.GetTypeFromString(string) -> int\nC++: static int GetTypeFromString(const char *string)\n\nGet/Set the type of keyframe to be used as the active type.\nDefault is RAMP.\n"},
  {"UpdateValue", PyvtkPVCompositeKeyFrame_UpdateValue, METH_VARARGS,
   "V.UpdateValue(float, vtkPVAnimationCue, vtkPVKeyFrame)\nC++: void UpdateValue(double currenttime, vtkPVAnimationCue *cue,\n    vtkPVKeyFrame *next) override;\n\nThis method will do the actual interpolation. currenttime is\nnormalized to the time range between this key frame and the next\nkey frame.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVCompositeKeyFrame_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPVCompositeKeyFrame", // tp_name
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
  PyvtkPVCompositeKeyFrame_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVCompositeKeyFrame_StaticNew()
{
  return vtkPVCompositeKeyFrame::New();
}

PyObject *PyvtkPVCompositeKeyFrame_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVCompositeKeyFrame_Type, PyvtkPVCompositeKeyFrame_Methods,
    "vtkPVCompositeKeyFrame",
 &PyvtkPVCompositeKeyFrame_StaticNew);

  PyTypeObject *pytype = &PyvtkPVCompositeKeyFrame_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVKeyFrame_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "NONE", vtkPVCompositeKeyFrame::NONE },
        { "BOOLEAN", vtkPVCompositeKeyFrame::BOOLEAN },
        { "RAMP", vtkPVCompositeKeyFrame::RAMP },
        { "EXPONENTIAL", vtkPVCompositeKeyFrame::EXPONENTIAL },
        { "SINUSOID", vtkPVCompositeKeyFrame::SINUSOID },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVCompositeKeyFrame(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVCompositeKeyFrame_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVCompositeKeyFrame", o) != 0)
  {
    Py_DECREF(o);
  }

}

