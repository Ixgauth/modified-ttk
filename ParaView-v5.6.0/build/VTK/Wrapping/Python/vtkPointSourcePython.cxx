// python wrapper for vtkPointSource
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
#include "vtkPointSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkPointSource_Doc =
  "vtkPointSource - create a random cloud of points\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPointSource is a source object that creates a user-specified\n"
  "number of points within a specified radius about a specified center\n"
  "point. By default location of the points is random within the sphere.\n"
  "It is also possible to generate random points only on the surface of\n"
  "the sphere. The output PolyData has the specified number of points\n"
  "and 1 cell - a vtkPolyVertex containing all of the points.\n\n";


static PyObject *
PyvtkPointSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointSource *tempr = vtkPointSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointSource::NewInstance());

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
PyvtkPointSource_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPoints(temp0);
    }
    else
    {
      op->vtkPointSource::SetNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetNumberOfPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPointsMinValue() :
      op->vtkPointSource::GetNumberOfPointsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetNumberOfPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPointsMaxValue() :
      op->vtkPointSource::GetNumberOfPointsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkPointSource::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkPointSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPointSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkPointSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkPointSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkPointSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkPointSource::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkPointSource::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkPointSource::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkPointSource::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetDistribution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistribution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistribution(temp0);
    }
    else
    {
      op->vtkPointSource::SetDistribution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetDistributionToUniform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributionToUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDistributionToUniform();
    }
    else
    {
      op->vtkPointSource::SetDistributionToUniform();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetDistributionToShell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributionToShell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDistributionToShell();
    }
    else
    {
      op->vtkPointSource::SetDistributionToShell();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetDistribution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistribution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDistribution() :
      op->vtkPointSource::GetDistribution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkPointSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPointSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetRandomSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  vtkRandomSequence *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRandomSequence"))
  {
    if (ap.IsBound())
    {
      op->SetRandomSequence(temp0);
    }
    else
    {
      op->vtkPointSource::SetRandomSequence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetRandomSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomSequence *tempr = (ap.IsBound() ?
      op->GetRandomSequence() :
      op->vtkPointSource::GetRandomSequence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPointSource_Methods[] = {
  {"IsTypeOf", PyvtkPointSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointSource\nC++: static vtkPointSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointSource\nC++: vtkPointSource *NewInstance()\n\n"},
  {"SetNumberOfPoints", PyvtkPointSource_SetNumberOfPoints, METH_VARARGS,
   "V.SetNumberOfPoints(int)\nC++: virtual void SetNumberOfPoints(vtkIdType _arg)\n\nSet the number of points to generate.\n"},
  {"GetNumberOfPointsMinValue", PyvtkPointSource_GetNumberOfPointsMinValue, METH_VARARGS,
   "V.GetNumberOfPointsMinValue() -> int\nC++: virtual vtkIdType GetNumberOfPointsMinValue()\n\nSet the number of points to generate.\n"},
  {"GetNumberOfPointsMaxValue", PyvtkPointSource_GetNumberOfPointsMaxValue, METH_VARARGS,
   "V.GetNumberOfPointsMaxValue() -> int\nC++: virtual vtkIdType GetNumberOfPointsMaxValue()\n\nSet the number of points to generate.\n"},
  {"GetNumberOfPoints", PyvtkPointSource_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nSet the number of points to generate.\n"},
  {"SetCenter", PyvtkPointSource_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkPointSource_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the point cloud.\n"},
  {"SetRadius", PyvtkPointSource_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSet the radius of the point cloud.  If you are generating a\nGaussian distribution, then this is the standard deviation for\neach of x, y, and z.\n"},
  {"GetRadiusMinValue", PyvtkPointSource_GetRadiusMinValue, METH_VARARGS,
   "V.GetRadiusMinValue() -> float\nC++: virtual double GetRadiusMinValue()\n\nSet the radius of the point cloud.  If you are generating a\nGaussian distribution, then this is the standard deviation for\neach of x, y, and z.\n"},
  {"GetRadiusMaxValue", PyvtkPointSource_GetRadiusMaxValue, METH_VARARGS,
   "V.GetRadiusMaxValue() -> float\nC++: virtual double GetRadiusMaxValue()\n\nSet the radius of the point cloud.  If you are generating a\nGaussian distribution, then this is the standard deviation for\neach of x, y, and z.\n"},
  {"GetRadius", PyvtkPointSource_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSet the radius of the point cloud.  If you are generating a\nGaussian distribution, then this is the standard deviation for\neach of x, y, and z.\n"},
  {"SetDistribution", PyvtkPointSource_SetDistribution, METH_VARARGS,
   "V.SetDistribution(int)\nC++: virtual void SetDistribution(int _arg)\n\nSpecify the distribution to use.  The default is a uniform\ndistribution.  The shell distribution produces random points on\nthe surface of the sphere, none in the interior.\n"},
  {"SetDistributionToUniform", PyvtkPointSource_SetDistributionToUniform, METH_VARARGS,
   "V.SetDistributionToUniform()\nC++: void SetDistributionToUniform()\n\nSpecify the distribution to use.  The default is a uniform\ndistribution.  The shell distribution produces random points on\nthe surface of the sphere, none in the interior.\n"},
  {"SetDistributionToShell", PyvtkPointSource_SetDistributionToShell, METH_VARARGS,
   "V.SetDistributionToShell()\nC++: void SetDistributionToShell()\n\nSpecify the distribution to use.  The default is a uniform\ndistribution.  The shell distribution produces random points on\nthe surface of the sphere, none in the interior.\n"},
  {"GetDistribution", PyvtkPointSource_GetDistribution, METH_VARARGS,
   "V.GetDistribution() -> int\nC++: virtual int GetDistribution()\n\nSpecify the distribution to use.  The default is a uniform\ndistribution.  The shell distribution produces random points on\nthe surface of the sphere, none in the interior.\n"},
  {"SetOutputPointsPrecision", PyvtkPointSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkPointSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"SetRandomSequence", PyvtkPointSource_SetRandomSequence, METH_VARARGS,
   "V.SetRandomSequence(vtkRandomSequence)\nC++: virtual void SetRandomSequence(\n    vtkRandomSequence *randomSequence)\n\nSet/Get a random sequence generator. By default, the generator in\nvtkMath is used to maintain backwards compatibility.\n"},
  {"GetRandomSequence", PyvtkPointSource_GetRandomSequence, METH_VARARGS,
   "V.GetRandomSequence() -> vtkRandomSequence\nC++: virtual vtkRandomSequence *GetRandomSequence()\n\nSet/Get a random sequence generator. By default, the generator in\nvtkMath is used to maintain backwards compatibility.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkPointSource", // tp_name
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
  PyvtkPointSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointSource_StaticNew()
{
  return vtkPointSource::New();
}

PyObject *PyvtkPointSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointSource_Type, PyvtkPointSource_Methods,
    "vtkPointSource",
 &PyvtkPointSource_StaticNew);

  PyTypeObject *pytype = &PyvtkPointSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointSource", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_POINT_UNIFORM", 1 },
        { "VTK_POINT_SHELL", 0 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

