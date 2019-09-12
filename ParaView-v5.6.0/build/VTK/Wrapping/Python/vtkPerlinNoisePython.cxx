// python wrapper for vtkPerlinNoise
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
#include "vtkPerlinNoise.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPerlinNoise(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPerlinNoise_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static const char *PyvtkPerlinNoise_Doc =
  "vtkPerlinNoise - an implicit function that implements Perlin noise\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkPerlinNoise computes a Perlin noise field as an implicit function.\n"
  "vtkPerlinNoise is a concrete implementation of vtkImplicitFunction.\n"
  "Perlin noise, originally described by Ken Perlin, is a non-periodic\n"
  "and continuous noise function useful for modeling real-world objects.\n\n"
  "The amplitude and frequency of the noise pattern are adjustable. \n"
  "This implementation of Perlin noise is derived closely from Greg\n"
  "Ward's version in Graphics Gems II.\n\n"
  "@sa\n"
  "vtkImplicitFunction\n\n";


static PyObject *
PyvtkPerlinNoise_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPerlinNoise::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPerlinNoise_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPerlinNoise::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPerlinNoise_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPerlinNoise *tempr = vtkPerlinNoise::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPerlinNoise_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPerlinNoise *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPerlinNoise::NewInstance());

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
PyvtkPerlinNoise_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkPerlinNoise::EvaluateFunction(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPerlinNoise_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->EvaluateFunction(temp0, temp1);
    }
    else
    {
      op->vtkPerlinNoise::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerlinNoise_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkPerlinNoise::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPerlinNoise_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPerlinNoise_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkPerlinNoise_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkPerlinNoise_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}



static PyObject *
PyvtkPerlinNoise_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->EvaluateGradient(temp0, temp1);
    }
    else
    {
      op->vtkPerlinNoise::EvaluateGradient(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerlinNoise_SetFrequency_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

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
      op->SetFrequency(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPerlinNoise::SetFrequency(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerlinNoise_SetFrequency_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetFrequency(temp0);
    }
    else
    {
      op->vtkPerlinNoise::SetFrequency(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerlinNoise_SetFrequency(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPerlinNoise_SetFrequency_s1(self, args);
    case 1:
      return PyvtkPerlinNoise_SetFrequency_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFrequency");
  return nullptr;
}



static PyObject *
PyvtkPerlinNoise_GetFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFrequency() :
      op->vtkPerlinNoise::GetFrequency());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPerlinNoise_SetPhase_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

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
      op->SetPhase(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPerlinNoise::SetPhase(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerlinNoise_SetPhase_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPhase(temp0);
    }
    else
    {
      op->vtkPerlinNoise::SetPhase(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPerlinNoise_SetPhase(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPerlinNoise_SetPhase_s1(self, args);
    case 1:
      return PyvtkPerlinNoise_SetPhase_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPhase");
  return nullptr;
}



static PyObject *
PyvtkPerlinNoise_GetPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPhase() :
      op->vtkPerlinNoise::GetPhase());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPerlinNoise_SetAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmplitude(temp0);
    }
    else
    {
      op->vtkPerlinNoise::SetAmplitude(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPerlinNoise_GetAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPerlinNoise *op = static_cast<vtkPerlinNoise *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmplitude() :
      op->vtkPerlinNoise::GetAmplitude());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPerlinNoise_Methods[] = {
  {"IsTypeOf", PyvtkPerlinNoise_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPerlinNoise_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPerlinNoise_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPerlinNoise\nC++: static vtkPerlinNoise *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPerlinNoise_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPerlinNoise\nC++: vtkPerlinNoise *NewInstance()\n\n"},
  {"EvaluateFunction", PyvtkPerlinNoise_EvaluateFunction, METH_VARARGS,
   "V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nV.EvaluateFunction(vtkDataArray, vtkDataArray)\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nV.EvaluateFunction(float, float, float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate PerlinNoise function.\n"},
  {"EvaluateGradient", PyvtkPerlinNoise_EvaluateGradient, METH_VARARGS,
   "V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double n[3]) override;\n\nEvaluate PerlinNoise gradient.  Currently, the method returns a 0\ngradient.\n"},
  {"SetFrequency", PyvtkPerlinNoise_SetFrequency, METH_VARARGS,
   "V.SetFrequency(float, float, float)\nC++: void SetFrequency(double, double, double)\nV.SetFrequency((float, float, float))\nC++: void SetFrequency(double a[3])\n\n"},
  {"GetFrequency", PyvtkPerlinNoise_GetFrequency, METH_VARARGS,
   "V.GetFrequency() -> (float, float, float)\nC++: double *GetFrequency()\n\nSet/get the frequency, or physical scale,  of the noise function\n(higher is finer scale).  The frequency can be adjusted per axis,\nor the same for all axes.\n"},
  {"SetPhase", PyvtkPerlinNoise_SetPhase, METH_VARARGS,
   "V.SetPhase(float, float, float)\nC++: void SetPhase(double, double, double)\nV.SetPhase((float, float, float))\nC++: void SetPhase(double a[3])\n\n"},
  {"GetPhase", PyvtkPerlinNoise_GetPhase, METH_VARARGS,
   "V.GetPhase() -> (float, float, float)\nC++: double *GetPhase()\n\nSet/get the phase of the noise function.  This parameter can be\nused to shift the noise function within space (perhaps to avoid a\nbeat with a noise pattern at another scale).  Phase tends to\nrepeat about every unit, so a phase of 0.5 is a half-cycle shift.\n"},
  {"SetAmplitude", PyvtkPerlinNoise_SetAmplitude, METH_VARARGS,
   "V.SetAmplitude(float)\nC++: virtual void SetAmplitude(double _arg)\n\nSet/get the amplitude of the noise function. Amplitude can be\nnegative. The noise function varies randomly between -|Amplitude|\nand |Amplitude|. Therefore the range of values is 2*|Amplitude|\nlarge. The initial amplitude is 1.\n"},
  {"GetAmplitude", PyvtkPerlinNoise_GetAmplitude, METH_VARARGS,
   "V.GetAmplitude() -> float\nC++: virtual double GetAmplitude()\n\nSet/get the amplitude of the noise function. Amplitude can be\nnegative. The noise function varies randomly between -|Amplitude|\nand |Amplitude|. Therefore the range of values is 2*|Amplitude|\nlarge. The initial amplitude is 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPerlinNoise_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkPerlinNoise", // tp_name
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
  PyvtkPerlinNoise_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPerlinNoise_StaticNew()
{
  return vtkPerlinNoise::New();
}

PyObject *PyvtkPerlinNoise_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPerlinNoise_Type, PyvtkPerlinNoise_Methods,
    "vtkPerlinNoise",
 &PyvtkPerlinNoise_StaticNew);

  PyTypeObject *pytype = &PyvtkPerlinNoise_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPerlinNoise(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPerlinNoise_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPerlinNoise", o) != 0)
  {
    Py_DECREF(o);
  }

}

