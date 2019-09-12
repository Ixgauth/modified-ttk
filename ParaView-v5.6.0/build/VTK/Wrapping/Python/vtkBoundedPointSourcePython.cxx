// python wrapper for vtkBoundedPointSource
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
#include "vtkBoundedPointSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoundedPointSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBoundedPointSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkBoundedPointSource_Doc =
  "vtkBoundedPointSource - create a random cloud of points within a\nspecified bounding box\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkBoundedPointSource is a source object that creates a\n"
  "user-specified number of points within a specified bounding box. The\n"
  "points are scattered randomly throughout the box. Optionally, the\n"
  "user can produce a vtkPolyVertex cell as well as random scalar values\n"
  "within a specified range. The class is typically used for debugging\n"
  "and testing, as well as seeding streamlines.\n\n";


static PyObject *
PyvtkBoundedPointSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoundedPointSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoundedPointSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoundedPointSource *tempr = vtkBoundedPointSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoundedPointSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoundedPointSource::NewInstance());

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
PyvtkBoundedPointSource_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

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
      op->vtkBoundedPointSource::SetNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_GetNumberOfPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPointsMinValue() :
      op->vtkBoundedPointSource::GetNumberOfPointsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_GetNumberOfPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPointsMaxValue() :
      op->vtkBoundedPointSource::GetNumberOfPointsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkBoundedPointSource::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkBoundedPointSource::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedPointSource_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkBoundedPointSource::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedPointSource_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkBoundedPointSource_SetBounds_s1(self, args);
    case 1:
      return PyvtkBoundedPointSource_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkBoundedPointSource_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkBoundedPointSource::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

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
      op->vtkBoundedPointSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkBoundedPointSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_SetProduceCellOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProduceCellOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProduceCellOutput(temp0);
    }
    else
    {
      op->vtkBoundedPointSource::SetProduceCellOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_GetProduceCellOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProduceCellOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProduceCellOutput() :
      op->vtkBoundedPointSource::GetProduceCellOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_ProduceCellOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceCellOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceCellOutputOn();
    }
    else
    {
      op->vtkBoundedPointSource::ProduceCellOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_ProduceCellOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceCellOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceCellOutputOff();
    }
    else
    {
      op->vtkBoundedPointSource::ProduceCellOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_SetProduceRandomScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProduceRandomScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProduceRandomScalars(temp0);
    }
    else
    {
      op->vtkBoundedPointSource::SetProduceRandomScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_GetProduceRandomScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProduceRandomScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProduceRandomScalars() :
      op->vtkBoundedPointSource::GetProduceRandomScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_ProduceRandomScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceRandomScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceRandomScalarsOn();
    }
    else
    {
      op->vtkBoundedPointSource::ProduceRandomScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_ProduceRandomScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceRandomScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceRandomScalarsOff();
    }
    else
    {
      op->vtkBoundedPointSource::ProduceRandomScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPointSource_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkBoundedPointSource::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedPointSource_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0);
    }
    else
    {
      op->vtkBoundedPointSource::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedPointSource_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBoundedPointSource_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkBoundedPointSource_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}



static PyObject *
PyvtkBoundedPointSource_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPointSource *op = static_cast<vtkBoundedPointSource *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkBoundedPointSource::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkBoundedPointSource_Methods[] = {
  {"IsTypeOf", PyvtkBoundedPointSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {"IsA", PyvtkBoundedPointSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {"SafeDownCast", PyvtkBoundedPointSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBoundedPointSource\nC++: static vtkBoundedPointSource *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {"NewInstance", PyvtkBoundedPointSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBoundedPointSource\nC++: vtkBoundedPointSource *NewInstance()\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {"SetNumberOfPoints", PyvtkBoundedPointSource_SetNumberOfPoints, METH_VARARGS,
   "V.SetNumberOfPoints(int)\nC++: virtual void SetNumberOfPoints(vtkIdType _arg)\n\nSet the number of points to generate.\n"},
  {"GetNumberOfPointsMinValue", PyvtkBoundedPointSource_GetNumberOfPointsMinValue, METH_VARARGS,
   "V.GetNumberOfPointsMinValue() -> int\nC++: virtual vtkIdType GetNumberOfPointsMinValue()\n\nSet the number of points to generate.\n"},
  {"GetNumberOfPointsMaxValue", PyvtkBoundedPointSource_GetNumberOfPointsMaxValue, METH_VARARGS,
   "V.GetNumberOfPointsMaxValue() -> int\nC++: virtual vtkIdType GetNumberOfPointsMaxValue()\n\nSet the number of points to generate.\n"},
  {"GetNumberOfPoints", PyvtkBoundedPointSource_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nSet the number of points to generate.\n"},
  {"SetBounds", PyvtkBoundedPointSource_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {"GetBounds", PyvtkBoundedPointSource_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nSet the bounding box for the point distribution. By default the\nbounds is (-1,1,-1,1,-1,1).\n"},
  {"SetOutputPointsPrecision", PyvtkBoundedPointSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkBoundedPointSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"SetProduceCellOutput", PyvtkBoundedPointSource_SetProduceCellOutput, METH_VARARGS,
   "V.SetProduceCellOutput(bool)\nC++: virtual void SetProduceCellOutput(bool _arg)\n\nIndicate whether to produce a vtkPolyVertex cell to go along with\nthe output vtkPoints generated. By default a cell is NOT\nproduced. Some filters do not need the vtkPolyVertex which just\nconsumes a lot of memory.\n"},
  {"GetProduceCellOutput", PyvtkBoundedPointSource_GetProduceCellOutput, METH_VARARGS,
   "V.GetProduceCellOutput() -> bool\nC++: virtual bool GetProduceCellOutput()\n\nIndicate whether to produce a vtkPolyVertex cell to go along with\nthe output vtkPoints generated. By default a cell is NOT\nproduced. Some filters do not need the vtkPolyVertex which just\nconsumes a lot of memory.\n"},
  {"ProduceCellOutputOn", PyvtkBoundedPointSource_ProduceCellOutputOn, METH_VARARGS,
   "V.ProduceCellOutputOn()\nC++: virtual void ProduceCellOutputOn()\n\nIndicate whether to produce a vtkPolyVertex cell to go along with\nthe output vtkPoints generated. By default a cell is NOT\nproduced. Some filters do not need the vtkPolyVertex which just\nconsumes a lot of memory.\n"},
  {"ProduceCellOutputOff", PyvtkBoundedPointSource_ProduceCellOutputOff, METH_VARARGS,
   "V.ProduceCellOutputOff()\nC++: virtual void ProduceCellOutputOff()\n\nIndicate whether to produce a vtkPolyVertex cell to go along with\nthe output vtkPoints generated. By default a cell is NOT\nproduced. Some filters do not need the vtkPolyVertex which just\nconsumes a lot of memory.\n"},
  {"SetProduceRandomScalars", PyvtkBoundedPointSource_SetProduceRandomScalars, METH_VARARGS,
   "V.SetProduceRandomScalars(bool)\nC++: virtual void SetProduceRandomScalars(bool _arg)\n\nIndicate whether to produce random point scalars in the output.\nBy default this is off.\n"},
  {"GetProduceRandomScalars", PyvtkBoundedPointSource_GetProduceRandomScalars, METH_VARARGS,
   "V.GetProduceRandomScalars() -> bool\nC++: virtual bool GetProduceRandomScalars()\n\nIndicate whether to produce random point scalars in the output.\nBy default this is off.\n"},
  {"ProduceRandomScalarsOn", PyvtkBoundedPointSource_ProduceRandomScalarsOn, METH_VARARGS,
   "V.ProduceRandomScalarsOn()\nC++: virtual void ProduceRandomScalarsOn()\n\nIndicate whether to produce random point scalars in the output.\nBy default this is off.\n"},
  {"ProduceRandomScalarsOff", PyvtkBoundedPointSource_ProduceRandomScalarsOff, METH_VARARGS,
   "V.ProduceRandomScalarsOff()\nC++: virtual void ProduceRandomScalarsOff()\n\nIndicate whether to produce random point scalars in the output.\nBy default this is off.\n"},
  {"SetScalarRange", PyvtkBoundedPointSource_SetScalarRange, METH_VARARGS,
   "V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {"GetScalarRange", PyvtkBoundedPointSource_GetScalarRange, METH_VARARGS,
   "V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\nSet the range in which the random scalars should be produced. By\ndefault the scalar range is (0,1).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBoundedPointSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkBoundedPointSource", // tp_name
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
  PyvtkBoundedPointSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoundedPointSource_StaticNew()
{
  return vtkBoundedPointSource::New();
}

PyObject *PyvtkBoundedPointSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBoundedPointSource_Type, PyvtkBoundedPointSource_Methods,
    "vtkBoundedPointSource",
 &PyvtkBoundedPointSource_StaticNew);

  PyTypeObject *pytype = &PyvtkBoundedPointSource_Type;

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

void PyVTKAddFile_vtkBoundedPointSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoundedPointSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoundedPointSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

