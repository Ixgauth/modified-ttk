// python wrapper for vtkImplicitFunction
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
#include "vtkImplicitFunction.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitFunction(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImplicitFunction_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkImplicitFunction_Doc =
  "vtkImplicitFunction - abstract interface for implicit functions\n\n"
  "Superclass: vtkObject\n\n"
  "vtkImplicitFunction specifies an abstract interface for implicit\n"
  "functions. Implicit functions are real valued functions defined in 3D\n"
  "space, w = F(x,y,z). Two primitive operations are required: the\n"
  "ability to evaluate the function, and the function gradient at a\n"
  "given point. The implicit function divides space into three regions:\n"
  "on the surface (F(x,y,z)=w), outside of the surface (F(x,y,z)>c), and\n"
  "inside the surface (F(x,y,z)<c). (When c is zero, positive values are\n"
  "outside, negative values are inside, and zero is on the surface. Note\n"
  "also that the function gradient points from inside to outside.)\n\n"
  "Implicit functions are very powerful. It is possible to represent\n"
  "almost any type of geometry with the level sets w = const, especially\n"
  "if you use boolean combinations of implicit functions (see\n"
  "vtkImplicitBoolean).\n\n"
  "vtkImplicitFunction provides a mechanism to transform the implicit\n"
  "function(s) via a vtkAbstractTransform.  This capability can be used\n"
  "to translate, orient, scale, or warp implicit functions.  For\n"
  "example, a sphere implicit function can be transformed into an\n"
  "oriented ellipse.\n\n"
  "@warning\n"
  "The transformation transforms a point into the space of the implicit\n"
  "function (i.e., the model space). Typically we want to transform the\n"
  "implicit model into world coordinates. In this case the inverse of\n"
  "the transformation is required.\n\n"
  "@sa\n"
  "vtkAbstractTransform vtkSphere vtkCylinder vtkImplicitBoolean\n"
  "vtkPlane vtkPlanes vtkQuadric vtkImplicitVolume vtkSampleFunction\n"
  "vtkCutter vtkClipPolyData\n\n";


static PyObject *
PyvtkImplicitFunction_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitFunction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitFunction *tempr = vtkImplicitFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitFunction::NewInstance());

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
PyvtkImplicitFunction_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitFunction::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunction_FunctionValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->FunctionValue(temp0, temp1);
    }
    else
    {
      op->vtkImplicitFunction::FunctionValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFunction_FunctionValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double tempr = (ap.IsBound() ?
      op->FunctionValue(temp0) :
      op->vtkImplicitFunction::FunctionValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFunction_FunctionValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

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
      op->FunctionValue(temp0, temp1, temp2) :
      op->vtkImplicitFunction::FunctionValue(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFunction_FunctionValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImplicitFunction_FunctionValue_s1(self, args);
    case 1:
      return PyvtkImplicitFunction_FunctionValue_s2(self, args);
    case 3:
      return PyvtkImplicitFunction_FunctionValue_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FunctionValue");
  return nullptr;
}



static PyObject *
PyvtkImplicitFunction_FunctionGradient_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->FunctionGradient(temp0, temp1);
    }
    else
    {
      op->vtkImplicitFunction::FunctionGradient(temp0, temp1);
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
PyvtkImplicitFunction_FunctionGradient_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->FunctionGradient(temp0) :
      op->vtkImplicitFunction::FunctionGradient(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFunction_FunctionGradient_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double *tempr = (ap.IsBound() ?
      op->FunctionGradient(temp0, temp1, temp2) :
      op->vtkImplicitFunction::FunctionGradient(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFunction_FunctionGradient(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImplicitFunction_FunctionGradient_s1(self, args);
    case 1:
      return PyvtkImplicitFunction_FunctionGradient_s2(self, args);
    case 3:
      return PyvtkImplicitFunction_FunctionGradient_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FunctionGradient");
  return nullptr;
}



static PyObject *
PyvtkImplicitFunction_SetTransform_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkImplicitFunction::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFunction_SetTransform_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkImplicitFunction::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitFunction_SetTransform_Methods[] = {
  {nullptr, PyvtkImplicitFunction_SetTransform_s1, METH_VARARGS,
   "@V *vtkAbstractTransform"},
  {nullptr, PyvtkImplicitFunction_SetTransform_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImplicitFunction_SetTransform(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImplicitFunction_SetTransform_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTransform");
  return nullptr;
}



static PyObject *
PyvtkImplicitFunction_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkImplicitFunction::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunction_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    double tempr = op->EvaluateFunction(temp0);

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
PyvtkImplicitFunction_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

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
      op->vtkImplicitFunction::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFunction_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

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
      op->vtkImplicitFunction::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitFunction_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImplicitFunction_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkImplicitFunction_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkImplicitFunction_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}



static PyObject *
PyvtkImplicitFunction_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunction *op = static_cast<vtkImplicitFunction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    op->EvaluateGradient(temp0, temp1);

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

static PyMethodDef PyvtkImplicitFunction_Methods[] = {
  {"IsTypeOf", PyvtkImplicitFunction_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitFunction_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitFunction_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImplicitFunction\nC++: static vtkImplicitFunction *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitFunction_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImplicitFunction\nC++: vtkImplicitFunction *NewInstance()\n\n"},
  {"GetMTime", PyvtkImplicitFunction_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload standard modified time function. If Transform is\nmodified, then this object is modified as well.\n"},
  {"FunctionValue", PyvtkImplicitFunction_FunctionValue, METH_VARARGS,
   "V.FunctionValue(vtkDataArray, vtkDataArray)\nC++: virtual void FunctionValue(vtkDataArray *input,\n    vtkDataArray *output)\nV.FunctionValue((float, float, float)) -> float\nC++: double FunctionValue(const double x[3])\nV.FunctionValue(float, float, float) -> float\nC++: double FunctionValue(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value. Point x[3]\nis transformed through transform (if provided).\n"},
  {"FunctionGradient", PyvtkImplicitFunction_FunctionGradient, METH_VARARGS,
   "V.FunctionGradient((float, float, float), [float, float, float])\nC++: void FunctionGradient(const double x[3], double g[3])\nV.FunctionGradient((float, float, float)) -> (float, float, float)\nC++: double *FunctionGradient(const double x[3])\nV.FunctionGradient(float, float, float) -> (float, float, float)\nC++: double *FunctionGradient(double x, double y, double z)\n\nEvaluate function gradient at position x-y-z and pass back\nvector. Point x[3] is transformed through transform (if\nprovided).\n"},
  {"SetTransform", PyvtkImplicitFunction_SetTransform, METH_VARARGS,
   "V.SetTransform(vtkAbstractTransform)\nC++: virtual void SetTransform(vtkAbstractTransform *)\nV.SetTransform((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    )\nC++: virtual void SetTransform(const double elements[16])\n\nSet/Get a transformation to apply to input points before\nexecuting the implicit function.\n"},
  {"GetTransform", PyvtkImplicitFunction_GetTransform, METH_VARARGS,
   "V.GetTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\nSet/Get a transformation to apply to input points before\nexecuting the implicit function.\n"},
  {"EvaluateFunction", PyvtkImplicitFunction_EvaluateFunction, METH_VARARGS,
   "V.EvaluateFunction([float, float, float]) -> float\nC++: virtual double EvaluateFunction(double x[3])\nV.EvaluateFunction(vtkDataArray, vtkDataArray)\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nV.EvaluateFunction(float, float, float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value.  You should\ngenerally not call this method directly, you should use\nFunctionValue() instead.  This method must be implemented by any\nderived class.\n"},
  {"EvaluateGradient", PyvtkImplicitFunction_EvaluateGradient, METH_VARARGS,
   "V.EvaluateGradient([float, float, float], [float, float, float])\nC++: virtual void EvaluateGradient(double x[3], double g[3])\n\nEvaluate function gradient at position x-y-z and pass back\nvector. You should generally not call this method directly, you\nshould use FunctionGradient() instead.  This method must be\nimplemented by any derived class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImplicitFunction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkImplicitFunction", // tp_name
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
  PyvtkImplicitFunction_Doc, // tp_doc
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

PyObject *PyvtkImplicitFunction_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImplicitFunction_Type, PyvtkImplicitFunction_Methods,
    "vtkImplicitFunction",
 nullptr);

  PyTypeObject *pytype = &PyvtkImplicitFunction_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitFunction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitFunction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitFunction", o) != 0)
  {
    Py_DECREF(o);
  }

}

