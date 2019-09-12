// python wrapper for vtkAngularPeriodicFilter
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
#include "vtkAngularPeriodicFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAngularPeriodicFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAngularPeriodicFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPeriodicFilter_ClassNew
extern "C" { PyObject *PyvtkPeriodicFilter_ClassNew(); }
#define DECLARED_PyvtkPeriodicFilter_ClassNew
#endif

static const char *PyvtkAngularPeriodicFilter_Doc =
  "vtkAngularPeriodicFilter - A filter to produce mapped angular\nperiodic multiblock dataset from a single block, by rotation.\n\n"
  "Superclass: vtkPeriodicFilter\n\n"
  "Generate angular periodic dataset by rotating points, vectors and\n"
  "tensors data arrays from an original data array. The generated\n"
  "dataset is of the same type than the input (float or double). To\n"
  "compute the rotation this filter needs i) a number of periods, which\n"
  "can be the maximum, i.e. a full period, ii) an angle, which can be\n"
  "fetched from a field data array in radian or directly in degrees;\n"
  "iii) the axis (X, Y or Z) and the center of rotation. Point\n"
  "coordinates are transformed, as well as all vectors (3-components)\n"
  "and tensors (9 components) in points and cell data arrays. The\n"
  "generated multiblock will have the same tree architecture than the\n"
  "input, except transformed leaves are replaced by a\n"
  "vtkMultipieceDataSet. Supported input leaf dataset type are:\n"
  "vtkPolyData, vtkStructuredGrid and vtkUnstructuredGrid. Other data\n"
  "objects are rotated using the transform filter (at a high cost!).\n\n";


static PyObject *
PyvtkAngularPeriodicFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAngularPeriodicFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAngularPeriodicFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAngularPeriodicFilter *tempr = vtkAngularPeriodicFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAngularPeriodicFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAngularPeriodicFilter::NewInstance());

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
PyvtkAngularPeriodicFilter_SetComputeRotationsOnTheFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeRotationsOnTheFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeRotationsOnTheFly(temp0);
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetComputeRotationsOnTheFly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetComputeRotationsOnTheFly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeRotationsOnTheFly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeRotationsOnTheFly() :
      op->vtkAngularPeriodicFilter::GetComputeRotationsOnTheFly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_ComputeRotationsOnTheFlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeRotationsOnTheFlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeRotationsOnTheFlyOn();
    }
    else
    {
      op->vtkAngularPeriodicFilter::ComputeRotationsOnTheFlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_ComputeRotationsOnTheFlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeRotationsOnTheFlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeRotationsOnTheFlyOff();
    }
    else
    {
      op->vtkAngularPeriodicFilter::ComputeRotationsOnTheFlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationMode(temp0);
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationModeMinValue() :
      op->vtkAngularPeriodicFilter::GetRotationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationModeMaxValue() :
      op->vtkAngularPeriodicFilter::GetRotationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationMode() :
      op->vtkAngularPeriodicFilter::GetRotationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationModeToDirectAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationModeToDirectAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRotationModeToDirectAngle();
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationModeToDirectAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationModeToArrayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationModeToArrayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRotationModeToArrayValue();
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationModeToArrayValue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAngle(temp0);
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotationAngle() :
      op->vtkAngularPeriodicFilter::GetRotationAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationArrayName(temp0);
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetRotationArrayName() :
      op->vtkAngularPeriodicFilter::GetRotationArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAxis(temp0);
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationAxisMinValue() :
      op->vtkAngularPeriodicFilter::GetRotationAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationAxisMaxValue() :
      op->vtkAngularPeriodicFilter::GetRotationAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_GetRotationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationAxis() :
      op->vtkAngularPeriodicFilter::GetRotationAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationAxisToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAxisToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAxisToX();
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationAxisToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationAxisToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAxisToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAxisToY();
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationAxisToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetRotationAxisToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAxisToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAxisToZ();
    }
    else
    {
      op->vtkAngularPeriodicFilter::SetRotationAxisToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngularPeriodicFilter_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

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
      op->vtkAngularPeriodicFilter::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAngularPeriodicFilter_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

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
      op->vtkAngularPeriodicFilter::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAngularPeriodicFilter_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAngularPeriodicFilter_SetCenter_s1(self, args);
    case 1:
      return PyvtkAngularPeriodicFilter_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkAngularPeriodicFilter_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngularPeriodicFilter *op = static_cast<vtkAngularPeriodicFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkAngularPeriodicFilter::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkAngularPeriodicFilter_Methods[] = {
  {"IsTypeOf", PyvtkAngularPeriodicFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAngularPeriodicFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAngularPeriodicFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAngularPeriodicFilter\nC++: static vtkAngularPeriodicFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAngularPeriodicFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAngularPeriodicFilter\nC++: vtkAngularPeriodicFilter *NewInstance()\n\n"},
  {"SetComputeRotationsOnTheFly", PyvtkAngularPeriodicFilter_SetComputeRotationsOnTheFly, METH_VARARGS,
   "V.SetComputeRotationsOnTheFly(bool)\nC++: virtual void SetComputeRotationsOnTheFly(bool _arg)\n\nSet/Get whether the rotated array values should be computed\non-the-fly (default), which is compute-intensive, or the arrays\nshould be explicitly generated and stored, at the cost of using\nmore memory.\n"},
  {"GetComputeRotationsOnTheFly", PyvtkAngularPeriodicFilter_GetComputeRotationsOnTheFly, METH_VARARGS,
   "V.GetComputeRotationsOnTheFly() -> bool\nC++: virtual bool GetComputeRotationsOnTheFly()\n\nSet/Get whether the rotated array values should be computed\non-the-fly (default), which is compute-intensive, or the arrays\nshould be explicitly generated and stored, at the cost of using\nmore memory.\n"},
  {"ComputeRotationsOnTheFlyOn", PyvtkAngularPeriodicFilter_ComputeRotationsOnTheFlyOn, METH_VARARGS,
   "V.ComputeRotationsOnTheFlyOn()\nC++: virtual void ComputeRotationsOnTheFlyOn()\n\nSet/Get whether the rotated array values should be computed\non-the-fly (default), which is compute-intensive, or the arrays\nshould be explicitly generated and stored, at the cost of using\nmore memory.\n"},
  {"ComputeRotationsOnTheFlyOff", PyvtkAngularPeriodicFilter_ComputeRotationsOnTheFlyOff, METH_VARARGS,
   "V.ComputeRotationsOnTheFlyOff()\nC++: virtual void ComputeRotationsOnTheFlyOff()\n\nSet/Get whether the rotated array values should be computed\non-the-fly (default), which is compute-intensive, or the arrays\nshould be explicitly generated and stored, at the cost of using\nmore memory.\n"},
  {"SetRotationMode", PyvtkAngularPeriodicFilter_SetRotationMode, METH_VARARGS,
   "V.SetRotationMode(int)\nC++: virtual void SetRotationMode(int _arg)\n\nSet/Get The rotation mode. VTK_ROTATION_MODE_DIRECT_ANGLE to\nspecify an angle value (default), VTK_ROTATION_MODE_ARRAY_VALUE\nto use value from an array in the input dataset.\n"},
  {"GetRotationModeMinValue", PyvtkAngularPeriodicFilter_GetRotationModeMinValue, METH_VARARGS,
   "V.GetRotationModeMinValue() -> int\nC++: virtual int GetRotationModeMinValue()\n\nSet/Get The rotation mode. VTK_ROTATION_MODE_DIRECT_ANGLE to\nspecify an angle value (default), VTK_ROTATION_MODE_ARRAY_VALUE\nto use value from an array in the input dataset.\n"},
  {"GetRotationModeMaxValue", PyvtkAngularPeriodicFilter_GetRotationModeMaxValue, METH_VARARGS,
   "V.GetRotationModeMaxValue() -> int\nC++: virtual int GetRotationModeMaxValue()\n\nSet/Get The rotation mode. VTK_ROTATION_MODE_DIRECT_ANGLE to\nspecify an angle value (default), VTK_ROTATION_MODE_ARRAY_VALUE\nto use value from an array in the input dataset.\n"},
  {"GetRotationMode", PyvtkAngularPeriodicFilter_GetRotationMode, METH_VARARGS,
   "V.GetRotationMode() -> int\nC++: virtual int GetRotationMode()\n\nSet/Get The rotation mode. VTK_ROTATION_MODE_DIRECT_ANGLE to\nspecify an angle value (default), VTK_ROTATION_MODE_ARRAY_VALUE\nto use value from an array in the input dataset.\n"},
  {"SetRotationModeToDirectAngle", PyvtkAngularPeriodicFilter_SetRotationModeToDirectAngle, METH_VARARGS,
   "V.SetRotationModeToDirectAngle()\nC++: void SetRotationModeToDirectAngle()\n\nSet/Get The rotation mode. VTK_ROTATION_MODE_DIRECT_ANGLE to\nspecify an angle value (default), VTK_ROTATION_MODE_ARRAY_VALUE\nto use value from an array in the input dataset.\n"},
  {"SetRotationModeToArrayValue", PyvtkAngularPeriodicFilter_SetRotationModeToArrayValue, METH_VARARGS,
   "V.SetRotationModeToArrayValue()\nC++: void SetRotationModeToArrayValue()\n\nSet/Get The rotation mode. VTK_ROTATION_MODE_DIRECT_ANGLE to\nspecify an angle value (default), VTK_ROTATION_MODE_ARRAY_VALUE\nto use value from an array in the input dataset.\n"},
  {"SetRotationAngle", PyvtkAngularPeriodicFilter_SetRotationAngle, METH_VARARGS,
   "V.SetRotationAngle(float)\nC++: virtual void SetRotationAngle(double _arg)\n\nSet/Get Rotation angle, in degrees. Used only with\nVTK_ROTATION_MODE_DIRECT_ANGLE. Default is 180.\n"},
  {"GetRotationAngle", PyvtkAngularPeriodicFilter_GetRotationAngle, METH_VARARGS,
   "V.GetRotationAngle() -> float\nC++: virtual double GetRotationAngle()\n\nSet/Get Rotation angle, in degrees. Used only with\nVTK_ROTATION_MODE_DIRECT_ANGLE. Default is 180.\n"},
  {"SetRotationArrayName", PyvtkAngularPeriodicFilter_SetRotationArrayName, METH_VARARGS,
   "V.SetRotationArrayName(string)\nC++: virtual void SetRotationArrayName(const char *_arg)\n\nSet/Get Name of array to get the angle from. Used only with\nVTK_ROTATION_MODE_ARRAY_VALUE.\n"},
  {"GetRotationArrayName", PyvtkAngularPeriodicFilter_GetRotationArrayName, METH_VARARGS,
   "V.GetRotationArrayName() -> string\nC++: virtual char *GetRotationArrayName()\n\nSet/Get Name of array to get the angle from. Used only with\nVTK_ROTATION_MODE_ARRAY_VALUE.\n"},
  {"SetRotationAxis", PyvtkAngularPeriodicFilter_SetRotationAxis, METH_VARARGS,
   "V.SetRotationAxis(int)\nC++: virtual void SetRotationAxis(int _arg)\n\nSet/Get Rotation Axis, 0 for X, 1 for Y, 2 for Z\n"},
  {"GetRotationAxisMinValue", PyvtkAngularPeriodicFilter_GetRotationAxisMinValue, METH_VARARGS,
   "V.GetRotationAxisMinValue() -> int\nC++: virtual int GetRotationAxisMinValue()\n\nSet/Get Rotation Axis, 0 for X, 1 for Y, 2 for Z\n"},
  {"GetRotationAxisMaxValue", PyvtkAngularPeriodicFilter_GetRotationAxisMaxValue, METH_VARARGS,
   "V.GetRotationAxisMaxValue() -> int\nC++: virtual int GetRotationAxisMaxValue()\n\nSet/Get Rotation Axis, 0 for X, 1 for Y, 2 for Z\n"},
  {"GetRotationAxis", PyvtkAngularPeriodicFilter_GetRotationAxis, METH_VARARGS,
   "V.GetRotationAxis() -> int\nC++: virtual int GetRotationAxis()\n\nSet/Get Rotation Axis, 0 for X, 1 for Y, 2 for Z\n"},
  {"SetRotationAxisToX", PyvtkAngularPeriodicFilter_SetRotationAxisToX, METH_VARARGS,
   "V.SetRotationAxisToX()\nC++: void SetRotationAxisToX()\n\nSet/Get Rotation Axis, 0 for X, 1 for Y, 2 for Z\n"},
  {"SetRotationAxisToY", PyvtkAngularPeriodicFilter_SetRotationAxisToY, METH_VARARGS,
   "V.SetRotationAxisToY()\nC++: void SetRotationAxisToY()\n\nSet/Get Rotation Axis, 0 for X, 1 for Y, 2 for Z\n"},
  {"SetRotationAxisToZ", PyvtkAngularPeriodicFilter_SetRotationAxisToZ, METH_VARARGS,
   "V.SetRotationAxisToZ()\nC++: void SetRotationAxisToZ()\n\nSet/Get Rotation Axis, 0 for X, 1 for Y, 2 for Z\n"},
  {"SetCenter", PyvtkAngularPeriodicFilter_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkAngularPeriodicFilter_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAngularPeriodicFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkAngularPeriodicFilter", // tp_name
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
  PyvtkAngularPeriodicFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAngularPeriodicFilter_StaticNew()
{
  return vtkAngularPeriodicFilter::New();
}

PyObject *PyvtkAngularPeriodicFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAngularPeriodicFilter_Type, PyvtkAngularPeriodicFilter_Methods,
    "vtkAngularPeriodicFilter",
 &PyvtkAngularPeriodicFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkAngularPeriodicFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPeriodicFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAngularPeriodicFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAngularPeriodicFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAngularPeriodicFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_ROTATION_MODE_DIRECT_ANGLE", 0 },
        { "VTK_ROTATION_MODE_ARRAY_VALUE", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

