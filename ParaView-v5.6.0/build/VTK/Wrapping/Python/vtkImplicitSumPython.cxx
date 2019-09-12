// python wrapper for vtkImplicitSum
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
#include "vtkImplicitSum.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitSum(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImplicitSum_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static const char *PyvtkImplicitSum_Doc =
  "vtkImplicitSum - implicit sum of other implicit functions\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkImplicitSum produces a linear combination of other implicit\n"
  "functions. The contribution of each function is weighted by a scalar\n"
  "coefficient. The NormalizeByWeight option normalizes the output so\n"
  "that the scalar weights add up to 1. Note that this function gives\n"
  "accurate sums and gradients only if the input functions are linear.\n\n";


static PyObject *
PyvtkImplicitSum_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitSum::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitSum::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitSum *tempr = vtkImplicitSum::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitSum *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitSum::NewInstance());

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
PyvtkImplicitSum_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      op->vtkImplicitSum::EvaluateFunction(temp0));

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
PyvtkImplicitSum_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      op->vtkImplicitSum::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSum_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      op->vtkImplicitSum::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSum_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImplicitSum_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkImplicitSum_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkImplicitSum_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}



static PyObject *
PyvtkImplicitSum_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      op->vtkImplicitSum::EvaluateGradient(temp0, temp1);
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
PyvtkImplicitSum_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitSum::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_AddFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddFunction(temp0, temp1);
    }
    else
    {
      op->vtkImplicitSum::AddFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSum_AddFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->AddFunction(temp0);
    }
    else
    {
      op->vtkImplicitSum::AddFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSum_AddFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImplicitSum_AddFunction_s1(self, args);
    case 1:
      return PyvtkImplicitSum_AddFunction_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddFunction");
  return nullptr;
}



static PyObject *
PyvtkImplicitSum_RemoveAllFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllFunctions();
    }
    else
    {
      op->vtkImplicitSum::RemoveAllFunctions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_SetFunctionWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFunctionWeight(temp0, temp1);
    }
    else
    {
      op->vtkImplicitSum::SetFunctionWeight(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_SetNormalizeByWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeByWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizeByWeight(temp0);
    }
    else
    {
      op->vtkImplicitSum::SetNormalizeByWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_GetNormalizeByWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeByWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalizeByWeight() :
      op->vtkImplicitSum::GetNormalizeByWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_NormalizeByWeightOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeByWeightOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeByWeightOn();
    }
    else
    {
      op->vtkImplicitSum::NormalizeByWeightOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_NormalizeByWeightOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeByWeightOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeByWeightOff();
    }
    else
    {
      op->vtkImplicitSum::NormalizeByWeightOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitSum_Methods[] = {
  {"IsTypeOf", PyvtkImplicitSum_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitSum_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitSum_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImplicitSum\nC++: static vtkImplicitSum *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitSum_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImplicitSum\nC++: vtkImplicitSum *NewInstance()\n\n"},
  {"EvaluateFunction", PyvtkImplicitSum_EvaluateFunction, METH_VARARGS,
   "V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nV.EvaluateFunction(vtkDataArray, vtkDataArray)\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nV.EvaluateFunction(float, float, float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate implicit function using current functions and weights.\n"},
  {"EvaluateGradient", PyvtkImplicitSum_EvaluateGradient, METH_VARARGS,
   "V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double g[3]) override;\n\nEvaluate gradient of the weighted sum of functions.  Input\nfunctions should be linear.\n"},
  {"GetMTime", PyvtkImplicitSum_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride modified time retrieval because of object dependencies.\n"},
  {"AddFunction", PyvtkImplicitSum_AddFunction, METH_VARARGS,
   "V.AddFunction(vtkImplicitFunction, float)\nC++: void AddFunction(vtkImplicitFunction *in, double weight)\nV.AddFunction(vtkImplicitFunction)\nC++: void AddFunction(vtkImplicitFunction *in)\n\nAdd another implicit function to the list of functions, along\nwith a weighting factor.\n"},
  {"RemoveAllFunctions", PyvtkImplicitSum_RemoveAllFunctions, METH_VARARGS,
   "V.RemoveAllFunctions()\nC++: void RemoveAllFunctions()\n\nRemove all functions from the list.\n"},
  {"SetFunctionWeight", PyvtkImplicitSum_SetFunctionWeight, METH_VARARGS,
   "V.SetFunctionWeight(vtkImplicitFunction, float)\nC++: void SetFunctionWeight(vtkImplicitFunction *f, double weight)\n\nSet the weight (coefficient) of the given function to be weight.\n"},
  {"SetNormalizeByWeight", PyvtkImplicitSum_SetNormalizeByWeight, METH_VARARGS,
   "V.SetNormalizeByWeight(int)\nC++: virtual void SetNormalizeByWeight(vtkTypeBool _arg)\n\nWhen calculating the function and gradient values of the\ncomposite function, setting NormalizeByWeight on will divide the\nfinal result by the total weight of the component functions. This\nprocess does not otherwise normalize the gradient vector. By\ndefault, NormalizeByWeight is off.\n"},
  {"GetNormalizeByWeight", PyvtkImplicitSum_GetNormalizeByWeight, METH_VARARGS,
   "V.GetNormalizeByWeight() -> int\nC++: virtual vtkTypeBool GetNormalizeByWeight()\n\nWhen calculating the function and gradient values of the\ncomposite function, setting NormalizeByWeight on will divide the\nfinal result by the total weight of the component functions. This\nprocess does not otherwise normalize the gradient vector. By\ndefault, NormalizeByWeight is off.\n"},
  {"NormalizeByWeightOn", PyvtkImplicitSum_NormalizeByWeightOn, METH_VARARGS,
   "V.NormalizeByWeightOn()\nC++: virtual void NormalizeByWeightOn()\n\nWhen calculating the function and gradient values of the\ncomposite function, setting NormalizeByWeight on will divide the\nfinal result by the total weight of the component functions. This\nprocess does not otherwise normalize the gradient vector. By\ndefault, NormalizeByWeight is off.\n"},
  {"NormalizeByWeightOff", PyvtkImplicitSum_NormalizeByWeightOff, METH_VARARGS,
   "V.NormalizeByWeightOff()\nC++: virtual void NormalizeByWeightOff()\n\nWhen calculating the function and gradient values of the\ncomposite function, setting NormalizeByWeight on will divide the\nfinal result by the total weight of the component functions. This\nprocess does not otherwise normalize the gradient vector. By\ndefault, NormalizeByWeight is off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImplicitSum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkImplicitSum", // tp_name
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
  PyvtkImplicitSum_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitSum_StaticNew()
{
  return vtkImplicitSum::New();
}

PyObject *PyvtkImplicitSum_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImplicitSum_Type, PyvtkImplicitSum_Methods,
    "vtkImplicitSum",
 &PyvtkImplicitSum_StaticNew);

  PyTypeObject *pytype = &PyvtkImplicitSum_Type;

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

void PyVTKAddFile_vtkImplicitSum(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitSum_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitSum", o) != 0)
  {
    Py_DECREF(o);
  }

}

