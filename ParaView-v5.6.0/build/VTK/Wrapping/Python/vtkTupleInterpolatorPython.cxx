// python wrapper for vtkTupleInterpolator
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
#include "vtkTupleInterpolator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTupleInterpolator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTupleInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkTupleInterpolator_Doc =
  "vtkTupleInterpolator - interpolate a tuple of arbitrary size\n\n"
  "Superclass: vtkObject\n\n"
  "This class is used to interpolate a tuple which may have an arbitrary\n"
  "number of components (but at least one component). The interpolation\n"
  "may be linear in form, or via a subclasses of vtkSpline.\n\n"
  "To use this class, begin by specifying the number of components of\n"
  "the tuple and the interpolation function to use. Then specify at\n"
  "least one pair of (t,tuple) with the AddTuple() method.  Next\n"
  "interpolate the tuples with the InterpolateTuple(t,tuple) method,\n"
  "where \"t\" must be in the range of (t_min,t_max) parameter values\n"
  "specified by the AddTuple() method (if not then t is clamped), and\n"
  "tuple[] is filled in by the method (make sure that tuple [] is long\n"
  "enough to hold the interpolated data).\n\n"
  "You can control the type of interpolation to use. By default, the\n"
  "interpolation is based on a Kochanek spline. However, other types of\n"
  "splines can be specified. You can also set the interpolation method\n"
  "to linear, in which case the specified spline has no effect on the\n"
  "interpolation.\n\n"
  "@warning\n"
  "Setting the number of components or changing the type of\n"
  "interpolation causes the list of tuples to be reset, so any data\n"
  "inserted up to that point is lost. Bisection methods are used to\n"
  "speed up the search for the interpolation interval.\n\n";


static PyObject *
PyvtkTupleInterpolator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTupleInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTupleInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTupleInterpolator *tempr = vtkTupleInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTupleInterpolator::NewInstance());

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
PyvtkTupleInterpolator_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkTupleInterpolator::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkTupleInterpolator::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkTupleInterpolator::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_GetMinimumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumT() :
      op->vtkTupleInterpolator::GetMinimumT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_GetMaximumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumT() :
      op->vtkTupleInterpolator::GetMaximumT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkTupleInterpolator::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_AddTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  double temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->AddTuple(temp0, temp1);
    }
    else
    {
      op->vtkTupleInterpolator::AddTuple(temp0, temp1);
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
PyvtkTupleInterpolator_RemoveTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveTuple(temp0);
    }
    else
    {
      op->vtkTupleInterpolator::RemoveTuple(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_InterpolateTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  double temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InterpolateTuple(temp0, temp1);
    }
    else
    {
      op->vtkTupleInterpolator::InterpolateTuple(temp0, temp1);
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
PyvtkTupleInterpolator_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationType(temp0);
    }
    else
    {
      op->vtkTupleInterpolator::SetInterpolationType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationType() :
      op->vtkTupleInterpolator::GetInterpolationType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToLinear();
    }
    else
    {
      op->vtkTupleInterpolator::SetInterpolationTypeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_SetInterpolationTypeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToSpline();
    }
    else
    {
      op->vtkTupleInterpolator::SetInterpolationTypeToSpline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_SetInterpolatingSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatingSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  vtkSpline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatingSpline(temp0);
    }
    else
    {
      op->vtkTupleInterpolator::SetInterpolatingSpline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTupleInterpolator_GetInterpolatingSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolatingSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTupleInterpolator *op = static_cast<vtkTupleInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpline *tempr = (ap.IsBound() ?
      op->GetInterpolatingSpline() :
      op->vtkTupleInterpolator::GetInterpolatingSpline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTupleInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkTupleInterpolator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTupleInterpolator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTupleInterpolator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTupleInterpolator\nC++: static vtkTupleInterpolator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTupleInterpolator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTupleInterpolator\nC++: vtkTupleInterpolator *NewInstance()\n\n"},
  {"SetNumberOfComponents", PyvtkTupleInterpolator_SetNumberOfComponents, METH_VARARGS,
   "V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int numComp)\n\nSpecify the number of tuple components to interpolate. Note that\nsetting this value discards any previously inserted data.\n"},
  {"GetNumberOfComponents", PyvtkTupleInterpolator_GetNumberOfComponents, METH_VARARGS,
   "V.GetNumberOfComponents() -> int\nC++: virtual int GetNumberOfComponents()\n\nSpecify the number of tuple components to interpolate. Note that\nsetting this value discards any previously inserted data.\n"},
  {"GetNumberOfTuples", PyvtkTupleInterpolator_GetNumberOfTuples, METH_VARARGS,
   "V.GetNumberOfTuples() -> int\nC++: int GetNumberOfTuples()\n\nReturn the number of tuples in the list of tuples to be\ninterpolated.\n"},
  {"GetMinimumT", PyvtkTupleInterpolator_GetMinimumT, METH_VARARGS,
   "V.GetMinimumT() -> float\nC++: double GetMinimumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\nThis is a convenience method for interpolation.\n"},
  {"GetMaximumT", PyvtkTupleInterpolator_GetMaximumT, METH_VARARGS,
   "V.GetMaximumT() -> float\nC++: double GetMaximumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\nThis is a convenience method for interpolation.\n"},
  {"Initialize", PyvtkTupleInterpolator_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nReset the class so that it contains no (t,tuple) information.\n"},
  {"AddTuple", PyvtkTupleInterpolator_AddTuple, METH_VARARGS,
   "V.AddTuple(float, [float, ...])\nC++: void AddTuple(double t, double tuple[])\n\nAdd another tuple to the list of tuples to be interpolated.  Note\nthat using the same time t value more than once replaces the\nprevious tuple value at t.  At least two tuples must be added to\ndefine an interpolation function.\n"},
  {"RemoveTuple", PyvtkTupleInterpolator_RemoveTuple, METH_VARARGS,
   "V.RemoveTuple(float)\nC++: void RemoveTuple(double t)\n\nDelete the tuple at a particular parameter t. If there is no\ntuple defined at t, then the method does nothing.\n"},
  {"InterpolateTuple", PyvtkTupleInterpolator_InterpolateTuple, METH_VARARGS,
   "V.InterpolateTuple(float, [float, ...])\nC++: void InterpolateTuple(double t, double tuple[])\n\nInterpolate the list of tuples and determine a new tuple (i.e.,\nfill in the tuple provided). If t is outside the range of\n(min,max) values, then t is clamped. Note that each component of\ntuple[] is interpolated independently.\n"},
  {"SetInterpolationType", PyvtkTupleInterpolator_SetInterpolationType, METH_VARARGS,
   "V.SetInterpolationType(int)\nC++: void SetInterpolationType(int type)\n\nSpecify which type of function to use for interpolation. By\ndefault spline interpolation (SetInterpolationFunctionToSpline())\nis used (i.e., a Kochanek spline) and the InterpolatingSpline\ninstance variable is used to birth the actual interpolation\nsplines via a combination of NewInstance() and DeepCopy(). You\nmay also choose to use linear interpolation by invoking\nSetInterpolationFunctionToLinear(). Note that changing the type\nof interpolation causes previously inserted data to be discarded.\n"},
  {"GetInterpolationType", PyvtkTupleInterpolator_GetInterpolationType, METH_VARARGS,
   "V.GetInterpolationType() -> int\nC++: virtual int GetInterpolationType()\n\nSpecify which type of function to use for interpolation. By\ndefault spline interpolation (SetInterpolationFunctionToSpline())\nis used (i.e., a Kochanek spline) and the InterpolatingSpline\ninstance variable is used to birth the actual interpolation\nsplines via a combination of NewInstance() and DeepCopy(). You\nmay also choose to use linear interpolation by invoking\nSetInterpolationFunctionToLinear(). Note that changing the type\nof interpolation causes previously inserted data to be discarded.\n"},
  {"SetInterpolationTypeToLinear", PyvtkTupleInterpolator_SetInterpolationTypeToLinear, METH_VARARGS,
   "V.SetInterpolationTypeToLinear()\nC++: void SetInterpolationTypeToLinear()\n\nSpecify which type of function to use for interpolation. By\ndefault spline interpolation (SetInterpolationFunctionToSpline())\nis used (i.e., a Kochanek spline) and the InterpolatingSpline\ninstance variable is used to birth the actual interpolation\nsplines via a combination of NewInstance() and DeepCopy(). You\nmay also choose to use linear interpolation by invoking\nSetInterpolationFunctionToLinear(). Note that changing the type\nof interpolation causes previously inserted data to be discarded.\n"},
  {"SetInterpolationTypeToSpline", PyvtkTupleInterpolator_SetInterpolationTypeToSpline, METH_VARARGS,
   "V.SetInterpolationTypeToSpline()\nC++: void SetInterpolationTypeToSpline()\n\nSpecify which type of function to use for interpolation. By\ndefault spline interpolation (SetInterpolationFunctionToSpline())\nis used (i.e., a Kochanek spline) and the InterpolatingSpline\ninstance variable is used to birth the actual interpolation\nsplines via a combination of NewInstance() and DeepCopy(). You\nmay also choose to use linear interpolation by invoking\nSetInterpolationFunctionToLinear(). Note that changing the type\nof interpolation causes previously inserted data to be discarded.\n"},
  {"SetInterpolatingSpline", PyvtkTupleInterpolator_SetInterpolatingSpline, METH_VARARGS,
   "V.SetInterpolatingSpline(vtkSpline)\nC++: void SetInterpolatingSpline(vtkSpline *)\n\nIf the InterpolationType is set to spline, then this method\napplies. By default Kochanek interpolation is used, but you can\nspecify any instance of vtkSpline to use. Note that the actual\ninterpolating splines are created by invoking NewInstance()\nfollowed by DeepCopy() on the interpolating spline specified\nhere, for each tuple component to interpolate.\n"},
  {"GetInterpolatingSpline", PyvtkTupleInterpolator_GetInterpolatingSpline, METH_VARARGS,
   "V.GetInterpolatingSpline() -> vtkSpline\nC++: virtual vtkSpline *GetInterpolatingSpline()\n\nIf the InterpolationType is set to spline, then this method\napplies. By default Kochanek interpolation is used, but you can\nspecify any instance of vtkSpline to use. Note that the actual\ninterpolating splines are created by invoking NewInstance()\nfollowed by DeepCopy() on the interpolating spline specified\nhere, for each tuple component to interpolate.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTupleInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkTupleInterpolator", // tp_name
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
  PyvtkTupleInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTupleInterpolator_StaticNew()
{
  return vtkTupleInterpolator::New();
}

PyObject *PyvtkTupleInterpolator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTupleInterpolator_Type, PyvtkTupleInterpolator_Methods,
    "vtkTupleInterpolator",
 &PyvtkTupleInterpolator_StaticNew);

  PyTypeObject *pytype = &PyvtkTupleInterpolator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "INTERPOLATION_TYPE_LINEAR", vtkTupleInterpolator::INTERPOLATION_TYPE_LINEAR },
        { "INTERPOLATION_TYPE_SPLINE", vtkTupleInterpolator::INTERPOLATION_TYPE_SPLINE },
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

void PyVTKAddFile_vtkTupleInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTupleInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTupleInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

