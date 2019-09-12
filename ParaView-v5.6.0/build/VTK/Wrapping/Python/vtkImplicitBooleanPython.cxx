// python wrapper for vtkImplicitBoolean
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
#include "vtkImplicitBoolean.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitBoolean(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImplicitBoolean_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static const char *PyvtkImplicitBoolean_Doc =
  "vtkImplicitBoolean - implicit function consisting of boolean\ncombinations of implicit functions\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkImplicitBoolean is an implicit function consisting of boolean\n"
  "combinations of implicit functions. The class has a list of functions\n"
  "(FunctionList) that are combined according to a specified operator\n"
  "(VTK_UNION or VTK_INTERSECTION or VTK_DIFFERENCE). You can use nested\n"
  "combinations of vtkImplicitFunction's (and/or vtkImplicitBoolean) to\n"
  "create elaborate implicit functions.  vtkImplicitBoolean is a\n"
  "concrete implementation of vtkImplicitFunction.\n\n"
  "The operators work as follows. The VTK_UNION operator takes the\n"
  "minimum value of all implicit functions. The VTK_INTERSECTION\n"
  "operator takes the maximum value of all implicit functions. The\n"
  "VTK_DIFFERENCE operator subtracts the 2nd through last implicit\n"
  "functions from the first. The VTK_UNION_OF_MAGNITUDES takes the\n"
  "minimum absolute value of the implicit functions.\n\n";

static PyTypeObject PyvtkImplicitBoolean_OperationType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkImplicitBoolean.OperationType", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkImplicitBoolean_OperationType_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkImplicitBoolean_OperationType_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkImplicitBoolean_OperationType_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkImplicitBoolean_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitBoolean::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitBoolean::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitBoolean *tempr = vtkImplicitBoolean::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitBoolean *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitBoolean::NewInstance());

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
PyvtkImplicitBoolean_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

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
      op->vtkImplicitBoolean::EvaluateFunction(temp0));

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
PyvtkImplicitBoolean_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

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
      op->vtkImplicitBoolean::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitBoolean_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

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
      op->vtkImplicitBoolean::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitBoolean_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImplicitBoolean_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkImplicitBoolean_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkImplicitBoolean_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}



static PyObject *
PyvtkImplicitBoolean_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

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
      op->vtkImplicitBoolean::EvaluateGradient(temp0, temp1);
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
PyvtkImplicitBoolean_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitBoolean::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_AddFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

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
      op->vtkImplicitBoolean::AddFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_RemoveFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->RemoveFunction(temp0);
    }
    else
    {
      op->vtkImplicitBoolean::RemoveFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunctionCollection *tempr = (ap.IsBound() ?
      op->GetFunction() :
      op->vtkImplicitBoolean::GetFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperationType(temp0);
    }
    else
    {
      op->vtkImplicitBoolean::SetOperationType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetOperationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationTypeMinValue() :
      op->vtkImplicitBoolean::GetOperationTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetOperationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationTypeMaxValue() :
      op->vtkImplicitBoolean::GetOperationTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetOperationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationType() :
      op->vtkImplicitBoolean::GetOperationType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationTypeToUnion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationTypeToUnion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationTypeToUnion();
    }
    else
    {
      op->vtkImplicitBoolean::SetOperationTypeToUnion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationTypeToIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationTypeToIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationTypeToIntersection();
    }
    else
    {
      op->vtkImplicitBoolean::SetOperationTypeToIntersection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationTypeToDifference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationTypeToDifference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationTypeToDifference();
    }
    else
    {
      op->vtkImplicitBoolean::SetOperationTypeToDifference();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationTypeToUnionOfMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationTypeToUnionOfMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationTypeToUnionOfMagnitudes();
    }
    else
    {
      op->vtkImplicitBoolean::SetOperationTypeToUnionOfMagnitudes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetOperationTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOperationTypeAsString() :
      op->vtkImplicitBoolean::GetOperationTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitBoolean_Methods[] = {
  {"IsTypeOf", PyvtkImplicitBoolean_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitBoolean_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitBoolean_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImplicitBoolean\nC++: static vtkImplicitBoolean *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitBoolean_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImplicitBoolean\nC++: vtkImplicitBoolean *NewInstance()\n\n"},
  {"EvaluateFunction", PyvtkImplicitBoolean_EvaluateFunction, METH_VARARGS,
   "V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nV.EvaluateFunction(vtkDataArray, vtkDataArray)\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nV.EvaluateFunction(float, float, float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate boolean combinations of implicit function using current\noperator.\n"},
  {"EvaluateGradient", PyvtkImplicitBoolean_EvaluateGradient, METH_VARARGS,
   "V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double g[3]) override;\n\nEvaluate gradient of boolean combination.\n"},
  {"GetMTime", PyvtkImplicitBoolean_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride modified time retrieval because of object dependencies.\n"},
  {"AddFunction", PyvtkImplicitBoolean_AddFunction, METH_VARARGS,
   "V.AddFunction(vtkImplicitFunction)\nC++: void AddFunction(vtkImplicitFunction *in)\n\nAdd another implicit function to the list of functions.\n"},
  {"RemoveFunction", PyvtkImplicitBoolean_RemoveFunction, METH_VARARGS,
   "V.RemoveFunction(vtkImplicitFunction)\nC++: void RemoveFunction(vtkImplicitFunction *in)\n\nRemove a function from the list of implicit functions to boolean.\n"},
  {"GetFunction", PyvtkImplicitBoolean_GetFunction, METH_VARARGS,
   "V.GetFunction() -> vtkImplicitFunctionCollection\nC++: vtkImplicitFunctionCollection *GetFunction()\n\nReturn the collection of implicit functions.\n"},
  {"SetOperationType", PyvtkImplicitBoolean_SetOperationType, METH_VARARGS,
   "V.SetOperationType(int)\nC++: virtual void SetOperationType(int _arg)\n\nSpecify the type of boolean operation.\n"},
  {"GetOperationTypeMinValue", PyvtkImplicitBoolean_GetOperationTypeMinValue, METH_VARARGS,
   "V.GetOperationTypeMinValue() -> int\nC++: virtual int GetOperationTypeMinValue()\n\nSpecify the type of boolean operation.\n"},
  {"GetOperationTypeMaxValue", PyvtkImplicitBoolean_GetOperationTypeMaxValue, METH_VARARGS,
   "V.GetOperationTypeMaxValue() -> int\nC++: virtual int GetOperationTypeMaxValue()\n\nSpecify the type of boolean operation.\n"},
  {"GetOperationType", PyvtkImplicitBoolean_GetOperationType, METH_VARARGS,
   "V.GetOperationType() -> int\nC++: virtual int GetOperationType()\n\nSpecify the type of boolean operation.\n"},
  {"SetOperationTypeToUnion", PyvtkImplicitBoolean_SetOperationTypeToUnion, METH_VARARGS,
   "V.SetOperationTypeToUnion()\nC++: void SetOperationTypeToUnion()\n\nSpecify the type of boolean operation.\n"},
  {"SetOperationTypeToIntersection", PyvtkImplicitBoolean_SetOperationTypeToIntersection, METH_VARARGS,
   "V.SetOperationTypeToIntersection()\nC++: void SetOperationTypeToIntersection()\n\nSpecify the type of boolean operation.\n"},
  {"SetOperationTypeToDifference", PyvtkImplicitBoolean_SetOperationTypeToDifference, METH_VARARGS,
   "V.SetOperationTypeToDifference()\nC++: void SetOperationTypeToDifference()\n\nSpecify the type of boolean operation.\n"},
  {"SetOperationTypeToUnionOfMagnitudes", PyvtkImplicitBoolean_SetOperationTypeToUnionOfMagnitudes, METH_VARARGS,
   "V.SetOperationTypeToUnionOfMagnitudes()\nC++: void SetOperationTypeToUnionOfMagnitudes()\n\nSpecify the type of boolean operation.\n"},
  {"GetOperationTypeAsString", PyvtkImplicitBoolean_GetOperationTypeAsString, METH_VARARGS,
   "V.GetOperationTypeAsString() -> string\nC++: const char *GetOperationTypeAsString()\n\nSpecify the type of boolean operation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImplicitBoolean_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkImplicitBoolean", // tp_name
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
  PyvtkImplicitBoolean_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitBoolean_StaticNew()
{
  return vtkImplicitBoolean::New();
}

PyObject *PyvtkImplicitBoolean_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImplicitBoolean_Type, PyvtkImplicitBoolean_Methods,
    "vtkImplicitBoolean",
 &PyvtkImplicitBoolean_StaticNew);

  PyTypeObject *pytype = &PyvtkImplicitBoolean_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitFunction_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkImplicitBoolean_OperationType_Type);
  PyvtkImplicitBoolean_OperationType_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkImplicitBoolean_OperationType_Type);

  o = (PyObject *)&PyvtkImplicitBoolean_OperationType_Type;
  if (PyDict_SetItemString(d, "OperationType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_UNION", vtkImplicitBoolean::VTK_UNION },
        { "VTK_INTERSECTION", vtkImplicitBoolean::VTK_INTERSECTION },
        { "VTK_DIFFERENCE", vtkImplicitBoolean::VTK_DIFFERENCE },
        { "VTK_UNION_OF_MAGNITUDES", vtkImplicitBoolean::VTK_UNION_OF_MAGNITUDES },
      };

    o = PyvtkImplicitBoolean_OperationType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitBoolean(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitBoolean_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitBoolean", o) != 0)
  {
    Py_DECREF(o);
  }

}

