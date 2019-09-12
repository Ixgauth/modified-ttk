// python wrapper for vtkSPHKernel
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
#include "vtkSPHKernel.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSPHKernel(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSPHKernel_ClassNew(); }

#ifndef DECLARED_PyvtkInterpolationKernel_ClassNew
extern "C" { PyObject *PyvtkInterpolationKernel_ClassNew(); }
#define DECLARED_PyvtkInterpolationKernel_ClassNew
#endif

static const char *PyvtkSPHKernel_Doc =
  "vtkSPHKernel - a family of SPH interpolation kernels\n\n"
  "Superclass: vtkInterpolationKernel\n\n"
  "vtkSPHKernel is an abstract superclass for smoothed-particle\n"
  "hydrodynamics interpolation kernels as described by D.J. Price (see\n"
  "full reference below).\n\n"
  "Note that the kernel operates over a volume in space defined by a\n"
  "radius at a sampling point. The kernel implicitly assumes that the\n"
  "particles making up the input data satisfies physical properties such\n"
  "as conservation of mass. Therefore subclasses of this kernel are not\n"
  "generally applicable for interpolation processes, and therefore\n"
  "operate in conjunction with the vthSPHInterpolator class.\n\n"
  "By default the kernel computes local particle volume from the spatial\n"
  "step^3. However, if both an optional mass and density arrays are\n"
  "provided then they are used to compute local volume.\n\n"
  "Also be default, the local neighborhood around a point to be\n"
  "interpolated is computed as the CutoffFactor * SpatialStep. (Note the\n"
  "CutoffFactor varies for each type of SPH kernel.) However, the user\n"
  "may specify a CutoffArray which enables variable cutoff distances per\n"
  "each point.\n\n"
  "@warning\n"
  "For more information see D.J. Price, Smoothed particle hydrodynamics\n"
  "and magnetohydrodynamics, J. Comput. Phys. 231:759-794, 2012.\n"
  "Especially equation 49.\n\n"
  "@par Acknowledgments: The following work has been generously\n"
  "supported by Altair Engineering and FluiDyna GmbH. Please contact\n"
  "Steve Cosgrove or Milos Stanic for more information.\n\n"
  "@sa\n"
  "vtkSPHKernel vtkSPHQuinticKernel vtkInterpolationKernel\n"
  "vtkGaussianKernel vtkShepardKernel vtkLinearKernel\n\n";


static PyObject *
PyvtkSPHKernel_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSPHKernel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSPHKernel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSPHKernel *tempr = vtkSPHKernel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSPHKernel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSPHKernel::NewInstance());

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
PyvtkSPHKernel_SetSpatialStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpatialStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpatialStep(temp0);
    }
    else
    {
      op->vtkSPHKernel::SetSpatialStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_GetSpatialStepMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialStepMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpatialStepMinValue() :
      op->vtkSPHKernel::GetSpatialStepMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_GetSpatialStepMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialStepMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpatialStepMaxValue() :
      op->vtkSPHKernel::GetSpatialStepMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_GetSpatialStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpatialStep() :
      op->vtkSPHKernel::GetSpatialStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimension(temp0);
    }
    else
    {
      op->vtkSPHKernel::SetDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_GetDimensionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionMinValue() :
      op->vtkSPHKernel::GetDimensionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_GetDimensionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionMaxValue() :
      op->vtkSPHKernel::GetDimensionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkSPHKernel::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_GetCutoffFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutoffFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCutoffFactor() :
      op->vtkSPHKernel::GetCutoffFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_SetCutoffArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutoffArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetCutoffArray(temp0);
    }
    else
    {
      op->vtkSPHKernel::SetCutoffArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_GetCutoffArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutoffArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetCutoffArray() :
      op->vtkSPHKernel::GetCutoffArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_SetDensityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetDensityArray(temp0);
    }
    else
    {
      op->vtkSPHKernel::SetDensityArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_GetDensityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDensityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetDensityArray() :
      op->vtkSPHKernel::GetDensityArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_SetMassArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMassArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetMassArray(temp0);
    }
    else
    {
      op->vtkSPHKernel::SetMassArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_GetMassArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetMassArray() :
      op->vtkSPHKernel::GetMassArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  vtkDataSet *temp1 = nullptr;
  vtkPointData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkPointData"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSPHKernel::Initialize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_ComputeBasis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBasis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkIdType temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->ComputeBasis(temp0, temp1, temp2) :
      op->vtkSPHKernel::ComputeBasis(temp0, temp1, temp2));

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
PyvtkSPHKernel_ComputeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray"))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->ComputeWeights(temp0, temp1, temp2) :
      op->vtkSPHKernel::ComputeWeights(temp0, temp1, temp2));

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
PyvtkSPHKernel_ComputeDerivWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDerivWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  vtkDoubleArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkDoubleArray"))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->ComputeDerivWeights(temp0, temp1, temp2, temp3) :
      op->vtkSPHKernel::ComputeDerivWeights(temp0, temp1, temp2, temp3));

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
PyvtkSPHKernel_ComputeFunctionWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeFunctionWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = op->ComputeFunctionWeight(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_ComputeDerivWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDerivWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = op->ComputeDerivWeight(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHKernel_GetNormFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHKernel *op = static_cast<vtkSPHKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNormFactor() :
      op->vtkSPHKernel::GetNormFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSPHKernel_Methods[] = {
  {"IsTypeOf", PyvtkSPHKernel_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"IsA", PyvtkSPHKernel_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"SafeDownCast", PyvtkSPHKernel_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSPHKernel\nC++: static vtkSPHKernel *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"NewInstance", PyvtkSPHKernel_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSPHKernel\nC++: vtkSPHKernel *NewInstance()\n\nStandard methods for instantiation, obtaining type information,\nand printing.\n"},
  {"SetSpatialStep", PyvtkSPHKernel_SetSpatialStep, METH_VARARGS,
   "V.SetSpatialStep(float)\nC++: virtual void SetSpatialStep(double _arg)\n\nThe user defined initial particle spatial step. This is also\nreferred to as the smoothing length.\n"},
  {"GetSpatialStepMinValue", PyvtkSPHKernel_GetSpatialStepMinValue, METH_VARARGS,
   "V.GetSpatialStepMinValue() -> float\nC++: virtual double GetSpatialStepMinValue()\n\nThe user defined initial particle spatial step. This is also\nreferred to as the smoothing length.\n"},
  {"GetSpatialStepMaxValue", PyvtkSPHKernel_GetSpatialStepMaxValue, METH_VARARGS,
   "V.GetSpatialStepMaxValue() -> float\nC++: virtual double GetSpatialStepMaxValue()\n\nThe user defined initial particle spatial step. This is also\nreferred to as the smoothing length.\n"},
  {"GetSpatialStep", PyvtkSPHKernel_GetSpatialStep, METH_VARARGS,
   "V.GetSpatialStep() -> float\nC++: virtual double GetSpatialStep()\n\nThe user defined initial particle spatial step. This is also\nreferred to as the smoothing length.\n"},
  {"SetDimension", PyvtkSPHKernel_SetDimension, METH_VARARGS,
   "V.SetDimension(int)\nC++: virtual void SetDimension(int _arg)\n\nThe domain dimension, default to 3.\n"},
  {"GetDimensionMinValue", PyvtkSPHKernel_GetDimensionMinValue, METH_VARARGS,
   "V.GetDimensionMinValue() -> int\nC++: virtual int GetDimensionMinValue()\n\nThe domain dimension, default to 3.\n"},
  {"GetDimensionMaxValue", PyvtkSPHKernel_GetDimensionMaxValue, METH_VARARGS,
   "V.GetDimensionMaxValue() -> int\nC++: virtual int GetDimensionMaxValue()\n\nThe domain dimension, default to 3.\n"},
  {"GetDimension", PyvtkSPHKernel_GetDimension, METH_VARARGS,
   "V.GetDimension() -> int\nC++: virtual int GetDimension()\n\nThe domain dimension, default to 3.\n"},
  {"GetCutoffFactor", PyvtkSPHKernel_GetCutoffFactor, METH_VARARGS,
   "V.GetCutoffFactor() -> float\nC++: virtual double GetCutoffFactor()\n\nReturn the cutoff factor. This is hard wired into the kernel\n(e.g., the vtkSPHQuinticKernel has a cutoff factor = 3.0).\n"},
  {"SetCutoffArray", PyvtkSPHKernel_SetCutoffArray, METH_VARARGS,
   "V.SetCutoffArray(vtkDataArray)\nC++: virtual void SetCutoffArray(vtkDataArray *)\n\nSpecify the (optional) array defining a cutoff distance. If\nprovided this distance is used to find the interpolating points\nwithin the local neighborbood. Otherwise the cutoff distance is\ndefined as the cutoff factor times the spatial step size.\n"},
  {"GetCutoffArray", PyvtkSPHKernel_GetCutoffArray, METH_VARARGS,
   "V.GetCutoffArray() -> vtkDataArray\nC++: virtual vtkDataArray *GetCutoffArray()\n\nSpecify the (optional) array defining a cutoff distance. If\nprovided this distance is used to find the interpolating points\nwithin the local neighborbood. Otherwise the cutoff distance is\ndefined as the cutoff factor times the spatial step size.\n"},
  {"SetDensityArray", PyvtkSPHKernel_SetDensityArray, METH_VARARGS,
   "V.SetDensityArray(vtkDataArray)\nC++: virtual void SetDensityArray(vtkDataArray *)\n\nSpecify the (optional) density array. Used with the mass array to\ncompute local particle volumes.\n"},
  {"GetDensityArray", PyvtkSPHKernel_GetDensityArray, METH_VARARGS,
   "V.GetDensityArray() -> vtkDataArray\nC++: virtual vtkDataArray *GetDensityArray()\n\nSpecify the (optional) density array. Used with the mass array to\ncompute local particle volumes.\n"},
  {"SetMassArray", PyvtkSPHKernel_SetMassArray, METH_VARARGS,
   "V.SetMassArray(vtkDataArray)\nC++: virtual void SetMassArray(vtkDataArray *)\n\nSpecify the (optional) mass array. Used with the density array to\ncompute local particle volumes.\n"},
  {"GetMassArray", PyvtkSPHKernel_GetMassArray, METH_VARARGS,
   "V.GetMassArray() -> vtkDataArray\nC++: virtual vtkDataArray *GetMassArray()\n\nSpecify the (optional) mass array. Used with the density array to\ncompute local particle volumes.\n"},
  {"Initialize", PyvtkSPHKernel_Initialize, METH_VARARGS,
   "V.Initialize(vtkAbstractPointLocator, vtkDataSet, vtkPointData)\nC++: void Initialize(vtkAbstractPointLocator *loc, vtkDataSet *ds,\n     vtkPointData *pd) override;\n\nProduce the computational parameters for the kernel. Invoke this\nmethod after setting initial values like SpatialStep.\n"},
  {"ComputeBasis", PyvtkSPHKernel_ComputeBasis, METH_VARARGS,
   "V.ComputeBasis([float, float, float], vtkIdList, int) -> int\nC++: vtkIdType ComputeBasis(double x[3], vtkIdList *pIds,\n    vtkIdType ptId=0) override;\n\nGiven a point x (and optional associated ptId), determine the\npoints around x which form an interpolation basis. The user must\nprovide the vtkIdList pIds, which will be dynamically resized as\nnecessary. The method returns the number of points in the basis.\nTypically this method is called before ComputeWeights(). Note\nthat while ptId is optional in most cases, if a cutoff array is\nprovided, then ptId must be provided.\n"},
  {"ComputeWeights", PyvtkSPHKernel_ComputeWeights, METH_VARARGS,
   "V.ComputeWeights([float, float, float], vtkIdList, vtkDoubleArray)\n     -> int\nC++: vtkIdType ComputeWeights(double x[3], vtkIdList *pIds,\n    vtkDoubleArray *weights) override;\n\nGiven a point x, and a list of basis points pIds, compute\ninterpolation weights associated with these basis points.\n"},
  {"ComputeDerivWeights", PyvtkSPHKernel_ComputeDerivWeights, METH_VARARGS,
   "V.ComputeDerivWeights([float, float, float], vtkIdList,\n    vtkDoubleArray, vtkDoubleArray) -> int\nC++: virtual vtkIdType ComputeDerivWeights(double x[3],\n    vtkIdList *pIds, vtkDoubleArray *weights,\n    vtkDoubleArray *gradWeights)\n\nGiven a point x, and a list of basis points pIds, compute\ninterpolation weights, plus derivative weights, associated with\nthese basis points.\n"},
  {"ComputeFunctionWeight", PyvtkSPHKernel_ComputeFunctionWeight, METH_VARARGS,
   "V.ComputeFunctionWeight(float) -> float\nC++: virtual double ComputeFunctionWeight(const double d)\n\nCompute weighting factor given a normalized distance from a\nsample point.\n"},
  {"ComputeDerivWeight", PyvtkSPHKernel_ComputeDerivWeight, METH_VARARGS,
   "V.ComputeDerivWeight(float) -> float\nC++: virtual double ComputeDerivWeight(const double d)\n\nCompute weighting factor for derivative quantities given a\nnormalized distance from a sample point.\n"},
  {"GetNormFactor", PyvtkSPHKernel_GetNormFactor, METH_VARARGS,
   "V.GetNormFactor() -> float\nC++: virtual double GetNormFactor()\n\nReturn the SPH normalization factor. This also includes the\ncontribution of 1/h^d, where h is the smoothing length (i.e.,\nspatial step) and d is the dimension of the kernel. The returned\nvalue is only valid after the kernel is initialized.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSPHKernel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkSPHKernel", // tp_name
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
  PyvtkSPHKernel_Doc, // tp_doc
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

PyObject *PyvtkSPHKernel_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSPHKernel_Type, PyvtkSPHKernel_Methods,
    "vtkSPHKernel",
 nullptr);

  PyTypeObject *pytype = &PyvtkSPHKernel_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInterpolationKernel_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSPHKernel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSPHKernel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSPHKernel", o) != 0)
  {
    Py_DECREF(o);
  }

}

