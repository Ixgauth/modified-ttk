// python wrapper for vtkVolumeOfRevolutionFilter
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
#include "vtkVolumeOfRevolutionFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolumeOfRevolutionFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVolumeOfRevolutionFilter_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkVolumeOfRevolutionFilter_Doc =
  "vtkVolumeOfRevolutionFilter - sweep data about a line to create a\nvolume\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkVolumeOfRevolutionFilter is a modeling filter. It takes a\n"
  "2-dimensional dataset as input and generates an unstructured grid on\n"
  "output. The input dataset is swept around the axis of rotation to\n"
  "create dimension-elevated primitives. For example, sweeping a vertex\n"
  "creates a series of lines; sweeping a line creates a series of quads,\n"
  "etc.\n\n"
  "@warning\n"
  "The user must take care to ensure that the axis of revolution does\n"
  "not cross through the geometry, otherwise there will be intersecting\n"
  "cells in the output.\n\n"
  "@sa\n"
  "vtkRotationalExtrusionFilter\n\n";


static PyObject *
PyvtkVolumeOfRevolutionFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolumeOfRevolutionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeOfRevolutionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolumeOfRevolutionFilter *tempr = vtkVolumeOfRevolutionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeOfRevolutionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeOfRevolutionFilter::NewInstance());

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
PyvtkVolumeOfRevolutionFilter_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkVolumeOfRevolutionFilter::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkVolumeOfRevolutionFilter::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkVolumeOfRevolutionFilter::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkVolumeOfRevolutionFilter::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_SetSweepAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSweepAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSweepAngle(temp0);
    }
    else
    {
      op->vtkVolumeOfRevolutionFilter::SetSweepAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetSweepAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSweepAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSweepAngleMinValue() :
      op->vtkVolumeOfRevolutionFilter::GetSweepAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetSweepAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSweepAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSweepAngleMaxValue() :
      op->vtkVolumeOfRevolutionFilter::GetSweepAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetSweepAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSweepAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSweepAngle() :
      op->vtkVolumeOfRevolutionFilter::GetSweepAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_SetAxisPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

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
      op->SetAxisPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVolumeOfRevolutionFilter::SetAxisPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOfRevolutionFilter_SetAxisPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisPosition(temp0);
    }
    else
    {
      op->vtkVolumeOfRevolutionFilter::SetAxisPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOfRevolutionFilter_SetAxisPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVolumeOfRevolutionFilter_SetAxisPosition_s1(self, args);
    case 1:
      return PyvtkVolumeOfRevolutionFilter_SetAxisPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisPosition");
  return nullptr;
}



static PyObject *
PyvtkVolumeOfRevolutionFilter_GetAxisPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisPosition() :
      op->vtkVolumeOfRevolutionFilter::GetAxisPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_SetAxisDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

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
      op->SetAxisDirection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVolumeOfRevolutionFilter::SetAxisDirection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOfRevolutionFilter_SetAxisDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisDirection(temp0);
    }
    else
    {
      op->vtkVolumeOfRevolutionFilter::SetAxisDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOfRevolutionFilter_SetAxisDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVolumeOfRevolutionFilter_SetAxisDirection_s1(self, args);
    case 1:
      return PyvtkVolumeOfRevolutionFilter_SetAxisDirection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisDirection");
  return nullptr;
}



static PyObject *
PyvtkVolumeOfRevolutionFilter_GetAxisDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisDirection() :
      op->vtkVolumeOfRevolutionFilter::GetAxisDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

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
      op->vtkVolumeOfRevolutionFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkVolumeOfRevolutionFilter::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkVolumeOfRevolutionFilter::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkVolumeOfRevolutionFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeOfRevolutionFilter_Methods[] = {
  {"IsTypeOf", PyvtkVolumeOfRevolutionFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolumeOfRevolutionFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolumeOfRevolutionFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVolumeOfRevolutionFilter\nC++: static vtkVolumeOfRevolutionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolumeOfRevolutionFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVolumeOfRevolutionFilter\nC++: vtkVolumeOfRevolutionFilter *NewInstance()\n\n"},
  {"SetResolution", PyvtkVolumeOfRevolutionFilter_SetResolution, METH_VARARGS,
   "V.SetResolution(int)\nC++: virtual void SetResolution(int _arg)\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {"GetResolutionMinValue", PyvtkVolumeOfRevolutionFilter_GetResolutionMinValue, METH_VARARGS,
   "V.GetResolutionMinValue() -> int\nC++: virtual int GetResolutionMinValue()\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {"GetResolutionMaxValue", PyvtkVolumeOfRevolutionFilter_GetResolutionMaxValue, METH_VARARGS,
   "V.GetResolutionMaxValue() -> int\nC++: virtual int GetResolutionMaxValue()\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {"GetResolution", PyvtkVolumeOfRevolutionFilter_GetResolution, METH_VARARGS,
   "V.GetResolution() -> int\nC++: virtual int GetResolution()\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {"SetSweepAngle", PyvtkVolumeOfRevolutionFilter_SetSweepAngle, METH_VARARGS,
   "V.SetSweepAngle(float)\nC++: virtual void SetSweepAngle(double _arg)\n\nSet/Get angle of rotation in degrees.\n"},
  {"GetSweepAngleMinValue", PyvtkVolumeOfRevolutionFilter_GetSweepAngleMinValue, METH_VARARGS,
   "V.GetSweepAngleMinValue() -> float\nC++: virtual double GetSweepAngleMinValue()\n\nSet/Get angle of rotation in degrees.\n"},
  {"GetSweepAngleMaxValue", PyvtkVolumeOfRevolutionFilter_GetSweepAngleMaxValue, METH_VARARGS,
   "V.GetSweepAngleMaxValue() -> float\nC++: virtual double GetSweepAngleMaxValue()\n\nSet/Get angle of rotation in degrees.\n"},
  {"GetSweepAngle", PyvtkVolumeOfRevolutionFilter_GetSweepAngle, METH_VARARGS,
   "V.GetSweepAngle() -> float\nC++: virtual double GetSweepAngle()\n\nSet/Get angle of rotation in degrees.\n"},
  {"SetAxisPosition", PyvtkVolumeOfRevolutionFilter_SetAxisPosition, METH_VARARGS,
   "V.SetAxisPosition(float, float, float)\nC++: void SetAxisPosition(double, double, double)\nV.SetAxisPosition((float, float, float))\nC++: void SetAxisPosition(double a[3])\n\n"},
  {"GetAxisPosition", PyvtkVolumeOfRevolutionFilter_GetAxisPosition, METH_VARARGS,
   "V.GetAxisPosition() -> (float, float, float)\nC++: double *GetAxisPosition()\n\n"},
  {"SetAxisDirection", PyvtkVolumeOfRevolutionFilter_SetAxisDirection, METH_VARARGS,
   "V.SetAxisDirection(float, float, float)\nC++: void SetAxisDirection(double, double, double)\nV.SetAxisDirection((float, float, float))\nC++: void SetAxisDirection(double a[3])\n\n"},
  {"GetAxisDirection", PyvtkVolumeOfRevolutionFilter_GetAxisDirection, METH_VARARGS,
   "V.GetAxisDirection() -> (float, float, float)\nC++: double *GetAxisDirection()\n\n"},
  {"SetOutputPointsPrecision", PyvtkVolumeOfRevolutionFilter_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkVolumeOfRevolutionFilter_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "V.GetOutputPointsPrecisionMinValue() -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkVolumeOfRevolutionFilter_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "V.GetOutputPointsPrecisionMaxValue() -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkVolumeOfRevolutionFilter_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVolumeOfRevolutionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkVolumeOfRevolutionFilter", // tp_name
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
  PyvtkVolumeOfRevolutionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolumeOfRevolutionFilter_StaticNew()
{
  return vtkVolumeOfRevolutionFilter::New();
}

PyObject *PyvtkVolumeOfRevolutionFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVolumeOfRevolutionFilter_Type, PyvtkVolumeOfRevolutionFilter_Methods,
    "vtkVolumeOfRevolutionFilter",
 &PyvtkVolumeOfRevolutionFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkVolumeOfRevolutionFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVolumeOfRevolutionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolumeOfRevolutionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolumeOfRevolutionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

